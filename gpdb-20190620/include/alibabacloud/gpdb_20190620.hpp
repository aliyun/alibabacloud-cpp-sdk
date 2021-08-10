// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GPDB20190620_H_
#define ALIBABACLOUD_GPDB20190620_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Gpdb20190620 {
class DescribeDBInstanceForDmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<long> port{};

  DescribeDBInstanceForDmsRequest() {}

  explicit DescribeDBInstanceForDmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~DescribeDBInstanceForDmsRequest() = default;
};
class DescribeDBInstanceForDmsResponseBodyInstance : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> aliUid{};
  shared_ptr<string> port{};
  shared_ptr<string> bid{};
  shared_ptr<string> vpcCloudInstanceId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> description{};
  shared_ptr<string> dbType{};
  shared_ptr<string> version{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> region{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<string> dbInstanceName{};
  shared_ptr<string> vpcIp{};

  DescribeDBInstanceForDmsResponseBodyInstance() {}

  explicit DescribeDBInstanceForDmsResponseBodyInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (vpcCloudInstanceId) {
      res["VpcCloudInstanceId"] = boost::any(*vpcCloudInstanceId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (dbInstanceName) {
      res["DbInstanceName"] = boost::any(*dbInstanceName);
    }
    if (vpcIp) {
      res["VpcIp"] = boost::any(*vpcIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("VpcCloudInstanceId") != m.end() && !m["VpcCloudInstanceId"].empty()) {
      vpcCloudInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcCloudInstanceId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("DbInstanceName") != m.end() && !m["DbInstanceName"].empty()) {
      dbInstanceName = make_shared<string>(boost::any_cast<string>(m["DbInstanceName"]));
    }
    if (m.find("VpcIp") != m.end() && !m["VpcIp"].empty()) {
      vpcIp = make_shared<string>(boost::any_cast<string>(m["VpcIp"]));
    }
  }


  virtual ~DescribeDBInstanceForDmsResponseBodyInstance() = default;
};
class DescribeDBInstanceForDmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> count{};
  shared_ptr<DescribeDBInstanceForDmsResponseBodyInstance> instance{};

  DescribeDBInstanceForDmsResponseBody() {}

  explicit DescribeDBInstanceForDmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instance) {
      res["Instance"] = instance ? boost::any(instance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instance"].type()) {
        DescribeDBInstanceForDmsResponseBodyInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instance"]));
        instance = make_shared<DescribeDBInstanceForDmsResponseBodyInstance>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceForDmsResponseBody() = default;
};
class DescribeDBInstanceForDmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstanceForDmsResponseBody> body{};

  DescribeDBInstanceForDmsResponse() {}

  explicit DescribeDBInstanceForDmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceForDmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceForDmsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceForDmsResponse() = default;
};
class DescribeDBInstanceSecurityIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DescribeDBInstanceSecurityIpsRequest() {}

  explicit DescribeDBInstanceSecurityIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeDBInstanceSecurityIpsRequest() = default;
};
class DescribeDBInstanceSecurityIpsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<vector<string>> whiteList{};

  DescribeDBInstanceSecurityIpsResponseBodyResult() {}

  explicit DescribeDBInstanceSecurityIpsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (whiteList) {
      res["WhiteList"] = boost::any(*whiteList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("WhiteList") != m.end() && !m["WhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whiteList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDBInstanceSecurityIpsResponseBodyResult() = default;
};
class DescribeDBInstanceSecurityIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> count{};
  shared_ptr<vector<DescribeDBInstanceSecurityIpsResponseBodyResult>> result{};

  DescribeDBInstanceSecurityIpsResponseBody() {}

  explicit DescribeDBInstanceSecurityIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<DescribeDBInstanceSecurityIpsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceSecurityIpsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeDBInstanceSecurityIpsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceSecurityIpsResponseBody() = default;
};
class DescribeDBInstanceSecurityIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstanceSecurityIpsResponseBody> body{};

  DescribeDBInstanceSecurityIpsResponse() {}

  explicit DescribeDBInstanceSecurityIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceSecurityIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceSecurityIpsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceSecurityIpsResponse() = default;
};
class DescribeDBInstancesForDmsRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};

  DescribeDBInstancesForDmsRequest() {}

  explicit DescribeDBInstancesForDmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
  }


  virtual ~DescribeDBInstancesForDmsRequest() = default;
};
class DescribeDBInstancesForDmsResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> aliUid{};
  shared_ptr<string> port{};
  shared_ptr<string> bid{};
  shared_ptr<string> vpcCloudInstanceId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> description{};
  shared_ptr<string> dbType{};
  shared_ptr<string> version{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> region{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<string> dbInstanceName{};
  shared_ptr<string> vpcIp{};

  DescribeDBInstancesForDmsResponseBodyInstances() {}

  explicit DescribeDBInstancesForDmsResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (vpcCloudInstanceId) {
      res["VpcCloudInstanceId"] = boost::any(*vpcCloudInstanceId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (dbInstanceName) {
      res["DbInstanceName"] = boost::any(*dbInstanceName);
    }
    if (vpcIp) {
      res["VpcIp"] = boost::any(*vpcIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("VpcCloudInstanceId") != m.end() && !m["VpcCloudInstanceId"].empty()) {
      vpcCloudInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcCloudInstanceId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("DbInstanceName") != m.end() && !m["DbInstanceName"].empty()) {
      dbInstanceName = make_shared<string>(boost::any_cast<string>(m["DbInstanceName"]));
    }
    if (m.find("VpcIp") != m.end() && !m["VpcIp"].empty()) {
      vpcIp = make_shared<string>(boost::any_cast<string>(m["VpcIp"]));
    }
  }


  virtual ~DescribeDBInstancesForDmsResponseBodyInstances() = default;
};
class DescribeDBInstancesForDmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> count{};
  shared_ptr<vector<DescribeDBInstancesForDmsResponseBodyInstances>> instances{};

  DescribeDBInstancesForDmsResponseBody() {}

  explicit DescribeDBInstancesForDmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<DescribeDBInstancesForDmsResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesForDmsResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<DescribeDBInstancesForDmsResponseBodyInstances>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstancesForDmsResponseBody() = default;
};
class DescribeDBInstancesForDmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstancesForDmsResponseBody> body{};

  DescribeDBInstancesForDmsResponse() {}

  explicit DescribeDBInstancesForDmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstancesForDmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstancesForDmsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstancesForDmsResponse() = default;
};
class ModifyDBInstanceSecurityIpsRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> whileList{};

  ModifyDBInstanceSecurityIpsRequest() {}

  explicit ModifyDBInstanceSecurityIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (whileList) {
      res["WhileList"] = boost::any(*whileList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("WhileList") != m.end() && !m["WhileList"].empty()) {
      whileList = make_shared<string>(boost::any_cast<string>(m["WhileList"]));
    }
  }


  virtual ~ModifyDBInstanceSecurityIpsRequest() = default;
};
class ModifyDBInstanceSecurityIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyDBInstanceSecurityIpsResponseBody() {}

  explicit ModifyDBInstanceSecurityIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ModifyDBInstanceSecurityIpsResponseBody() = default;
};
class ModifyDBInstanceSecurityIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBInstanceSecurityIpsResponseBody> body{};

  ModifyDBInstanceSecurityIpsResponse() {}

  explicit ModifyDBInstanceSecurityIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceSecurityIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceSecurityIpsResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceSecurityIpsResponse() = default;
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
  DescribeDBInstanceForDmsResponse describeDBInstanceForDmsWithOptions(shared_ptr<DescribeDBInstanceForDmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceForDmsResponse describeDBInstanceForDms(shared_ptr<DescribeDBInstanceForDmsRequest> request);
  DescribeDBInstanceSecurityIpsResponse describeDBInstanceSecurityIpsWithOptions(shared_ptr<DescribeDBInstanceSecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceSecurityIpsResponse describeDBInstanceSecurityIps(shared_ptr<DescribeDBInstanceSecurityIpsRequest> request);
  DescribeDBInstancesForDmsResponse describeDBInstancesForDmsWithOptions(shared_ptr<DescribeDBInstancesForDmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstancesForDmsResponse describeDBInstancesForDms(shared_ptr<DescribeDBInstancesForDmsRequest> request);
  ModifyDBInstanceSecurityIpsResponse modifyDBInstanceSecurityIpsWithOptions(shared_ptr<ModifyDBInstanceSecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceSecurityIpsResponse modifyDBInstanceSecurityIps(shared_ptr<ModifyDBInstanceSecurityIpsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Gpdb20190620

#endif
