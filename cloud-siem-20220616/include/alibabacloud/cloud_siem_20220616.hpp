// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUD-SIEM20220616_H_
#define ALIBABACLOUD_CLOUD-SIEM20220616_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cloud-siem20220616 {
class DataProductListLogMapValueExtraParameters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DataProductListLogMapValueExtraParameters() {}

  explicit DataProductListLogMapValueExtraParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DataProductListLogMapValueExtraParameters() = default;
};
class DataProductListLogMapValue : public Darabonba::Model {
public:
  shared_ptr<string> logCode{};
  shared_ptr<string> logName{};
  shared_ptr<string> logNameEn{};
  shared_ptr<string> logNameKey{};
  shared_ptr<bool> status{};
  shared_ptr<bool> canOperateOrNot{};
  shared_ptr<string> topic{};
  shared_ptr<vector<DataProductListLogMapValueExtraParameters>> extraParameters{};

  DataProductListLogMapValue() {}

  explicit DataProductListLogMapValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logCode) {
      res["LogCode"] = boost::any(*logCode);
    }
    if (logName) {
      res["LogName"] = boost::any(*logName);
    }
    if (logNameEn) {
      res["LogNameEn"] = boost::any(*logNameEn);
    }
    if (logNameKey) {
      res["LogNameKey"] = boost::any(*logNameKey);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (canOperateOrNot) {
      res["CanOperateOrNot"] = boost::any(*canOperateOrNot);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (extraParameters) {
      vector<boost::any> temp1;
      for(auto item1:*extraParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtraParameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogCode") != m.end() && !m["LogCode"].empty()) {
      logCode = make_shared<string>(boost::any_cast<string>(m["LogCode"]));
    }
    if (m.find("LogName") != m.end() && !m["LogName"].empty()) {
      logName = make_shared<string>(boost::any_cast<string>(m["LogName"]));
    }
    if (m.find("LogNameEn") != m.end() && !m["LogNameEn"].empty()) {
      logNameEn = make_shared<string>(boost::any_cast<string>(m["LogNameEn"]));
    }
    if (m.find("LogNameKey") != m.end() && !m["LogNameKey"].empty()) {
      logNameKey = make_shared<string>(boost::any_cast<string>(m["LogNameKey"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("CanOperateOrNot") != m.end() && !m["CanOperateOrNot"].empty()) {
      canOperateOrNot = make_shared<bool>(boost::any_cast<bool>(m["CanOperateOrNot"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("ExtraParameters") != m.end() && !m["ExtraParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtraParameters"].type()) {
        vector<DataProductListLogMapValueExtraParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtraParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataProductListLogMapValueExtraParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extraParameters = make_shared<vector<DataProductListLogMapValueExtraParameters>>(expect1);
      }
    }
  }


  virtual ~DataProductListLogMapValue() = default;
};
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
class CloseDeliveryRequest : public Darabonba::Model {
public:
  shared_ptr<string> logCode{};
  shared_ptr<string> productCode{};
  shared_ptr<string> regionId{};

  CloseDeliveryRequest() {}

  explicit CloseDeliveryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logCode) {
      res["LogCode"] = boost::any(*logCode);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogCode") != m.end() && !m["LogCode"].empty()) {
      logCode = make_shared<string>(boost::any_cast<string>(m["LogCode"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CloseDeliveryRequest() = default;
};
class CloseDeliveryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CloseDeliveryResponseBody() {}

  explicit CloseDeliveryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~CloseDeliveryResponseBody() = default;
};
class CloseDeliveryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloseDeliveryResponseBody> body{};

  CloseDeliveryResponse() {}

  explicit CloseDeliveryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloseDeliveryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseDeliveryResponseBody>(model1);
      }
    }
  }


  virtual ~CloseDeliveryResponse() = default;
};
class DeleteAutomateResponseConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> regionId{};

  DeleteAutomateResponseConfigRequest() {}

  explicit DeleteAutomateResponseConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteAutomateResponseConfigRequest() = default;
};
class DeleteAutomateResponseConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAutomateResponseConfigResponseBody() {}

  explicit DeleteAutomateResponseConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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


  virtual ~DeleteAutomateResponseConfigResponseBody() = default;
};
class DeleteAutomateResponseConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAutomateResponseConfigResponseBody> body{};

  DeleteAutomateResponseConfigResponse() {}

  explicit DeleteAutomateResponseConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAutomateResponseConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAutomateResponseConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAutomateResponseConfigResponse() = default;
};
class DeleteCustomizeRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ruleId{};

  DeleteCustomizeRuleRequest() {}

  explicit DeleteCustomizeRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DeleteCustomizeRuleRequest() = default;
};
class DeleteCustomizeRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteCustomizeRuleResponseBody() {}

  explicit DeleteCustomizeRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
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


  virtual ~DeleteCustomizeRuleResponseBody() = default;
};
class DeleteCustomizeRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCustomizeRuleResponseBody> body{};

  DeleteCustomizeRuleResponse() {}

  explicit DeleteCustomizeRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCustomizeRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCustomizeRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCustomizeRuleResponse() = default;
};
class DeleteQuickQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> searchName{};

  DeleteQuickQueryRequest() {}

  explicit DeleteQuickQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
  }


  virtual ~DeleteQuickQueryRequest() = default;
};
class DeleteQuickQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteQuickQueryResponseBody() {}

  explicit DeleteQuickQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~DeleteQuickQueryResponseBody() = default;
};
class DeleteQuickQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteQuickQueryResponseBody> body{};

  DeleteQuickQueryResponse() {}

  explicit DeleteQuickQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteQuickQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteQuickQueryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteQuickQueryResponse() = default;
};
class DeleteWhiteRuleListRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> regionId{};

  DeleteWhiteRuleListRequest() {}

  explicit DeleteWhiteRuleListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteWhiteRuleListRequest() = default;
};
class DeleteWhiteRuleListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteWhiteRuleListResponseBody() {}

  explicit DeleteWhiteRuleListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
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


  virtual ~DeleteWhiteRuleListResponseBody() = default;
};
class DeleteWhiteRuleListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWhiteRuleListResponseBody> body{};

  DeleteWhiteRuleListResponse() {}

  explicit DeleteWhiteRuleListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteWhiteRuleListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWhiteRuleListResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWhiteRuleListResponse() = default;
};
class DescribeAggregateFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeAggregateFunctionRequest() {}

  explicit DescribeAggregateFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAggregateFunctionRequest() = default;
};
class DescribeAggregateFunctionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> function{};
  shared_ptr<string> functionName{};

  DescribeAggregateFunctionResponseBodyData() {}

  explicit DescribeAggregateFunctionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (function) {
      res["Function"] = boost::any(*function);
    }
    if (functionName) {
      res["FunctionName"] = boost::any(*functionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Function") != m.end() && !m["Function"].empty()) {
      function = make_shared<string>(boost::any_cast<string>(m["Function"]));
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["FunctionName"]));
    }
  }


  virtual ~DescribeAggregateFunctionResponseBodyData() = default;
};
class DescribeAggregateFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeAggregateFunctionResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAggregateFunctionResponseBody() {}

  explicit DescribeAggregateFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeAggregateFunctionResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAggregateFunctionResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeAggregateFunctionResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeAggregateFunctionResponseBody() = default;
};
class DescribeAggregateFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAggregateFunctionResponseBody> body{};

  DescribeAggregateFunctionResponse() {}

  explicit DescribeAggregateFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAggregateFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAggregateFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAggregateFunctionResponse() = default;
};
class DescribeAlertSceneByEventRequest : public Darabonba::Model {
public:
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> regionId{};

  DescribeAlertSceneByEventRequest() {}

  explicit DescribeAlertSceneByEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAlertSceneByEventRequest() = default;
};
class DescribeAlertSceneByEventResponseBodyDataTargets : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};
  shared_ptr<vector<string>> values{};

  DescribeAlertSceneByEventResponseBodyDataTargets() {}

  explicit DescribeAlertSceneByEventResponseBodyDataTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (values) {
      res["Values"] = boost::any(*values);
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
  }


  virtual ~DescribeAlertSceneByEventResponseBodyDataTargets() = default;
};
class DescribeAlertSceneByEventResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alertName{};
  shared_ptr<string> alertNameId{};
  shared_ptr<string> alertTile{};
  shared_ptr<string> alertTileId{};
  shared_ptr<string> alertType{};
  shared_ptr<string> alertTypeId{};
  shared_ptr<vector<DescribeAlertSceneByEventResponseBodyDataTargets>> targets{};

  DescribeAlertSceneByEventResponseBodyData() {}

  explicit DescribeAlertSceneByEventResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertName) {
      res["AlertName"] = boost::any(*alertName);
    }
    if (alertNameId) {
      res["AlertNameId"] = boost::any(*alertNameId);
    }
    if (alertTile) {
      res["AlertTile"] = boost::any(*alertTile);
    }
    if (alertTileId) {
      res["AlertTileId"] = boost::any(*alertTileId);
    }
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (alertTypeId) {
      res["AlertTypeId"] = boost::any(*alertTypeId);
    }
    if (targets) {
      vector<boost::any> temp1;
      for(auto item1:*targets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertName") != m.end() && !m["AlertName"].empty()) {
      alertName = make_shared<string>(boost::any_cast<string>(m["AlertName"]));
    }
    if (m.find("AlertNameId") != m.end() && !m["AlertNameId"].empty()) {
      alertNameId = make_shared<string>(boost::any_cast<string>(m["AlertNameId"]));
    }
    if (m.find("AlertTile") != m.end() && !m["AlertTile"].empty()) {
      alertTile = make_shared<string>(boost::any_cast<string>(m["AlertTile"]));
    }
    if (m.find("AlertTileId") != m.end() && !m["AlertTileId"].empty()) {
      alertTileId = make_shared<string>(boost::any_cast<string>(m["AlertTileId"]));
    }
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<string>(boost::any_cast<string>(m["AlertType"]));
    }
    if (m.find("AlertTypeId") != m.end() && !m["AlertTypeId"].empty()) {
      alertTypeId = make_shared<string>(boost::any_cast<string>(m["AlertTypeId"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<DescribeAlertSceneByEventResponseBodyDataTargets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlertSceneByEventResponseBodyDataTargets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targets = make_shared<vector<DescribeAlertSceneByEventResponseBodyDataTargets>>(expect1);
      }
    }
  }


  virtual ~DescribeAlertSceneByEventResponseBodyData() = default;
};
class DescribeAlertSceneByEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeAlertSceneByEventResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAlertSceneByEventResponseBody() {}

  explicit DescribeAlertSceneByEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeAlertSceneByEventResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlertSceneByEventResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeAlertSceneByEventResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeAlertSceneByEventResponseBody() = default;
};
class DescribeAlertSceneByEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAlertSceneByEventResponseBody> body{};

  DescribeAlertSceneByEventResponse() {}

  explicit DescribeAlertSceneByEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertSceneByEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAlertSceneByEventResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAlertSceneByEventResponse() = default;
};
class DescribeAlertSourceRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<vector<string>> level{};
  shared_ptr<string> regionId{};
  shared_ptr<long> startTime{};

  DescribeAlertSourceRequest() {}

  explicit DescribeAlertSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Level"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Level"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      level = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeAlertSourceRequest() = default;
};
class DescribeAlertSourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> source{};
  shared_ptr<string> sourceName{};

  DescribeAlertSourceResponseBodyData() {}

  explicit DescribeAlertSourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceName) {
      res["SourceName"] = boost::any(*sourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceName") != m.end() && !m["SourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["SourceName"]));
    }
  }


  virtual ~DescribeAlertSourceResponseBodyData() = default;
};
class DescribeAlertSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeAlertSourceResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAlertSourceResponseBody() {}

  explicit DescribeAlertSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeAlertSourceResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlertSourceResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeAlertSourceResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeAlertSourceResponseBody() = default;
};
class DescribeAlertSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAlertSourceResponseBody> body{};

  DescribeAlertSourceResponse() {}

  explicit DescribeAlertSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAlertSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAlertSourceResponse() = default;
};
class DescribeAlertSourceWithEventRequest : public Darabonba::Model {
public:
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> regionId{};

  DescribeAlertSourceWithEventRequest() {}

  explicit DescribeAlertSourceWithEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAlertSourceWithEventRequest() = default;
};
class DescribeAlertSourceWithEventResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> source{};
  shared_ptr<string> sourceName{};

  DescribeAlertSourceWithEventResponseBodyData() {}

  explicit DescribeAlertSourceWithEventResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceName) {
      res["SourceName"] = boost::any(*sourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceName") != m.end() && !m["SourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["SourceName"]));
    }
  }


  virtual ~DescribeAlertSourceWithEventResponseBodyData() = default;
};
class DescribeAlertSourceWithEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeAlertSourceWithEventResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAlertSourceWithEventResponseBody() {}

  explicit DescribeAlertSourceWithEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeAlertSourceWithEventResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlertSourceWithEventResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeAlertSourceWithEventResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeAlertSourceWithEventResponseBody() = default;
};
class DescribeAlertSourceWithEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAlertSourceWithEventResponseBody> body{};

  DescribeAlertSourceWithEventResponse() {}

  explicit DescribeAlertSourceWithEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertSourceWithEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAlertSourceWithEventResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAlertSourceWithEventResponse() = default;
};
class DescribeAlertTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeAlertTypeRequest() {}

  explicit DescribeAlertTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAlertTypeRequest() = default;
};
class DescribeAlertTypeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alertType{};
  shared_ptr<string> alertTypeMds{};

  DescribeAlertTypeResponseBodyData() {}

  explicit DescribeAlertTypeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (alertTypeMds) {
      res["AlertTypeMds"] = boost::any(*alertTypeMds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<string>(boost::any_cast<string>(m["AlertType"]));
    }
    if (m.find("AlertTypeMds") != m.end() && !m["AlertTypeMds"].empty()) {
      alertTypeMds = make_shared<string>(boost::any_cast<string>(m["AlertTypeMds"]));
    }
  }


  virtual ~DescribeAlertTypeResponseBodyData() = default;
};
class DescribeAlertTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeAlertTypeResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAlertTypeResponseBody() {}

  explicit DescribeAlertTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeAlertTypeResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlertTypeResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeAlertTypeResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeAlertTypeResponseBody() = default;
};
class DescribeAlertTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAlertTypeResponseBody> body{};

  DescribeAlertTypeResponse() {}

  explicit DescribeAlertTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAlertTypeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAlertTypeResponse() = default;
};
class DescribeAlertsCountRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> regionId{};
  shared_ptr<long> startTime{};

  DescribeAlertsCountRequest() {}

  explicit DescribeAlertsCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeAlertsCountRequest() = default;
};
class DescribeAlertsCountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> all{};
  shared_ptr<long> high{};
  shared_ptr<long> low{};
  shared_ptr<long> medium{};
  shared_ptr<long> productNum{};

  DescribeAlertsCountResponseBodyData() {}

  explicit DescribeAlertsCountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (high) {
      res["High"] = boost::any(*high);
    }
    if (low) {
      res["Low"] = boost::any(*low);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (productNum) {
      res["ProductNum"] = boost::any(*productNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<long>(boost::any_cast<long>(m["All"]));
    }
    if (m.find("High") != m.end() && !m["High"].empty()) {
      high = make_shared<long>(boost::any_cast<long>(m["High"]));
    }
    if (m.find("Low") != m.end() && !m["Low"].empty()) {
      low = make_shared<long>(boost::any_cast<long>(m["Low"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<long>(boost::any_cast<long>(m["Medium"]));
    }
    if (m.find("ProductNum") != m.end() && !m["ProductNum"].empty()) {
      productNum = make_shared<long>(boost::any_cast<long>(m["ProductNum"]));
    }
  }


  virtual ~DescribeAlertsCountResponseBodyData() = default;
};
class DescribeAlertsCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeAlertsCountResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAlertsCountResponseBody() {}

  explicit DescribeAlertsCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertsCountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAlertsCountResponseBodyData>(model1);
      }
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


  virtual ~DescribeAlertsCountResponseBody() = default;
};
class DescribeAlertsCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAlertsCountResponseBody> body{};

  DescribeAlertsCountResponse() {}

  explicit DescribeAlertsCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertsCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAlertsCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAlertsCountResponse() = default;
};
class DescribeAttackTimeLineRequest : public Darabonba::Model {
public:
  shared_ptr<string> assetName{};
  shared_ptr<long> endTime{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> regionId{};
  shared_ptr<long> startTime{};

  DescribeAttackTimeLineRequest() {}

  explicit DescribeAttackTimeLineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetName) {
      res["AssetName"] = boost::any(*assetName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssetName") != m.end() && !m["AssetName"].empty()) {
      assetName = make_shared<string>(boost::any_cast<string>(m["AssetName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeAttackTimeLineRequest() = default;
};
class DescribeAttackTimeLineResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alertLevel{};
  shared_ptr<string> alertName{};
  shared_ptr<string> alertNameCode{};
  shared_ptr<string> alertNameEn{};
  shared_ptr<string> alertSrcProd{};
  shared_ptr<string> alertSrcProdModule{};
  shared_ptr<long> alertTime{};
  shared_ptr<string> alertTitle{};
  shared_ptr<string> alertTitleEn{};
  shared_ptr<string> alertType{};
  shared_ptr<string> alertTypeCode{};
  shared_ptr<string> alertTypeEn{};
  shared_ptr<string> alertUuid{};
  shared_ptr<string> assetId{};
  shared_ptr<string> assetList{};
  shared_ptr<string> assetName{};
  shared_ptr<string> attCk{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> logTime{};

  DescribeAttackTimeLineResponseBodyData() {}

  explicit DescribeAttackTimeLineResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertLevel) {
      res["AlertLevel"] = boost::any(*alertLevel);
    }
    if (alertName) {
      res["AlertName"] = boost::any(*alertName);
    }
    if (alertNameCode) {
      res["AlertNameCode"] = boost::any(*alertNameCode);
    }
    if (alertNameEn) {
      res["AlertNameEn"] = boost::any(*alertNameEn);
    }
    if (alertSrcProd) {
      res["AlertSrcProd"] = boost::any(*alertSrcProd);
    }
    if (alertSrcProdModule) {
      res["AlertSrcProdModule"] = boost::any(*alertSrcProdModule);
    }
    if (alertTime) {
      res["AlertTime"] = boost::any(*alertTime);
    }
    if (alertTitle) {
      res["AlertTitle"] = boost::any(*alertTitle);
    }
    if (alertTitleEn) {
      res["AlertTitleEn"] = boost::any(*alertTitleEn);
    }
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (alertTypeCode) {
      res["AlertTypeCode"] = boost::any(*alertTypeCode);
    }
    if (alertTypeEn) {
      res["AlertTypeEn"] = boost::any(*alertTypeEn);
    }
    if (alertUuid) {
      res["AlertUuid"] = boost::any(*alertUuid);
    }
    if (assetId) {
      res["AssetId"] = boost::any(*assetId);
    }
    if (assetList) {
      res["AssetList"] = boost::any(*assetList);
    }
    if (assetName) {
      res["AssetName"] = boost::any(*assetName);
    }
    if (attCk) {
      res["AttCk"] = boost::any(*attCk);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (logTime) {
      res["LogTime"] = boost::any(*logTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertLevel") != m.end() && !m["AlertLevel"].empty()) {
      alertLevel = make_shared<string>(boost::any_cast<string>(m["AlertLevel"]));
    }
    if (m.find("AlertName") != m.end() && !m["AlertName"].empty()) {
      alertName = make_shared<string>(boost::any_cast<string>(m["AlertName"]));
    }
    if (m.find("AlertNameCode") != m.end() && !m["AlertNameCode"].empty()) {
      alertNameCode = make_shared<string>(boost::any_cast<string>(m["AlertNameCode"]));
    }
    if (m.find("AlertNameEn") != m.end() && !m["AlertNameEn"].empty()) {
      alertNameEn = make_shared<string>(boost::any_cast<string>(m["AlertNameEn"]));
    }
    if (m.find("AlertSrcProd") != m.end() && !m["AlertSrcProd"].empty()) {
      alertSrcProd = make_shared<string>(boost::any_cast<string>(m["AlertSrcProd"]));
    }
    if (m.find("AlertSrcProdModule") != m.end() && !m["AlertSrcProdModule"].empty()) {
      alertSrcProdModule = make_shared<string>(boost::any_cast<string>(m["AlertSrcProdModule"]));
    }
    if (m.find("AlertTime") != m.end() && !m["AlertTime"].empty()) {
      alertTime = make_shared<long>(boost::any_cast<long>(m["AlertTime"]));
    }
    if (m.find("AlertTitle") != m.end() && !m["AlertTitle"].empty()) {
      alertTitle = make_shared<string>(boost::any_cast<string>(m["AlertTitle"]));
    }
    if (m.find("AlertTitleEn") != m.end() && !m["AlertTitleEn"].empty()) {
      alertTitleEn = make_shared<string>(boost::any_cast<string>(m["AlertTitleEn"]));
    }
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<string>(boost::any_cast<string>(m["AlertType"]));
    }
    if (m.find("AlertTypeCode") != m.end() && !m["AlertTypeCode"].empty()) {
      alertTypeCode = make_shared<string>(boost::any_cast<string>(m["AlertTypeCode"]));
    }
    if (m.find("AlertTypeEn") != m.end() && !m["AlertTypeEn"].empty()) {
      alertTypeEn = make_shared<string>(boost::any_cast<string>(m["AlertTypeEn"]));
    }
    if (m.find("AlertUuid") != m.end() && !m["AlertUuid"].empty()) {
      alertUuid = make_shared<string>(boost::any_cast<string>(m["AlertUuid"]));
    }
    if (m.find("AssetId") != m.end() && !m["AssetId"].empty()) {
      assetId = make_shared<string>(boost::any_cast<string>(m["AssetId"]));
    }
    if (m.find("AssetList") != m.end() && !m["AssetList"].empty()) {
      assetList = make_shared<string>(boost::any_cast<string>(m["AssetList"]));
    }
    if (m.find("AssetName") != m.end() && !m["AssetName"].empty()) {
      assetName = make_shared<string>(boost::any_cast<string>(m["AssetName"]));
    }
    if (m.find("AttCk") != m.end() && !m["AttCk"].empty()) {
      attCk = make_shared<string>(boost::any_cast<string>(m["AttCk"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("LogTime") != m.end() && !m["LogTime"].empty()) {
      logTime = make_shared<string>(boost::any_cast<string>(m["LogTime"]));
    }
  }


  virtual ~DescribeAttackTimeLineResponseBodyData() = default;
};
class DescribeAttackTimeLineResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeAttackTimeLineResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAttackTimeLineResponseBody() {}

  explicit DescribeAttackTimeLineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeAttackTimeLineResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAttackTimeLineResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeAttackTimeLineResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeAttackTimeLineResponseBody() = default;
};
class DescribeAttackTimeLineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAttackTimeLineResponseBody> body{};

  DescribeAttackTimeLineResponse() {}

  explicit DescribeAttackTimeLineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAttackTimeLineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAttackTimeLineResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAttackTimeLineResponse() = default;
};
class DescribeAutomateResponseConfigCounterRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeAutomateResponseConfigCounterRequest() {}

  explicit DescribeAutomateResponseConfigCounterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAutomateResponseConfigCounterRequest() = default;
};
class DescribeAutomateResponseConfigCounterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> all{};
  shared_ptr<long> online{};

  DescribeAutomateResponseConfigCounterResponseBodyData() {}

  explicit DescribeAutomateResponseConfigCounterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<long>(boost::any_cast<long>(m["All"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<long>(boost::any_cast<long>(m["Online"]));
    }
  }


  virtual ~DescribeAutomateResponseConfigCounterResponseBodyData() = default;
};
class DescribeAutomateResponseConfigCounterResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeAutomateResponseConfigCounterResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAutomateResponseConfigCounterResponseBody() {}

  explicit DescribeAutomateResponseConfigCounterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAutomateResponseConfigCounterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAutomateResponseConfigCounterResponseBodyData>(model1);
      }
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


  virtual ~DescribeAutomateResponseConfigCounterResponseBody() = default;
};
class DescribeAutomateResponseConfigCounterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAutomateResponseConfigCounterResponseBody> body{};

  DescribeAutomateResponseConfigCounterResponse() {}

  explicit DescribeAutomateResponseConfigCounterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAutomateResponseConfigCounterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAutomateResponseConfigCounterResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAutomateResponseConfigCounterResponse() = default;
};
class DescribeAutomateResponseConfigFeatureRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoResponseType{};
  shared_ptr<string> regionId{};

