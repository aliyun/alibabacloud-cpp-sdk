// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MARKETPLACEINTL20221230_H_
#define ALIBABACLOUD_MARKETPLACEINTL20221230_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_MarketplaceIntl20221230 {
class DescribeSellerInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> instanceId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> userId{};

  DescribeSellerInstancesRequest() {}

  explicit DescribeSellerInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~DescribeSellerInstancesRequest() = default;
};
class DescribeSellerInstancesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appInfo{};
  shared_ptr<long> chargeType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> createdOn{};
  shared_ptr<string> hostInfo{};
  shared_ptr<string> info{};
  shared_ptr<long> instanceId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<long> userId{};

  DescribeSellerInstancesResponseBodyResult() {}

  explicit DescribeSellerInstancesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInfo) {
      res["AppInfo"] = boost::any(*appInfo);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (createdOn) {
      res["CreatedOn"] = boost::any(*createdOn);
    }
    if (hostInfo) {
      res["HostInfo"] = boost::any(*hostInfo);
    }
    if (info) {
      res["Info"] = boost::any(*info);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInfo") != m.end() && !m["AppInfo"].empty()) {
      appInfo = make_shared<string>(boost::any_cast<string>(m["AppInfo"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<long>(boost::any_cast<long>(m["ChargeType"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CreatedOn") != m.end() && !m["CreatedOn"].empty()) {
      createdOn = make_shared<long>(boost::any_cast<long>(m["CreatedOn"]));
    }
    if (m.find("HostInfo") != m.end() && !m["HostInfo"].empty()) {
      hostInfo = make_shared<string>(boost::any_cast<string>(m["HostInfo"]));
    }
    if (m.find("Info") != m.end() && !m["Info"].empty()) {
      info = make_shared<string>(boost::any_cast<string>(m["Info"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~DescribeSellerInstancesResponseBodyResult() = default;
};
class DescribeSellerInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<bool> fatal{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSellerInstancesResponseBodyResult>> result{};
  shared_ptr<bool> success{};
  shared_ptr<string> version{};

  DescribeSellerInstancesResponseBody() {}

  explicit DescribeSellerInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (fatal) {
      res["Fatal"] = boost::any(*fatal);
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
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Fatal") != m.end() && !m["Fatal"].empty()) {
      fatal = make_shared<bool>(boost::any_cast<bool>(m["Fatal"]));
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<DescribeSellerInstancesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSellerInstancesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeSellerInstancesResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeSellerInstancesResponseBody() = default;
};
class DescribeSellerInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSellerInstancesResponseBody> body{};

  DescribeSellerInstancesResponse() {}

  explicit DescribeSellerInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSellerInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSellerInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSellerInstancesResponse() = default;
};
class NoticeInstanceUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> instanceId{};
  shared_ptr<string> noticeParam{};
  shared_ptr<long> noticeType{};

  NoticeInstanceUserRequest() {}

  explicit NoticeInstanceUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (noticeParam) {
      res["NoticeParam"] = boost::any(*noticeParam);
    }
    if (noticeType) {
      res["NoticeType"] = boost::any(*noticeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("NoticeParam") != m.end() && !m["NoticeParam"].empty()) {
      noticeParam = make_shared<string>(boost::any_cast<string>(m["NoticeParam"]));
    }
    if (m.find("NoticeType") != m.end() && !m["NoticeType"].empty()) {
      noticeType = make_shared<long>(boost::any_cast<long>(m["NoticeType"]));
    }
  }


  virtual ~NoticeInstanceUserRequest() = default;
};
class NoticeInstanceUserResponseBodyAccessDeniedDetail : public Darabonba::Model {
public:
  shared_ptr<string> authAction{};
  shared_ptr<string> authPrincipalDisplayName{};
  shared_ptr<string> authPrincipalOwnerId{};
  shared_ptr<string> authPrincipalType{};
  shared_ptr<string> encodedDiagnosticMessage{};
  shared_ptr<string> noPermissionType{};
  shared_ptr<string> policyType{};

  NoticeInstanceUserResponseBodyAccessDeniedDetail() {}

  explicit NoticeInstanceUserResponseBodyAccessDeniedDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authAction) {
      res["AuthAction"] = boost::any(*authAction);
    }
    if (authPrincipalDisplayName) {
      res["AuthPrincipalDisplayName"] = boost::any(*authPrincipalDisplayName);
    }
    if (authPrincipalOwnerId) {
      res["AuthPrincipalOwnerId"] = boost::any(*authPrincipalOwnerId);
    }
    if (authPrincipalType) {
      res["AuthPrincipalType"] = boost::any(*authPrincipalType);
    }
    if (encodedDiagnosticMessage) {
      res["EncodedDiagnosticMessage"] = boost::any(*encodedDiagnosticMessage);
    }
    if (noPermissionType) {
      res["NoPermissionType"] = boost::any(*noPermissionType);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthAction") != m.end() && !m["AuthAction"].empty()) {
      authAction = make_shared<string>(boost::any_cast<string>(m["AuthAction"]));
    }
    if (m.find("AuthPrincipalDisplayName") != m.end() && !m["AuthPrincipalDisplayName"].empty()) {
      authPrincipalDisplayName = make_shared<string>(boost::any_cast<string>(m["AuthPrincipalDisplayName"]));
    }
    if (m.find("AuthPrincipalOwnerId") != m.end() && !m["AuthPrincipalOwnerId"].empty()) {
      authPrincipalOwnerId = make_shared<string>(boost::any_cast<string>(m["AuthPrincipalOwnerId"]));
    }
    if (m.find("AuthPrincipalType") != m.end() && !m["AuthPrincipalType"].empty()) {
      authPrincipalType = make_shared<string>(boost::any_cast<string>(m["AuthPrincipalType"]));
    }
    if (m.find("EncodedDiagnosticMessage") != m.end() && !m["EncodedDiagnosticMessage"].empty()) {
      encodedDiagnosticMessage = make_shared<string>(boost::any_cast<string>(m["EncodedDiagnosticMessage"]));
    }
    if (m.find("NoPermissionType") != m.end() && !m["NoPermissionType"].empty()) {
      noPermissionType = make_shared<string>(boost::any_cast<string>(m["NoPermissionType"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~NoticeInstanceUserResponseBodyAccessDeniedDetail() = default;
};
class NoticeInstanceUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<NoticeInstanceUserResponseBodyAccessDeniedDetail> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  NoticeInstanceUserResponseBody() {}

  explicit NoticeInstanceUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = accessDeniedDetail ? boost::any(accessDeniedDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessDeniedDetail"].type()) {
        NoticeInstanceUserResponseBodyAccessDeniedDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessDeniedDetail"]));
        accessDeniedDetail = make_shared<NoticeInstanceUserResponseBodyAccessDeniedDetail>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~NoticeInstanceUserResponseBody() = default;
};
class NoticeInstanceUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<NoticeInstanceUserResponseBody> body{};

  NoticeInstanceUserResponse() {}

  explicit NoticeInstanceUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        NoticeInstanceUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<NoticeInstanceUserResponseBody>(model1);
      }
    }
  }


  virtual ~NoticeInstanceUserResponse() = default;
};
class PushMeteringDataRequestMeteringData : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> meteringAssist{};
  shared_ptr<string> meteringEntity{};
  shared_ptr<long> startTime{};

  PushMeteringDataRequestMeteringData() {}

  explicit PushMeteringDataRequestMeteringData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (meteringAssist) {
      res["MeteringAssist"] = boost::any(*meteringAssist);
    }
    if (meteringEntity) {
      res["MeteringEntity"] = boost::any(*meteringEntity);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MeteringAssist") != m.end() && !m["MeteringAssist"].empty()) {
      meteringAssist = make_shared<string>(boost::any_cast<string>(m["MeteringAssist"]));
    }
    if (m.find("MeteringEntity") != m.end() && !m["MeteringEntity"].empty()) {
      meteringEntity = make_shared<string>(boost::any_cast<string>(m["MeteringEntity"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~PushMeteringDataRequestMeteringData() = default;
};
class PushMeteringDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<vector<PushMeteringDataRequestMeteringData>> meteringData{};

  PushMeteringDataRequest() {}

  explicit PushMeteringDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (meteringData) {
      vector<boost::any> temp1;
      for(auto item1:*meteringData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MeteringData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("MeteringData") != m.end() && !m["MeteringData"].empty()) {
      if (typeid(vector<boost::any>) == m["MeteringData"].type()) {
        vector<PushMeteringDataRequestMeteringData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MeteringData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PushMeteringDataRequestMeteringData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        meteringData = make_shared<vector<PushMeteringDataRequestMeteringData>>(expect1);
      }
    }
  }


  virtual ~PushMeteringDataRequest() = default;
};
class PushMeteringDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<bool> forceFatal{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  PushMeteringDataResponseBody() {}

  explicit PushMeteringDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (forceFatal) {
      res["ForceFatal"] = boost::any(*forceFatal);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
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
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ForceFatal") != m.end() && !m["ForceFatal"].empty()) {
      forceFatal = make_shared<bool>(boost::any_cast<bool>(m["ForceFatal"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PushMeteringDataResponseBody() = default;
};
class PushMeteringDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushMeteringDataResponseBody> body{};

  PushMeteringDataResponse() {}

  explicit PushMeteringDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushMeteringDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushMeteringDataResponseBody>(model1);
      }
    }
  }


  virtual ~PushMeteringDataResponse() = default;
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
  DescribeSellerInstancesResponse describeSellerInstancesWithOptions(shared_ptr<DescribeSellerInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSellerInstancesResponse describeSellerInstances(shared_ptr<DescribeSellerInstancesRequest> request);
  NoticeInstanceUserResponse noticeInstanceUserWithOptions(shared_ptr<NoticeInstanceUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  NoticeInstanceUserResponse noticeInstanceUser(shared_ptr<NoticeInstanceUserRequest> request);
  PushMeteringDataResponse pushMeteringDataWithOptions(shared_ptr<PushMeteringDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushMeteringDataResponse pushMeteringData(shared_ptr<PushMeteringDataRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_MarketplaceIntl20221230

#endif
