// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ES-SERVERLESS20220822_H_
#define ALIBABACLOUD_ES-SERVERLESS20220822_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Es-serverless20220822 {
class DataStreamMapping : public Darabonba::Model {
public:
  shared_ptr<bool> caseSensitive{};
  shared_ptr<bool> docValues{};
  shared_ptr<bool> index{};
  shared_ptr<string> key{};
  shared_ptr<vector<DataStreamMapping>> properties{};
  shared_ptr<vector<string>> tokenizeOnChars{};
  shared_ptr<string> type{};

  DataStreamMapping() {}

  explicit DataStreamMapping(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseSensitive) {
      res["caseSensitive"] = boost::any(*caseSensitive);
    }
    if (docValues) {
      res["docValues"] = boost::any(*docValues);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (properties) {
      vector<boost::any> temp1;
      for(auto item1:*properties){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["properties"] = boost::any(temp1);
    }
    if (tokenizeOnChars) {
      res["tokenizeOnChars"] = boost::any(*tokenizeOnChars);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caseSensitive") != m.end() && !m["caseSensitive"].empty()) {
      caseSensitive = make_shared<bool>(boost::any_cast<bool>(m["caseSensitive"]));
    }
    if (m.find("docValues") != m.end() && !m["docValues"].empty()) {
      docValues = make_shared<bool>(boost::any_cast<bool>(m["docValues"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<bool>(boost::any_cast<bool>(m["index"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      if (typeid(vector<boost::any>) == m["properties"].type()) {
        vector<DataStreamMapping> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["properties"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataStreamMapping model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        properties = make_shared<vector<DataStreamMapping>>(expect1);
      }
    }
    if (m.find("tokenizeOnChars") != m.end() && !m["tokenizeOnChars"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tokenizeOnChars"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tokenizeOnChars"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tokenizeOnChars = make_shared<vector<string>>(toVec1);
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DataStreamMapping() = default;
};
class CreateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> description{};

  CreateAppRequest() {}

  explicit CreateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["appName"] = boost::any(*appName);
    }
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appName") != m.end() && !m["appName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["appName"]));
    }
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
  }


  virtual ~CreateAppRequest() = default;
};
class CreateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateAppResponseBody() {}

  explicit CreateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppResponse() = default;
};
class CreateDataStreamRequestTemplate : public Darabonba::Model {
public:
  shared_ptr<vector<DataStreamMapping>> mappings{};

  CreateDataStreamRequestTemplate() {}

  explicit CreateDataStreamRequestTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mappings) {
      vector<boost::any> temp1;
      for(auto item1:*mappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mappings") != m.end() && !m["mappings"].empty()) {
      if (typeid(vector<boost::any>) == m["mappings"].type()) {
        vector<DataStreamMapping> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataStreamMapping model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mappings = make_shared<vector<DataStreamMapping>>(expect1);
      }
    }
  }


  virtual ~CreateDataStreamRequestTemplate() = default;
};
class CreateDataStreamRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataStreamName{};
  shared_ptr<string> deletePhase{};
  shared_ptr<string> dynamic{};
  shared_ptr<string> regionId{};
  shared_ptr<CreateDataStreamRequestTemplate> template_{};
  shared_ptr<string> timeStampKey{};
  shared_ptr<string> type{};

  CreateDataStreamRequest() {}

  explicit CreateDataStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataStreamName) {
      res["dataStreamName"] = boost::any(*dataStreamName);
    }
    if (deletePhase) {
      res["deletePhase"] = boost::any(*deletePhase);
    }
    if (dynamic) {
      res["dynamic"] = boost::any(*dynamic);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (template_) {
      res["template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timeStampKey) {
      res["timeStampKey"] = boost::any(*timeStampKey);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataStreamName") != m.end() && !m["dataStreamName"].empty()) {
      dataStreamName = make_shared<string>(boost::any_cast<string>(m["dataStreamName"]));
    }
    if (m.find("deletePhase") != m.end() && !m["deletePhase"].empty()) {
      deletePhase = make_shared<string>(boost::any_cast<string>(m["deletePhase"]));
    }
    if (m.find("dynamic") != m.end() && !m["dynamic"].empty()) {
      dynamic = make_shared<string>(boost::any_cast<string>(m["dynamic"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      if (typeid(map<string, boost::any>) == m["template"].type()) {
        CreateDataStreamRequestTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["template"]));
        template_ = make_shared<CreateDataStreamRequestTemplate>(model1);
      }
    }
    if (m.find("timeStampKey") != m.end() && !m["timeStampKey"].empty()) {
      timeStampKey = make_shared<string>(boost::any_cast<string>(m["timeStampKey"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateDataStreamRequest() = default;
};
class CreateDataStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateDataStreamResponseBody() {}

  explicit CreateDataStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDataStreamResponseBody() = default;
};
class CreateDataStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDataStreamResponseBody> body{};

  CreateDataStreamResponse() {}

  explicit CreateDataStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDataStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataStreamResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataStreamResponse() = default;
};
class DeleteAccessTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAccessTokenResponseBody() {}

  explicit DeleteAccessTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAccessTokenResponseBody() = default;
};
class DeleteAccessTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAccessTokenResponseBody> body{};

  DeleteAccessTokenResponse() {}

  explicit DeleteAccessTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccessTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccessTokenResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccessTokenResponse() = default;
};
class DeleteAppResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteAppResponseBodyResult() {}

  explicit DeleteAppResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAppResponseBodyResult() = default;
};
class DeleteAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DeleteAppResponseBodyResult> result{};

  DeleteAppResponseBody() {}

  explicit DeleteAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DeleteAppResponseBodyResult>(model1);
      }
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
        DeleteAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppResponse() = default;
};
class DeleteDataStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  DeleteDataStreamResponseBody() {}