  DescribeAutomateResponseConfigFeatureRequest() {}

  explicit DescribeAutomateResponseConfigFeatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoResponseType) {
      res["AutoResponseType"] = boost::any(*autoResponseType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoResponseType") != m.end() && !m["AutoResponseType"].empty()) {
      autoResponseType = make_shared<string>(boost::any_cast<string>(m["AutoResponseType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAutomateResponseConfigFeatureRequest() = default;
};
class DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> valueMds{};

  DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums() {}

  explicit DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (valueMds) {
      res["ValueMds"] = boost::any(*valueMds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("ValueMds") != m.end() && !m["ValueMds"].empty()) {
      valueMds = make_shared<string>(boost::any_cast<string>(m["ValueMds"]));
    }
  }


  virtual ~DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums() = default;
};
class DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators : public Darabonba::Model {
public:
  shared_ptr<bool> hasRightValue{};
  shared_ptr<long> index{};
  shared_ptr<string> operator_{};
  shared_ptr<string> operatorDescCn{};
  shared_ptr<string> operatorDescEn{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> supportDataType{};
  shared_ptr<vector<string>> supportTag{};

  DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators() {}

  explicit DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasRightValue) {
      res["HasRightValue"] = boost::any(*hasRightValue);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (operatorDescCn) {
      res["OperatorDescCn"] = boost::any(*operatorDescCn);
    }
    if (operatorDescEn) {
      res["OperatorDescEn"] = boost::any(*operatorDescEn);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    if (supportDataType) {
      res["SupportDataType"] = boost::any(*supportDataType);
    }
    if (supportTag) {
      res["SupportTag"] = boost::any(*supportTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasRightValue") != m.end() && !m["HasRightValue"].empty()) {
      hasRightValue = make_shared<bool>(boost::any_cast<bool>(m["HasRightValue"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("OperatorDescCn") != m.end() && !m["OperatorDescCn"].empty()) {
      operatorDescCn = make_shared<string>(boost::any_cast<string>(m["OperatorDescCn"]));
    }
    if (m.find("OperatorDescEn") != m.end() && !m["OperatorDescEn"].empty()) {
      operatorDescEn = make_shared<string>(boost::any_cast<string>(m["OperatorDescEn"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
    if (m.find("SupportDataType") != m.end() && !m["SupportDataType"].empty()) {
      supportDataType = make_shared<string>(boost::any_cast<string>(m["SupportDataType"]));
    }
    if (m.find("SupportTag") != m.end() && !m["SupportTag"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportTag"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportTag"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportTag = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators() = default;
};
class DescribeAutomateResponseConfigFeatureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataType{};
  shared_ptr<string> feature{};
  shared_ptr<vector<DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums>> rightValueEnums{};
  shared_ptr<vector<DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators>> supportOperators{};

  DescribeAutomateResponseConfigFeatureResponseBodyData() {}

  explicit DescribeAutomateResponseConfigFeatureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (feature) {
      res["Feature"] = boost::any(*feature);
    }
    if (rightValueEnums) {
      vector<boost::any> temp1;
      for(auto item1:*rightValueEnums){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RightValueEnums"] = boost::any(temp1);
    }
    if (supportOperators) {
      vector<boost::any> temp1;
      for(auto item1:*supportOperators){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportOperators"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Feature") != m.end() && !m["Feature"].empty()) {
      feature = make_shared<string>(boost::any_cast<string>(m["Feature"]));
    }
    if (m.find("RightValueEnums") != m.end() && !m["RightValueEnums"].empty()) {
      if (typeid(vector<boost::any>) == m["RightValueEnums"].type()) {
        vector<DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RightValueEnums"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rightValueEnums = make_shared<vector<DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums>>(expect1);
      }
    }
    if (m.find("SupportOperators") != m.end() && !m["SupportOperators"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportOperators"].type()) {
        vector<DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportOperators"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportOperators = make_shared<vector<DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators>>(expect1);
      }
    }
  }


  virtual ~DescribeAutomateResponseConfigFeatureResponseBodyData() = default;
};
class DescribeAutomateResponseConfigFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeAutomateResponseConfigFeatureResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAutomateResponseConfigFeatureResponseBody() {}

  explicit DescribeAutomateResponseConfigFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeAutomateResponseConfigFeatureResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAutomateResponseConfigFeatureResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeAutomateResponseConfigFeatureResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeAutomateResponseConfigFeatureResponseBody() = default;
};
class DescribeAutomateResponseConfigFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAutomateResponseConfigFeatureResponseBody> body{};

  DescribeAutomateResponseConfigFeatureResponse() {}

  explicit DescribeAutomateResponseConfigFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAutomateResponseConfigFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAutomateResponseConfigFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAutomateResponseConfigFeatureResponse() = default;
};
class DescribeAutomateResponseConfigPlayBooksRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoResponseType{};
  shared_ptr<string> entityType{};
  shared_ptr<string> regionId{};

  DescribeAutomateResponseConfigPlayBooksRequest() {}

  explicit DescribeAutomateResponseConfigPlayBooksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoResponseType) {
      res["AutoResponseType"] = boost::any(*autoResponseType);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoResponseType") != m.end() && !m["AutoResponseType"].empty()) {
      autoResponseType = make_shared<string>(boost::any_cast<string>(m["AutoResponseType"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAutomateResponseConfigPlayBooksRequest() = default;
};
class DescribeAutomateResponseConfigPlayBooksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};
  shared_ptr<string> paramType{};
  shared_ptr<string> uuid{};

  DescribeAutomateResponseConfigPlayBooksResponseBodyData() {}

  explicit DescribeAutomateResponseConfigPlayBooksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~DescribeAutomateResponseConfigPlayBooksResponseBodyData() = default;
};
class DescribeAutomateResponseConfigPlayBooksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeAutomateResponseConfigPlayBooksResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAutomateResponseConfigPlayBooksResponseBody() {}

  explicit DescribeAutomateResponseConfigPlayBooksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeAutomateResponseConfigPlayBooksResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAutomateResponseConfigPlayBooksResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeAutomateResponseConfigPlayBooksResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeAutomateResponseConfigPlayBooksResponseBody() = default;
};
class DescribeAutomateResponseConfigPlayBooksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAutomateResponseConfigPlayBooksResponseBody> body{};

  DescribeAutomateResponseConfigPlayBooksResponse() {}

  explicit DescribeAutomateResponseConfigPlayBooksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAutomateResponseConfigPlayBooksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAutomateResponseConfigPlayBooksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAutomateResponseConfigPlayBooksResponse() = default;
};
class DescribeCloudSiemAssetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> assetType{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  DescribeCloudSiemAssetsRequest() {}

  explicit DescribeCloudSiemAssetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetType) {
      res["AssetType"] = boost::any(*assetType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssetType") != m.end() && !m["AssetType"].empty()) {
      assetType = make_shared<string>(boost::any_cast<string>(m["AssetType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeCloudSiemAssetsRequest() = default;
};
class DescribeCloudSiemAssetsResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeCloudSiemAssetsResponseBodyDataPageInfo() {}

  explicit DescribeCloudSiemAssetsResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCloudSiemAssetsResponseBodyDataPageInfo() = default;
};
class DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> keyName{};
  shared_ptr<string> values{};

  DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo() {}

  explicit DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (keyName) {
      res["KeyName"] = boost::any(*keyName);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("KeyName") != m.end() && !m["KeyName"].empty()) {
      keyName = make_shared<string>(boost::any_cast<string>(m["KeyName"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      values = make_shared<string>(boost::any_cast<string>(m["Values"]));
    }
  }


  virtual ~DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo() = default;
};
class DescribeCloudSiemAssetsResponseBodyDataResponseData : public Darabonba::Model {
public:
  shared_ptr<string> alertUuid{};
  shared_ptr<long> aliuid{};
  shared_ptr<string> assetId{};
  shared_ptr<vector<DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo>> assetInfo{};
  shared_ptr<string> assetName{};
  shared_ptr<string> assetType{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<long> subUserId{};

  DescribeCloudSiemAssetsResponseBodyDataResponseData() {}

  explicit DescribeCloudSiemAssetsResponseBodyDataResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertUuid) {
      res["AlertUuid"] = boost::any(*alertUuid);
    }
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (assetId) {
      res["AssetId"] = boost::any(*assetId);
    }
    if (assetInfo) {
      vector<boost::any> temp1;
      for(auto item1:*assetInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AssetInfo"] = boost::any(temp1);
    }
    if (assetName) {
      res["AssetName"] = boost::any(*assetName);
    }
    if (assetType) {
      res["AssetType"] = boost::any(*assetType);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertUuid") != m.end() && !m["AlertUuid"].empty()) {
      alertUuid = make_shared<string>(boost::any_cast<string>(m["AlertUuid"]));
    }
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<long>(boost::any_cast<long>(m["Aliuid"]));
    }
    if (m.find("AssetId") != m.end() && !m["AssetId"].empty()) {
      assetId = make_shared<string>(boost::any_cast<string>(m["AssetId"]));
    }
    if (m.find("AssetInfo") != m.end() && !m["AssetInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["AssetInfo"].type()) {
        vector<DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AssetInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assetInfo = make_shared<vector<DescribeCloudSiemAssetsResponseBodyDataResponseDataAssetInfo>>(expect1);
      }
    }
    if (m.find("AssetName") != m.end() && !m["AssetName"].empty()) {
      assetName = make_shared<string>(boost::any_cast<string>(m["AssetName"]));
    }
    if (m.find("AssetType") != m.end() && !m["AssetType"].empty()) {
      assetType = make_shared<string>(boost::any_cast<string>(m["AssetType"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
  }


  virtual ~DescribeCloudSiemAssetsResponseBodyDataResponseData() = default;
};
class DescribeCloudSiemAssetsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribeCloudSiemAssetsResponseBodyDataPageInfo> pageInfo{};
  shared_ptr<vector<DescribeCloudSiemAssetsResponseBodyDataResponseData>> responseData{};

  DescribeCloudSiemAssetsResponseBodyData() {}

  explicit DescribeCloudSiemAssetsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseData) {
      vector<boost::any> temp1;
      for(auto item1:*responseData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResponseData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        DescribeCloudSiemAssetsResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<DescribeCloudSiemAssetsResponseBodyDataPageInfo>(model1);
      }
    }
    if (m.find("ResponseData") != m.end() && !m["ResponseData"].empty()) {
      if (typeid(vector<boost::any>) == m["ResponseData"].type()) {
        vector<DescribeCloudSiemAssetsResponseBodyDataResponseData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResponseData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCloudSiemAssetsResponseBodyDataResponseData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responseData = make_shared<vector<DescribeCloudSiemAssetsResponseBodyDataResponseData>>(expect1);
      }
    }
  }


  virtual ~DescribeCloudSiemAssetsResponseBodyData() = default;
};
class DescribeCloudSiemAssetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeCloudSiemAssetsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCloudSiemAssetsResponseBody() {}

  explicit DescribeCloudSiemAssetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCloudSiemAssetsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCloudSiemAssetsResponseBodyData>(model1);
      }
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


  virtual ~DescribeCloudSiemAssetsResponseBody() = default;
};
class DescribeCloudSiemAssetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCloudSiemAssetsResponseBody> body{};

  DescribeCloudSiemAssetsResponse() {}

  explicit DescribeCloudSiemAssetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCloudSiemAssetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCloudSiemAssetsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCloudSiemAssetsResponse() = default;
};
class DescribeCloudSiemAssetsCounterRequest : public Darabonba::Model {
public:
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> regionId{};

  DescribeCloudSiemAssetsCounterRequest() {}

  explicit DescribeCloudSiemAssetsCounterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeCloudSiemAssetsCounterRequest() = default;
};
class DescribeCloudSiemAssetsCounterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> assetNum{};
  shared_ptr<string> assetType{};

  DescribeCloudSiemAssetsCounterResponseBodyData() {}

  explicit DescribeCloudSiemAssetsCounterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetNum) {
      res["AssetNum"] = boost::any(*assetNum);
    }
    if (assetType) {
      res["AssetType"] = boost::any(*assetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssetNum") != m.end() && !m["AssetNum"].empty()) {
      assetNum = make_shared<long>(boost::any_cast<long>(m["AssetNum"]));
    }
    if (m.find("AssetType") != m.end() && !m["AssetType"].empty()) {
      assetType = make_shared<string>(boost::any_cast<string>(m["AssetType"]));
    }
  }


  virtual ~DescribeCloudSiemAssetsCounterResponseBodyData() = default;
};
class DescribeCloudSiemAssetsCounterResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeCloudSiemAssetsCounterResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCloudSiemAssetsCounterResponseBody() {}

  explicit DescribeCloudSiemAssetsCounterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeCloudSiemAssetsCounterResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCloudSiemAssetsCounterResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeCloudSiemAssetsCounterResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeCloudSiemAssetsCounterResponseBody() = default;
};
class DescribeCloudSiemAssetsCounterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCloudSiemAssetsCounterResponseBody> body{};

  DescribeCloudSiemAssetsCounterResponse() {}

  explicit DescribeCloudSiemAssetsCounterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCloudSiemAssetsCounterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCloudSiemAssetsCounterResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCloudSiemAssetsCounterResponse() = default;
};
class DescribeCloudSiemEventDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> regionId{};

  DescribeCloudSiemEventDetailRequest() {}

  explicit DescribeCloudSiemEventDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeCloudSiemEventDetailRequest() = default;
};
class DescribeCloudSiemEventDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> alertNum{};
  shared_ptr<long> aliuid{};
  shared_ptr<long> assetNum{};
  shared_ptr<vector<string>> attCkLabels{};
  shared_ptr<vector<string>> dataSources{};
  shared_ptr<string> description{};
  shared_ptr<string> descriptionEn{};
  shared_ptr<string> extContent{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> incidentName{};
  shared_ptr<string> incidentNameEn{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<string> threatLevel{};
  shared_ptr<double> threatScore{};

  DescribeCloudSiemEventDetailResponseBodyData() {}

  explicit DescribeCloudSiemEventDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertNum) {
      res["AlertNum"] = boost::any(*alertNum);
    }
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (assetNum) {
      res["AssetNum"] = boost::any(*assetNum);
    }
    if (attCkLabels) {
      res["AttCkLabels"] = boost::any(*attCkLabels);
    }
    if (dataSources) {
      res["DataSources"] = boost::any(*dataSources);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (descriptionEn) {
      res["DescriptionEn"] = boost::any(*descriptionEn);
    }
    if (extContent) {
      res["ExtContent"] = boost::any(*extContent);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (incidentName) {
      res["IncidentName"] = boost::any(*incidentName);
    }
    if (incidentNameEn) {
      res["IncidentNameEn"] = boost::any(*incidentNameEn);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (threatLevel) {
      res["ThreatLevel"] = boost::any(*threatLevel);
    }
    if (threatScore) {
      res["ThreatScore"] = boost::any(*threatScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertNum") != m.end() && !m["AlertNum"].empty()) {
      alertNum = make_shared<long>(boost::any_cast<long>(m["AlertNum"]));
    }
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<long>(boost::any_cast<long>(m["Aliuid"]));
    }
    if (m.find("AssetNum") != m.end() && !m["AssetNum"].empty()) {
      assetNum = make_shared<long>(boost::any_cast<long>(m["AssetNum"]));
    }
    if (m.find("AttCkLabels") != m.end() && !m["AttCkLabels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AttCkLabels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AttCkLabels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attCkLabels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DataSources") != m.end() && !m["DataSources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DataSources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DataSources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dataSources = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DescriptionEn") != m.end() && !m["DescriptionEn"].empty()) {
      descriptionEn = make_shared<string>(boost::any_cast<string>(m["DescriptionEn"]));
    }
    if (m.find("ExtContent") != m.end() && !m["ExtContent"].empty()) {
      extContent = make_shared<string>(boost::any_cast<string>(m["ExtContent"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IncidentName") != m.end() && !m["IncidentName"].empty()) {
      incidentName = make_shared<string>(boost::any_cast<string>(m["IncidentName"]));
    }
    if (m.find("IncidentNameEn") != m.end() && !m["IncidentNameEn"].empty()) {
      incidentNameEn = make_shared<string>(boost::any_cast<string>(m["IncidentNameEn"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ThreatLevel") != m.end() && !m["ThreatLevel"].empty()) {
      threatLevel = make_shared<string>(boost::any_cast<string>(m["ThreatLevel"]));
    }
    if (m.find("ThreatScore") != m.end() && !m["ThreatScore"].empty()) {
      threatScore = make_shared<double>(boost::any_cast<double>(m["ThreatScore"]));
    }
  }


  virtual ~DescribeCloudSiemEventDetailResponseBodyData() = default;
};
class DescribeCloudSiemEventDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeCloudSiemEventDetailResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCloudSiemEventDetailResponseBody() {}

  explicit DescribeCloudSiemEventDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCloudSiemEventDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCloudSiemEventDetailResponseBodyData>(model1);
      }
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


  virtual ~DescribeCloudSiemEventDetailResponseBody() = default;
};
class DescribeCloudSiemEventDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCloudSiemEventDetailResponseBody> body{};

  DescribeCloudSiemEventDetailResponse() {}

  explicit DescribeCloudSiemEventDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCloudSiemEventDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCloudSiemEventDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCloudSiemEventDetailResponse() = default;
};
class DescribeCloudSiemEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> assetId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> eventName{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> order{};
  shared_ptr<string> orderField{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};
  shared_ptr<vector<string>> threadLevel{};

  DescribeCloudSiemEventsRequest() {}

  explicit DescribeCloudSiemEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetId) {
      res["AssetId"] = boost::any(*assetId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (orderField) {
      res["OrderField"] = boost::any(*orderField);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (threadLevel) {
      res["ThreadLevel"] = boost::any(*threadLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssetId") != m.end() && !m["AssetId"].empty()) {
      assetId = make_shared<string>(boost::any_cast<string>(m["AssetId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OrderField") != m.end() && !m["OrderField"].empty()) {
      orderField = make_shared<string>(boost::any_cast<string>(m["OrderField"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ThreadLevel") != m.end() && !m["ThreadLevel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ThreadLevel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ThreadLevel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      threadLevel = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCloudSiemEventsRequest() = default;
};
class DescribeCloudSiemEventsResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeCloudSiemEventsResponseBodyDataPageInfo() {}

  explicit DescribeCloudSiemEventsResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCloudSiemEventsResponseBodyDataPageInfo() = default;
};
class DescribeCloudSiemEventsResponseBodyDataResponseData : public Darabonba::Model {
public:
  shared_ptr<long> alertNum{};
  shared_ptr<long> aliuid{};
  shared_ptr<long> assetNum{};
  shared_ptr<vector<string>> attCkLabels{};
  shared_ptr<vector<string>> dataSources{};
  shared_ptr<string> description{};
  shared_ptr<string> descriptionEn{};
  shared_ptr<string> extContent{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> incidentName{};
  shared_ptr<string> incidentNameEn{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<string> threatLevel{};
  shared_ptr<double> threatScore{};

  DescribeCloudSiemEventsResponseBodyDataResponseData() {}

  explicit DescribeCloudSiemEventsResponseBodyDataResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertNum) {
      res["AlertNum"] = boost::any(*alertNum);
    }
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (assetNum) {
      res["AssetNum"] = boost::any(*assetNum);
    }
    if (attCkLabels) {
      res["AttCkLabels"] = boost::any(*attCkLabels);
    }
    if (dataSources) {
      res["DataSources"] = boost::any(*dataSources);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (descriptionEn) {
      res["DescriptionEn"] = boost::any(*descriptionEn);
    }
    if (extContent) {
      res["ExtContent"] = boost::any(*extContent);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (incidentName) {
      res["IncidentName"] = boost::any(*incidentName);
    }
    if (incidentNameEn) {
      res["IncidentNameEn"] = boost::any(*incidentNameEn);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (threatLevel) {
      res["ThreatLevel"] = boost::any(*threatLevel);
    }
    if (threatScore) {
      res["ThreatScore"] = boost::any(*threatScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertNum") != m.end() && !m["AlertNum"].empty()) {
      alertNum = make_shared<long>(boost::any_cast<long>(m["AlertNum"]));
    }
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<long>(boost::any_cast<long>(m["Aliuid"]));
    }
    if (m.find("AssetNum") != m.end() && !m["AssetNum"].empty()) {
      assetNum = make_shared<long>(boost::any_cast<long>(m["AssetNum"]));
    }
    if (m.find("AttCkLabels") != m.end() && !m["AttCkLabels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AttCkLabels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AttCkLabels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attCkLabels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DataSources") != m.end() && !m["DataSources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DataSources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DataSources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dataSources = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DescriptionEn") != m.end() && !m["DescriptionEn"].empty()) {
      descriptionEn = make_shared<string>(boost::any_cast<string>(m["DescriptionEn"]));
    }
    if (m.find("ExtContent") != m.end() && !m["ExtContent"].empty()) {
      extContent = make_shared<string>(boost::any_cast<string>(m["ExtContent"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IncidentName") != m.end() && !m["IncidentName"].empty()) {
      incidentName = make_shared<string>(boost::any_cast<string>(m["IncidentName"]));
    }
    if (m.find("IncidentNameEn") != m.end() && !m["IncidentNameEn"].empty()) {
      incidentNameEn = make_shared<string>(boost::any_cast<string>(m["IncidentNameEn"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ThreatLevel") != m.end() && !m["ThreatLevel"].empty()) {
      threatLevel = make_shared<string>(boost::any_cast<string>(m["ThreatLevel"]));
    }
    if (m.find("ThreatScore") != m.end() && !m["ThreatScore"].empty()) {
      threatScore = make_shared<double>(boost::any_cast<double>(m["ThreatScore"]));
    }
  }


  virtual ~DescribeCloudSiemEventsResponseBodyDataResponseData() = default;
};
class DescribeCloudSiemEventsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribeCloudSiemEventsResponseBodyDataPageInfo> pageInfo{};
  shared_ptr<vector<DescribeCloudSiemEventsResponseBodyDataResponseData>> responseData{};

  DescribeCloudSiemEventsResponseBodyData() {}

  explicit DescribeCloudSiemEventsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseData) {
      vector<boost::any> temp1;
      for(auto item1:*responseData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResponseData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        DescribeCloudSiemEventsResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<DescribeCloudSiemEventsResponseBodyDataPageInfo>(model1);
      }
    }
    if (m.find("ResponseData") != m.end() && !m["ResponseData"].empty()) {
      if (typeid(vector<boost::any>) == m["ResponseData"].type()) {
        vector<DescribeCloudSiemEventsResponseBodyDataResponseData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResponseData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCloudSiemEventsResponseBodyDataResponseData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responseData = make_shared<vector<DescribeCloudSiemEventsResponseBodyDataResponseData>>(expect1);
      }
    }
  }


  virtual ~DescribeCloudSiemEventsResponseBodyData() = default;
};
class DescribeCloudSiemEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeCloudSiemEventsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCloudSiemEventsResponseBody() {}

  explicit DescribeCloudSiemEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCloudSiemEventsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCloudSiemEventsResponseBodyData>(model1);
      }
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


  virtual ~DescribeCloudSiemEventsResponseBody() = default;
};
class DescribeCloudSiemEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCloudSiemEventsResponseBody> body{};

  DescribeCloudSiemEventsResponse() {}

  explicit DescribeCloudSiemEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCloudSiemEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCloudSiemEventsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCloudSiemEventsResponse() = default;
};
class DescribeCustomizeRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ruleId{};

  DescribeCustomizeRuleRequest() {}

  explicit DescribeCustomizeRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DescribeCustomizeRuleRequest() = default;
};
class DescribeCustomizeRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alertType{};
  shared_ptr<string> alertTypeMds{};
  shared_ptr<long> aliuid{};
  shared_ptr<string> eventTransferExt{};
  shared_ptr<long> eventTransferSwitch{};
  shared_ptr<string> eventTransferType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> logSource{};
  shared_ptr<string> logSourceMds{};
  shared_ptr<string> logType{};
  shared_ptr<string> logTypeMds{};
  shared_ptr<string> queryCycle{};
  shared_ptr<string> ruleCondition{};
  shared_ptr<string> ruleDesc{};
  shared_ptr<string> ruleGroup{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleThreshold{};
  shared_ptr<string> ruleType{};
  shared_ptr<long> status{};
  shared_ptr<string> threatLevel{};

  DescribeCustomizeRuleResponseBodyData() {}

  explicit DescribeCustomizeRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (alertTypeMds) {
      res["AlertTypeMds"] = boost::any(*alertTypeMds);
    }
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (eventTransferExt) {
      res["EventTransferExt"] = boost::any(*eventTransferExt);
    }
    if (eventTransferSwitch) {
      res["EventTransferSwitch"] = boost::any(*eventTransferSwitch);
    }
    if (eventTransferType) {
      res["EventTransferType"] = boost::any(*eventTransferType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (logSource) {
      res["LogSource"] = boost::any(*logSource);
    }
    if (logSourceMds) {
      res["LogSourceMds"] = boost::any(*logSourceMds);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (logTypeMds) {
      res["LogTypeMds"] = boost::any(*logTypeMds);
    }
    if (queryCycle) {
      res["QueryCycle"] = boost::any(*queryCycle);
    }
    if (ruleCondition) {
      res["RuleCondition"] = boost::any(*ruleCondition);
    }
    if (ruleDesc) {
      res["RuleDesc"] = boost::any(*ruleDesc);
    }
    if (ruleGroup) {
      res["RuleGroup"] = boost::any(*ruleGroup);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleThreshold) {
      res["RuleThreshold"] = boost::any(*ruleThreshold);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (threatLevel) {
      res["ThreatLevel"] = boost::any(*threatLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<string>(boost::any_cast<string>(m["AlertType"]));
    }
    if (m.find("AlertTypeMds") != m.end() && !m["AlertTypeMds"].empty()) {
      alertTypeMds = make_shared<string>(boost::any_cast<string>(m["AlertTypeMds"]));
    }
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<long>(boost::any_cast<long>(m["Aliuid"]));
    }
    if (m.find("EventTransferExt") != m.end() && !m["EventTransferExt"].empty()) {
      eventTransferExt = make_shared<string>(boost::any_cast<string>(m["EventTransferExt"]));
    }
    if (m.find("EventTransferSwitch") != m.end() && !m["EventTransferSwitch"].empty()) {
      eventTransferSwitch = make_shared<long>(boost::any_cast<long>(m["EventTransferSwitch"]));
    }
    if (m.find("EventTransferType") != m.end() && !m["EventTransferType"].empty()) {
      eventTransferType = make_shared<string>(boost::any_cast<string>(m["EventTransferType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LogSource") != m.end() && !m["LogSource"].empty()) {
      logSource = make_shared<string>(boost::any_cast<string>(m["LogSource"]));
    }
    if (m.find("LogSourceMds") != m.end() && !m["LogSourceMds"].empty()) {
      logSourceMds = make_shared<string>(boost::any_cast<string>(m["LogSourceMds"]));
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("LogTypeMds") != m.end() && !m["LogTypeMds"].empty()) {
      logTypeMds = make_shared<string>(boost::any_cast<string>(m["LogTypeMds"]));
    }
    if (m.find("QueryCycle") != m.end() && !m["QueryCycle"].empty()) {
      queryCycle = make_shared<string>(boost::any_cast<string>(m["QueryCycle"]));
    }
    if (m.find("RuleCondition") != m.end() && !m["RuleCondition"].empty()) {
      ruleCondition = make_shared<string>(boost::any_cast<string>(m["RuleCondition"]));
    }
    if (m.find("RuleDesc") != m.end() && !m["RuleDesc"].empty()) {
      ruleDesc = make_shared<string>(boost::any_cast<string>(m["RuleDesc"]));
    }
    if (m.find("RuleGroup") != m.end() && !m["RuleGroup"].empty()) {
      ruleGroup = make_shared<string>(boost::any_cast<string>(m["RuleGroup"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleThreshold") != m.end() && !m["RuleThreshold"].empty()) {
      ruleThreshold = make_shared<string>(boost::any_cast<string>(m["RuleThreshold"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ThreatLevel") != m.end() && !m["ThreatLevel"].empty()) {
      threatLevel = make_shared<string>(boost::any_cast<string>(m["ThreatLevel"]));
    }
  }


  virtual ~DescribeCustomizeRuleResponseBodyData() = default;
};
class DescribeCustomizeRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeCustomizeRuleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCustomizeRuleResponseBody() {}

  explicit DescribeCustomizeRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCustomizeRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCustomizeRuleResponseBodyData>(model1);
      }
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


  virtual ~DescribeCustomizeRuleResponseBody() = default;
};
class DescribeCustomizeRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCustomizeRuleResponseBody> body{};

  DescribeCustomizeRuleResponse() {}

  explicit DescribeCustomizeRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCustomizeRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCustomizeRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCustomizeRuleResponse() = default;
};
class DescribeCustomizeRuleCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeCustomizeRuleCountRequest() {}

  explicit DescribeCustomizeRuleCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeCustomizeRuleCountRequest() = default;
};
class DescribeCustomizeRuleCountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> highRuleNum{};
  shared_ptr<long> inUseRuleNum{};
  shared_ptr<long> lowRuleNum{};
  shared_ptr<long> mediumRuleNum{};

  DescribeCustomizeRuleCountResponseBodyData() {}

  explicit DescribeCustomizeRuleCountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (highRuleNum) {
      res["HighRuleNum"] = boost::any(*highRuleNum);
    }
    if (inUseRuleNum) {
      res["InUseRuleNum"] = boost::any(*inUseRuleNum);
    }
    if (lowRuleNum) {
      res["LowRuleNum"] = boost::any(*lowRuleNum);
    }
    if (mediumRuleNum) {
      res["MediumRuleNum"] = boost::any(*mediumRuleNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HighRuleNum") != m.end() && !m["HighRuleNum"].empty()) {
      highRuleNum = make_shared<long>(boost::any_cast<long>(m["HighRuleNum"]));
    }
    if (m.find("InUseRuleNum") != m.end() && !m["InUseRuleNum"].empty()) {
      inUseRuleNum = make_shared<long>(boost::any_cast<long>(m["InUseRuleNum"]));
    }
    if (m.find("LowRuleNum") != m.end() && !m["LowRuleNum"].empty()) {
      lowRuleNum = make_shared<long>(boost::any_cast<long>(m["LowRuleNum"]));
    }
    if (m.find("MediumRuleNum") != m.end() && !m["MediumRuleNum"].empty()) {
      mediumRuleNum = make_shared<long>(boost::any_cast<long>(m["MediumRuleNum"]));
    }
  }


  virtual ~DescribeCustomizeRuleCountResponseBodyData() = default;
};
class DescribeCustomizeRuleCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeCustomizeRuleCountResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCustomizeRuleCountResponseBody() {}

  explicit DescribeCustomizeRuleCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCustomizeRuleCountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCustomizeRuleCountResponseBodyData>(model1);
      }
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


  virtual ~DescribeCustomizeRuleCountResponseBody() = default;
};
class DescribeCustomizeRuleCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCustomizeRuleCountResponseBody> body{};

  DescribeCustomizeRuleCountResponse() {}

  explicit DescribeCustomizeRuleCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCustomizeRuleCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCustomizeRuleCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCustomizeRuleCountResponse() = default;
};
class DescribeCustomizeRuleTestRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> regionId{};

  DescribeCustomizeRuleTestRequest() {}

  explicit DescribeCustomizeRuleTestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeCustomizeRuleTestRequest() = default;
};
class DescribeCustomizeRuleTestResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> simulateData{};
  shared_ptr<long> status{};

  DescribeCustomizeRuleTestResponseBodyData() {}

  explicit DescribeCustomizeRuleTestResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (simulateData) {
      res["SimulateData"] = boost::any(*simulateData);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("SimulateData") != m.end() && !m["SimulateData"].empty()) {
      simulateData = make_shared<string>(boost::any_cast<string>(m["SimulateData"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeCustomizeRuleTestResponseBodyData() = default;
};
class DescribeCustomizeRuleTestResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeCustomizeRuleTestResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCustomizeRuleTestResponseBody() {}

  explicit DescribeCustomizeRuleTestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCustomizeRuleTestResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCustomizeRuleTestResponseBodyData>(model1);
      }
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


  virtual ~DescribeCustomizeRuleTestResponseBody() = default;
};
class DescribeCustomizeRuleTestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCustomizeRuleTestResponseBody> body{};

  DescribeCustomizeRuleTestResponse() {}

  explicit DescribeCustomizeRuleTestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCustomizeRuleTestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCustomizeRuleTestResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCustomizeRuleTestResponse() = default;
};
class DescribeCustomizeRuleTestHistogramRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> regionId{};

  DescribeCustomizeRuleTestHistogramRequest() {}

  explicit DescribeCustomizeRuleTestHistogramRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeCustomizeRuleTestHistogramRequest() = default;
};
class DescribeCustomizeRuleTestHistogramResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<long> from{};
  shared_ptr<long> to{};

  DescribeCustomizeRuleTestHistogramResponseBodyData() {}

  explicit DescribeCustomizeRuleTestHistogramResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~DescribeCustomizeRuleTestHistogramResponseBodyData() = default;
};
class DescribeCustomizeRuleTestHistogramResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeCustomizeRuleTestHistogramResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCustomizeRuleTestHistogramResponseBody() {}

  explicit DescribeCustomizeRuleTestHistogramResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeCustomizeRuleTestHistogramResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCustomizeRuleTestHistogramResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeCustomizeRuleTestHistogramResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeCustomizeRuleTestHistogramResponseBody() = default;
};
class DescribeCustomizeRuleTestHistogramResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCustomizeRuleTestHistogramResponseBody> body{};

  DescribeCustomizeRuleTestHistogramResponse() {}

  explicit DescribeCustomizeRuleTestHistogramResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCustomizeRuleTestHistogramResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCustomizeRuleTestHistogramResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCustomizeRuleTestHistogramResponse() = default;
};
class DescribeDisposeAndPlaybookRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> entityType{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  DescribeDisposeAndPlaybookRequest() {}

  explicit DescribeDisposeAndPlaybookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDisposeAndPlaybookRequest() = default;
};
class DescribeDisposeAndPlaybookResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeDisposeAndPlaybookResponseBodyDataPageInfo() {}

  explicit DescribeDisposeAndPlaybookResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDisposeAndPlaybookResponseBodyDataPageInfo() = default;
};
class DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};
  shared_ptr<string> opCode{};
  shared_ptr<string> opLevel{};
  shared_ptr<string> taskConfig{};
  shared_ptr<bool> wafPlaybook{};

  DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList() {}

  explicit DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (opCode) {
      res["OpCode"] = boost::any(*opCode);
    }
    if (opLevel) {
      res["OpLevel"] = boost::any(*opLevel);
    }
    if (taskConfig) {
      res["TaskConfig"] = boost::any(*taskConfig);
    }
    if (wafPlaybook) {
      res["WafPlaybook"] = boost::any(*wafPlaybook);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OpCode") != m.end() && !m["OpCode"].empty()) {
      opCode = make_shared<string>(boost::any_cast<string>(m["OpCode"]));
    }
    if (m.find("OpLevel") != m.end() && !m["OpLevel"].empty()) {
      opLevel = make_shared<string>(boost::any_cast<string>(m["OpLevel"]));
    }
    if (m.find("TaskConfig") != m.end() && !m["TaskConfig"].empty()) {
      taskConfig = make_shared<string>(boost::any_cast<string>(m["TaskConfig"]));
    }
    if (m.find("WafPlaybook") != m.end() && !m["WafPlaybook"].empty()) {
      wafPlaybook = make_shared<bool>(boost::any_cast<bool>(m["WafPlaybook"]));
    }
  }


  virtual ~DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList() = default;
};
class DescribeDisposeAndPlaybookResponseBodyDataResponseData : public Darabonba::Model {
public:
  shared_ptr<long> alertNum{};
  shared_ptr<string> dispose{};
  shared_ptr<long> entityId{};
  shared_ptr<map<string, boost::any>> entityInfo{};
  shared_ptr<map<string, string>> opcodeMap{};
  shared_ptr<vector<string>> opcodeSet{};
  shared_ptr<vector<DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList>> playbookList{};
  shared_ptr<vector<boost::any>> scope{};

  DescribeDisposeAndPlaybookResponseBodyDataResponseData() {}

  explicit DescribeDisposeAndPlaybookResponseBodyDataResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertNum) {
      res["AlertNum"] = boost::any(*alertNum);
    }
    if (dispose) {
      res["Dispose"] = boost::any(*dispose);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityInfo) {
      res["EntityInfo"] = boost::any(*entityInfo);
    }
    if (opcodeMap) {
      res["OpcodeMap"] = boost::any(*opcodeMap);
    }
    if (opcodeSet) {
      res["OpcodeSet"] = boost::any(*opcodeSet);
    }
    if (playbookList) {
      vector<boost::any> temp1;
      for(auto item1:*playbookList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PlaybookList"] = boost::any(temp1);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertNum") != m.end() && !m["AlertNum"].empty()) {
      alertNum = make_shared<long>(boost::any_cast<long>(m["AlertNum"]));
    }
    if (m.find("Dispose") != m.end() && !m["Dispose"].empty()) {
      dispose = make_shared<string>(boost::any_cast<string>(m["Dispose"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityInfo") != m.end() && !m["EntityInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EntityInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      entityInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("OpcodeMap") != m.end() && !m["OpcodeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["OpcodeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      opcodeMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("OpcodeSet") != m.end() && !m["OpcodeSet"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OpcodeSet"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OpcodeSet"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      opcodeSet = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PlaybookList") != m.end() && !m["PlaybookList"].empty()) {
      if (typeid(vector<boost::any>) == m["PlaybookList"].type()) {
        vector<DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PlaybookList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        playbookList = make_shared<vector<DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList>>(expect1);
      }
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Scope"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Scope"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      scope = make_shared<vector<boost::any>>(toVec1);
    }
  }


  virtual ~DescribeDisposeAndPlaybookResponseBodyDataResponseData() = default;
};
class DescribeDisposeAndPlaybookResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribeDisposeAndPlaybookResponseBodyDataPageInfo> pageInfo{};
  shared_ptr<vector<DescribeDisposeAndPlaybookResponseBodyDataResponseData>> responseData{};

  DescribeDisposeAndPlaybookResponseBodyData() {}

  explicit DescribeDisposeAndPlaybookResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseData) {
      vector<boost::any> temp1;
      for(auto item1:*responseData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResponseData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        DescribeDisposeAndPlaybookResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<DescribeDisposeAndPlaybookResponseBodyDataPageInfo>(model1);
      }
    }
    if (m.find("ResponseData") != m.end() && !m["ResponseData"].empty()) {
      if (typeid(vector<boost::any>) == m["ResponseData"].type()) {
        vector<DescribeDisposeAndPlaybookResponseBodyDataResponseData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResponseData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDisposeAndPlaybookResponseBodyDataResponseData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responseData = make_shared<vector<DescribeDisposeAndPlaybookResponseBodyDataResponseData>>(expect1);
      }
    }
  }


  virtual ~DescribeDisposeAndPlaybookResponseBodyData() = default;
};
class DescribeDisposeAndPlaybookResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeDisposeAndPlaybookResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDisposeAndPlaybookResponseBody() {}

  explicit DescribeDisposeAndPlaybookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDisposeAndPlaybookResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDisposeAndPlaybookResponseBodyData>(model1);
      }
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


  virtual ~DescribeDisposeAndPlaybookResponseBody() = default;
};
class DescribeDisposeAndPlaybookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDisposeAndPlaybookResponseBody> body{};

  DescribeDisposeAndPlaybookResponse() {}

  explicit DescribeDisposeAndPlaybookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDisposeAndPlaybookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDisposeAndPlaybookResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDisposeAndPlaybookResponse() = default;
};
class DescribeDisposeStrategyPlaybookRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> regionId{};
  shared_ptr<long> startTime{};

  DescribeDisposeStrategyPlaybookRequest() {}

  explicit DescribeDisposeStrategyPlaybookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDisposeStrategyPlaybookRequest() = default;
};
class DescribeDisposeStrategyPlaybookResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> playbookName{};
  shared_ptr<string> playbookUuid{};

  DescribeDisposeStrategyPlaybookResponseBodyData() {}

  explicit DescribeDisposeStrategyPlaybookResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (playbookName) {
      res["PlaybookName"] = boost::any(*playbookName);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlaybookName") != m.end() && !m["PlaybookName"].empty()) {
      playbookName = make_shared<string>(boost::any_cast<string>(m["PlaybookName"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~DescribeDisposeStrategyPlaybookResponseBodyData() = default;
};
class DescribeDisposeStrategyPlaybookResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeDisposeStrategyPlaybookResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDisposeStrategyPlaybookResponseBody() {}

  explicit DescribeDisposeStrategyPlaybookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeDisposeStrategyPlaybookResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDisposeStrategyPlaybookResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeDisposeStrategyPlaybookResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeDisposeStrategyPlaybookResponseBody() = default;
};
class DescribeDisposeStrategyPlaybookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDisposeStrategyPlaybookResponseBody> body{};

  DescribeDisposeStrategyPlaybookResponse() {}

  explicit DescribeDisposeStrategyPlaybookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDisposeStrategyPlaybookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDisposeStrategyPlaybookResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDisposeStrategyPlaybookResponse() = default;
};
class DescribeEntityInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};
  shared_ptr<string> entityIdentity{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sophonTaskId{};

  DescribeEntityInfoRequest() {}

  explicit DescribeEntityInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityIdentity) {
      res["EntityIdentity"] = boost::any(*entityIdentity);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sophonTaskId) {
      res["SophonTaskId"] = boost::any(*sophonTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityIdentity") != m.end() && !m["EntityIdentity"].empty()) {
      entityIdentity = make_shared<string>(boost::any_cast<string>(m["EntityIdentity"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SophonTaskId") != m.end() && !m["SophonTaskId"].empty()) {
      sophonTaskId = make_shared<string>(boost::any_cast<string>(m["SophonTaskId"]));
    }
  }


  virtual ~DescribeEntityInfoRequest() = default;
};
class DescribeEntityInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};
  shared_ptr<map<string, boost::any>> entityInfo{};
  shared_ptr<string> entityType{};
  shared_ptr<map<string, boost::any>> tipInfo{};

  DescribeEntityInfoResponseBodyData() {}

  explicit DescribeEntityInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityInfo) {
      res["EntityInfo"] = boost::any(*entityInfo);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (tipInfo) {
      res["TipInfo"] = boost::any(*tipInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityInfo") != m.end() && !m["EntityInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EntityInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      entityInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("TipInfo") != m.end() && !m["TipInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TipInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tipInfo = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DescribeEntityInfoResponseBodyData() = default;
};
class DescribeEntityInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeEntityInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeEntityInfoResponseBody() {}

  explicit DescribeEntityInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEntityInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeEntityInfoResponseBodyData>(model1);
      }
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


  virtual ~DescribeEntityInfoResponseBody() = default;
};
class DescribeEntityInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEntityInfoResponseBody> body{};

  DescribeEntityInfoResponse() {}

  explicit DescribeEntityInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEntityInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEntityInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEntityInfoResponse() = default;
};
class DescribeEventCountByThreatLevelRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeEventCountByThreatLevelRequest() {}

  explicit DescribeEventCountByThreatLevelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeEventCountByThreatLevelRequest() = default;
};
class DescribeEventCountByThreatLevelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> eventNum{};
  shared_ptr<long> highLevelEventNum{};
  shared_ptr<long> lowLevelEventNum{};
  shared_ptr<long> mediumLevelEventNum{};
  shared_ptr<long> undealEventNum{};

  DescribeEventCountByThreatLevelResponseBodyData() {}

  explicit DescribeEventCountByThreatLevelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventNum) {
      res["EventNum"] = boost::any(*eventNum);
    }
    if (highLevelEventNum) {
      res["HighLevelEventNum"] = boost::any(*highLevelEventNum);
    }
    if (lowLevelEventNum) {
      res["LowLevelEventNum"] = boost::any(*lowLevelEventNum);
    }
    if (mediumLevelEventNum) {
      res["MediumLevelEventNum"] = boost::any(*mediumLevelEventNum);
    }
    if (undealEventNum) {
      res["UndealEventNum"] = boost::any(*undealEventNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventNum") != m.end() && !m["EventNum"].empty()) {
      eventNum = make_shared<long>(boost::any_cast<long>(m["EventNum"]));
    }
    if (m.find("HighLevelEventNum") != m.end() && !m["HighLevelEventNum"].empty()) {
      highLevelEventNum = make_shared<long>(boost::any_cast<long>(m["HighLevelEventNum"]));
    }
    if (m.find("LowLevelEventNum") != m.end() && !m["LowLevelEventNum"].empty()) {
      lowLevelEventNum = make_shared<long>(boost::any_cast<long>(m["LowLevelEventNum"]));
    }
    if (m.find("MediumLevelEventNum") != m.end() && !m["MediumLevelEventNum"].empty()) {
      mediumLevelEventNum = make_shared<long>(boost::any_cast<long>(m["MediumLevelEventNum"]));
    }
    if (m.find("UndealEventNum") != m.end() && !m["UndealEventNum"].empty()) {
      undealEventNum = make_shared<long>(boost::any_cast<long>(m["UndealEventNum"]));
    }
  }


  virtual ~DescribeEventCountByThreatLevelResponseBodyData() = default;
};
class DescribeEventCountByThreatLevelResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeEventCountByThreatLevelResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeEventCountByThreatLevelResponseBody() {}

  explicit DescribeEventCountByThreatLevelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEventCountByThreatLevelResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeEventCountByThreatLevelResponseBodyData>(model1);
      }
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


  virtual ~DescribeEventCountByThreatLevelResponseBody() = default;
};
class DescribeEventCountByThreatLevelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEventCountByThreatLevelResponseBody> body{};

  DescribeEventCountByThreatLevelResponse() {}

  explicit DescribeEventCountByThreatLevelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEventCountByThreatLevelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEventCountByThreatLevelResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEventCountByThreatLevelResponse() = default;
};
class DescribeEventDisposeRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  DescribeEventDisposeRequest() {}

  explicit DescribeEventDisposeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeEventDisposeRequest() = default;
};
class DescribeEventDisposeResponseBodyDataReceiverInfo : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> messageTitle{};
  shared_ptr<string> receiver{};
  shared_ptr<long> status{};

  DescribeEventDisposeResponseBodyDataReceiverInfo() {}

  explicit DescribeEventDisposeResponseBodyDataReceiverInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (messageTitle) {
      res["MessageTitle"] = boost::any(*messageTitle);
    }
    if (receiver) {
      res["Receiver"] = boost::any(*receiver);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("MessageTitle") != m.end() && !m["MessageTitle"].empty()) {
      messageTitle = make_shared<string>(boost::any_cast<string>(m["MessageTitle"]));
    }
    if (m.find("Receiver") != m.end() && !m["Receiver"].empty()) {
      receiver = make_shared<string>(boost::any_cast<string>(m["Receiver"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeEventDisposeResponseBodyDataReceiverInfo() = default;
};
class DescribeEventDisposeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<boost::any>> eventDispose{};
  shared_ptr<DescribeEventDisposeResponseBodyDataReceiverInfo> receiverInfo{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};

  DescribeEventDisposeResponseBodyData() {}

  explicit DescribeEventDisposeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventDispose) {
      res["EventDispose"] = boost::any(*eventDispose);
    }
    if (receiverInfo) {
      res["ReceiverInfo"] = receiverInfo ? boost::any(receiverInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventDispose") != m.end() && !m["EventDispose"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["EventDispose"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EventDispose"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      eventDispose = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("ReceiverInfo") != m.end() && !m["ReceiverInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReceiverInfo"].type()) {
        DescribeEventDisposeResponseBodyDataReceiverInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReceiverInfo"]));
        receiverInfo = make_shared<DescribeEventDisposeResponseBodyDataReceiverInfo>(model1);
      }
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeEventDisposeResponseBodyData() = default;
};
class DescribeEventDisposeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeEventDisposeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeEventDisposeResponseBody() {}

  explicit DescribeEventDisposeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEventDisposeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeEventDisposeResponseBodyData>(model1);
      }
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


  virtual ~DescribeEventDisposeResponseBody() = default;
};
class DescribeEventDisposeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEventDisposeResponseBody> body{};

  DescribeEventDisposeResponse() {}

  explicit DescribeEventDisposeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEventDisposeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEventDisposeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEventDisposeResponse() = default;
};
class DescribeJobStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> submitId{};

  DescribeJobStatusRequest() {}

  explicit DescribeJobStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeJobStatusRequest() = default;
};
class DescribeJobStatusResponseBodyDataErrTaskListProductListLogList : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> logCode{};
  shared_ptr<string> logStoreNamePattern{};
  shared_ptr<string> productCode{};
  shared_ptr<string> projectNamePattern{};
  shared_ptr<string> regionCode{};

  DescribeJobStatusResponseBodyDataErrTaskListProductListLogList() {}

  explicit DescribeJobStatusResponseBodyDataErrTaskListProductListLogList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeJobStatusResponseBodyDataErrTaskListProductListLogList() = default;
};
class DescribeJobStatusResponseBodyDataErrTaskListProductList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeJobStatusResponseBodyDataErrTaskListProductListLogList>> logList{};
  shared_ptr<string> productCode{};

  DescribeJobStatusResponseBodyDataErrTaskListProductList() {}

  explicit DescribeJobStatusResponseBodyDataErrTaskListProductList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeJobStatusResponseBodyDataErrTaskListProductListLogList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeJobStatusResponseBodyDataErrTaskListProductListLogList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logList = make_shared<vector<DescribeJobStatusResponseBodyDataErrTaskListProductListLogList>>(expect1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~DescribeJobStatusResponseBodyDataErrTaskListProductList() = default;
};
class DescribeJobStatusResponseBodyDataErrTaskList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeJobStatusResponseBodyDataErrTaskListProductList>> productList{};
  shared_ptr<long> userId{};

  DescribeJobStatusResponseBodyDataErrTaskList() {}

  explicit DescribeJobStatusResponseBodyDataErrTaskList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeJobStatusResponseBodyDataErrTaskListProductList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeJobStatusResponseBodyDataErrTaskListProductList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productList = make_shared<vector<DescribeJobStatusResponseBodyDataErrTaskListProductList>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~DescribeJobStatusResponseBodyDataErrTaskList() = default;
};
class DescribeJobStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<vector<DescribeJobStatusResponseBodyDataErrTaskList>> errTaskList{};
  shared_ptr<long> failedCount{};
  shared_ptr<long> finishCount{};
  shared_ptr<string> folderId{};
  shared_ptr<long> taskCount{};
  shared_ptr<string> taskStatus{};

  DescribeJobStatusResponseBodyData() {}

  explicit DescribeJobStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeJobStatusResponseBodyDataErrTaskList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErrTaskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeJobStatusResponseBodyDataErrTaskList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errTaskList = make_shared<vector<DescribeJobStatusResponseBodyDataErrTaskList>>(expect1);
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


  virtual ~DescribeJobStatusResponseBodyData() = default;
};
class DescribeJobStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeJobStatusResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeJobStatusResponseBody() {}

  explicit DescribeJobStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeJobStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeJobStatusResponseBodyData>(model1);
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


  virtual ~DescribeJobStatusResponseBody() = default;
};
class DescribeJobStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeJobStatusResponseBody> body{};

  DescribeJobStatusResponse() {}

  explicit DescribeJobStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeJobStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeJobStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeJobStatusResponse() = default;
};
class DescribeLogFieldsRequest : public Darabonba::Model {
public:
  shared_ptr<string> logSource{};
  shared_ptr<string> logType{};
  shared_ptr<string> regionId{};

