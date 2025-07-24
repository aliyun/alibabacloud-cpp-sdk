// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EDUAISERVICE20231218_H_
#define ALIBABACLOUD_EDUAISERVICE20231218_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Eduaiservice20231218 {
class QueryOrgLabRecordListRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunUid{};
  shared_ptr<string> labId{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> orderDirection{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};

  QueryOrgLabRecordListRequest() {}

  explicit QueryOrgLabRecordListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunUid) {
      res["AliyunUid"] = boost::any(*aliyunUid);
    }
    if (labId) {
      res["LabId"] = boost::any(*labId);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (orderDirection) {
      res["OrderDirection"] = boost::any(*orderDirection);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunUid") != m.end() && !m["AliyunUid"].empty()) {
      aliyunUid = make_shared<string>(boost::any_cast<string>(m["AliyunUid"]));
    }
    if (m.find("LabId") != m.end() && !m["LabId"].empty()) {
      labId = make_shared<string>(boost::any_cast<string>(m["LabId"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OrderDirection") != m.end() && !m["OrderDirection"].empty()) {
      orderDirection = make_shared<string>(boost::any_cast<string>(m["OrderDirection"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryOrgLabRecordListRequest() = default;
};
class QueryOrgLabRecordListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createdAt{};
  shared_ptr<string> labRecordId{};
  shared_ptr<long> status{};
  shared_ptr<long> submittedAt{};

  QueryOrgLabRecordListResponseBodyData() {}

  explicit QueryOrgLabRecordListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (labRecordId) {
      res["LabRecordId"] = boost::any(*labRecordId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submittedAt) {
      res["SubmittedAt"] = boost::any(*submittedAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<long>(boost::any_cast<long>(m["CreatedAt"]));
    }
    if (m.find("LabRecordId") != m.end() && !m["LabRecordId"].empty()) {
      labRecordId = make_shared<string>(boost::any_cast<string>(m["LabRecordId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SubmittedAt") != m.end() && !m["SubmittedAt"].empty()) {
      submittedAt = make_shared<long>(boost::any_cast<long>(m["SubmittedAt"]));
    }
  }


  virtual ~QueryOrgLabRecordListResponseBodyData() = default;
};
class QueryOrgLabRecordListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryOrgLabRecordListResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  QueryOrgLabRecordListResponseBody() {}

  explicit QueryOrgLabRecordListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryOrgLabRecordListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryOrgLabRecordListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryOrgLabRecordListResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryOrgLabRecordListResponseBody() = default;
};
class QueryOrgLabRecordListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryOrgLabRecordListResponseBody> body{};

  QueryOrgLabRecordListResponse() {}

  explicit QueryOrgLabRecordListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryOrgLabRecordListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryOrgLabRecordListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryOrgLabRecordListResponse() = default;
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
  QueryOrgLabRecordListResponse queryOrgLabRecordListWithOptions(shared_ptr<QueryOrgLabRecordListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryOrgLabRecordListResponse queryOrgLabRecordList(shared_ptr<QueryOrgLabRecordListRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eduaiservice20231218

#endif