  explicit DeleteDataStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~DeleteDataStreamResponseBody() = default;
};
class DeleteDataStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDataStreamResponseBody> body{};

  DeleteDataStreamResponse() {}

  explicit DeleteDataStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDataStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDataStreamResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDataStreamResponse() = default;
};
class DescibeRegionsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  DescibeRegionsResponseBodyResult() {}

  explicit DescibeRegionsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescibeRegionsResponseBodyResult() = default;
};
class DescibeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescibeRegionsResponseBodyResult>> result{};

  DescibeRegionsResponseBody() {}

  explicit DescibeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescibeRegionsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescibeRegionsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescibeRegionsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~DescibeRegionsResponseBody() = default;
};
class DescibeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescibeRegionsResponseBody> body{};

  DescibeRegionsResponse() {}

  explicit DescibeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescibeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescibeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescibeRegionsResponse() = default;
};
class DisableAccessTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableAccessTokenResponseBody() {}

  explicit DisableAccessTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableAccessTokenResponseBody() = default;
};
class DisableAccessTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableAccessTokenResponseBody> body{};

  DisableAccessTokenResponse() {}

  explicit DisableAccessTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableAccessTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableAccessTokenResponseBody>(model1);
      }
    }
  }


  virtual ~DisableAccessTokenResponse() = default;
};
class EnableAccessTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableAccessTokenResponseBody() {}

  explicit EnableAccessTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableAccessTokenResponseBody() = default;
};
class EnableAccessTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableAccessTokenResponseBody> body{};

  EnableAccessTokenResponse() {}

  explicit EnableAccessTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableAccessTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableAccessTokenResponseBody>(model1);
      }
    }
  }


  virtual ~EnableAccessTokenResponse() = default;
};
class GenerateAcccessTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GenerateAcccessTokenResponseBody() {}

  explicit GenerateAcccessTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GenerateAcccessTokenResponseBody() = default;
};
class GenerateAcccessTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateAcccessTokenResponseBody> body{};

  GenerateAcccessTokenResponse() {}

  explicit GenerateAcccessTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateAcccessTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateAcccessTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateAcccessTokenResponse() = default;
};
class GetAppResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> flowQuota{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> storageQuota{};

  GetAppResponseBodyResult() {}