  DescribeLogFieldsRequest() {}

  explicit DescribeLogFieldsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logSource) {
      res["LogSource"] = boost::any(*logSource);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogSource") != m.end() && !m["LogSource"].empty()) {
      logSource = make_shared<string>(boost::any_cast<string>(m["LogSource"]));
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeLogFieldsRequest() = default;
};
class DescribeLogFieldsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> activityName{};
  shared_ptr<string> fieldDesc{};
  shared_ptr<string> fieldName{};
  shared_ptr<string> fieldType{};
  shared_ptr<string> logCode{};

  DescribeLogFieldsResponseBodyData() {}

  explicit DescribeLogFieldsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityName) {
      res["ActivityName"] = boost::any(*activityName);
    }
    if (fieldDesc) {
      res["FieldDesc"] = boost::any(*fieldDesc);
    }
    if (fieldName) {
      res["FieldName"] = boost::any(*fieldName);
    }
    if (fieldType) {
      res["FieldType"] = boost::any(*fieldType);
    }
    if (logCode) {
      res["LogCode"] = boost::any(*logCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityName") != m.end() && !m["ActivityName"].empty()) {
      activityName = make_shared<string>(boost::any_cast<string>(m["ActivityName"]));
    }
    if (m.find("FieldDesc") != m.end() && !m["FieldDesc"].empty()) {
      fieldDesc = make_shared<string>(boost::any_cast<string>(m["FieldDesc"]));
    }
    if (m.find("FieldName") != m.end() && !m["FieldName"].empty()) {
      fieldName = make_shared<string>(boost::any_cast<string>(m["FieldName"]));
    }
    if (m.find("FieldType") != m.end() && !m["FieldType"].empty()) {
      fieldType = make_shared<string>(boost::any_cast<string>(m["FieldType"]));
    }
    if (m.find("LogCode") != m.end() && !m["LogCode"].empty()) {
      logCode = make_shared<string>(boost::any_cast<string>(m["LogCode"]));
    }
  }


  virtual ~DescribeLogFieldsResponseBodyData() = default;
};
class DescribeLogFieldsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeLogFieldsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeLogFieldsResponseBody() {}

  explicit DescribeLogFieldsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeLogFieldsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLogFieldsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeLogFieldsResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeLogFieldsResponseBody() = default;
};
class DescribeLogFieldsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLogFieldsResponseBody> body{};

  DescribeLogFieldsResponse() {}

  explicit DescribeLogFieldsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLogFieldsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLogFieldsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLogFieldsResponse() = default;
};
class DescribeLogSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> logType{};
  shared_ptr<string> regionId{};

  DescribeLogSourceRequest() {}

  explicit DescribeLogSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeLogSourceRequest() = default;
};
class DescribeLogSourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> logSource{};
  shared_ptr<string> logSourceName{};

  DescribeLogSourceResponseBodyData() {}

  explicit DescribeLogSourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logSource) {
      res["LogSource"] = boost::any(*logSource);
    }
    if (logSourceName) {
      res["LogSourceName"] = boost::any(*logSourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogSource") != m.end() && !m["LogSource"].empty()) {
      logSource = make_shared<string>(boost::any_cast<string>(m["LogSource"]));
    }
    if (m.find("LogSourceName") != m.end() && !m["LogSourceName"].empty()) {
      logSourceName = make_shared<string>(boost::any_cast<string>(m["LogSourceName"]));
    }
  }


  virtual ~DescribeLogSourceResponseBodyData() = default;
};
class DescribeLogSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeLogSourceResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeLogSourceResponseBody() {}

  explicit DescribeLogSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeLogSourceResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLogSourceResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeLogSourceResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeLogSourceResponseBody() = default;
};
class DescribeLogSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLogSourceResponseBody> body{};

  DescribeLogSourceResponse() {}

  explicit DescribeLogSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLogSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLogSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLogSourceResponse() = default;
};
class DescribeLogStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeLogStoreRequest() {}

  explicit DescribeLogStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeLogStoreRequest() = default;
};
class DescribeLogStoreResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> appendMeta{};
  shared_ptr<bool> autoSplit{};
  shared_ptr<bool> enableTracking{};
  shared_ptr<string> logStoreName{};
  shared_ptr<long> maxSplitShard{};
  shared_ptr<long> shardCount{};
  shared_ptr<long> ttl{};

  DescribeLogStoreResponseBodyData() {}

  explicit DescribeLogStoreResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appendMeta) {
      res["AppendMeta"] = boost::any(*appendMeta);
    }
    if (autoSplit) {
      res["AutoSplit"] = boost::any(*autoSplit);
    }
    if (enableTracking) {
      res["EnableTracking"] = boost::any(*enableTracking);
    }
    if (logStoreName) {
      res["LogStoreName"] = boost::any(*logStoreName);
    }
    if (maxSplitShard) {
      res["MaxSplitShard"] = boost::any(*maxSplitShard);
    }
    if (shardCount) {
      res["ShardCount"] = boost::any(*shardCount);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppendMeta") != m.end() && !m["AppendMeta"].empty()) {
      appendMeta = make_shared<bool>(boost::any_cast<bool>(m["AppendMeta"]));
    }
    if (m.find("AutoSplit") != m.end() && !m["AutoSplit"].empty()) {
      autoSplit = make_shared<bool>(boost::any_cast<bool>(m["AutoSplit"]));
    }
    if (m.find("EnableTracking") != m.end() && !m["EnableTracking"].empty()) {
      enableTracking = make_shared<bool>(boost::any_cast<bool>(m["EnableTracking"]));
    }
    if (m.find("LogStoreName") != m.end() && !m["LogStoreName"].empty()) {
      logStoreName = make_shared<string>(boost::any_cast<string>(m["LogStoreName"]));
    }
    if (m.find("MaxSplitShard") != m.end() && !m["MaxSplitShard"].empty()) {
      maxSplitShard = make_shared<long>(boost::any_cast<long>(m["MaxSplitShard"]));
    }
    if (m.find("ShardCount") != m.end() && !m["ShardCount"].empty()) {
      shardCount = make_shared<long>(boost::any_cast<long>(m["ShardCount"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
  }


  virtual ~DescribeLogStoreResponseBodyData() = default;
};
class DescribeLogStoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeLogStoreResponseBodyData> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeLogStoreResponseBody() {}

  explicit DescribeLogStoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
        DescribeLogStoreResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeLogStoreResponseBodyData>(model1);
      }
    }
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~DescribeLogStoreResponseBody() = default;
};
class DescribeLogStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLogStoreResponseBody> body{};

  DescribeLogStoreResponse() {}

  explicit DescribeLogStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLogStoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLogStoreResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLogStoreResponse() = default;
};
class DescribeLogTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeLogTypeRequest() {}

  explicit DescribeLogTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeLogTypeRequest() = default;
};
class DescribeLogTypeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> logType{};
  shared_ptr<string> logTypeName{};

  DescribeLogTypeResponseBodyData() {}

  explicit DescribeLogTypeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (logTypeName) {
      res["LogTypeName"] = boost::any(*logTypeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("LogTypeName") != m.end() && !m["LogTypeName"].empty()) {
      logTypeName = make_shared<string>(boost::any_cast<string>(m["LogTypeName"]));
    }
  }


  virtual ~DescribeLogTypeResponseBodyData() = default;
};
class DescribeLogTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeLogTypeResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeLogTypeResponseBody() {}

  explicit DescribeLogTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeLogTypeResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLogTypeResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeLogTypeResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeLogTypeResponseBody() = default;
};
class DescribeLogTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLogTypeResponseBody> body{};

  DescribeLogTypeResponse() {}

  explicit DescribeLogTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLogTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLogTypeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLogTypeResponse() = default;
};
class DescribeOperatorsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> sceneType{};

  DescribeOperatorsRequest() {}

  explicit DescribeOperatorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sceneType) {
      res["SceneType"] = boost::any(*sceneType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SceneType") != m.end() && !m["SceneType"].empty()) {
      sceneType = make_shared<string>(boost::any_cast<string>(m["SceneType"]));
    }
  }


  virtual ~DescribeOperatorsRequest() = default;
};
class DescribeOperatorsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<string> operator_{};
  shared_ptr<string> operatorDescCn{};
  shared_ptr<string> operatorDescEn{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> supportDataType{};
  shared_ptr<vector<string>> supportTag{};

  DescribeOperatorsResponseBodyData() {}

  explicit DescribeOperatorsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (operatorDescCn) {
      res["OperatorDescCn"] = boost::any(*operatorDescCn);
    }
    if (operatorDescEn) {
      res["OperatorDescEn"] = boost::any(*operatorDescEn);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    if (supportDataType) {
      res["SupportDataType"] = boost::any(*supportDataType);
    }
    if (supportTag) {
      res["SupportTag"] = boost::any(*supportTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("OperatorDescCn") != m.end() && !m["OperatorDescCn"].empty()) {
      operatorDescCn = make_shared<string>(boost::any_cast<string>(m["OperatorDescCn"]));
    }
    if (m.find("OperatorDescEn") != m.end() && !m["OperatorDescEn"].empty()) {
      operatorDescEn = make_shared<string>(boost::any_cast<string>(m["OperatorDescEn"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
    if (m.find("SupportDataType") != m.end() && !m["SupportDataType"].empty()) {
      supportDataType = make_shared<string>(boost::any_cast<string>(m["SupportDataType"]));
    }
    if (m.find("SupportTag") != m.end() && !m["SupportTag"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportTag"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportTag"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportTag = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeOperatorsResponseBodyData() = default;
};
class DescribeOperatorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeOperatorsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeOperatorsResponseBody() {}

  explicit DescribeOperatorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeOperatorsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOperatorsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeOperatorsResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeOperatorsResponseBody() = default;
};
class DescribeOperatorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOperatorsResponseBody> body{};

  DescribeOperatorsResponse() {}

  explicit DescribeOperatorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOperatorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOperatorsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOperatorsResponse() = default;
};
class DescribeScopeUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeScopeUsersRequest() {}

  explicit DescribeScopeUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeScopeUsersRequest() = default;
};
class DescribeScopeUsersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<vector<string>> domains{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> userName{};

  DescribeScopeUsersResponseBodyData() {}

  explicit DescribeScopeUsersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (domains) {
      res["Domains"] = boost::any(*domains);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Domains"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Domains"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domains = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DescribeScopeUsersResponseBodyData() = default;
};
class DescribeScopeUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeScopeUsersResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeScopeUsersResponseBody() {}

  explicit DescribeScopeUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeScopeUsersResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScopeUsersResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeScopeUsersResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeScopeUsersResponseBody() = default;
};
class DescribeScopeUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScopeUsersResponseBody> body{};

  DescribeScopeUsersResponse() {}

  explicit DescribeScopeUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScopeUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScopeUsersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScopeUsersResponse() = default;
};
class DescribeStorageRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeStorageRequest() {}

  explicit DescribeStorageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeStorageRequest() = default;
};
class DescribeStorageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeStorageResponseBody() {}

  explicit DescribeStorageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~DescribeStorageResponseBody() = default;
};
class DescribeStorageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeStorageResponseBody> body{};

  DescribeStorageResponse() {}

  explicit DescribeStorageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeStorageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStorageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStorageResponse() = default;
};
class DescribeWafScopeRequest : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};
  shared_ptr<string> regionId{};

  DescribeWafScopeRequest() {}

  explicit DescribeWafScopeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeWafScopeRequest() = default;
};
class DescribeWafScopeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> aliuid{};
  shared_ptr<vector<string>> domains{};
  shared_ptr<string> instanceId{};

  DescribeWafScopeResponseBodyData() {}

  explicit DescribeWafScopeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (domains) {
      res["Domains"] = boost::any(*domains);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<long>(boost::any_cast<long>(m["Aliuid"]));
    }
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Domains"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Domains"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domains = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeWafScopeResponseBodyData() = default;
};
class DescribeWafScopeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeWafScopeResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeWafScopeResponseBody() {}

  explicit DescribeWafScopeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeWafScopeResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWafScopeResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeWafScopeResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeWafScopeResponseBody() = default;
};
class DescribeWafScopeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWafScopeResponseBody> body{};

  DescribeWafScopeResponse() {}

  explicit DescribeWafScopeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWafScopeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWafScopeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWafScopeResponse() = default;
};
class DoQuickFieldRequest : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<string> index{};
  shared_ptr<long> page{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> reverse{};
  shared_ptr<long> size{};
  shared_ptr<long> to{};

  DoQuickFieldRequest() {}

  explicit DoQuickFieldRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["Index"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~DoQuickFieldRequest() = default;
};
class DoQuickFieldResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aggQueryd{};
  shared_ptr<bool> completeOrNot{};
  shared_ptr<long> count{};
  shared_ptr<bool> hasSQL{};
  shared_ptr<vector<string>> keys{};
  shared_ptr<long> limited{};
  shared_ptr<vector<boost::any>> logs{};
  shared_ptr<string> PQuery{};
  shared_ptr<long> processedRows{};
  shared_ptr<long> queryMode{};
  shared_ptr<string> whereQuery{};

  DoQuickFieldResponseBodyData() {}

  explicit DoQuickFieldResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggQueryd) {
      res["AggQueryd"] = boost::any(*aggQueryd);
    }
    if (completeOrNot) {
      res["CompleteOrNot"] = boost::any(*completeOrNot);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (hasSQL) {
      res["HasSQL"] = boost::any(*hasSQL);
    }
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    if (limited) {
      res["Limited"] = boost::any(*limited);
    }
    if (logs) {
      res["Logs"] = boost::any(*logs);
    }
    if (PQuery) {
      res["PQuery"] = boost::any(*PQuery);
    }
    if (processedRows) {
      res["ProcessedRows"] = boost::any(*processedRows);
    }
    if (queryMode) {
      res["QueryMode"] = boost::any(*queryMode);
    }
    if (whereQuery) {
      res["WhereQuery"] = boost::any(*whereQuery);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggQueryd") != m.end() && !m["AggQueryd"].empty()) {
      aggQueryd = make_shared<string>(boost::any_cast<string>(m["AggQueryd"]));
    }
    if (m.find("CompleteOrNot") != m.end() && !m["CompleteOrNot"].empty()) {
      completeOrNot = make_shared<bool>(boost::any_cast<bool>(m["CompleteOrNot"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("HasSQL") != m.end() && !m["HasSQL"].empty()) {
      hasSQL = make_shared<bool>(boost::any_cast<bool>(m["HasSQL"]));
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Limited") != m.end() && !m["Limited"].empty()) {
      limited = make_shared<long>(boost::any_cast<long>(m["Limited"]));
    }
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Logs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      logs = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("PQuery") != m.end() && !m["PQuery"].empty()) {
      PQuery = make_shared<string>(boost::any_cast<string>(m["PQuery"]));
    }
    if (m.find("ProcessedRows") != m.end() && !m["ProcessedRows"].empty()) {
      processedRows = make_shared<long>(boost::any_cast<long>(m["ProcessedRows"]));
    }
    if (m.find("QueryMode") != m.end() && !m["QueryMode"].empty()) {
      queryMode = make_shared<long>(boost::any_cast<long>(m["QueryMode"]));
    }
    if (m.find("WhereQuery") != m.end() && !m["WhereQuery"].empty()) {
      whereQuery = make_shared<string>(boost::any_cast<string>(m["WhereQuery"]));
    }
  }


  virtual ~DoQuickFieldResponseBodyData() = default;
};
class DoQuickFieldResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DoQuickFieldResponseBodyData> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DoQuickFieldResponseBody() {}

  explicit DoQuickFieldResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
        DoQuickFieldResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DoQuickFieldResponseBodyData>(model1);
      }
    }
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~DoQuickFieldResponseBody() = default;
};
class DoQuickFieldResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DoQuickFieldResponseBody> body{};

  DoQuickFieldResponse() {}

  explicit DoQuickFieldResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DoQuickFieldResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DoQuickFieldResponseBody>(model1);
      }
    }
  }


  virtual ~DoQuickFieldResponse() = default;
};
class DoSelfDelegateRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<long> delegateOrNot{};
  shared_ptr<string> regionId{};

  DoSelfDelegateRequest() {}

  explicit DoSelfDelegateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (delegateOrNot) {
      res["DelegateOrNot"] = boost::any(*delegateOrNot);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("DelegateOrNot") != m.end() && !m["DelegateOrNot"].empty()) {
      delegateOrNot = make_shared<long>(boost::any_cast<long>(m["DelegateOrNot"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DoSelfDelegateRequest() = default;
};
class DoSelfDelegateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DoSelfDelegateResponseBody() {}

  explicit DoSelfDelegateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~DoSelfDelegateResponseBody() = default;
};
class DoSelfDelegateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DoSelfDelegateResponseBody> body{};

  DoSelfDelegateResponse() {}

  explicit DoSelfDelegateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DoSelfDelegateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DoSelfDelegateResponseBody>(model1);
      }
    }
  }


  virtual ~DoSelfDelegateResponse() = default;
};
class GetCapacityRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetCapacityRequest() {}

  explicit GetCapacityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetCapacityRequest() = default;
};
class GetCapacityResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> existLogStore{};
  shared_ptr<long> preservedCapacity{};
  shared_ptr<double> usedCapacity{};

  GetCapacityResponseBodyData() {}

  explicit GetCapacityResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (existLogStore) {
      res["ExistLogStore"] = boost::any(*existLogStore);
    }
    if (preservedCapacity) {
      res["PreservedCapacity"] = boost::any(*preservedCapacity);
    }
    if (usedCapacity) {
      res["UsedCapacity"] = boost::any(*usedCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExistLogStore") != m.end() && !m["ExistLogStore"].empty()) {
      existLogStore = make_shared<bool>(boost::any_cast<bool>(m["ExistLogStore"]));
    }
    if (m.find("PreservedCapacity") != m.end() && !m["PreservedCapacity"].empty()) {
      preservedCapacity = make_shared<long>(boost::any_cast<long>(m["PreservedCapacity"]));
    }
    if (m.find("UsedCapacity") != m.end() && !m["UsedCapacity"].empty()) {
      usedCapacity = make_shared<double>(boost::any_cast<double>(m["UsedCapacity"]));
    }
  }


  virtual ~GetCapacityResponseBodyData() = default;
};
class GetCapacityResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetCapacityResponseBodyData> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCapacityResponseBody() {}

  explicit GetCapacityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
        GetCapacityResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCapacityResponseBodyData>(model1);
      }
    }
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~GetCapacityResponseBody() = default;
};
class GetCapacityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCapacityResponseBody> body{};

  GetCapacityResponse() {}

  explicit GetCapacityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCapacityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCapacityResponseBody>(model1);
      }
    }
  }


  virtual ~GetCapacityResponse() = default;
};
class GetHistogramsRequest : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<string> query{};
  shared_ptr<string> regionId{};
  shared_ptr<long> to{};

  GetHistogramsRequest() {}

  explicit GetHistogramsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~GetHistogramsRequest() = default;
};
class GetHistogramsResponseBodyDataHistograms : public Darabonba::Model {
public:
  shared_ptr<bool> completedOrNot{};
  shared_ptr<long> count{};
  shared_ptr<long> from{};
  shared_ptr<long> to{};

