// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DATAANALYSISGBI20240823_H_
#define ALIBABACLOUD_DATAANALYSISGBI20240823_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_DataAnalysisGBI20240823 {
class RunDataAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<bool> generateSqlOnly{};
  shared_ptr<string> query{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> specificationType{};

  RunDataAnalysisRequest() {}

  explicit RunDataAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateSqlOnly) {
      res["generateSqlOnly"] = boost::any(*generateSqlOnly);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (specificationType) {
      res["specificationType"] = boost::any(*specificationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateSqlOnly") != m.end() && !m["generateSqlOnly"].empty()) {
      generateSqlOnly = make_shared<bool>(boost::any_cast<bool>(m["generateSqlOnly"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("specificationType") != m.end() && !m["specificationType"].empty()) {
      specificationType = make_shared<string>(boost::any_cast<string>(m["specificationType"]));
    }
  }


  virtual ~RunDataAnalysisRequest() = default;
};
class RunDataAnalysisResponseBodyDataSqlData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> column{};
  shared_ptr<vector<map<string, boost::any>>> data{};

  RunDataAnalysisResponseBodyDataSqlData() {}

  explicit RunDataAnalysisResponseBodyDataSqlData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      res["column"] = boost::any(*column);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("column") != m.end() && !m["column"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["column"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["column"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      column = make_shared<vector<string>>(toVec1);
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["data"]);
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
  }


  virtual ~RunDataAnalysisResponseBodyDataSqlData() = default;
};
class RunDataAnalysisResponseBodyDataVisualizationData : public Darabonba::Model {
public:
  shared_ptr<string> plotType{};
  shared_ptr<vector<string>> xAxis{};
  shared_ptr<vector<string>> yAxis{};

  RunDataAnalysisResponseBodyDataVisualizationData() {}

  explicit RunDataAnalysisResponseBodyDataVisualizationData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (plotType) {
      res["plotType"] = boost::any(*plotType);
    }
    if (xAxis) {
      res["xAxis"] = boost::any(*xAxis);
    }
    if (yAxis) {
      res["yAxis"] = boost::any(*yAxis);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("plotType") != m.end() && !m["plotType"].empty()) {
      plotType = make_shared<string>(boost::any_cast<string>(m["plotType"]));
    }
    if (m.find("xAxis") != m.end() && !m["xAxis"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["xAxis"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["xAxis"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      xAxis = make_shared<vector<string>>(toVec1);
    }
    if (m.find("yAxis") != m.end() && !m["yAxis"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["yAxis"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["yAxis"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      yAxis = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RunDataAnalysisResponseBodyDataVisualizationData() = default;
};
class RunDataAnalysisResponseBodyDataVisualization : public Darabonba::Model {
public:
  shared_ptr<RunDataAnalysisResponseBodyDataVisualizationData> data{};
  shared_ptr<string> text{};

  RunDataAnalysisResponseBodyDataVisualization() {}

  explicit RunDataAnalysisResponseBodyDataVisualization(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RunDataAnalysisResponseBodyDataVisualizationData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RunDataAnalysisResponseBodyDataVisualizationData>(model1);
      }
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunDataAnalysisResponseBodyDataVisualization() = default;
};
class RunDataAnalysisResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> evidence{};
  shared_ptr<string> requestId{};
  shared_ptr<string> rewrite{};
  shared_ptr<vector<string>> selector{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> sql{};
  shared_ptr<RunDataAnalysisResponseBodyDataSqlData> sqlData{};
  shared_ptr<string> sqlError{};
  shared_ptr<RunDataAnalysisResponseBodyDataVisualization> visualization{};

  RunDataAnalysisResponseBodyData() {}

  explicit RunDataAnalysisResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (evidence) {
      res["evidence"] = boost::any(*evidence);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (rewrite) {
      res["rewrite"] = boost::any(*rewrite);
    }
    if (selector) {
      res["selector"] = boost::any(*selector);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (sql) {
      res["sql"] = boost::any(*sql);
    }
    if (sqlData) {
      res["sqlData"] = sqlData ? boost::any(sqlData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sqlError) {
      res["sqlError"] = boost::any(*sqlError);
    }
    if (visualization) {
      res["visualization"] = visualization ? boost::any(visualization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("evidence") != m.end() && !m["evidence"].empty()) {
      evidence = make_shared<string>(boost::any_cast<string>(m["evidence"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("rewrite") != m.end() && !m["rewrite"].empty()) {
      rewrite = make_shared<string>(boost::any_cast<string>(m["rewrite"]));
    }
    if (m.find("selector") != m.end() && !m["selector"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["selector"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["selector"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      selector = make_shared<vector<string>>(toVec1);
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("sql") != m.end() && !m["sql"].empty()) {
      sql = make_shared<string>(boost::any_cast<string>(m["sql"]));
    }
    if (m.find("sqlData") != m.end() && !m["sqlData"].empty()) {
      if (typeid(map<string, boost::any>) == m["sqlData"].type()) {
        RunDataAnalysisResponseBodyDataSqlData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sqlData"]));
        sqlData = make_shared<RunDataAnalysisResponseBodyDataSqlData>(model1);
      }
    }
    if (m.find("sqlError") != m.end() && !m["sqlError"].empty()) {
      sqlError = make_shared<string>(boost::any_cast<string>(m["sqlError"]));
    }
    if (m.find("visualization") != m.end() && !m["visualization"].empty()) {
      if (typeid(map<string, boost::any>) == m["visualization"].type()) {
        RunDataAnalysisResponseBodyDataVisualization model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["visualization"]));
        visualization = make_shared<RunDataAnalysisResponseBodyDataVisualization>(model1);
      }
    }
  }


  virtual ~RunDataAnalysisResponseBodyData() = default;
};
class RunDataAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<RunDataAnalysisResponseBodyData> data{};

  RunDataAnalysisResponseBody() {}

  explicit RunDataAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RunDataAnalysisResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RunDataAnalysisResponseBodyData>(model1);
      }
    }
  }


  virtual ~RunDataAnalysisResponseBody() = default;
};
class RunDataAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunDataAnalysisResponseBody> body{};

  RunDataAnalysisResponse() {}

  explicit RunDataAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunDataAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunDataAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~RunDataAnalysisResponse() = default;
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
  RunDataAnalysisResponse runDataAnalysisWithOptions(shared_ptr<string> workspaceId,
                                                     shared_ptr<RunDataAnalysisRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunDataAnalysisResponse runDataAnalysis(shared_ptr<string> workspaceId, shared_ptr<RunDataAnalysisRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_DataAnalysisGBI20240823

#endif
