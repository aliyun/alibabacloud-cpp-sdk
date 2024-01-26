// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PTS20181111_H_
#define ALIBABACLOUD_PTS20181111_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_PTS20181111 {
class GetReportRequest : public Darabonba::Model {
public:
  shared_ptr<long> reportId{};

  GetReportRequest() {}

  explicit GetReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<long>(boost::any_cast<long>(m["ReportId"]));
    }
  }


  virtual ~GetReportRequest() = default;
};
class GetReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> snapshot{};
  shared_ptr<bool> success{};
  shared_ptr<string> summary{};

  GetReportResponseBody() {}

  explicit GetReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (snapshot) {
      res["Snapshot"] = boost::any(*snapshot);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
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
    if (m.find("Snapshot") != m.end() && !m["Snapshot"].empty()) {
      snapshot = make_shared<string>(boost::any_cast<string>(m["Snapshot"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
  }


  virtual ~GetReportResponseBody() = default;
};
class GetReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetReportResponseBody> body{};

  GetReportResponse() {}

  explicit GetReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetReportResponse() = default;
};
class ListRunnableScenesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListRunnableScenesRequest() {}

  explicit ListRunnableScenesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListRunnableScenesRequest() = default;
};
class ListRunnableScenesResponseBodyScenesScene : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> sceneName{};

  ListRunnableScenesResponseBodyScenesScene() {}

  explicit ListRunnableScenesResponseBodyScenesScene(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
  }


  virtual ~ListRunnableScenesResponseBodyScenesScene() = default;
};
class ListRunnableScenesResponseBodyScenes : public Darabonba::Model {
public:
  shared_ptr<vector<ListRunnableScenesResponseBodyScenesScene>> scene{};

  ListRunnableScenesResponseBodyScenes() {}

  explicit ListRunnableScenesResponseBodyScenes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scene) {
      vector<boost::any> temp1;
      for(auto item1:*scene){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Scene"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      if (typeid(vector<boost::any>) == m["Scene"].type()) {
        vector<ListRunnableScenesResponseBodyScenesScene> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Scene"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRunnableScenesResponseBodyScenesScene model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scene = make_shared<vector<ListRunnableScenesResponseBodyScenesScene>>(expect1);
      }
    }
  }


  virtual ~ListRunnableScenesResponseBodyScenes() = default;
};
class ListRunnableScenesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<ListRunnableScenesResponseBodyScenes> scenes{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListRunnableScenesResponseBody() {}

  explicit ListRunnableScenesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scenes) {
      res["Scenes"] = scenes ? boost::any(scenes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Scenes") != m.end() && !m["Scenes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Scenes"].type()) {
        ListRunnableScenesResponseBodyScenes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Scenes"]));
        scenes = make_shared<ListRunnableScenesResponseBodyScenes>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListRunnableScenesResponseBody() = default;
};
class ListRunnableScenesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRunnableScenesResponseBody> body{};

  ListRunnableScenesResponse() {}

  explicit ListRunnableScenesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListRunnableScenesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRunnableScenesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRunnableScenesResponse() = default;
};
class QueryPlanStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> reportId{};
  shared_ptr<long> sceneId{};

  QueryPlanStatusRequest() {}

  explicit QueryPlanStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<long>(boost::any_cast<long>(m["ReportId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
  }


  virtual ~QueryPlanStatusRequest() = default;
};
class QueryPlanStatusResponseBodyAgentLocations : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> agentLocation{};

  QueryPlanStatusResponseBodyAgentLocations() {}

  explicit QueryPlanStatusResponseBodyAgentLocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentLocation) {
      res["AgentLocation"] = boost::any(*agentLocation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentLocation") != m.end() && !m["AgentLocation"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["AgentLocation"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AgentLocation"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      agentLocation = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~QueryPlanStatusResponseBodyAgentLocations() = default;
};
class QueryPlanStatusResponseBodyMonitorData : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> data{};

  QueryPlanStatusResponseBodyMonitorData() {}

  explicit QueryPlanStatusResponseBodyMonitorData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  }


  virtual ~QueryPlanStatusResponseBodyMonitorData() = default;
};
class QueryPlanStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryPlanStatusResponseBodyAgentLocations> agentLocations{};
  shared_ptr<long> aliveAgentCount{};
  shared_ptr<long> averageRt{};
  shared_ptr<string> bpsRequest{};
  shared_ptr<string> bpsResponse{};
  shared_ptr<string> code{};
  shared_ptr<long> concurrency{};
  shared_ptr<long> concurrencyLimit{};
  shared_ptr<long> currentTime{};
  shared_ptr<long> failedBusinessCount{};
  shared_ptr<long> failedRequestCount{};
  shared_ptr<string> message{};
  shared_ptr<QueryPlanStatusResponseBodyMonitorData> monitorData{};
  shared_ptr<long> reportId{};
  shared_ptr<string> requestCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> seg90Rt{};
  shared_ptr<long> startTime{};
  shared_ptr<bool> success{};
  shared_ptr<string> tips{};
  shared_ptr<long> totalAgentCount{};
  shared_ptr<long> tps{};
  shared_ptr<long> tpsLimit{};
  shared_ptr<long> vum{};

  QueryPlanStatusResponseBody() {}

  explicit QueryPlanStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentLocations) {
      res["AgentLocations"] = agentLocations ? boost::any(agentLocations->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (aliveAgentCount) {
      res["AliveAgentCount"] = boost::any(*aliveAgentCount);
    }
    if (averageRt) {
      res["AverageRt"] = boost::any(*averageRt);
    }
    if (bpsRequest) {
      res["BpsRequest"] = boost::any(*bpsRequest);
    }
    if (bpsResponse) {
      res["BpsResponse"] = boost::any(*bpsResponse);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (concurrency) {
      res["Concurrency"] = boost::any(*concurrency);
    }
    if (concurrencyLimit) {
      res["ConcurrencyLimit"] = boost::any(*concurrencyLimit);
    }
    if (currentTime) {
      res["CurrentTime"] = boost::any(*currentTime);
    }
    if (failedBusinessCount) {
      res["FailedBusinessCount"] = boost::any(*failedBusinessCount);
    }
    if (failedRequestCount) {
      res["FailedRequestCount"] = boost::any(*failedRequestCount);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (monitorData) {
      res["MonitorData"] = monitorData ? boost::any(monitorData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (requestCount) {
      res["RequestCount"] = boost::any(*requestCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (seg90Rt) {
      res["Seg90Rt"] = boost::any(*seg90Rt);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    if (totalAgentCount) {
      res["TotalAgentCount"] = boost::any(*totalAgentCount);
    }
    if (tps) {
      res["Tps"] = boost::any(*tps);
    }
    if (tpsLimit) {
      res["TpsLimit"] = boost::any(*tpsLimit);
    }
    if (vum) {
      res["Vum"] = boost::any(*vum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentLocations") != m.end() && !m["AgentLocations"].empty()) {
      if (typeid(map<string, boost::any>) == m["AgentLocations"].type()) {
        QueryPlanStatusResponseBodyAgentLocations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AgentLocations"]));
        agentLocations = make_shared<QueryPlanStatusResponseBodyAgentLocations>(model1);
      }
    }
    if (m.find("AliveAgentCount") != m.end() && !m["AliveAgentCount"].empty()) {
      aliveAgentCount = make_shared<long>(boost::any_cast<long>(m["AliveAgentCount"]));
    }
    if (m.find("AverageRt") != m.end() && !m["AverageRt"].empty()) {
      averageRt = make_shared<long>(boost::any_cast<long>(m["AverageRt"]));
    }
    if (m.find("BpsRequest") != m.end() && !m["BpsRequest"].empty()) {
      bpsRequest = make_shared<string>(boost::any_cast<string>(m["BpsRequest"]));
    }
    if (m.find("BpsResponse") != m.end() && !m["BpsResponse"].empty()) {
      bpsResponse = make_shared<string>(boost::any_cast<string>(m["BpsResponse"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Concurrency") != m.end() && !m["Concurrency"].empty()) {
      concurrency = make_shared<long>(boost::any_cast<long>(m["Concurrency"]));
    }
    if (m.find("ConcurrencyLimit") != m.end() && !m["ConcurrencyLimit"].empty()) {
      concurrencyLimit = make_shared<long>(boost::any_cast<long>(m["ConcurrencyLimit"]));
    }
    if (m.find("CurrentTime") != m.end() && !m["CurrentTime"].empty()) {
      currentTime = make_shared<long>(boost::any_cast<long>(m["CurrentTime"]));
    }
    if (m.find("FailedBusinessCount") != m.end() && !m["FailedBusinessCount"].empty()) {
      failedBusinessCount = make_shared<long>(boost::any_cast<long>(m["FailedBusinessCount"]));
    }
    if (m.find("FailedRequestCount") != m.end() && !m["FailedRequestCount"].empty()) {
      failedRequestCount = make_shared<long>(boost::any_cast<long>(m["FailedRequestCount"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MonitorData") != m.end() && !m["MonitorData"].empty()) {
      if (typeid(map<string, boost::any>) == m["MonitorData"].type()) {
        QueryPlanStatusResponseBodyMonitorData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MonitorData"]));
        monitorData = make_shared<QueryPlanStatusResponseBodyMonitorData>(model1);
      }
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<long>(boost::any_cast<long>(m["ReportId"]));
    }
    if (m.find("RequestCount") != m.end() && !m["RequestCount"].empty()) {
      requestCount = make_shared<string>(boost::any_cast<string>(m["RequestCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Seg90Rt") != m.end() && !m["Seg90Rt"].empty()) {
      seg90Rt = make_shared<long>(boost::any_cast<long>(m["Seg90Rt"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
    if (m.find("TotalAgentCount") != m.end() && !m["TotalAgentCount"].empty()) {
      totalAgentCount = make_shared<long>(boost::any_cast<long>(m["TotalAgentCount"]));
    }
    if (m.find("Tps") != m.end() && !m["Tps"].empty()) {
      tps = make_shared<long>(boost::any_cast<long>(m["Tps"]));
    }
    if (m.find("TpsLimit") != m.end() && !m["TpsLimit"].empty()) {
      tpsLimit = make_shared<long>(boost::any_cast<long>(m["TpsLimit"]));
    }
    if (m.find("Vum") != m.end() && !m["Vum"].empty()) {
      vum = make_shared<long>(boost::any_cast<long>(m["Vum"]));
    }
  }


  virtual ~QueryPlanStatusResponseBody() = default;
};
class QueryPlanStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPlanStatusResponseBody> body{};

  QueryPlanStatusResponse() {}

  explicit QueryPlanStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPlanStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPlanStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPlanStatusResponse() = default;
};
class StartSceneRequest : public Darabonba::Model {
public:
  shared_ptr<long> sceneId{};

  StartSceneRequest() {}

  explicit StartSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
  }


  virtual ~StartSceneRequest() = default;
};
class StartSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> reportId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartSceneResponseBody() {}

  explicit StartSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<long>(boost::any_cast<long>(m["ReportId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartSceneResponseBody() = default;
};
class StartSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartSceneResponseBody> body{};

  StartSceneResponse() {}

  explicit StartSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartSceneResponseBody>(model1);
      }
    }
  }


  virtual ~StartSceneResponse() = default;
};
class StopSceneRequest : public Darabonba::Model {
public:
  shared_ptr<long> sceneId{};

  StopSceneRequest() {}

  explicit StopSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
  }


  virtual ~StopSceneRequest() = default;
};
class StopSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopSceneResponseBody() {}

  explicit StopSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~StopSceneResponseBody() = default;
};
class StopSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopSceneResponseBody> body{};

  StopSceneResponse() {}

  explicit StopSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopSceneResponseBody>(model1);
      }
    }
  }


  virtual ~StopSceneResponse() = default;
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
  GetReportResponse getReportWithOptions(shared_ptr<GetReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetReportResponse getReport(shared_ptr<GetReportRequest> request);
  ListRunnableScenesResponse listRunnableScenesWithOptions(shared_ptr<ListRunnableScenesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRunnableScenesResponse listRunnableScenes(shared_ptr<ListRunnableScenesRequest> request);
  QueryPlanStatusResponse queryPlanStatusWithOptions(shared_ptr<QueryPlanStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPlanStatusResponse queryPlanStatus(shared_ptr<QueryPlanStatusRequest> request);
  StartSceneResponse startSceneWithOptions(shared_ptr<StartSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartSceneResponse startScene(shared_ptr<StartSceneRequest> request);
  StopSceneResponse stopSceneWithOptions(shared_ptr<StopSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopSceneResponse stopScene(shared_ptr<StopSceneRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_PTS20181111

#endif