  GetHistogramsResponseBodyDataHistograms() {}

  explicit GetHistogramsResponseBodyDataHistograms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedOrNot) {
      res["CompletedOrNot"] = boost::any(*completedOrNot);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedOrNot") != m.end() && !m["CompletedOrNot"].empty()) {
      completedOrNot = make_shared<bool>(boost::any_cast<bool>(m["CompletedOrNot"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~GetHistogramsResponseBodyDataHistograms() = default;
};
class GetHistogramsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetHistogramsResponseBodyDataHistograms>> histograms{};
  shared_ptr<string> server{};
  shared_ptr<long> totalCount{};

  GetHistogramsResponseBodyData() {}

  explicit GetHistogramsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (histograms) {
      vector<boost::any> temp1;
      for(auto item1:*histograms){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Histograms"] = boost::any(temp1);
    }
    if (server) {
      res["Server"] = boost::any(*server);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Histograms") != m.end() && !m["Histograms"].empty()) {
      if (typeid(vector<boost::any>) == m["Histograms"].type()) {
        vector<GetHistogramsResponseBodyDataHistograms> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Histograms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHistogramsResponseBodyDataHistograms model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        histograms = make_shared<vector<GetHistogramsResponseBodyDataHistograms>>(expect1);
      }
    }
    if (m.find("Server") != m.end() && !m["Server"].empty()) {
      server = make_shared<string>(boost::any_cast<string>(m["Server"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetHistogramsResponseBodyData() = default;
};
class GetHistogramsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetHistogramsResponseBodyData> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetHistogramsResponseBody() {}

  explicit GetHistogramsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
        GetHistogramsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHistogramsResponseBodyData>(model1);
      }
    }
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~GetHistogramsResponseBody() = default;
};
class GetHistogramsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHistogramsResponseBody> body{};

  GetHistogramsResponse() {}

  explicit GetHistogramsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHistogramsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHistogramsResponseBody>(model1);
      }
    }
  }


  virtual ~GetHistogramsResponse() = default;
};
class GetLogsRequest : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> reverseOrNot{};
  shared_ptr<long> to{};
  shared_ptr<long> total{};

  GetLogsRequest() {}

  explicit GetLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (reverseOrNot) {
      res["ReverseOrNot"] = boost::any(*reverseOrNot);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReverseOrNot") != m.end() && !m["ReverseOrNot"].empty()) {
      reverseOrNot = make_shared<bool>(boost::any_cast<bool>(m["ReverseOrNot"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetLogsRequest() = default;
};
class GetLogsResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  GetLogsResponseBodyDataPageInfo() {}

  explicit GetLogsResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetLogsResponseBodyDataPageInfo() = default;
};
class GetLogsResponseBodyDataResponseData : public Darabonba::Model {
public:
  shared_ptr<bool> completeOrNot{};
  shared_ptr<long> cost{};
  shared_ptr<long> count{};
  shared_ptr<bool> hasSql{};
  shared_ptr<vector<string>> keys{};
  shared_ptr<vector<boost::any>> lines{};

  GetLogsResponseBodyDataResponseData() {}

  explicit GetLogsResponseBodyDataResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completeOrNot) {
      res["CompleteOrNot"] = boost::any(*completeOrNot);
    }
    if (cost) {
      res["Cost"] = boost::any(*cost);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (hasSql) {
      res["HasSql"] = boost::any(*hasSql);
    }
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    if (lines) {
      res["Lines"] = boost::any(*lines);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompleteOrNot") != m.end() && !m["CompleteOrNot"].empty()) {
      completeOrNot = make_shared<bool>(boost::any_cast<bool>(m["CompleteOrNot"]));
    }
    if (m.find("Cost") != m.end() && !m["Cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["Cost"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("HasSql") != m.end() && !m["HasSql"].empty()) {
      hasSql = make_shared<bool>(boost::any_cast<bool>(m["HasSql"]));
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Lines") != m.end() && !m["Lines"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Lines"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Lines"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      lines = make_shared<vector<boost::any>>(toVec1);
    }
  }


  virtual ~GetLogsResponseBodyDataResponseData() = default;
};
class GetLogsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetLogsResponseBodyDataPageInfo> pageInfo{};
  shared_ptr<GetLogsResponseBodyDataResponseData> responseData{};

  GetLogsResponseBodyData() {}

  explicit GetLogsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseData) {
      res["ResponseData"] = responseData ? boost::any(responseData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        GetLogsResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<GetLogsResponseBodyDataPageInfo>(model1);
      }
    }
    if (m.find("ResponseData") != m.end() && !m["ResponseData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResponseData"].type()) {
        GetLogsResponseBodyDataResponseData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResponseData"]));
        responseData = make_shared<GetLogsResponseBodyDataResponseData>(model1);
      }
    }
  }


  virtual ~GetLogsResponseBodyData() = default;
};
class GetLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetLogsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetLogsResponseBody() {}

  explicit GetLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLogsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetLogsResponseBodyData>(model1);
      }
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


  virtual ~GetLogsResponseBody() = default;
};
class GetLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLogsResponseBody> body{};

  GetLogsResponse() {}

  explicit GetLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLogsResponseBody>(model1);
      }
    }
  }


  virtual ~GetLogsResponse() = default;
};
class GetQuickQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> searchName{};

  GetQuickQueryRequest() {}

  explicit GetQuickQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
  }


  virtual ~GetQuickQueryRequest() = default;
};
class GetQuickQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetQuickQueryResponseBody() {}

  explicit GetQuickQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~GetQuickQueryResponseBody() = default;
};
class GetQuickQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuickQueryResponseBody> body{};

  GetQuickQueryResponse() {}

  explicit GetQuickQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetQuickQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuickQueryResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuickQueryResponse() = default;
};
class GetStorageRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetStorageRequest() {}

  explicit GetStorageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetStorageRequest() = default;
};
class GetStorageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> canOperate{};
  shared_ptr<bool> displayRegion{};
  shared_ptr<string> region{};
  shared_ptr<long> ttl{};

  GetStorageResponseBodyData() {}

  explicit GetStorageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canOperate) {
      res["CanOperate"] = boost::any(*canOperate);
    }
    if (displayRegion) {
      res["DisplayRegion"] = boost::any(*displayRegion);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanOperate") != m.end() && !m["CanOperate"].empty()) {
      canOperate = make_shared<bool>(boost::any_cast<bool>(m["CanOperate"]));
    }
    if (m.find("DisplayRegion") != m.end() && !m["DisplayRegion"].empty()) {
      displayRegion = make_shared<bool>(boost::any_cast<bool>(m["DisplayRegion"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
  }


  virtual ~GetStorageResponseBodyData() = default;
};
class GetStorageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetStorageResponseBodyData> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetStorageResponseBody() {}

  explicit GetStorageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
        GetStorageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetStorageResponseBodyData>(model1);
      }
    }
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~GetStorageResponseBody() = default;
};
class GetStorageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStorageResponseBody> body{};

  GetStorageResponse() {}

  explicit GetStorageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStorageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStorageResponseBody>(model1);
      }
    }
  }


  virtual ~GetStorageResponse() = default;
};
class ListAutomateResponseConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionType{};
  shared_ptr<string> autoResponseType{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> id{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ruleName{};
  shared_ptr<long> status{};
  shared_ptr<long> subUserId{};

  ListAutomateResponseConfigsRequest() {}

  explicit ListAutomateResponseConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (autoResponseType) {
      res["AutoResponseType"] = boost::any(*autoResponseType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("AutoResponseType") != m.end() && !m["AutoResponseType"].empty()) {
      autoResponseType = make_shared<string>(boost::any_cast<string>(m["AutoResponseType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
  }


  virtual ~ListAutomateResponseConfigsRequest() = default;
};
class ListAutomateResponseConfigsResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListAutomateResponseConfigsResponseBodyDataPageInfo() {}

  explicit ListAutomateResponseConfigsResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAutomateResponseConfigsResponseBodyDataPageInfo() = default;
};
class ListAutomateResponseConfigsResponseBodyDataResponseData : public Darabonba::Model {
public:
  shared_ptr<string> actionConfig{};
  shared_ptr<string> actionType{};
  shared_ptr<long> aliuid{};
  shared_ptr<string> autoResponseType{};
  shared_ptr<string> executionCondition{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> ruleName{};
  shared_ptr<long> status{};
  shared_ptr<long> subUserId{};

  ListAutomateResponseConfigsResponseBodyDataResponseData() {}

  explicit ListAutomateResponseConfigsResponseBodyDataResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionConfig) {
      res["ActionConfig"] = boost::any(*actionConfig);
    }
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (autoResponseType) {
      res["AutoResponseType"] = boost::any(*autoResponseType);
    }
    if (executionCondition) {
      res["ExecutionCondition"] = boost::any(*executionCondition);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionConfig") != m.end() && !m["ActionConfig"].empty()) {
      actionConfig = make_shared<string>(boost::any_cast<string>(m["ActionConfig"]));
    }
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<long>(boost::any_cast<long>(m["Aliuid"]));
    }
    if (m.find("AutoResponseType") != m.end() && !m["AutoResponseType"].empty()) {
      autoResponseType = make_shared<string>(boost::any_cast<string>(m["AutoResponseType"]));
    }
    if (m.find("ExecutionCondition") != m.end() && !m["ExecutionCondition"].empty()) {
      executionCondition = make_shared<string>(boost::any_cast<string>(m["ExecutionCondition"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
  }


  virtual ~ListAutomateResponseConfigsResponseBodyDataResponseData() = default;
};
class ListAutomateResponseConfigsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ListAutomateResponseConfigsResponseBodyDataPageInfo> pageInfo{};
  shared_ptr<vector<ListAutomateResponseConfigsResponseBodyDataResponseData>> responseData{};

  ListAutomateResponseConfigsResponseBodyData() {}

  explicit ListAutomateResponseConfigsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseData) {
      vector<boost::any> temp1;
      for(auto item1:*responseData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResponseData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        ListAutomateResponseConfigsResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<ListAutomateResponseConfigsResponseBodyDataPageInfo>(model1);
      }
    }
    if (m.find("ResponseData") != m.end() && !m["ResponseData"].empty()) {
      if (typeid(vector<boost::any>) == m["ResponseData"].type()) {
        vector<ListAutomateResponseConfigsResponseBodyDataResponseData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResponseData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAutomateResponseConfigsResponseBodyDataResponseData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responseData = make_shared<vector<ListAutomateResponseConfigsResponseBodyDataResponseData>>(expect1);
      }
    }
  }


  virtual ~ListAutomateResponseConfigsResponseBodyData() = default;
};
class ListAutomateResponseConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListAutomateResponseConfigsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAutomateResponseConfigsResponseBody() {}

  explicit ListAutomateResponseConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAutomateResponseConfigsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAutomateResponseConfigsResponseBodyData>(model1);
      }
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


  virtual ~ListAutomateResponseConfigsResponseBody() = default;
};
class ListAutomateResponseConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAutomateResponseConfigsResponseBody> body{};

  ListAutomateResponseConfigsResponse() {}

  explicit ListAutomateResponseConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAutomateResponseConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAutomateResponseConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAutomateResponseConfigsResponse() = default;
};
class ListCloudSiemCustomizeRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertType{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> id{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};
  shared_ptr<vector<string>> threatLevel{};

