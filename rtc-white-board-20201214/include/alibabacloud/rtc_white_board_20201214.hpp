// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_RTC-WHITE-BOARD20201214_H_
#define ALIBABACLOUD_RTC-WHITE-BOARD20201214_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Rtc-white-board20201214 {
class DescribeAppsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appID{};
  shared_ptr<long> appStatus{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeAppsRequest() {}

  explicit DescribeAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appID) {
      res["AppID"] = boost::any(*appID);
    }
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
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
    if (m.find("AppID") != m.end() && !m["AppID"].empty()) {
      appID = make_shared<string>(boost::any_cast<string>(m["AppID"]));
    }
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<long>(boost::any_cast<long>(m["AppStatus"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeAppsRequest() = default;
};
class DescribeAppsResponseBodyResultAppList : public Darabonba::Model {
public:
  shared_ptr<string> appID{};
  shared_ptr<string> appName{};
  shared_ptr<long> status{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> domainNames{};
  shared_ptr<string> createTime{};

  DescribeAppsResponseBodyResultAppList() {}

  explicit DescribeAppsResponseBodyResultAppList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appID) {
      res["AppID"] = boost::any(*appID);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (domainNames) {
      res["DomainNames"] = boost::any(*domainNames);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppID") != m.end() && !m["AppID"].empty()) {
      appID = make_shared<string>(boost::any_cast<string>(m["AppID"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("DomainNames") != m.end() && !m["DomainNames"].empty()) {
      domainNames = make_shared<string>(boost::any_cast<string>(m["DomainNames"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
  }


  virtual ~DescribeAppsResponseBodyResultAppList() = default;
};
class DescribeAppsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};
  shared_ptr<vector<DescribeAppsResponseBodyResultAppList>> appList{};

  DescribeAppsResponseBodyResult() {}

  explicit DescribeAppsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (appList) {
      vector<boost::any> temp1;
      for(auto item1:*appList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("AppList") != m.end() && !m["AppList"].empty()) {
      if (typeid(vector<boost::any>) == m["AppList"].type()) {
        vector<DescribeAppsResponseBodyResultAppList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppsResponseBodyResultAppList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appList = make_shared<vector<DescribeAppsResponseBodyResultAppList>>(expect1);
      }
    }
  }


  virtual ~DescribeAppsResponseBodyResult() = default;
};
class DescribeAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<DescribeAppsResponseBodyResult> result{};

  DescribeAppsResponseBody() {}

  explicit DescribeAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DescribeAppsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DescribeAppsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeAppsResponseBody() = default;
};
class DescribeAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAppsResponseBody> body{};

  DescribeAppsResponse() {}

  explicit DescribeAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppsResponse() = default;
};
class SetAppCallbackUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> appID{};
  shared_ptr<string> appCallbackUrl{};
  shared_ptr<string> appCallbackAuthKey{};

  SetAppCallbackUrlRequest() {}

  explicit SetAppCallbackUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appID) {
      res["AppID"] = boost::any(*appID);
    }
    if (appCallbackUrl) {
      res["AppCallbackUrl"] = boost::any(*appCallbackUrl);
    }
    if (appCallbackAuthKey) {
      res["AppCallbackAuthKey"] = boost::any(*appCallbackAuthKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppID") != m.end() && !m["AppID"].empty()) {
      appID = make_shared<string>(boost::any_cast<string>(m["AppID"]));
    }
    if (m.find("AppCallbackUrl") != m.end() && !m["AppCallbackUrl"].empty()) {
      appCallbackUrl = make_shared<string>(boost::any_cast<string>(m["AppCallbackUrl"]));
    }
    if (m.find("AppCallbackAuthKey") != m.end() && !m["AppCallbackAuthKey"].empty()) {
      appCallbackAuthKey = make_shared<string>(boost::any_cast<string>(m["AppCallbackAuthKey"]));
    }
  }


  virtual ~SetAppCallbackUrlRequest() = default;
};
class SetAppCallbackUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<bool> result{};

  SetAppCallbackUrlResponseBody() {}

  explicit SetAppCallbackUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~SetAppCallbackUrlResponseBody() = default;
};
class SetAppCallbackUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetAppCallbackUrlResponseBody> body{};

  SetAppCallbackUrlResponse() {}

  explicit SetAppCallbackUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetAppCallbackUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetAppCallbackUrlResponseBody>(model1);
      }
    }
  }


  virtual ~SetAppCallbackUrlResponse() = default;
};
class SetAppNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> appID{};
  shared_ptr<string> appName{};

  SetAppNameRequest() {}

  explicit SetAppNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appID) {
      res["AppID"] = boost::any(*appID);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppID") != m.end() && !m["AppID"].empty()) {
      appID = make_shared<string>(boost::any_cast<string>(m["AppID"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
  }


  virtual ~SetAppNameRequest() = default;
};
class SetAppNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<bool> result{};

  SetAppNameResponseBody() {}

  explicit SetAppNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~SetAppNameResponseBody() = default;
};
class SetAppNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetAppNameResponseBody> body{};

  SetAppNameResponse() {}

  explicit SetAppNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetAppNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetAppNameResponseBody>(model1);
      }
    }
  }


  virtual ~SetAppNameResponse() = default;
};
class DescribeWhiteBoardsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appID{};
  shared_ptr<long> docStatus{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeWhiteBoardsRequest() {}

  explicit DescribeWhiteBoardsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appID) {
      res["AppID"] = boost::any(*appID);
    }
    if (docStatus) {
      res["DocStatus"] = boost::any(*docStatus);
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
    if (m.find("AppID") != m.end() && !m["AppID"].empty()) {
      appID = make_shared<string>(boost::any_cast<string>(m["AppID"]));
    }
    if (m.find("DocStatus") != m.end() && !m["DocStatus"].empty()) {
      docStatus = make_shared<long>(boost::any_cast<long>(m["DocStatus"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeWhiteBoardsRequest() = default;
};
class DescribeWhiteBoardsResponseBodyResultDocList : public Darabonba::Model {
public:
  shared_ptr<string> appID{};
  shared_ptr<string> docKey{};
  shared_ptr<long> status{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> createTime{};

  DescribeWhiteBoardsResponseBodyResultDocList() {}

  explicit DescribeWhiteBoardsResponseBodyResultDocList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appID) {
      res["AppID"] = boost::any(*appID);
    }
    if (docKey) {
      res["DocKey"] = boost::any(*docKey);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppID") != m.end() && !m["AppID"].empty()) {
      appID = make_shared<string>(boost::any_cast<string>(m["AppID"]));
    }
    if (m.find("DocKey") != m.end() && !m["DocKey"].empty()) {
      docKey = make_shared<string>(boost::any_cast<string>(m["DocKey"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
  }


  virtual ~DescribeWhiteBoardsResponseBodyResultDocList() = default;
};
class DescribeWhiteBoardsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};
  shared_ptr<vector<DescribeWhiteBoardsResponseBodyResultDocList>> docList{};

  DescribeWhiteBoardsResponseBodyResult() {}

  explicit DescribeWhiteBoardsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (docList) {
      vector<boost::any> temp1;
      for(auto item1:*docList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DocList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("DocList") != m.end() && !m["DocList"].empty()) {
      if (typeid(vector<boost::any>) == m["DocList"].type()) {
        vector<DescribeWhiteBoardsResponseBodyResultDocList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DocList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWhiteBoardsResponseBodyResultDocList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        docList = make_shared<vector<DescribeWhiteBoardsResponseBodyResultDocList>>(expect1);
      }
    }
  }


  virtual ~DescribeWhiteBoardsResponseBodyResult() = default;
};
class DescribeWhiteBoardsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<DescribeWhiteBoardsResponseBodyResult> result{};

  DescribeWhiteBoardsResponseBody() {}

  explicit DescribeWhiteBoardsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DescribeWhiteBoardsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DescribeWhiteBoardsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeWhiteBoardsResponseBody() = default;
};
class DescribeWhiteBoardsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeWhiteBoardsResponseBody> body{};

  DescribeWhiteBoardsResponse() {}

  explicit DescribeWhiteBoardsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeWhiteBoardsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWhiteBoardsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWhiteBoardsResponse() = default;
};
class SetAppDomainNamesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appID{};
  shared_ptr<string> appDomainNames{};

  SetAppDomainNamesRequest() {}

  explicit SetAppDomainNamesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appID) {
      res["AppID"] = boost::any(*appID);
    }
    if (appDomainNames) {
      res["AppDomainNames"] = boost::any(*appDomainNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppID") != m.end() && !m["AppID"].empty()) {
      appID = make_shared<string>(boost::any_cast<string>(m["AppID"]));
    }
    if (m.find("AppDomainNames") != m.end() && !m["AppDomainNames"].empty()) {
      appDomainNames = make_shared<string>(boost::any_cast<string>(m["AppDomainNames"]));
    }
  }


  virtual ~SetAppDomainNamesRequest() = default;
};
class SetAppDomainNamesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<bool> result{};

  SetAppDomainNamesResponseBody() {}

  explicit SetAppDomainNamesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~SetAppDomainNamesResponseBody() = default;
};
class SetAppDomainNamesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetAppDomainNamesResponseBody> body{};

  SetAppDomainNamesResponse() {}

  explicit SetAppDomainNamesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetAppDomainNamesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetAppDomainNamesResponseBody>(model1);
      }
    }
  }


  virtual ~SetAppDomainNamesResponse() = default;
};
class OpenWhiteBoardRequest : public Darabonba::Model {
public:
  shared_ptr<string> appID{};
  shared_ptr<string> userId{};
  shared_ptr<string> docKey{};

