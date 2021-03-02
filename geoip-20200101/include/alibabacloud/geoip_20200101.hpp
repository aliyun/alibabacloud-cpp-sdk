// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GEOIP20200101_H_
#define ALIBABACLOUD_GEOIP20200101_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Geoip20200101 {
class DescribeGeoipInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> instanceId{};

  DescribeGeoipInstanceRequest() {}

  explicit DescribeGeoipInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeGeoipInstanceRequest() = default;
};
class DescribeGeoipInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> expireTimestamp{};
  shared_ptr<string> versionCode{};
  shared_ptr<long> maxQpd{};
  shared_ptr<long> maxQps{};
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> createTime{};
  shared_ptr<long> queryCount{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> createTimestamp{};

  DescribeGeoipInstanceResponseBody() {}

  explicit DescribeGeoipInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTimestamp) {
      res["ExpireTimestamp"] = boost::any(*expireTimestamp);
    }
    if (versionCode) {
      res["VersionCode"] = boost::any(*versionCode);
    }
    if (maxQpd) {
      res["MaxQpd"] = boost::any(*maxQpd);
    }
    if (maxQps) {
      res["MaxQps"] = boost::any(*maxQps);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (queryCount) {
      res["QueryCount"] = boost::any(*queryCount);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTimestamp") != m.end() && !m["ExpireTimestamp"].empty()) {
      expireTimestamp = make_shared<long>(boost::any_cast<long>(m["ExpireTimestamp"]));
    }
    if (m.find("VersionCode") != m.end() && !m["VersionCode"].empty()) {
      versionCode = make_shared<string>(boost::any_cast<string>(m["VersionCode"]));
    }
    if (m.find("MaxQpd") != m.end() && !m["MaxQpd"].empty()) {
      maxQpd = make_shared<long>(boost::any_cast<long>(m["MaxQpd"]));
    }
    if (m.find("MaxQps") != m.end() && !m["MaxQps"].empty()) {
      maxQps = make_shared<long>(boost::any_cast<long>(m["MaxQps"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("QueryCount") != m.end() && !m["QueryCount"].empty()) {
      queryCount = make_shared<long>(boost::any_cast<long>(m["QueryCount"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
  }


  virtual ~DescribeGeoipInstanceResponseBody() = default;
};
class DescribeGeoipInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGeoipInstanceResponseBody> body{};

  DescribeGeoipInstanceResponse() {}

  explicit DescribeGeoipInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGeoipInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGeoipInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGeoipInstanceResponse() = default;
};
class DescribeGeoipInstanceDataInfosRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> locationDataType{};

  DescribeGeoipInstanceDataInfosRequest() {}

  explicit DescribeGeoipInstanceDataInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (locationDataType) {
      res["LocationDataType"] = boost::any(*locationDataType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LocationDataType") != m.end() && !m["LocationDataType"].empty()) {
      locationDataType = make_shared<string>(boost::any_cast<string>(m["LocationDataType"]));
    }
  }


  virtual ~DescribeGeoipInstanceDataInfosRequest() = default;
};
class DescribeGeoipInstanceDataInfosResponseBodyDataInfosDataInfo : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> updateTimestamp{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> version{};
  shared_ptr<long> downloadCount{};

  DescribeGeoipInstanceDataInfosResponseBodyDataInfosDataInfo() {}

  explicit DescribeGeoipInstanceDataInfosResponseBodyDataInfosDataInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateTimestamp) {
      res["UpdateTimestamp"] = boost::any(*updateTimestamp);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (downloadCount) {
      res["DownloadCount"] = boost::any(*downloadCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTimestamp") != m.end() && !m["UpdateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["UpdateTimestamp"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("DownloadCount") != m.end() && !m["DownloadCount"].empty()) {
      downloadCount = make_shared<long>(boost::any_cast<long>(m["DownloadCount"]));
    }
  }


  virtual ~DescribeGeoipInstanceDataInfosResponseBodyDataInfosDataInfo() = default;
};
class DescribeGeoipInstanceDataInfosResponseBodyDataInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGeoipInstanceDataInfosResponseBodyDataInfosDataInfo>> dataInfo{};

  DescribeGeoipInstanceDataInfosResponseBodyDataInfos() {}

  explicit DescribeGeoipInstanceDataInfosResponseBodyDataInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInfo) {
      vector<boost::any> temp1;
      for(auto item1:*dataInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInfo") != m.end() && !m["DataInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DataInfo"].type()) {
        vector<DescribeGeoipInstanceDataInfosResponseBodyDataInfosDataInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGeoipInstanceDataInfosResponseBodyDataInfosDataInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataInfo = make_shared<vector<DescribeGeoipInstanceDataInfosResponseBodyDataInfosDataInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeGeoipInstanceDataInfosResponseBodyDataInfos() = default;
};
class DescribeGeoipInstanceDataInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeGeoipInstanceDataInfosResponseBodyDataInfos> dataInfos{};

  DescribeGeoipInstanceDataInfosResponseBody() {}

  explicit DescribeGeoipInstanceDataInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dataInfos) {
      res["DataInfos"] = dataInfos ? boost::any(dataInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DataInfos") != m.end() && !m["DataInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataInfos"].type()) {
        DescribeGeoipInstanceDataInfosResponseBodyDataInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataInfos"]));
        dataInfos = make_shared<DescribeGeoipInstanceDataInfosResponseBodyDataInfos>(model1);
      }
    }
  }


  virtual ~DescribeGeoipInstanceDataInfosResponseBody() = default;
};
class DescribeGeoipInstanceDataInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGeoipInstanceDataInfosResponseBody> body{};

  DescribeGeoipInstanceDataInfosResponse() {}

  explicit DescribeGeoipInstanceDataInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGeoipInstanceDataInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGeoipInstanceDataInfosResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGeoipInstanceDataInfosResponse() = default;
};
class DescribeGeoipInstanceDataUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> dataType{};

  DescribeGeoipInstanceDataUrlRequest() {}

  explicit DescribeGeoipInstanceDataUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
  }


  virtual ~DescribeGeoipInstanceDataUrlRequest() = default;
};
class DescribeGeoipInstanceDataUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> downloadUrl{};

  DescribeGeoipInstanceDataUrlResponseBody() {}

  explicit DescribeGeoipInstanceDataUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
  }


  virtual ~DescribeGeoipInstanceDataUrlResponseBody() = default;
};
class DescribeGeoipInstanceDataUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGeoipInstanceDataUrlResponseBody> body{};

  DescribeGeoipInstanceDataUrlResponse() {}

  explicit DescribeGeoipInstanceDataUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGeoipInstanceDataUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGeoipInstanceDataUrlResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGeoipInstanceDataUrlResponse() = default;
};
class DescribeGeoipInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  DescribeGeoipInstancesRequest() {}

  explicit DescribeGeoipInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~DescribeGeoipInstancesRequest() = default;
};
class DescribeGeoipInstancesResponseBodyGeoipInstancesGeoipInstance : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<long> expireTimestamp{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> maxQps{};
  shared_ptr<string> createTime{};
  shared_ptr<long> maxQpd{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> versionCode{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> productCode{};

  DescribeGeoipInstancesResponseBodyGeoipInstancesGeoipInstance() {}

  explicit DescribeGeoipInstancesResponseBodyGeoipInstancesGeoipInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (expireTimestamp) {
      res["ExpireTimestamp"] = boost::any(*expireTimestamp);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (maxQps) {
      res["MaxQps"] = boost::any(*maxQps);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (maxQpd) {
      res["MaxQpd"] = boost::any(*maxQpd);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (versionCode) {
      res["VersionCode"] = boost::any(*versionCode);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ExpireTimestamp") != m.end() && !m["ExpireTimestamp"].empty()) {
      expireTimestamp = make_shared<long>(boost::any_cast<long>(m["ExpireTimestamp"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("MaxQps") != m.end() && !m["MaxQps"].empty()) {
      maxQps = make_shared<long>(boost::any_cast<long>(m["MaxQps"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("MaxQpd") != m.end() && !m["MaxQpd"].empty()) {
      maxQpd = make_shared<long>(boost::any_cast<long>(m["MaxQpd"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("VersionCode") != m.end() && !m["VersionCode"].empty()) {
      versionCode = make_shared<string>(boost::any_cast<string>(m["VersionCode"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~DescribeGeoipInstancesResponseBodyGeoipInstancesGeoipInstance() = default;
};
class DescribeGeoipInstancesResponseBodyGeoipInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGeoipInstancesResponseBodyGeoipInstancesGeoipInstance>> geoipInstance{};

  DescribeGeoipInstancesResponseBodyGeoipInstances() {}

  explicit DescribeGeoipInstancesResponseBodyGeoipInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (geoipInstance) {
      vector<boost::any> temp1;
      for(auto item1:*geoipInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GeoipInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GeoipInstance") != m.end() && !m["GeoipInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["GeoipInstance"].type()) {
        vector<DescribeGeoipInstancesResponseBodyGeoipInstancesGeoipInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GeoipInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGeoipInstancesResponseBodyGeoipInstancesGeoipInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        geoipInstance = make_shared<vector<DescribeGeoipInstancesResponseBodyGeoipInstancesGeoipInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeGeoipInstancesResponseBodyGeoipInstances() = default;
};
class DescribeGeoipInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeGeoipInstancesResponseBodyGeoipInstances> geoipInstances{};

  DescribeGeoipInstancesResponseBody() {}

  explicit DescribeGeoipInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (geoipInstances) {
      res["GeoipInstances"] = geoipInstances ? boost::any(geoipInstances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("GeoipInstances") != m.end() && !m["GeoipInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["GeoipInstances"].type()) {
        DescribeGeoipInstancesResponseBodyGeoipInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GeoipInstances"]));
        geoipInstances = make_shared<DescribeGeoipInstancesResponseBodyGeoipInstances>(model1);
      }
    }
  }


  virtual ~DescribeGeoipInstancesResponseBody() = default;
};
class DescribeGeoipInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGeoipInstancesResponseBody> body{};

  DescribeGeoipInstancesResponse() {}

  explicit DescribeGeoipInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGeoipInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGeoipInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGeoipInstancesResponse() = default;
};
class DescribeGeoipInstanceStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> startDate{};
  shared_ptr<string> endDate{};

  DescribeGeoipInstanceStatisticsRequest() {}

  explicit DescribeGeoipInstanceStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~DescribeGeoipInstanceStatisticsRequest() = default;
};
class DescribeGeoipInstanceStatisticsResponseBodyStatisticsStatistic : public Darabonba::Model {
public:
  shared_ptr<long> timestamp{};
  shared_ptr<long> count{};

  DescribeGeoipInstanceStatisticsResponseBodyStatisticsStatistic() {}

  explicit DescribeGeoipInstanceStatisticsResponseBodyStatisticsStatistic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~DescribeGeoipInstanceStatisticsResponseBodyStatisticsStatistic() = default;
};
class DescribeGeoipInstanceStatisticsResponseBodyStatistics : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGeoipInstanceStatisticsResponseBodyStatisticsStatistic>> statistic{};

  DescribeGeoipInstanceStatisticsResponseBodyStatistics() {}

  explicit DescribeGeoipInstanceStatisticsResponseBodyStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (statistic) {
      vector<boost::any> temp1;
      for(auto item1:*statistic){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Statistic"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Statistic") != m.end() && !m["Statistic"].empty()) {
      if (typeid(vector<boost::any>) == m["Statistic"].type()) {
        vector<DescribeGeoipInstanceStatisticsResponseBodyStatisticsStatistic> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Statistic"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGeoipInstanceStatisticsResponseBodyStatisticsStatistic model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statistic = make_shared<vector<DescribeGeoipInstanceStatisticsResponseBodyStatisticsStatistic>>(expect1);
      }
    }
  }


  virtual ~DescribeGeoipInstanceStatisticsResponseBodyStatistics() = default;
};
class DescribeGeoipInstanceStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeGeoipInstanceStatisticsResponseBodyStatistics> statistics{};

  DescribeGeoipInstanceStatisticsResponseBody() {}

  explicit DescribeGeoipInstanceStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statistics) {
      res["Statistics"] = statistics ? boost::any(statistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["Statistics"].type()) {
        DescribeGeoipInstanceStatisticsResponseBodyStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Statistics"]));
        statistics = make_shared<DescribeGeoipInstanceStatisticsResponseBodyStatistics>(model1);
      }
    }
  }


  virtual ~DescribeGeoipInstanceStatisticsResponseBody() = default;
};
class DescribeGeoipInstanceStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGeoipInstanceStatisticsResponseBody> body{};

  DescribeGeoipInstanceStatisticsResponse() {}

  explicit DescribeGeoipInstanceStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGeoipInstanceStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGeoipInstanceStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGeoipInstanceStatisticsResponse() = default;
};
class DescribeIpv4LocationRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> ip{};

  DescribeIpv4LocationRequest() {}

  explicit DescribeIpv4LocationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
  }


  virtual ~DescribeIpv4LocationRequest() = default;
};
class DescribeIpv4LocationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> provinceEn{};
  shared_ptr<string> requestId{};
  shared_ptr<string> cityEn{};
  shared_ptr<string> ip{};
  shared_ptr<string> isp{};
  shared_ptr<string> latitude{};
  shared_ptr<string> city{};
  shared_ptr<string> county{};
  shared_ptr<string> longitude{};
  shared_ptr<string> countryEn{};
  shared_ptr<string> province{};
  shared_ptr<string> country{};
  shared_ptr<string> countryCode{};

  DescribeIpv4LocationResponseBody() {}

  explicit DescribeIpv4LocationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (provinceEn) {
      res["ProvinceEn"] = boost::any(*provinceEn);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (cityEn) {
      res["CityEn"] = boost::any(*cityEn);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (isp) {
      res["Isp"] = boost::any(*isp);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (county) {
      res["County"] = boost::any(*county);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (countryEn) {
      res["CountryEn"] = boost::any(*countryEn);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (countryCode) {
      res["CountryCode"] = boost::any(*countryCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProvinceEn") != m.end() && !m["ProvinceEn"].empty()) {
      provinceEn = make_shared<string>(boost::any_cast<string>(m["ProvinceEn"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CityEn") != m.end() && !m["CityEn"].empty()) {
      cityEn = make_shared<string>(boost::any_cast<string>(m["CityEn"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Isp") != m.end() && !m["Isp"].empty()) {
      isp = make_shared<string>(boost::any_cast<string>(m["Isp"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("County") != m.end() && !m["County"].empty()) {
      county = make_shared<string>(boost::any_cast<string>(m["County"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("CountryEn") != m.end() && !m["CountryEn"].empty()) {
      countryEn = make_shared<string>(boost::any_cast<string>(m["CountryEn"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("CountryCode") != m.end() && !m["CountryCode"].empty()) {
      countryCode = make_shared<string>(boost::any_cast<string>(m["CountryCode"]));
    }
  }


  virtual ~DescribeIpv4LocationResponseBody() = default;
};
class DescribeIpv4LocationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeIpv4LocationResponseBody> body{};

  DescribeIpv4LocationResponse() {}

  explicit DescribeIpv4LocationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIpv4LocationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIpv4LocationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIpv4LocationResponse() = default;
};
class DescribeIpv6LocationRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> ip{};

  DescribeIpv6LocationRequest() {}

  explicit DescribeIpv6LocationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
  }


  virtual ~DescribeIpv6LocationRequest() = default;
};
class DescribeIpv6LocationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> provinceEn{};
  shared_ptr<string> requestId{};
  shared_ptr<string> cityEn{};
  shared_ptr<string> ip{};
  shared_ptr<string> isp{};
  shared_ptr<string> latitude{};
  shared_ptr<string> city{};
  shared_ptr<string> county{};
  shared_ptr<string> longitude{};
  shared_ptr<string> countryEn{};
  shared_ptr<string> province{};
  shared_ptr<string> country{};
  shared_ptr<string> countryCode{};

  DescribeIpv6LocationResponseBody() {}

  explicit DescribeIpv6LocationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (provinceEn) {
      res["ProvinceEn"] = boost::any(*provinceEn);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (cityEn) {
      res["CityEn"] = boost::any(*cityEn);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (isp) {
      res["Isp"] = boost::any(*isp);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (county) {
      res["County"] = boost::any(*county);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (countryEn) {
      res["CountryEn"] = boost::any(*countryEn);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (countryCode) {
      res["CountryCode"] = boost::any(*countryCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProvinceEn") != m.end() && !m["ProvinceEn"].empty()) {
      provinceEn = make_shared<string>(boost::any_cast<string>(m["ProvinceEn"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CityEn") != m.end() && !m["CityEn"].empty()) {
      cityEn = make_shared<string>(boost::any_cast<string>(m["CityEn"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Isp") != m.end() && !m["Isp"].empty()) {
      isp = make_shared<string>(boost::any_cast<string>(m["Isp"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("County") != m.end() && !m["County"].empty()) {
      county = make_shared<string>(boost::any_cast<string>(m["County"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("CountryEn") != m.end() && !m["CountryEn"].empty()) {
      countryEn = make_shared<string>(boost::any_cast<string>(m["CountryEn"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("CountryCode") != m.end() && !m["CountryCode"].empty()) {
      countryCode = make_shared<string>(boost::any_cast<string>(m["CountryCode"]));
    }
  }


  virtual ~DescribeIpv6LocationResponseBody() = default;
};
class DescribeIpv6LocationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeIpv6LocationResponseBody> body{};

  DescribeIpv6LocationResponse() {}

  explicit DescribeIpv6LocationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIpv6LocationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIpv6LocationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIpv6LocationResponse() = default;
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
  DescribeGeoipInstanceResponse describeGeoipInstanceWithOptions(shared_ptr<DescribeGeoipInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGeoipInstanceResponse describeGeoipInstance(shared_ptr<DescribeGeoipInstanceRequest> request);
  DescribeGeoipInstanceDataInfosResponse describeGeoipInstanceDataInfosWithOptions(shared_ptr<DescribeGeoipInstanceDataInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGeoipInstanceDataInfosResponse describeGeoipInstanceDataInfos(shared_ptr<DescribeGeoipInstanceDataInfosRequest> request);
  DescribeGeoipInstanceDataUrlResponse describeGeoipInstanceDataUrlWithOptions(shared_ptr<DescribeGeoipInstanceDataUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGeoipInstanceDataUrlResponse describeGeoipInstanceDataUrl(shared_ptr<DescribeGeoipInstanceDataUrlRequest> request);
  DescribeGeoipInstancesResponse describeGeoipInstancesWithOptions(shared_ptr<DescribeGeoipInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGeoipInstancesResponse describeGeoipInstances(shared_ptr<DescribeGeoipInstancesRequest> request);
  DescribeGeoipInstanceStatisticsResponse describeGeoipInstanceStatisticsWithOptions(shared_ptr<DescribeGeoipInstanceStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGeoipInstanceStatisticsResponse describeGeoipInstanceStatistics(shared_ptr<DescribeGeoipInstanceStatisticsRequest> request);
  DescribeIpv4LocationResponse describeIpv4LocationWithOptions(shared_ptr<DescribeIpv4LocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIpv4LocationResponse describeIpv4Location(shared_ptr<DescribeIpv4LocationRequest> request);
  DescribeIpv6LocationResponse describeIpv6LocationWithOptions(shared_ptr<DescribeIpv6LocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIpv6LocationResponse describeIpv6Location(shared_ptr<DescribeIpv6LocationRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Geoip20200101

#endif