  ListCloudSiemCustomizeRulesRequest() {}

  explicit ListCloudSiemCustomizeRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (threatLevel) {
      res["ThreatLevel"] = boost::any(*threatLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<string>(boost::any_cast<string>(m["AlertType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ThreatLevel") != m.end() && !m["ThreatLevel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ThreatLevel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ThreatLevel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      threatLevel = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListCloudSiemCustomizeRulesRequest() = default;
};
class ListCloudSiemCustomizeRulesResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListCloudSiemCustomizeRulesResponseBodyDataPageInfo() {}

  explicit ListCloudSiemCustomizeRulesResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCloudSiemCustomizeRulesResponseBodyDataPageInfo() = default;
};
class ListCloudSiemCustomizeRulesResponseBodyDataResponseData : public Darabonba::Model {
public:
  shared_ptr<string> alertType{};
  shared_ptr<string> alertTypeMds{};
  shared_ptr<long> aliuid{};
  shared_ptr<string> eventTransferExt{};
  shared_ptr<long> eventTransferSwitch{};
  shared_ptr<string> eventTransferType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> logSource{};
  shared_ptr<string> logSourceMds{};
  shared_ptr<string> logType{};
  shared_ptr<string> logTypeMds{};
  shared_ptr<string> queryCycle{};
  shared_ptr<string> ruleCondition{};
  shared_ptr<string> ruleDesc{};
  shared_ptr<string> ruleGroup{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleThreshold{};
  shared_ptr<string> ruleType{};
  shared_ptr<long> status{};
  shared_ptr<string> threatLevel{};

  ListCloudSiemCustomizeRulesResponseBodyDataResponseData() {}

  explicit ListCloudSiemCustomizeRulesResponseBodyDataResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (alertTypeMds) {
      res["AlertTypeMds"] = boost::any(*alertTypeMds);
    }
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (eventTransferExt) {
      res["EventTransferExt"] = boost::any(*eventTransferExt);
    }
    if (eventTransferSwitch) {
      res["EventTransferSwitch"] = boost::any(*eventTransferSwitch);
    }
    if (eventTransferType) {
      res["EventTransferType"] = boost::any(*eventTransferType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (logSource) {
      res["LogSource"] = boost::any(*logSource);
    }
    if (logSourceMds) {
      res["LogSourceMds"] = boost::any(*logSourceMds);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (logTypeMds) {
      res["LogTypeMds"] = boost::any(*logTypeMds);
    }
    if (queryCycle) {
      res["QueryCycle"] = boost::any(*queryCycle);
    }
    if (ruleCondition) {
      res["RuleCondition"] = boost::any(*ruleCondition);
    }
    if (ruleDesc) {
      res["RuleDesc"] = boost::any(*ruleDesc);
    }
    if (ruleGroup) {
      res["RuleGroup"] = boost::any(*ruleGroup);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleThreshold) {
      res["RuleThreshold"] = boost::any(*ruleThreshold);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (threatLevel) {
      res["ThreatLevel"] = boost::any(*threatLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<string>(boost::any_cast<string>(m["AlertType"]));
    }
    if (m.find("AlertTypeMds") != m.end() && !m["AlertTypeMds"].empty()) {
      alertTypeMds = make_shared<string>(boost::any_cast<string>(m["AlertTypeMds"]));
    }
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<long>(boost::any_cast<long>(m["Aliuid"]));
    }
    if (m.find("EventTransferExt") != m.end() && !m["EventTransferExt"].empty()) {
      eventTransferExt = make_shared<string>(boost::any_cast<string>(m["EventTransferExt"]));
    }
    if (m.find("EventTransferSwitch") != m.end() && !m["EventTransferSwitch"].empty()) {
      eventTransferSwitch = make_shared<long>(boost::any_cast<long>(m["EventTransferSwitch"]));
    }
    if (m.find("EventTransferType") != m.end() && !m["EventTransferType"].empty()) {
      eventTransferType = make_shared<string>(boost::any_cast<string>(m["EventTransferType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LogSource") != m.end() && !m["LogSource"].empty()) {
      logSource = make_shared<string>(boost::any_cast<string>(m["LogSource"]));
    }
    if (m.find("LogSourceMds") != m.end() && !m["LogSourceMds"].empty()) {
      logSourceMds = make_shared<string>(boost::any_cast<string>(m["LogSourceMds"]));
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("LogTypeMds") != m.end() && !m["LogTypeMds"].empty()) {
      logTypeMds = make_shared<string>(boost::any_cast<string>(m["LogTypeMds"]));
    }
    if (m.find("QueryCycle") != m.end() && !m["QueryCycle"].empty()) {
      queryCycle = make_shared<string>(boost::any_cast<string>(m["QueryCycle"]));
    }
    if (m.find("RuleCondition") != m.end() && !m["RuleCondition"].empty()) {
      ruleCondition = make_shared<string>(boost::any_cast<string>(m["RuleCondition"]));
    }
    if (m.find("RuleDesc") != m.end() && !m["RuleDesc"].empty()) {
      ruleDesc = make_shared<string>(boost::any_cast<string>(m["RuleDesc"]));
    }
    if (m.find("RuleGroup") != m.end() && !m["RuleGroup"].empty()) {
      ruleGroup = make_shared<string>(boost::any_cast<string>(m["RuleGroup"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleThreshold") != m.end() && !m["RuleThreshold"].empty()) {
      ruleThreshold = make_shared<string>(boost::any_cast<string>(m["RuleThreshold"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ThreatLevel") != m.end() && !m["ThreatLevel"].empty()) {
      threatLevel = make_shared<string>(boost::any_cast<string>(m["ThreatLevel"]));
    }
  }


  virtual ~ListCloudSiemCustomizeRulesResponseBodyDataResponseData() = default;
};
class ListCloudSiemCustomizeRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ListCloudSiemCustomizeRulesResponseBodyDataPageInfo> pageInfo{};
  shared_ptr<vector<ListCloudSiemCustomizeRulesResponseBodyDataResponseData>> responseData{};

  ListCloudSiemCustomizeRulesResponseBodyData() {}

  explicit ListCloudSiemCustomizeRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseData) {
      vector<boost::any> temp1;
      for(auto item1:*responseData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResponseData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        ListCloudSiemCustomizeRulesResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<ListCloudSiemCustomizeRulesResponseBodyDataPageInfo>(model1);
      }
    }
    if (m.find("ResponseData") != m.end() && !m["ResponseData"].empty()) {
      if (typeid(vector<boost::any>) == m["ResponseData"].type()) {
        vector<ListCloudSiemCustomizeRulesResponseBodyDataResponseData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResponseData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCloudSiemCustomizeRulesResponseBodyDataResponseData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responseData = make_shared<vector<ListCloudSiemCustomizeRulesResponseBodyDataResponseData>>(expect1);
      }
    }
  }


  virtual ~ListCloudSiemCustomizeRulesResponseBodyData() = default;
};
class ListCloudSiemCustomizeRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListCloudSiemCustomizeRulesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListCloudSiemCustomizeRulesResponseBody() {}

  explicit ListCloudSiemCustomizeRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCloudSiemCustomizeRulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListCloudSiemCustomizeRulesResponseBodyData>(model1);
      }
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


  virtual ~ListCloudSiemCustomizeRulesResponseBody() = default;
};
class ListCloudSiemCustomizeRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCloudSiemCustomizeRulesResponseBody> body{};

  ListCloudSiemCustomizeRulesResponse() {}

  explicit ListCloudSiemCustomizeRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCloudSiemCustomizeRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCloudSiemCustomizeRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListCloudSiemCustomizeRulesResponse() = default;
};
class ListCloudSiemPredefinedRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertType{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> id{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};
  shared_ptr<vector<string>> threatLevel{};

  ListCloudSiemPredefinedRulesRequest() {}

  explicit ListCloudSiemPredefinedRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (threatLevel) {
      res["ThreatLevel"] = boost::any(*threatLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<string>(boost::any_cast<string>(m["AlertType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ThreatLevel") != m.end() && !m["ThreatLevel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ThreatLevel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ThreatLevel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      threatLevel = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListCloudSiemPredefinedRulesRequest() = default;
};
class ListCloudSiemPredefinedRulesResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListCloudSiemPredefinedRulesResponseBodyDataPageInfo() {}

  explicit ListCloudSiemPredefinedRulesResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCloudSiemPredefinedRulesResponseBodyDataPageInfo() = default;
};
class ListCloudSiemPredefinedRulesResponseBodyDataResponseData : public Darabonba::Model {
public:
  shared_ptr<string> alertType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> ruleDescMds{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleNameMds{};
  shared_ptr<string> source{};
  shared_ptr<long> status{};
  shared_ptr<string> threatLevel{};

  ListCloudSiemPredefinedRulesResponseBodyDataResponseData() {}

  explicit ListCloudSiemPredefinedRulesResponseBodyDataResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ruleDescMds) {
      res["RuleDescMds"] = boost::any(*ruleDescMds);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleNameMds) {
      res["RuleNameMds"] = boost::any(*ruleNameMds);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (threatLevel) {
      res["ThreatLevel"] = boost::any(*threatLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<string>(boost::any_cast<string>(m["AlertType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RuleDescMds") != m.end() && !m["RuleDescMds"].empty()) {
      ruleDescMds = make_shared<string>(boost::any_cast<string>(m["RuleDescMds"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleNameMds") != m.end() && !m["RuleNameMds"].empty()) {
      ruleNameMds = make_shared<string>(boost::any_cast<string>(m["RuleNameMds"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ThreatLevel") != m.end() && !m["ThreatLevel"].empty()) {
      threatLevel = make_shared<string>(boost::any_cast<string>(m["ThreatLevel"]));
    }
  }


  virtual ~ListCloudSiemPredefinedRulesResponseBodyDataResponseData() = default;
};
class ListCloudSiemPredefinedRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ListCloudSiemPredefinedRulesResponseBodyDataPageInfo> pageInfo{};
  shared_ptr<vector<ListCloudSiemPredefinedRulesResponseBodyDataResponseData>> responseData{};

  ListCloudSiemPredefinedRulesResponseBodyData() {}

  explicit ListCloudSiemPredefinedRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseData) {
      vector<boost::any> temp1;
      for(auto item1:*responseData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResponseData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        ListCloudSiemPredefinedRulesResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<ListCloudSiemPredefinedRulesResponseBodyDataPageInfo>(model1);
      }
    }
    if (m.find("ResponseData") != m.end() && !m["ResponseData"].empty()) {
      if (typeid(vector<boost::any>) == m["ResponseData"].type()) {
        vector<ListCloudSiemPredefinedRulesResponseBodyDataResponseData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResponseData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCloudSiemPredefinedRulesResponseBodyDataResponseData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responseData = make_shared<vector<ListCloudSiemPredefinedRulesResponseBodyDataResponseData>>(expect1);
      }
    }
  }


  virtual ~ListCloudSiemPredefinedRulesResponseBodyData() = default;
};
class ListCloudSiemPredefinedRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListCloudSiemPredefinedRulesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListCloudSiemPredefinedRulesResponseBody() {}

  explicit ListCloudSiemPredefinedRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCloudSiemPredefinedRulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListCloudSiemPredefinedRulesResponseBodyData>(model1);
      }
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


  virtual ~ListCloudSiemPredefinedRulesResponseBody() = default;
};
class ListCloudSiemPredefinedRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCloudSiemPredefinedRulesResponseBody> body{};

  ListCloudSiemPredefinedRulesResponse() {}

  explicit ListCloudSiemPredefinedRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCloudSiemPredefinedRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCloudSiemPredefinedRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListCloudSiemPredefinedRulesResponse() = default;
};
class ListCustomizeRuleTestResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> id{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  ListCustomizeRuleTestResultRequest() {}

  explicit ListCustomizeRuleTestResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListCustomizeRuleTestResultRequest() = default;
};
class ListCustomizeRuleTestResultResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListCustomizeRuleTestResultResponseBodyDataPageInfo() {}

  explicit ListCustomizeRuleTestResultResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCustomizeRuleTestResultResponseBodyDataPageInfo() = default;
};
class ListCustomizeRuleTestResultResponseBodyDataResponseData : public Darabonba::Model {
public:
  shared_ptr<string> alertDesc{};
  shared_ptr<string> alertDetail{};
  shared_ptr<string> alertSrcProd{};
  shared_ptr<string> alertSrcProdModule{};
  shared_ptr<string> attCk{};
  shared_ptr<string> eventName{};
  shared_ptr<string> eventType{};
  shared_ptr<string> level{};
  shared_ptr<string> logSource{};
  shared_ptr<string> logTime{};
  shared_ptr<string> logType{};
  shared_ptr<string> mainUserId{};
  shared_ptr<string> onlineStatus{};
  shared_ptr<string> subUserId{};
  shared_ptr<string> uuid{};

  ListCustomizeRuleTestResultResponseBodyDataResponseData() {}

  explicit ListCustomizeRuleTestResultResponseBodyDataResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertDesc) {
      res["AlertDesc"] = boost::any(*alertDesc);
    }
    if (alertDetail) {
      res["AlertDetail"] = boost::any(*alertDetail);
    }
    if (alertSrcProd) {
      res["AlertSrcProd"] = boost::any(*alertSrcProd);
    }
    if (alertSrcProdModule) {
      res["AlertSrcProdModule"] = boost::any(*alertSrcProdModule);
    }
    if (attCk) {
      res["AttCk"] = boost::any(*attCk);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (logSource) {
      res["LogSource"] = boost::any(*logSource);
    }
    if (logTime) {
      res["LogTime"] = boost::any(*logTime);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (mainUserId) {
      res["MainUserId"] = boost::any(*mainUserId);
    }
    if (onlineStatus) {
      res["OnlineStatus"] = boost::any(*onlineStatus);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertDesc") != m.end() && !m["AlertDesc"].empty()) {
      alertDesc = make_shared<string>(boost::any_cast<string>(m["AlertDesc"]));
    }
    if (m.find("AlertDetail") != m.end() && !m["AlertDetail"].empty()) {
      alertDetail = make_shared<string>(boost::any_cast<string>(m["AlertDetail"]));
    }
    if (m.find("AlertSrcProd") != m.end() && !m["AlertSrcProd"].empty()) {
      alertSrcProd = make_shared<string>(boost::any_cast<string>(m["AlertSrcProd"]));
    }
    if (m.find("AlertSrcProdModule") != m.end() && !m["AlertSrcProdModule"].empty()) {
      alertSrcProdModule = make_shared<string>(boost::any_cast<string>(m["AlertSrcProdModule"]));
    }
    if (m.find("AttCk") != m.end() && !m["AttCk"].empty()) {
      attCk = make_shared<string>(boost::any_cast<string>(m["AttCk"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("LogSource") != m.end() && !m["LogSource"].empty()) {
      logSource = make_shared<string>(boost::any_cast<string>(m["LogSource"]));
    }
    if (m.find("LogTime") != m.end() && !m["LogTime"].empty()) {
      logTime = make_shared<string>(boost::any_cast<string>(m["LogTime"]));
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("MainUserId") != m.end() && !m["MainUserId"].empty()) {
      mainUserId = make_shared<string>(boost::any_cast<string>(m["MainUserId"]));
    }
    if (m.find("OnlineStatus") != m.end() && !m["OnlineStatus"].empty()) {
      onlineStatus = make_shared<string>(boost::any_cast<string>(m["OnlineStatus"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ListCustomizeRuleTestResultResponseBodyDataResponseData() = default;
};
class ListCustomizeRuleTestResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ListCustomizeRuleTestResultResponseBodyDataPageInfo> pageInfo{};
  shared_ptr<vector<ListCustomizeRuleTestResultResponseBodyDataResponseData>> responseData{};

  ListCustomizeRuleTestResultResponseBodyData() {}

  explicit ListCustomizeRuleTestResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseData) {
      vector<boost::any> temp1;
      for(auto item1:*responseData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResponseData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        ListCustomizeRuleTestResultResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<ListCustomizeRuleTestResultResponseBodyDataPageInfo>(model1);
      }
    }
    if (m.find("ResponseData") != m.end() && !m["ResponseData"].empty()) {
      if (typeid(vector<boost::any>) == m["ResponseData"].type()) {
        vector<ListCustomizeRuleTestResultResponseBodyDataResponseData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResponseData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCustomizeRuleTestResultResponseBodyDataResponseData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responseData = make_shared<vector<ListCustomizeRuleTestResultResponseBodyDataResponseData>>(expect1);
      }
    }
  }


  virtual ~ListCustomizeRuleTestResultResponseBodyData() = default;
};
class ListCustomizeRuleTestResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListCustomizeRuleTestResultResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListCustomizeRuleTestResultResponseBody() {}

  explicit ListCustomizeRuleTestResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCustomizeRuleTestResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListCustomizeRuleTestResultResponseBodyData>(model1);
      }
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


  virtual ~ListCustomizeRuleTestResultResponseBody() = default;
};
class ListCustomizeRuleTestResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCustomizeRuleTestResultResponseBody> body{};

  ListCustomizeRuleTestResultResponse() {}

  explicit ListCustomizeRuleTestResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCustomizeRuleTestResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCustomizeRuleTestResultResponseBody>(model1);
      }
    }
  }


  virtual ~ListCustomizeRuleTestResultResponse() = default;
};
class ListDeliveryRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListDeliveryRequest() {}

  explicit ListDeliveryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListDeliveryRequest() = default;
};
class ListDeliveryResponseBodyDataProductListLogListExtraParameters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListDeliveryResponseBodyDataProductListLogListExtraParameters() {}

  explicit ListDeliveryResponseBodyDataProductListLogListExtraParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListDeliveryResponseBodyDataProductListLogListExtraParameters() = default;
};
class ListDeliveryResponseBodyDataProductListLogList : public Darabonba::Model {
public:
  shared_ptr<bool> canOperateOrNot{};
  shared_ptr<vector<ListDeliveryResponseBodyDataProductListLogListExtraParameters>> extraParameters{};
  shared_ptr<string> logCode{};
  shared_ptr<string> logName{};
  shared_ptr<string> logNameEn{};
  shared_ptr<string> logNameKey{};
  shared_ptr<bool> status{};
  shared_ptr<string> topic{};

  ListDeliveryResponseBodyDataProductListLogList() {}

  explicit ListDeliveryResponseBodyDataProductListLogList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canOperateOrNot) {
      res["CanOperateOrNot"] = boost::any(*canOperateOrNot);
    }
    if (extraParameters) {
      vector<boost::any> temp1;
      for(auto item1:*extraParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtraParameters"] = boost::any(temp1);
    }
    if (logCode) {
      res["LogCode"] = boost::any(*logCode);
    }
    if (logName) {
      res["LogName"] = boost::any(*logName);
    }
    if (logNameEn) {
      res["LogNameEn"] = boost::any(*logNameEn);
    }
    if (logNameKey) {
      res["LogNameKey"] = boost::any(*logNameKey);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanOperateOrNot") != m.end() && !m["CanOperateOrNot"].empty()) {
      canOperateOrNot = make_shared<bool>(boost::any_cast<bool>(m["CanOperateOrNot"]));
    }
    if (m.find("ExtraParameters") != m.end() && !m["ExtraParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtraParameters"].type()) {
        vector<ListDeliveryResponseBodyDataProductListLogListExtraParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtraParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeliveryResponseBodyDataProductListLogListExtraParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extraParameters = make_shared<vector<ListDeliveryResponseBodyDataProductListLogListExtraParameters>>(expect1);
      }
    }
    if (m.find("LogCode") != m.end() && !m["LogCode"].empty()) {
      logCode = make_shared<string>(boost::any_cast<string>(m["LogCode"]));
    }
    if (m.find("LogName") != m.end() && !m["LogName"].empty()) {
      logName = make_shared<string>(boost::any_cast<string>(m["LogName"]));
    }
    if (m.find("LogNameEn") != m.end() && !m["LogNameEn"].empty()) {
      logNameEn = make_shared<string>(boost::any_cast<string>(m["LogNameEn"]));
    }
    if (m.find("LogNameKey") != m.end() && !m["LogNameKey"].empty()) {
      logNameKey = make_shared<string>(boost::any_cast<string>(m["LogNameKey"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~ListDeliveryResponseBodyDataProductListLogList() = default;
};
class ListDeliveryResponseBodyDataProductList : public Darabonba::Model {
public:
  shared_ptr<vector<ListDeliveryResponseBodyDataProductListLogList>> logList{};
  shared_ptr<map<string, vector<DataProductListLogMapValue>>> logMap{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};

  ListDeliveryResponseBodyDataProductList() {}

  explicit ListDeliveryResponseBodyDataProductList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (logMap) {
      map<string, boost::any> temp1;
      for(auto item1:*logMap){
        vector<boost::any> temp2;
        for(auto item2:item1.second){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1[item1.first] = boost::any(temp2);
      }
      res["LogMap"] = boost::any(temp1);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogList") != m.end() && !m["LogList"].empty()) {
      if (typeid(vector<boost::any>) == m["LogList"].type()) {
        vector<ListDeliveryResponseBodyDataProductListLogList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeliveryResponseBodyDataProductListLogList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logList = make_shared<vector<ListDeliveryResponseBodyDataProductListLogList>>(expect1);
      }
    }
    if (m.find("LogMap") != m.end() && !m["LogMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogMap"].type()) {
        map<string, vector<DataProductListLogMapValue>> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["LogMap"])){
          if (typeid(vector<boost::any>) == item1.second.type()) {
            vector<DataProductListLogMapValue> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1.second)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                DataProductListLogMapValue model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1[item1.first] = expect2;
          }
        }
        logMap = make_shared<map<string, vector<DataProductListLogMapValue>>>(expect1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
  }


  virtual ~ListDeliveryResponseBodyDataProductList() = default;
};
class ListDeliveryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dashboardUrl{};
  shared_ptr<bool> displaySwitchOrNot{};
  shared_ptr<string> logStoreName{};
  shared_ptr<vector<ListDeliveryResponseBodyDataProductList>> productList{};
  shared_ptr<string> projectName{};
  shared_ptr<string> searchUrl{};

  ListDeliveryResponseBodyData() {}

  explicit ListDeliveryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dashboardUrl) {
      res["DashboardUrl"] = boost::any(*dashboardUrl);
    }
    if (displaySwitchOrNot) {
      res["DisplaySwitchOrNot"] = boost::any(*displaySwitchOrNot);
    }
    if (logStoreName) {
      res["LogStoreName"] = boost::any(*logStoreName);
    }
    if (productList) {
      vector<boost::any> temp1;
      for(auto item1:*productList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductList"] = boost::any(temp1);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (searchUrl) {
      res["SearchUrl"] = boost::any(*searchUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DashboardUrl") != m.end() && !m["DashboardUrl"].empty()) {
      dashboardUrl = make_shared<string>(boost::any_cast<string>(m["DashboardUrl"]));
    }
    if (m.find("DisplaySwitchOrNot") != m.end() && !m["DisplaySwitchOrNot"].empty()) {
      displaySwitchOrNot = make_shared<bool>(boost::any_cast<bool>(m["DisplaySwitchOrNot"]));
    }
    if (m.find("LogStoreName") != m.end() && !m["LogStoreName"].empty()) {
      logStoreName = make_shared<string>(boost::any_cast<string>(m["LogStoreName"]));
    }
    if (m.find("ProductList") != m.end() && !m["ProductList"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductList"].type()) {
        vector<ListDeliveryResponseBodyDataProductList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeliveryResponseBodyDataProductList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productList = make_shared<vector<ListDeliveryResponseBodyDataProductList>>(expect1);
      }
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SearchUrl") != m.end() && !m["SearchUrl"].empty()) {
      searchUrl = make_shared<string>(boost::any_cast<string>(m["SearchUrl"]));
    }
  }


  virtual ~ListDeliveryResponseBodyData() = default;
};
class ListDeliveryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListDeliveryResponseBodyData> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDeliveryResponseBody() {}

  explicit ListDeliveryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
        ListDeliveryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDeliveryResponseBodyData>(model1);
      }
    }
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~ListDeliveryResponseBody() = default;
};
class ListDeliveryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeliveryResponseBody> body{};

  ListDeliveryResponse() {}

  explicit ListDeliveryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeliveryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeliveryResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeliveryResponse() = default;
};
class ListDisposeStrategyRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> effectiveStatus{};
  shared_ptr<long> endTime{};
  shared_ptr<string> entityIdentity{};
  shared_ptr<string> entityType{};
  shared_ptr<string> order{};
  shared_ptr<string> orderField{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> playbookName{};
  shared_ptr<string> playbookTypes{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sophonTaskId{};
  shared_ptr<long> startTime{};

  ListDisposeStrategyRequest() {}

  explicit ListDisposeStrategyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (effectiveStatus) {
      res["EffectiveStatus"] = boost::any(*effectiveStatus);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (entityIdentity) {
      res["EntityIdentity"] = boost::any(*entityIdentity);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (orderField) {
      res["OrderField"] = boost::any(*orderField);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (playbookName) {
      res["PlaybookName"] = boost::any(*playbookName);
    }
    if (playbookTypes) {
      res["PlaybookTypes"] = boost::any(*playbookTypes);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sophonTaskId) {
      res["SophonTaskId"] = boost::any(*sophonTaskId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EffectiveStatus") != m.end() && !m["EffectiveStatus"].empty()) {
      effectiveStatus = make_shared<long>(boost::any_cast<long>(m["EffectiveStatus"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EntityIdentity") != m.end() && !m["EntityIdentity"].empty()) {
      entityIdentity = make_shared<string>(boost::any_cast<string>(m["EntityIdentity"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OrderField") != m.end() && !m["OrderField"].empty()) {
      orderField = make_shared<string>(boost::any_cast<string>(m["OrderField"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PlaybookName") != m.end() && !m["PlaybookName"].empty()) {
      playbookName = make_shared<string>(boost::any_cast<string>(m["PlaybookName"]));
    }
    if (m.find("PlaybookTypes") != m.end() && !m["PlaybookTypes"].empty()) {
      playbookTypes = make_shared<string>(boost::any_cast<string>(m["PlaybookTypes"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SophonTaskId") != m.end() && !m["SophonTaskId"].empty()) {
      sophonTaskId = make_shared<string>(boost::any_cast<string>(m["SophonTaskId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListDisposeStrategyRequest() = default;
};
class ListDisposeStrategyResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListDisposeStrategyResponseBodyDataPageInfo() {}

  explicit ListDisposeStrategyResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDisposeStrategyResponseBodyDataPageInfo() = default;
};
class ListDisposeStrategyResponseBodyDataResponseData : public Darabonba::Model {
public:
  shared_ptr<string> alertUuid{};
  shared_ptr<long> aliuid{};
  shared_ptr<long> effectiveStatus{};
  shared_ptr<vector<boost::any>> entity{};
  shared_ptr<long> entityId{};
  shared_ptr<string> entityType{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> incidentName{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> playbookName{};
  shared_ptr<string> playbookType{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<vector<boost::any>> scope{};
  shared_ptr<string> sophonTaskId{};
  shared_ptr<long> status{};
  shared_ptr<long> subAliuid{};
  shared_ptr<string> taskParam{};

  ListDisposeStrategyResponseBodyDataResponseData() {}

  explicit ListDisposeStrategyResponseBodyDataResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertUuid) {
      res["AlertUuid"] = boost::any(*alertUuid);
    }
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (effectiveStatus) {
      res["EffectiveStatus"] = boost::any(*effectiveStatus);
    }
    if (entity) {
      res["Entity"] = boost::any(*entity);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (incidentName) {
      res["IncidentName"] = boost::any(*incidentName);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (playbookName) {
      res["PlaybookName"] = boost::any(*playbookName);
    }
    if (playbookType) {
      res["PlaybookType"] = boost::any(*playbookType);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (sophonTaskId) {
      res["SophonTaskId"] = boost::any(*sophonTaskId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subAliuid) {
      res["SubAliuid"] = boost::any(*subAliuid);
    }
    if (taskParam) {
      res["TaskParam"] = boost::any(*taskParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertUuid") != m.end() && !m["AlertUuid"].empty()) {
      alertUuid = make_shared<string>(boost::any_cast<string>(m["AlertUuid"]));
    }
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<long>(boost::any_cast<long>(m["Aliuid"]));
    }
    if (m.find("EffectiveStatus") != m.end() && !m["EffectiveStatus"].empty()) {
      effectiveStatus = make_shared<long>(boost::any_cast<long>(m["EffectiveStatus"]));
    }
    if (m.find("Entity") != m.end() && !m["Entity"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Entity"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Entity"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      entity = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IncidentName") != m.end() && !m["IncidentName"].empty()) {
      incidentName = make_shared<string>(boost::any_cast<string>(m["IncidentName"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("PlaybookName") != m.end() && !m["PlaybookName"].empty()) {
      playbookName = make_shared<string>(boost::any_cast<string>(m["PlaybookName"]));
    }
    if (m.find("PlaybookType") != m.end() && !m["PlaybookType"].empty()) {
      playbookType = make_shared<string>(boost::any_cast<string>(m["PlaybookType"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Scope"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Scope"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      scope = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("SophonTaskId") != m.end() && !m["SophonTaskId"].empty()) {
      sophonTaskId = make_shared<string>(boost::any_cast<string>(m["SophonTaskId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SubAliuid") != m.end() && !m["SubAliuid"].empty()) {
      subAliuid = make_shared<long>(boost::any_cast<long>(m["SubAliuid"]));
    }
    if (m.find("TaskParam") != m.end() && !m["TaskParam"].empty()) {
      taskParam = make_shared<string>(boost::any_cast<string>(m["TaskParam"]));
    }
  }


  virtual ~ListDisposeStrategyResponseBodyDataResponseData() = default;
};
class ListDisposeStrategyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ListDisposeStrategyResponseBodyDataPageInfo> pageInfo{};
  shared_ptr<vector<ListDisposeStrategyResponseBodyDataResponseData>> responseData{};

  ListDisposeStrategyResponseBodyData() {}

  explicit ListDisposeStrategyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseData) {
      vector<boost::any> temp1;
      for(auto item1:*responseData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResponseData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        ListDisposeStrategyResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<ListDisposeStrategyResponseBodyDataPageInfo>(model1);
      }
    }
    if (m.find("ResponseData") != m.end() && !m["ResponseData"].empty()) {
      if (typeid(vector<boost::any>) == m["ResponseData"].type()) {
        vector<ListDisposeStrategyResponseBodyDataResponseData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResponseData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDisposeStrategyResponseBodyDataResponseData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responseData = make_shared<vector<ListDisposeStrategyResponseBodyDataResponseData>>(expect1);
      }
    }
  }


  virtual ~ListDisposeStrategyResponseBodyData() = default;
};
class ListDisposeStrategyResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListDisposeStrategyResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDisposeStrategyResponseBody() {}

  explicit ListDisposeStrategyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDisposeStrategyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDisposeStrategyResponseBodyData>(model1);
      }
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


  virtual ~ListDisposeStrategyResponseBody() = default;
};
class ListDisposeStrategyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDisposeStrategyResponseBody> body{};

  ListDisposeStrategyResponse() {}

  explicit ListDisposeStrategyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDisposeStrategyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDisposeStrategyResponseBody>(model1);
      }
    }
  }


  virtual ~ListDisposeStrategyResponse() = default;
};
class ListOperationRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListOperationRequest() {}

  explicit ListOperationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListOperationRequest() = default;
};
class ListOperationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> adminOrNot{};
  shared_ptr<vector<string>> operationList{};

  ListOperationResponseBodyData() {}

  explicit ListOperationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adminOrNot) {
      res["AdminOrNot"] = boost::any(*adminOrNot);
    }
    if (operationList) {
      res["OperationList"] = boost::any(*operationList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdminOrNot") != m.end() && !m["AdminOrNot"].empty()) {
      adminOrNot = make_shared<bool>(boost::any_cast<bool>(m["AdminOrNot"]));
    }
    if (m.find("OperationList") != m.end() && !m["OperationList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OperationList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OperationList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      operationList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListOperationResponseBodyData() = default;
};
class ListOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListOperationResponseBodyData> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListOperationResponseBody() {}

  explicit ListOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
        ListOperationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListOperationResponseBodyData>(model1);
      }
    }
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~ListOperationResponseBody() = default;
};
class ListOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOperationResponseBody> body{};

  ListOperationResponse() {}

  explicit ListOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOperationResponseBody>(model1);
      }
    }
  }


  virtual ~ListOperationResponse() = default;
};
class ListQuickQueryRequest : public Darabonba::Model {
public:
  shared_ptr<long> offset{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  ListQuickQueryRequest() {}

  explicit ListQuickQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListQuickQueryRequest() = default;
};
class ListQuickQueryResponseBodyDataQuickQueryList : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> query{};
  shared_ptr<string> searchName{};

  ListQuickQueryResponseBodyDataQuickQueryList() {}

  explicit ListQuickQueryResponseBodyDataQuickQueryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
  }


  virtual ~ListQuickQueryResponseBodyDataQuickQueryList() = default;
};
class ListQuickQueryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<ListQuickQueryResponseBodyDataQuickQueryList>> quickQueryList{};
  shared_ptr<long> total{};

  ListQuickQueryResponseBodyData() {}

  explicit ListQuickQueryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (quickQueryList) {
      vector<boost::any> temp1;
      for(auto item1:*quickQueryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QuickQueryList"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("QuickQueryList") != m.end() && !m["QuickQueryList"].empty()) {
      if (typeid(vector<boost::any>) == m["QuickQueryList"].type()) {
        vector<ListQuickQueryResponseBodyDataQuickQueryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QuickQueryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuickQueryResponseBodyDataQuickQueryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quickQueryList = make_shared<vector<ListQuickQueryResponseBodyDataQuickQueryList>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListQuickQueryResponseBodyData() = default;
};
class ListQuickQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListQuickQueryResponseBodyData> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListQuickQueryResponseBody() {}

  explicit ListQuickQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
        ListQuickQueryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListQuickQueryResponseBodyData>(model1);
      }
    }
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~ListQuickQueryResponseBody() = default;
};
class ListQuickQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQuickQueryResponseBody> body{};

  ListQuickQueryResponse() {}

  explicit ListQuickQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListQuickQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQuickQueryResponseBody>(model1);
      }
    }
  }


  virtual ~ListQuickQueryResponse() = default;
};
class OpenDeliveryRequest : public Darabonba::Model {
public:
  shared_ptr<string> logCode{};
  shared_ptr<string> productCode{};
  shared_ptr<string> regionId{};

  OpenDeliveryRequest() {}

  explicit OpenDeliveryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logCode) {
      res["LogCode"] = boost::any(*logCode);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogCode") != m.end() && !m["LogCode"].empty()) {
      logCode = make_shared<string>(boost::any_cast<string>(m["LogCode"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~OpenDeliveryRequest() = default;
};
class OpenDeliveryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OpenDeliveryResponseBody() {}

  explicit OpenDeliveryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~OpenDeliveryResponseBody() = default;
};
class OpenDeliveryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenDeliveryResponseBody> body{};

  OpenDeliveryResponse() {}

  explicit OpenDeliveryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenDeliveryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenDeliveryResponseBody>(model1);
      }
    }
  }


  virtual ~OpenDeliveryResponse() = default;
};
class PostAutomateResponseConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionConfig{};
  shared_ptr<string> actionType{};
  shared_ptr<string> autoResponseType{};
  shared_ptr<string> executionCondition{};
  shared_ptr<long> id{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ruleName{};
  shared_ptr<long> subUserId{};

  PostAutomateResponseConfigRequest() {}

  explicit PostAutomateResponseConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionConfig) {
      res["ActionConfig"] = boost::any(*actionConfig);
    }
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (autoResponseType) {
      res["AutoResponseType"] = boost::any(*autoResponseType);
    }
    if (executionCondition) {
      res["ExecutionCondition"] = boost::any(*executionCondition);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionConfig") != m.end() && !m["ActionConfig"].empty()) {
      actionConfig = make_shared<string>(boost::any_cast<string>(m["ActionConfig"]));
    }
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("AutoResponseType") != m.end() && !m["AutoResponseType"].empty()) {
      autoResponseType = make_shared<string>(boost::any_cast<string>(m["AutoResponseType"]));
    }
    if (m.find("ExecutionCondition") != m.end() && !m["ExecutionCondition"].empty()) {
      executionCondition = make_shared<string>(boost::any_cast<string>(m["ExecutionCondition"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
  }


  virtual ~PostAutomateResponseConfigRequest() = default;
};
class PostAutomateResponseConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PostAutomateResponseConfigResponseBody() {}

  explicit PostAutomateResponseConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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


  virtual ~PostAutomateResponseConfigResponseBody() = default;
};
class PostAutomateResponseConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PostAutomateResponseConfigResponseBody> body{};

  PostAutomateResponseConfigResponse() {}

  explicit PostAutomateResponseConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PostAutomateResponseConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PostAutomateResponseConfigResponseBody>(model1);
      }
    }
  }


  virtual ~PostAutomateResponseConfigResponse() = default;
};
class PostCustomizeRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertType{};
  shared_ptr<string> alertTypeMds{};
  shared_ptr<string> eventTransferExt{};
  shared_ptr<long> eventTransferSwitch{};
  shared_ptr<string> eventTransferType{};
  shared_ptr<long> id{};
  shared_ptr<string> logSource{};
  shared_ptr<string> logSourceMds{};
  shared_ptr<string> logType{};
  shared_ptr<string> logTypeMds{};
  shared_ptr<string> queryCycle{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ruleCondition{};
  shared_ptr<string> ruleDesc{};
  shared_ptr<string> ruleGroup{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleThreshold{};
  shared_ptr<string> threatLevel{};

  PostCustomizeRuleRequest() {}

  explicit PostCustomizeRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (alertTypeMds) {
      res["AlertTypeMds"] = boost::any(*alertTypeMds);
    }
    if (eventTransferExt) {
      res["EventTransferExt"] = boost::any(*eventTransferExt);
    }
    if (eventTransferSwitch) {
      res["EventTransferSwitch"] = boost::any(*eventTransferSwitch);
    }
    if (eventTransferType) {
      res["EventTransferType"] = boost::any(*eventTransferType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (logSource) {
      res["LogSource"] = boost::any(*logSource);
    }
    if (logSourceMds) {
      res["LogSourceMds"] = boost::any(*logSourceMds);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (logTypeMds) {
      res["LogTypeMds"] = boost::any(*logTypeMds);
    }
    if (queryCycle) {
      res["QueryCycle"] = boost::any(*queryCycle);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ruleCondition) {
      res["RuleCondition"] = boost::any(*ruleCondition);
    }
    if (ruleDesc) {
      res["RuleDesc"] = boost::any(*ruleDesc);
    }
    if (ruleGroup) {
      res["RuleGroup"] = boost::any(*ruleGroup);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleThreshold) {
      res["RuleThreshold"] = boost::any(*ruleThreshold);
    }
    if (threatLevel) {
      res["ThreatLevel"] = boost::any(*threatLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<string>(boost::any_cast<string>(m["AlertType"]));
    }
    if (m.find("AlertTypeMds") != m.end() && !m["AlertTypeMds"].empty()) {
      alertTypeMds = make_shared<string>(boost::any_cast<string>(m["AlertTypeMds"]));
    }
    if (m.find("EventTransferExt") != m.end() && !m["EventTransferExt"].empty()) {
      eventTransferExt = make_shared<string>(boost::any_cast<string>(m["EventTransferExt"]));
    }
    if (m.find("EventTransferSwitch") != m.end() && !m["EventTransferSwitch"].empty()) {
      eventTransferSwitch = make_shared<long>(boost::any_cast<long>(m["EventTransferSwitch"]));
    }
    if (m.find("EventTransferType") != m.end() && !m["EventTransferType"].empty()) {
      eventTransferType = make_shared<string>(boost::any_cast<string>(m["EventTransferType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LogSource") != m.end() && !m["LogSource"].empty()) {
      logSource = make_shared<string>(boost::any_cast<string>(m["LogSource"]));
    }
    if (m.find("LogSourceMds") != m.end() && !m["LogSourceMds"].empty()) {
      logSourceMds = make_shared<string>(boost::any_cast<string>(m["LogSourceMds"]));
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("LogTypeMds") != m.end() && !m["LogTypeMds"].empty()) {
      logTypeMds = make_shared<string>(boost::any_cast<string>(m["LogTypeMds"]));
    }
    if (m.find("QueryCycle") != m.end() && !m["QueryCycle"].empty()) {
      queryCycle = make_shared<string>(boost::any_cast<string>(m["QueryCycle"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RuleCondition") != m.end() && !m["RuleCondition"].empty()) {
      ruleCondition = make_shared<string>(boost::any_cast<string>(m["RuleCondition"]));
    }
    if (m.find("RuleDesc") != m.end() && !m["RuleDesc"].empty()) {
      ruleDesc = make_shared<string>(boost::any_cast<string>(m["RuleDesc"]));
    }
    if (m.find("RuleGroup") != m.end() && !m["RuleGroup"].empty()) {
      ruleGroup = make_shared<string>(boost::any_cast<string>(m["RuleGroup"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleThreshold") != m.end() && !m["RuleThreshold"].empty()) {
      ruleThreshold = make_shared<string>(boost::any_cast<string>(m["RuleThreshold"]));
    }
    if (m.find("ThreatLevel") != m.end() && !m["ThreatLevel"].empty()) {
      threatLevel = make_shared<string>(boost::any_cast<string>(m["ThreatLevel"]));
    }
  }


  virtual ~PostCustomizeRuleRequest() = default;
};
class PostCustomizeRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alertType{};
  shared_ptr<string> alertTypeMds{};
  shared_ptr<long> aliuid{};
  shared_ptr<string> eventTransferExt{};
  shared_ptr<long> eventTransferSwitch{};
  shared_ptr<string> eventTransferType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> logSource{};
  shared_ptr<string> logSourceMds{};
  shared_ptr<string> logType{};
  shared_ptr<string> logTypeMds{};
  shared_ptr<string> queryCycle{};
  shared_ptr<string> ruleCondition{};
  shared_ptr<string> ruleDesc{};
  shared_ptr<string> ruleGroup{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleThreshold{};
  shared_ptr<string> ruleType{};
  shared_ptr<long> status{};
  shared_ptr<string> threatLevel{};

  PostCustomizeRuleResponseBodyData() {}

  explicit PostCustomizeRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (alertTypeMds) {
      res["AlertTypeMds"] = boost::any(*alertTypeMds);
    }
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (eventTransferExt) {
      res["EventTransferExt"] = boost::any(*eventTransferExt);
    }
    if (eventTransferSwitch) {
      res["EventTransferSwitch"] = boost::any(*eventTransferSwitch);
    }
    if (eventTransferType) {
      res["EventTransferType"] = boost::any(*eventTransferType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (logSource) {
      res["LogSource"] = boost::any(*logSource);
    }
    if (logSourceMds) {
      res["LogSourceMds"] = boost::any(*logSourceMds);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (logTypeMds) {
      res["LogTypeMds"] = boost::any(*logTypeMds);
    }
    if (queryCycle) {
      res["QueryCycle"] = boost::any(*queryCycle);
    }
    if (ruleCondition) {
      res["RuleCondition"] = boost::any(*ruleCondition);
    }
    if (ruleDesc) {
      res["RuleDesc"] = boost::any(*ruleDesc);
    }
    if (ruleGroup) {
      res["RuleGroup"] = boost::any(*ruleGroup);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleThreshold) {
      res["RuleThreshold"] = boost::any(*ruleThreshold);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (threatLevel) {
      res["ThreatLevel"] = boost::any(*threatLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<string>(boost::any_cast<string>(m["AlertType"]));
    }
    if (m.find("AlertTypeMds") != m.end() && !m["AlertTypeMds"].empty()) {
      alertTypeMds = make_shared<string>(boost::any_cast<string>(m["AlertTypeMds"]));
    }
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<long>(boost::any_cast<long>(m["Aliuid"]));
    }
    if (m.find("EventTransferExt") != m.end() && !m["EventTransferExt"].empty()) {
      eventTransferExt = make_shared<string>(boost::any_cast<string>(m["EventTransferExt"]));
    }
    if (m.find("EventTransferSwitch") != m.end() && !m["EventTransferSwitch"].empty()) {
      eventTransferSwitch = make_shared<long>(boost::any_cast<long>(m["EventTransferSwitch"]));
    }
    if (m.find("EventTransferType") != m.end() && !m["EventTransferType"].empty()) {
      eventTransferType = make_shared<string>(boost::any_cast<string>(m["EventTransferType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LogSource") != m.end() && !m["LogSource"].empty()) {
      logSource = make_shared<string>(boost::any_cast<string>(m["LogSource"]));
    }
    if (m.find("LogSourceMds") != m.end() && !m["LogSourceMds"].empty()) {
      logSourceMds = make_shared<string>(boost::any_cast<string>(m["LogSourceMds"]));
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("LogTypeMds") != m.end() && !m["LogTypeMds"].empty()) {
      logTypeMds = make_shared<string>(boost::any_cast<string>(m["LogTypeMds"]));
    }
    if (m.find("QueryCycle") != m.end() && !m["QueryCycle"].empty()) {
      queryCycle = make_shared<string>(boost::any_cast<string>(m["QueryCycle"]));
    }
    if (m.find("RuleCondition") != m.end() && !m["RuleCondition"].empty()) {
      ruleCondition = make_shared<string>(boost::any_cast<string>(m["RuleCondition"]));
    }
    if (m.find("RuleDesc") != m.end() && !m["RuleDesc"].empty()) {
      ruleDesc = make_shared<string>(boost::any_cast<string>(m["RuleDesc"]));
    }
    if (m.find("RuleGroup") != m.end() && !m["RuleGroup"].empty()) {
      ruleGroup = make_shared<string>(boost::any_cast<string>(m["RuleGroup"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleThreshold") != m.end() && !m["RuleThreshold"].empty()) {
      ruleThreshold = make_shared<string>(boost::any_cast<string>(m["RuleThreshold"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ThreatLevel") != m.end() && !m["ThreatLevel"].empty()) {
      threatLevel = make_shared<string>(boost::any_cast<string>(m["ThreatLevel"]));
    }
  }


  virtual ~PostCustomizeRuleResponseBodyData() = default;
};
class PostCustomizeRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<PostCustomizeRuleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PostCustomizeRuleResponseBody() {}

  explicit PostCustomizeRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PostCustomizeRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PostCustomizeRuleResponseBodyData>(model1);
      }
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


  virtual ~PostCustomizeRuleResponseBody() = default;
};
class PostCustomizeRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PostCustomizeRuleResponseBody> body{};

  PostCustomizeRuleResponse() {}

  explicit PostCustomizeRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PostCustomizeRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PostCustomizeRuleResponseBody>(model1);
      }
    }
  }


  virtual ~PostCustomizeRuleResponse() = default;
};
class PostCustomizeRuleTestRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> regionId{};
  shared_ptr<string> simulatedData{};
  shared_ptr<string> testType{};

  PostCustomizeRuleTestRequest() {}

  explicit PostCustomizeRuleTestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (simulatedData) {
      res["SimulatedData"] = boost::any(*simulatedData);
    }
    if (testType) {
      res["TestType"] = boost::any(*testType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SimulatedData") != m.end() && !m["SimulatedData"].empty()) {
      simulatedData = make_shared<string>(boost::any_cast<string>(m["SimulatedData"]));
    }
    if (m.find("TestType") != m.end() && !m["TestType"].empty()) {
      testType = make_shared<string>(boost::any_cast<string>(m["TestType"]));
    }
  }


  virtual ~PostCustomizeRuleTestRequest() = default;
};
class PostCustomizeRuleTestResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PostCustomizeRuleTestResponseBody() {}

  explicit PostCustomizeRuleTestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
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


  virtual ~PostCustomizeRuleTestResponseBody() = default;
};
class PostCustomizeRuleTestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PostCustomizeRuleTestResponseBody> body{};

  PostCustomizeRuleTestResponse() {}

  explicit PostCustomizeRuleTestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PostCustomizeRuleTestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PostCustomizeRuleTestResponseBody>(model1);
      }
    }
  }


  virtual ~PostCustomizeRuleTestResponse() = default;
};
class PostEventDisposeAndWhiteruleListRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventDispose{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> receiverInfo{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};

  PostEventDisposeAndWhiteruleListRequest() {}

  explicit PostEventDisposeAndWhiteruleListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventDispose) {
      res["EventDispose"] = boost::any(*eventDispose);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (receiverInfo) {
      res["ReceiverInfo"] = boost::any(*receiverInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventDispose") != m.end() && !m["EventDispose"].empty()) {
      eventDispose = make_shared<string>(boost::any_cast<string>(m["EventDispose"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("ReceiverInfo") != m.end() && !m["ReceiverInfo"].empty()) {
      receiverInfo = make_shared<string>(boost::any_cast<string>(m["ReceiverInfo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~PostEventDisposeAndWhiteruleListRequest() = default;
};
class PostEventDisposeAndWhiteruleListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PostEventDisposeAndWhiteruleListResponseBody() {}

  explicit PostEventDisposeAndWhiteruleListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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


  virtual ~PostEventDisposeAndWhiteruleListResponseBody() = default;
};
class PostEventDisposeAndWhiteruleListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PostEventDisposeAndWhiteruleListResponseBody> body{};

  PostEventDisposeAndWhiteruleListResponse() {}

  explicit PostEventDisposeAndWhiteruleListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PostEventDisposeAndWhiteruleListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PostEventDisposeAndWhiteruleListResponseBody>(model1);
      }
    }
  }


  virtual ~PostEventDisposeAndWhiteruleListResponse() = default;
};
class PostEventWhiteruleListRequest : public Darabonba::Model {
public:
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> regionId{};
  shared_ptr<string> whiteruleList{};

  PostEventWhiteruleListRequest() {}

  explicit PostEventWhiteruleListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (whiteruleList) {
      res["WhiteruleList"] = boost::any(*whiteruleList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("WhiteruleList") != m.end() && !m["WhiteruleList"].empty()) {
      whiteruleList = make_shared<string>(boost::any_cast<string>(m["WhiteruleList"]));
    }
  }


  virtual ~PostEventWhiteruleListRequest() = default;
};
class PostEventWhiteruleListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PostEventWhiteruleListResponseBody() {}

  explicit PostEventWhiteruleListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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


  virtual ~PostEventWhiteruleListResponseBody() = default;
};
class PostEventWhiteruleListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PostEventWhiteruleListResponseBody> body{};

  PostEventWhiteruleListResponse() {}

  explicit PostEventWhiteruleListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PostEventWhiteruleListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PostEventWhiteruleListResponseBody>(model1);
      }
    }
  }


  virtual ~PostEventWhiteruleListResponse() = default;
};
class PostFinishCustomizeRuleTestRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> regionId{};

  PostFinishCustomizeRuleTestRequest() {}

  explicit PostFinishCustomizeRuleTestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~PostFinishCustomizeRuleTestRequest() = default;
};
class PostFinishCustomizeRuleTestResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PostFinishCustomizeRuleTestResponseBody() {}

  explicit PostFinishCustomizeRuleTestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
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


  virtual ~PostFinishCustomizeRuleTestResponseBody() = default;
};
class PostFinishCustomizeRuleTestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PostFinishCustomizeRuleTestResponseBody> body{};

  PostFinishCustomizeRuleTestResponse() {}

  explicit PostFinishCustomizeRuleTestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PostFinishCustomizeRuleTestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PostFinishCustomizeRuleTestResponseBody>(model1);
      }
    }
  }


  virtual ~PostFinishCustomizeRuleTestResponse() = default;
};
class PostRuleStatusChangeRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<bool> inUse{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ruleType{};

  PostRuleStatusChangeRequest() {}

  explicit PostRuleStatusChangeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (inUse) {
      res["InUse"] = boost::any(*inUse);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("InUse") != m.end() && !m["InUse"].empty()) {
      inUse = make_shared<bool>(boost::any_cast<bool>(m["InUse"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~PostRuleStatusChangeRequest() = default;
};
class PostRuleStatusChangeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PostRuleStatusChangeResponseBody() {}

  explicit PostRuleStatusChangeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
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


  virtual ~PostRuleStatusChangeResponseBody() = default;
};
class PostRuleStatusChangeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PostRuleStatusChangeResponseBody> body{};

  PostRuleStatusChangeResponse() {}

  explicit PostRuleStatusChangeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PostRuleStatusChangeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PostRuleStatusChangeResponseBody>(model1);
      }
    }
  }


  virtual ~PostRuleStatusChangeResponse() = default;
};
class RestoreCapacityRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  RestoreCapacityRequest() {}

  explicit RestoreCapacityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~RestoreCapacityRequest() = default;
};
class RestoreCapacityResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RestoreCapacityResponseBody() {}

  explicit RestoreCapacityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~RestoreCapacityResponseBody() = default;
};
class RestoreCapacityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestoreCapacityResponseBody> body{};

  RestoreCapacityResponse() {}

  explicit RestoreCapacityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestoreCapacityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestoreCapacityResponseBody>(model1);
      }
    }
  }


  virtual ~RestoreCapacityResponse() = default;
};
class SaveQuickQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> query{};
  shared_ptr<string> regionId{};

  SaveQuickQueryRequest() {}

  explicit SaveQuickQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SaveQuickQueryRequest() = default;
};
class SaveQuickQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SaveQuickQueryResponseBody() {}

  explicit SaveQuickQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~SaveQuickQueryResponseBody() = default;
};
class SaveQuickQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveQuickQueryResponseBody> body{};

  SaveQuickQueryResponse() {}

  explicit SaveQuickQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveQuickQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveQuickQueryResponseBody>(model1);
      }
    }
  }


  virtual ~SaveQuickQueryResponse() = default;
};
class SetStorageRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> regionId{};
  shared_ptr<long> ttl{};

  SetStorageRequest() {}

  explicit SetStorageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
  }


  virtual ~SetStorageRequest() = default;
};
class SetStorageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetStorageResponseBody() {}

  explicit SetStorageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~SetStorageResponseBody() = default;
};
class SetStorageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetStorageResponseBody> body{};

  SetStorageResponse() {}

  explicit SetStorageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetStorageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetStorageResponseBody>(model1);
      }
    }
  }


  virtual ~SetStorageResponse() = default;
};
class ShowQuickAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ShowQuickAnalysisRequest() {}

  explicit ShowQuickAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ShowQuickAnalysisRequest() = default;
};
class ShowQuickAnalysisResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> indexList{};

  ShowQuickAnalysisResponseBodyData() {}

  explicit ShowQuickAnalysisResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexList) {
      res["IndexList"] = boost::any(*indexList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IndexList") != m.end() && !m["IndexList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IndexList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IndexList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      indexList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ShowQuickAnalysisResponseBodyData() = default;
};
class ShowQuickAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ShowQuickAnalysisResponseBodyData> data{};
  shared_ptr<string> dyCode{};
  shared_ptr<string> dyMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ShowQuickAnalysisResponseBody() {}

  explicit ShowQuickAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dyCode) {
      res["DyCode"] = boost::any(*dyCode);
    }
    if (dyMessage) {
      res["DyMessage"] = boost::any(*dyMessage);
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
        ShowQuickAnalysisResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ShowQuickAnalysisResponseBodyData>(model1);
      }
    }
    if (m.find("DyCode") != m.end() && !m["DyCode"].empty()) {
      dyCode = make_shared<string>(boost::any_cast<string>(m["DyCode"]));
    }
    if (m.find("DyMessage") != m.end() && !m["DyMessage"].empty()) {
      dyMessage = make_shared<string>(boost::any_cast<string>(m["DyMessage"]));
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


  virtual ~ShowQuickAnalysisResponseBody() = default;
};
class ShowQuickAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ShowQuickAnalysisResponseBody> body{};

  ShowQuickAnalysisResponse() {}

  explicit ShowQuickAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ShowQuickAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ShowQuickAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~ShowQuickAnalysisResponse() = default;
};
class UpdateAutomateResponseConfigStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<bool> inUse{};
  shared_ptr<string> regionId{};

  UpdateAutomateResponseConfigStatusRequest() {}

  explicit UpdateAutomateResponseConfigStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (inUse) {
      res["InUse"] = boost::any(*inUse);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("InUse") != m.end() && !m["InUse"].empty()) {
      inUse = make_shared<bool>(boost::any_cast<bool>(m["InUse"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateAutomateResponseConfigStatusRequest() = default;
};
class UpdateAutomateResponseConfigStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateAutomateResponseConfigStatusResponseBody() {}

  explicit UpdateAutomateResponseConfigStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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


  virtual ~UpdateAutomateResponseConfigStatusResponseBody() = default;
};
class UpdateAutomateResponseConfigStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAutomateResponseConfigStatusResponseBody> body{};

  UpdateAutomateResponseConfigStatusResponse() {}

  explicit UpdateAutomateResponseConfigStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAutomateResponseConfigStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAutomateResponseConfigStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAutomateResponseConfigStatusResponse() = default;
};
class UpdateWhiteRuleListRequest : public Darabonba::Model {
public:
  shared_ptr<string> expression{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> regionId{};
  shared_ptr<long> whiteRuleId{};

  UpdateWhiteRuleListRequest() {}

  explicit UpdateWhiteRuleListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (whiteRuleId) {
      res["WhiteRuleId"] = boost::any(*whiteRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("WhiteRuleId") != m.end() && !m["WhiteRuleId"].empty()) {
      whiteRuleId = make_shared<long>(boost::any_cast<long>(m["WhiteRuleId"]));
    }
  }


  virtual ~UpdateWhiteRuleListRequest() = default;
};
class UpdateWhiteRuleListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateWhiteRuleListResponseBody() {}

  explicit UpdateWhiteRuleListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
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


  virtual ~UpdateWhiteRuleListResponseBody() = default;
};
class UpdateWhiteRuleListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWhiteRuleListResponseBody> body{};

  UpdateWhiteRuleListResponse() {}

  explicit UpdateWhiteRuleListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWhiteRuleListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWhiteRuleListResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWhiteRuleListResponse() = default;
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
  CloseDeliveryResponse closeDeliveryWithOptions(shared_ptr<CloseDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseDeliveryResponse closeDelivery(shared_ptr<CloseDeliveryRequest> request);
  DeleteAutomateResponseConfigResponse deleteAutomateResponseConfigWithOptions(shared_ptr<DeleteAutomateResponseConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAutomateResponseConfigResponse deleteAutomateResponseConfig(shared_ptr<DeleteAutomateResponseConfigRequest> request);
  DeleteCustomizeRuleResponse deleteCustomizeRuleWithOptions(shared_ptr<DeleteCustomizeRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCustomizeRuleResponse deleteCustomizeRule(shared_ptr<DeleteCustomizeRuleRequest> request);
  DeleteQuickQueryResponse deleteQuickQueryWithOptions(shared_ptr<DeleteQuickQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteQuickQueryResponse deleteQuickQuery(shared_ptr<DeleteQuickQueryRequest> request);
  DeleteWhiteRuleListResponse deleteWhiteRuleListWithOptions(shared_ptr<DeleteWhiteRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWhiteRuleListResponse deleteWhiteRuleList(shared_ptr<DeleteWhiteRuleListRequest> request);
  DescribeAggregateFunctionResponse describeAggregateFunctionWithOptions(shared_ptr<DescribeAggregateFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAggregateFunctionResponse describeAggregateFunction(shared_ptr<DescribeAggregateFunctionRequest> request);
  DescribeAlertSceneByEventResponse describeAlertSceneByEventWithOptions(shared_ptr<DescribeAlertSceneByEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlertSceneByEventResponse describeAlertSceneByEvent(shared_ptr<DescribeAlertSceneByEventRequest> request);
  DescribeAlertSourceResponse describeAlertSourceWithOptions(shared_ptr<DescribeAlertSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlertSourceResponse describeAlertSource(shared_ptr<DescribeAlertSourceRequest> request);
  DescribeAlertSourceWithEventResponse describeAlertSourceWithEventWithOptions(shared_ptr<DescribeAlertSourceWithEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlertSourceWithEventResponse describeAlertSourceWithEvent(shared_ptr<DescribeAlertSourceWithEventRequest> request);
  DescribeAlertTypeResponse describeAlertTypeWithOptions(shared_ptr<DescribeAlertTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlertTypeResponse describeAlertType(shared_ptr<DescribeAlertTypeRequest> request);
  DescribeAlertsCountResponse describeAlertsCountWithOptions(shared_ptr<DescribeAlertsCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlertsCountResponse describeAlertsCount(shared_ptr<DescribeAlertsCountRequest> request);
  DescribeAttackTimeLineResponse describeAttackTimeLineWithOptions(shared_ptr<DescribeAttackTimeLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAttackTimeLineResponse describeAttackTimeLine(shared_ptr<DescribeAttackTimeLineRequest> request);
  DescribeAutomateResponseConfigCounterResponse describeAutomateResponseConfigCounterWithOptions(shared_ptr<DescribeAutomateResponseConfigCounterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAutomateResponseConfigCounterResponse describeAutomateResponseConfigCounter(shared_ptr<DescribeAutomateResponseConfigCounterRequest> request);
  DescribeAutomateResponseConfigFeatureResponse describeAutomateResponseConfigFeatureWithOptions(shared_ptr<DescribeAutomateResponseConfigFeatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAutomateResponseConfigFeatureResponse describeAutomateResponseConfigFeature(shared_ptr<DescribeAutomateResponseConfigFeatureRequest> request);
  DescribeAutomateResponseConfigPlayBooksResponse describeAutomateResponseConfigPlayBooksWithOptions(shared_ptr<DescribeAutomateResponseConfigPlayBooksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAutomateResponseConfigPlayBooksResponse describeAutomateResponseConfigPlayBooks(shared_ptr<DescribeAutomateResponseConfigPlayBooksRequest> request);
  DescribeCloudSiemAssetsResponse describeCloudSiemAssetsWithOptions(shared_ptr<DescribeCloudSiemAssetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCloudSiemAssetsResponse describeCloudSiemAssets(shared_ptr<DescribeCloudSiemAssetsRequest> request);
  DescribeCloudSiemAssetsCounterResponse describeCloudSiemAssetsCounterWithOptions(shared_ptr<DescribeCloudSiemAssetsCounterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCloudSiemAssetsCounterResponse describeCloudSiemAssetsCounter(shared_ptr<DescribeCloudSiemAssetsCounterRequest> request);
  DescribeCloudSiemEventDetailResponse describeCloudSiemEventDetailWithOptions(shared_ptr<DescribeCloudSiemEventDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCloudSiemEventDetailResponse describeCloudSiemEventDetail(shared_ptr<DescribeCloudSiemEventDetailRequest> request);
  DescribeCloudSiemEventsResponse describeCloudSiemEventsWithOptions(shared_ptr<DescribeCloudSiemEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCloudSiemEventsResponse describeCloudSiemEvents(shared_ptr<DescribeCloudSiemEventsRequest> request);
  DescribeCustomizeRuleResponse describeCustomizeRuleWithOptions(shared_ptr<DescribeCustomizeRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCustomizeRuleResponse describeCustomizeRule(shared_ptr<DescribeCustomizeRuleRequest> request);
  DescribeCustomizeRuleCountResponse describeCustomizeRuleCountWithOptions(shared_ptr<DescribeCustomizeRuleCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCustomizeRuleCountResponse describeCustomizeRuleCount(shared_ptr<DescribeCustomizeRuleCountRequest> request);
  DescribeCustomizeRuleTestResponse describeCustomizeRuleTestWithOptions(shared_ptr<DescribeCustomizeRuleTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCustomizeRuleTestResponse describeCustomizeRuleTest(shared_ptr<DescribeCustomizeRuleTestRequest> request);
  DescribeCustomizeRuleTestHistogramResponse describeCustomizeRuleTestHistogramWithOptions(shared_ptr<DescribeCustomizeRuleTestHistogramRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCustomizeRuleTestHistogramResponse describeCustomizeRuleTestHistogram(shared_ptr<DescribeCustomizeRuleTestHistogramRequest> request);
  DescribeDisposeAndPlaybookResponse describeDisposeAndPlaybookWithOptions(shared_ptr<DescribeDisposeAndPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDisposeAndPlaybookResponse describeDisposeAndPlaybook(shared_ptr<DescribeDisposeAndPlaybookRequest> request);
  DescribeDisposeStrategyPlaybookResponse describeDisposeStrategyPlaybookWithOptions(shared_ptr<DescribeDisposeStrategyPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDisposeStrategyPlaybookResponse describeDisposeStrategyPlaybook(shared_ptr<DescribeDisposeStrategyPlaybookRequest> request);
  DescribeEntityInfoResponse describeEntityInfoWithOptions(shared_ptr<DescribeEntityInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEntityInfoResponse describeEntityInfo(shared_ptr<DescribeEntityInfoRequest> request);
  DescribeEventCountByThreatLevelResponse describeEventCountByThreatLevelWithOptions(shared_ptr<DescribeEventCountByThreatLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEventCountByThreatLevelResponse describeEventCountByThreatLevel(shared_ptr<DescribeEventCountByThreatLevelRequest> request);
  DescribeEventDisposeResponse describeEventDisposeWithOptions(shared_ptr<DescribeEventDisposeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEventDisposeResponse describeEventDispose(shared_ptr<DescribeEventDisposeRequest> request);
  DescribeJobStatusResponse describeJobStatusWithOptions(shared_ptr<DescribeJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeJobStatusResponse describeJobStatus(shared_ptr<DescribeJobStatusRequest> request);
  DescribeLogFieldsResponse describeLogFieldsWithOptions(shared_ptr<DescribeLogFieldsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogFieldsResponse describeLogFields(shared_ptr<DescribeLogFieldsRequest> request);
  DescribeLogSourceResponse describeLogSourceWithOptions(shared_ptr<DescribeLogSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogSourceResponse describeLogSource(shared_ptr<DescribeLogSourceRequest> request);
  DescribeLogStoreResponse describeLogStoreWithOptions(shared_ptr<DescribeLogStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogStoreResponse describeLogStore(shared_ptr<DescribeLogStoreRequest> request);
  DescribeLogTypeResponse describeLogTypeWithOptions(shared_ptr<DescribeLogTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogTypeResponse describeLogType(shared_ptr<DescribeLogTypeRequest> request);
  DescribeOperatorsResponse describeOperatorsWithOptions(shared_ptr<DescribeOperatorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOperatorsResponse describeOperators(shared_ptr<DescribeOperatorsRequest> request);
  DescribeScopeUsersResponse describeScopeUsersWithOptions(shared_ptr<DescribeScopeUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScopeUsersResponse describeScopeUsers(shared_ptr<DescribeScopeUsersRequest> request);
  DescribeStorageResponse describeStorageWithOptions(shared_ptr<DescribeStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStorageResponse describeStorage(shared_ptr<DescribeStorageRequest> request);
  DescribeWafScopeResponse describeWafScopeWithOptions(shared_ptr<DescribeWafScopeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWafScopeResponse describeWafScope(shared_ptr<DescribeWafScopeRequest> request);
  DoQuickFieldResponse doQuickFieldWithOptions(shared_ptr<DoQuickFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DoQuickFieldResponse doQuickField(shared_ptr<DoQuickFieldRequest> request);
  DoSelfDelegateResponse doSelfDelegateWithOptions(shared_ptr<DoSelfDelegateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DoSelfDelegateResponse doSelfDelegate(shared_ptr<DoSelfDelegateRequest> request);
  GetCapacityResponse getCapacityWithOptions(shared_ptr<GetCapacityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCapacityResponse getCapacity(shared_ptr<GetCapacityRequest> request);
  GetHistogramsResponse getHistogramsWithOptions(shared_ptr<GetHistogramsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHistogramsResponse getHistograms(shared_ptr<GetHistogramsRequest> request);
  GetLogsResponse getLogsWithOptions(shared_ptr<GetLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogsResponse getLogs(shared_ptr<GetLogsRequest> request);
  GetQuickQueryResponse getQuickQueryWithOptions(shared_ptr<GetQuickQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuickQueryResponse getQuickQuery(shared_ptr<GetQuickQueryRequest> request);
  GetStorageResponse getStorageWithOptions(shared_ptr<GetStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStorageResponse getStorage(shared_ptr<GetStorageRequest> request);
  ListAutomateResponseConfigsResponse listAutomateResponseConfigsWithOptions(shared_ptr<ListAutomateResponseConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAutomateResponseConfigsResponse listAutomateResponseConfigs(shared_ptr<ListAutomateResponseConfigsRequest> request);
  ListCloudSiemCustomizeRulesResponse listCloudSiemCustomizeRulesWithOptions(shared_ptr<ListCloudSiemCustomizeRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCloudSiemCustomizeRulesResponse listCloudSiemCustomizeRules(shared_ptr<ListCloudSiemCustomizeRulesRequest> request);
  ListCloudSiemPredefinedRulesResponse listCloudSiemPredefinedRulesWithOptions(shared_ptr<ListCloudSiemPredefinedRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCloudSiemPredefinedRulesResponse listCloudSiemPredefinedRules(shared_ptr<ListCloudSiemPredefinedRulesRequest> request);
  ListCustomizeRuleTestResultResponse listCustomizeRuleTestResultWithOptions(shared_ptr<ListCustomizeRuleTestResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCustomizeRuleTestResultResponse listCustomizeRuleTestResult(shared_ptr<ListCustomizeRuleTestResultRequest> request);
  ListDeliveryResponse listDeliveryWithOptions(shared_ptr<ListDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeliveryResponse listDelivery(shared_ptr<ListDeliveryRequest> request);
  ListDisposeStrategyResponse listDisposeStrategyWithOptions(shared_ptr<ListDisposeStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDisposeStrategyResponse listDisposeStrategy(shared_ptr<ListDisposeStrategyRequest> request);
  ListOperationResponse listOperationWithOptions(shared_ptr<ListOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOperationResponse listOperation(shared_ptr<ListOperationRequest> request);
  ListQuickQueryResponse listQuickQueryWithOptions(shared_ptr<ListQuickQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQuickQueryResponse listQuickQuery(shared_ptr<ListQuickQueryRequest> request);
  OpenDeliveryResponse openDeliveryWithOptions(shared_ptr<OpenDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenDeliveryResponse openDelivery(shared_ptr<OpenDeliveryRequest> request);
  PostAutomateResponseConfigResponse postAutomateResponseConfigWithOptions(shared_ptr<PostAutomateResponseConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PostAutomateResponseConfigResponse postAutomateResponseConfig(shared_ptr<PostAutomateResponseConfigRequest> request);
  PostCustomizeRuleResponse postCustomizeRuleWithOptions(shared_ptr<PostCustomizeRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PostCustomizeRuleResponse postCustomizeRule(shared_ptr<PostCustomizeRuleRequest> request);
  PostCustomizeRuleTestResponse postCustomizeRuleTestWithOptions(shared_ptr<PostCustomizeRuleTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PostCustomizeRuleTestResponse postCustomizeRuleTest(shared_ptr<PostCustomizeRuleTestRequest> request);
  PostEventDisposeAndWhiteruleListResponse postEventDisposeAndWhiteruleListWithOptions(shared_ptr<PostEventDisposeAndWhiteruleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PostEventDisposeAndWhiteruleListResponse postEventDisposeAndWhiteruleList(shared_ptr<PostEventDisposeAndWhiteruleListRequest> request);
  PostEventWhiteruleListResponse postEventWhiteruleListWithOptions(shared_ptr<PostEventWhiteruleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PostEventWhiteruleListResponse postEventWhiteruleList(shared_ptr<PostEventWhiteruleListRequest> request);
  PostFinishCustomizeRuleTestResponse postFinishCustomizeRuleTestWithOptions(shared_ptr<PostFinishCustomizeRuleTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PostFinishCustomizeRuleTestResponse postFinishCustomizeRuleTest(shared_ptr<PostFinishCustomizeRuleTestRequest> request);
  PostRuleStatusChangeResponse postRuleStatusChangeWithOptions(shared_ptr<PostRuleStatusChangeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PostRuleStatusChangeResponse postRuleStatusChange(shared_ptr<PostRuleStatusChangeRequest> request);
  RestoreCapacityResponse restoreCapacityWithOptions(shared_ptr<RestoreCapacityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestoreCapacityResponse restoreCapacity(shared_ptr<RestoreCapacityRequest> request);
  SaveQuickQueryResponse saveQuickQueryWithOptions(shared_ptr<SaveQuickQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveQuickQueryResponse saveQuickQuery(shared_ptr<SaveQuickQueryRequest> request);
  SetStorageResponse setStorageWithOptions(shared_ptr<SetStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetStorageResponse setStorage(shared_ptr<SetStorageRequest> request);
  ShowQuickAnalysisResponse showQuickAnalysisWithOptions(shared_ptr<ShowQuickAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ShowQuickAnalysisResponse showQuickAnalysis(shared_ptr<ShowQuickAnalysisRequest> request);
  UpdateAutomateResponseConfigStatusResponse updateAutomateResponseConfigStatusWithOptions(shared_ptr<UpdateAutomateResponseConfigStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAutomateResponseConfigStatusResponse updateAutomateResponseConfigStatus(shared_ptr<UpdateAutomateResponseConfigStatusRequest> request);
  UpdateWhiteRuleListResponse updateWhiteRuleListWithOptions(shared_ptr<UpdateWhiteRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWhiteRuleListResponse updateWhiteRuleList(shared_ptr<UpdateWhiteRuleListRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloud-siem20220616

#endif