  OpenWhiteBoardRequest() {}

  explicit OpenWhiteBoardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appID) {
      res["AppID"] = boost::any(*appID);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (docKey) {
      res["DocKey"] = boost::any(*docKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppID") != m.end() && !m["AppID"].empty()) {
      appID = make_shared<string>(boost::any_cast<string>(m["AppID"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("DocKey") != m.end() && !m["DocKey"].empty()) {
      docKey = make_shared<string>(boost::any_cast<string>(m["DocKey"]));
    }
  }


  virtual ~OpenWhiteBoardRequest() = default;
};
class OpenWhiteBoardResponseBodyResultDocumentAccessInfoUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> nick{};
  shared_ptr<string> nickPinyin{};
  shared_ptr<string> userId{};

  OpenWhiteBoardResponseBodyResultDocumentAccessInfoUserInfo() {}

  explicit OpenWhiteBoardResponseBodyResultDocumentAccessInfoUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (nick) {
      res["Nick"] = boost::any(*nick);
    }
    if (nickPinyin) {
      res["NickPinyin"] = boost::any(*nickPinyin);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Nick") != m.end() && !m["Nick"].empty()) {
      nick = make_shared<string>(boost::any_cast<string>(m["Nick"]));
    }
    if (m.find("NickPinyin") != m.end() && !m["NickPinyin"].empty()) {
      nickPinyin = make_shared<string>(boost::any_cast<string>(m["NickPinyin"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~OpenWhiteBoardResponseBodyResultDocumentAccessInfoUserInfo() = default;
};
class OpenWhiteBoardResponseBodyResultDocumentAccessInfo : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> collabHost{};
  shared_ptr<long> permission{};
  shared_ptr<OpenWhiteBoardResponseBodyResultDocumentAccessInfoUserInfo> userInfo{};
  shared_ptr<string> wsDomain{};

  OpenWhiteBoardResponseBodyResultDocumentAccessInfo() {}

  explicit OpenWhiteBoardResponseBodyResultDocumentAccessInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (collabHost) {
      res["CollabHost"] = boost::any(*collabHost);
    }
    if (permission) {
      res["Permission"] = boost::any(*permission);
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (wsDomain) {
      res["WsDomain"] = boost::any(*wsDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("CollabHost") != m.end() && !m["CollabHost"].empty()) {
      collabHost = make_shared<string>(boost::any_cast<string>(m["CollabHost"]));
    }
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      permission = make_shared<long>(boost::any_cast<long>(m["Permission"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        OpenWhiteBoardResponseBodyResultDocumentAccessInfoUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<OpenWhiteBoardResponseBodyResultDocumentAccessInfoUserInfo>(model1);
      }
    }
    if (m.find("WsDomain") != m.end() && !m["WsDomain"].empty()) {
      wsDomain = make_shared<string>(boost::any_cast<string>(m["WsDomain"]));
    }
  }


  virtual ~OpenWhiteBoardResponseBodyResultDocumentAccessInfo() = default;
};
class OpenWhiteBoardResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<OpenWhiteBoardResponseBodyResultDocumentAccessInfo> documentAccessInfo{};

  OpenWhiteBoardResponseBodyResult() {}

  explicit OpenWhiteBoardResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentAccessInfo) {
      res["DocumentAccessInfo"] = documentAccessInfo ? boost::any(documentAccessInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocumentAccessInfo") != m.end() && !m["DocumentAccessInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DocumentAccessInfo"].type()) {
        OpenWhiteBoardResponseBodyResultDocumentAccessInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DocumentAccessInfo"]));
        documentAccessInfo = make_shared<OpenWhiteBoardResponseBodyResultDocumentAccessInfo>(model1);
      }
    }
  }


  virtual ~OpenWhiteBoardResponseBodyResult() = default;
};
class OpenWhiteBoardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<OpenWhiteBoardResponseBodyResult> result{};

  OpenWhiteBoardResponseBody() {}

  explicit OpenWhiteBoardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        OpenWhiteBoardResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<OpenWhiteBoardResponseBodyResult>(model1);
      }
    }
  }


  virtual ~OpenWhiteBoardResponseBody() = default;
};
class OpenWhiteBoardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OpenWhiteBoardResponseBody> body{};

  OpenWhiteBoardResponse() {}

  explicit OpenWhiteBoardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OpenWhiteBoardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenWhiteBoardResponseBody>(model1);
      }
    }
  }


  virtual ~OpenWhiteBoardResponse() = default;
};
class RefreshUsersPermissionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> userIds{};
  shared_ptr<string> docKey{};
  shared_ptr<string> appID{};

  RefreshUsersPermissionsRequest() {}

  explicit RefreshUsersPermissionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    if (docKey) {
      res["DocKey"] = boost::any(*docKey);
    }
    if (appID) {
      res["AppID"] = boost::any(*appID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      userIds = make_shared<string>(boost::any_cast<string>(m["UserIds"]));
    }
    if (m.find("DocKey") != m.end() && !m["DocKey"].empty()) {
      docKey = make_shared<string>(boost::any_cast<string>(m["DocKey"]));
    }
    if (m.find("AppID") != m.end() && !m["AppID"].empty()) {
      appID = make_shared<string>(boost::any_cast<string>(m["AppID"]));
    }
  }


  virtual ~RefreshUsersPermissionsRequest() = default;
};
class RefreshUsersPermissionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<bool> result{};

  RefreshUsersPermissionsResponseBody() {}

  explicit RefreshUsersPermissionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~RefreshUsersPermissionsResponseBody() = default;
};
class RefreshUsersPermissionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RefreshUsersPermissionsResponseBody> body{};

  RefreshUsersPermissionsResponse() {}

  explicit RefreshUsersPermissionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RefreshUsersPermissionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshUsersPermissionsResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshUsersPermissionsResponse() = default;
};
class CreateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
  }


  virtual ~CreateAppRequest() = default;
};
class CreateAppResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appID{};

  CreateAppResponseBodyResult() {}

  explicit CreateAppResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appID) {
      res["AppID"] = boost::any(*appID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppID") != m.end() && !m["AppID"].empty()) {
      appID = make_shared<string>(boost::any_cast<string>(m["AppID"]));
    }
  }


  virtual ~CreateAppResponseBodyResult() = default;
};
class CreateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<CreateAppResponseBodyResult> result{};

  CreateAppResponseBody() {}

  explicit CreateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateAppResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateAppResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateAppResponseBody() = default;
};
class CreateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAppResponseBody> body{};

  CreateAppResponse() {}

  explicit CreateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CreateWhiteBoardRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> appID{};

  CreateWhiteBoardRequest() {}

  explicit CreateWhiteBoardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (appID) {
      res["AppID"] = boost::any(*appID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("AppID") != m.end() && !m["AppID"].empty()) {
      appID = make_shared<string>(boost::any_cast<string>(m["AppID"]));
    }
  }


  virtual ~CreateWhiteBoardRequest() = default;
};
class CreateWhiteBoardResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> docKey{};

  CreateWhiteBoardResponseBodyResult() {}

  explicit CreateWhiteBoardResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docKey) {
      res["DocKey"] = boost::any(*docKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocKey") != m.end() && !m["DocKey"].empty()) {
      docKey = make_shared<string>(boost::any_cast<string>(m["DocKey"]));
    }
  }


  virtual ~CreateWhiteBoardResponseBodyResult() = default;
};
class CreateWhiteBoardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<CreateWhiteBoardResponseBodyResult> result{};

  CreateWhiteBoardResponseBody() {}

  explicit CreateWhiteBoardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateWhiteBoardResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateWhiteBoardResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateWhiteBoardResponseBody() = default;
};
class CreateWhiteBoardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateWhiteBoardResponseBody> body{};

  CreateWhiteBoardResponse() {}

  explicit CreateWhiteBoardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateWhiteBoardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWhiteBoardResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWhiteBoardResponse() = default;
};
class SetAppStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appID{};
  shared_ptr<long> appStatus{};

  SetAppStatusRequest() {}

  explicit SetAppStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appID) {
      res["AppID"] = boost::any(*appID);
    }
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppID") != m.end() && !m["AppID"].empty()) {
      appID = make_shared<string>(boost::any_cast<string>(m["AppID"]));
    }
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<long>(boost::any_cast<long>(m["AppStatus"]));
    }
  }


  virtual ~SetAppStatusRequest() = default;
};
class SetAppStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<bool> result{};

  SetAppStatusResponseBody() {}

  explicit SetAppStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~SetAppStatusResponseBody() = default;
};
class SetAppStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetAppStatusResponseBody> body{};

  SetAppStatusResponse() {}

  explicit SetAppStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetAppStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetAppStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetAppStatusResponse() = default;
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
  DescribeAppsResponse describeAppsWithOptions(shared_ptr<DescribeAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppsResponse describeApps(shared_ptr<DescribeAppsRequest> request);
  SetAppCallbackUrlResponse setAppCallbackUrlWithOptions(shared_ptr<SetAppCallbackUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetAppCallbackUrlResponse setAppCallbackUrl(shared_ptr<SetAppCallbackUrlRequest> request);
  SetAppNameResponse setAppNameWithOptions(shared_ptr<SetAppNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetAppNameResponse setAppName(shared_ptr<SetAppNameRequest> request);
  DescribeWhiteBoardsResponse describeWhiteBoardsWithOptions(shared_ptr<DescribeWhiteBoardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWhiteBoardsResponse describeWhiteBoards(shared_ptr<DescribeWhiteBoardsRequest> request);
  SetAppDomainNamesResponse setAppDomainNamesWithOptions(shared_ptr<SetAppDomainNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetAppDomainNamesResponse setAppDomainNames(shared_ptr<SetAppDomainNamesRequest> request);
  OpenWhiteBoardResponse openWhiteBoardWithOptions(shared_ptr<OpenWhiteBoardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenWhiteBoardResponse openWhiteBoard(shared_ptr<OpenWhiteBoardRequest> request);
  RefreshUsersPermissionsResponse refreshUsersPermissionsWithOptions(shared_ptr<RefreshUsersPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshUsersPermissionsResponse refreshUsersPermissions(shared_ptr<RefreshUsersPermissionsRequest> request);
  CreateAppResponse createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppResponse createApp(shared_ptr<CreateAppRequest> request);
  CreateWhiteBoardResponse createWhiteBoardWithOptions(shared_ptr<CreateWhiteBoardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWhiteBoardResponse createWhiteBoard(shared_ptr<CreateWhiteBoardRequest> request);
  SetAppStatusResponse setAppStatusWithOptions(shared_ptr<SetAppStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetAppStatusResponse setAppStatus(shared_ptr<SetAppStatusRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Rtc-white-board20201214

#endif
