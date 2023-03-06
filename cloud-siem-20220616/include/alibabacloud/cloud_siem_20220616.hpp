// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUD-SIEM20220616_H_
#define ALIBABACLOUD_CLOUD-SIEM20220616_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cloud-siem20220616 {
class BatchJobCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> submitId{};

  BatchJobCheckRequest() {}

  explicit BatchJobCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (submitId) {
      res["SubmitId"] = boost::any(*submitId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SubmitId") != m.end() && !m["SubmitId"].empty()) {
      submitId = make_shared<string>(boost::any_cast<string>(m["SubmitId"]));
    }
  }


  virtual ~BatchJobCheckRequest() = default;
};
class BatchJobCheckResponseBodyDataErrTaskListProductListLogList : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> logCode{};
  shared_ptr<string> logStoreNamePattern{};
  shared_ptr<string> productCode{};
  shared_ptr<string> projectNamePattern{};
  shared_ptr<string> regionCode{};

  BatchJobCheckResponseBodyDataErrTaskListProductListLogList() {}

  explicit BatchJobCheckResponseBodyDataErrTaskListProductListLogList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (logCode) {
      res["LogCode"] = boost::any(*logCode);
    }
    if (logStoreNamePattern) {
      res["LogStoreNamePattern"] = boost::any(*logStoreNamePattern);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (projectNamePattern) {
      res["ProjectNamePattern"] = boost::any(*projectNamePattern);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("LogCode") != m.end() && !m["LogCode"].empty()) {
      logCode = make_shared<string>(boost::any_cast<string>(m["LogCode"]));
    }
    if (m.find("LogStoreNamePattern") != m.end() && !m["LogStoreNamePattern"].empty()) {
      logStoreNamePattern = make_shared<string>(boost::any_cast<string>(m["LogStoreNamePattern"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProjectNamePattern") != m.end() && !m["ProjectNamePattern"].empty()) {
      projectNamePattern = make_shared<string>(boost::any_cast<string>(m["ProjectNamePattern"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
  }


  virtual ~BatchJobCheckResponseBodyDataErrTaskListProductListLogList() = default;
};
class BatchJobCheckResponseBodyDataErrTaskListProductList : public Darabonba::Model {
public:
  shared_ptr<vector<BatchJobCheckResponseBodyDataErrTaskListProductListLogList>> logList{};
  shared_ptr<string> productCode{};

  BatchJobCheckResponseBodyDataErrTaskListProductList() {}

  explicit BatchJobCheckResponseBodyDataErrTaskListProductList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logList) {
      vector<boost::any> temp1;
      for(auto item1:*logList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogList"] = boost::any(temp1);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogList") != m.end() && !m["LogList"].empty()) {
      if (typeid(vector<boost::any>) == m["LogList"].type()) {
        vector<BatchJobCheckResponseBodyDataErrTaskListProductListLogList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchJobCheckResponseBodyDataErrTaskListProductListLogList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logList = make_shared<vector<BatchJobCheckResponseBodyDataErrTaskListProductListLogList>>(expect1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~BatchJobCheckResponseBodyDataErrTaskListProductList() = default;
};
class BatchJobCheckResponseBodyDataErrTaskList : public Darabonba::Model {
public:
  shared_ptr<vector<BatchJobCheckResponseBodyDataErrTaskListProductList>> productList{};
  shared_ptr<long> userId{};

  BatchJobCheckResponseBodyDataErrTaskList() {}

  explicit BatchJobCheckResponseBodyDataErrTaskList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productList) {
      vector<boost::any> temp1;
      for(auto item1:*productList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductList"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductList") != m.end() && !m["ProductList"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductList"].type()) {
        vector<BatchJobCheckResponseBodyDataErrTaskListProductList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchJobCheckResponseBodyDataErrTaskListProductList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productList = make_shared<vector<BatchJobCheckResponseBodyDataErrTaskListProductList>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~BatchJobCheckResponseBodyDataErrTaskList() = default;
};
class BatchJobCheckResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<vector<BatchJobCheckResponseBodyDataErrTaskList>> errTaskList{};
  shared_ptr<long> failedCount{};
  shared_ptr<long> finishCount{};
  shared_ptr<string> folderId{};
  shared_ptr<long> taskCount{};
  shared_ptr<string> taskStatus{};

  BatchJobCheckResponseBodyData() {}

  explicit BatchJobCheckResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (errTaskList) {
      vector<boost::any> temp1;
      for(auto item1:*errTaskList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErrTaskList"] = boost::any(temp1);
    }
    if (failedCount) {
      res["FailedCount"] = boost::any(*failedCount);
    }
    if (finishCount) {
      res["FinishCount"] = boost::any(*finishCount);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (taskCount) {
      res["TaskCount"] = boost::any(*taskCount);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("ErrTaskList") != m.end() && !m["ErrTaskList"].empty()) {
      if (typeid(vector<boost::any>) == m["ErrTaskList"].type()) {
        vector<BatchJobCheckResponseBodyDataErrTaskList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErrTaskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchJobCheckResponseBodyDataErrTaskList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errTaskList = make_shared<vector<BatchJobCheckResponseBodyDataErrTaskList>>(expect1);
      }
    }
    if (m.find("FailedCount") != m.end() && !m["FailedCount"].empty()) {
      failedCount = make_shared<long>(boost::any_cast<long>(m["FailedCount"]));
    }
    if (m.find("FinishCount") != m.end() && !m["FinishCount"].empty()) {
      finishCount = make_shared<long>(boost::any_cast<long>(m["FinishCount"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("TaskCount") != m.end() && !m["TaskCount"].empty()) {
      taskCount = make_shared<long>(boost::any_cast<long>(m["TaskCount"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~BatchJobCheckResponseBodyData() = default;
};
class BatchJobCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<BatchJobCheckResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchJobCheckResponseBody() {}

  explicit BatchJobCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        BatchJobCheckResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BatchJobCheckResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
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


  virtual ~BatchJobCheckResponseBody() = default;
};
class BatchJobCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchJobCheckResponseBody> body{};

  BatchJobCheckResponse() {}

  explicit BatchJobCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchJobCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchJobCheckResponseBody>(model1);
      }
    }
  }


  virtual ~BatchJobCheckResponse() = default;
};
class BatchJobSubmitRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonConfig{};
  shared_ptr<string> regionId{};

  BatchJobSubmitRequest() {}

  explicit BatchJobSubmitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jsonConfig) {
      res["JsonConfig"] = boost::any(*jsonConfig);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JsonConfig") != m.end() && !m["JsonConfig"].empty()) {
      jsonConfig = make_shared<string>(boost::any_cast<string>(m["JsonConfig"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~BatchJobSubmitRequest() = default;
};
class BatchJobSubmitResponseBodyDataConfigListProductListLogList : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> logCode{};
  shared_ptr<string> logStoreNamePattern{};
  shared_ptr<string> productCode{};
  shared_ptr<string> projectNamePattern{};
  shared_ptr<string> regionCode{};

  BatchJobSubmitResponseBodyDataConfigListProductListLogList() {}

  explicit BatchJobSubmitResponseBodyDataConfigListProductListLogList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (logCode) {
      res["LogCode"] = boost::any(*logCode);
    }
    if (logStoreNamePattern) {
      res["LogStoreNamePattern"] = boost::any(*logStoreNamePattern);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (projectNamePattern) {
      res["ProjectNamePattern"] = boost::any(*projectNamePattern);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("LogCode") != m.end() && !m["LogCode"].empty()) {
      logCode = make_shared<string>(boost::any_cast<string>(m["LogCode"]));
    }
    if (m.find("LogStoreNamePattern") != m.end() && !m["LogStoreNamePattern"].empty()) {
      logStoreNamePattern = make_shared<string>(boost::any_cast<string>(m["LogStoreNamePattern"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProjectNamePattern") != m.end() && !m["ProjectNamePattern"].empty()) {
      projectNamePattern = make_shared<string>(boost::any_cast<string>(m["ProjectNamePattern"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
  }


  virtual ~BatchJobSubmitResponseBodyDataConfigListProductListLogList() = default;
};
class BatchJobSubmitResponseBodyDataConfigListProductList : public Darabonba::Model {
public:
  shared_ptr<vector<BatchJobSubmitResponseBodyDataConfigListProductListLogList>> logList{};
  shared_ptr<string> productCode{};

  BatchJobSubmitResponseBodyDataConfigListProductList() {}

  explicit BatchJobSubmitResponseBodyDataConfigListProductList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logList) {
      vector<boost::any> temp1;
      for(auto item1:*logList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogList"] = boost::any(temp1);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogList") != m.end() && !m["LogList"].empty()) {
      if (typeid(vector<boost::any>) == m["LogList"].type()) {
        vector<BatchJobSubmitResponseBodyDataConfigListProductListLogList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchJobSubmitResponseBodyDataConfigListProductListLogList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logList = make_shared<vector<BatchJobSubmitResponseBodyDataConfigListProductListLogList>>(expect1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~BatchJobSubmitResponseBodyDataConfigListProductList() = default;
};
class BatchJobSubmitResponseBodyDataConfigList : public Darabonba::Model {
public:
  shared_ptr<vector<BatchJobSubmitResponseBodyDataConfigListProductList>> productList{};
  shared_ptr<long> userId{};

  BatchJobSubmitResponseBodyDataConfigList() {}

  explicit BatchJobSubmitResponseBodyDataConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productList) {
      vector<boost::any> temp1;
      for(auto item1:*productList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductList"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductList") != m.end() && !m["ProductList"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductList"].type()) {
        vector<BatchJobSubmitResponseBodyDataConfigListProductList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchJobSubmitResponseBodyDataConfigListProductList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productList = make_shared<vector<BatchJobSubmitResponseBodyDataConfigListProductList>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~BatchJobSubmitResponseBodyDataConfigList() = default;
};
class BatchJobSubmitResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<vector<BatchJobSubmitResponseBodyDataConfigList>> configList{};
  shared_ptr<string> submitId{};
  shared_ptr<long> taskCount{};

  BatchJobSubmitResponseBodyData() {}

  explicit BatchJobSubmitResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (configList) {
      vector<boost::any> temp1;
      for(auto item1:*configList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigList"] = boost::any(temp1);
    }
    if (submitId) {
      res["SubmitId"] = boost::any(*submitId);
    }
    if (taskCount) {
      res["TaskCount"] = boost::any(*taskCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("ConfigList") != m.end() && !m["ConfigList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigList"].type()) {
        vector<BatchJobSubmitResponseBodyDataConfigList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchJobSubmitResponseBodyDataConfigList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configList = make_shared<vector<BatchJobSubmitResponseBodyDataConfigList>>(expect1);
      }
    }
    if (m.find("SubmitId") != m.end() && !m["SubmitId"].empty()) {
      submitId = make_shared<string>(boost::any_cast<string>(m["SubmitId"]));
    }
    if (m.find("TaskCount") != m.end() && !m["TaskCount"].empty()) {
      taskCount = make_shared<long>(boost::any_cast<long>(m["TaskCount"]));
    }
  }


  virtual ~BatchJobSubmitResponseBodyData() = default;
};
class BatchJobSubmitResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<BatchJobSubmitResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchJobSubmitResponseBody() {}

  explicit BatchJobSubmitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        BatchJobSubmitResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BatchJobSubmitResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
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


  virtual ~BatchJobSubmitResponseBody() = default;
};
class BatchJobSubmitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchJobSubmitResponseBody> body{};

  BatchJobSubmitResponse() {}

  explicit BatchJobSubmitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchJobSubmitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchJobSubmitResponseBody>(model1);
      }
    }
  }


  virtual ~BatchJobSubmitResponse() = default;
};
class SendMessageRequest : public Darabonba::Model {
public:
  shared_ptr<long> channelType{};
  shared_ptr<long> receiveUid{};
  shared_ptr<string> regionId{};

  SendMessageRequest() {}

  explicit SendMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (receiveUid) {
      res["ReceiveUid"] = boost::any(*receiveUid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("ReceiveUid") != m.end() && !m["ReceiveUid"].empty()) {
      receiveUid = make_shared<long>(boost::any_cast<long>(m["ReceiveUid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SendMessageRequest() = default;
};
class SendMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendMessageResponseBody() {}

  explicit SendMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
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


  virtual ~SendMessageResponseBody() = default;
};
class SendMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendMessageResponseBody> body{};

  SendMessageResponse() {}

  explicit SendMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendMessageResponse() = default;
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
  BatchJobCheckResponse batchJobCheckWithOptions(shared_ptr<BatchJobCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchJobCheckResponse batchJobCheck(shared_ptr<BatchJobCheckRequest> request);
  BatchJobSubmitResponse batchJobSubmitWithOptions(shared_ptr<BatchJobSubmitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchJobSubmitResponse batchJobSubmit(shared_ptr<BatchJobSubmitRequest> request);
  SendMessageResponse sendMessageWithOptions(shared_ptr<SendMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendMessageResponse sendMessage(shared_ptr<SendMessageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloud-siem20220616

#endif
