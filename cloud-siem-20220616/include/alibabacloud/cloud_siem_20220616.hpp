// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUD-SIEM20220616_H_
#define ALIBABACLOUD_CLOUD-SIEM20220616_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
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
class AddDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> dataSourceInstanceName{};
  shared_ptr<string> dataSourceInstanceParams{};
  shared_ptr<string> dataSourceInstanceRemark{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> regionId{};

  AddDataSourceRequest() {}

  explicit AddDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (dataSourceInstanceName) {
      res["DataSourceInstanceName"] = boost::any(*dataSourceInstanceName);
    }
    if (dataSourceInstanceParams) {
      res["DataSourceInstanceParams"] = boost::any(*dataSourceInstanceParams);
    }
    if (dataSourceInstanceRemark) {
      res["DataSourceInstanceRemark"] = boost::any(*dataSourceInstanceRemark);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("DataSourceInstanceName") != m.end() && !m["DataSourceInstanceName"].empty()) {
      dataSourceInstanceName = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceName"]));
    }
    if (m.find("DataSourceInstanceParams") != m.end() && !m["DataSourceInstanceParams"].empty()) {
      dataSourceInstanceParams = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceParams"]));
    }
    if (m.find("DataSourceInstanceRemark") != m.end() && !m["DataSourceInstanceRemark"].empty()) {
      dataSourceInstanceRemark = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceRemark"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddDataSourceRequest() = default;
};
class AddDataSourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> dataSourceInstanceId{};

  AddDataSourceResponseBodyData() {}

  explicit AddDataSourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (dataSourceInstanceId) {
      res["DataSourceInstanceId"] = boost::any(*dataSourceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DataSourceInstanceId") != m.end() && !m["DataSourceInstanceId"].empty()) {
      dataSourceInstanceId = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceId"]));
    }
  }


  virtual ~AddDataSourceResponseBodyData() = default;
};
class AddDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<AddDataSourceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  AddDataSourceResponseBody() {}

  explicit AddDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddDataSourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddDataSourceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddDataSourceResponseBody() = default;
};
class AddDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddDataSourceResponseBody> body{};

  AddDataSourceResponse() {}

  explicit AddDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~AddDataSourceResponse() = default;
};
class AddDataSourceLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> dataSourceInstanceId{};
  shared_ptr<string> dataSourceInstanceLogs{};
  shared_ptr<string> logCode{};
  shared_ptr<string> regionId{};

  AddDataSourceLogRequest() {}

  explicit AddDataSourceLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (dataSourceInstanceId) {
      res["DataSourceInstanceId"] = boost::any(*dataSourceInstanceId);
    }
    if (dataSourceInstanceLogs) {
      res["DataSourceInstanceLogs"] = boost::any(*dataSourceInstanceLogs);
    }
    if (logCode) {
      res["LogCode"] = boost::any(*logCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("DataSourceInstanceId") != m.end() && !m["DataSourceInstanceId"].empty()) {
      dataSourceInstanceId = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceId"]));
    }
    if (m.find("DataSourceInstanceLogs") != m.end() && !m["DataSourceInstanceLogs"].empty()) {
      dataSourceInstanceLogs = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceLogs"]));
    }
    if (m.find("LogCode") != m.end() && !m["LogCode"].empty()) {
      logCode = make_shared<string>(boost::any_cast<string>(m["LogCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddDataSourceLogRequest() = default;
};
class AddDataSourceLogResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> logInstanceId{};

  AddDataSourceLogResponseBodyData() {}

  explicit AddDataSourceLogResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (logInstanceId) {
      res["LogInstanceId"] = boost::any(*logInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("LogInstanceId") != m.end() && !m["LogInstanceId"].empty()) {
      logInstanceId = make_shared<string>(boost::any_cast<string>(m["LogInstanceId"]));
    }
  }


  virtual ~AddDataSourceLogResponseBodyData() = default;
};
class AddDataSourceLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<AddDataSourceLogResponseBodyData> data{};
  shared_ptr<string> requestId{};

  AddDataSourceLogResponseBody() {}

  explicit AddDataSourceLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddDataSourceLogResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddDataSourceLogResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddDataSourceLogResponseBody() = default;
};
class AddDataSourceLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddDataSourceLogResponseBody> body{};

  AddDataSourceLogResponse() {}

  explicit AddDataSourceLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddDataSourceLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDataSourceLogResponseBody>(model1);
      }
    }
  }


  virtual ~AddDataSourceLogResponse() = default;
};
class AddUserSourceLogConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> deleted{};
  shared_ptr<string> disPlayLine{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sourceLogCode{};
  shared_ptr<string> sourceLogInfo{};
  shared_ptr<string> sourceProdCode{};
  shared_ptr<long> subUserId{};

  AddUserSourceLogConfigRequest() {}

  explicit AddUserSourceLogConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (disPlayLine) {
      res["DisPlayLine"] = boost::any(*disPlayLine);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceLogCode) {
      res["SourceLogCode"] = boost::any(*sourceLogCode);
    }
    if (sourceLogInfo) {
      res["SourceLogInfo"] = boost::any(*sourceLogInfo);
    }
    if (sourceProdCode) {
      res["SourceProdCode"] = boost::any(*sourceProdCode);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<long>(boost::any_cast<long>(m["Deleted"]));
    }
    if (m.find("DisPlayLine") != m.end() && !m["DisPlayLine"].empty()) {
      disPlayLine = make_shared<string>(boost::any_cast<string>(m["DisPlayLine"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceLogCode") != m.end() && !m["SourceLogCode"].empty()) {
      sourceLogCode = make_shared<string>(boost::any_cast<string>(m["SourceLogCode"]));
    }
    if (m.find("SourceLogInfo") != m.end() && !m["SourceLogInfo"].empty()) {
      sourceLogInfo = make_shared<string>(boost::any_cast<string>(m["SourceLogInfo"]));
    }
    if (m.find("SourceProdCode") != m.end() && !m["SourceProdCode"].empty()) {
      sourceProdCode = make_shared<string>(boost::any_cast<string>(m["SourceProdCode"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
  }


  virtual ~AddUserSourceLogConfigRequest() = default;
};
class AddUserSourceLogConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> diplayLine{};
  shared_ptr<bool> displayed{};
  shared_ptr<bool> imported{};
  shared_ptr<long> mainUserId{};
  shared_ptr<string> sourceLogCode{};
  shared_ptr<string> sourceProdCode{};
  shared_ptr<long> subUserId{};
  shared_ptr<string> subUserName{};

  AddUserSourceLogConfigResponseBodyData() {}

  explicit AddUserSourceLogConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diplayLine) {
      res["DiplayLine"] = boost::any(*diplayLine);
    }
    if (displayed) {
      res["Displayed"] = boost::any(*displayed);
    }
    if (imported) {
      res["Imported"] = boost::any(*imported);
    }
    if (mainUserId) {
      res["MainUserId"] = boost::any(*mainUserId);
    }
    if (sourceLogCode) {
      res["SourceLogCode"] = boost::any(*sourceLogCode);
    }
    if (sourceProdCode) {
      res["SourceProdCode"] = boost::any(*sourceProdCode);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    if (subUserName) {
      res["SubUserName"] = boost::any(*subUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiplayLine") != m.end() && !m["DiplayLine"].empty()) {
      diplayLine = make_shared<string>(boost::any_cast<string>(m["DiplayLine"]));
    }
    if (m.find("Displayed") != m.end() && !m["Displayed"].empty()) {
      displayed = make_shared<bool>(boost::any_cast<bool>(m["Displayed"]));
    }
    if (m.find("Imported") != m.end() && !m["Imported"].empty()) {
      imported = make_shared<bool>(boost::any_cast<bool>(m["Imported"]));
    }
    if (m.find("MainUserId") != m.end() && !m["MainUserId"].empty()) {
      mainUserId = make_shared<long>(boost::any_cast<long>(m["MainUserId"]));
    }
    if (m.find("SourceLogCode") != m.end() && !m["SourceLogCode"].empty()) {
      sourceLogCode = make_shared<string>(boost::any_cast<string>(m["SourceLogCode"]));
    }
    if (m.find("SourceProdCode") != m.end() && !m["SourceProdCode"].empty()) {
      sourceProdCode = make_shared<string>(boost::any_cast<string>(m["SourceProdCode"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
    if (m.find("SubUserName") != m.end() && !m["SubUserName"].empty()) {
      subUserName = make_shared<string>(boost::any_cast<string>(m["SubUserName"]));
    }
  }


  virtual ~AddUserSourceLogConfigResponseBodyData() = default;
};
class AddUserSourceLogConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<AddUserSourceLogConfigResponseBodyData> data{};
  shared_ptr<string> requestId{};

  AddUserSourceLogConfigResponseBody() {}

  explicit AddUserSourceLogConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddUserSourceLogConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddUserSourceLogConfigResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddUserSourceLogConfigResponseBody() = default;
};
class AddUserSourceLogConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddUserSourceLogConfigResponseBody> body{};

  AddUserSourceLogConfigResponse() {}

  explicit AddUserSourceLogConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUserSourceLogConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserSourceLogConfigResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserSourceLogConfigResponse() = default;
};
class BindAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

  BindAccountRequest() {}

  explicit BindAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~BindAccountRequest() = default;
};
class BindAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};

  BindAccountResponseBodyData() {}

  explicit BindAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~BindAccountResponseBodyData() = default;
};
class BindAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<BindAccountResponseBodyData> data{};
  shared_ptr<string> requestId{};

  BindAccountResponseBody() {}

  explicit BindAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        BindAccountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BindAccountResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BindAccountResponseBody() = default;
};
class BindAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindAccountResponseBody> body{};

  BindAccountResponse() {}

  explicit BindAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindAccountResponseBody>(model1);
      }
    }
  }


  virtual ~BindAccountResponse() = default;
};
class CloseDeliveryRequest : public Darabonba::Model {
public:
  shared_ptr<string> logCode{};
  shared_ptr<string> productCode{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~CloseDeliveryRequest() = default;
};
class CloseDeliveryResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  CloseDeliveryResponseBody() {}