  explicit GetAppResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["appName"] = boost::any(*appName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (flowQuota) {
      res["flowQuota"] = boost::any(*flowQuota);
    }
    if (ownerId) {
      res["ownerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (storageQuota) {
      res["storageQuota"] = boost::any(*storageQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appName") != m.end() && !m["appName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["appName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("flowQuota") != m.end() && !m["flowQuota"].empty()) {
      flowQuota = make_shared<string>(boost::any_cast<string>(m["flowQuota"]));
    }
    if (m.find("ownerId") != m.end() && !m["ownerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["ownerId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("storageQuota") != m.end() && !m["storageQuota"].empty()) {
      storageQuota = make_shared<string>(boost::any_cast<string>(m["storageQuota"]));
    }
  }


  virtual ~GetAppResponseBodyResult() = default;
};
class GetAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAppResponseBodyResult> result{};

  GetAppResponseBody() {}

  explicit GetAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetAppResponseBodyResult>(model1);
      }
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
        GetAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppResponse() = default;
};
class GetDataStreamResponseBodyResultTemplate : public Darabonba::Model {
public:
  shared_ptr<vector<DataStreamMapping>> mappings{};

  GetDataStreamResponseBodyResultTemplate() {}

  explicit GetDataStreamResponseBodyResultTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mappings) {
      vector<boost::any> temp1;
      for(auto item1:*mappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mappings") != m.end() && !m["mappings"].empty()) {
      if (typeid(vector<boost::any>) == m["mappings"].type()) {
        vector<DataStreamMapping> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataStreamMapping model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mappings = make_shared<vector<DataStreamMapping>>(expect1);
      }
    }
  }


  virtual ~GetDataStreamResponseBodyResultTemplate() = default;
};
class GetDataStreamResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dataStreamId{};
  shared_ptr<string> dataStreamName{};
  shared_ptr<string> deletePhase{};
  shared_ptr<string> regionId{};
  shared_ptr<GetDataStreamResponseBodyResultTemplate> template_{};
  shared_ptr<string> timeStampKey{};
  shared_ptr<string> type{};

  GetDataStreamResponseBodyResult() {}

  explicit GetDataStreamResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["appName"] = boost::any(*appName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dataStreamId) {
      res["dataStreamId"] = boost::any(*dataStreamId);
    }
    if (dataStreamName) {
      res["dataStreamName"] = boost::any(*dataStreamName);
    }
    if (deletePhase) {
      res["deletePhase"] = boost::any(*deletePhase);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (template_) {
      res["template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timeStampKey) {
      res["timeStampKey"] = boost::any(*timeStampKey);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appName") != m.end() && !m["appName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["appName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("dataStreamId") != m.end() && !m["dataStreamId"].empty()) {
      dataStreamId = make_shared<string>(boost::any_cast<string>(m["dataStreamId"]));
    }
    if (m.find("dataStreamName") != m.end() && !m["dataStreamName"].empty()) {
      dataStreamName = make_shared<string>(boost::any_cast<string>(m["dataStreamName"]));
    }
    if (m.find("deletePhase") != m.end() && !m["deletePhase"].empty()) {
      deletePhase = make_shared<string>(boost::any_cast<string>(m["deletePhase"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      if (typeid(map<string, boost::any>) == m["template"].type()) {
        GetDataStreamResponseBodyResultTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["template"]));
        template_ = make_shared<GetDataStreamResponseBodyResultTemplate>(model1);
      }
    }
    if (m.find("timeStampKey") != m.end() && !m["timeStampKey"].empty()) {
      timeStampKey = make_shared<string>(boost::any_cast<string>(m["timeStampKey"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetDataStreamResponseBodyResult() = default;
};
class GetDataStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetDataStreamResponseBodyResult> result{};

  GetDataStreamResponseBody() {}

  explicit GetDataStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataStreamResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetDataStreamResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetDataStreamResponseBody() = default;
};
class GetDataStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataStreamResponseBody> body{};

  GetDataStreamResponse() {}

  explicit GetDataStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataStreamResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataStreamResponse() = default;
};
class GetRegionInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GetRegionInfoResponseBody() {}

  explicit GetRegionInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetRegionInfoResponseBody() = default;
};
class GetRegionInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRegionInfoResponseBody> body{};

  GetRegionInfoResponse() {}

  explicit GetRegionInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRegionInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRegionInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetRegionInfoResponse() = default;
};
class ListAccessTokensRequest : public Darabonba::Model {
public:
  shared_ptr<string> tokenId{};

  ListAccessTokensRequest() {}

  explicit ListAccessTokensRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tokenId) {
      res["tokenId"] = boost::any(*tokenId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tokenId") != m.end() && !m["tokenId"].empty()) {
      tokenId = make_shared<string>(boost::any_cast<string>(m["tokenId"]));
    }
  }


  virtual ~ListAccessTokensRequest() = default;
};
class ListAccessTokensResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ListAccessTokensResponseBody() {}

  explicit ListAccessTokensResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAccessTokensResponseBody() = default;
};
class ListAccessTokensResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccessTokensResponseBody> body{};

  ListAccessTokensResponse() {}

  explicit ListAccessTokensResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccessTokensResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccessTokensResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccessTokensResponse() = default;
};
class ListAppsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> description{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAppsRequest() {}