  explicit CloseDeliveryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
        DeleteAutomateResponseConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAutomateResponseConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAutomateResponseConfigResponse() = default;
};
class DeleteBindAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> accountId{};
  shared_ptr<long> bindId{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

  DeleteBindAccountRequest() {}

  explicit DeleteBindAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (bindId) {
      res["BindId"] = boost::any(*bindId);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("BindId") != m.end() && !m["BindId"].empty()) {
      bindId = make_shared<long>(boost::any_cast<long>(m["BindId"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~DeleteBindAccountRequest() = default;
};
class DeleteBindAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};

  DeleteBindAccountResponseBodyData() {}

  explicit DeleteBindAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~DeleteBindAccountResponseBodyData() = default;
};
class DeleteBindAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteBindAccountResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeleteBindAccountResponseBody() {}

  explicit DeleteBindAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteBindAccountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteBindAccountResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteBindAccountResponseBody() = default;
};
class DeleteBindAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteBindAccountResponseBody> body{};

  DeleteBindAccountResponse() {}

  explicit DeleteBindAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBindAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBindAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBindAccountResponse() = default;
};
class DeleteCustomizeRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
        DeleteCustomizeRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCustomizeRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCustomizeRuleResponse() = default;
};
class DeleteDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> dataSourceInstanceId{};
  shared_ptr<string> regionId{};

  DeleteDataSourceRequest() {}

  explicit DeleteDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (dataSourceInstanceId) {
      res["DataSourceInstanceId"] = boost::any(*dataSourceInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("DataSourceInstanceId") != m.end() && !m["DataSourceInstanceId"].empty()) {
      dataSourceInstanceId = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteDataSourceRequest() = default;
};
class DeleteDataSourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};

  DeleteDataSourceResponseBodyData() {}

  explicit DeleteDataSourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~DeleteDataSourceResponseBodyData() = default;
};
class DeleteDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteDataSourceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeleteDataSourceResponseBody() {}

  explicit DeleteDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteDataSourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteDataSourceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class DeleteDataSourceLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> dataSourceInstanceId{};
  shared_ptr<string> logInstanceId{};
  shared_ptr<string> regionId{};

  DeleteDataSourceLogRequest() {}

  explicit DeleteDataSourceLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (dataSourceInstanceId) {
      res["DataSourceInstanceId"] = boost::any(*dataSourceInstanceId);
    }
    if (logInstanceId) {
      res["LogInstanceId"] = boost::any(*logInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("DataSourceInstanceId") != m.end() && !m["DataSourceInstanceId"].empty()) {
      dataSourceInstanceId = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceId"]));
    }
    if (m.find("LogInstanceId") != m.end() && !m["LogInstanceId"].empty()) {
      logInstanceId = make_shared<string>(boost::any_cast<string>(m["LogInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteDataSourceLogRequest() = default;
};
class DeleteDataSourceLogResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> logInstanceId{};

  DeleteDataSourceLogResponseBodyData() {}

  explicit DeleteDataSourceLogResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (logInstanceId) {
      res["LogInstanceId"] = boost::any(*logInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("LogInstanceId") != m.end() && !m["LogInstanceId"].empty()) {
      logInstanceId = make_shared<string>(boost::any_cast<string>(m["LogInstanceId"]));
    }
  }


  virtual ~DeleteDataSourceLogResponseBodyData() = default;
};
class DeleteDataSourceLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteDataSourceLogResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeleteDataSourceLogResponseBody() {}

  explicit DeleteDataSourceLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteDataSourceLogResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteDataSourceLogResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDataSourceLogResponseBody() = default;
};
class DeleteDataSourceLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDataSourceLogResponseBody> body{};

  DeleteDataSourceLogResponse() {}

  explicit DeleteDataSourceLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDataSourceLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDataSourceLogResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDataSourceLogResponse() = default;
};
class DeleteWhiteRuleListRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
        DescribeAggregateFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAggregateFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAggregateFunctionResponse() = default;
};
class DescribeAlertSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

  DescribeAlertSceneRequest() {}

  explicit DescribeAlertSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~DescribeAlertSceneRequest() = default;
};
class DescribeAlertSceneResponseBodyDataTargets : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};
  shared_ptr<vector<string>> values{};

  DescribeAlertSceneResponseBodyDataTargets() {}

  explicit DescribeAlertSceneResponseBodyDataTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAlertSceneResponseBodyDataTargets() = default;
};
class DescribeAlertSceneResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alertName{};
  shared_ptr<string> alertNameId{};
  shared_ptr<string> alertTile{};
  shared_ptr<string> alertTileId{};
  shared_ptr<string> alertType{};
  shared_ptr<string> alertTypeId{};
  shared_ptr<vector<DescribeAlertSceneResponseBodyDataTargets>> targets{};

  DescribeAlertSceneResponseBodyData() {}

  explicit DescribeAlertSceneResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeAlertSceneResponseBodyDataTargets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlertSceneResponseBodyDataTargets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targets = make_shared<vector<DescribeAlertSceneResponseBodyDataTargets>>(expect1);
      }
    }
  }


  virtual ~DescribeAlertSceneResponseBodyData() = default;
};
class DescribeAlertSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeAlertSceneResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAlertSceneResponseBody() {}

  explicit DescribeAlertSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeAlertSceneResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlertSceneResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeAlertSceneResponseBodyData>>(expect1);
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


  virtual ~DescribeAlertSceneResponseBody() = default;
};
class DescribeAlertSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAlertSceneResponseBody> body{};

  DescribeAlertSceneResponse() {}

  explicit DescribeAlertSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAlertSceneResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAlertSceneResponse() = default;
};
class DescribeAlertSceneByEventRequest : public Darabonba::Model {
public:
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
  shared_ptr<string> ruleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
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
        DescribeAlertTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAlertTypeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAlertTypeResponse() = default;
};
class DescribeAlertsRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertName{};
  shared_ptr<string> alertTitle{};
  shared_ptr<string> alertType{};
  shared_ptr<string> alertUuid{};
  shared_ptr<string> assetId{};
  shared_ptr<string> assetName{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> entityId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> isDefend{};
  shared_ptr<string> labelType{};
  shared_ptr<vector<string>> level{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
  shared_ptr<string> source{};
  shared_ptr<long> startTime{};
  shared_ptr<string> subUserId{};

  DescribeAlertsRequest() {}

  explicit DescribeAlertsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertName) {
      res["AlertName"] = boost::any(*alertName);
    }
    if (alertTitle) {
      res["AlertTitle"] = boost::any(*alertTitle);
    }
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (alertUuid) {
      res["AlertUuid"] = boost::any(*alertUuid);
    }
    if (assetId) {
      res["AssetId"] = boost::any(*assetId);
    }
    if (assetName) {
      res["AssetName"] = boost::any(*assetName);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (isDefend) {
      res["IsDefend"] = boost::any(*isDefend);
    }
    if (labelType) {
      res["LabelType"] = boost::any(*labelType);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertName") != m.end() && !m["AlertName"].empty()) {
      alertName = make_shared<string>(boost::any_cast<string>(m["AlertName"]));
    }
    if (m.find("AlertTitle") != m.end() && !m["AlertTitle"].empty()) {
      alertTitle = make_shared<string>(boost::any_cast<string>(m["AlertTitle"]));
    }
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<string>(boost::any_cast<string>(m["AlertType"]));
    }
    if (m.find("AlertUuid") != m.end() && !m["AlertUuid"].empty()) {
      alertUuid = make_shared<string>(boost::any_cast<string>(m["AlertUuid"]));
    }
    if (m.find("AssetId") != m.end() && !m["AssetId"].empty()) {
      assetId = make_shared<string>(boost::any_cast<string>(m["AssetId"]));
    }
    if (m.find("AssetName") != m.end() && !m["AssetName"].empty()) {
      assetName = make_shared<string>(boost::any_cast<string>(m["AssetName"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("IsDefend") != m.end() && !m["IsDefend"].empty()) {
      isDefend = make_shared<string>(boost::any_cast<string>(m["IsDefend"]));
    }
    if (m.find("LabelType") != m.end() && !m["LabelType"].empty()) {
      labelType = make_shared<string>(boost::any_cast<string>(m["LabelType"]));
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~DescribeAlertsRequest() = default;
};
class DescribeAlertsResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeAlertsResponseBodyDataPageInfo() {}

  explicit DescribeAlertsResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAlertsResponseBodyDataPageInfo() = default;
};
class DescribeAlertsResponseBodyDataResponseDataAlertInfoList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> keyName{};
  shared_ptr<string> values{};

  DescribeAlertsResponseBodyDataResponseDataAlertInfoList() {}

  explicit DescribeAlertsResponseBodyDataResponseDataAlertInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAlertsResponseBodyDataResponseDataAlertInfoList() = default;
};
class DescribeAlertsResponseBodyDataResponseData : public Darabonba::Model {
public:
  shared_ptr<string> alertDesc{};
  shared_ptr<string> alertDescCode{};
  shared_ptr<string> alertDescEn{};
  shared_ptr<string> alertDetail{};
  shared_ptr<vector<DescribeAlertsResponseBodyDataResponseDataAlertInfoList>> alertInfoList{};
  shared_ptr<string> alertLevel{};
  shared_ptr<string> alertName{};
  shared_ptr<string> alertNameCode{};
  shared_ptr<string> alertNameEn{};
  shared_ptr<string> alertSrcProd{};
  shared_ptr<string> alertSrcProdModule{};
  shared_ptr<string> alertTitle{};
  shared_ptr<string> alertTitleEn{};
  shared_ptr<string> alertType{};
  shared_ptr<string> alertTypeCode{};
  shared_ptr<string> alertTypeEn{};
  shared_ptr<string> alertUuid{};
  shared_ptr<string> assetList{};
  shared_ptr<string> attCk{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> endTime{};
  shared_ptr<string> entityList{};
  shared_ptr<string> extendContent{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> isDefend{};
  shared_ptr<string> logTime{};
  shared_ptr<string> logUuid{};
  shared_ptr<long> mainUserId{};
  shared_ptr<string> occurTime{};
  shared_ptr<string> startTime{};
  shared_ptr<long> subUserId{};
  shared_ptr<string> subUserName{};

  DescribeAlertsResponseBodyDataResponseData() {}

  explicit DescribeAlertsResponseBodyDataResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertDesc) {
      res["AlertDesc"] = boost::any(*alertDesc);
    }
    if (alertDescCode) {
      res["AlertDescCode"] = boost::any(*alertDescCode);
    }
    if (alertDescEn) {
      res["AlertDescEn"] = boost::any(*alertDescEn);
    }
    if (alertDetail) {
      res["AlertDetail"] = boost::any(*alertDetail);
    }
    if (alertInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*alertInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AlertInfoList"] = boost::any(temp1);
    }
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
    if (assetList) {
      res["AssetList"] = boost::any(*assetList);
    }
    if (attCk) {
      res["AttCk"] = boost::any(*attCk);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (entityList) {
      res["EntityList"] = boost::any(*entityList);
    }
    if (extendContent) {
      res["ExtendContent"] = boost::any(*extendContent);
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
    if (isDefend) {
      res["IsDefend"] = boost::any(*isDefend);
    }
    if (logTime) {
      res["LogTime"] = boost::any(*logTime);
    }
    if (logUuid) {
      res["LogUuid"] = boost::any(*logUuid);
    }
    if (mainUserId) {
      res["MainUserId"] = boost::any(*mainUserId);
    }
    if (occurTime) {
      res["OccurTime"] = boost::any(*occurTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    if (subUserName) {
      res["SubUserName"] = boost::any(*subUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertDesc") != m.end() && !m["AlertDesc"].empty()) {
      alertDesc = make_shared<string>(boost::any_cast<string>(m["AlertDesc"]));
    }
    if (m.find("AlertDescCode") != m.end() && !m["AlertDescCode"].empty()) {
      alertDescCode = make_shared<string>(boost::any_cast<string>(m["AlertDescCode"]));
    }
    if (m.find("AlertDescEn") != m.end() && !m["AlertDescEn"].empty()) {
      alertDescEn = make_shared<string>(boost::any_cast<string>(m["AlertDescEn"]));
    }
    if (m.find("AlertDetail") != m.end() && !m["AlertDetail"].empty()) {
      alertDetail = make_shared<string>(boost::any_cast<string>(m["AlertDetail"]));
    }
    if (m.find("AlertInfoList") != m.end() && !m["AlertInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AlertInfoList"].type()) {
        vector<DescribeAlertsResponseBodyDataResponseDataAlertInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AlertInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlertsResponseBodyDataResponseDataAlertInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        alertInfoList = make_shared<vector<DescribeAlertsResponseBodyDataResponseDataAlertInfoList>>(expect1);
      }
    }
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
    if (m.find("AssetList") != m.end() && !m["AssetList"].empty()) {
      assetList = make_shared<string>(boost::any_cast<string>(m["AssetList"]));
    }
    if (m.find("AttCk") != m.end() && !m["AttCk"].empty()) {
      attCk = make_shared<string>(boost::any_cast<string>(m["AttCk"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EntityList") != m.end() && !m["EntityList"].empty()) {
      entityList = make_shared<string>(boost::any_cast<string>(m["EntityList"]));
    }
    if (m.find("ExtendContent") != m.end() && !m["ExtendContent"].empty()) {
      extendContent = make_shared<string>(boost::any_cast<string>(m["ExtendContent"]));
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
    if (m.find("IsDefend") != m.end() && !m["IsDefend"].empty()) {
      isDefend = make_shared<string>(boost::any_cast<string>(m["IsDefend"]));
    }
    if (m.find("LogTime") != m.end() && !m["LogTime"].empty()) {
      logTime = make_shared<string>(boost::any_cast<string>(m["LogTime"]));
    }
    if (m.find("LogUuid") != m.end() && !m["LogUuid"].empty()) {
      logUuid = make_shared<string>(boost::any_cast<string>(m["LogUuid"]));
    }
    if (m.find("MainUserId") != m.end() && !m["MainUserId"].empty()) {
      mainUserId = make_shared<long>(boost::any_cast<long>(m["MainUserId"]));
    }
    if (m.find("OccurTime") != m.end() && !m["OccurTime"].empty()) {
      occurTime = make_shared<string>(boost::any_cast<string>(m["OccurTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
    if (m.find("SubUserName") != m.end() && !m["SubUserName"].empty()) {
      subUserName = make_shared<string>(boost::any_cast<string>(m["SubUserName"]));
    }
  }


  virtual ~DescribeAlertsResponseBodyDataResponseData() = default;
};
class DescribeAlertsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribeAlertsResponseBodyDataPageInfo> pageInfo{};
  shared_ptr<vector<DescribeAlertsResponseBodyDataResponseData>> responseData{};

  DescribeAlertsResponseBodyData() {}

  explicit DescribeAlertsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertsResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<DescribeAlertsResponseBodyDataPageInfo>(model1);
      }
    }
    if (m.find("ResponseData") != m.end() && !m["ResponseData"].empty()) {
      if (typeid(vector<boost::any>) == m["ResponseData"].type()) {
        vector<DescribeAlertsResponseBodyDataResponseData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResponseData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlertsResponseBodyDataResponseData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responseData = make_shared<vector<DescribeAlertsResponseBodyDataResponseData>>(expect1);
      }
    }
  }


  virtual ~DescribeAlertsResponseBodyData() = default;
};
class DescribeAlertsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeAlertsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAlertsResponseBody() {}

  explicit DescribeAlertsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAlertsResponseBodyData>(model1);
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


  virtual ~DescribeAlertsResponseBody() = default;
};
class DescribeAlertsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAlertsResponseBody> body{};

  DescribeAlertsResponse() {}

  explicit DescribeAlertsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAlertsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAlertsResponse() = default;
};
class DescribeAlertsCountRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> queryType{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<map<string, long>> countMap{};
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
    if (countMap) {
      res["CountMap"] = boost::any(*countMap);
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
    if (m.find("CountMap") != m.end() && !m["CountMap"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["CountMap"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      countMap = make_shared<map<string, long>>(toMap1);
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
        DescribeAlertsCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAlertsCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAlertsCountResponse() = default;
};
class DescribeAlertsWithEntityRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<long> entityId{};
  shared_ptr<string> entityUuid{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
  shared_ptr<string> sophonTaskId{};
  shared_ptr<long> startTime{};

  DescribeAlertsWithEntityRequest() {}

  explicit DescribeAlertsWithEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityUuid) {
      res["EntityUuid"] = boost::any(*entityUuid);
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityUuid") != m.end() && !m["EntityUuid"].empty()) {
      entityUuid = make_shared<string>(boost::any_cast<string>(m["EntityUuid"]));
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
    if (m.find("SophonTaskId") != m.end() && !m["SophonTaskId"].empty()) {
      sophonTaskId = make_shared<string>(boost::any_cast<string>(m["SophonTaskId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeAlertsWithEntityRequest() = default;
};
class DescribeAlertsWithEntityResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeAlertsWithEntityResponseBodyDataPageInfo() {}

  explicit DescribeAlertsWithEntityResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAlertsWithEntityResponseBodyDataPageInfo() = default;
};
class DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> keyName{};
  shared_ptr<string> values{};

  DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList() {}

  explicit DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList() = default;
};
class DescribeAlertsWithEntityResponseBodyDataResponseData : public Darabonba::Model {
public:
  shared_ptr<string> alertDesc{};
  shared_ptr<string> alertDescCode{};
  shared_ptr<string> alertDescEn{};
  shared_ptr<string> alertDetail{};
  shared_ptr<vector<DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList>> alertInfoList{};
  shared_ptr<string> alertLevel{};
  shared_ptr<string> alertName{};
  shared_ptr<string> alertNameCode{};
  shared_ptr<string> alertNameEn{};
  shared_ptr<string> alertSrcProd{};
  shared_ptr<string> alertSrcProdModule{};
  shared_ptr<string> alertTitle{};
  shared_ptr<string> alertTitleEn{};
  shared_ptr<string> alertType{};
  shared_ptr<string> alertTypeCode{};
  shared_ptr<string> alertTypeEn{};
  shared_ptr<string> alertUuid{};
  shared_ptr<string> assetList{};
  shared_ptr<string> attCk{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> endTime{};
  shared_ptr<string> entityList{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> isDefend{};
  shared_ptr<string> logTime{};
  shared_ptr<string> logUuid{};
  shared_ptr<long> mainUserId{};
  shared_ptr<string> occurTime{};
  shared_ptr<string> startTime{};
  shared_ptr<long> subUserId{};
  shared_ptr<string> subUserName{};

  DescribeAlertsWithEntityResponseBodyDataResponseData() {}

  explicit DescribeAlertsWithEntityResponseBodyDataResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertDesc) {
      res["AlertDesc"] = boost::any(*alertDesc);
    }
    if (alertDescCode) {
      res["AlertDescCode"] = boost::any(*alertDescCode);
    }
    if (alertDescEn) {
      res["AlertDescEn"] = boost::any(*alertDescEn);
    }
    if (alertDetail) {
      res["AlertDetail"] = boost::any(*alertDetail);
    }
    if (alertInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*alertInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AlertInfoList"] = boost::any(temp1);
    }
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
    if (assetList) {
      res["AssetList"] = boost::any(*assetList);
    }
    if (attCk) {
      res["AttCk"] = boost::any(*attCk);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (entityList) {
      res["EntityList"] = boost::any(*entityList);
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
    if (isDefend) {
      res["IsDefend"] = boost::any(*isDefend);
    }
    if (logTime) {
      res["LogTime"] = boost::any(*logTime);
    }
    if (logUuid) {
      res["LogUuid"] = boost::any(*logUuid);
    }
    if (mainUserId) {
      res["MainUserId"] = boost::any(*mainUserId);
    }
    if (occurTime) {
      res["OccurTime"] = boost::any(*occurTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    if (subUserName) {
      res["SubUserName"] = boost::any(*subUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertDesc") != m.end() && !m["AlertDesc"].empty()) {
      alertDesc = make_shared<string>(boost::any_cast<string>(m["AlertDesc"]));
    }
    if (m.find("AlertDescCode") != m.end() && !m["AlertDescCode"].empty()) {
      alertDescCode = make_shared<string>(boost::any_cast<string>(m["AlertDescCode"]));
    }
    if (m.find("AlertDescEn") != m.end() && !m["AlertDescEn"].empty()) {
      alertDescEn = make_shared<string>(boost::any_cast<string>(m["AlertDescEn"]));
    }
    if (m.find("AlertDetail") != m.end() && !m["AlertDetail"].empty()) {
      alertDetail = make_shared<string>(boost::any_cast<string>(m["AlertDetail"]));
    }
    if (m.find("AlertInfoList") != m.end() && !m["AlertInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AlertInfoList"].type()) {
        vector<DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AlertInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        alertInfoList = make_shared<vector<DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList>>(expect1);
      }
    }
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
    if (m.find("AssetList") != m.end() && !m["AssetList"].empty()) {
      assetList = make_shared<string>(boost::any_cast<string>(m["AssetList"]));
    }
    if (m.find("AttCk") != m.end() && !m["AttCk"].empty()) {
      attCk = make_shared<string>(boost::any_cast<string>(m["AttCk"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EntityList") != m.end() && !m["EntityList"].empty()) {
      entityList = make_shared<string>(boost::any_cast<string>(m["EntityList"]));
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
    if (m.find("IsDefend") != m.end() && !m["IsDefend"].empty()) {
      isDefend = make_shared<string>(boost::any_cast<string>(m["IsDefend"]));
    }
    if (m.find("LogTime") != m.end() && !m["LogTime"].empty()) {
      logTime = make_shared<string>(boost::any_cast<string>(m["LogTime"]));
    }
    if (m.find("LogUuid") != m.end() && !m["LogUuid"].empty()) {
      logUuid = make_shared<string>(boost::any_cast<string>(m["LogUuid"]));
    }
    if (m.find("MainUserId") != m.end() && !m["MainUserId"].empty()) {
      mainUserId = make_shared<long>(boost::any_cast<long>(m["MainUserId"]));
    }
    if (m.find("OccurTime") != m.end() && !m["OccurTime"].empty()) {
      occurTime = make_shared<string>(boost::any_cast<string>(m["OccurTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
    if (m.find("SubUserName") != m.end() && !m["SubUserName"].empty()) {
      subUserName = make_shared<string>(boost::any_cast<string>(m["SubUserName"]));
    }
  }


  virtual ~DescribeAlertsWithEntityResponseBodyDataResponseData() = default;
};
class DescribeAlertsWithEntityResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribeAlertsWithEntityResponseBodyDataPageInfo> pageInfo{};
  shared_ptr<vector<DescribeAlertsWithEntityResponseBodyDataResponseData>> responseData{};

  DescribeAlertsWithEntityResponseBodyData() {}

  explicit DescribeAlertsWithEntityResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertsWithEntityResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<DescribeAlertsWithEntityResponseBodyDataPageInfo>(model1);
      }
    }
    if (m.find("ResponseData") != m.end() && !m["ResponseData"].empty()) {
      if (typeid(vector<boost::any>) == m["ResponseData"].type()) {
        vector<DescribeAlertsWithEntityResponseBodyDataResponseData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResponseData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlertsWithEntityResponseBodyDataResponseData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responseData = make_shared<vector<DescribeAlertsWithEntityResponseBodyDataResponseData>>(expect1);
      }
    }
  }


  virtual ~DescribeAlertsWithEntityResponseBodyData() = default;
};
class DescribeAlertsWithEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeAlertsWithEntityResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAlertsWithEntityResponseBody() {}

  explicit DescribeAlertsWithEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertsWithEntityResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAlertsWithEntityResponseBodyData>(model1);
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


  virtual ~DescribeAlertsWithEntityResponseBody() = default;
};
class DescribeAlertsWithEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAlertsWithEntityResponseBody> body{};

  DescribeAlertsWithEntityResponse() {}

  explicit DescribeAlertsWithEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertsWithEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAlertsWithEntityResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAlertsWithEntityResponse() = default;
};
class DescribeAlertsWithEventRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertName{};
  shared_ptr<string> alertTitle{};
  shared_ptr<string> alertType{};
  shared_ptr<string> assetId{};
  shared_ptr<string> assetName{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> entityId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> isDefend{};
  shared_ptr<vector<string>> level{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
  shared_ptr<string> source{};
  shared_ptr<long> startTime{};
  shared_ptr<long> subUserId{};

  DescribeAlertsWithEventRequest() {}

  explicit DescribeAlertsWithEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertName) {
      res["AlertName"] = boost::any(*alertName);
    }
    if (alertTitle) {
      res["AlertTitle"] = boost::any(*alertTitle);
    }
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (assetId) {
      res["AssetId"] = boost::any(*assetId);
    }
    if (assetName) {
      res["AssetName"] = boost::any(*assetName);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (isDefend) {
      res["IsDefend"] = boost::any(*isDefend);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertName") != m.end() && !m["AlertName"].empty()) {
      alertName = make_shared<string>(boost::any_cast<string>(m["AlertName"]));
    }
    if (m.find("AlertTitle") != m.end() && !m["AlertTitle"].empty()) {
      alertTitle = make_shared<string>(boost::any_cast<string>(m["AlertTitle"]));
    }
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<string>(boost::any_cast<string>(m["AlertType"]));
    }
    if (m.find("AssetId") != m.end() && !m["AssetId"].empty()) {
      assetId = make_shared<string>(boost::any_cast<string>(m["AssetId"]));
    }
    if (m.find("AssetName") != m.end() && !m["AssetName"].empty()) {
      assetName = make_shared<string>(boost::any_cast<string>(m["AssetName"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("IsDefend") != m.end() && !m["IsDefend"].empty()) {
      isDefend = make_shared<string>(boost::any_cast<string>(m["IsDefend"]));
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
  }


  virtual ~DescribeAlertsWithEventRequest() = default;
};
class DescribeAlertsWithEventResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeAlertsWithEventResponseBodyDataPageInfo() {}

  explicit DescribeAlertsWithEventResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAlertsWithEventResponseBodyDataPageInfo() = default;
};
class DescribeAlertsWithEventResponseBodyDataResponseDataAlertInfoList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> keyName{};
  shared_ptr<string> values{};

  DescribeAlertsWithEventResponseBodyDataResponseDataAlertInfoList() {}

  explicit DescribeAlertsWithEventResponseBodyDataResponseDataAlertInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAlertsWithEventResponseBodyDataResponseDataAlertInfoList() = default;
};
class DescribeAlertsWithEventResponseBodyDataResponseData : public Darabonba::Model {
public:
  shared_ptr<string> alertDesc{};
  shared_ptr<string> alertDescCode{};
  shared_ptr<string> alertDescEn{};
  shared_ptr<string> alertDetail{};
  shared_ptr<vector<DescribeAlertsWithEventResponseBodyDataResponseDataAlertInfoList>> alertInfoList{};
  shared_ptr<string> alertLevel{};
  shared_ptr<string> alertName{};
  shared_ptr<string> alertNameCode{};
  shared_ptr<string> alertNameEn{};
  shared_ptr<string> alertSrcProd{};
  shared_ptr<string> alertSrcProdModule{};
  shared_ptr<string> alertTitle{};
  shared_ptr<string> alertTitleEn{};
  shared_ptr<string> alertType{};
  shared_ptr<string> alertTypeCode{};
  shared_ptr<string> alertTypeEn{};
  shared_ptr<string> alertUuid{};
  shared_ptr<string> assetList{};
  shared_ptr<string> attCk{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> endTime{};
  shared_ptr<string> entityList{};
  shared_ptr<string> extendContent{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> isDefend{};
  shared_ptr<string> logTime{};
  shared_ptr<string> logUuid{};
  shared_ptr<long> mainUserId{};
  shared_ptr<string> occurTime{};
  shared_ptr<string> startTime{};
  shared_ptr<long> subUserId{};
  shared_ptr<string> subUserName{};

  DescribeAlertsWithEventResponseBodyDataResponseData() {}

  explicit DescribeAlertsWithEventResponseBodyDataResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertDesc) {
      res["AlertDesc"] = boost::any(*alertDesc);
    }
    if (alertDescCode) {
      res["AlertDescCode"] = boost::any(*alertDescCode);
    }
    if (alertDescEn) {
      res["AlertDescEn"] = boost::any(*alertDescEn);
    }
    if (alertDetail) {
      res["AlertDetail"] = boost::any(*alertDetail);
    }
    if (alertInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*alertInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AlertInfoList"] = boost::any(temp1);
    }
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
    if (assetList) {
      res["AssetList"] = boost::any(*assetList);
    }
    if (attCk) {
      res["AttCk"] = boost::any(*attCk);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (entityList) {
      res["EntityList"] = boost::any(*entityList);
    }
    if (extendContent) {
      res["ExtendContent"] = boost::any(*extendContent);
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
    if (isDefend) {
      res["IsDefend"] = boost::any(*isDefend);
    }
    if (logTime) {
      res["LogTime"] = boost::any(*logTime);
    }
    if (logUuid) {
      res["LogUuid"] = boost::any(*logUuid);
    }
    if (mainUserId) {
      res["MainUserId"] = boost::any(*mainUserId);
    }
    if (occurTime) {
      res["OccurTime"] = boost::any(*occurTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    if (subUserName) {
      res["SubUserName"] = boost::any(*subUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertDesc") != m.end() && !m["AlertDesc"].empty()) {
      alertDesc = make_shared<string>(boost::any_cast<string>(m["AlertDesc"]));
    }
    if (m.find("AlertDescCode") != m.end() && !m["AlertDescCode"].empty()) {
      alertDescCode = make_shared<string>(boost::any_cast<string>(m["AlertDescCode"]));
    }
    if (m.find("AlertDescEn") != m.end() && !m["AlertDescEn"].empty()) {
      alertDescEn = make_shared<string>(boost::any_cast<string>(m["AlertDescEn"]));
    }
    if (m.find("AlertDetail") != m.end() && !m["AlertDetail"].empty()) {
      alertDetail = make_shared<string>(boost::any_cast<string>(m["AlertDetail"]));
    }
    if (m.find("AlertInfoList") != m.end() && !m["AlertInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AlertInfoList"].type()) {
        vector<DescribeAlertsWithEventResponseBodyDataResponseDataAlertInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AlertInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlertsWithEventResponseBodyDataResponseDataAlertInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        alertInfoList = make_shared<vector<DescribeAlertsWithEventResponseBodyDataResponseDataAlertInfoList>>(expect1);
      }
    }
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
    if (m.find("AssetList") != m.end() && !m["AssetList"].empty()) {
      assetList = make_shared<string>(boost::any_cast<string>(m["AssetList"]));
    }
    if (m.find("AttCk") != m.end() && !m["AttCk"].empty()) {
      attCk = make_shared<string>(boost::any_cast<string>(m["AttCk"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EntityList") != m.end() && !m["EntityList"].empty()) {
      entityList = make_shared<string>(boost::any_cast<string>(m["EntityList"]));
    }
    if (m.find("ExtendContent") != m.end() && !m["ExtendContent"].empty()) {
      extendContent = make_shared<string>(boost::any_cast<string>(m["ExtendContent"]));
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
    if (m.find("IsDefend") != m.end() && !m["IsDefend"].empty()) {
      isDefend = make_shared<string>(boost::any_cast<string>(m["IsDefend"]));
    }
    if (m.find("LogTime") != m.end() && !m["LogTime"].empty()) {
      logTime = make_shared<string>(boost::any_cast<string>(m["LogTime"]));
    }
    if (m.find("LogUuid") != m.end() && !m["LogUuid"].empty()) {
      logUuid = make_shared<string>(boost::any_cast<string>(m["LogUuid"]));
    }
    if (m.find("MainUserId") != m.end() && !m["MainUserId"].empty()) {
      mainUserId = make_shared<long>(boost::any_cast<long>(m["MainUserId"]));
    }
    if (m.find("OccurTime") != m.end() && !m["OccurTime"].empty()) {
      occurTime = make_shared<string>(boost::any_cast<string>(m["OccurTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
    if (m.find("SubUserName") != m.end() && !m["SubUserName"].empty()) {
      subUserName = make_shared<string>(boost::any_cast<string>(m["SubUserName"]));
    }
  }


  virtual ~DescribeAlertsWithEventResponseBodyDataResponseData() = default;
};
class DescribeAlertsWithEventResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribeAlertsWithEventResponseBodyDataPageInfo> pageInfo{};
  shared_ptr<vector<DescribeAlertsWithEventResponseBodyDataResponseData>> responseData{};

  DescribeAlertsWithEventResponseBodyData() {}

  explicit DescribeAlertsWithEventResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertsWithEventResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<DescribeAlertsWithEventResponseBodyDataPageInfo>(model1);
      }
    }
    if (m.find("ResponseData") != m.end() && !m["ResponseData"].empty()) {
      if (typeid(vector<boost::any>) == m["ResponseData"].type()) {
        vector<DescribeAlertsWithEventResponseBodyDataResponseData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResponseData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlertsWithEventResponseBodyDataResponseData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responseData = make_shared<vector<DescribeAlertsWithEventResponseBodyDataResponseData>>(expect1);
      }
    }
  }


  virtual ~DescribeAlertsWithEventResponseBodyData() = default;
};
class DescribeAlertsWithEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeAlertsWithEventResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAlertsWithEventResponseBody() {}

  explicit DescribeAlertsWithEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertsWithEventResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAlertsWithEventResponseBodyData>(model1);
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


  virtual ~DescribeAlertsWithEventResponseBody() = default;
};
class DescribeAlertsWithEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAlertsWithEventResponseBody> body{};

  DescribeAlertsWithEventResponse() {}

  explicit DescribeAlertsWithEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlertsWithEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAlertsWithEventResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAlertsWithEventResponse() = default;
};
class DescribeAuthRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeAuthRequest() {}

  explicit DescribeAuthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAuthRequest() = default;
};
class DescribeAuthResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  DescribeAuthResponseBody() {}

  explicit DescribeAuthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAuthResponseBody() = default;
};
class DescribeAuthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAuthResponseBody> body{};

  DescribeAuthResponse() {}

  explicit DescribeAuthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAuthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuthResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuthResponse() = default;
};
class DescribeAutomateResponseConfigCounterRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<string> assetName{};
  shared_ptr<string> assetType{};
  shared_ptr<string> assetUuid{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

  DescribeCloudSiemAssetsRequest() {}

  explicit DescribeCloudSiemAssetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetName) {
      res["AssetName"] = boost::any(*assetName);
    }
    if (assetType) {
      res["AssetType"] = boost::any(*assetType);
    }
    if (assetUuid) {
      res["AssetUuid"] = boost::any(*assetUuid);
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssetName") != m.end() && !m["AssetName"].empty()) {
      assetName = make_shared<string>(boost::any_cast<string>(m["AssetName"]));
    }
    if (m.find("AssetType") != m.end() && !m["AssetType"].empty()) {
      assetType = make_shared<string>(boost::any_cast<string>(m["AssetType"]));
    }
    if (m.find("AssetUuid") != m.end() && !m["AssetUuid"].empty()) {
      assetUuid = make_shared<string>(boost::any_cast<string>(m["AssetUuid"]));
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~DescribeCloudSiemEventDetailRequest() = default;
};
class DescribeCloudSiemEventDetailResponseBodyDataAttckStages : public Darabonba::Model {
public:
  shared_ptr<long> alertNum{};
  shared_ptr<string> tacticId{};
  shared_ptr<string> tacticName{};

  DescribeCloudSiemEventDetailResponseBodyDataAttckStages() {}

  explicit DescribeCloudSiemEventDetailResponseBodyDataAttckStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertNum) {
      res["AlertNum"] = boost::any(*alertNum);
    }
    if (tacticId) {
      res["TacticId"] = boost::any(*tacticId);
    }
    if (tacticName) {
      res["TacticName"] = boost::any(*tacticName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertNum") != m.end() && !m["AlertNum"].empty()) {
      alertNum = make_shared<long>(boost::any_cast<long>(m["AlertNum"]));
    }
    if (m.find("TacticId") != m.end() && !m["TacticId"].empty()) {
      tacticId = make_shared<string>(boost::any_cast<string>(m["TacticId"]));
    }
    if (m.find("TacticName") != m.end() && !m["TacticName"].empty()) {
      tacticName = make_shared<string>(boost::any_cast<string>(m["TacticName"]));
    }
  }


  virtual ~DescribeCloudSiemEventDetailResponseBodyDataAttckStages() = default;
};
class DescribeCloudSiemEventDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> alertNum{};
  shared_ptr<long> aliuid{};
  shared_ptr<long> assetNum{};
  shared_ptr<vector<string>> attCkLabels{};
  shared_ptr<vector<DescribeCloudSiemEventDetailResponseBodyDataAttckStages>> attckStages{};
  shared_ptr<vector<string>> dataSources{};
  shared_ptr<string> description{};
  shared_ptr<string> descriptionEn{};
  shared_ptr<string> extContent{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> incidentName{};
  shared_ptr<string> incidentNameEn{};
  shared_ptr<string> incidentType{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> referAccount{};
  shared_ptr<string> remark{};
  shared_ptr<string> ruleId{};
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
    if (attckStages) {
      vector<boost::any> temp1;
      for(auto item1:*attckStages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AttckStages"] = boost::any(temp1);
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
    if (incidentType) {
      res["IncidentType"] = boost::any(*incidentType);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (referAccount) {
      res["ReferAccount"] = boost::any(*referAccount);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
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
    if (m.find("AttckStages") != m.end() && !m["AttckStages"].empty()) {
      if (typeid(vector<boost::any>) == m["AttckStages"].type()) {
        vector<DescribeCloudSiemEventDetailResponseBodyDataAttckStages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AttckStages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCloudSiemEventDetailResponseBodyDataAttckStages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attckStages = make_shared<vector<DescribeCloudSiemEventDetailResponseBodyDataAttckStages>>(expect1);
      }
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
    if (m.find("IncidentType") != m.end() && !m["IncidentType"].empty()) {
      incidentType = make_shared<string>(boost::any_cast<string>(m["IncidentType"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("ReferAccount") != m.end() && !m["ReferAccount"].empty()) {
      referAccount = make_shared<string>(boost::any_cast<string>(m["ReferAccount"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
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
  shared_ptr<string> entityUuid{};
  shared_ptr<string> eventName{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> order{};
  shared_ptr<string> orderField{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (entityUuid) {
      res["EntityUuid"] = boost::any(*entityUuid);
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("EntityUuid") != m.end() && !m["EntityUuid"].empty()) {
      entityUuid = make_shared<string>(boost::any_cast<string>(m["EntityUuid"]));
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
class DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages : public Darabonba::Model {
public:
  shared_ptr<long> alertNum{};
  shared_ptr<string> tacticId{};
  shared_ptr<string> tacticName{};

  DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages() {}

  explicit DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertNum) {
      res["AlertNum"] = boost::any(*alertNum);
    }
    if (tacticId) {
      res["TacticId"] = boost::any(*tacticId);
    }
    if (tacticName) {
      res["TacticName"] = boost::any(*tacticName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertNum") != m.end() && !m["AlertNum"].empty()) {
      alertNum = make_shared<long>(boost::any_cast<long>(m["AlertNum"]));
    }
    if (m.find("TacticId") != m.end() && !m["TacticId"].empty()) {
      tacticId = make_shared<string>(boost::any_cast<string>(m["TacticId"]));
    }
    if (m.find("TacticName") != m.end() && !m["TacticName"].empty()) {
      tacticName = make_shared<string>(boost::any_cast<string>(m["TacticName"]));
    }
  }


  virtual ~DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages() = default;
};
class DescribeCloudSiemEventsResponseBodyDataResponseData : public Darabonba::Model {
public:
  shared_ptr<long> alertNum{};
  shared_ptr<long> aliuid{};
  shared_ptr<long> assetNum{};
  shared_ptr<vector<string>> attCkLabels{};
  shared_ptr<vector<DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages>> attckStages{};
  shared_ptr<vector<string>> dataSources{};
  shared_ptr<string> description{};
  shared_ptr<string> descriptionEn{};
  shared_ptr<string> extContent{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> incidentName{};
  shared_ptr<string> incidentNameEn{};
  shared_ptr<string> incidentType{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> referAccount{};
  shared_ptr<string> remark{};
  shared_ptr<string> ruleId{};
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
    if (attckStages) {
      vector<boost::any> temp1;
      for(auto item1:*attckStages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AttckStages"] = boost::any(temp1);
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
    if (incidentType) {
      res["IncidentType"] = boost::any(*incidentType);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (referAccount) {
      res["ReferAccount"] = boost::any(*referAccount);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
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
    if (m.find("AttckStages") != m.end() && !m["AttckStages"].empty()) {
      if (typeid(vector<boost::any>) == m["AttckStages"].type()) {
        vector<DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AttckStages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attckStages = make_shared<vector<DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages>>(expect1);
      }
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
    if (m.find("IncidentType") != m.end() && !m["IncidentType"].empty()) {
      incidentType = make_shared<string>(boost::any_cast<string>(m["IncidentType"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("ReferAccount") != m.end() && !m["ReferAccount"].empty()) {
      referAccount = make_shared<string>(boost::any_cast<string>(m["ReferAccount"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
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
        DescribeCloudSiemEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCloudSiemEventsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCloudSiemEventsResponse() = default;
};
class DescribeCustomizeRuleCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~DescribeCustomizeRuleCountRequest() = default;
};
class DescribeCustomizeRuleCountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> aggregationRuleNum{};
  shared_ptr<long> customizeRuleNum{};
  shared_ptr<long> expertRuleNum{};
  shared_ptr<long> graphComputingRuleNum{};
  shared_ptr<long> highRuleNum{};
  shared_ptr<long> inUseRuleNum{};
  shared_ptr<long> lowRuleNum{};
  shared_ptr<long> mediumRuleNum{};
  shared_ptr<long> predefinedRuleNum{};
  shared_ptr<long> singleAlertRuleNum{};
  shared_ptr<long> totalRuleNum{};
  shared_ptr<long> unEventRuleNum{};

  DescribeCustomizeRuleCountResponseBodyData() {}

  explicit DescribeCustomizeRuleCountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregationRuleNum) {
      res["AggregationRuleNum"] = boost::any(*aggregationRuleNum);
    }
    if (customizeRuleNum) {
      res["CustomizeRuleNum"] = boost::any(*customizeRuleNum);
    }
    if (expertRuleNum) {
      res["ExpertRuleNum"] = boost::any(*expertRuleNum);
    }
    if (graphComputingRuleNum) {
      res["GraphComputingRuleNum"] = boost::any(*graphComputingRuleNum);
    }
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
    if (predefinedRuleNum) {
      res["PredefinedRuleNum"] = boost::any(*predefinedRuleNum);
    }
    if (singleAlertRuleNum) {
      res["SingleAlertRuleNum"] = boost::any(*singleAlertRuleNum);
    }
    if (totalRuleNum) {
      res["TotalRuleNum"] = boost::any(*totalRuleNum);
    }
    if (unEventRuleNum) {
      res["UnEventRuleNum"] = boost::any(*unEventRuleNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregationRuleNum") != m.end() && !m["AggregationRuleNum"].empty()) {
      aggregationRuleNum = make_shared<long>(boost::any_cast<long>(m["AggregationRuleNum"]));
    }
    if (m.find("CustomizeRuleNum") != m.end() && !m["CustomizeRuleNum"].empty()) {
      customizeRuleNum = make_shared<long>(boost::any_cast<long>(m["CustomizeRuleNum"]));
    }
    if (m.find("ExpertRuleNum") != m.end() && !m["ExpertRuleNum"].empty()) {
      expertRuleNum = make_shared<long>(boost::any_cast<long>(m["ExpertRuleNum"]));
    }
    if (m.find("GraphComputingRuleNum") != m.end() && !m["GraphComputingRuleNum"].empty()) {
      graphComputingRuleNum = make_shared<long>(boost::any_cast<long>(m["GraphComputingRuleNum"]));
    }
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
    if (m.find("PredefinedRuleNum") != m.end() && !m["PredefinedRuleNum"].empty()) {
      predefinedRuleNum = make_shared<long>(boost::any_cast<long>(m["PredefinedRuleNum"]));
    }
    if (m.find("SingleAlertRuleNum") != m.end() && !m["SingleAlertRuleNum"].empty()) {
      singleAlertRuleNum = make_shared<long>(boost::any_cast<long>(m["SingleAlertRuleNum"]));
    }
    if (m.find("TotalRuleNum") != m.end() && !m["TotalRuleNum"].empty()) {
      totalRuleNum = make_shared<long>(boost::any_cast<long>(m["TotalRuleNum"]));
    }
    if (m.find("UnEventRuleNum") != m.end() && !m["UnEventRuleNum"].empty()) {
      unEventRuleNum = make_shared<long>(boost::any_cast<long>(m["UnEventRuleNum"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
        DescribeCustomizeRuleTestHistogramResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCustomizeRuleTestHistogramResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCustomizeRuleTestHistogramResponse() = default;
};
class DescribeDataSourceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> dataSourceInstanceId{};
  shared_ptr<string> regionId{};

  DescribeDataSourceInstanceRequest() {}

  explicit DescribeDataSourceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (dataSourceInstanceId) {
      res["DataSourceInstanceId"] = boost::any(*dataSourceInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("DataSourceInstanceId") != m.end() && !m["DataSourceInstanceId"].empty()) {
      dataSourceInstanceId = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDataSourceInstanceRequest() = default;
};
class DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams : public Darabonba::Model {
public:
  shared_ptr<string> paraCode{};
  shared_ptr<string> paraValue{};

  DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams() {}

  explicit DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paraCode) {
      res["ParaCode"] = boost::any(*paraCode);
    }
    if (paraValue) {
      res["ParaValue"] = boost::any(*paraValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParaCode") != m.end() && !m["ParaCode"].empty()) {
      paraCode = make_shared<string>(boost::any_cast<string>(m["ParaCode"]));
    }
    if (m.find("ParaValue") != m.end() && !m["ParaValue"].empty()) {
      paraValue = make_shared<string>(boost::any_cast<string>(m["ParaValue"]));
    }
  }


  virtual ~DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams() = default;
};
class DescribeDataSourceInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> dataSourceInstanceId{};
  shared_ptr<vector<DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams>> dataSourceInstanceParams{};

  DescribeDataSourceInstanceResponseBodyData() {}

  explicit DescribeDataSourceInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (dataSourceInstanceId) {
      res["DataSourceInstanceId"] = boost::any(*dataSourceInstanceId);
    }
    if (dataSourceInstanceParams) {
      vector<boost::any> temp1;
      for(auto item1:*dataSourceInstanceParams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSourceInstanceParams"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("DataSourceInstanceId") != m.end() && !m["DataSourceInstanceId"].empty()) {
      dataSourceInstanceId = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceId"]));
    }
    if (m.find("DataSourceInstanceParams") != m.end() && !m["DataSourceInstanceParams"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSourceInstanceParams"].type()) {
        vector<DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSourceInstanceParams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSourceInstanceParams = make_shared<vector<DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams>>(expect1);
      }
    }
  }


  virtual ~DescribeDataSourceInstanceResponseBodyData() = default;
};
class DescribeDataSourceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDataSourceInstanceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeDataSourceInstanceResponseBody() {}

  explicit DescribeDataSourceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDataSourceInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDataSourceInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDataSourceInstanceResponseBody() = default;
};
class DescribeDataSourceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataSourceInstanceResponseBody> body{};

  DescribeDataSourceInstanceResponse() {}

  explicit DescribeDataSourceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataSourceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataSourceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataSourceInstanceResponse() = default;
};
class DescribeDataSourceParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> cloudCode{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> regionId{};

  DescribeDataSourceParametersRequest() {}

  explicit DescribeDataSourceParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDataSourceParametersRequest() = default;
};
class DescribeDataSourceParametersResponseBodyDataParamValue : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<string> value{};

  DescribeDataSourceParametersResponseBodyDataParamValue() {}

  explicit DescribeDataSourceParametersResponseBodyDataParamValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDataSourceParametersResponseBodyDataParamValue() = default;
};
class DescribeDataSourceParametersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> canEditted{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> defaultValue{};
  shared_ptr<bool> disabled{};
  shared_ptr<string> formatCheck{};
  shared_ptr<string> hit{};
  shared_ptr<string> paraCode{};
  shared_ptr<long> paraLevel{};
  shared_ptr<string> paraName{};
  shared_ptr<string> paraType{};
  shared_ptr<vector<DescribeDataSourceParametersResponseBodyDataParamValue>> paramValue{};
  shared_ptr<long> required{};
  shared_ptr<string> title{};

  DescribeDataSourceParametersResponseBodyData() {}

  explicit DescribeDataSourceParametersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canEditted) {
      res["CanEditted"] = boost::any(*canEditted);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (formatCheck) {
      res["FormatCheck"] = boost::any(*formatCheck);
    }
    if (hit) {
      res["Hit"] = boost::any(*hit);
    }
    if (paraCode) {
      res["ParaCode"] = boost::any(*paraCode);
    }
    if (paraLevel) {
      res["ParaLevel"] = boost::any(*paraLevel);
    }
    if (paraName) {
      res["ParaName"] = boost::any(*paraName);
    }
    if (paraType) {
      res["ParaType"] = boost::any(*paraType);
    }
    if (paramValue) {
      vector<boost::any> temp1;
      for(auto item1:*paramValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParamValue"] = boost::any(temp1);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanEditted") != m.end() && !m["CanEditted"].empty()) {
      canEditted = make_shared<long>(boost::any_cast<long>(m["CanEditted"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("FormatCheck") != m.end() && !m["FormatCheck"].empty()) {
      formatCheck = make_shared<string>(boost::any_cast<string>(m["FormatCheck"]));
    }
    if (m.find("Hit") != m.end() && !m["Hit"].empty()) {
      hit = make_shared<string>(boost::any_cast<string>(m["Hit"]));
    }
    if (m.find("ParaCode") != m.end() && !m["ParaCode"].empty()) {
      paraCode = make_shared<string>(boost::any_cast<string>(m["ParaCode"]));
    }
    if (m.find("ParaLevel") != m.end() && !m["ParaLevel"].empty()) {
      paraLevel = make_shared<long>(boost::any_cast<long>(m["ParaLevel"]));
    }
    if (m.find("ParaName") != m.end() && !m["ParaName"].empty()) {
      paraName = make_shared<string>(boost::any_cast<string>(m["ParaName"]));
    }
    if (m.find("ParaType") != m.end() && !m["ParaType"].empty()) {
      paraType = make_shared<string>(boost::any_cast<string>(m["ParaType"]));
    }
    if (m.find("ParamValue") != m.end() && !m["ParamValue"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamValue"].type()) {
        vector<DescribeDataSourceParametersResponseBodyDataParamValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParamValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataSourceParametersResponseBodyDataParamValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramValue = make_shared<vector<DescribeDataSourceParametersResponseBodyDataParamValue>>(expect1);
      }
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<long>(boost::any_cast<long>(m["Required"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeDataSourceParametersResponseBodyData() = default;
};
class DescribeDataSourceParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDataSourceParametersResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeDataSourceParametersResponseBody() {}

  explicit DescribeDataSourceParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeDataSourceParametersResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataSourceParametersResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeDataSourceParametersResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDataSourceParametersResponseBody() = default;
};
class DescribeDataSourceParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataSourceParametersResponseBody> body{};

  DescribeDataSourceParametersResponse() {}

  explicit DescribeDataSourceParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataSourceParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataSourceParametersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataSourceParametersResponse() = default;
};
class DescribeDisposeAndPlaybookRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> entityType{};
  shared_ptr<string> entityUuid{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (entityUuid) {
      res["EntityUuid"] = boost::any(*entityUuid);
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("EntityUuid") != m.end() && !m["EntityUuid"].empty()) {
      entityUuid = make_shared<string>(boost::any_cast<string>(m["EntityUuid"]));
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<string> available{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};
  shared_ptr<string> opCode{};
  shared_ptr<string> opLevel{};
  shared_ptr<vector<boost::any>> paramConfig{};
  shared_ptr<string> taskConfig{};
  shared_ptr<string> uuid{};
  shared_ptr<bool> wafPlaybook{};

  DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList() {}

  explicit DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (available) {
      res["Available"] = boost::any(*available);
    }
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
    if (paramConfig) {
      res["ParamConfig"] = boost::any(*paramConfig);
    }
    if (taskConfig) {
      res["TaskConfig"] = boost::any(*taskConfig);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    if (wafPlaybook) {
      res["WafPlaybook"] = boost::any(*wafPlaybook);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Available") != m.end() && !m["Available"].empty()) {
      available = make_shared<string>(boost::any_cast<string>(m["Available"]));
    }
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
    if (m.find("ParamConfig") != m.end() && !m["ParamConfig"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["ParamConfig"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParamConfig"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      paramConfig = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("TaskConfig") != m.end() && !m["TaskConfig"].empty()) {
      taskConfig = make_shared<string>(boost::any_cast<string>(m["TaskConfig"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
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
  shared_ptr<string> entityType{};
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
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
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
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> endTime{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
  shared_ptr<long> startTime{};

  DescribeEventCountByThreatLevelRequest() {}

  explicit DescribeEventCountByThreatLevelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
        DescribeEventDisposeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEventDisposeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEventDisposeResponse() = default;
};
class DescribeImportedLogCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> roleFor{};
  shared_ptr<string> roleType{};

  DescribeImportedLogCountRequest() {}

  explicit DescribeImportedLogCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<string>(boost::any_cast<string>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~DescribeImportedLogCountRequest() = default;
};
class DescribeImportedLogCountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> importedLogCount{};
  shared_ptr<long> totalLogCount{};
  shared_ptr<long> unImportedLogCount{};

  DescribeImportedLogCountResponseBodyData() {}

  explicit DescribeImportedLogCountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (importedLogCount) {
      res["ImportedLogCount"] = boost::any(*importedLogCount);
    }
    if (totalLogCount) {
      res["TotalLogCount"] = boost::any(*totalLogCount);
    }
    if (unImportedLogCount) {
      res["UnImportedLogCount"] = boost::any(*unImportedLogCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImportedLogCount") != m.end() && !m["ImportedLogCount"].empty()) {
      importedLogCount = make_shared<long>(boost::any_cast<long>(m["ImportedLogCount"]));
    }
    if (m.find("TotalLogCount") != m.end() && !m["TotalLogCount"].empty()) {
      totalLogCount = make_shared<long>(boost::any_cast<long>(m["TotalLogCount"]));
    }
    if (m.find("UnImportedLogCount") != m.end() && !m["UnImportedLogCount"].empty()) {
      unImportedLogCount = make_shared<long>(boost::any_cast<long>(m["UnImportedLogCount"]));
    }
  }


  virtual ~DescribeImportedLogCountResponseBodyData() = default;
};
class DescribeImportedLogCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeImportedLogCountResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeImportedLogCountResponseBody() {}

  explicit DescribeImportedLogCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeImportedLogCountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeImportedLogCountResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeImportedLogCountResponseBody() = default;
};
class DescribeImportedLogCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeImportedLogCountResponseBody> body{};

  DescribeImportedLogCountResponse() {}

  explicit DescribeImportedLogCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeImportedLogCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeImportedLogCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeImportedLogCountResponse() = default;
};
class DescribeLogFieldsRequest : public Darabonba::Model {
public:
  shared_ptr<string> logSource{};
  shared_ptr<string> logType{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
        DescribeLogSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLogSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLogSourceResponse() = default;
};
class DescribeLogTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
        DescribeOperatorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOperatorsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOperatorsResponse() = default;
};
class DescribeProdCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

  DescribeProdCountRequest() {}

  explicit DescribeProdCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~DescribeProdCountRequest() = default;
};
class DescribeProdCountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> aliyunImportedCount{};
  shared_ptr<long> aliyunProdCount{};
  shared_ptr<long> hcloudImportedCount{};
  shared_ptr<long> hcloudProdCount{};
  shared_ptr<long> idcImportedCount{};
  shared_ptr<long> idcProdCount{};
  shared_ptr<long> qcloudImportedCount{};
  shared_ptr<long> qcloudProdCount{};

  DescribeProdCountResponseBodyData() {}

  explicit DescribeProdCountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunImportedCount) {
      res["AliyunImportedCount"] = boost::any(*aliyunImportedCount);
    }
    if (aliyunProdCount) {
      res["AliyunProdCount"] = boost::any(*aliyunProdCount);
    }
    if (hcloudImportedCount) {
      res["HcloudImportedCount"] = boost::any(*hcloudImportedCount);
    }
    if (hcloudProdCount) {
      res["HcloudProdCount"] = boost::any(*hcloudProdCount);
    }
    if (idcImportedCount) {
      res["IdcImportedCount"] = boost::any(*idcImportedCount);
    }
    if (idcProdCount) {
      res["IdcProdCount"] = boost::any(*idcProdCount);
    }
    if (qcloudImportedCount) {
      res["QcloudImportedCount"] = boost::any(*qcloudImportedCount);
    }
    if (qcloudProdCount) {
      res["QcloudProdCount"] = boost::any(*qcloudProdCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunImportedCount") != m.end() && !m["AliyunImportedCount"].empty()) {
      aliyunImportedCount = make_shared<long>(boost::any_cast<long>(m["AliyunImportedCount"]));
    }
    if (m.find("AliyunProdCount") != m.end() && !m["AliyunProdCount"].empty()) {
      aliyunProdCount = make_shared<long>(boost::any_cast<long>(m["AliyunProdCount"]));
    }
    if (m.find("HcloudImportedCount") != m.end() && !m["HcloudImportedCount"].empty()) {
      hcloudImportedCount = make_shared<long>(boost::any_cast<long>(m["HcloudImportedCount"]));
    }
    if (m.find("HcloudProdCount") != m.end() && !m["HcloudProdCount"].empty()) {
      hcloudProdCount = make_shared<long>(boost::any_cast<long>(m["HcloudProdCount"]));
    }
    if (m.find("IdcImportedCount") != m.end() && !m["IdcImportedCount"].empty()) {
      idcImportedCount = make_shared<long>(boost::any_cast<long>(m["IdcImportedCount"]));
    }
    if (m.find("IdcProdCount") != m.end() && !m["IdcProdCount"].empty()) {
      idcProdCount = make_shared<long>(boost::any_cast<long>(m["IdcProdCount"]));
    }
    if (m.find("QcloudImportedCount") != m.end() && !m["QcloudImportedCount"].empty()) {
      qcloudImportedCount = make_shared<long>(boost::any_cast<long>(m["QcloudImportedCount"]));
    }
    if (m.find("QcloudProdCount") != m.end() && !m["QcloudProdCount"].empty()) {
      qcloudProdCount = make_shared<long>(boost::any_cast<long>(m["QcloudProdCount"]));
    }
  }


  virtual ~DescribeProdCountResponseBodyData() = default;
};
class DescribeProdCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeProdCountResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeProdCountResponseBody() {}

  explicit DescribeProdCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeProdCountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeProdCountResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeProdCountResponseBody() = default;
};
class DescribeProdCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeProdCountResponseBody> body{};

  DescribeProdCountResponse() {}

  explicit DescribeProdCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProdCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProdCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProdCountResponse() = default;
};
class DescribeScopeUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~DescribeScopeUsersRequest() = default;
};
class DescribeScopeUsersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> cloudCode{};
  shared_ptr<vector<string>> domains{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> userId{};
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
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (domains) {
      res["Domains"] = boost::any(*domains);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
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
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
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
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
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
        DescribeScopeUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScopeUsersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScopeUsersResponse() = default;
};
class DescribeServiceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeServiceStatusRequest() {}

  explicit DescribeServiceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeServiceStatusRequest() = default;
};
class DescribeServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  DescribeServiceStatusResponseBody() {}

  explicit DescribeServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeServiceStatusResponseBody() = default;
};
class DescribeServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeServiceStatusResponseBody> body{};

  DescribeServiceStatusResponse() {}

  explicit DescribeServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceStatusResponse() = default;
};
class DescribeStorageRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~DescribeStorageRequest() = default;
};
class DescribeStorageResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  DescribeStorageResponseBody() {}

  explicit DescribeStorageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
        DescribeStorageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStorageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStorageResponse() = default;
};
class DescribeUserBuyStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> subUserId{};

  DescribeUserBuyStatusRequest() {}

  explicit DescribeUserBuyStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
  }


  virtual ~DescribeUserBuyStatusRequest() = default;
};
class DescribeUserBuyStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> canBuy{};
  shared_ptr<long> capacity{};
  shared_ptr<long> durationDays{};
  shared_ptr<long> endTime{};
  shared_ptr<long> mainUserId{};
  shared_ptr<string> mainUserName{};
  shared_ptr<long> masterUserId{};
  shared_ptr<string> masterUserName{};
  shared_ptr<long> rdOrder{};
  shared_ptr<string> sasInstanceId{};
  shared_ptr<long> subUserId{};
  shared_ptr<string> subUserName{};

  DescribeUserBuyStatusResponseBodyData() {}

  explicit DescribeUserBuyStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canBuy) {
      res["CanBuy"] = boost::any(*canBuy);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (durationDays) {
      res["DurationDays"] = boost::any(*durationDays);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (mainUserId) {
      res["MainUserId"] = boost::any(*mainUserId);
    }
    if (mainUserName) {
      res["MainUserName"] = boost::any(*mainUserName);
    }
    if (masterUserId) {
      res["MasterUserId"] = boost::any(*masterUserId);
    }
    if (masterUserName) {
      res["MasterUserName"] = boost::any(*masterUserName);
    }
    if (rdOrder) {
      res["RdOrder"] = boost::any(*rdOrder);
    }
    if (sasInstanceId) {
      res["SasInstanceId"] = boost::any(*sasInstanceId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    if (subUserName) {
      res["SubUserName"] = boost::any(*subUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanBuy") != m.end() && !m["CanBuy"].empty()) {
      canBuy = make_shared<bool>(boost::any_cast<bool>(m["CanBuy"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("DurationDays") != m.end() && !m["DurationDays"].empty()) {
      durationDays = make_shared<long>(boost::any_cast<long>(m["DurationDays"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("MainUserId") != m.end() && !m["MainUserId"].empty()) {
      mainUserId = make_shared<long>(boost::any_cast<long>(m["MainUserId"]));
    }
    if (m.find("MainUserName") != m.end() && !m["MainUserName"].empty()) {
      mainUserName = make_shared<string>(boost::any_cast<string>(m["MainUserName"]));
    }
    if (m.find("MasterUserId") != m.end() && !m["MasterUserId"].empty()) {
      masterUserId = make_shared<long>(boost::any_cast<long>(m["MasterUserId"]));
    }
    if (m.find("MasterUserName") != m.end() && !m["MasterUserName"].empty()) {
      masterUserName = make_shared<string>(boost::any_cast<string>(m["MasterUserName"]));
    }
    if (m.find("RdOrder") != m.end() && !m["RdOrder"].empty()) {
      rdOrder = make_shared<long>(boost::any_cast<long>(m["RdOrder"]));
    }
    if (m.find("SasInstanceId") != m.end() && !m["SasInstanceId"].empty()) {
      sasInstanceId = make_shared<string>(boost::any_cast<string>(m["SasInstanceId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
    if (m.find("SubUserName") != m.end() && !m["SubUserName"].empty()) {
      subUserName = make_shared<string>(boost::any_cast<string>(m["SubUserName"]));
    }
  }


  virtual ~DescribeUserBuyStatusResponseBodyData() = default;
};
class DescribeUserBuyStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeUserBuyStatusResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeUserBuyStatusResponseBody() {}

  explicit DescribeUserBuyStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeUserBuyStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeUserBuyStatusResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeUserBuyStatusResponseBody() = default;
};
class DescribeUserBuyStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserBuyStatusResponseBody> body{};

  DescribeUserBuyStatusResponse() {}

  explicit DescribeUserBuyStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserBuyStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserBuyStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserBuyStatusResponse() = default;
};
class DescribeWafScopeRequest : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
        DescribeWafScopeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWafScopeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWafScopeResponse() = default;
};
class DescribeWhiteRuleListRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertName{};
  shared_ptr<string> alertType{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

  DescribeWhiteRuleListRequest() {}

  explicit DescribeWhiteRuleListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertName) {
      res["AlertName"] = boost::any(*alertName);
    }
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertName") != m.end() && !m["AlertName"].empty()) {
      alertName = make_shared<string>(boost::any_cast<string>(m["AlertName"]));
    }
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<string>(boost::any_cast<string>(m["AlertType"]));
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~DescribeWhiteRuleListRequest() = default;
};
class DescribeWhiteRuleListResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeWhiteRuleListResponseBodyDataPageInfo() {}

  explicit DescribeWhiteRuleListResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeWhiteRuleListResponseBodyDataPageInfo() = default;
};
class DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft : public Darabonba::Model {
public:
  shared_ptr<bool> isVar{};
  shared_ptr<string> modifier{};
  shared_ptr<map<string, boost::any>> modifierParam{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft() {}

  explicit DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isVar) {
      res["IsVar"] = boost::any(*isVar);
    }
    if (modifier) {
      res["Modifier"] = boost::any(*modifier);
    }
    if (modifierParam) {
      res["ModifierParam"] = boost::any(*modifierParam);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsVar") != m.end() && !m["IsVar"].empty()) {
      isVar = make_shared<bool>(boost::any_cast<bool>(m["IsVar"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["Modifier"]));
    }
    if (m.find("ModifierParam") != m.end() && !m["ModifierParam"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ModifierParam"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      modifierParam = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft() = default;
};
class DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsRight : public Darabonba::Model {
public:
  shared_ptr<bool> isVar{};
  shared_ptr<string> modifier{};
  shared_ptr<map<string, boost::any>> modifierParam{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsRight() {}

  explicit DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsRight(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isVar) {
      res["IsVar"] = boost::any(*isVar);
    }
    if (modifier) {
      res["Modifier"] = boost::any(*modifier);
    }
    if (modifierParam) {
      res["ModifierParam"] = boost::any(*modifierParam);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsVar") != m.end() && !m["IsVar"].empty()) {
      isVar = make_shared<bool>(boost::any_cast<bool>(m["IsVar"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["Modifier"]));
    }
    if (m.find("ModifierParam") != m.end() && !m["ModifierParam"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ModifierParam"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      modifierParam = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsRight() = default;
};
class DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions : public Darabonba::Model {
public:
  shared_ptr<bool> isNot{};
  shared_ptr<long> itemId{};
  shared_ptr<DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft> left{};
  shared_ptr<string> operator_{};
  shared_ptr<DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsRight> right{};

  DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions() {}

  explicit DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isNot) {
      res["IsNot"] = boost::any(*isNot);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (left) {
      res["Left"] = left ? boost::any(left->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (right) {
      res["Right"] = right ? boost::any(right->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsNot") != m.end() && !m["IsNot"].empty()) {
      isNot = make_shared<bool>(boost::any_cast<bool>(m["IsNot"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      if (typeid(map<string, boost::any>) == m["Left"].type()) {
        DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Left"]));
        left = make_shared<DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft>(model1);
      }
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Right") != m.end() && !m["Right"].empty()) {
      if (typeid(map<string, boost::any>) == m["Right"].type()) {
        DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsRight model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Right"]));
        right = make_shared<DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsRight>(model1);
      }
    }
  }


  virtual ~DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions() = default;
};
class DescribeWhiteRuleListResponseBodyDataResponseDataExpression : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions>> conditions{};
  shared_ptr<string> logic{};

  DescribeWhiteRuleListResponseBodyDataResponseDataExpression() {}

  explicit DescribeWhiteRuleListResponseBodyDataResponseDataExpression(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditions) {
      vector<boost::any> temp1;
      for(auto item1:*conditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Conditions"] = boost::any(temp1);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Conditions") != m.end() && !m["Conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["Conditions"].type()) {
        vector<DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions>>(expect1);
      }
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<string>(boost::any_cast<string>(m["Logic"]));
    }
  }


  virtual ~DescribeWhiteRuleListResponseBodyDataResponseDataExpression() = default;
};
class DescribeWhiteRuleListResponseBodyDataResponseData : public Darabonba::Model {
public:
  shared_ptr<string> alertName{};
  shared_ptr<string> alertNameId{};
  shared_ptr<string> alertType{};
  shared_ptr<string> alertTypeId{};
  shared_ptr<string> alertUuid{};
  shared_ptr<long> aliuid{};
  shared_ptr<DescribeWhiteRuleListResponseBodyDataResponseDataExpression> expression{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<long> status{};
  shared_ptr<long> subAliuid{};

  DescribeWhiteRuleListResponseBodyDataResponseData() {}

  explicit DescribeWhiteRuleListResponseBodyDataResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (alertTypeId) {
      res["AlertTypeId"] = boost::any(*alertTypeId);
    }
    if (alertUuid) {
      res["AlertUuid"] = boost::any(*alertUuid);
    }
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (expression) {
      res["Expression"] = expression ? boost::any(expression->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subAliuid) {
      res["SubAliuid"] = boost::any(*subAliuid);
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
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<string>(boost::any_cast<string>(m["AlertType"]));
    }
    if (m.find("AlertTypeId") != m.end() && !m["AlertTypeId"].empty()) {
      alertTypeId = make_shared<string>(boost::any_cast<string>(m["AlertTypeId"]));
    }
    if (m.find("AlertUuid") != m.end() && !m["AlertUuid"].empty()) {
      alertUuid = make_shared<string>(boost::any_cast<string>(m["AlertUuid"]));
    }
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<long>(boost::any_cast<long>(m["Aliuid"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      if (typeid(map<string, boost::any>) == m["Expression"].type()) {
        DescribeWhiteRuleListResponseBodyDataResponseDataExpression model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Expression"]));
        expression = make_shared<DescribeWhiteRuleListResponseBodyDataResponseDataExpression>(model1);
      }
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SubAliuid") != m.end() && !m["SubAliuid"].empty()) {
      subAliuid = make_shared<long>(boost::any_cast<long>(m["SubAliuid"]));
    }
  }


  virtual ~DescribeWhiteRuleListResponseBodyDataResponseData() = default;
};
class DescribeWhiteRuleListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribeWhiteRuleListResponseBodyDataPageInfo> pageInfo{};
  shared_ptr<vector<DescribeWhiteRuleListResponseBodyDataResponseData>> responseData{};

  DescribeWhiteRuleListResponseBodyData() {}

  explicit DescribeWhiteRuleListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWhiteRuleListResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<DescribeWhiteRuleListResponseBodyDataPageInfo>(model1);
      }
    }
    if (m.find("ResponseData") != m.end() && !m["ResponseData"].empty()) {
      if (typeid(vector<boost::any>) == m["ResponseData"].type()) {
        vector<DescribeWhiteRuleListResponseBodyDataResponseData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResponseData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWhiteRuleListResponseBodyDataResponseData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responseData = make_shared<vector<DescribeWhiteRuleListResponseBodyDataResponseData>>(expect1);
      }
    }
  }


  virtual ~DescribeWhiteRuleListResponseBodyData() = default;
};
class DescribeWhiteRuleListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeWhiteRuleListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeWhiteRuleListResponseBody() {}

  explicit DescribeWhiteRuleListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWhiteRuleListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeWhiteRuleListResponseBodyData>(model1);
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


  virtual ~DescribeWhiteRuleListResponseBody() = default;
};
class DescribeWhiteRuleListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWhiteRuleListResponseBody> body{};

  DescribeWhiteRuleListResponse() {}

  explicit DescribeWhiteRuleListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWhiteRuleListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWhiteRuleListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWhiteRuleListResponse() = default;
};
class EnableAccessForCloudSiemRequest : public Darabonba::Model {
public:
  shared_ptr<long> autoSubmit{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

  EnableAccessForCloudSiemRequest() {}

  explicit EnableAccessForCloudSiemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSubmit) {
      res["AutoSubmit"] = boost::any(*autoSubmit);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoSubmit") != m.end() && !m["AutoSubmit"].empty()) {
      autoSubmit = make_shared<long>(boost::any_cast<long>(m["AutoSubmit"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~EnableAccessForCloudSiemRequest() = default;
};
class EnableAccessForCloudSiemResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  EnableAccessForCloudSiemResponseBody() {}

  explicit EnableAccessForCloudSiemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnableAccessForCloudSiemResponseBody() = default;
};
class EnableAccessForCloudSiemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableAccessForCloudSiemResponseBody> body{};

  EnableAccessForCloudSiemResponse() {}

  explicit EnableAccessForCloudSiemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableAccessForCloudSiemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableAccessForCloudSiemResponseBody>(model1);
      }
    }
  }


  virtual ~EnableAccessForCloudSiemResponse() = default;
};
class EnableServiceForCloudSiemRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  EnableServiceForCloudSiemRequest() {}

  explicit EnableServiceForCloudSiemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableServiceForCloudSiemRequest() = default;
};
class EnableServiceForCloudSiemResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  EnableServiceForCloudSiemResponseBody() {}

  explicit EnableServiceForCloudSiemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnableServiceForCloudSiemResponseBody() = default;
};
class EnableServiceForCloudSiemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableServiceForCloudSiemResponseBody> body{};

  EnableServiceForCloudSiemResponse() {}

  explicit EnableServiceForCloudSiemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableServiceForCloudSiemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableServiceForCloudSiemResponseBody>(model1);
      }
    }
  }


  virtual ~EnableServiceForCloudSiemResponse() = default;
};
class GetCapacityRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<GetCapacityResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetCapacityResponseBody() {}

  explicit GetCapacityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCapacityResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCapacityResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
        GetCapacityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCapacityResponseBody>(model1);
      }
    }
  }


  virtual ~GetCapacityResponse() = default;
};
class GetStorageRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<GetStorageResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetStorageResponseBody() {}

  explicit GetStorageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetStorageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetStorageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
        GetStorageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStorageResponseBody>(model1);
      }
    }
  }


  virtual ~GetStorageResponse() = default;
};
class ListAccountAccessIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> cloudCode{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

  ListAccountAccessIdRequest() {}

  explicit ListAccountAccessIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~ListAccountAccessIdRequest() = default;
};
class ListAccountAccessIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> accessIdMd5{};
  shared_ptr<string> accountId{};
  shared_ptr<string> accountStr{};
  shared_ptr<long> bound{};
  shared_ptr<string> cloudCode{};
  shared_ptr<long> subUserId{};

  ListAccountAccessIdResponseBodyData() {}

  explicit ListAccountAccessIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (accessIdMd5) {
      res["AccessIdMd5"] = boost::any(*accessIdMd5);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountStr) {
      res["AccountStr"] = boost::any(*accountStr);
    }
    if (bound) {
      res["Bound"] = boost::any(*bound);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("AccessIdMd5") != m.end() && !m["AccessIdMd5"].empty()) {
      accessIdMd5 = make_shared<string>(boost::any_cast<string>(m["AccessIdMd5"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountStr") != m.end() && !m["AccountStr"].empty()) {
      accountStr = make_shared<string>(boost::any_cast<string>(m["AccountStr"]));
    }
    if (m.find("Bound") != m.end() && !m["Bound"].empty()) {
      bound = make_shared<long>(boost::any_cast<long>(m["Bound"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
  }


  virtual ~ListAccountAccessIdResponseBodyData() = default;
};
class ListAccountAccessIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<ListAccountAccessIdResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAccountAccessIdResponseBody() {}

  explicit ListAccountAccessIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListAccountAccessIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccountAccessIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAccountAccessIdResponseBodyData>>(expect1);
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


  virtual ~ListAccountAccessIdResponseBody() = default;
};
class ListAccountAccessIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccountAccessIdResponseBody> body{};

  ListAccountAccessIdResponse() {}

  explicit ListAccountAccessIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccountAccessIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccountAccessIdResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccountAccessIdResponse() = default;
};
class ListAccountsByLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> cloudCode{};
  shared_ptr<vector<string>> logCodes{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

  ListAccountsByLogRequest() {}

  explicit ListAccountsByLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (logCodes) {
      res["LogCodes"] = boost::any(*logCodes);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("LogCodes") != m.end() && !m["LogCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LogCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LogCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~ListAccountsByLogRequest() = default;
};
class ListAccountsByLogResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<long> imported{};
  shared_ptr<string> logCode{};
  shared_ptr<long> mainUserId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> subUserId{};

  ListAccountsByLogResponseBodyData() {}

  explicit ListAccountsByLogResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (imported) {
      res["Imported"] = boost::any(*imported);
    }
    if (logCode) {
      res["LogCode"] = boost::any(*logCode);
    }
    if (mainUserId) {
      res["MainUserId"] = boost::any(*mainUserId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Imported") != m.end() && !m["Imported"].empty()) {
      imported = make_shared<long>(boost::any_cast<long>(m["Imported"]));
    }
    if (m.find("LogCode") != m.end() && !m["LogCode"].empty()) {
      logCode = make_shared<string>(boost::any_cast<string>(m["LogCode"]));
    }
    if (m.find("MainUserId") != m.end() && !m["MainUserId"].empty()) {
      mainUserId = make_shared<long>(boost::any_cast<long>(m["MainUserId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
  }


  virtual ~ListAccountsByLogResponseBodyData() = default;
};
class ListAccountsByLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccountsByLogResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListAccountsByLogResponseBody() {}

  explicit ListAccountsByLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAccountsByLogResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccountsByLogResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAccountsByLogResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAccountsByLogResponseBody() = default;
};
class ListAccountsByLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccountsByLogResponseBody> body{};

  ListAccountsByLogResponse() {}

  explicit ListAccountsByLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccountsByLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccountsByLogResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccountsByLogResponse() = default;
};
class ListAllProdsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

  ListAllProdsRequest() {}

  explicit ListAllProdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~ListAllProdsRequest() = default;
};
class ListAllProdsResponseBodyDataProdList : public Darabonba::Model {
public:
  shared_ptr<string> cloudCode{};
  shared_ptr<long> importedLogCount{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> totalLogCount{};

  ListAllProdsResponseBodyDataProdList() {}

  explicit ListAllProdsResponseBodyDataProdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (importedLogCount) {
      res["ImportedLogCount"] = boost::any(*importedLogCount);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (totalLogCount) {
      res["TotalLogCount"] = boost::any(*totalLogCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("ImportedLogCount") != m.end() && !m["ImportedLogCount"].empty()) {
      importedLogCount = make_shared<long>(boost::any_cast<long>(m["ImportedLogCount"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("TotalLogCount") != m.end() && !m["TotalLogCount"].empty()) {
      totalLogCount = make_shared<long>(boost::any_cast<long>(m["TotalLogCount"]));
    }
  }


  virtual ~ListAllProdsResponseBodyDataProdList() = default;
};
class ListAllProdsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListAllProdsResponseBodyDataProdList>> prodList{};
  shared_ptr<long> totalCount{};

  ListAllProdsResponseBodyData() {}

  explicit ListAllProdsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (prodList) {
      vector<boost::any> temp1;
      for(auto item1:*prodList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProdList"] = boost::any(temp1);
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
    if (m.find("ProdList") != m.end() && !m["ProdList"].empty()) {
      if (typeid(vector<boost::any>) == m["ProdList"].type()) {
        vector<ListAllProdsResponseBodyDataProdList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProdList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAllProdsResponseBodyDataProdList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        prodList = make_shared<vector<ListAllProdsResponseBodyDataProdList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAllProdsResponseBodyData() = default;
};
class ListAllProdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAllProdsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListAllProdsResponseBody() {}

  explicit ListAllProdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListAllProdsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAllProdsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAllProdsResponseBody() = default;
};
class ListAllProdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAllProdsResponseBody> body{};

  ListAllProdsResponse() {}

  explicit ListAllProdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAllProdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAllProdsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAllProdsResponse() = default;
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
  shared_ptr<string> responseRuleType{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (responseRuleType) {
      res["ResponseRuleType"] = boost::any(*responseRuleType);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("ResponseRuleType") != m.end() && !m["ResponseRuleType"].empty()) {
      responseRuleType = make_shared<string>(boost::any_cast<string>(m["ResponseRuleType"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> dataType{};
  shared_ptr<string> executionCondition{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> responseRuleType{};
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
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
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
    if (responseRuleType) {
      res["ResponseRuleType"] = boost::any(*responseRuleType);
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
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<long>(boost::any_cast<long>(m["DataType"]));
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
    if (m.find("ResponseRuleType") != m.end() && !m["ResponseRuleType"].empty()) {
      responseRuleType = make_shared<string>(boost::any_cast<string>(m["ResponseRuleType"]));
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
        ListAutomateResponseConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAutomateResponseConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAutomateResponseConfigsResponse() = default;
};
class ListBindAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> cloudCode{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

  ListBindAccountRequest() {}

  explicit ListBindAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~ListBindAccountRequest() = default;
};
class ListBindAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<long> bindId{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> createUser{};
  shared_ptr<long> dataSourceCount{};
  shared_ptr<string> modifyTime{};

  ListBindAccountResponseBodyData() {}

  explicit ListBindAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (bindId) {
      res["BindId"] = boost::any(*bindId);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (dataSourceCount) {
      res["DataSourceCount"] = boost::any(*dataSourceCount);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("BindId") != m.end() && !m["BindId"].empty()) {
      bindId = make_shared<long>(boost::any_cast<long>(m["BindId"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("DataSourceCount") != m.end() && !m["DataSourceCount"].empty()) {
      dataSourceCount = make_shared<long>(boost::any_cast<long>(m["DataSourceCount"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
  }


  virtual ~ListBindAccountResponseBodyData() = default;
};
class ListBindAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListBindAccountResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListBindAccountResponseBody() {}

  explicit ListBindAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListBindAccountResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBindAccountResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListBindAccountResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListBindAccountResponseBody() = default;
};
class ListBindAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBindAccountResponseBody> body{};

  ListBindAccountResponse() {}

  explicit ListBindAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBindAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBindAccountResponseBody>(model1);
      }
    }
  }


  virtual ~ListBindAccountResponse() = default;
};
class ListBindDataSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> regionId{};

  ListBindDataSourcesRequest() {}

  explicit ListBindDataSourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListBindDataSourcesRequest() = default;
};
class ListBindDataSourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> dataSourceInstanceId{};
  shared_ptr<string> dataSourceName{};
  shared_ptr<string> dataSourceRemark{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<long> logCount{};
  shared_ptr<long> taskCount{};

  ListBindDataSourcesResponseBodyData() {}

  explicit ListBindDataSourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (dataSourceInstanceId) {
      res["DataSourceInstanceId"] = boost::any(*dataSourceInstanceId);
    }
    if (dataSourceName) {
      res["DataSourceName"] = boost::any(*dataSourceName);
    }
    if (dataSourceRemark) {
      res["DataSourceRemark"] = boost::any(*dataSourceRemark);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (logCount) {
      res["LogCount"] = boost::any(*logCount);
    }
    if (taskCount) {
      res["TaskCount"] = boost::any(*taskCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("DataSourceInstanceId") != m.end() && !m["DataSourceInstanceId"].empty()) {
      dataSourceInstanceId = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceId"]));
    }
    if (m.find("DataSourceName") != m.end() && !m["DataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["DataSourceName"]));
    }
    if (m.find("DataSourceRemark") != m.end() && !m["DataSourceRemark"].empty()) {
      dataSourceRemark = make_shared<string>(boost::any_cast<string>(m["DataSourceRemark"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("LogCount") != m.end() && !m["LogCount"].empty()) {
      logCount = make_shared<long>(boost::any_cast<long>(m["LogCount"]));
    }
    if (m.find("TaskCount") != m.end() && !m["TaskCount"].empty()) {
      taskCount = make_shared<long>(boost::any_cast<long>(m["TaskCount"]));
    }
  }


  virtual ~ListBindDataSourcesResponseBodyData() = default;
};
class ListBindDataSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListBindDataSourcesResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListBindDataSourcesResponseBody() {}

  explicit ListBindDataSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListBindDataSourcesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBindDataSourcesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListBindDataSourcesResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListBindDataSourcesResponseBody() = default;
};
class ListBindDataSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBindDataSourcesResponseBody> body{};

  ListBindDataSourcesResponse() {}

  explicit ListBindDataSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBindDataSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBindDataSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListBindDataSourcesResponse() = default;
};
class ListCloudSiemCustomizeRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertType{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> id{};
  shared_ptr<string> order{};
  shared_ptr<string> orderField{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<string> attCk{};
  shared_ptr<long> dataType{};
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
    if (attCk) {
      res["AttCk"] = boost::any(*attCk);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
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
    if (m.find("AttCk") != m.end() && !m["AttCk"].empty()) {
      attCk = make_shared<string>(boost::any_cast<string>(m["AttCk"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<long>(boost::any_cast<long>(m["DataType"]));
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
  shared_ptr<string> attCk{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> eventTransferType{};
  shared_ptr<string> id{};
  shared_ptr<string> logSource{};
  shared_ptr<string> order{};
  shared_ptr<string> orderField{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (attCk) {
      res["AttCk"] = boost::any(*attCk);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("AttCk") != m.end() && !m["AttCk"].empty()) {
      attCk = make_shared<string>(boost::any_cast<string>(m["AttCk"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EventTransferType") != m.end() && !m["EventTransferType"].empty()) {
      eventTransferType = make_shared<string>(boost::any_cast<string>(m["EventTransferType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LogSource") != m.end() && !m["LogSource"].empty()) {
      logSource = make_shared<string>(boost::any_cast<string>(m["LogSource"]));
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<string> attCk{};
  shared_ptr<string> eventTransferType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> ruleDescMds{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleNameCn{};
  shared_ptr<string> ruleNameEn{};
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
    if (attCk) {
      res["AttCk"] = boost::any(*attCk);
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
    if (ruleDescMds) {
      res["RuleDescMds"] = boost::any(*ruleDescMds);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleNameCn) {
      res["RuleNameCn"] = boost::any(*ruleNameCn);
    }
    if (ruleNameEn) {
      res["RuleNameEn"] = boost::any(*ruleNameEn);
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
    if (m.find("AttCk") != m.end() && !m["AttCk"].empty()) {
      attCk = make_shared<string>(boost::any_cast<string>(m["AttCk"]));
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
    if (m.find("RuleDescMds") != m.end() && !m["RuleDescMds"].empty()) {
      ruleDescMds = make_shared<string>(boost::any_cast<string>(m["RuleDescMds"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleNameCn") != m.end() && !m["RuleNameCn"].empty()) {
      ruleNameCn = make_shared<string>(boost::any_cast<string>(m["RuleNameCn"]));
    }
    if (m.find("RuleNameEn") != m.end() && !m["RuleNameEn"].empty()) {
      ruleNameEn = make_shared<string>(boost::any_cast<string>(m["RuleNameEn"]));
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
  shared_ptr<string> detectionRuleId{};
  shared_ptr<long> endTime{};
  shared_ptr<long> id{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
  shared_ptr<long> startTime{};
  shared_ptr<string> verifyType{};

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
    if (detectionRuleId) {
      res["DetectionRuleId"] = boost::any(*detectionRuleId);
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (verifyType) {
      res["VerifyType"] = boost::any(*verifyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DetectionRuleId") != m.end() && !m["DetectionRuleId"].empty()) {
      detectionRuleId = make_shared<string>(boost::any_cast<string>(m["DetectionRuleId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("VerifyType") != m.end() && !m["VerifyType"].empty()) {
      verifyType = make_shared<string>(boost::any_cast<string>(m["VerifyType"]));
    }
  }


  virtual ~ListCustomizeRuleTestResultRequest() = default;
};
class ListCustomizeRuleTestResultResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> verifiedCount{};

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
    if (verifiedCount) {
      res["VerifiedCount"] = boost::any(*verifiedCount);
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
    if (m.find("VerifiedCount") != m.end() && !m["VerifiedCount"].empty()) {
      verifiedCount = make_shared<long>(boost::any_cast<long>(m["VerifiedCount"]));
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
  shared_ptr<string> verifyType{};

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
    if (verifyType) {
      res["VerifyType"] = boost::any(*verifyType);
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
    if (m.find("VerifyType") != m.end() && !m["VerifyType"].empty()) {
      verifyType = make_shared<string>(boost::any_cast<string>(m["VerifyType"]));
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
        ListCustomizeRuleTestResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCustomizeRuleTestResultResponseBody>(model1);
      }
    }
  }


  virtual ~ListCustomizeRuleTestResultResponse() = default;
};
class ListDataSourceLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> dataSourceInstanceId{};
  shared_ptr<string> regionId{};

  ListDataSourceLogsRequest() {}

  explicit ListDataSourceLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (dataSourceInstanceId) {
      res["DataSourceInstanceId"] = boost::any(*dataSourceInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("DataSourceInstanceId") != m.end() && !m["DataSourceInstanceId"].empty()) {
      dataSourceInstanceId = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListDataSourceLogsRequest() = default;
};
class ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams : public Darabonba::Model {
public:
  shared_ptr<string> paraCode{};
  shared_ptr<string> paraValue{};

  ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams() {}

  explicit ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paraCode) {
      res["ParaCode"] = boost::any(*paraCode);
    }
    if (paraValue) {
      res["ParaValue"] = boost::any(*paraValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParaCode") != m.end() && !m["ParaCode"].empty()) {
      paraCode = make_shared<string>(boost::any_cast<string>(m["ParaCode"]));
    }
    if (m.find("ParaValue") != m.end() && !m["ParaValue"].empty()) {
      paraValue = make_shared<string>(boost::any_cast<string>(m["ParaValue"]));
    }
  }


  virtual ~ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams() = default;
};
class ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs : public Darabonba::Model {
public:
  shared_ptr<string> logCode{};
  shared_ptr<string> logInstanceId{};
  shared_ptr<string> logMdsCode{};
  shared_ptr<vector<ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams>> logParams{};
  shared_ptr<long> taskStatus{};

  ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs() {}

  explicit ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logCode) {
      res["LogCode"] = boost::any(*logCode);
    }
    if (logInstanceId) {
      res["LogInstanceId"] = boost::any(*logInstanceId);
    }
    if (logMdsCode) {
      res["LogMdsCode"] = boost::any(*logMdsCode);
    }
    if (logParams) {
      vector<boost::any> temp1;
      for(auto item1:*logParams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogParams"] = boost::any(temp1);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogCode") != m.end() && !m["LogCode"].empty()) {
      logCode = make_shared<string>(boost::any_cast<string>(m["LogCode"]));
    }
    if (m.find("LogInstanceId") != m.end() && !m["LogInstanceId"].empty()) {
      logInstanceId = make_shared<string>(boost::any_cast<string>(m["LogInstanceId"]));
    }
    if (m.find("LogMdsCode") != m.end() && !m["LogMdsCode"].empty()) {
      logMdsCode = make_shared<string>(boost::any_cast<string>(m["LogMdsCode"]));
    }
    if (m.find("LogParams") != m.end() && !m["LogParams"].empty()) {
      if (typeid(vector<boost::any>) == m["LogParams"].type()) {
        vector<ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogParams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logParams = make_shared<vector<ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams>>(expect1);
      }
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
  }


  virtual ~ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs() = default;
};
class ListDataSourceLogsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> dataSourceInstanceId{};
  shared_ptr<vector<ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs>> dataSourceInstanceLogs{};
  shared_ptr<string> dataSourceInstanceName{};
  shared_ptr<string> dataSourceInstanceRemark{};
  shared_ptr<long> subUserId{};

  ListDataSourceLogsResponseBodyData() {}

  explicit ListDataSourceLogsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (dataSourceInstanceId) {
      res["DataSourceInstanceId"] = boost::any(*dataSourceInstanceId);
    }
    if (dataSourceInstanceLogs) {
      vector<boost::any> temp1;
      for(auto item1:*dataSourceInstanceLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSourceInstanceLogs"] = boost::any(temp1);
    }
    if (dataSourceInstanceName) {
      res["DataSourceInstanceName"] = boost::any(*dataSourceInstanceName);
    }
    if (dataSourceInstanceRemark) {
      res["DataSourceInstanceRemark"] = boost::any(*dataSourceInstanceRemark);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("DataSourceInstanceId") != m.end() && !m["DataSourceInstanceId"].empty()) {
      dataSourceInstanceId = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceId"]));
    }
    if (m.find("DataSourceInstanceLogs") != m.end() && !m["DataSourceInstanceLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSourceInstanceLogs"].type()) {
        vector<ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSourceInstanceLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSourceInstanceLogs = make_shared<vector<ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs>>(expect1);
      }
    }
    if (m.find("DataSourceInstanceName") != m.end() && !m["DataSourceInstanceName"].empty()) {
      dataSourceInstanceName = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceName"]));
    }
    if (m.find("DataSourceInstanceRemark") != m.end() && !m["DataSourceInstanceRemark"].empty()) {
      dataSourceInstanceRemark = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceRemark"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
  }


  virtual ~ListDataSourceLogsResponseBodyData() = default;
};
class ListDataSourceLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDataSourceLogsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListDataSourceLogsResponseBody() {}

  explicit ListDataSourceLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListDataSourceLogsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDataSourceLogsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDataSourceLogsResponseBody() = default;
};
class ListDataSourceLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataSourceLogsResponseBody> body{};

  ListDataSourceLogsResponse() {}

  explicit ListDataSourceLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDataSourceLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourceLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourceLogsResponse() = default;
};
class ListDataSourceTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> cloudCode{};
  shared_ptr<string> regionId{};

  ListDataSourceTypesRequest() {}

  explicit ListDataSourceTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListDataSourceTypesRequest() = default;
};
class ListDataSourceTypesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cloudCode{};
  shared_ptr<string> dataSourceType{};

  ListDataSourceTypesResponseBodyData() {}

  explicit ListDataSourceTypesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
  }


  virtual ~ListDataSourceTypesResponseBodyData() = default;
};
class ListDataSourceTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDataSourceTypesResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListDataSourceTypesResponseBody() {}

  explicit ListDataSourceTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListDataSourceTypesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourceTypesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDataSourceTypesResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDataSourceTypesResponseBody() = default;
};
class ListDataSourceTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataSourceTypesResponseBody> body{};

  ListDataSourceTypesResponse() {}

  explicit ListDataSourceTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDataSourceTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourceTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourceTypesResponse() = default;
};
class ListDeliveryRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<ListDeliveryResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListDeliveryResponseBody() {}

  explicit ListDeliveryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListDeliveryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDeliveryResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> order{};
  shared_ptr<string> orderField{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> playbookName{};
  shared_ptr<string> playbookTypes{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<string> taskUrl{};

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
    if (taskUrl) {
      res["TaskUrl"] = boost::any(*taskUrl);
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
    if (m.find("TaskUrl") != m.end() && !m["TaskUrl"].empty()) {
      taskUrl = make_shared<string>(boost::any_cast<string>(m["TaskUrl"]));
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
        ListDisposeStrategyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDisposeStrategyResponseBody>(model1);
      }
    }
  }


  virtual ~ListDisposeStrategyResponse() = default;
};
class ListEntitiesRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> entityUuid{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> isMalwareEntity{};
  shared_ptr<string> malwareType{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

  ListEntitiesRequest() {}

  explicit ListEntitiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (entityUuid) {
      res["EntityUuid"] = boost::any(*entityUuid);
    }
    if (incidentUuid) {
      res["IncidentUuid"] = boost::any(*incidentUuid);
    }
    if (isMalwareEntity) {
      res["IsMalwareEntity"] = boost::any(*isMalwareEntity);
    }
    if (malwareType) {
      res["MalwareType"] = boost::any(*malwareType);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("EntityUuid") != m.end() && !m["EntityUuid"].empty()) {
      entityUuid = make_shared<string>(boost::any_cast<string>(m["EntityUuid"]));
    }
    if (m.find("IncidentUuid") != m.end() && !m["IncidentUuid"].empty()) {
      incidentUuid = make_shared<string>(boost::any_cast<string>(m["IncidentUuid"]));
    }
    if (m.find("IsMalwareEntity") != m.end() && !m["IsMalwareEntity"].empty()) {
      isMalwareEntity = make_shared<string>(boost::any_cast<string>(m["IsMalwareEntity"]));
    }
    if (m.find("MalwareType") != m.end() && !m["MalwareType"].empty()) {
      malwareType = make_shared<string>(boost::any_cast<string>(m["MalwareType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~ListEntitiesRequest() = default;
};
class ListEntitiesResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListEntitiesResponseBodyDataPageInfo() {}

  explicit ListEntitiesResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListEntitiesResponseBodyDataPageInfo() = default;
};
class ListEntitiesResponseBodyDataResponseData : public Darabonba::Model {
public:
  shared_ptr<long> alertNum{};
  shared_ptr<string> alertUuid{};
  shared_ptr<long> aliuid{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> entityId{};
  shared_ptr<string> entityInfo{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> entityUuid{};
  shared_ptr<long> eventNum{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> incidentUuid{};
  shared_ptr<string> malwareType{};
  shared_ptr<long> subUserId{};

  ListEntitiesResponseBodyDataResponseData() {}

  explicit ListEntitiesResponseBodyDataResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertNum) {
      res["AlertNum"] = boost::any(*alertNum);
    }
    if (alertUuid) {
      res["AlertUuid"] = boost::any(*alertUuid);
    }
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityInfo) {
      res["EntityInfo"] = boost::any(*entityInfo);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (entityUuid) {
      res["EntityUuid"] = boost::any(*entityUuid);
    }
    if (eventNum) {
      res["EventNum"] = boost::any(*eventNum);
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
    if (malwareType) {
      res["MalwareType"] = boost::any(*malwareType);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertNum") != m.end() && !m["AlertNum"].empty()) {
      alertNum = make_shared<long>(boost::any_cast<long>(m["AlertNum"]));
    }
    if (m.find("AlertUuid") != m.end() && !m["AlertUuid"].empty()) {
      alertUuid = make_shared<string>(boost::any_cast<string>(m["AlertUuid"]));
    }
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<long>(boost::any_cast<long>(m["Aliuid"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("EntityInfo") != m.end() && !m["EntityInfo"].empty()) {
      entityInfo = make_shared<string>(boost::any_cast<string>(m["EntityInfo"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("EntityUuid") != m.end() && !m["EntityUuid"].empty()) {
      entityUuid = make_shared<string>(boost::any_cast<string>(m["EntityUuid"]));
    }
    if (m.find("EventNum") != m.end() && !m["EventNum"].empty()) {
      eventNum = make_shared<long>(boost::any_cast<long>(m["EventNum"]));
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
    if (m.find("MalwareType") != m.end() && !m["MalwareType"].empty()) {
      malwareType = make_shared<string>(boost::any_cast<string>(m["MalwareType"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
  }


  virtual ~ListEntitiesResponseBodyDataResponseData() = default;
};
class ListEntitiesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ListEntitiesResponseBodyDataPageInfo> pageInfo{};
  shared_ptr<vector<ListEntitiesResponseBodyDataResponseData>> responseData{};

  ListEntitiesResponseBodyData() {}

  explicit ListEntitiesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEntitiesResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<ListEntitiesResponseBodyDataPageInfo>(model1);
      }
    }
    if (m.find("ResponseData") != m.end() && !m["ResponseData"].empty()) {
      if (typeid(vector<boost::any>) == m["ResponseData"].type()) {
        vector<ListEntitiesResponseBodyDataResponseData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResponseData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEntitiesResponseBodyDataResponseData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responseData = make_shared<vector<ListEntitiesResponseBodyDataResponseData>>(expect1);
      }
    }
  }


  virtual ~ListEntitiesResponseBodyData() = default;
};
class ListEntitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListEntitiesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListEntitiesResponseBody() {}

  explicit ListEntitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEntitiesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListEntitiesResponseBodyData>(model1);
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


  virtual ~ListEntitiesResponseBody() = default;
};
class ListEntitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEntitiesResponseBody> body{};

  ListEntitiesResponse() {}

  explicit ListEntitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEntitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEntitiesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEntitiesResponse() = default;
};
class ListImportedLogsByProdRequest : public Darabonba::Model {
public:
  shared_ptr<string> cloudCode{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

  ListImportedLogsByProdRequest() {}

  explicit ListImportedLogsByProdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~ListImportedLogsByProdRequest() = default;
};
class ListImportedLogsByProdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> autoImported{};
  shared_ptr<string> cloudCode{};
  shared_ptr<long> imported{};
  shared_ptr<long> importedUserCount{};
  shared_ptr<string> logCode{};
  shared_ptr<string> logMdsCode{};
  shared_ptr<long> logType{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> totalUserCount{};
  shared_ptr<long> unImportedUserCount{};

  ListImportedLogsByProdResponseBodyData() {}

  explicit ListImportedLogsByProdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoImported) {
      res["AutoImported"] = boost::any(*autoImported);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (imported) {
      res["Imported"] = boost::any(*imported);
    }
    if (importedUserCount) {
      res["ImportedUserCount"] = boost::any(*importedUserCount);
    }
    if (logCode) {
      res["LogCode"] = boost::any(*logCode);
    }
    if (logMdsCode) {
      res["LogMdsCode"] = boost::any(*logMdsCode);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (totalUserCount) {
      res["TotalUserCount"] = boost::any(*totalUserCount);
    }
    if (unImportedUserCount) {
      res["UnImportedUserCount"] = boost::any(*unImportedUserCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoImported") != m.end() && !m["AutoImported"].empty()) {
      autoImported = make_shared<long>(boost::any_cast<long>(m["AutoImported"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("Imported") != m.end() && !m["Imported"].empty()) {
      imported = make_shared<long>(boost::any_cast<long>(m["Imported"]));
    }
    if (m.find("ImportedUserCount") != m.end() && !m["ImportedUserCount"].empty()) {
      importedUserCount = make_shared<long>(boost::any_cast<long>(m["ImportedUserCount"]));
    }
    if (m.find("LogCode") != m.end() && !m["LogCode"].empty()) {
      logCode = make_shared<string>(boost::any_cast<string>(m["LogCode"]));
    }
    if (m.find("LogMdsCode") != m.end() && !m["LogMdsCode"].empty()) {
      logMdsCode = make_shared<string>(boost::any_cast<string>(m["LogMdsCode"]));
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<long>(boost::any_cast<long>(m["LogType"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("TotalUserCount") != m.end() && !m["TotalUserCount"].empty()) {
      totalUserCount = make_shared<long>(boost::any_cast<long>(m["TotalUserCount"]));
    }
    if (m.find("UnImportedUserCount") != m.end() && !m["UnImportedUserCount"].empty()) {
      unImportedUserCount = make_shared<long>(boost::any_cast<long>(m["UnImportedUserCount"]));
    }
  }


  virtual ~ListImportedLogsByProdResponseBodyData() = default;
};
class ListImportedLogsByProdResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListImportedLogsByProdResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListImportedLogsByProdResponseBody() {}

  explicit ListImportedLogsByProdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListImportedLogsByProdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImportedLogsByProdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListImportedLogsByProdResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListImportedLogsByProdResponseBody() = default;
};
class ListImportedLogsByProdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListImportedLogsByProdResponseBody> body{};

  ListImportedLogsByProdResponse() {}

  explicit ListImportedLogsByProdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListImportedLogsByProdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListImportedLogsByProdResponseBody>(model1);
      }
    }
  }


  virtual ~ListImportedLogsByProdResponse() = default;
};
class ListProjectLogStoresRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> sourceLogCode{};
  shared_ptr<string> sourceProdCode{};
  shared_ptr<long> subUserId{};

  ListProjectLogStoresRequest() {}

  explicit ListProjectLogStoresRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceLogCode) {
      res["SourceLogCode"] = boost::any(*sourceLogCode);
    }
    if (sourceProdCode) {
      res["SourceProdCode"] = boost::any(*sourceProdCode);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceLogCode") != m.end() && !m["SourceLogCode"].empty()) {
      sourceLogCode = make_shared<string>(boost::any_cast<string>(m["SourceLogCode"]));
    }
    if (m.find("SourceProdCode") != m.end() && !m["SourceProdCode"].empty()) {
      sourceProdCode = make_shared<string>(boost::any_cast<string>(m["SourceProdCode"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
  }


  virtual ~ListProjectLogStoresRequest() = default;
};
class ListProjectLogStoresResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> endPoint{};
  shared_ptr<string> localName{};
  shared_ptr<string> logStore{};
  shared_ptr<long> mainUserId{};
  shared_ptr<string> project{};
  shared_ptr<string> regionId{};
  shared_ptr<long> subUserId{};
  shared_ptr<string> subUserName{};

  ListProjectLogStoresResponseBodyData() {}

  explicit ListProjectLogStoresResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (logStore) {
      res["LogStore"] = boost::any(*logStore);
    }
    if (mainUserId) {
      res["MainUserId"] = boost::any(*mainUserId);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    if (subUserName) {
      res["SubUserName"] = boost::any(*subUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      logStore = make_shared<string>(boost::any_cast<string>(m["LogStore"]));
    }
    if (m.find("MainUserId") != m.end() && !m["MainUserId"].empty()) {
      mainUserId = make_shared<long>(boost::any_cast<long>(m["MainUserId"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
    if (m.find("SubUserName") != m.end() && !m["SubUserName"].empty()) {
      subUserName = make_shared<string>(boost::any_cast<string>(m["SubUserName"]));
    }
  }


  virtual ~ListProjectLogStoresResponseBodyData() = default;
};
class ListProjectLogStoresResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListProjectLogStoresResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListProjectLogStoresResponseBody() {}

  explicit ListProjectLogStoresResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListProjectLogStoresResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectLogStoresResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListProjectLogStoresResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListProjectLogStoresResponseBody() = default;
};
class ListProjectLogStoresResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectLogStoresResponseBody> body{};

  ListProjectLogStoresResponse() {}

  explicit ListProjectLogStoresResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectLogStoresResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectLogStoresResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectLogStoresResponse() = default;
};
class ListRdUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListRdUsersRequest() {}

  explicit ListRdUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListRdUsersRequest() = default;
};
class ListRdUsersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> delegatedOrNot{};
  shared_ptr<bool> joined{};
  shared_ptr<string> joinedTime{};
  shared_ptr<long> mainUserId{};
  shared_ptr<long> subUserId{};
  shared_ptr<string> subUserName{};

  ListRdUsersResponseBodyData() {}

  explicit ListRdUsersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delegatedOrNot) {
      res["DelegatedOrNot"] = boost::any(*delegatedOrNot);
    }
    if (joined) {
      res["Joined"] = boost::any(*joined);
    }
    if (joinedTime) {
      res["JoinedTime"] = boost::any(*joinedTime);
    }
    if (mainUserId) {
      res["MainUserId"] = boost::any(*mainUserId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    if (subUserName) {
      res["SubUserName"] = boost::any(*subUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DelegatedOrNot") != m.end() && !m["DelegatedOrNot"].empty()) {
      delegatedOrNot = make_shared<bool>(boost::any_cast<bool>(m["DelegatedOrNot"]));
    }
    if (m.find("Joined") != m.end() && !m["Joined"].empty()) {
      joined = make_shared<bool>(boost::any_cast<bool>(m["Joined"]));
    }
    if (m.find("JoinedTime") != m.end() && !m["JoinedTime"].empty()) {
      joinedTime = make_shared<string>(boost::any_cast<string>(m["JoinedTime"]));
    }
    if (m.find("MainUserId") != m.end() && !m["MainUserId"].empty()) {
      mainUserId = make_shared<long>(boost::any_cast<long>(m["MainUserId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<long>(boost::any_cast<long>(m["SubUserId"]));
    }
    if (m.find("SubUserName") != m.end() && !m["SubUserName"].empty()) {
      subUserName = make_shared<string>(boost::any_cast<string>(m["SubUserName"]));
    }
  }


  virtual ~ListRdUsersResponseBodyData() = default;
};
class ListRdUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRdUsersResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListRdUsersResponseBody() {}

  explicit ListRdUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListRdUsersResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRdUsersResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListRdUsersResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRdUsersResponseBody() = default;
};
class ListRdUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRdUsersResponseBody> body{};

  ListRdUsersResponse() {}

  explicit ListRdUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRdUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRdUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListRdUsersResponse() = default;
};
class ModifyBindAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<long> bindId{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

  ModifyBindAccountRequest() {}

  explicit ModifyBindAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (bindId) {
      res["BindId"] = boost::any(*bindId);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("BindId") != m.end() && !m["BindId"].empty()) {
      bindId = make_shared<long>(boost::any_cast<long>(m["BindId"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~ModifyBindAccountRequest() = default;
};
class ModifyBindAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};

  ModifyBindAccountResponseBodyData() {}

  explicit ModifyBindAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~ModifyBindAccountResponseBodyData() = default;
};
class ModifyBindAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<ModifyBindAccountResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ModifyBindAccountResponseBody() {}

  explicit ModifyBindAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ModifyBindAccountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyBindAccountResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyBindAccountResponseBody() = default;
};
class ModifyBindAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyBindAccountResponseBody> body{};

  ModifyBindAccountResponse() {}

  explicit ModifyBindAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyBindAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBindAccountResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBindAccountResponse() = default;
};
class ModifyDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> dataSourceInstanceId{};
  shared_ptr<string> dataSourceInstanceName{};
  shared_ptr<string> dataSourceInstanceParams{};
  shared_ptr<string> dataSourceInstanceRemark{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> regionId{};

  ModifyDataSourceRequest() {}

  explicit ModifyDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (dataSourceInstanceId) {
      res["DataSourceInstanceId"] = boost::any(*dataSourceInstanceId);
    }
    if (dataSourceInstanceName) {
      res["DataSourceInstanceName"] = boost::any(*dataSourceInstanceName);
    }
    if (dataSourceInstanceParams) {
      res["DataSourceInstanceParams"] = boost::any(*dataSourceInstanceParams);
    }
    if (dataSourceInstanceRemark) {
      res["DataSourceInstanceRemark"] = boost::any(*dataSourceInstanceRemark);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("DataSourceInstanceId") != m.end() && !m["DataSourceInstanceId"].empty()) {
      dataSourceInstanceId = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceId"]));
    }
    if (m.find("DataSourceInstanceName") != m.end() && !m["DataSourceInstanceName"].empty()) {
      dataSourceInstanceName = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceName"]));
    }
    if (m.find("DataSourceInstanceParams") != m.end() && !m["DataSourceInstanceParams"].empty()) {
      dataSourceInstanceParams = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceParams"]));
    }
    if (m.find("DataSourceInstanceRemark") != m.end() && !m["DataSourceInstanceRemark"].empty()) {
      dataSourceInstanceRemark = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceRemark"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyDataSourceRequest() = default;
};
class ModifyDataSourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> dataSourceInstanceId{};

  ModifyDataSourceResponseBodyData() {}

  explicit ModifyDataSourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (dataSourceInstanceId) {
      res["DataSourceInstanceId"] = boost::any(*dataSourceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DataSourceInstanceId") != m.end() && !m["DataSourceInstanceId"].empty()) {
      dataSourceInstanceId = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceId"]));
    }
  }


  virtual ~ModifyDataSourceResponseBodyData() = default;
};
class ModifyDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<ModifyDataSourceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ModifyDataSourceResponseBody() {}

  explicit ModifyDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ModifyDataSourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyDataSourceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class ModifyDataSourceLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> dataSourceInstanceId{};
  shared_ptr<string> dataSourceInstanceLogs{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> logCode{};
  shared_ptr<string> logInstanceId{};
  shared_ptr<string> regionId{};

  ModifyDataSourceLogRequest() {}

  explicit ModifyDataSourceLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (dataSourceInstanceId) {
      res["DataSourceInstanceId"] = boost::any(*dataSourceInstanceId);
    }
    if (dataSourceInstanceLogs) {
      res["DataSourceInstanceLogs"] = boost::any(*dataSourceInstanceLogs);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (logCode) {
      res["LogCode"] = boost::any(*logCode);
    }
    if (logInstanceId) {
      res["LogInstanceId"] = boost::any(*logInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("DataSourceInstanceId") != m.end() && !m["DataSourceInstanceId"].empty()) {
      dataSourceInstanceId = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceId"]));
    }
    if (m.find("DataSourceInstanceLogs") != m.end() && !m["DataSourceInstanceLogs"].empty()) {
      dataSourceInstanceLogs = make_shared<string>(boost::any_cast<string>(m["DataSourceInstanceLogs"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("LogCode") != m.end() && !m["LogCode"].empty()) {
      logCode = make_shared<string>(boost::any_cast<string>(m["LogCode"]));
    }
    if (m.find("LogInstanceId") != m.end() && !m["LogInstanceId"].empty()) {
      logInstanceId = make_shared<string>(boost::any_cast<string>(m["LogInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyDataSourceLogRequest() = default;
};
class ModifyDataSourceLogResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> logInstanceId{};

  ModifyDataSourceLogResponseBodyData() {}

  explicit ModifyDataSourceLogResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (logInstanceId) {
      res["LogInstanceId"] = boost::any(*logInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("LogInstanceId") != m.end() && !m["LogInstanceId"].empty()) {
      logInstanceId = make_shared<string>(boost::any_cast<string>(m["LogInstanceId"]));
    }
  }


  virtual ~ModifyDataSourceLogResponseBodyData() = default;
};
class ModifyDataSourceLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<ModifyDataSourceLogResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ModifyDataSourceLogResponseBody() {}

  explicit ModifyDataSourceLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ModifyDataSourceLogResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyDataSourceLogResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDataSourceLogResponseBody() = default;
};
class ModifyDataSourceLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDataSourceLogResponseBody> body{};

  ModifyDataSourceLogResponse() {}

  explicit ModifyDataSourceLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDataSourceLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDataSourceLogResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDataSourceLogResponse() = default;
};
class OpenDeliveryRequest : public Darabonba::Model {
public:
  shared_ptr<string> logCode{};
  shared_ptr<string> productCode{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~OpenDeliveryRequest() = default;
};
class OpenDeliveryResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  OpenDeliveryResponseBody() {}

  explicit OpenDeliveryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<string> attCk{};
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (attCk) {
      res["AttCk"] = boost::any(*attCk);
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("AttCk") != m.end() && !m["AttCk"].empty()) {
      attCk = make_shared<string>(boost::any_cast<string>(m["AttCk"]));
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<string> attCk{};
  shared_ptr<long> dataType{};
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
    if (attCk) {
      res["AttCk"] = boost::any(*attCk);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
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
    if (m.find("AttCk") != m.end() && !m["AttCk"].empty()) {
      attCk = make_shared<string>(boost::any_cast<string>(m["AttCk"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<long>(boost::any_cast<long>(m["DataType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
  shared_ptr<long> status{};
  shared_ptr<string> threatLevel{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ThreatLevel") != m.end() && !m["ThreatLevel"].empty()) {
      threatLevel = make_shared<string>(boost::any_cast<string>(m["ThreatLevel"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~RestoreCapacityRequest() = default;
};
class RestoreCapacityResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  RestoreCapacityResponseBody() {}

  explicit RestoreCapacityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
        RestoreCapacityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestoreCapacityResponseBody>(model1);
      }
    }
  }


  virtual ~RestoreCapacityResponse() = default;
};
class SetStorageRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
  }


  virtual ~SetStorageRequest() = default;
};
class SetStorageResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  SetStorageResponseBody() {}

  explicit SetStorageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
        SetStorageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetStorageResponseBody>(model1);
      }
    }
  }


  virtual ~SetStorageResponse() = default;
};
class SubmitImportLogTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> accounts{};
  shared_ptr<long> autoImported{};
  shared_ptr<string> cloudCode{};
  shared_ptr<string> logCodes{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

  SubmitImportLogTasksRequest() {}

  explicit SubmitImportLogTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accounts) {
      res["Accounts"] = boost::any(*accounts);
    }
    if (autoImported) {
      res["AutoImported"] = boost::any(*autoImported);
    }
    if (cloudCode) {
      res["CloudCode"] = boost::any(*cloudCode);
    }
    if (logCodes) {
      res["LogCodes"] = boost::any(*logCodes);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      accounts = make_shared<string>(boost::any_cast<string>(m["Accounts"]));
    }
    if (m.find("AutoImported") != m.end() && !m["AutoImported"].empty()) {
      autoImported = make_shared<long>(boost::any_cast<long>(m["AutoImported"]));
    }
    if (m.find("CloudCode") != m.end() && !m["CloudCode"].empty()) {
      cloudCode = make_shared<string>(boost::any_cast<string>(m["CloudCode"]));
    }
    if (m.find("LogCodes") != m.end() && !m["LogCodes"].empty()) {
      logCodes = make_shared<string>(boost::any_cast<string>(m["LogCodes"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
    }
  }


  virtual ~SubmitImportLogTasksRequest() = default;
};
class SubmitImportLogTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};

  SubmitImportLogTasksResponseBodyData() {}

  explicit SubmitImportLogTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~SubmitImportLogTasksResponseBodyData() = default;
};
class SubmitImportLogTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<SubmitImportLogTasksResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SubmitImportLogTasksResponseBody() {}

  explicit SubmitImportLogTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitImportLogTasksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitImportLogTasksResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitImportLogTasksResponseBody() = default;
};
class SubmitImportLogTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitImportLogTasksResponseBody> body{};

  SubmitImportLogTasksResponse() {}

  explicit SubmitImportLogTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitImportLogTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitImportLogTasksResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitImportLogTasksResponse() = default;
};
class UpdateAutomateResponseConfigStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<bool> inUse{};
  shared_ptr<string> regionId{};
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};

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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  shared_ptr<long> roleFor{};
  shared_ptr<long> roleType{};
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
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<long>(boost::any_cast<long>(m["RoleType"]));
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
  AddDataSourceResponse addDataSourceWithOptions(shared_ptr<AddDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDataSourceResponse addDataSource(shared_ptr<AddDataSourceRequest> request);
  AddDataSourceLogResponse addDataSourceLogWithOptions(shared_ptr<AddDataSourceLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDataSourceLogResponse addDataSourceLog(shared_ptr<AddDataSourceLogRequest> request);
  AddUserSourceLogConfigResponse addUserSourceLogConfigWithOptions(shared_ptr<AddUserSourceLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserSourceLogConfigResponse addUserSourceLogConfig(shared_ptr<AddUserSourceLogConfigRequest> request);
  BindAccountResponse bindAccountWithOptions(shared_ptr<BindAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindAccountResponse bindAccount(shared_ptr<BindAccountRequest> request);
  CloseDeliveryResponse closeDeliveryWithOptions(shared_ptr<CloseDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseDeliveryResponse closeDelivery(shared_ptr<CloseDeliveryRequest> request);
  DeleteAutomateResponseConfigResponse deleteAutomateResponseConfigWithOptions(shared_ptr<DeleteAutomateResponseConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAutomateResponseConfigResponse deleteAutomateResponseConfig(shared_ptr<DeleteAutomateResponseConfigRequest> request);
  DeleteBindAccountResponse deleteBindAccountWithOptions(shared_ptr<DeleteBindAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBindAccountResponse deleteBindAccount(shared_ptr<DeleteBindAccountRequest> request);
  DeleteCustomizeRuleResponse deleteCustomizeRuleWithOptions(shared_ptr<DeleteCustomizeRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCustomizeRuleResponse deleteCustomizeRule(shared_ptr<DeleteCustomizeRuleRequest> request);
  DeleteDataSourceResponse deleteDataSourceWithOptions(shared_ptr<DeleteDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataSourceResponse deleteDataSource(shared_ptr<DeleteDataSourceRequest> request);
  DeleteDataSourceLogResponse deleteDataSourceLogWithOptions(shared_ptr<DeleteDataSourceLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataSourceLogResponse deleteDataSourceLog(shared_ptr<DeleteDataSourceLogRequest> request);
  DeleteWhiteRuleListResponse deleteWhiteRuleListWithOptions(shared_ptr<DeleteWhiteRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWhiteRuleListResponse deleteWhiteRuleList(shared_ptr<DeleteWhiteRuleListRequest> request);
  DescribeAggregateFunctionResponse describeAggregateFunctionWithOptions(shared_ptr<DescribeAggregateFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAggregateFunctionResponse describeAggregateFunction(shared_ptr<DescribeAggregateFunctionRequest> request);
  DescribeAlertSceneResponse describeAlertSceneWithOptions(shared_ptr<DescribeAlertSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlertSceneResponse describeAlertScene(shared_ptr<DescribeAlertSceneRequest> request);
  DescribeAlertSceneByEventResponse describeAlertSceneByEventWithOptions(shared_ptr<DescribeAlertSceneByEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlertSceneByEventResponse describeAlertSceneByEvent(shared_ptr<DescribeAlertSceneByEventRequest> request);
  DescribeAlertSourceResponse describeAlertSourceWithOptions(shared_ptr<DescribeAlertSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlertSourceResponse describeAlertSource(shared_ptr<DescribeAlertSourceRequest> request);
  DescribeAlertSourceWithEventResponse describeAlertSourceWithEventWithOptions(shared_ptr<DescribeAlertSourceWithEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlertSourceWithEventResponse describeAlertSourceWithEvent(shared_ptr<DescribeAlertSourceWithEventRequest> request);
  DescribeAlertTypeResponse describeAlertTypeWithOptions(shared_ptr<DescribeAlertTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlertTypeResponse describeAlertType(shared_ptr<DescribeAlertTypeRequest> request);
  DescribeAlertsResponse describeAlertsWithOptions(shared_ptr<DescribeAlertsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlertsResponse describeAlerts(shared_ptr<DescribeAlertsRequest> request);
  DescribeAlertsCountResponse describeAlertsCountWithOptions(shared_ptr<DescribeAlertsCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlertsCountResponse describeAlertsCount(shared_ptr<DescribeAlertsCountRequest> request);
  DescribeAlertsWithEntityResponse describeAlertsWithEntityWithOptions(shared_ptr<DescribeAlertsWithEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlertsWithEntityResponse describeAlertsWithEntity(shared_ptr<DescribeAlertsWithEntityRequest> request);
  DescribeAlertsWithEventResponse describeAlertsWithEventWithOptions(shared_ptr<DescribeAlertsWithEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlertsWithEventResponse describeAlertsWithEvent(shared_ptr<DescribeAlertsWithEventRequest> request);
  DescribeAuthResponse describeAuthWithOptions(shared_ptr<DescribeAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuthResponse describeAuth(shared_ptr<DescribeAuthRequest> request);
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
  DescribeCustomizeRuleCountResponse describeCustomizeRuleCountWithOptions(shared_ptr<DescribeCustomizeRuleCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCustomizeRuleCountResponse describeCustomizeRuleCount(shared_ptr<DescribeCustomizeRuleCountRequest> request);
  DescribeCustomizeRuleTestResponse describeCustomizeRuleTestWithOptions(shared_ptr<DescribeCustomizeRuleTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCustomizeRuleTestResponse describeCustomizeRuleTest(shared_ptr<DescribeCustomizeRuleTestRequest> request);
  DescribeCustomizeRuleTestHistogramResponse describeCustomizeRuleTestHistogramWithOptions(shared_ptr<DescribeCustomizeRuleTestHistogramRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCustomizeRuleTestHistogramResponse describeCustomizeRuleTestHistogram(shared_ptr<DescribeCustomizeRuleTestHistogramRequest> request);
  DescribeDataSourceInstanceResponse describeDataSourceInstanceWithOptions(shared_ptr<DescribeDataSourceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataSourceInstanceResponse describeDataSourceInstance(shared_ptr<DescribeDataSourceInstanceRequest> request);
  DescribeDataSourceParametersResponse describeDataSourceParametersWithOptions(shared_ptr<DescribeDataSourceParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataSourceParametersResponse describeDataSourceParameters(shared_ptr<DescribeDataSourceParametersRequest> request);
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
  DescribeImportedLogCountResponse describeImportedLogCountWithOptions(shared_ptr<DescribeImportedLogCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImportedLogCountResponse describeImportedLogCount(shared_ptr<DescribeImportedLogCountRequest> request);
  DescribeLogFieldsResponse describeLogFieldsWithOptions(shared_ptr<DescribeLogFieldsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogFieldsResponse describeLogFields(shared_ptr<DescribeLogFieldsRequest> request);
  DescribeLogSourceResponse describeLogSourceWithOptions(shared_ptr<DescribeLogSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogSourceResponse describeLogSource(shared_ptr<DescribeLogSourceRequest> request);
  DescribeLogTypeResponse describeLogTypeWithOptions(shared_ptr<DescribeLogTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogTypeResponse describeLogType(shared_ptr<DescribeLogTypeRequest> request);
  DescribeOperatorsResponse describeOperatorsWithOptions(shared_ptr<DescribeOperatorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOperatorsResponse describeOperators(shared_ptr<DescribeOperatorsRequest> request);
  DescribeProdCountResponse describeProdCountWithOptions(shared_ptr<DescribeProdCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProdCountResponse describeProdCount(shared_ptr<DescribeProdCountRequest> request);
  DescribeScopeUsersResponse describeScopeUsersWithOptions(shared_ptr<DescribeScopeUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScopeUsersResponse describeScopeUsers(shared_ptr<DescribeScopeUsersRequest> request);
  DescribeServiceStatusResponse describeServiceStatusWithOptions(shared_ptr<DescribeServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceStatusResponse describeServiceStatus(shared_ptr<DescribeServiceStatusRequest> request);
  DescribeStorageResponse describeStorageWithOptions(shared_ptr<DescribeStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStorageResponse describeStorage(shared_ptr<DescribeStorageRequest> request);
  DescribeUserBuyStatusResponse describeUserBuyStatusWithOptions(shared_ptr<DescribeUserBuyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserBuyStatusResponse describeUserBuyStatus(shared_ptr<DescribeUserBuyStatusRequest> request);
  DescribeWafScopeResponse describeWafScopeWithOptions(shared_ptr<DescribeWafScopeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWafScopeResponse describeWafScope(shared_ptr<DescribeWafScopeRequest> request);
  DescribeWhiteRuleListResponse describeWhiteRuleListWithOptions(shared_ptr<DescribeWhiteRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWhiteRuleListResponse describeWhiteRuleList(shared_ptr<DescribeWhiteRuleListRequest> request);
  EnableAccessForCloudSiemResponse enableAccessForCloudSiemWithOptions(shared_ptr<EnableAccessForCloudSiemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableAccessForCloudSiemResponse enableAccessForCloudSiem(shared_ptr<EnableAccessForCloudSiemRequest> request);
  EnableServiceForCloudSiemResponse enableServiceForCloudSiemWithOptions(shared_ptr<EnableServiceForCloudSiemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableServiceForCloudSiemResponse enableServiceForCloudSiem(shared_ptr<EnableServiceForCloudSiemRequest> request);
  GetCapacityResponse getCapacityWithOptions(shared_ptr<GetCapacityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCapacityResponse getCapacity(shared_ptr<GetCapacityRequest> request);
  GetStorageResponse getStorageWithOptions(shared_ptr<GetStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStorageResponse getStorage(shared_ptr<GetStorageRequest> request);
  ListAccountAccessIdResponse listAccountAccessIdWithOptions(shared_ptr<ListAccountAccessIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccountAccessIdResponse listAccountAccessId(shared_ptr<ListAccountAccessIdRequest> request);
  ListAccountsByLogResponse listAccountsByLogWithOptions(shared_ptr<ListAccountsByLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccountsByLogResponse listAccountsByLog(shared_ptr<ListAccountsByLogRequest> request);
  ListAllProdsResponse listAllProdsWithOptions(shared_ptr<ListAllProdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAllProdsResponse listAllProds(shared_ptr<ListAllProdsRequest> request);
  ListAutomateResponseConfigsResponse listAutomateResponseConfigsWithOptions(shared_ptr<ListAutomateResponseConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAutomateResponseConfigsResponse listAutomateResponseConfigs(shared_ptr<ListAutomateResponseConfigsRequest> request);
  ListBindAccountResponse listBindAccountWithOptions(shared_ptr<ListBindAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBindAccountResponse listBindAccount(shared_ptr<ListBindAccountRequest> request);
  ListBindDataSourcesResponse listBindDataSourcesWithOptions(shared_ptr<ListBindDataSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBindDataSourcesResponse listBindDataSources(shared_ptr<ListBindDataSourcesRequest> request);
  ListCloudSiemCustomizeRulesResponse listCloudSiemCustomizeRulesWithOptions(shared_ptr<ListCloudSiemCustomizeRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCloudSiemCustomizeRulesResponse listCloudSiemCustomizeRules(shared_ptr<ListCloudSiemCustomizeRulesRequest> request);
  ListCloudSiemPredefinedRulesResponse listCloudSiemPredefinedRulesWithOptions(shared_ptr<ListCloudSiemPredefinedRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCloudSiemPredefinedRulesResponse listCloudSiemPredefinedRules(shared_ptr<ListCloudSiemPredefinedRulesRequest> request);
  ListCustomizeRuleTestResultResponse listCustomizeRuleTestResultWithOptions(shared_ptr<ListCustomizeRuleTestResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCustomizeRuleTestResultResponse listCustomizeRuleTestResult(shared_ptr<ListCustomizeRuleTestResultRequest> request);
  ListDataSourceLogsResponse listDataSourceLogsWithOptions(shared_ptr<ListDataSourceLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourceLogsResponse listDataSourceLogs(shared_ptr<ListDataSourceLogsRequest> request);
  ListDataSourceTypesResponse listDataSourceTypesWithOptions(shared_ptr<ListDataSourceTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourceTypesResponse listDataSourceTypes(shared_ptr<ListDataSourceTypesRequest> request);
  ListDeliveryResponse listDeliveryWithOptions(shared_ptr<ListDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeliveryResponse listDelivery(shared_ptr<ListDeliveryRequest> request);
  ListDisposeStrategyResponse listDisposeStrategyWithOptions(shared_ptr<ListDisposeStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDisposeStrategyResponse listDisposeStrategy(shared_ptr<ListDisposeStrategyRequest> request);
  ListEntitiesResponse listEntitiesWithOptions(shared_ptr<ListEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEntitiesResponse listEntities(shared_ptr<ListEntitiesRequest> request);
  ListImportedLogsByProdResponse listImportedLogsByProdWithOptions(shared_ptr<ListImportedLogsByProdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListImportedLogsByProdResponse listImportedLogsByProd(shared_ptr<ListImportedLogsByProdRequest> request);
  ListProjectLogStoresResponse listProjectLogStoresWithOptions(shared_ptr<ListProjectLogStoresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectLogStoresResponse listProjectLogStores(shared_ptr<ListProjectLogStoresRequest> request);
  ListRdUsersResponse listRdUsersWithOptions(shared_ptr<ListRdUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRdUsersResponse listRdUsers(shared_ptr<ListRdUsersRequest> request);
  ModifyBindAccountResponse modifyBindAccountWithOptions(shared_ptr<ModifyBindAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBindAccountResponse modifyBindAccount(shared_ptr<ModifyBindAccountRequest> request);
  ModifyDataSourceResponse modifyDataSourceWithOptions(shared_ptr<ModifyDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDataSourceResponse modifyDataSource(shared_ptr<ModifyDataSourceRequest> request);
  ModifyDataSourceLogResponse modifyDataSourceLogWithOptions(shared_ptr<ModifyDataSourceLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDataSourceLogResponse modifyDataSourceLog(shared_ptr<ModifyDataSourceLogRequest> request);
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
  SetStorageResponse setStorageWithOptions(shared_ptr<SetStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetStorageResponse setStorage(shared_ptr<SetStorageRequest> request);
  SubmitImportLogTasksResponse submitImportLogTasksWithOptions(shared_ptr<SubmitImportLogTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitImportLogTasksResponse submitImportLogTasks(shared_ptr<SubmitImportLogTasksRequest> request);
  UpdateAutomateResponseConfigStatusResponse updateAutomateResponseConfigStatusWithOptions(shared_ptr<UpdateAutomateResponseConfigStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAutomateResponseConfigStatusResponse updateAutomateResponseConfigStatus(shared_ptr<UpdateAutomateResponseConfigStatusRequest> request);
  UpdateWhiteRuleListResponse updateWhiteRuleListWithOptions(shared_ptr<UpdateWhiteRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWhiteRuleListResponse updateWhiteRuleList(shared_ptr<UpdateWhiteRuleListRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloud-siem20220616

#endif