  explicit ListAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["appName"] = boost::any(*appName);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appName") != m.end() && !m["appName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["appName"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListAppsRequest() = default;
};
class ListAppsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> flowQuota{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> storageQuota{};

  ListAppsResponseBodyResult() {}

  explicit ListAppsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["appName"] = boost::any(*appName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (flowQuota) {
      res["flowQuota"] = boost::any(*flowQuota);
    }
    if (ownerId) {
      res["ownerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (storageQuota) {
      res["storageQuota"] = boost::any(*storageQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appName") != m.end() && !m["appName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["appName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("flowQuota") != m.end() && !m["flowQuota"].empty()) {
      flowQuota = make_shared<string>(boost::any_cast<string>(m["flowQuota"]));
    }
    if (m.find("ownerId") != m.end() && !m["ownerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["ownerId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("storageQuota") != m.end() && !m["storageQuota"].empty()) {
      storageQuota = make_shared<string>(boost::any_cast<string>(m["storageQuota"]));
    }
  }


  virtual ~ListAppsResponseBodyResult() = default;
};
class ListAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAppsResponseBodyResult>> result{};
  shared_ptr<long> totalCount{};

  ListAppsResponseBody() {}

  explicit ListAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListAppsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListAppsResponseBodyResult>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
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
        ListAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppsResponse() = default;
};
class ListDataStreamsRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataStreamName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  ListDataStreamsRequest() {}

  explicit ListDataStreamsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataStreamName) {
      res["dataStreamName"] = boost::any(*dataStreamName);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataStreamName") != m.end() && !m["dataStreamName"].empty()) {
      dataStreamName = make_shared<string>(boost::any_cast<string>(m["dataStreamName"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~ListDataStreamsRequest() = default;
};
class ListDataStreamsResponseBodyResultTemplate : public Darabonba::Model {
public:
  shared_ptr<vector<DataStreamMapping>> mappings{};

  ListDataStreamsResponseBodyResultTemplate() {}

  explicit ListDataStreamsResponseBodyResultTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mappings) {
      vector<boost::any> temp1;
      for(auto item1:*mappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mappings") != m.end() && !m["mappings"].empty()) {
      if (typeid(vector<boost::any>) == m["mappings"].type()) {
        vector<DataStreamMapping> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataStreamMapping model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mappings = make_shared<vector<DataStreamMapping>>(expect1);
      }
    }
  }


  virtual ~ListDataStreamsResponseBodyResultTemplate() = default;
};
class ListDataStreamsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dataStreamId{};
  shared_ptr<string> dataStreamName{};
  shared_ptr<string> deletePhase{};
  shared_ptr<string> regionId{};
  shared_ptr<ListDataStreamsResponseBodyResultTemplate> template_{};
  shared_ptr<string> timeStampKey{};
  shared_ptr<string> type{};

  ListDataStreamsResponseBodyResult() {}

  explicit ListDataStreamsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["appName"] = boost::any(*appName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dataStreamId) {
      res["dataStreamId"] = boost::any(*dataStreamId);
    }
    if (dataStreamName) {
      res["dataStreamName"] = boost::any(*dataStreamName);
    }
    if (deletePhase) {
      res["deletePhase"] = boost::any(*deletePhase);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (template_) {
      res["template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timeStampKey) {
      res["timeStampKey"] = boost::any(*timeStampKey);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appName") != m.end() && !m["appName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["appName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("dataStreamId") != m.end() && !m["dataStreamId"].empty()) {
      dataStreamId = make_shared<string>(boost::any_cast<string>(m["dataStreamId"]));
    }
    if (m.find("dataStreamName") != m.end() && !m["dataStreamName"].empty()) {
      dataStreamName = make_shared<string>(boost::any_cast<string>(m["dataStreamName"]));
    }
    if (m.find("deletePhase") != m.end() && !m["deletePhase"].empty()) {
      deletePhase = make_shared<string>(boost::any_cast<string>(m["deletePhase"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      if (typeid(map<string, boost::any>) == m["template"].type()) {
        ListDataStreamsResponseBodyResultTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["template"]));
        template_ = make_shared<ListDataStreamsResponseBodyResultTemplate>(model1);
      }
    }
    if (m.find("timeStampKey") != m.end() && !m["timeStampKey"].empty()) {
      timeStampKey = make_shared<string>(boost::any_cast<string>(m["timeStampKey"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListDataStreamsResponseBodyResult() = default;
};
class ListDataStreamsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDataStreamsResponseBodyResult>> result{};
  shared_ptr<long> totalCount{};

  ListDataStreamsResponseBody() {}

  explicit ListDataStreamsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListDataStreamsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataStreamsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDataStreamsResponseBodyResult>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListDataStreamsResponseBody() = default;
};
class ListDataStreamsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataStreamsResponseBody> body{};

  ListDataStreamsResponse() {}

  explicit ListDataStreamsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDataStreamsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataStreamsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataStreamsResponse() = default;
};
class UpdateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};

  UpdateAppRequest() {}

  explicit UpdateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAppRequest() = default;
};
class UpdateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAppResponseBody() {}

  explicit UpdateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppResponse() = default;
};
class UpdateDataStreamRequestTemplate : public Darabonba::Model {
public:
  shared_ptr<vector<DataStreamMapping>> mappings{};

  UpdateDataStreamRequestTemplate() {}

  explicit UpdateDataStreamRequestTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mappings) {
      vector<boost::any> temp1;
      for(auto item1:*mappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mappings") != m.end() && !m["mappings"].empty()) {
      if (typeid(vector<boost::any>) == m["mappings"].type()) {
        vector<DataStreamMapping> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataStreamMapping model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mappings = make_shared<vector<DataStreamMapping>>(expect1);
      }
    }
  }


  virtual ~UpdateDataStreamRequestTemplate() = default;
};
class UpdateDataStreamRequest : public Darabonba::Model {
public:
  shared_ptr<string> deletePhase{};
  shared_ptr<string> dynamic{};
  shared_ptr<UpdateDataStreamRequestTemplate> template_{};
  shared_ptr<string> timeStampKey{};

  UpdateDataStreamRequest() {}

  explicit UpdateDataStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletePhase) {
      res["deletePhase"] = boost::any(*deletePhase);
    }
    if (dynamic) {
      res["dynamic"] = boost::any(*dynamic);
    }
    if (template_) {
      res["template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timeStampKey) {
      res["timeStampKey"] = boost::any(*timeStampKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deletePhase") != m.end() && !m["deletePhase"].empty()) {
      deletePhase = make_shared<string>(boost::any_cast<string>(m["deletePhase"]));
    }
    if (m.find("dynamic") != m.end() && !m["dynamic"].empty()) {
      dynamic = make_shared<string>(boost::any_cast<string>(m["dynamic"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      if (typeid(map<string, boost::any>) == m["template"].type()) {
        UpdateDataStreamRequestTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["template"]));
        template_ = make_shared<UpdateDataStreamRequestTemplate>(model1);
      }
    }
    if (m.find("timeStampKey") != m.end() && !m["timeStampKey"].empty()) {
      timeStampKey = make_shared<string>(boost::any_cast<string>(m["timeStampKey"]));
    }
  }


  virtual ~UpdateDataStreamRequest() = default;
};
class UpdateDataStreamResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appName{};

  UpdateDataStreamResponseBodyResult() {}

  explicit UpdateDataStreamResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["appName"] = boost::any(*appName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appName") != m.end() && !m["appName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["appName"]));
    }
  }


  virtual ~UpdateDataStreamResponseBodyResult() = default;
};
class UpdateDataStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateDataStreamResponseBodyResult> result{};

  UpdateDataStreamResponseBody() {}

  explicit UpdateDataStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDataStreamResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<UpdateDataStreamResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateDataStreamResponseBody() = default;
};
class UpdateDataStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDataStreamResponseBody> body{};

  UpdateDataStreamResponse() {}

  explicit UpdateDataStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDataStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDataStreamResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDataStreamResponse() = default;
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
  CreateAppResponse createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppResponse createApp(shared_ptr<CreateAppRequest> request);
  CreateDataStreamResponse createDataStreamWithOptions(shared_ptr<string> appName,
                                                       shared_ptr<CreateDataStreamRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataStreamResponse createDataStream(shared_ptr<string> appName, shared_ptr<CreateDataStreamRequest> request);
  DeleteAccessTokenResponse deleteAccessTokenWithOptions(shared_ptr<string> tokenId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessTokenResponse deleteAccessToken(shared_ptr<string> tokenId);
  DeleteAppResponse deleteAppWithOptions(shared_ptr<string> appName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppResponse deleteApp(shared_ptr<string> appName);
  DeleteDataStreamResponse deleteDataStreamWithOptions(shared_ptr<string> appName,
                                                       shared_ptr<string> dataStreamName,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataStreamResponse deleteDataStream(shared_ptr<string> appName, shared_ptr<string> dataStreamName);
  DescibeRegionsResponse descibeRegionsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescibeRegionsResponse descibeRegions();
  DisableAccessTokenResponse disableAccessTokenWithOptions(shared_ptr<string> tokenId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableAccessTokenResponse disableAccessToken(shared_ptr<string> tokenId);
  EnableAccessTokenResponse enableAccessTokenWithOptions(shared_ptr<string> tokenId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableAccessTokenResponse enableAccessToken(shared_ptr<string> tokenId);
  GenerateAcccessTokenResponse generateAcccessTokenWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateAcccessTokenResponse generateAcccessToken();
  GetAppResponse getAppWithOptions(shared_ptr<string> appName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppResponse getApp(shared_ptr<string> appName);
  GetDataStreamResponse getDataStreamWithOptions(shared_ptr<string> appName,
                                                 shared_ptr<string> dataStreamName,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataStreamResponse getDataStream(shared_ptr<string> appName, shared_ptr<string> dataStreamName);
  GetRegionInfoResponse getRegionInfoWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRegionInfoResponse getRegionInfo();
  ListAccessTokensResponse listAccessTokensWithOptions(shared_ptr<ListAccessTokensRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccessTokensResponse listAccessTokens(shared_ptr<ListAccessTokensRequest> request);
  ListAppsResponse listAppsWithOptions(shared_ptr<ListAppsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppsResponse listApps(shared_ptr<ListAppsRequest> request);
  ListDataStreamsResponse listDataStreamsWithOptions(shared_ptr<string> appName,
                                                     shared_ptr<ListDataStreamsRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataStreamsResponse listDataStreams(shared_ptr<string> appName, shared_ptr<ListDataStreamsRequest> request);
  UpdateAppResponse updateAppWithOptions(shared_ptr<string> appName,
                                         shared_ptr<UpdateAppRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppResponse updateApp(shared_ptr<string> appName, shared_ptr<UpdateAppRequest> request);
  UpdateDataStreamResponse updateDataStreamWithOptions(shared_ptr<string> dataStreamName,
                                                       shared_ptr<string> appName,
                                                       shared_ptr<UpdateDataStreamRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDataStreamResponse updateDataStream(shared_ptr<string> dataStreamName, shared_ptr<string> appName, shared_ptr<UpdateDataStreamRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Es-serverless20220822

#endif
