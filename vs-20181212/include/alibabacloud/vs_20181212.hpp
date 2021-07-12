// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_VS20181212_H_
#define ALIBABACLOUD_VS20181212_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Vs20181212 {
class AddDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> protocol{};
  shared_ptr<string> config{};

  AddDeviceRequest() {}

  explicit AddDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
  }


  virtual ~AddDeviceRequest() = default;
};
class AddDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  AddDeviceResponseBody() {}

  explicit AddDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddDeviceResponseBody() = default;
};
class AddDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddDeviceResponseBody> body{};

  AddDeviceResponse() {}

  explicit AddDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~AddDeviceResponse() = default;
};
class AddVsPullStreamInfoConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> appName{};
  shared_ptr<string> streamName{};
  shared_ptr<string> sourceUrl{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> always{};

  AddVsPullStreamInfoConfigRequest() {}

  explicit AddVsPullStreamInfoConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (always) {
      res["Always"] = boost::any(*always);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Always") != m.end() && !m["Always"].empty()) {
      always = make_shared<string>(boost::any_cast<string>(m["Always"]));
    }
  }


  virtual ~AddVsPullStreamInfoConfigRequest() = default;
};
class AddVsPullStreamInfoConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddVsPullStreamInfoConfigResponseBody() {}

  explicit AddVsPullStreamInfoConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddVsPullStreamInfoConfigResponseBody() = default;
};
class AddVsPullStreamInfoConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddVsPullStreamInfoConfigResponseBody> body{};

  AddVsPullStreamInfoConfigResponse() {}

  explicit AddVsPullStreamInfoConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddVsPullStreamInfoConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddVsPullStreamInfoConfigResponseBody>(model1);
      }
    }
  }


  virtual ~AddVsPullStreamInfoConfigResponse() = default;
};
class BatchBindDirectoriesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> deviceId{};

  BatchBindDirectoriesRequest() {}

  explicit BatchBindDirectoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~BatchBindDirectoriesRequest() = default;
};
class BatchBindDirectoriesResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> deviceId{};

  BatchBindDirectoriesResponseBodyResults() {}

  explicit BatchBindDirectoriesResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~BatchBindDirectoriesResponseBodyResults() = default;
};
class BatchBindDirectoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchBindDirectoriesResponseBodyResults>> results{};

  BatchBindDirectoriesResponseBody() {}

  explicit BatchBindDirectoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<BatchBindDirectoriesResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchBindDirectoriesResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<BatchBindDirectoriesResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~BatchBindDirectoriesResponseBody() = default;
};
class BatchBindDirectoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchBindDirectoriesResponseBody> body{};

  BatchBindDirectoriesResponse() {}

  explicit BatchBindDirectoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchBindDirectoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchBindDirectoriesResponseBody>(model1);
      }
    }
  }


  virtual ~BatchBindDirectoriesResponse() = default;
};
class BatchBindParentPlatformDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> parentPlatformId{};
  shared_ptr<string> deviceId{};

  BatchBindParentPlatformDevicesRequest() {}

  explicit BatchBindParentPlatformDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (parentPlatformId) {
      res["ParentPlatformId"] = boost::any(*parentPlatformId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ParentPlatformId") != m.end() && !m["ParentPlatformId"].empty()) {
      parentPlatformId = make_shared<string>(boost::any_cast<string>(m["ParentPlatformId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~BatchBindParentPlatformDevicesRequest() = default;
};
class BatchBindParentPlatformDevicesResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> parentPlatformId{};
  shared_ptr<string> deviceId{};

  BatchBindParentPlatformDevicesResponseBodyResults() {}

  explicit BatchBindParentPlatformDevicesResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (parentPlatformId) {
      res["ParentPlatformId"] = boost::any(*parentPlatformId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("ParentPlatformId") != m.end() && !m["ParentPlatformId"].empty()) {
      parentPlatformId = make_shared<string>(boost::any_cast<string>(m["ParentPlatformId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~BatchBindParentPlatformDevicesResponseBodyResults() = default;
};
class BatchBindParentPlatformDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchBindParentPlatformDevicesResponseBodyResults>> results{};

  BatchBindParentPlatformDevicesResponseBody() {}

  explicit BatchBindParentPlatformDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<BatchBindParentPlatformDevicesResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchBindParentPlatformDevicesResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<BatchBindParentPlatformDevicesResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~BatchBindParentPlatformDevicesResponseBody() = default;
};
class BatchBindParentPlatformDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchBindParentPlatformDevicesResponseBody> body{};

  BatchBindParentPlatformDevicesResponse() {}

  explicit BatchBindParentPlatformDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchBindParentPlatformDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchBindParentPlatformDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~BatchBindParentPlatformDevicesResponse() = default;
};
class BatchBindPurchasedDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> region{};
  shared_ptr<string> groupId{};
  shared_ptr<string> deviceId{};

  BatchBindPurchasedDevicesRequest() {}

  explicit BatchBindPurchasedDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~BatchBindPurchasedDevicesRequest() = default;
};
class BatchBindPurchasedDevicesResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> groupId{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> region{};

  BatchBindPurchasedDevicesResponseBodyResults() {}

  explicit BatchBindPurchasedDevicesResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~BatchBindPurchasedDevicesResponseBodyResults() = default;
};
class BatchBindPurchasedDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchBindPurchasedDevicesResponseBodyResults>> results{};

  BatchBindPurchasedDevicesResponseBody() {}

  explicit BatchBindPurchasedDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<BatchBindPurchasedDevicesResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchBindPurchasedDevicesResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<BatchBindPurchasedDevicesResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~BatchBindPurchasedDevicesResponseBody() = default;
};
class BatchBindPurchasedDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchBindPurchasedDevicesResponseBody> body{};

  BatchBindPurchasedDevicesResponse() {}

  explicit BatchBindPurchasedDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchBindPurchasedDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchBindPurchasedDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~BatchBindPurchasedDevicesResponse() = default;
};
class BatchBindTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<bool> applyAll{};
  shared_ptr<bool> replace{};

  BatchBindTemplateRequest() {}

  explicit BatchBindTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (applyAll) {
      res["ApplyAll"] = boost::any(*applyAll);
    }
    if (replace) {
      res["Replace"] = boost::any(*replace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("ApplyAll") != m.end() && !m["ApplyAll"].empty()) {
      applyAll = make_shared<bool>(boost::any_cast<bool>(m["ApplyAll"]));
    }
    if (m.find("Replace") != m.end() && !m["Replace"].empty()) {
      replace = make_shared<bool>(boost::any_cast<bool>(m["Replace"]));
    }
  }


  virtual ~BatchBindTemplateRequest() = default;
};
class BatchBindTemplateResponseBodyBindings : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> templateId{};

  BatchBindTemplateResponseBodyBindings() {}

  explicit BatchBindTemplateResponseBodyBindings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~BatchBindTemplateResponseBodyBindings() = default;
};
class BatchBindTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchBindTemplateResponseBodyBindings>> bindings{};

  BatchBindTemplateResponseBody() {}

  explicit BatchBindTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bindings) {
      vector<boost::any> temp1;
      for(auto item1:*bindings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bindings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Bindings") != m.end() && !m["Bindings"].empty()) {
      if (typeid(vector<boost::any>) == m["Bindings"].type()) {
        vector<BatchBindTemplateResponseBodyBindings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bindings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchBindTemplateResponseBodyBindings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bindings = make_shared<vector<BatchBindTemplateResponseBodyBindings>>(expect1);
      }
    }
  }


  virtual ~BatchBindTemplateResponseBody() = default;
};
class BatchBindTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchBindTemplateResponseBody> body{};

  BatchBindTemplateResponse() {}

  explicit BatchBindTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchBindTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchBindTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~BatchBindTemplateResponse() = default;
};
class BatchBindTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<bool> applyAll{};
  shared_ptr<bool> replace{};

  BatchBindTemplatesRequest() {}

  explicit BatchBindTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (applyAll) {
      res["ApplyAll"] = boost::any(*applyAll);
    }
    if (replace) {
      res["Replace"] = boost::any(*replace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("ApplyAll") != m.end() && !m["ApplyAll"].empty()) {
      applyAll = make_shared<bool>(boost::any_cast<bool>(m["ApplyAll"]));
    }
    if (m.find("Replace") != m.end() && !m["Replace"].empty()) {
      replace = make_shared<bool>(boost::any_cast<bool>(m["Replace"]));
    }
  }


  virtual ~BatchBindTemplatesRequest() = default;
};
class BatchBindTemplatesResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> templateId{};

  BatchBindTemplatesResponseBodyResults() {}

  explicit BatchBindTemplatesResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~BatchBindTemplatesResponseBodyResults() = default;
};
class BatchBindTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchBindTemplatesResponseBodyResults>> results{};

  BatchBindTemplatesResponseBody() {}

  explicit BatchBindTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<BatchBindTemplatesResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchBindTemplatesResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<BatchBindTemplatesResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~BatchBindTemplatesResponseBody() = default;
};
class BatchBindTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchBindTemplatesResponseBody> body{};

  BatchBindTemplatesResponse() {}

  explicit BatchBindTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchBindTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchBindTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~BatchBindTemplatesResponse() = default;
};
class BatchDeleteDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  BatchDeleteDevicesRequest() {}

  explicit BatchDeleteDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~BatchDeleteDevicesRequest() = default;
};
class BatchDeleteDevicesResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> id{};

  BatchDeleteDevicesResponseBodyResults() {}

  explicit BatchDeleteDevicesResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~BatchDeleteDevicesResponseBodyResults() = default;
};
class BatchDeleteDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchDeleteDevicesResponseBodyResults>> results{};

  BatchDeleteDevicesResponseBody() {}

  explicit BatchDeleteDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<BatchDeleteDevicesResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchDeleteDevicesResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<BatchDeleteDevicesResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~BatchDeleteDevicesResponseBody() = default;
};
class BatchDeleteDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchDeleteDevicesResponseBody> body{};

  BatchDeleteDevicesResponse() {}

  explicit BatchDeleteDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchDeleteDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchDeleteDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~BatchDeleteDevicesResponse() = default;
};
class BatchDeleteVsDomainConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainNames{};
  shared_ptr<string> functionNames{};

  BatchDeleteVsDomainConfigsRequest() {}

  explicit BatchDeleteVsDomainConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainNames) {
      res["DomainNames"] = boost::any(*domainNames);
    }
    if (functionNames) {
      res["FunctionNames"] = boost::any(*functionNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainNames") != m.end() && !m["DomainNames"].empty()) {
      domainNames = make_shared<string>(boost::any_cast<string>(m["DomainNames"]));
    }
    if (m.find("FunctionNames") != m.end() && !m["FunctionNames"].empty()) {
      functionNames = make_shared<string>(boost::any_cast<string>(m["FunctionNames"]));
    }
  }


  virtual ~BatchDeleteVsDomainConfigsRequest() = default;
};
class BatchDeleteVsDomainConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BatchDeleteVsDomainConfigsResponseBody() {}

  explicit BatchDeleteVsDomainConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchDeleteVsDomainConfigsResponseBody() = default;
};
class BatchDeleteVsDomainConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchDeleteVsDomainConfigsResponseBody> body{};

  BatchDeleteVsDomainConfigsResponse() {}

  explicit BatchDeleteVsDomainConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchDeleteVsDomainConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchDeleteVsDomainConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchDeleteVsDomainConfigsResponse() = default;
};
class BatchForbidVsStreamRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> channel{};
  shared_ptr<string> liveStreamType{};
  shared_ptr<string> oneshot{};
  shared_ptr<string> controlStreamAction{};
  shared_ptr<string> resumeTime{};

  BatchForbidVsStreamRequest() {}

  explicit BatchForbidVsStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (liveStreamType) {
      res["LiveStreamType"] = boost::any(*liveStreamType);
    }
    if (oneshot) {
      res["Oneshot"] = boost::any(*oneshot);
    }
    if (controlStreamAction) {
      res["ControlStreamAction"] = boost::any(*controlStreamAction);
    }
    if (resumeTime) {
      res["ResumeTime"] = boost::any(*resumeTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("LiveStreamType") != m.end() && !m["LiveStreamType"].empty()) {
      liveStreamType = make_shared<string>(boost::any_cast<string>(m["LiveStreamType"]));
    }
    if (m.find("Oneshot") != m.end() && !m["Oneshot"].empty()) {
      oneshot = make_shared<string>(boost::any_cast<string>(m["Oneshot"]));
    }
    if (m.find("ControlStreamAction") != m.end() && !m["ControlStreamAction"].empty()) {
      controlStreamAction = make_shared<string>(boost::any_cast<string>(m["ControlStreamAction"]));
    }
    if (m.find("ResumeTime") != m.end() && !m["ResumeTime"].empty()) {
      resumeTime = make_shared<string>(boost::any_cast<string>(m["ResumeTime"]));
    }
  }


  virtual ~BatchForbidVsStreamRequest() = default;
};
class BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels : public Darabonba::Model {
public:
  shared_ptr<vector<string>> channel{};

  BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels() {}

  explicit BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Channel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Channel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channel = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels() = default;
};
class BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo : public Darabonba::Model {
public:
  shared_ptr<string> result{};
  shared_ptr<long> count{};
  shared_ptr<string> detail{};
  shared_ptr<BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels> channels{};

  BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo() {}

  explicit BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (channels) {
      res["Channels"] = channels ? boost::any(channels->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Channels") != m.end() && !m["Channels"].empty()) {
      if (typeid(map<string, boost::any>) == m["Channels"].type()) {
        BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Channels"]));
        channels = make_shared<BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels>(model1);
      }
    }
  }


  virtual ~BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo() = default;
};
class BatchForbidVsStreamResponseBodyForbidResult : public Darabonba::Model {
public:
  shared_ptr<vector<BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo>> forbidResultInfo{};

  BatchForbidVsStreamResponseBodyForbidResult() {}

  explicit BatchForbidVsStreamResponseBodyForbidResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forbidResultInfo) {
      vector<boost::any> temp1;
      for(auto item1:*forbidResultInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ForbidResultInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForbidResultInfo") != m.end() && !m["ForbidResultInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ForbidResultInfo"].type()) {
        vector<BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ForbidResultInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        forbidResultInfo = make_shared<vector<BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo>>(expect1);
      }
    }
  }


  virtual ~BatchForbidVsStreamResponseBodyForbidResult() = default;
};
class BatchForbidVsStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<BatchForbidVsStreamResponseBodyForbidResult> forbidResult{};

  BatchForbidVsStreamResponseBody() {}

  explicit BatchForbidVsStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (forbidResult) {
      res["ForbidResult"] = forbidResult ? boost::any(forbidResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ForbidResult") != m.end() && !m["ForbidResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ForbidResult"].type()) {
        BatchForbidVsStreamResponseBodyForbidResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ForbidResult"]));
        forbidResult = make_shared<BatchForbidVsStreamResponseBodyForbidResult>(model1);
      }
    }
  }


  virtual ~BatchForbidVsStreamResponseBody() = default;
};
class BatchForbidVsStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchForbidVsStreamResponseBody> body{};

  BatchForbidVsStreamResponse() {}

  explicit BatchForbidVsStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchForbidVsStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchForbidVsStreamResponseBody>(model1);
      }
    }
  }


  virtual ~BatchForbidVsStreamResponse() = default;
};
class BatchResumeVsStreamRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> channel{};
  shared_ptr<string> liveStreamType{};
  shared_ptr<string> controlStreamAction{};

  BatchResumeVsStreamRequest() {}

  explicit BatchResumeVsStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (liveStreamType) {
      res["LiveStreamType"] = boost::any(*liveStreamType);
    }
    if (controlStreamAction) {
      res["ControlStreamAction"] = boost::any(*controlStreamAction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("LiveStreamType") != m.end() && !m["LiveStreamType"].empty()) {
      liveStreamType = make_shared<string>(boost::any_cast<string>(m["LiveStreamType"]));
    }
    if (m.find("ControlStreamAction") != m.end() && !m["ControlStreamAction"].empty()) {
      controlStreamAction = make_shared<string>(boost::any_cast<string>(m["ControlStreamAction"]));
    }
  }


  virtual ~BatchResumeVsStreamRequest() = default;
};
class BatchResumeVsStreamResponseBodyResumeResultResumeResultInfoChannels : public Darabonba::Model {
public:
  shared_ptr<vector<string>> channel{};

  BatchResumeVsStreamResponseBodyResumeResultResumeResultInfoChannels() {}

  explicit BatchResumeVsStreamResponseBodyResumeResultResumeResultInfoChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Channel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Channel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channel = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~BatchResumeVsStreamResponseBodyResumeResultResumeResultInfoChannels() = default;
};
class BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo : public Darabonba::Model {
public:
  shared_ptr<string> result{};
  shared_ptr<long> count{};
  shared_ptr<string> detail{};
  shared_ptr<BatchResumeVsStreamResponseBodyResumeResultResumeResultInfoChannels> channels{};

  BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo() {}

  explicit BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (channels) {
      res["Channels"] = channels ? boost::any(channels->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Channels") != m.end() && !m["Channels"].empty()) {
      if (typeid(map<string, boost::any>) == m["Channels"].type()) {
        BatchResumeVsStreamResponseBodyResumeResultResumeResultInfoChannels model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Channels"]));
        channels = make_shared<BatchResumeVsStreamResponseBodyResumeResultResumeResultInfoChannels>(model1);
      }
    }
  }


  virtual ~BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo() = default;
};
class BatchResumeVsStreamResponseBodyResumeResult : public Darabonba::Model {
public:
  shared_ptr<vector<BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo>> resumeResultInfo{};

  BatchResumeVsStreamResponseBodyResumeResult() {}

  explicit BatchResumeVsStreamResponseBodyResumeResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resumeResultInfo) {
      vector<boost::any> temp1;
      for(auto item1:*resumeResultInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResumeResultInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResumeResultInfo") != m.end() && !m["ResumeResultInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ResumeResultInfo"].type()) {
        vector<BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResumeResultInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resumeResultInfo = make_shared<vector<BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo>>(expect1);
      }
    }
  }


  virtual ~BatchResumeVsStreamResponseBodyResumeResult() = default;
};
class BatchResumeVsStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<BatchResumeVsStreamResponseBodyResumeResult> resumeResult{};

  BatchResumeVsStreamResponseBody() {}

  explicit BatchResumeVsStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resumeResult) {
      res["ResumeResult"] = resumeResult ? boost::any(resumeResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResumeResult") != m.end() && !m["ResumeResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResumeResult"].type()) {
        BatchResumeVsStreamResponseBodyResumeResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResumeResult"]));
        resumeResult = make_shared<BatchResumeVsStreamResponseBodyResumeResult>(model1);
      }
    }
  }


  virtual ~BatchResumeVsStreamResponseBody() = default;
};
class BatchResumeVsStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchResumeVsStreamResponseBody> body{};

  BatchResumeVsStreamResponse() {}

  explicit BatchResumeVsStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchResumeVsStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchResumeVsStreamResponseBody>(model1);
      }
    }
  }


  virtual ~BatchResumeVsStreamResponse() = default;
};
class BatchSetVsDomainConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainNames{};
  shared_ptr<string> functions{};

  BatchSetVsDomainConfigsRequest() {}

  explicit BatchSetVsDomainConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainNames) {
      res["DomainNames"] = boost::any(*domainNames);
    }
    if (functions) {
      res["Functions"] = boost::any(*functions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainNames") != m.end() && !m["DomainNames"].empty()) {
      domainNames = make_shared<string>(boost::any_cast<string>(m["DomainNames"]));
    }
    if (m.find("Functions") != m.end() && !m["Functions"].empty()) {
      functions = make_shared<string>(boost::any_cast<string>(m["Functions"]));
    }
  }


  virtual ~BatchSetVsDomainConfigsRequest() = default;
};
class BatchSetVsDomainConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BatchSetVsDomainConfigsResponseBody() {}

  explicit BatchSetVsDomainConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchSetVsDomainConfigsResponseBody() = default;
};
class BatchSetVsDomainConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchSetVsDomainConfigsResponseBody> body{};

  BatchSetVsDomainConfigsResponse() {}

  explicit BatchSetVsDomainConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchSetVsDomainConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchSetVsDomainConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchSetVsDomainConfigsResponse() = default;
};
class BatchStartDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  BatchStartDevicesRequest() {}

  explicit BatchStartDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~BatchStartDevicesRequest() = default;
};
class BatchStartDevicesResponseBodyResultsStreams : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  BatchStartDevicesResponseBodyResultsStreams() {}

  explicit BatchStartDevicesResponseBodyResultsStreams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~BatchStartDevicesResponseBodyResultsStreams() = default;
};
class BatchStartDevicesResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<vector<BatchStartDevicesResponseBodyResultsStreams>> streams{};

  BatchStartDevicesResponseBodyResults() {}

  explicit BatchStartDevicesResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (streams) {
      vector<boost::any> temp1;
      for(auto item1:*streams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Streams"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Streams") != m.end() && !m["Streams"].empty()) {
      if (typeid(vector<boost::any>) == m["Streams"].type()) {
        vector<BatchStartDevicesResponseBodyResultsStreams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Streams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchStartDevicesResponseBodyResultsStreams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        streams = make_shared<vector<BatchStartDevicesResponseBodyResultsStreams>>(expect1);
      }
    }
  }


  virtual ~BatchStartDevicesResponseBodyResults() = default;
};
class BatchStartDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchStartDevicesResponseBodyResults>> results{};

  BatchStartDevicesResponseBody() {}

  explicit BatchStartDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<BatchStartDevicesResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchStartDevicesResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<BatchStartDevicesResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~BatchStartDevicesResponseBody() = default;
};
class BatchStartDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchStartDevicesResponseBody> body{};

  BatchStartDevicesResponse() {}

  explicit BatchStartDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchStartDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchStartDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~BatchStartDevicesResponse() = default;
};
class BatchStartStreamsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  BatchStartStreamsRequest() {}

  explicit BatchStartStreamsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~BatchStartStreamsRequest() = default;
};
class BatchStartStreamsResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  BatchStartStreamsResponseBodyResults() {}

  explicit BatchStartStreamsResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~BatchStartStreamsResponseBodyResults() = default;
};
class BatchStartStreamsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchStartStreamsResponseBodyResults>> results{};

  BatchStartStreamsResponseBody() {}

  explicit BatchStartStreamsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<BatchStartStreamsResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchStartStreamsResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<BatchStartStreamsResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~BatchStartStreamsResponseBody() = default;
};
class BatchStartStreamsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchStartStreamsResponseBody> body{};

  BatchStartStreamsResponse() {}

  explicit BatchStartStreamsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchStartStreamsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchStartStreamsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchStartStreamsResponse() = default;
};
class BatchStopDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> startTime{};

  BatchStopDevicesRequest() {}

  explicit BatchStopDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~BatchStopDevicesRequest() = default;
};
class BatchStopDevicesResponseBodyResultsStreams : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  BatchStopDevicesResponseBodyResultsStreams() {}

  explicit BatchStopDevicesResponseBodyResultsStreams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~BatchStopDevicesResponseBodyResultsStreams() = default;
};
class BatchStopDevicesResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<vector<BatchStopDevicesResponseBodyResultsStreams>> streams{};

  BatchStopDevicesResponseBodyResults() {}

  explicit BatchStopDevicesResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (streams) {
      vector<boost::any> temp1;
      for(auto item1:*streams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Streams"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Streams") != m.end() && !m["Streams"].empty()) {
      if (typeid(vector<boost::any>) == m["Streams"].type()) {
        vector<BatchStopDevicesResponseBodyResultsStreams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Streams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchStopDevicesResponseBodyResultsStreams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        streams = make_shared<vector<BatchStopDevicesResponseBodyResultsStreams>>(expect1);
      }
    }
  }


  virtual ~BatchStopDevicesResponseBodyResults() = default;
};
class BatchStopDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchStopDevicesResponseBodyResults>> results{};

  BatchStopDevicesResponseBody() {}

  explicit BatchStopDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<BatchStopDevicesResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchStopDevicesResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<BatchStopDevicesResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~BatchStopDevicesResponseBody() = default;
};
class BatchStopDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchStopDevicesResponseBody> body{};

  BatchStopDevicesResponse() {}

  explicit BatchStopDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchStopDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchStopDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~BatchStopDevicesResponse() = default;
};
class BatchStopStreamsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> startTime{};

  BatchStopStreamsRequest() {}

  explicit BatchStopStreamsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~BatchStopStreamsRequest() = default;
};
class BatchStopStreamsResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  BatchStopStreamsResponseBodyResults() {}

  explicit BatchStopStreamsResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~BatchStopStreamsResponseBodyResults() = default;
};
class BatchStopStreamsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchStopStreamsResponseBodyResults>> results{};

  BatchStopStreamsResponseBody() {}

  explicit BatchStopStreamsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<BatchStopStreamsResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchStopStreamsResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<BatchStopStreamsResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~BatchStopStreamsResponseBody() = default;
};
class BatchStopStreamsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchStopStreamsResponseBody> body{};

  BatchStopStreamsResponse() {}

  explicit BatchStopStreamsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchStopStreamsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchStopStreamsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchStopStreamsResponse() = default;
};
class BatchUnbindDirectoriesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> deviceId{};

  BatchUnbindDirectoriesRequest() {}

  explicit BatchUnbindDirectoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~BatchUnbindDirectoriesRequest() = default;
};
class BatchUnbindDirectoriesResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> deviceId{};

  BatchUnbindDirectoriesResponseBodyResults() {}

  explicit BatchUnbindDirectoriesResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~BatchUnbindDirectoriesResponseBodyResults() = default;
};
class BatchUnbindDirectoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchUnbindDirectoriesResponseBodyResults>> results{};

  BatchUnbindDirectoriesResponseBody() {}

  explicit BatchUnbindDirectoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<BatchUnbindDirectoriesResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchUnbindDirectoriesResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<BatchUnbindDirectoriesResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~BatchUnbindDirectoriesResponseBody() = default;
};
class BatchUnbindDirectoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchUnbindDirectoriesResponseBody> body{};

  BatchUnbindDirectoriesResponse() {}

  explicit BatchUnbindDirectoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchUnbindDirectoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchUnbindDirectoriesResponseBody>(model1);
      }
    }
  }


  virtual ~BatchUnbindDirectoriesResponse() = default;
};
class BatchUnbindParentPlatformDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> parentPlatformId{};
  shared_ptr<string> deviceId{};

  BatchUnbindParentPlatformDevicesRequest() {}

  explicit BatchUnbindParentPlatformDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (parentPlatformId) {
      res["ParentPlatformId"] = boost::any(*parentPlatformId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ParentPlatformId") != m.end() && !m["ParentPlatformId"].empty()) {
      parentPlatformId = make_shared<string>(boost::any_cast<string>(m["ParentPlatformId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~BatchUnbindParentPlatformDevicesRequest() = default;
};
class BatchUnbindParentPlatformDevicesResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> parentPlatformId{};
  shared_ptr<string> deviceId{};

  BatchUnbindParentPlatformDevicesResponseBodyResults() {}

  explicit BatchUnbindParentPlatformDevicesResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (parentPlatformId) {
      res["ParentPlatformId"] = boost::any(*parentPlatformId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("ParentPlatformId") != m.end() && !m["ParentPlatformId"].empty()) {
      parentPlatformId = make_shared<string>(boost::any_cast<string>(m["ParentPlatformId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~BatchUnbindParentPlatformDevicesResponseBodyResults() = default;
};
class BatchUnbindParentPlatformDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchUnbindParentPlatformDevicesResponseBodyResults>> results{};

  BatchUnbindParentPlatformDevicesResponseBody() {}

  explicit BatchUnbindParentPlatformDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<BatchUnbindParentPlatformDevicesResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchUnbindParentPlatformDevicesResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<BatchUnbindParentPlatformDevicesResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~BatchUnbindParentPlatformDevicesResponseBody() = default;
};
class BatchUnbindParentPlatformDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchUnbindParentPlatformDevicesResponseBody> body{};

  BatchUnbindParentPlatformDevicesResponse() {}

  explicit BatchUnbindParentPlatformDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchUnbindParentPlatformDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchUnbindParentPlatformDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~BatchUnbindParentPlatformDevicesResponse() = default;
};
class BatchUnbindPurchasedDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> deviceId{};

  BatchUnbindPurchasedDevicesRequest() {}

  explicit BatchUnbindPurchasedDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~BatchUnbindPurchasedDevicesRequest() = default;
};
class BatchUnbindPurchasedDevicesResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> deviceId{};

  BatchUnbindPurchasedDevicesResponseBodyResults() {}

  explicit BatchUnbindPurchasedDevicesResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~BatchUnbindPurchasedDevicesResponseBodyResults() = default;
};
class BatchUnbindPurchasedDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchUnbindPurchasedDevicesResponseBodyResults>> results{};

  BatchUnbindPurchasedDevicesResponseBody() {}

  explicit BatchUnbindPurchasedDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<BatchUnbindPurchasedDevicesResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchUnbindPurchasedDevicesResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<BatchUnbindPurchasedDevicesResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~BatchUnbindPurchasedDevicesResponseBody() = default;
};
class BatchUnbindPurchasedDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchUnbindPurchasedDevicesResponseBody> body{};

  BatchUnbindPurchasedDevicesResponse() {}

  explicit BatchUnbindPurchasedDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchUnbindPurchasedDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchUnbindPurchasedDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~BatchUnbindPurchasedDevicesResponse() = default;
};
class BatchUnbindTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};

  BatchUnbindTemplateRequest() {}

  explicit BatchUnbindTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~BatchUnbindTemplateRequest() = default;
};
class BatchUnbindTemplateResponseBodyBindings : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> templateId{};

  BatchUnbindTemplateResponseBodyBindings() {}

  explicit BatchUnbindTemplateResponseBodyBindings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~BatchUnbindTemplateResponseBodyBindings() = default;
};
class BatchUnbindTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchUnbindTemplateResponseBodyBindings>> bindings{};

  BatchUnbindTemplateResponseBody() {}

  explicit BatchUnbindTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bindings) {
      vector<boost::any> temp1;
      for(auto item1:*bindings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bindings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Bindings") != m.end() && !m["Bindings"].empty()) {
      if (typeid(vector<boost::any>) == m["Bindings"].type()) {
        vector<BatchUnbindTemplateResponseBodyBindings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bindings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchUnbindTemplateResponseBodyBindings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bindings = make_shared<vector<BatchUnbindTemplateResponseBodyBindings>>(expect1);
      }
    }
  }


  virtual ~BatchUnbindTemplateResponseBody() = default;
};
class BatchUnbindTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchUnbindTemplateResponseBody> body{};

  BatchUnbindTemplateResponse() {}

  explicit BatchUnbindTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchUnbindTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchUnbindTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~BatchUnbindTemplateResponse() = default;
};
class BatchUnbindTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};

  BatchUnbindTemplatesRequest() {}

  explicit BatchUnbindTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~BatchUnbindTemplatesRequest() = default;
};
class BatchUnbindTemplatesResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> templateType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> templateId{};

  BatchUnbindTemplatesResponseBodyResults() {}

  explicit BatchUnbindTemplatesResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~BatchUnbindTemplatesResponseBodyResults() = default;
};
class BatchUnbindTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchUnbindTemplatesResponseBodyResults>> results{};

  BatchUnbindTemplatesResponseBody() {}

  explicit BatchUnbindTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<BatchUnbindTemplatesResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchUnbindTemplatesResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<BatchUnbindTemplatesResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~BatchUnbindTemplatesResponseBody() = default;
};
class BatchUnbindTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchUnbindTemplatesResponseBody> body{};

  BatchUnbindTemplatesResponse() {}

  explicit BatchUnbindTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchUnbindTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchUnbindTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~BatchUnbindTemplatesResponse() = default;
};
class BindDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> deviceId{};

  BindDirectoryRequest() {}

  explicit BindDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~BindDirectoryRequest() = default;
};
class BindDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindDirectoryResponseBody() {}

  explicit BindDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BindDirectoryResponseBody() = default;
};
class BindDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BindDirectoryResponseBody> body{};

  BindDirectoryResponse() {}

  explicit BindDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~BindDirectoryResponse() = default;
};
class BindParentPlatformDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> parentPlatformId{};
  shared_ptr<string> deviceId{};

  BindParentPlatformDeviceRequest() {}

  explicit BindParentPlatformDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (parentPlatformId) {
      res["ParentPlatformId"] = boost::any(*parentPlatformId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ParentPlatformId") != m.end() && !m["ParentPlatformId"].empty()) {
      parentPlatformId = make_shared<string>(boost::any_cast<string>(m["ParentPlatformId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~BindParentPlatformDeviceRequest() = default;
};
class BindParentPlatformDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindParentPlatformDeviceResponseBody() {}

  explicit BindParentPlatformDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BindParentPlatformDeviceResponseBody() = default;
};
class BindParentPlatformDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BindParentPlatformDeviceResponseBody> body{};

  BindParentPlatformDeviceResponse() {}

  explicit BindParentPlatformDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindParentPlatformDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindParentPlatformDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~BindParentPlatformDeviceResponse() = default;
};
class BindPurchasedDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> region{};
  shared_ptr<string> groupId{};
  shared_ptr<string> deviceId{};

  BindPurchasedDeviceRequest() {}

  explicit BindPurchasedDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~BindPurchasedDeviceRequest() = default;
};
class BindPurchasedDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindPurchasedDeviceResponseBody() {}

  explicit BindPurchasedDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BindPurchasedDeviceResponseBody() = default;
};
class BindPurchasedDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BindPurchasedDeviceResponseBody> body{};

  BindPurchasedDeviceResponse() {}

  explicit BindPurchasedDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindPurchasedDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindPurchasedDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~BindPurchasedDeviceResponse() = default;
};
class BindTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<bool> applyAll{};
  shared_ptr<bool> replace{};

  BindTemplateRequest() {}

  explicit BindTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (applyAll) {
      res["ApplyAll"] = boost::any(*applyAll);
    }
    if (replace) {
      res["Replace"] = boost::any(*replace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("ApplyAll") != m.end() && !m["ApplyAll"].empty()) {
      applyAll = make_shared<bool>(boost::any_cast<bool>(m["ApplyAll"]));
    }
    if (m.find("Replace") != m.end() && !m["Replace"].empty()) {
      replace = make_shared<bool>(boost::any_cast<bool>(m["Replace"]));
    }
  }


  virtual ~BindTemplateRequest() = default;
};
class BindTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> templateId{};

  BindTemplateResponseBody() {}

  explicit BindTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~BindTemplateResponseBody() = default;
};
class BindTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BindTemplateResponseBody> body{};

  BindTemplateResponse() {}

  explicit BindTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~BindTemplateResponse() = default;
};
class ContinuousAdjustRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> iris{};
  shared_ptr<string> focus{};
  shared_ptr<string> subProtocol{};

  ContinuousAdjustRequest() {}

  explicit ContinuousAdjustRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (iris) {
      res["Iris"] = boost::any(*iris);
    }
    if (focus) {
      res["Focus"] = boost::any(*focus);
    }
    if (subProtocol) {
      res["SubProtocol"] = boost::any(*subProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Iris") != m.end() && !m["Iris"].empty()) {
      iris = make_shared<string>(boost::any_cast<string>(m["Iris"]));
    }
    if (m.find("Focus") != m.end() && !m["Focus"].empty()) {
      focus = make_shared<string>(boost::any_cast<string>(m["Focus"]));
    }
    if (m.find("SubProtocol") != m.end() && !m["SubProtocol"].empty()) {
      subProtocol = make_shared<string>(boost::any_cast<string>(m["SubProtocol"]));
    }
  }


  virtual ~ContinuousAdjustRequest() = default;
};
class ContinuousAdjustResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  ContinuousAdjustResponseBody() {}

  explicit ContinuousAdjustResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ContinuousAdjustResponseBody() = default;
};
class ContinuousAdjustResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ContinuousAdjustResponseBody> body{};

  ContinuousAdjustResponse() {}

  explicit ContinuousAdjustResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ContinuousAdjustResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ContinuousAdjustResponseBody>(model1);
      }
    }
  }


  virtual ~ContinuousAdjustResponse() = default;
};
class ContinuousMoveRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> pan{};
  shared_ptr<string> tilt{};
  shared_ptr<string> zoom{};
  shared_ptr<string> subProtocol{};

  ContinuousMoveRequest() {}

  explicit ContinuousMoveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (pan) {
      res["Pan"] = boost::any(*pan);
    }
    if (tilt) {
      res["Tilt"] = boost::any(*tilt);
    }
    if (zoom) {
      res["Zoom"] = boost::any(*zoom);
    }
    if (subProtocol) {
      res["SubProtocol"] = boost::any(*subProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Pan") != m.end() && !m["Pan"].empty()) {
      pan = make_shared<string>(boost::any_cast<string>(m["Pan"]));
    }
    if (m.find("Tilt") != m.end() && !m["Tilt"].empty()) {
      tilt = make_shared<string>(boost::any_cast<string>(m["Tilt"]));
    }
    if (m.find("Zoom") != m.end() && !m["Zoom"].empty()) {
      zoom = make_shared<string>(boost::any_cast<string>(m["Zoom"]));
    }
    if (m.find("SubProtocol") != m.end() && !m["SubProtocol"].empty()) {
      subProtocol = make_shared<string>(boost::any_cast<string>(m["SubProtocol"]));
    }
  }


  virtual ~ContinuousMoveRequest() = default;
};
class ContinuousMoveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  ContinuousMoveResponseBody() {}

  explicit ContinuousMoveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ContinuousMoveResponseBody() = default;
};
class ContinuousMoveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ContinuousMoveResponseBody> body{};

  ContinuousMoveResponse() {}

  explicit ContinuousMoveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ContinuousMoveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ContinuousMoveResponseBody>(model1);
      }
    }
  }


  virtual ~ContinuousMoveResponse() = default;
};
class CreateDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> parentId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> type{};
  shared_ptr<bool> autoStart{};
  shared_ptr<string> gbId{};
  shared_ptr<string> ip{};
  shared_ptr<long> port{};
  shared_ptr<string> url{};
  shared_ptr<string> username{};
  shared_ptr<string> password{};
  shared_ptr<string> vendor{};
  shared_ptr<string> dsn{};
  shared_ptr<string> longitude{};
  shared_ptr<string> latitude{};
  shared_ptr<bool> autoPos{};
  shared_ptr<long> posInterval{};
  shared_ptr<string> alarmMethod{};
  shared_ptr<string> params{};

  CreateDeviceRequest() {}

  explicit CreateDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (autoStart) {
      res["AutoStart"] = boost::any(*autoStart);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    if (dsn) {
      res["Dsn"] = boost::any(*dsn);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (autoPos) {
      res["AutoPos"] = boost::any(*autoPos);
    }
    if (posInterval) {
      res["PosInterval"] = boost::any(*posInterval);
    }
    if (alarmMethod) {
      res["AlarmMethod"] = boost::any(*alarmMethod);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("AutoStart") != m.end() && !m["AutoStart"].empty()) {
      autoStart = make_shared<bool>(boost::any_cast<bool>(m["AutoStart"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
    if (m.find("Dsn") != m.end() && !m["Dsn"].empty()) {
      dsn = make_shared<string>(boost::any_cast<string>(m["Dsn"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("AutoPos") != m.end() && !m["AutoPos"].empty()) {
      autoPos = make_shared<bool>(boost::any_cast<bool>(m["AutoPos"]));
    }
    if (m.find("PosInterval") != m.end() && !m["PosInterval"].empty()) {
      posInterval = make_shared<long>(boost::any_cast<long>(m["PosInterval"]));
    }
    if (m.find("AlarmMethod") != m.end() && !m["AlarmMethod"].empty()) {
      alarmMethod = make_shared<string>(boost::any_cast<string>(m["AlarmMethod"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
  }


  virtual ~CreateDeviceRequest() = default;
};
class CreateDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateDeviceResponseBody() {}

  explicit CreateDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDeviceResponseBody() = default;
};
class CreateDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDeviceResponseBody> body{};

  CreateDeviceResponse() {}

  explicit CreateDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDeviceResponse() = default;
};
class CreateDeviceAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<long> channelId{};
  shared_ptr<long> objectType{};
  shared_ptr<long> alarm{};
  shared_ptr<long> subAlarm{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<long> expire{};

  CreateDeviceAlarmRequest() {}

  explicit CreateDeviceAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (alarm) {
      res["Alarm"] = boost::any(*alarm);
    }
    if (subAlarm) {
      res["SubAlarm"] = boost::any(*subAlarm);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<long>(boost::any_cast<long>(m["ChannelId"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<long>(boost::any_cast<long>(m["ObjectType"]));
    }
    if (m.find("Alarm") != m.end() && !m["Alarm"].empty()) {
      alarm = make_shared<long>(boost::any_cast<long>(m["Alarm"]));
    }
    if (m.find("SubAlarm") != m.end() && !m["SubAlarm"].empty()) {
      subAlarm = make_shared<long>(boost::any_cast<long>(m["SubAlarm"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
  }


  virtual ~CreateDeviceAlarmRequest() = default;
};
class CreateDeviceAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> alarmId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> expire{};
  shared_ptr<long> alarmDelay{};

  CreateDeviceAlarmResponseBody() {}

  explicit CreateDeviceAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (alarmDelay) {
      res["AlarmDelay"] = boost::any(*alarmDelay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<string>(boost::any_cast<string>(m["AlarmId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
    if (m.find("AlarmDelay") != m.end() && !m["AlarmDelay"].empty()) {
      alarmDelay = make_shared<long>(boost::any_cast<long>(m["AlarmDelay"]));
    }
  }


  virtual ~CreateDeviceAlarmResponseBody() = default;
};
class CreateDeviceAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDeviceAlarmResponseBody> body{};

  CreateDeviceAlarmResponse() {}

  explicit CreateDeviceAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDeviceAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDeviceAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDeviceAlarmResponse() = default;
};
class CreateDeviceSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> streamId{};
  shared_ptr<string> mode{};
  shared_ptr<string> snapshotConfig{};

  CreateDeviceSnapshotRequest() {}

  explicit CreateDeviceSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (streamId) {
      res["StreamId"] = boost::any(*streamId);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (snapshotConfig) {
      res["SnapshotConfig"] = boost::any(*snapshotConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("StreamId") != m.end() && !m["StreamId"].empty()) {
      streamId = make_shared<string>(boost::any_cast<string>(m["StreamId"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("SnapshotConfig") != m.end() && !m["SnapshotConfig"].empty()) {
      snapshotConfig = make_shared<string>(boost::any_cast<string>(m["SnapshotConfig"]));
    }
  }


  virtual ~CreateDeviceSnapshotRequest() = default;
};
class CreateDeviceSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateDeviceSnapshotResponseBody() {}

  explicit CreateDeviceSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDeviceSnapshotResponseBody() = default;
};
class CreateDeviceSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDeviceSnapshotResponseBody> body{};

  CreateDeviceSnapshotResponse() {}

  explicit CreateDeviceSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDeviceSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDeviceSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDeviceSnapshotResponse() = default;
};
class CreateDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> parentId{};

  CreateDirectoryRequest() {}

  explicit CreateDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
  }


  virtual ~CreateDirectoryRequest() = default;
};
class CreateDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateDirectoryResponseBody() {}

  explicit CreateDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDirectoryResponseBody() = default;
};
class CreateDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDirectoryResponseBody> body{};

  CreateDirectoryResponse() {}

  explicit CreateDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDirectoryResponse() = default;
};
class CreateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> app{};
  shared_ptr<string> region{};
  shared_ptr<string> inProtocol{};
  shared_ptr<string> outProtocol{};
  shared_ptr<string> pushDomain{};
  shared_ptr<string> playDomain{};
  shared_ptr<bool> lazyPull{};
  shared_ptr<string> callback{};
  shared_ptr<long> captureInterval{};
  shared_ptr<long> captureImage{};
  shared_ptr<long> captureVideo{};
  shared_ptr<string> captureOssBucket{};
  shared_ptr<string> captureOssPath{};

  CreateGroupRequest() {}

  explicit CreateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (app) {
      res["App"] = boost::any(*app);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (inProtocol) {
      res["InProtocol"] = boost::any(*inProtocol);
    }
    if (outProtocol) {
      res["OutProtocol"] = boost::any(*outProtocol);
    }
    if (pushDomain) {
      res["PushDomain"] = boost::any(*pushDomain);
    }
    if (playDomain) {
      res["PlayDomain"] = boost::any(*playDomain);
    }
    if (lazyPull) {
      res["LazyPull"] = boost::any(*lazyPull);
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (captureInterval) {
      res["CaptureInterval"] = boost::any(*captureInterval);
    }
    if (captureImage) {
      res["CaptureImage"] = boost::any(*captureImage);
    }
    if (captureVideo) {
      res["CaptureVideo"] = boost::any(*captureVideo);
    }
    if (captureOssBucket) {
      res["CaptureOssBucket"] = boost::any(*captureOssBucket);
    }
    if (captureOssPath) {
      res["CaptureOssPath"] = boost::any(*captureOssPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("App") != m.end() && !m["App"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("InProtocol") != m.end() && !m["InProtocol"].empty()) {
      inProtocol = make_shared<string>(boost::any_cast<string>(m["InProtocol"]));
    }
    if (m.find("OutProtocol") != m.end() && !m["OutProtocol"].empty()) {
      outProtocol = make_shared<string>(boost::any_cast<string>(m["OutProtocol"]));
    }
    if (m.find("PushDomain") != m.end() && !m["PushDomain"].empty()) {
      pushDomain = make_shared<string>(boost::any_cast<string>(m["PushDomain"]));
    }
    if (m.find("PlayDomain") != m.end() && !m["PlayDomain"].empty()) {
      playDomain = make_shared<string>(boost::any_cast<string>(m["PlayDomain"]));
    }
    if (m.find("LazyPull") != m.end() && !m["LazyPull"].empty()) {
      lazyPull = make_shared<bool>(boost::any_cast<bool>(m["LazyPull"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
    if (m.find("CaptureInterval") != m.end() && !m["CaptureInterval"].empty()) {
      captureInterval = make_shared<long>(boost::any_cast<long>(m["CaptureInterval"]));
    }
    if (m.find("CaptureImage") != m.end() && !m["CaptureImage"].empty()) {
      captureImage = make_shared<long>(boost::any_cast<long>(m["CaptureImage"]));
    }
    if (m.find("CaptureVideo") != m.end() && !m["CaptureVideo"].empty()) {
      captureVideo = make_shared<long>(boost::any_cast<long>(m["CaptureVideo"]));
    }
    if (m.find("CaptureOssBucket") != m.end() && !m["CaptureOssBucket"].empty()) {
      captureOssBucket = make_shared<string>(boost::any_cast<string>(m["CaptureOssBucket"]));
    }
    if (m.find("CaptureOssPath") != m.end() && !m["CaptureOssPath"].empty()) {
      captureOssPath = make_shared<string>(boost::any_cast<string>(m["CaptureOssPath"]));
    }
  }


  virtual ~CreateGroupRequest() = default;
};
class CreateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gbId{};
  shared_ptr<string> gbIp{};
  shared_ptr<string> requestId{};
  shared_ptr<long> gbPort{};
  shared_ptr<string> id{};

  CreateGroupResponseBody() {}

  explicit CreateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (gbIp) {
      res["GbIp"] = boost::any(*gbIp);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (gbPort) {
      res["GbPort"] = boost::any(*gbPort);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("GbIp") != m.end() && !m["GbIp"].empty()) {
      gbIp = make_shared<string>(boost::any_cast<string>(m["GbIp"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("GbPort") != m.end() && !m["GbPort"].empty()) {
      gbPort = make_shared<long>(boost::any_cast<long>(m["GbPort"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateGroupResponseBody() = default;
};
class CreateGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateGroupResponseBody> body{};

  CreateGroupResponse() {}

  explicit CreateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGroupResponse() = default;
};
class CreateParentPlatformRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> protocol{};
  shared_ptr<string> gbId{};
  shared_ptr<string> ip{};
  shared_ptr<long> port{};
  shared_ptr<bool> clientAuth{};
  shared_ptr<string> clientUsername{};
  shared_ptr<string> clientPassword{};
  shared_ptr<bool> autoStart{};

  CreateParentPlatformRequest() {}

  explicit CreateParentPlatformRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (clientAuth) {
      res["ClientAuth"] = boost::any(*clientAuth);
    }
    if (clientUsername) {
      res["ClientUsername"] = boost::any(*clientUsername);
    }
    if (clientPassword) {
      res["ClientPassword"] = boost::any(*clientPassword);
    }
    if (autoStart) {
      res["AutoStart"] = boost::any(*autoStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ClientAuth") != m.end() && !m["ClientAuth"].empty()) {
      clientAuth = make_shared<bool>(boost::any_cast<bool>(m["ClientAuth"]));
    }
    if (m.find("ClientUsername") != m.end() && !m["ClientUsername"].empty()) {
      clientUsername = make_shared<string>(boost::any_cast<string>(m["ClientUsername"]));
    }
    if (m.find("ClientPassword") != m.end() && !m["ClientPassword"].empty()) {
      clientPassword = make_shared<string>(boost::any_cast<string>(m["ClientPassword"]));
    }
    if (m.find("AutoStart") != m.end() && !m["AutoStart"].empty()) {
      autoStart = make_shared<bool>(boost::any_cast<bool>(m["AutoStart"]));
    }
  }


  virtual ~CreateParentPlatformRequest() = default;
};
class CreateParentPlatformResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateParentPlatformResponseBody() {}

  explicit CreateParentPlatformResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateParentPlatformResponseBody() = default;
};
class CreateParentPlatformResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateParentPlatformResponseBody> body{};

  CreateParentPlatformResponse() {}

  explicit CreateParentPlatformResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateParentPlatformResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateParentPlatformResponseBody>(model1);
      }
    }
  }


  virtual ~CreateParentPlatformResponse() = default;
};
class CreateStreamSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> location{};

  CreateStreamSnapshotRequest() {}

  explicit CreateStreamSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
  }


  virtual ~CreateStreamSnapshotRequest() = default;
};
class CreateStreamSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ossObject{};
  shared_ptr<string> requestId{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<string> url{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> format{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> id{};

  CreateStreamSnapshotResponseBody() {}

  explicit CreateStreamSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossObject) {
      res["OssObject"] = boost::any(*ossObject);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OssObject") != m.end() && !m["OssObject"].empty()) {
      ossObject = make_shared<string>(boost::any_cast<string>(m["OssObject"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateStreamSnapshotResponseBody() = default;
};
class CreateStreamSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateStreamSnapshotResponseBody> body{};

  CreateStreamSnapshotResponse() {}

  explicit CreateStreamSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateStreamSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateStreamSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~CreateStreamSnapshotResponse() = default;
};
class CreateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> type{};
  shared_ptr<string> region{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> ossFilePrefix{};
  shared_ptr<string> trigger{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> interval{};
  shared_ptr<long> retention{};
  shared_ptr<string> fileFormat{};
  shared_ptr<string> jpgOverwrite{};
  shared_ptr<string> jpgSequence{};
  shared_ptr<string> jpgOnDemand{};
  shared_ptr<string> mp4{};
  shared_ptr<string> flv{};
  shared_ptr<string> hlsM3u8{};
  shared_ptr<string> hlsTs{};
  shared_ptr<string> callback{};
  shared_ptr<string> transConfigsJSON{};

  CreateTemplateRequest() {}

  explicit CreateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (ossFilePrefix) {
      res["OssFilePrefix"] = boost::any(*ossFilePrefix);
    }
    if (trigger) {
      res["Trigger"] = boost::any(*trigger);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (fileFormat) {
      res["FileFormat"] = boost::any(*fileFormat);
    }
    if (jpgOverwrite) {
      res["JpgOverwrite"] = boost::any(*jpgOverwrite);
    }
    if (jpgSequence) {
      res["JpgSequence"] = boost::any(*jpgSequence);
    }
    if (jpgOnDemand) {
      res["JpgOnDemand"] = boost::any(*jpgOnDemand);
    }
    if (mp4) {
      res["Mp4"] = boost::any(*mp4);
    }
    if (flv) {
      res["Flv"] = boost::any(*flv);
    }
    if (hlsM3u8) {
      res["HlsM3u8"] = boost::any(*hlsM3u8);
    }
    if (hlsTs) {
      res["HlsTs"] = boost::any(*hlsTs);
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (transConfigsJSON) {
      res["TransConfigsJSON"] = boost::any(*transConfigsJSON);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("OssFilePrefix") != m.end() && !m["OssFilePrefix"].empty()) {
      ossFilePrefix = make_shared<string>(boost::any_cast<string>(m["OssFilePrefix"]));
    }
    if (m.find("Trigger") != m.end() && !m["Trigger"].empty()) {
      trigger = make_shared<string>(boost::any_cast<string>(m["Trigger"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("FileFormat") != m.end() && !m["FileFormat"].empty()) {
      fileFormat = make_shared<string>(boost::any_cast<string>(m["FileFormat"]));
    }
    if (m.find("JpgOverwrite") != m.end() && !m["JpgOverwrite"].empty()) {
      jpgOverwrite = make_shared<string>(boost::any_cast<string>(m["JpgOverwrite"]));
    }
    if (m.find("JpgSequence") != m.end() && !m["JpgSequence"].empty()) {
      jpgSequence = make_shared<string>(boost::any_cast<string>(m["JpgSequence"]));
    }
    if (m.find("JpgOnDemand") != m.end() && !m["JpgOnDemand"].empty()) {
      jpgOnDemand = make_shared<string>(boost::any_cast<string>(m["JpgOnDemand"]));
    }
    if (m.find("Mp4") != m.end() && !m["Mp4"].empty()) {
      mp4 = make_shared<string>(boost::any_cast<string>(m["Mp4"]));
    }
    if (m.find("Flv") != m.end() && !m["Flv"].empty()) {
      flv = make_shared<string>(boost::any_cast<string>(m["Flv"]));
    }
    if (m.find("HlsM3u8") != m.end() && !m["HlsM3u8"].empty()) {
      hlsM3u8 = make_shared<string>(boost::any_cast<string>(m["HlsM3u8"]));
    }
    if (m.find("HlsTs") != m.end() && !m["HlsTs"].empty()) {
      hlsTs = make_shared<string>(boost::any_cast<string>(m["HlsTs"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
    if (m.find("TransConfigsJSON") != m.end() && !m["TransConfigsJSON"].empty()) {
      transConfigsJSON = make_shared<string>(boost::any_cast<string>(m["TransConfigsJSON"]));
    }
  }


  virtual ~CreateTemplateRequest() = default;
};
class CreateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateTemplateResponseBody() {}

  explicit CreateTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateTemplateResponseBody() = default;
};
class CreateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTemplateResponseBody> body{};

  CreateTemplateResponse() {}

  explicit CreateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTemplateResponse() = default;
};
class DeleteBucketRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> bucketName{};

  DeleteBucketRequest() {}

  explicit DeleteBucketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
  }


  virtual ~DeleteBucketRequest() = default;
};
class DeleteBucketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteBucketResponseBody() {}

  explicit DeleteBucketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteBucketResponseBody() = default;
};
class DeleteBucketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteBucketResponseBody> body{};

  DeleteBucketResponse() {}

  explicit DeleteBucketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBucketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBucketResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBucketResponse() = default;
};
class DeleteDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  DeleteDeviceRequest() {}

  explicit DeleteDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DeleteDeviceRequest() = default;
};
class DeleteDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDeviceResponseBody() {}

  explicit DeleteDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDeviceResponseBody() = default;
};
class DeleteDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDeviceResponseBody> body{};

  DeleteDeviceResponse() {}

  explicit DeleteDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDeviceResponse() = default;
};
class DeleteDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  DeleteDirectoryRequest() {}

  explicit DeleteDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DeleteDirectoryRequest() = default;
};
class DeleteDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDirectoryResponseBody() {}

  explicit DeleteDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDirectoryResponseBody() = default;
};
class DeleteDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDirectoryResponseBody> body{};

  DeleteDirectoryResponse() {}

  explicit DeleteDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDirectoryResponse() = default;
};
class DeleteGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  DeleteGroupRequest() {}

  explicit DeleteGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DeleteGroupRequest() = default;
};
class DeleteGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGroupResponseBody() {}

  explicit DeleteGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteGroupResponseBody() = default;
};
class DeleteGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteGroupResponseBody> body{};

  DeleteGroupResponse() {}

  explicit DeleteGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGroupResponse() = default;
};
class DeleteParentPlatformRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  DeleteParentPlatformRequest() {}

  explicit DeleteParentPlatformRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DeleteParentPlatformRequest() = default;
};
class DeleteParentPlatformResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteParentPlatformResponseBody() {}

  explicit DeleteParentPlatformResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteParentPlatformResponseBody() = default;
};
class DeleteParentPlatformResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteParentPlatformResponseBody> body{};

  DeleteParentPlatformResponse() {}

  explicit DeleteParentPlatformResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteParentPlatformResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteParentPlatformResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteParentPlatformResponse() = default;
};
class DeletePresetRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> presetId{};
  shared_ptr<string> subProtocol{};

  DeletePresetRequest() {}

  explicit DeletePresetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (presetId) {
      res["PresetId"] = boost::any(*presetId);
    }
    if (subProtocol) {
      res["SubProtocol"] = boost::any(*subProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PresetId") != m.end() && !m["PresetId"].empty()) {
      presetId = make_shared<string>(boost::any_cast<string>(m["PresetId"]));
    }
    if (m.find("SubProtocol") != m.end() && !m["SubProtocol"].empty()) {
      subProtocol = make_shared<string>(boost::any_cast<string>(m["SubProtocol"]));
    }
  }


  virtual ~DeletePresetRequest() = default;
};
class DeletePresetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  DeletePresetResponseBody() {}

  explicit DeletePresetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeletePresetResponseBody() = default;
};
class DeletePresetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeletePresetResponseBody> body{};

  DeletePresetResponse() {}

  explicit DeletePresetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePresetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePresetResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePresetResponse() = default;
};
class DeleteTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  DeleteTemplateRequest() {}

  explicit DeleteTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DeleteTemplateRequest() = default;
};
class DeleteTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTemplateResponseBody() {}

  explicit DeleteTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteTemplateResponseBody() = default;
};
class DeleteTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteTemplateResponseBody> body{};

  DeleteTemplateResponse() {}

  explicit DeleteTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTemplateResponse() = default;
};
class DeleteVsPullStreamInfoConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> appName{};
  shared_ptr<string> streamName{};

  DeleteVsPullStreamInfoConfigRequest() {}

  explicit DeleteVsPullStreamInfoConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
  }


  virtual ~DeleteVsPullStreamInfoConfigRequest() = default;
};
class DeleteVsPullStreamInfoConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVsPullStreamInfoConfigResponseBody() {}

  explicit DeleteVsPullStreamInfoConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteVsPullStreamInfoConfigResponseBody() = default;
};
class DeleteVsPullStreamInfoConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteVsPullStreamInfoConfigResponseBody> body{};

  DeleteVsPullStreamInfoConfigResponse() {}

  explicit DeleteVsPullStreamInfoConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVsPullStreamInfoConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVsPullStreamInfoConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVsPullStreamInfoConfigResponse() = default;
};
class DeleteVsStreamsNotifyUrlConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};

  DeleteVsStreamsNotifyUrlConfigRequest() {}

  explicit DeleteVsStreamsNotifyUrlConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DeleteVsStreamsNotifyUrlConfigRequest() = default;
};
class DeleteVsStreamsNotifyUrlConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVsStreamsNotifyUrlConfigResponseBody() {}

  explicit DeleteVsStreamsNotifyUrlConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteVsStreamsNotifyUrlConfigResponseBody() = default;
};
class DeleteVsStreamsNotifyUrlConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteVsStreamsNotifyUrlConfigResponseBody> body{};

  DeleteVsStreamsNotifyUrlConfigResponse() {}

  explicit DeleteVsStreamsNotifyUrlConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVsStreamsNotifyUrlConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVsStreamsNotifyUrlConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVsStreamsNotifyUrlConfigResponse() = default;
};
class DescribeAccountStatRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  DescribeAccountStatRequest() {}

  explicit DescribeAccountStatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeAccountStatRequest() = default;
};
class DescribeAccountStatResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> templateNum{};
  shared_ptr<long> groupLimit{};
  shared_ptr<string> requestId{};
  shared_ptr<long> templateLimit{};
  shared_ptr<long> groupNum{};
  shared_ptr<string> id{};

  DescribeAccountStatResponseBody() {}

  explicit DescribeAccountStatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateNum) {
      res["TemplateNum"] = boost::any(*templateNum);
    }
    if (groupLimit) {
      res["GroupLimit"] = boost::any(*groupLimit);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateLimit) {
      res["TemplateLimit"] = boost::any(*templateLimit);
    }
    if (groupNum) {
      res["GroupNum"] = boost::any(*groupNum);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateNum") != m.end() && !m["TemplateNum"].empty()) {
      templateNum = make_shared<long>(boost::any_cast<long>(m["TemplateNum"]));
    }
    if (m.find("GroupLimit") != m.end() && !m["GroupLimit"].empty()) {
      groupLimit = make_shared<long>(boost::any_cast<long>(m["GroupLimit"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateLimit") != m.end() && !m["TemplateLimit"].empty()) {
      templateLimit = make_shared<long>(boost::any_cast<long>(m["TemplateLimit"]));
    }
    if (m.find("GroupNum") != m.end() && !m["GroupNum"].empty()) {
      groupNum = make_shared<long>(boost::any_cast<long>(m["GroupNum"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeAccountStatResponseBody() = default;
};
class DescribeAccountStatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAccountStatResponseBody> body{};

  DescribeAccountStatResponse() {}

  explicit DescribeAccountStatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccountStatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountStatResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountStatResponse() = default;
};
class DescribeDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<bool> includeStats{};
  shared_ptr<bool> includeDirectory{};

  DescribeDeviceRequest() {}

  explicit DescribeDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (includeStats) {
      res["IncludeStats"] = boost::any(*includeStats);
    }
    if (includeDirectory) {
      res["IncludeDirectory"] = boost::any(*includeDirectory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IncludeStats") != m.end() && !m["IncludeStats"].empty()) {
      includeStats = make_shared<bool>(boost::any_cast<bool>(m["IncludeStats"]));
    }
    if (m.find("IncludeDirectory") != m.end() && !m["IncludeDirectory"].empty()) {
      includeDirectory = make_shared<bool>(boost::any_cast<bool>(m["IncludeDirectory"]));
    }
  }


  virtual ~DescribeDeviceRequest() = default;
};
class DescribeDeviceResponseBodyStats : public Darabonba::Model {
public:
  shared_ptr<long> failedNum{};
  shared_ptr<long> streamNum{};
  shared_ptr<long> channelNum{};
  shared_ptr<long> onlineNum{};
  shared_ptr<long> offlineNum{};

  DescribeDeviceResponseBodyStats() {}

  explicit DescribeDeviceResponseBodyStats(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedNum) {
      res["FailedNum"] = boost::any(*failedNum);
    }
    if (streamNum) {
      res["StreamNum"] = boost::any(*streamNum);
    }
    if (channelNum) {
      res["ChannelNum"] = boost::any(*channelNum);
    }
    if (onlineNum) {
      res["OnlineNum"] = boost::any(*onlineNum);
    }
    if (offlineNum) {
      res["OfflineNum"] = boost::any(*offlineNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedNum") != m.end() && !m["FailedNum"].empty()) {
      failedNum = make_shared<long>(boost::any_cast<long>(m["FailedNum"]));
    }
    if (m.find("StreamNum") != m.end() && !m["StreamNum"].empty()) {
      streamNum = make_shared<long>(boost::any_cast<long>(m["StreamNum"]));
    }
    if (m.find("ChannelNum") != m.end() && !m["ChannelNum"].empty()) {
      channelNum = make_shared<long>(boost::any_cast<long>(m["ChannelNum"]));
    }
    if (m.find("OnlineNum") != m.end() && !m["OnlineNum"].empty()) {
      onlineNum = make_shared<long>(boost::any_cast<long>(m["OnlineNum"]));
    }
    if (m.find("OfflineNum") != m.end() && !m["OfflineNum"].empty()) {
      offlineNum = make_shared<long>(boost::any_cast<long>(m["OfflineNum"]));
    }
  }


  virtual ~DescribeDeviceResponseBodyStats() = default;
};
class DescribeDeviceResponseBodyDirectory : public Darabonba::Model {
public:
  shared_ptr<string> parentId{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> name{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};

  DescribeDeviceResponseBodyDirectory() {}

  explicit DescribeDeviceResponseBodyDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeDeviceResponseBodyDirectory() = default;
};
class DescribeDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> status{};
  shared_ptr<string> alarmMethod{};
  shared_ptr<string> dsn{};
  shared_ptr<long> port{};
  shared_ptr<long> posInterval{};
  shared_ptr<string> parentId{};
  shared_ptr<string> password{};
  shared_ptr<bool> autoPos{};
  shared_ptr<string> params{};
  shared_ptr<string> requestId{};
  shared_ptr<string> description{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> name{};
  shared_ptr<string> channelSyncTime{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> registeredTime{};
  shared_ptr<string> protocol{};
  shared_ptr<string> ip{};
  shared_ptr<string> url{};
  shared_ptr<bool> autoStart{};
  shared_ptr<string> vendor{};
  shared_ptr<string> gbId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> longitude{};
  shared_ptr<string> latitude{};
  shared_ptr<string> id{};
  shared_ptr<string> username{};
  shared_ptr<DescribeDeviceResponseBodyStats> stats{};
  shared_ptr<DescribeDeviceResponseBodyDirectory> directory{};

  DescribeDeviceResponseBody() {}

  explicit DescribeDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (alarmMethod) {
      res["AlarmMethod"] = boost::any(*alarmMethod);
    }
    if (dsn) {
      res["Dsn"] = boost::any(*dsn);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (posInterval) {
      res["PosInterval"] = boost::any(*posInterval);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (autoPos) {
      res["AutoPos"] = boost::any(*autoPos);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (channelSyncTime) {
      res["ChannelSyncTime"] = boost::any(*channelSyncTime);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (registeredTime) {
      res["RegisteredTime"] = boost::any(*registeredTime);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (autoStart) {
      res["AutoStart"] = boost::any(*autoStart);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (stats) {
      res["Stats"] = stats ? boost::any(stats->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (directory) {
      res["Directory"] = directory ? boost::any(directory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("AlarmMethod") != m.end() && !m["AlarmMethod"].empty()) {
      alarmMethod = make_shared<string>(boost::any_cast<string>(m["AlarmMethod"]));
    }
    if (m.find("Dsn") != m.end() && !m["Dsn"].empty()) {
      dsn = make_shared<string>(boost::any_cast<string>(m["Dsn"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("PosInterval") != m.end() && !m["PosInterval"].empty()) {
      posInterval = make_shared<long>(boost::any_cast<long>(m["PosInterval"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("AutoPos") != m.end() && !m["AutoPos"].empty()) {
      autoPos = make_shared<bool>(boost::any_cast<bool>(m["AutoPos"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ChannelSyncTime") != m.end() && !m["ChannelSyncTime"].empty()) {
      channelSyncTime = make_shared<string>(boost::any_cast<string>(m["ChannelSyncTime"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("RegisteredTime") != m.end() && !m["RegisteredTime"].empty()) {
      registeredTime = make_shared<string>(boost::any_cast<string>(m["RegisteredTime"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("AutoStart") != m.end() && !m["AutoStart"].empty()) {
      autoStart = make_shared<bool>(boost::any_cast<bool>(m["AutoStart"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("Stats") != m.end() && !m["Stats"].empty()) {
      if (typeid(map<string, boost::any>) == m["Stats"].type()) {
        DescribeDeviceResponseBodyStats model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Stats"]));
        stats = make_shared<DescribeDeviceResponseBodyStats>(model1);
      }
    }
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Directory"].type()) {
        DescribeDeviceResponseBodyDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Directory"]));
        directory = make_shared<DescribeDeviceResponseBodyDirectory>(model1);
      }
    }
  }


  virtual ~DescribeDeviceResponseBody() = default;
};
class DescribeDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDeviceResponseBody> body{};

  DescribeDeviceResponse() {}

  explicit DescribeDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDeviceResponse() = default;
};
class DescribeDeviceChannelsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};

  DescribeDeviceChannelsRequest() {}

  explicit DescribeDeviceChannelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
  }


  virtual ~DescribeDeviceChannelsRequest() = default;
};
class DescribeDeviceChannelsResponseBodyChannels : public Darabonba::Model {
public:
  shared_ptr<string> streamStatus{};
  shared_ptr<string> gbId{};
  shared_ptr<string> params{};
  shared_ptr<string> deviceId{};
  shared_ptr<long> channelId{};
  shared_ptr<string> deviceStatus{};
  shared_ptr<string> name{};
  shared_ptr<string> streamId{};

  DescribeDeviceChannelsResponseBodyChannels() {}

  explicit DescribeDeviceChannelsResponseBodyChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (streamStatus) {
      res["StreamStatus"] = boost::any(*streamStatus);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (deviceStatus) {
      res["DeviceStatus"] = boost::any(*deviceStatus);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (streamId) {
      res["StreamId"] = boost::any(*streamId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StreamStatus") != m.end() && !m["StreamStatus"].empty()) {
      streamStatus = make_shared<string>(boost::any_cast<string>(m["StreamStatus"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<long>(boost::any_cast<long>(m["ChannelId"]));
    }
    if (m.find("DeviceStatus") != m.end() && !m["DeviceStatus"].empty()) {
      deviceStatus = make_shared<string>(boost::any_cast<string>(m["DeviceStatus"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("StreamId") != m.end() && !m["StreamId"].empty()) {
      streamId = make_shared<string>(boost::any_cast<string>(m["StreamId"]));
    }
  }


  virtual ~DescribeDeviceChannelsResponseBodyChannels() = default;
};
class DescribeDeviceChannelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<DescribeDeviceChannelsResponseBodyChannels>> channels{};

  DescribeDeviceChannelsResponseBody() {}

  explicit DescribeDeviceChannelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (channels) {
      vector<boost::any> temp1;
      for(auto item1:*channels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Channels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("Channels") != m.end() && !m["Channels"].empty()) {
      if (typeid(vector<boost::any>) == m["Channels"].type()) {
        vector<DescribeDeviceChannelsResponseBodyChannels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Channels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeviceChannelsResponseBodyChannels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        channels = make_shared<vector<DescribeDeviceChannelsResponseBodyChannels>>(expect1);
      }
    }
  }


  virtual ~DescribeDeviceChannelsResponseBody() = default;
};
class DescribeDeviceChannelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDeviceChannelsResponseBody> body{};

  DescribeDeviceChannelsResponse() {}

  explicit DescribeDeviceChannelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDeviceChannelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDeviceChannelsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDeviceChannelsResponse() = default;
};
class DescribeDeviceGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> clientIp{};
  shared_ptr<long> expire{};

  DescribeDeviceGatewayRequest() {}

  explicit DescribeDeviceGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
  }


  virtual ~DescribeDeviceGatewayRequest() = default;
};
class DescribeDeviceGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<string> token{};
  shared_ptr<string> requestId{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  DescribeDeviceGatewayResponseBody() {}

  explicit DescribeDeviceGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~DescribeDeviceGatewayResponseBody() = default;
};
class DescribeDeviceGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDeviceGatewayResponseBody> body{};

  DescribeDeviceGatewayResponse() {}

  explicit DescribeDeviceGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDeviceGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDeviceGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDeviceGatewayResponse() = default;
};
class DescribeDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> groupId{};
  shared_ptr<string> parentId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> gbId{};
  shared_ptr<string> status{};
  shared_ptr<string> vendor{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortDirection{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};
  shared_ptr<bool> includeStats{};
  shared_ptr<bool> includeDirectory{};

  DescribeDevicesRequest() {}

  explicit DescribeDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortDirection) {
      res["SortDirection"] = boost::any(*sortDirection);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (includeStats) {
      res["IncludeStats"] = boost::any(*includeStats);
    }
    if (includeDirectory) {
      res["IncludeDirectory"] = boost::any(*includeDirectory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortDirection") != m.end() && !m["SortDirection"].empty()) {
      sortDirection = make_shared<string>(boost::any_cast<string>(m["SortDirection"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("IncludeStats") != m.end() && !m["IncludeStats"].empty()) {
      includeStats = make_shared<bool>(boost::any_cast<bool>(m["IncludeStats"]));
    }
    if (m.find("IncludeDirectory") != m.end() && !m["IncludeDirectory"].empty()) {
      includeDirectory = make_shared<bool>(boost::any_cast<bool>(m["IncludeDirectory"]));
    }
  }


  virtual ~DescribeDevicesRequest() = default;
};
class DescribeDevicesResponseBodyDevicesStats : public Darabonba::Model {
public:
  shared_ptr<long> failedNum{};
  shared_ptr<long> streamNum{};
  shared_ptr<long> channelNum{};
  shared_ptr<long> onlineNum{};
  shared_ptr<long> offlineNum{};

  DescribeDevicesResponseBodyDevicesStats() {}

  explicit DescribeDevicesResponseBodyDevicesStats(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedNum) {
      res["FailedNum"] = boost::any(*failedNum);
    }
    if (streamNum) {
      res["StreamNum"] = boost::any(*streamNum);
    }
    if (channelNum) {
      res["ChannelNum"] = boost::any(*channelNum);
    }
    if (onlineNum) {
      res["OnlineNum"] = boost::any(*onlineNum);
    }
    if (offlineNum) {
      res["OfflineNum"] = boost::any(*offlineNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedNum") != m.end() && !m["FailedNum"].empty()) {
      failedNum = make_shared<long>(boost::any_cast<long>(m["FailedNum"]));
    }
    if (m.find("StreamNum") != m.end() && !m["StreamNum"].empty()) {
      streamNum = make_shared<long>(boost::any_cast<long>(m["StreamNum"]));
    }
    if (m.find("ChannelNum") != m.end() && !m["ChannelNum"].empty()) {
      channelNum = make_shared<long>(boost::any_cast<long>(m["ChannelNum"]));
    }
    if (m.find("OnlineNum") != m.end() && !m["OnlineNum"].empty()) {
      onlineNum = make_shared<long>(boost::any_cast<long>(m["OnlineNum"]));
    }
    if (m.find("OfflineNum") != m.end() && !m["OfflineNum"].empty()) {
      offlineNum = make_shared<long>(boost::any_cast<long>(m["OfflineNum"]));
    }
  }


  virtual ~DescribeDevicesResponseBodyDevicesStats() = default;
};
class DescribeDevicesResponseBodyDevicesDirectory : public Darabonba::Model {
public:
  shared_ptr<string> parentId{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> name{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};

  DescribeDevicesResponseBodyDevicesDirectory() {}

  explicit DescribeDevicesResponseBodyDevicesDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeDevicesResponseBodyDevicesDirectory() = default;
};
class DescribeDevicesResponseBodyDevices : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> status{};
  shared_ptr<string> alarmMethod{};
  shared_ptr<string> dsn{};
  shared_ptr<long> port{};
  shared_ptr<long> posInterval{};
  shared_ptr<string> parentId{};
  shared_ptr<string> password{};
  shared_ptr<bool> autoPos{};
  shared_ptr<string> params{};
  shared_ptr<string> description{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> name{};
  shared_ptr<string> channelSyncTime{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> registeredTime{};
  shared_ptr<string> protocol{};
  shared_ptr<string> ip{};
  shared_ptr<string> url{};
  shared_ptr<bool> autoStart{};
  shared_ptr<string> vendor{};
  shared_ptr<string> gbId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> longitude{};
  shared_ptr<string> latitude{};
  shared_ptr<string> id{};
  shared_ptr<string> username{};
  shared_ptr<DescribeDevicesResponseBodyDevicesStats> stats{};
  shared_ptr<DescribeDevicesResponseBodyDevicesDirectory> directory{};

  DescribeDevicesResponseBodyDevices() {}

  explicit DescribeDevicesResponseBodyDevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (alarmMethod) {
      res["AlarmMethod"] = boost::any(*alarmMethod);
    }
    if (dsn) {
      res["Dsn"] = boost::any(*dsn);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (posInterval) {
      res["PosInterval"] = boost::any(*posInterval);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (autoPos) {
      res["AutoPos"] = boost::any(*autoPos);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (channelSyncTime) {
      res["ChannelSyncTime"] = boost::any(*channelSyncTime);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (registeredTime) {
      res["RegisteredTime"] = boost::any(*registeredTime);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (autoStart) {
      res["AutoStart"] = boost::any(*autoStart);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (stats) {
      res["Stats"] = stats ? boost::any(stats->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (directory) {
      res["Directory"] = directory ? boost::any(directory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("AlarmMethod") != m.end() && !m["AlarmMethod"].empty()) {
      alarmMethod = make_shared<string>(boost::any_cast<string>(m["AlarmMethod"]));
    }
    if (m.find("Dsn") != m.end() && !m["Dsn"].empty()) {
      dsn = make_shared<string>(boost::any_cast<string>(m["Dsn"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("PosInterval") != m.end() && !m["PosInterval"].empty()) {
      posInterval = make_shared<long>(boost::any_cast<long>(m["PosInterval"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("AutoPos") != m.end() && !m["AutoPos"].empty()) {
      autoPos = make_shared<bool>(boost::any_cast<bool>(m["AutoPos"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ChannelSyncTime") != m.end() && !m["ChannelSyncTime"].empty()) {
      channelSyncTime = make_shared<string>(boost::any_cast<string>(m["ChannelSyncTime"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("RegisteredTime") != m.end() && !m["RegisteredTime"].empty()) {
      registeredTime = make_shared<string>(boost::any_cast<string>(m["RegisteredTime"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("AutoStart") != m.end() && !m["AutoStart"].empty()) {
      autoStart = make_shared<bool>(boost::any_cast<bool>(m["AutoStart"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("Stats") != m.end() && !m["Stats"].empty()) {
      if (typeid(map<string, boost::any>) == m["Stats"].type()) {
        DescribeDevicesResponseBodyDevicesStats model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Stats"]));
        stats = make_shared<DescribeDevicesResponseBodyDevicesStats>(model1);
      }
    }
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Directory"].type()) {
        DescribeDevicesResponseBodyDevicesDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Directory"]));
        directory = make_shared<DescribeDevicesResponseBodyDevicesDirectory>(model1);
      }
    }
  }


  virtual ~DescribeDevicesResponseBodyDevices() = default;
};
class DescribeDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<DescribeDevicesResponseBodyDevices>> devices{};

  DescribeDevicesResponseBody() {}

  explicit DescribeDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (devices) {
      vector<boost::any> temp1;
      for(auto item1:*devices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Devices"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("Devices") != m.end() && !m["Devices"].empty()) {
      if (typeid(vector<boost::any>) == m["Devices"].type()) {
        vector<DescribeDevicesResponseBodyDevices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Devices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDevicesResponseBodyDevices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        devices = make_shared<vector<DescribeDevicesResponseBodyDevices>>(expect1);
      }
    }
  }


  virtual ~DescribeDevicesResponseBody() = default;
};
class DescribeDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDevicesResponseBody> body{};

  DescribeDevicesResponse() {}

  explicit DescribeDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDevicesResponse() = default;
};
class DescribeDeviceURLRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> stream{};
  shared_ptr<string> outProtocol{};
  shared_ptr<string> mode{};
  shared_ptr<string> type{};
  shared_ptr<bool> auth{};
  shared_ptr<long> expire{};

  DescribeDeviceURLRequest() {}

  explicit DescribeDeviceURLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (stream) {
      res["Stream"] = boost::any(*stream);
    }
    if (outProtocol) {
      res["OutProtocol"] = boost::any(*outProtocol);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (auth) {
      res["Auth"] = boost::any(*auth);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Stream") != m.end() && !m["Stream"].empty()) {
      stream = make_shared<string>(boost::any_cast<string>(m["Stream"]));
    }
    if (m.find("OutProtocol") != m.end() && !m["OutProtocol"].empty()) {
      outProtocol = make_shared<string>(boost::any_cast<string>(m["OutProtocol"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Auth") != m.end() && !m["Auth"].empty()) {
      auth = make_shared<bool>(boost::any_cast<bool>(m["Auth"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
  }


  virtual ~DescribeDeviceURLRequest() = default;
};
class DescribeDeviceURLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> requestId{};
  shared_ptr<long> expireTime{};

  DescribeDeviceURLResponseBody() {}

  explicit DescribeDeviceURLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
  }


  virtual ~DescribeDeviceURLResponseBody() = default;
};
class DescribeDeviceURLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDeviceURLResponseBody> body{};

  DescribeDeviceURLResponse() {}

  explicit DescribeDeviceURLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDeviceURLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDeviceURLResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDeviceURLResponse() = default;
};
class DescribeDirectoriesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> parentId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortDirection{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};
  shared_ptr<bool> noPagination{};

  DescribeDirectoriesRequest() {}

  explicit DescribeDirectoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortDirection) {
      res["SortDirection"] = boost::any(*sortDirection);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (noPagination) {
      res["NoPagination"] = boost::any(*noPagination);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortDirection") != m.end() && !m["SortDirection"].empty()) {
      sortDirection = make_shared<string>(boost::any_cast<string>(m["SortDirection"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("NoPagination") != m.end() && !m["NoPagination"].empty()) {
      noPagination = make_shared<bool>(boost::any_cast<bool>(m["NoPagination"]));
    }
  }


  virtual ~DescribeDirectoriesRequest() = default;
};
class DescribeDirectoriesResponseBodyDirectories : public Darabonba::Model {
public:
  shared_ptr<string> parentId{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> name{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};

  DescribeDirectoriesResponseBodyDirectories() {}

  explicit DescribeDirectoriesResponseBodyDirectories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeDirectoriesResponseBodyDirectories() = default;
};
class DescribeDirectoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<DescribeDirectoriesResponseBodyDirectories>> directories{};

  DescribeDirectoriesResponseBody() {}

  explicit DescribeDirectoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (directories) {
      vector<boost::any> temp1;
      for(auto item1:*directories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Directories"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("Directories") != m.end() && !m["Directories"].empty()) {
      if (typeid(vector<boost::any>) == m["Directories"].type()) {
        vector<DescribeDirectoriesResponseBodyDirectories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Directories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDirectoriesResponseBodyDirectories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        directories = make_shared<vector<DescribeDirectoriesResponseBodyDirectories>>(expect1);
      }
    }
  }


  virtual ~DescribeDirectoriesResponseBody() = default;
};
class DescribeDirectoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDirectoriesResponseBody> body{};

  DescribeDirectoriesResponse() {}

  explicit DescribeDirectoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDirectoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDirectoriesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDirectoriesResponse() = default;
};
class DescribeDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  DescribeDirectoryRequest() {}

  explicit DescribeDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeDirectoryRequest() = default;
};
class DescribeDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> parentId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> name{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};

  DescribeDirectoryResponseBody() {}

  explicit DescribeDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeDirectoryResponseBody() = default;
};
class DescribeDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDirectoryResponseBody> body{};

  DescribeDirectoryResponse() {}

  explicit DescribeDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDirectoryResponse() = default;
};
class DescribeGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<bool> includeStats{};

  DescribeGroupRequest() {}

  explicit DescribeGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (includeStats) {
      res["IncludeStats"] = boost::any(*includeStats);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IncludeStats") != m.end() && !m["IncludeStats"].empty()) {
      includeStats = make_shared<bool>(boost::any_cast<bool>(m["IncludeStats"]));
    }
  }


  virtual ~DescribeGroupRequest() = default;
};
class DescribeGroupResponseBodyStats : public Darabonba::Model {
public:
  shared_ptr<long> platformNum{};
  shared_ptr<long> deviceNum{};
  shared_ptr<long> ipcNum{};
  shared_ptr<long> iedNum{};

  DescribeGroupResponseBodyStats() {}

  explicit DescribeGroupResponseBodyStats(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (platformNum) {
      res["PlatformNum"] = boost::any(*platformNum);
    }
    if (deviceNum) {
      res["DeviceNum"] = boost::any(*deviceNum);
    }
    if (ipcNum) {
      res["IpcNum"] = boost::any(*ipcNum);
    }
    if (iedNum) {
      res["IedNum"] = boost::any(*iedNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlatformNum") != m.end() && !m["PlatformNum"].empty()) {
      platformNum = make_shared<long>(boost::any_cast<long>(m["PlatformNum"]));
    }
    if (m.find("DeviceNum") != m.end() && !m["DeviceNum"].empty()) {
      deviceNum = make_shared<long>(boost::any_cast<long>(m["DeviceNum"]));
    }
    if (m.find("IpcNum") != m.end() && !m["IpcNum"].empty()) {
      ipcNum = make_shared<long>(boost::any_cast<long>(m["IpcNum"]));
    }
    if (m.find("IedNum") != m.end() && !m["IedNum"].empty()) {
      iedNum = make_shared<long>(boost::any_cast<long>(m["IedNum"]));
    }
  }


  virtual ~DescribeGroupResponseBodyStats() = default;
};
class DescribeGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<bool> lazyPull{};
  shared_ptr<string> callback{};
  shared_ptr<string> requestId{};
  shared_ptr<string> description{};
  shared_ptr<string> app{};
  shared_ptr<string> region{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> inProtocol{};
  shared_ptr<string> outProtocol{};
  shared_ptr<string> name{};
  shared_ptr<string> pushDomain{};
  shared_ptr<string> createdTime{};
  shared_ptr<long> captureVideo{};
  shared_ptr<string> playDomain{};
  shared_ptr<long> captureInterval{};
  shared_ptr<long> gbPort{};
  shared_ptr<string> gbId{};
  shared_ptr<string> gbIp{};
  shared_ptr<long> captureImage{};
  shared_ptr<string> aliasId{};
  shared_ptr<string> captureOssBucket{};
  shared_ptr<string> captureOssPath{};
  shared_ptr<string> id{};
  shared_ptr<vector<string>> gbTcpPorts{};
  shared_ptr<vector<string>> gbUdpPorts{};
  shared_ptr<DescribeGroupResponseBodyStats> stats{};

  DescribeGroupResponseBody() {}

  explicit DescribeGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (lazyPull) {
      res["LazyPull"] = boost::any(*lazyPull);
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (app) {
      res["App"] = boost::any(*app);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (inProtocol) {
      res["InProtocol"] = boost::any(*inProtocol);
    }
    if (outProtocol) {
      res["OutProtocol"] = boost::any(*outProtocol);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pushDomain) {
      res["PushDomain"] = boost::any(*pushDomain);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (captureVideo) {
      res["CaptureVideo"] = boost::any(*captureVideo);
    }
    if (playDomain) {
      res["PlayDomain"] = boost::any(*playDomain);
    }
    if (captureInterval) {
      res["CaptureInterval"] = boost::any(*captureInterval);
    }
    if (gbPort) {
      res["GbPort"] = boost::any(*gbPort);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (gbIp) {
      res["GbIp"] = boost::any(*gbIp);
    }
    if (captureImage) {
      res["CaptureImage"] = boost::any(*captureImage);
    }
    if (aliasId) {
      res["AliasId"] = boost::any(*aliasId);
    }
    if (captureOssBucket) {
      res["CaptureOssBucket"] = boost::any(*captureOssBucket);
    }
    if (captureOssPath) {
      res["CaptureOssPath"] = boost::any(*captureOssPath);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (gbTcpPorts) {
      res["GbTcpPorts"] = boost::any(*gbTcpPorts);
    }
    if (gbUdpPorts) {
      res["GbUdpPorts"] = boost::any(*gbUdpPorts);
    }
    if (stats) {
      res["Stats"] = stats ? boost::any(stats->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("LazyPull") != m.end() && !m["LazyPull"].empty()) {
      lazyPull = make_shared<bool>(boost::any_cast<bool>(m["LazyPull"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("App") != m.end() && !m["App"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("InProtocol") != m.end() && !m["InProtocol"].empty()) {
      inProtocol = make_shared<string>(boost::any_cast<string>(m["InProtocol"]));
    }
    if (m.find("OutProtocol") != m.end() && !m["OutProtocol"].empty()) {
      outProtocol = make_shared<string>(boost::any_cast<string>(m["OutProtocol"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PushDomain") != m.end() && !m["PushDomain"].empty()) {
      pushDomain = make_shared<string>(boost::any_cast<string>(m["PushDomain"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("CaptureVideo") != m.end() && !m["CaptureVideo"].empty()) {
      captureVideo = make_shared<long>(boost::any_cast<long>(m["CaptureVideo"]));
    }
    if (m.find("PlayDomain") != m.end() && !m["PlayDomain"].empty()) {
      playDomain = make_shared<string>(boost::any_cast<string>(m["PlayDomain"]));
    }
    if (m.find("CaptureInterval") != m.end() && !m["CaptureInterval"].empty()) {
      captureInterval = make_shared<long>(boost::any_cast<long>(m["CaptureInterval"]));
    }
    if (m.find("GbPort") != m.end() && !m["GbPort"].empty()) {
      gbPort = make_shared<long>(boost::any_cast<long>(m["GbPort"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("GbIp") != m.end() && !m["GbIp"].empty()) {
      gbIp = make_shared<string>(boost::any_cast<string>(m["GbIp"]));
    }
    if (m.find("CaptureImage") != m.end() && !m["CaptureImage"].empty()) {
      captureImage = make_shared<long>(boost::any_cast<long>(m["CaptureImage"]));
    }
    if (m.find("AliasId") != m.end() && !m["AliasId"].empty()) {
      aliasId = make_shared<string>(boost::any_cast<string>(m["AliasId"]));
    }
    if (m.find("CaptureOssBucket") != m.end() && !m["CaptureOssBucket"].empty()) {
      captureOssBucket = make_shared<string>(boost::any_cast<string>(m["CaptureOssBucket"]));
    }
    if (m.find("CaptureOssPath") != m.end() && !m["CaptureOssPath"].empty()) {
      captureOssPath = make_shared<string>(boost::any_cast<string>(m["CaptureOssPath"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("GbTcpPorts") != m.end() && !m["GbTcpPorts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GbTcpPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GbTcpPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      gbTcpPorts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GbUdpPorts") != m.end() && !m["GbUdpPorts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GbUdpPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GbUdpPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      gbUdpPorts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Stats") != m.end() && !m["Stats"].empty()) {
      if (typeid(map<string, boost::any>) == m["Stats"].type()) {
        DescribeGroupResponseBodyStats model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Stats"]));
        stats = make_shared<DescribeGroupResponseBodyStats>(model1);
      }
    }
  }


  virtual ~DescribeGroupResponseBody() = default;
};
class DescribeGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGroupResponseBody> body{};

  DescribeGroupResponse() {}

  explicit DescribeGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGroupResponse() = default;
};
class DescribeGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> region{};
  shared_ptr<string> inProtocol{};
  shared_ptr<string> status{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortDirection{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};
  shared_ptr<bool> includeStats{};

  DescribeGroupsRequest() {}

  explicit DescribeGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (inProtocol) {
      res["InProtocol"] = boost::any(*inProtocol);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortDirection) {
      res["SortDirection"] = boost::any(*sortDirection);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (includeStats) {
      res["IncludeStats"] = boost::any(*includeStats);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("InProtocol") != m.end() && !m["InProtocol"].empty()) {
      inProtocol = make_shared<string>(boost::any_cast<string>(m["InProtocol"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortDirection") != m.end() && !m["SortDirection"].empty()) {
      sortDirection = make_shared<string>(boost::any_cast<string>(m["SortDirection"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("IncludeStats") != m.end() && !m["IncludeStats"].empty()) {
      includeStats = make_shared<bool>(boost::any_cast<bool>(m["IncludeStats"]));
    }
  }


  virtual ~DescribeGroupsRequest() = default;
};
class DescribeGroupsResponseBodyGroupsStats : public Darabonba::Model {
public:
  shared_ptr<long> platformNum{};
  shared_ptr<long> deviceNum{};
  shared_ptr<long> ipcNum{};
  shared_ptr<long> iedNum{};

  DescribeGroupsResponseBodyGroupsStats() {}

  explicit DescribeGroupsResponseBodyGroupsStats(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (platformNum) {
      res["PlatformNum"] = boost::any(*platformNum);
    }
    if (deviceNum) {
      res["DeviceNum"] = boost::any(*deviceNum);
    }
    if (ipcNum) {
      res["IpcNum"] = boost::any(*ipcNum);
    }
    if (iedNum) {
      res["IedNum"] = boost::any(*iedNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlatformNum") != m.end() && !m["PlatformNum"].empty()) {
      platformNum = make_shared<long>(boost::any_cast<long>(m["PlatformNum"]));
    }
    if (m.find("DeviceNum") != m.end() && !m["DeviceNum"].empty()) {
      deviceNum = make_shared<long>(boost::any_cast<long>(m["DeviceNum"]));
    }
    if (m.find("IpcNum") != m.end() && !m["IpcNum"].empty()) {
      ipcNum = make_shared<long>(boost::any_cast<long>(m["IpcNum"]));
    }
    if (m.find("IedNum") != m.end() && !m["IedNum"].empty()) {
      iedNum = make_shared<long>(boost::any_cast<long>(m["IedNum"]));
    }
  }


  virtual ~DescribeGroupsResponseBodyGroupsStats() = default;
};
class DescribeGroupsResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<bool> lazyPull{};
  shared_ptr<string> playDomain{};
  shared_ptr<long> gbPort{};
  shared_ptr<long> captureInterval{};
  shared_ptr<string> callback{};
  shared_ptr<string> gbId{};
  shared_ptr<string> gbIp{};
  shared_ptr<long> captureImage{};
  shared_ptr<string> description{};
  shared_ptr<string> region{};
  shared_ptr<string> app{};
  shared_ptr<string> aliasId{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> inProtocol{};
  shared_ptr<string> captureOssPath{};
  shared_ptr<string> captureOssBucket{};
  shared_ptr<string> outProtocol{};
  shared_ptr<string> pushDomain{};
  shared_ptr<string> name{};
  shared_ptr<string> createdTime{};
  shared_ptr<long> captureVideo{};
  shared_ptr<string> id{};
  shared_ptr<vector<string>> gbTcpPorts{};
  shared_ptr<vector<string>> gbUdpPorts{};
  shared_ptr<DescribeGroupsResponseBodyGroupsStats> stats{};

  DescribeGroupsResponseBodyGroups() {}

  explicit DescribeGroupsResponseBodyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (lazyPull) {
      res["LazyPull"] = boost::any(*lazyPull);
    }
    if (playDomain) {
      res["PlayDomain"] = boost::any(*playDomain);
    }
    if (gbPort) {
      res["GbPort"] = boost::any(*gbPort);
    }
    if (captureInterval) {
      res["CaptureInterval"] = boost::any(*captureInterval);
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (gbIp) {
      res["GbIp"] = boost::any(*gbIp);
    }
    if (captureImage) {
      res["CaptureImage"] = boost::any(*captureImage);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (app) {
      res["App"] = boost::any(*app);
    }
    if (aliasId) {
      res["AliasId"] = boost::any(*aliasId);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (inProtocol) {
      res["InProtocol"] = boost::any(*inProtocol);
    }
    if (captureOssPath) {
      res["CaptureOssPath"] = boost::any(*captureOssPath);
    }
    if (captureOssBucket) {
      res["CaptureOssBucket"] = boost::any(*captureOssBucket);
    }
    if (outProtocol) {
      res["OutProtocol"] = boost::any(*outProtocol);
    }
    if (pushDomain) {
      res["PushDomain"] = boost::any(*pushDomain);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (captureVideo) {
      res["CaptureVideo"] = boost::any(*captureVideo);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (gbTcpPorts) {
      res["GbTcpPorts"] = boost::any(*gbTcpPorts);
    }
    if (gbUdpPorts) {
      res["GbUdpPorts"] = boost::any(*gbUdpPorts);
    }
    if (stats) {
      res["Stats"] = stats ? boost::any(stats->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("LazyPull") != m.end() && !m["LazyPull"].empty()) {
      lazyPull = make_shared<bool>(boost::any_cast<bool>(m["LazyPull"]));
    }
    if (m.find("PlayDomain") != m.end() && !m["PlayDomain"].empty()) {
      playDomain = make_shared<string>(boost::any_cast<string>(m["PlayDomain"]));
    }
    if (m.find("GbPort") != m.end() && !m["GbPort"].empty()) {
      gbPort = make_shared<long>(boost::any_cast<long>(m["GbPort"]));
    }
    if (m.find("CaptureInterval") != m.end() && !m["CaptureInterval"].empty()) {
      captureInterval = make_shared<long>(boost::any_cast<long>(m["CaptureInterval"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("GbIp") != m.end() && !m["GbIp"].empty()) {
      gbIp = make_shared<string>(boost::any_cast<string>(m["GbIp"]));
    }
    if (m.find("CaptureImage") != m.end() && !m["CaptureImage"].empty()) {
      captureImage = make_shared<long>(boost::any_cast<long>(m["CaptureImage"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("App") != m.end() && !m["App"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("AliasId") != m.end() && !m["AliasId"].empty()) {
      aliasId = make_shared<string>(boost::any_cast<string>(m["AliasId"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("InProtocol") != m.end() && !m["InProtocol"].empty()) {
      inProtocol = make_shared<string>(boost::any_cast<string>(m["InProtocol"]));
    }
    if (m.find("CaptureOssPath") != m.end() && !m["CaptureOssPath"].empty()) {
      captureOssPath = make_shared<string>(boost::any_cast<string>(m["CaptureOssPath"]));
    }
    if (m.find("CaptureOssBucket") != m.end() && !m["CaptureOssBucket"].empty()) {
      captureOssBucket = make_shared<string>(boost::any_cast<string>(m["CaptureOssBucket"]));
    }
    if (m.find("OutProtocol") != m.end() && !m["OutProtocol"].empty()) {
      outProtocol = make_shared<string>(boost::any_cast<string>(m["OutProtocol"]));
    }
    if (m.find("PushDomain") != m.end() && !m["PushDomain"].empty()) {
      pushDomain = make_shared<string>(boost::any_cast<string>(m["PushDomain"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("CaptureVideo") != m.end() && !m["CaptureVideo"].empty()) {
      captureVideo = make_shared<long>(boost::any_cast<long>(m["CaptureVideo"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("GbTcpPorts") != m.end() && !m["GbTcpPorts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GbTcpPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GbTcpPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      gbTcpPorts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GbUdpPorts") != m.end() && !m["GbUdpPorts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GbUdpPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GbUdpPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      gbUdpPorts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Stats") != m.end() && !m["Stats"].empty()) {
      if (typeid(map<string, boost::any>) == m["Stats"].type()) {
        DescribeGroupsResponseBodyGroupsStats model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Stats"]));
        stats = make_shared<DescribeGroupsResponseBodyGroupsStats>(model1);
      }
    }
  }


  virtual ~DescribeGroupsResponseBodyGroups() = default;
};
class DescribeGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<DescribeGroupsResponseBodyGroups>> groups{};

  DescribeGroupsResponseBody() {}

  explicit DescribeGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<DescribeGroupsResponseBodyGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGroupsResponseBodyGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<DescribeGroupsResponseBodyGroups>>(expect1);
      }
    }
  }


  virtual ~DescribeGroupsResponseBody() = default;
};
class DescribeGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGroupsResponseBody> body{};

  DescribeGroupsResponse() {}

  explicit DescribeGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGroupsResponse() = default;
};
class DescribeParentPlatformRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  DescribeParentPlatformRequest() {}

  explicit DescribeParentPlatformRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeParentPlatformRequest() = default;
};
class DescribeParentPlatformResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<long> clientPort{};
  shared_ptr<string> clientGbId{};
  shared_ptr<string> protocol{};
  shared_ptr<string> ip{};
  shared_ptr<long> port{};
  shared_ptr<string> clientPassword{};
  shared_ptr<string> clientUsername{};
  shared_ptr<bool> autoStart{};
  shared_ptr<bool> clientAuth{};
  shared_ptr<string> gbId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> description{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> name{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};

  DescribeParentPlatformResponseBody() {}

  explicit DescribeParentPlatformResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (clientPort) {
      res["ClientPort"] = boost::any(*clientPort);
    }
    if (clientGbId) {
      res["ClientGbId"] = boost::any(*clientGbId);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (clientPassword) {
      res["ClientPassword"] = boost::any(*clientPassword);
    }
    if (clientUsername) {
      res["ClientUsername"] = boost::any(*clientUsername);
    }
    if (autoStart) {
      res["AutoStart"] = boost::any(*autoStart);
    }
    if (clientAuth) {
      res["ClientAuth"] = boost::any(*clientAuth);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ClientPort") != m.end() && !m["ClientPort"].empty()) {
      clientPort = make_shared<long>(boost::any_cast<long>(m["ClientPort"]));
    }
    if (m.find("ClientGbId") != m.end() && !m["ClientGbId"].empty()) {
      clientGbId = make_shared<string>(boost::any_cast<string>(m["ClientGbId"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ClientPassword") != m.end() && !m["ClientPassword"].empty()) {
      clientPassword = make_shared<string>(boost::any_cast<string>(m["ClientPassword"]));
    }
    if (m.find("ClientUsername") != m.end() && !m["ClientUsername"].empty()) {
      clientUsername = make_shared<string>(boost::any_cast<string>(m["ClientUsername"]));
    }
    if (m.find("AutoStart") != m.end() && !m["AutoStart"].empty()) {
      autoStart = make_shared<bool>(boost::any_cast<bool>(m["AutoStart"]));
    }
    if (m.find("ClientAuth") != m.end() && !m["ClientAuth"].empty()) {
      clientAuth = make_shared<bool>(boost::any_cast<bool>(m["ClientAuth"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeParentPlatformResponseBody() = default;
};
class DescribeParentPlatformResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeParentPlatformResponseBody> body{};

  DescribeParentPlatformResponse() {}

  explicit DescribeParentPlatformResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeParentPlatformResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeParentPlatformResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeParentPlatformResponse() = default;
};
class DescribeParentPlatformDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortDirection{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};

  DescribeParentPlatformDevicesRequest() {}

  explicit DescribeParentPlatformDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortDirection) {
      res["SortDirection"] = boost::any(*sortDirection);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortDirection") != m.end() && !m["SortDirection"].empty()) {
      sortDirection = make_shared<string>(boost::any_cast<string>(m["SortDirection"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
  }


  virtual ~DescribeParentPlatformDevicesRequest() = default;
};
class DescribeParentPlatformDevicesResponseBodyDevices : public Darabonba::Model {
public:
  shared_ptr<string> parentId{};
  shared_ptr<string> gbId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  DescribeParentPlatformDevicesResponseBodyDevices() {}

  explicit DescribeParentPlatformDevicesResponseBodyDevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeParentPlatformDevicesResponseBodyDevices() = default;
};
class DescribeParentPlatformDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<DescribeParentPlatformDevicesResponseBodyDevices>> devices{};

  DescribeParentPlatformDevicesResponseBody() {}

  explicit DescribeParentPlatformDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (devices) {
      vector<boost::any> temp1;
      for(auto item1:*devices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Devices"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("Devices") != m.end() && !m["Devices"].empty()) {
      if (typeid(vector<boost::any>) == m["Devices"].type()) {
        vector<DescribeParentPlatformDevicesResponseBodyDevices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Devices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParentPlatformDevicesResponseBodyDevices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        devices = make_shared<vector<DescribeParentPlatformDevicesResponseBodyDevices>>(expect1);
      }
    }
  }


  virtual ~DescribeParentPlatformDevicesResponseBody() = default;
};
class DescribeParentPlatformDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeParentPlatformDevicesResponseBody> body{};

  DescribeParentPlatformDevicesResponse() {}

  explicit DescribeParentPlatformDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeParentPlatformDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeParentPlatformDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeParentPlatformDevicesResponse() = default;
};
class DescribeParentPlatformsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> gbId{};
  shared_ptr<string> status{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortDirection{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};

  DescribeParentPlatformsRequest() {}

  explicit DescribeParentPlatformsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortDirection) {
      res["SortDirection"] = boost::any(*sortDirection);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortDirection") != m.end() && !m["SortDirection"].empty()) {
      sortDirection = make_shared<string>(boost::any_cast<string>(m["SortDirection"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
  }


  virtual ~DescribeParentPlatformsRequest() = default;
};
class DescribeParentPlatformsResponseBodyPlatforms : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<long> clientPort{};
  shared_ptr<string> protocol{};
  shared_ptr<string> clientGbId{};
  shared_ptr<string> ip{};
  shared_ptr<long> port{};
  shared_ptr<string> clientUsername{};
  shared_ptr<string> clientPassword{};
  shared_ptr<bool> autoStart{};
  shared_ptr<bool> clientAuth{};
  shared_ptr<string> gbId{};
  shared_ptr<string> description{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> name{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};

  DescribeParentPlatformsResponseBodyPlatforms() {}

  explicit DescribeParentPlatformsResponseBodyPlatforms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (clientPort) {
      res["ClientPort"] = boost::any(*clientPort);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (clientGbId) {
      res["ClientGbId"] = boost::any(*clientGbId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (clientUsername) {
      res["ClientUsername"] = boost::any(*clientUsername);
    }
    if (clientPassword) {
      res["ClientPassword"] = boost::any(*clientPassword);
    }
    if (autoStart) {
      res["AutoStart"] = boost::any(*autoStart);
    }
    if (clientAuth) {
      res["ClientAuth"] = boost::any(*clientAuth);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ClientPort") != m.end() && !m["ClientPort"].empty()) {
      clientPort = make_shared<long>(boost::any_cast<long>(m["ClientPort"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("ClientGbId") != m.end() && !m["ClientGbId"].empty()) {
      clientGbId = make_shared<string>(boost::any_cast<string>(m["ClientGbId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ClientUsername") != m.end() && !m["ClientUsername"].empty()) {
      clientUsername = make_shared<string>(boost::any_cast<string>(m["ClientUsername"]));
    }
    if (m.find("ClientPassword") != m.end() && !m["ClientPassword"].empty()) {
      clientPassword = make_shared<string>(boost::any_cast<string>(m["ClientPassword"]));
    }
    if (m.find("AutoStart") != m.end() && !m["AutoStart"].empty()) {
      autoStart = make_shared<bool>(boost::any_cast<bool>(m["AutoStart"]));
    }
    if (m.find("ClientAuth") != m.end() && !m["ClientAuth"].empty()) {
      clientAuth = make_shared<bool>(boost::any_cast<bool>(m["ClientAuth"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeParentPlatformsResponseBodyPlatforms() = default;
};
class DescribeParentPlatformsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<DescribeParentPlatformsResponseBodyPlatforms>> platforms{};

  DescribeParentPlatformsResponseBody() {}

  explicit DescribeParentPlatformsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (platforms) {
      vector<boost::any> temp1;
      for(auto item1:*platforms){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Platforms"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("Platforms") != m.end() && !m["Platforms"].empty()) {
      if (typeid(vector<boost::any>) == m["Platforms"].type()) {
        vector<DescribeParentPlatformsResponseBodyPlatforms> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Platforms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParentPlatformsResponseBodyPlatforms model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        platforms = make_shared<vector<DescribeParentPlatformsResponseBodyPlatforms>>(expect1);
      }
    }
  }


  virtual ~DescribeParentPlatformsResponseBody() = default;
};
class DescribeParentPlatformsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeParentPlatformsResponseBody> body{};

  DescribeParentPlatformsResponse() {}

  explicit DescribeParentPlatformsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeParentPlatformsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeParentPlatformsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeParentPlatformsResponse() = default;
};
class DescribePresetsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> subProtocol{};

  DescribePresetsRequest() {}

  explicit DescribePresetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (subProtocol) {
      res["SubProtocol"] = boost::any(*subProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("SubProtocol") != m.end() && !m["SubProtocol"].empty()) {
      subProtocol = make_shared<string>(boost::any_cast<string>(m["SubProtocol"]));
    }
  }


  virtual ~DescribePresetsRequest() = default;
};
class DescribePresetsResponseBodyPresets : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  DescribePresetsResponseBodyPresets() {}

  explicit DescribePresetsResponseBodyPresets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribePresetsResponseBodyPresets() = default;
};
class DescribePresetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribePresetsResponseBodyPresets>> presets{};

  DescribePresetsResponseBody() {}

  explicit DescribePresetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (presets) {
      vector<boost::any> temp1;
      for(auto item1:*presets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Presets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Presets") != m.end() && !m["Presets"].empty()) {
      if (typeid(vector<boost::any>) == m["Presets"].type()) {
        vector<DescribePresetsResponseBodyPresets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Presets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePresetsResponseBodyPresets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        presets = make_shared<vector<DescribePresetsResponseBodyPresets>>(expect1);
      }
    }
  }


  virtual ~DescribePresetsResponseBody() = default;
};
class DescribePresetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePresetsResponseBody> body{};

  DescribePresetsResponse() {}

  explicit DescribePresetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePresetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePresetsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePresetsResponse() = default;
};
class DescribePurchasedDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  DescribePurchasedDeviceRequest() {}

  explicit DescribePurchasedDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribePurchasedDeviceRequest() = default;
};
class DescribePurchasedDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> subType{};
  shared_ptr<string> vendor{};
  shared_ptr<string> requestId{};
  shared_ptr<string> description{};
  shared_ptr<string> registerCode{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> region{};
  shared_ptr<string> name{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};
  shared_ptr<string> orderId{};

  DescribePurchasedDeviceResponseBody() {}

  explicit DescribePurchasedDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (registerCode) {
      res["RegisterCode"] = boost::any(*registerCode);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegisterCode") != m.end() && !m["RegisterCode"].empty()) {
      registerCode = make_shared<string>(boost::any_cast<string>(m["RegisterCode"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~DescribePurchasedDeviceResponseBody() = default;
};
class DescribePurchasedDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePurchasedDeviceResponseBody> body{};

  DescribePurchasedDeviceResponse() {}

  explicit DescribePurchasedDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePurchasedDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePurchasedDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePurchasedDeviceResponse() = default;
};
class DescribePurchasedDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> subType{};
  shared_ptr<string> groupId{};
  shared_ptr<string> vendor{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortDirection{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};

  DescribePurchasedDevicesRequest() {}

  explicit DescribePurchasedDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortDirection) {
      res["SortDirection"] = boost::any(*sortDirection);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortDirection") != m.end() && !m["SortDirection"].empty()) {
      sortDirection = make_shared<string>(boost::any_cast<string>(m["SortDirection"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
  }


  virtual ~DescribePurchasedDevicesRequest() = default;
};
class DescribePurchasedDevicesResponseBodyDevices : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> subType{};
  shared_ptr<string> vendor{};
  shared_ptr<string> description{};
  shared_ptr<string> registerCode{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> region{};
  shared_ptr<string> name{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};
  shared_ptr<string> orderId{};

  DescribePurchasedDevicesResponseBodyDevices() {}

  explicit DescribePurchasedDevicesResponseBodyDevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (registerCode) {
      res["RegisterCode"] = boost::any(*registerCode);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegisterCode") != m.end() && !m["RegisterCode"].empty()) {
      registerCode = make_shared<string>(boost::any_cast<string>(m["RegisterCode"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~DescribePurchasedDevicesResponseBodyDevices() = default;
};
class DescribePurchasedDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<DescribePurchasedDevicesResponseBodyDevices>> devices{};

  DescribePurchasedDevicesResponseBody() {}

  explicit DescribePurchasedDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (devices) {
      vector<boost::any> temp1;
      for(auto item1:*devices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Devices"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("Devices") != m.end() && !m["Devices"].empty()) {
      if (typeid(vector<boost::any>) == m["Devices"].type()) {
        vector<DescribePurchasedDevicesResponseBodyDevices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Devices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePurchasedDevicesResponseBodyDevices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        devices = make_shared<vector<DescribePurchasedDevicesResponseBodyDevices>>(expect1);
      }
    }
  }


  virtual ~DescribePurchasedDevicesResponseBody() = default;
};
class DescribePurchasedDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePurchasedDevicesResponseBody> body{};

  DescribePurchasedDevicesResponse() {}

  explicit DescribePurchasedDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePurchasedDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePurchasedDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePurchasedDevicesResponse() = default;
};
class DescribeRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> type{};
  shared_ptr<string> streamId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> privateBucket{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortDirection{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};

  DescribeRecordsRequest() {}

  explicit DescribeRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (streamId) {
      res["StreamId"] = boost::any(*streamId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (privateBucket) {
      res["PrivateBucket"] = boost::any(*privateBucket);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortDirection) {
      res["SortDirection"] = boost::any(*sortDirection);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("StreamId") != m.end() && !m["StreamId"].empty()) {
      streamId = make_shared<string>(boost::any_cast<string>(m["StreamId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PrivateBucket") != m.end() && !m["PrivateBucket"].empty()) {
      privateBucket = make_shared<bool>(boost::any_cast<bool>(m["PrivateBucket"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortDirection") != m.end() && !m["SortDirection"].empty()) {
      sortDirection = make_shared<string>(boost::any_cast<string>(m["SortDirection"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
  }


  virtual ~DescribeRecordsRequest() = default;
};
class DescribeRecordsResponseBodyRecords : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> height{};
  shared_ptr<string> url{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> fileFormat{};
  shared_ptr<string> streamId{};
  shared_ptr<string> ossObject{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<long> width{};
  shared_ptr<string> templateId{};
  shared_ptr<string> id{};
  shared_ptr<string> ossEndpoint{};

  DescribeRecordsResponseBodyRecords() {}

  explicit DescribeRecordsResponseBodyRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (fileFormat) {
      res["FileFormat"] = boost::any(*fileFormat);
    }
    if (streamId) {
      res["StreamId"] = boost::any(*streamId);
    }
    if (ossObject) {
      res["OssObject"] = boost::any(*ossObject);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("FileFormat") != m.end() && !m["FileFormat"].empty()) {
      fileFormat = make_shared<string>(boost::any_cast<string>(m["FileFormat"]));
    }
    if (m.find("StreamId") != m.end() && !m["StreamId"].empty()) {
      streamId = make_shared<string>(boost::any_cast<string>(m["StreamId"]));
    }
    if (m.find("OssObject") != m.end() && !m["OssObject"].empty()) {
      ossObject = make_shared<string>(boost::any_cast<string>(m["OssObject"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~DescribeRecordsResponseBodyRecords() = default;
};
class DescribeRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<string> nextStartTime{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<DescribeRecordsResponseBodyRecords>> records{};

  DescribeRecordsResponseBody() {}

  explicit DescribeRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (nextStartTime) {
      res["NextStartTime"] = boost::any(*nextStartTime);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("NextStartTime") != m.end() && !m["NextStartTime"].empty()) {
      nextStartTime = make_shared<string>(boost::any_cast<string>(m["NextStartTime"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<DescribeRecordsResponseBodyRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRecordsResponseBodyRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<DescribeRecordsResponseBodyRecords>>(expect1);
      }
    }
  }


  virtual ~DescribeRecordsResponseBody() = default;
};
class DescribeRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRecordsResponseBody> body{};

  DescribeRecordsResponse() {}

  explicit DescribeRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRecordsResponse() = default;
};
class DescribeStreamRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  DescribeStreamRequest() {}

  explicit DescribeStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeStreamRequest() = default;
};
class DescribeStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> playDomain{};
  shared_ptr<string> protocol{};
  shared_ptr<string> deviceId{};
  shared_ptr<long> height{};
  shared_ptr<string> requestId{};
  shared_ptr<string> groupId{};
  shared_ptr<long> width{};
  shared_ptr<string> app{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> name{};
  shared_ptr<string> pushDomain{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};

  DescribeStreamResponseBody() {}

  explicit DescribeStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (playDomain) {
      res["PlayDomain"] = boost::any(*playDomain);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (app) {
      res["App"] = boost::any(*app);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pushDomain) {
      res["PushDomain"] = boost::any(*pushDomain);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("PlayDomain") != m.end() && !m["PlayDomain"].empty()) {
      playDomain = make_shared<string>(boost::any_cast<string>(m["PlayDomain"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("App") != m.end() && !m["App"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PushDomain") != m.end() && !m["PushDomain"].empty()) {
      pushDomain = make_shared<string>(boost::any_cast<string>(m["PushDomain"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeStreamResponseBody() = default;
};
class DescribeStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeStreamResponseBody> body{};

  DescribeStreamResponse() {}

  explicit DescribeStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStreamResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStreamResponse() = default;
};
class DescribeStreamsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> groupId{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> parentId{};
  shared_ptr<string> name{};
  shared_ptr<string> domain{};
  shared_ptr<string> app{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortDirection{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};

  DescribeStreamsRequest() {}

  explicit DescribeStreamsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (app) {
      res["App"] = boost::any(*app);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortDirection) {
      res["SortDirection"] = boost::any(*sortDirection);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("App") != m.end() && !m["App"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortDirection") != m.end() && !m["SortDirection"].empty()) {
      sortDirection = make_shared<string>(boost::any_cast<string>(m["SortDirection"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
  }


  virtual ~DescribeStreamsRequest() = default;
};
class DescribeStreamsResponseBodyStreams : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> playDomain{};
  shared_ptr<string> protocol{};
  shared_ptr<string> deviceId{};
  shared_ptr<long> height{};
  shared_ptr<string> groupId{};
  shared_ptr<string> app{};
  shared_ptr<long> width{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> name{};
  shared_ptr<string> pushDomain{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};

  DescribeStreamsResponseBodyStreams() {}

  explicit DescribeStreamsResponseBodyStreams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (playDomain) {
      res["PlayDomain"] = boost::any(*playDomain);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (app) {
      res["App"] = boost::any(*app);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pushDomain) {
      res["PushDomain"] = boost::any(*pushDomain);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("PlayDomain") != m.end() && !m["PlayDomain"].empty()) {
      playDomain = make_shared<string>(boost::any_cast<string>(m["PlayDomain"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("App") != m.end() && !m["App"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PushDomain") != m.end() && !m["PushDomain"].empty()) {
      pushDomain = make_shared<string>(boost::any_cast<string>(m["PushDomain"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeStreamsResponseBodyStreams() = default;
};
class DescribeStreamsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<DescribeStreamsResponseBodyStreams>> streams{};

  DescribeStreamsResponseBody() {}

  explicit DescribeStreamsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (streams) {
      vector<boost::any> temp1;
      for(auto item1:*streams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Streams"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("Streams") != m.end() && !m["Streams"].empty()) {
      if (typeid(vector<boost::any>) == m["Streams"].type()) {
        vector<DescribeStreamsResponseBodyStreams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Streams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeStreamsResponseBodyStreams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        streams = make_shared<vector<DescribeStreamsResponseBodyStreams>>(expect1);
      }
    }
  }


  virtual ~DescribeStreamsResponseBody() = default;
};
class DescribeStreamsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeStreamsResponseBody> body{};

  DescribeStreamsResponse() {}

  explicit DescribeStreamsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeStreamsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStreamsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStreamsResponse() = default;
};
class DescribeStreamURLRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> type{};
  shared_ptr<string> outProtocol{};
  shared_ptr<string> outHostType{};
  shared_ptr<string> location{};
  shared_ptr<bool> auth{};
  shared_ptr<string> authKey{};
  shared_ptr<long> expire{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> transcode{};

  DescribeStreamURLRequest() {}

  explicit DescribeStreamURLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (outProtocol) {
      res["OutProtocol"] = boost::any(*outProtocol);
    }
    if (outHostType) {
      res["OutHostType"] = boost::any(*outHostType);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (auth) {
      res["Auth"] = boost::any(*auth);
    }
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (transcode) {
      res["Transcode"] = boost::any(*transcode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("OutProtocol") != m.end() && !m["OutProtocol"].empty()) {
      outProtocol = make_shared<string>(boost::any_cast<string>(m["OutProtocol"]));
    }
    if (m.find("OutHostType") != m.end() && !m["OutHostType"].empty()) {
      outHostType = make_shared<string>(boost::any_cast<string>(m["OutHostType"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Auth") != m.end() && !m["Auth"].empty()) {
      auth = make_shared<bool>(boost::any_cast<bool>(m["Auth"]));
    }
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Transcode") != m.end() && !m["Transcode"].empty()) {
      transcode = make_shared<string>(boost::any_cast<string>(m["Transcode"]));
    }
  }


  virtual ~DescribeStreamURLRequest() = default;
};
class DescribeStreamURLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> requestId{};
  shared_ptr<long> expireTime{};

  DescribeStreamURLResponseBody() {}

  explicit DescribeStreamURLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
  }


  virtual ~DescribeStreamURLResponseBody() = default;
};
class DescribeStreamURLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeStreamURLResponseBody> body{};

  DescribeStreamURLResponse() {}

  explicit DescribeStreamURLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeStreamURLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStreamURLResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStreamURLResponse() = default;
};
class DescribeStreamVodListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};

  DescribeStreamVodListRequest() {}

  explicit DescribeStreamVodListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
  }


  virtual ~DescribeStreamVodListRequest() = default;
};
class DescribeStreamVodListResponseBodyRecords : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};

  DescribeStreamVodListResponseBodyRecords() {}

  explicit DescribeStreamVodListResponseBodyRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeStreamVodListResponseBodyRecords() = default;
};
class DescribeStreamVodListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeStreamVodListResponseBodyRecords>> records{};

  DescribeStreamVodListResponseBody() {}

  explicit DescribeStreamVodListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<DescribeStreamVodListResponseBodyRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeStreamVodListResponseBodyRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<DescribeStreamVodListResponseBodyRecords>>(expect1);
      }
    }
  }


  virtual ~DescribeStreamVodListResponseBody() = default;
};
class DescribeStreamVodListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeStreamVodListResponseBody> body{};

  DescribeStreamVodListResponse() {}

  explicit DescribeStreamVodListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeStreamVodListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStreamVodListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStreamVodListResponse() = default;
};
class DescribeTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  DescribeTemplateRequest() {}

  explicit DescribeTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeTemplateRequest() = default;
};
class DescribeTemplateResponseBodyTransConfigs : public Darabonba::Model {
public:
  shared_ptr<long> gop{};
  shared_ptr<long> width{};
  shared_ptr<long> videoBitrate{};
  shared_ptr<long> height{};
  shared_ptr<string> videoCodec{};
  shared_ptr<long> fps{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  DescribeTemplateResponseBodyTransConfigs() {}

  explicit DescribeTemplateResponseBodyTransConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gop) {
      res["Gop"] = boost::any(*gop);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (videoBitrate) {
      res["VideoBitrate"] = boost::any(*videoBitrate);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (videoCodec) {
      res["VideoCodec"] = boost::any(*videoCodec);
    }
    if (fps) {
      res["Fps"] = boost::any(*fps);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Gop") != m.end() && !m["Gop"].empty()) {
      gop = make_shared<long>(boost::any_cast<long>(m["Gop"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("VideoBitrate") != m.end() && !m["VideoBitrate"].empty()) {
      videoBitrate = make_shared<long>(boost::any_cast<long>(m["VideoBitrate"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("VideoCodec") != m.end() && !m["VideoCodec"].empty()) {
      videoCodec = make_shared<string>(boost::any_cast<string>(m["VideoCodec"]));
    }
    if (m.find("Fps") != m.end() && !m["Fps"].empty()) {
      fps = make_shared<long>(boost::any_cast<long>(m["Fps"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeTemplateResponseBodyTransConfigs() = default;
};
class DescribeTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> trigger{};
  shared_ptr<string> hlsTs{};
  shared_ptr<string> mp4{};
  shared_ptr<string> jpgOverwrite{};
  shared_ptr<string> callback{};
  shared_ptr<string> requestId{};
  shared_ptr<string> description{};
  shared_ptr<string> region{};
  shared_ptr<long> retention{};
  shared_ptr<string> hlsM3u8{};
  shared_ptr<string> name{};
  shared_ptr<string> flv{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> ossFilePrefix{};
  shared_ptr<string> jpgOnDemand{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> fileFormat{};
  shared_ptr<string> jpgSequence{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<long> interval{};
  shared_ptr<string> id{};
  shared_ptr<vector<DescribeTemplateResponseBodyTransConfigs>> transConfigs{};

  DescribeTemplateResponseBody() {}

  explicit DescribeTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (trigger) {
      res["Trigger"] = boost::any(*trigger);
    }
    if (hlsTs) {
      res["HlsTs"] = boost::any(*hlsTs);
    }
    if (mp4) {
      res["Mp4"] = boost::any(*mp4);
    }
    if (jpgOverwrite) {
      res["JpgOverwrite"] = boost::any(*jpgOverwrite);
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (hlsM3u8) {
      res["HlsM3u8"] = boost::any(*hlsM3u8);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (flv) {
      res["Flv"] = boost::any(*flv);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (ossFilePrefix) {
      res["OssFilePrefix"] = boost::any(*ossFilePrefix);
    }
    if (jpgOnDemand) {
      res["JpgOnDemand"] = boost::any(*jpgOnDemand);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (fileFormat) {
      res["FileFormat"] = boost::any(*fileFormat);
    }
    if (jpgSequence) {
      res["JpgSequence"] = boost::any(*jpgSequence);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (transConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*transConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Trigger") != m.end() && !m["Trigger"].empty()) {
      trigger = make_shared<string>(boost::any_cast<string>(m["Trigger"]));
    }
    if (m.find("HlsTs") != m.end() && !m["HlsTs"].empty()) {
      hlsTs = make_shared<string>(boost::any_cast<string>(m["HlsTs"]));
    }
    if (m.find("Mp4") != m.end() && !m["Mp4"].empty()) {
      mp4 = make_shared<string>(boost::any_cast<string>(m["Mp4"]));
    }
    if (m.find("JpgOverwrite") != m.end() && !m["JpgOverwrite"].empty()) {
      jpgOverwrite = make_shared<string>(boost::any_cast<string>(m["JpgOverwrite"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("HlsM3u8") != m.end() && !m["HlsM3u8"].empty()) {
      hlsM3u8 = make_shared<string>(boost::any_cast<string>(m["HlsM3u8"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Flv") != m.end() && !m["Flv"].empty()) {
      flv = make_shared<string>(boost::any_cast<string>(m["Flv"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("OssFilePrefix") != m.end() && !m["OssFilePrefix"].empty()) {
      ossFilePrefix = make_shared<string>(boost::any_cast<string>(m["OssFilePrefix"]));
    }
    if (m.find("JpgOnDemand") != m.end() && !m["JpgOnDemand"].empty()) {
      jpgOnDemand = make_shared<string>(boost::any_cast<string>(m["JpgOnDemand"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("FileFormat") != m.end() && !m["FileFormat"].empty()) {
      fileFormat = make_shared<string>(boost::any_cast<string>(m["FileFormat"]));
    }
    if (m.find("JpgSequence") != m.end() && !m["JpgSequence"].empty()) {
      jpgSequence = make_shared<string>(boost::any_cast<string>(m["JpgSequence"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("TransConfigs") != m.end() && !m["TransConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["TransConfigs"].type()) {
        vector<DescribeTemplateResponseBodyTransConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTemplateResponseBodyTransConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transConfigs = make_shared<vector<DescribeTemplateResponseBodyTransConfigs>>(expect1);
      }
    }
  }


  virtual ~DescribeTemplateResponseBody() = default;
};
class DescribeTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTemplateResponseBody> body{};

  DescribeTemplateResponse() {}

  explicit DescribeTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTemplateResponse() = default;
};
class DescribeTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> type{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortDirection{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};

  DescribeTemplatesRequest() {}

  explicit DescribeTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortDirection) {
      res["SortDirection"] = boost::any(*sortDirection);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortDirection") != m.end() && !m["SortDirection"].empty()) {
      sortDirection = make_shared<string>(boost::any_cast<string>(m["SortDirection"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
  }


  virtual ~DescribeTemplatesRequest() = default;
};
class DescribeTemplatesResponseBodyTemplatesTransConfigs : public Darabonba::Model {
public:
  shared_ptr<long> gop{};
  shared_ptr<long> width{};
  shared_ptr<long> videoBitrate{};
  shared_ptr<long> height{};
  shared_ptr<string> videoCodec{};
  shared_ptr<long> fps{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  DescribeTemplatesResponseBodyTemplatesTransConfigs() {}

  explicit DescribeTemplatesResponseBodyTemplatesTransConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gop) {
      res["Gop"] = boost::any(*gop);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (videoBitrate) {
      res["VideoBitrate"] = boost::any(*videoBitrate);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (videoCodec) {
      res["VideoCodec"] = boost::any(*videoCodec);
    }
    if (fps) {
      res["Fps"] = boost::any(*fps);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Gop") != m.end() && !m["Gop"].empty()) {
      gop = make_shared<long>(boost::any_cast<long>(m["Gop"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("VideoBitrate") != m.end() && !m["VideoBitrate"].empty()) {
      videoBitrate = make_shared<long>(boost::any_cast<long>(m["VideoBitrate"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("VideoCodec") != m.end() && !m["VideoCodec"].empty()) {
      videoCodec = make_shared<string>(boost::any_cast<string>(m["VideoCodec"]));
    }
    if (m.find("Fps") != m.end() && !m["Fps"].empty()) {
      fps = make_shared<long>(boost::any_cast<long>(m["Fps"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
  }


  virtual ~DescribeTemplatesResponseBodyTemplatesTransConfigs() = default;
};
class DescribeTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> trigger{};
  shared_ptr<string> ossFilePrefix{};
  shared_ptr<string> hlsTs{};
  shared_ptr<string> mp4{};
  shared_ptr<string> jpgOnDemand{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> jpgSequence{};
  shared_ptr<string> jpgOverwrite{};
  shared_ptr<string> fileFormat{};
  shared_ptr<string> callback{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<long> interval{};
  shared_ptr<string> description{};
  shared_ptr<string> region{};
  shared_ptr<long> retention{};
  shared_ptr<string> hlsM3u8{};
  shared_ptr<string> flv{};
  shared_ptr<string> name{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> id{};
  shared_ptr<vector<DescribeTemplatesResponseBodyTemplatesTransConfigs>> transConfigs{};

  DescribeTemplatesResponseBodyTemplates() {}

  explicit DescribeTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (trigger) {
      res["Trigger"] = boost::any(*trigger);
    }
    if (ossFilePrefix) {
      res["OssFilePrefix"] = boost::any(*ossFilePrefix);
    }
    if (hlsTs) {
      res["HlsTs"] = boost::any(*hlsTs);
    }
    if (mp4) {
      res["Mp4"] = boost::any(*mp4);
    }
    if (jpgOnDemand) {
      res["JpgOnDemand"] = boost::any(*jpgOnDemand);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (jpgSequence) {
      res["JpgSequence"] = boost::any(*jpgSequence);
    }
    if (jpgOverwrite) {
      res["JpgOverwrite"] = boost::any(*jpgOverwrite);
    }
    if (fileFormat) {
      res["FileFormat"] = boost::any(*fileFormat);
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (hlsM3u8) {
      res["HlsM3u8"] = boost::any(*hlsM3u8);
    }
    if (flv) {
      res["Flv"] = boost::any(*flv);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (transConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*transConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Trigger") != m.end() && !m["Trigger"].empty()) {
      trigger = make_shared<string>(boost::any_cast<string>(m["Trigger"]));
    }
    if (m.find("OssFilePrefix") != m.end() && !m["OssFilePrefix"].empty()) {
      ossFilePrefix = make_shared<string>(boost::any_cast<string>(m["OssFilePrefix"]));
    }
    if (m.find("HlsTs") != m.end() && !m["HlsTs"].empty()) {
      hlsTs = make_shared<string>(boost::any_cast<string>(m["HlsTs"]));
    }
    if (m.find("Mp4") != m.end() && !m["Mp4"].empty()) {
      mp4 = make_shared<string>(boost::any_cast<string>(m["Mp4"]));
    }
    if (m.find("JpgOnDemand") != m.end() && !m["JpgOnDemand"].empty()) {
      jpgOnDemand = make_shared<string>(boost::any_cast<string>(m["JpgOnDemand"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("JpgSequence") != m.end() && !m["JpgSequence"].empty()) {
      jpgSequence = make_shared<string>(boost::any_cast<string>(m["JpgSequence"]));
    }
    if (m.find("JpgOverwrite") != m.end() && !m["JpgOverwrite"].empty()) {
      jpgOverwrite = make_shared<string>(boost::any_cast<string>(m["JpgOverwrite"]));
    }
    if (m.find("FileFormat") != m.end() && !m["FileFormat"].empty()) {
      fileFormat = make_shared<string>(boost::any_cast<string>(m["FileFormat"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("HlsM3u8") != m.end() && !m["HlsM3u8"].empty()) {
      hlsM3u8 = make_shared<string>(boost::any_cast<string>(m["HlsM3u8"]));
    }
    if (m.find("Flv") != m.end() && !m["Flv"].empty()) {
      flv = make_shared<string>(boost::any_cast<string>(m["Flv"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("TransConfigs") != m.end() && !m["TransConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["TransConfigs"].type()) {
        vector<DescribeTemplatesResponseBodyTemplatesTransConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTemplatesResponseBodyTemplatesTransConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transConfigs = make_shared<vector<DescribeTemplatesResponseBodyTemplatesTransConfigs>>(expect1);
      }
    }
  }


  virtual ~DescribeTemplatesResponseBodyTemplates() = default;
};
class DescribeTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<DescribeTemplatesResponseBodyTemplates>> templates{};

  DescribeTemplatesResponseBody() {}

  explicit DescribeTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<DescribeTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<DescribeTemplatesResponseBodyTemplates>>(expect1);
      }
    }
  }


  virtual ~DescribeTemplatesResponseBody() = default;
};
class DescribeTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTemplatesResponseBody> body{};

  DescribeTemplatesResponse() {}

  explicit DescribeTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTemplatesResponse() = default;
};
class DescribeVodStreamURLRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> url{};
  shared_ptr<string> txId{};

  DescribeVodStreamURLRequest() {}

  explicit DescribeVodStreamURLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (txId) {
      res["TxId"] = boost::any(*txId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("TxId") != m.end() && !m["TxId"].empty()) {
      txId = make_shared<string>(boost::any_cast<string>(m["TxId"]));
    }
  }


  virtual ~DescribeVodStreamURLRequest() = default;
};
class DescribeVodStreamURLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> outProtocol{};
  shared_ptr<string> requestId{};
  shared_ptr<long> port{};
  shared_ptr<string> txId{};

  DescribeVodStreamURLResponseBody() {}

  explicit DescribeVodStreamURLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (outProtocol) {
      res["OutProtocol"] = boost::any(*outProtocol);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (txId) {
      res["TxId"] = boost::any(*txId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("OutProtocol") != m.end() && !m["OutProtocol"].empty()) {
      outProtocol = make_shared<string>(boost::any_cast<string>(m["OutProtocol"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("TxId") != m.end() && !m["TxId"].empty()) {
      txId = make_shared<string>(boost::any_cast<string>(m["TxId"]));
    }
  }


  virtual ~DescribeVodStreamURLResponseBody() = default;
};
class DescribeVodStreamURLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVodStreamURLResponseBody> body{};

  DescribeVodStreamURLResponse() {}

  explicit DescribeVodStreamURLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVodStreamURLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVodStreamURLResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVodStreamURLResponse() = default;
};
class DescribeVsCertificateDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> certName{};

  DescribeVsCertificateDetailRequest() {}

  explicit DescribeVsCertificateDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
  }


  virtual ~DescribeVsCertificateDetailRequest() = default;
};
class DescribeVsCertificateDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certName{};
  shared_ptr<string> key{};
  shared_ptr<string> cert{};
  shared_ptr<long> certId{};
  shared_ptr<string> requestId{};

  DescribeVsCertificateDetailResponseBody() {}

  explicit DescribeVsCertificateDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (cert) {
      res["Cert"] = boost::any(*cert);
    }
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Cert") != m.end() && !m["Cert"].empty()) {
      cert = make_shared<string>(boost::any_cast<string>(m["Cert"]));
    }
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<long>(boost::any_cast<long>(m["CertId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeVsCertificateDetailResponseBody() = default;
};
class DescribeVsCertificateDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsCertificateDetailResponseBody> body{};

  DescribeVsCertificateDetailResponse() {}

  explicit DescribeVsCertificateDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsCertificateDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsCertificateDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsCertificateDetailResponse() = default;
};
class DescribeVsCertificateListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};

  DescribeVsCertificateListRequest() {}

  explicit DescribeVsCertificateListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeVsCertificateListRequest() = default;
};
class DescribeVsCertificateListResponseBodyCertificateListModelCertList : public Darabonba::Model {
public:
  shared_ptr<long> lastTime{};
  shared_ptr<string> fingerprint{};
  shared_ptr<string> certName{};
  shared_ptr<string> issuer{};
  shared_ptr<long> certId{};
  shared_ptr<string> common{};

  DescribeVsCertificateListResponseBodyCertificateListModelCertList() {}

  explicit DescribeVsCertificateListResponseBodyCertificateListModelCertList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastTime) {
      res["LastTime"] = boost::any(*lastTime);
    }
    if (fingerprint) {
      res["Fingerprint"] = boost::any(*fingerprint);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (common) {
      res["Common"] = boost::any(*common);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastTime") != m.end() && !m["LastTime"].empty()) {
      lastTime = make_shared<long>(boost::any_cast<long>(m["LastTime"]));
    }
    if (m.find("Fingerprint") != m.end() && !m["Fingerprint"].empty()) {
      fingerprint = make_shared<string>(boost::any_cast<string>(m["Fingerprint"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<long>(boost::any_cast<long>(m["CertId"]));
    }
    if (m.find("Common") != m.end() && !m["Common"].empty()) {
      common = make_shared<string>(boost::any_cast<string>(m["Common"]));
    }
  }


  virtual ~DescribeVsCertificateListResponseBodyCertificateListModelCertList() = default;
};
class DescribeVsCertificateListResponseBodyCertificateListModel : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<DescribeVsCertificateListResponseBodyCertificateListModelCertList>> certList{};

  DescribeVsCertificateListResponseBodyCertificateListModel() {}

  explicit DescribeVsCertificateListResponseBodyCertificateListModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (certList) {
      vector<boost::any> temp1;
      for(auto item1:*certList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("CertList") != m.end() && !m["CertList"].empty()) {
      if (typeid(vector<boost::any>) == m["CertList"].type()) {
        vector<DescribeVsCertificateListResponseBodyCertificateListModelCertList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsCertificateListResponseBodyCertificateListModelCertList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certList = make_shared<vector<DescribeVsCertificateListResponseBodyCertificateListModelCertList>>(expect1);
      }
    }
  }


  virtual ~DescribeVsCertificateListResponseBodyCertificateListModel() = default;
};
class DescribeVsCertificateListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeVsCertificateListResponseBodyCertificateListModel> certificateListModel{};

  DescribeVsCertificateListResponseBody() {}

  explicit DescribeVsCertificateListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (certificateListModel) {
      res["CertificateListModel"] = certificateListModel ? boost::any(certificateListModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CertificateListModel") != m.end() && !m["CertificateListModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["CertificateListModel"].type()) {
        DescribeVsCertificateListResponseBodyCertificateListModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CertificateListModel"]));
        certificateListModel = make_shared<DescribeVsCertificateListResponseBodyCertificateListModel>(model1);
      }
    }
  }


  virtual ~DescribeVsCertificateListResponseBody() = default;
};
class DescribeVsCertificateListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsCertificateListResponseBody> body{};

  DescribeVsCertificateListResponse() {}

  explicit DescribeVsCertificateListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsCertificateListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsCertificateListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsCertificateListResponse() = default;
};
class DescribeVsDomainBpsDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};

  DescribeVsDomainBpsDataRequest() {}

  explicit DescribeVsDomainBpsDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
  }


  virtual ~DescribeVsDomainBpsDataRequest() = default;
};
class DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> bpsValue{};
  shared_ptr<string> timeStamp{};

  DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() {}

  explicit DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bpsValue) {
      res["BpsValue"] = boost::any(*bpsValue);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BpsValue") != m.end() && !m["BpsValue"].empty()) {
      bpsValue = make_shared<string>(boost::any_cast<string>(m["BpsValue"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() = default;
};
class DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>> dataModule{};

  DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval() {}

  explicit DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeVsDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval() = default;
};
class DescribeVsDomainBpsDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval> bpsDataPerInterval{};

  DescribeVsDomainBpsDataResponseBody() {}

  explicit DescribeVsDomainBpsDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (bpsDataPerInterval) {
      res["BpsDataPerInterval"] = bpsDataPerInterval ? boost::any(bpsDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("BpsDataPerInterval") != m.end() && !m["BpsDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["BpsDataPerInterval"].type()) {
        DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BpsDataPerInterval"]));
        bpsDataPerInterval = make_shared<DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainBpsDataResponseBody() = default;
};
class DescribeVsDomainBpsDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsDomainBpsDataResponseBody> body{};

  DescribeVsDomainBpsDataResponse() {}

  explicit DescribeVsDomainBpsDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsDomainBpsDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsDomainBpsDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainBpsDataResponse() = default;
};
class DescribeVsDomainCertificateInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};

  DescribeVsDomainCertificateInfoRequest() {}

  explicit DescribeVsDomainCertificateInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeVsDomainCertificateInfoRequest() = default;
};
class DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> certLife{};
  shared_ptr<string> certExpireTime{};
  shared_ptr<string> SSLPub{};
  shared_ptr<string> certType{};
  shared_ptr<string> serverCertificateStatus{};
  shared_ptr<string> certDomainName{};
  shared_ptr<string> certName{};
  shared_ptr<string> certOrg{};
  shared_ptr<string> domainName{};

  DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo() {}

  explicit DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (certLife) {
      res["CertLife"] = boost::any(*certLife);
    }
    if (certExpireTime) {
      res["CertExpireTime"] = boost::any(*certExpireTime);
    }
    if (SSLPub) {
      res["SSLPub"] = boost::any(*SSLPub);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (serverCertificateStatus) {
      res["ServerCertificateStatus"] = boost::any(*serverCertificateStatus);
    }
    if (certDomainName) {
      res["CertDomainName"] = boost::any(*certDomainName);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certOrg) {
      res["CertOrg"] = boost::any(*certOrg);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("CertLife") != m.end() && !m["CertLife"].empty()) {
      certLife = make_shared<string>(boost::any_cast<string>(m["CertLife"]));
    }
    if (m.find("CertExpireTime") != m.end() && !m["CertExpireTime"].empty()) {
      certExpireTime = make_shared<string>(boost::any_cast<string>(m["CertExpireTime"]));
    }
    if (m.find("SSLPub") != m.end() && !m["SSLPub"].empty()) {
      SSLPub = make_shared<string>(boost::any_cast<string>(m["SSLPub"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("ServerCertificateStatus") != m.end() && !m["ServerCertificateStatus"].empty()) {
      serverCertificateStatus = make_shared<string>(boost::any_cast<string>(m["ServerCertificateStatus"]));
    }
    if (m.find("CertDomainName") != m.end() && !m["CertDomainName"].empty()) {
      certDomainName = make_shared<string>(boost::any_cast<string>(m["CertDomainName"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertOrg") != m.end() && !m["CertOrg"].empty()) {
      certOrg = make_shared<string>(boost::any_cast<string>(m["CertOrg"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo() = default;
};
class DescribeVsDomainCertificateInfoResponseBodyCertInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo>> certInfo{};

  DescribeVsDomainCertificateInfoResponseBodyCertInfos() {}

  explicit DescribeVsDomainCertificateInfoResponseBodyCertInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certInfo) {
      vector<boost::any> temp1;
      for(auto item1:*certInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertInfo") != m.end() && !m["CertInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["CertInfo"].type()) {
        vector<DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certInfo = make_shared<vector<DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeVsDomainCertificateInfoResponseBodyCertInfos() = default;
};
class DescribeVsDomainCertificateInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeVsDomainCertificateInfoResponseBodyCertInfos> certInfos{};

  DescribeVsDomainCertificateInfoResponseBody() {}

  explicit DescribeVsDomainCertificateInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (certInfos) {
      res["CertInfos"] = certInfos ? boost::any(certInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CertInfos") != m.end() && !m["CertInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["CertInfos"].type()) {
        DescribeVsDomainCertificateInfoResponseBodyCertInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CertInfos"]));
        certInfos = make_shared<DescribeVsDomainCertificateInfoResponseBodyCertInfos>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainCertificateInfoResponseBody() = default;
};
class DescribeVsDomainCertificateInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsDomainCertificateInfoResponseBody> body{};

  DescribeVsDomainCertificateInfoResponse() {}

  explicit DescribeVsDomainCertificateInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsDomainCertificateInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsDomainCertificateInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainCertificateInfoResponse() = default;
};
class DescribeVsDomainConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> functionNames{};

  DescribeVsDomainConfigsRequest() {}

  explicit DescribeVsDomainConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (functionNames) {
      res["FunctionNames"] = boost::any(*functionNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("FunctionNames") != m.end() && !m["FunctionNames"].empty()) {
      functionNames = make_shared<string>(boost::any_cast<string>(m["FunctionNames"]));
    }
  }


  virtual ~DescribeVsDomainConfigsRequest() = default;
};
class DescribeVsDomainConfigsResponseBodyDomainConfigsFunctionArgs : public Darabonba::Model {
public:
  shared_ptr<string> argName{};
  shared_ptr<string> argValue{};

  DescribeVsDomainConfigsResponseBodyDomainConfigsFunctionArgs() {}

  explicit DescribeVsDomainConfigsResponseBodyDomainConfigsFunctionArgs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (argName) {
      res["ArgName"] = boost::any(*argName);
    }
    if (argValue) {
      res["ArgValue"] = boost::any(*argValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArgName") != m.end() && !m["ArgName"].empty()) {
      argName = make_shared<string>(boost::any_cast<string>(m["ArgName"]));
    }
    if (m.find("ArgValue") != m.end() && !m["ArgValue"].empty()) {
      argValue = make_shared<string>(boost::any_cast<string>(m["ArgValue"]));
    }
  }


  virtual ~DescribeVsDomainConfigsResponseBodyDomainConfigsFunctionArgs() = default;
};
class DescribeVsDomainConfigsResponseBodyDomainConfigs : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> configId{};
  shared_ptr<string> functionName{};
  shared_ptr<vector<DescribeVsDomainConfigsResponseBodyDomainConfigsFunctionArgs>> functionArgs{};

  DescribeVsDomainConfigsResponseBodyDomainConfigs() {}

  explicit DescribeVsDomainConfigsResponseBodyDomainConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (functionName) {
      res["FunctionName"] = boost::any(*functionName);
    }
    if (functionArgs) {
      vector<boost::any> temp1;
      for(auto item1:*functionArgs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FunctionArgs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["FunctionName"]));
    }
    if (m.find("FunctionArgs") != m.end() && !m["FunctionArgs"].empty()) {
      if (typeid(vector<boost::any>) == m["FunctionArgs"].type()) {
        vector<DescribeVsDomainConfigsResponseBodyDomainConfigsFunctionArgs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FunctionArgs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsDomainConfigsResponseBodyDomainConfigsFunctionArgs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        functionArgs = make_shared<vector<DescribeVsDomainConfigsResponseBodyDomainConfigsFunctionArgs>>(expect1);
      }
    }
  }


  virtual ~DescribeVsDomainConfigsResponseBodyDomainConfigs() = default;
};
class DescribeVsDomainConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeVsDomainConfigsResponseBodyDomainConfigs>> domainConfigs{};

  DescribeVsDomainConfigsResponseBody() {}

  explicit DescribeVsDomainConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*domainConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainConfigs") != m.end() && !m["DomainConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainConfigs"].type()) {
        vector<DescribeVsDomainConfigsResponseBodyDomainConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsDomainConfigsResponseBodyDomainConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainConfigs = make_shared<vector<DescribeVsDomainConfigsResponseBodyDomainConfigs>>(expect1);
      }
    }
  }


  virtual ~DescribeVsDomainConfigsResponseBody() = default;
};
class DescribeVsDomainConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsDomainConfigsResponseBody> body{};

  DescribeVsDomainConfigsResponse() {}

  explicit DescribeVsDomainConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsDomainConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsDomainConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainConfigsResponse() = default;
};
class DescribeVsDomainDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};

  DescribeVsDomainDetailRequest() {}

  explicit DescribeVsDomainDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeVsDomainDetailRequest() = default;
};
class DescribeVsDomainDetailResponseBodyDomainConfig : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> description{};
  shared_ptr<string> SSLProtocol{};
  shared_ptr<string> region{};
  shared_ptr<string> scope{};
  shared_ptr<string> cname{};
  shared_ptr<string> domainStatus{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainType{};

  DescribeVsDomainDetailResponseBodyDomainConfig() {}

  explicit DescribeVsDomainDetailResponseBodyDomainConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (SSLProtocol) {
      res["SSLProtocol"] = boost::any(*SSLProtocol);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SSLProtocol") != m.end() && !m["SSLProtocol"].empty()) {
      SSLProtocol = make_shared<string>(boost::any_cast<string>(m["SSLProtocol"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
  }


  virtual ~DescribeVsDomainDetailResponseBodyDomainConfig() = default;
};
class DescribeVsDomainDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeVsDomainDetailResponseBodyDomainConfig> domainConfig{};

  DescribeVsDomainDetailResponseBody() {}

  explicit DescribeVsDomainDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainConfig) {
      res["DomainConfig"] = domainConfig ? boost::any(domainConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainConfig") != m.end() && !m["DomainConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainConfig"].type()) {
        DescribeVsDomainDetailResponseBodyDomainConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainConfig"]));
        domainConfig = make_shared<DescribeVsDomainDetailResponseBodyDomainConfig>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainDetailResponseBody() = default;
};
class DescribeVsDomainDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsDomainDetailResponseBody> body{};

  DescribeVsDomainDetailResponse() {}

  explicit DescribeVsDomainDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsDomainDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsDomainDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainDetailResponse() = default;
};
class DescribeVsDomainPvDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeVsDomainPvDataRequest() {}

  explicit DescribeVsDomainPvDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeVsDomainPvDataRequest() = default;
};
class DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> timeStamp{};

  DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData() {}

  explicit DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData() = default;
};
class DescribeVsDomainPvDataResponseBodyPvDataInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData>> usageData{};

  DescribeVsDomainPvDataResponseBodyPvDataInterval() {}

  explicit DescribeVsDomainPvDataResponseBodyPvDataInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (usageData) {
      vector<boost::any> temp1;
      for(auto item1:*usageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UsageData") != m.end() && !m["UsageData"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageData"].type()) {
        vector<DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageData = make_shared<vector<DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData>>(expect1);
      }
    }
  }


  virtual ~DescribeVsDomainPvDataResponseBodyPvDataInterval() = default;
};
class DescribeVsDomainPvDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeVsDomainPvDataResponseBodyPvDataInterval> pvDataInterval{};

  DescribeVsDomainPvDataResponseBody() {}

  explicit DescribeVsDomainPvDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (pvDataInterval) {
      res["PvDataInterval"] = pvDataInterval ? boost::any(pvDataInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("PvDataInterval") != m.end() && !m["PvDataInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["PvDataInterval"].type()) {
        DescribeVsDomainPvDataResponseBodyPvDataInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PvDataInterval"]));
        pvDataInterval = make_shared<DescribeVsDomainPvDataResponseBodyPvDataInterval>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainPvDataResponseBody() = default;
};
class DescribeVsDomainPvDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsDomainPvDataResponseBody> body{};

  DescribeVsDomainPvDataResponse() {}

  explicit DescribeVsDomainPvDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsDomainPvDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsDomainPvDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainPvDataResponse() = default;
};
class DescribeVsDomainPvUvDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeVsDomainPvUvDataRequest() {}

  explicit DescribeVsDomainPvUvDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeVsDomainPvUvDataRequest() = default;
};
class DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo : public Darabonba::Model {
public:
  shared_ptr<string> PV{};
  shared_ptr<string> timeStamp{};
  shared_ptr<string> UV{};

  DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo() {}

  explicit DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (PV) {
      res["PV"] = boost::any(*PV);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (UV) {
      res["UV"] = boost::any(*UV);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PV") != m.end() && !m["PV"].empty()) {
      PV = make_shared<string>(boost::any_cast<string>(m["PV"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("UV") != m.end() && !m["UV"].empty()) {
      UV = make_shared<string>(boost::any_cast<string>(m["UV"]));
    }
  }


  virtual ~DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo() = default;
};
class DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo>> pvUvDataInfo{};

  DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos() {}

  explicit DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pvUvDataInfo) {
      vector<boost::any> temp1;
      for(auto item1:*pvUvDataInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PvUvDataInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PvUvDataInfo") != m.end() && !m["PvUvDataInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["PvUvDataInfo"].type()) {
        vector<DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PvUvDataInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pvUvDataInfo = make_shared<vector<DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos() = default;
};
class DescribeVsDomainPvUvDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos> pvUvDataInfos{};

  DescribeVsDomainPvUvDataResponseBody() {}

  explicit DescribeVsDomainPvUvDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (pvUvDataInfos) {
      res["PvUvDataInfos"] = pvUvDataInfos ? boost::any(pvUvDataInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("PvUvDataInfos") != m.end() && !m["PvUvDataInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["PvUvDataInfos"].type()) {
        DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PvUvDataInfos"]));
        pvUvDataInfos = make_shared<DescribeVsDomainPvUvDataResponseBodyPvUvDataInfos>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainPvUvDataResponseBody() = default;
};
class DescribeVsDomainPvUvDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsDomainPvUvDataResponseBody> body{};

  DescribeVsDomainPvUvDataResponse() {}

  explicit DescribeVsDomainPvUvDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsDomainPvUvDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsDomainPvUvDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainPvUvDataResponse() = default;
};
class DescribeVsDomainRecordDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeVsDomainRecordDataRequest() {}

  explicit DescribeVsDomainRecordDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeVsDomainRecordDataRequest() = default;
};
class DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> recordValue{};
  shared_ptr<string> timeStamp{};

  DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule() {}

  explicit DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordValue) {
      res["RecordValue"] = boost::any(*recordValue);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordValue") != m.end() && !m["RecordValue"].empty()) {
      recordValue = make_shared<string>(boost::any_cast<string>(m["RecordValue"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule() = default;
};
class DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule>> dataModule{};

  DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval() {}

  explicit DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval() = default;
};
class DescribeVsDomainRecordDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval> recordDataPerInterval{};

  DescribeVsDomainRecordDataResponseBody() {}

  explicit DescribeVsDomainRecordDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (recordDataPerInterval) {
      res["RecordDataPerInterval"] = recordDataPerInterval ? boost::any(recordDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("RecordDataPerInterval") != m.end() && !m["RecordDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["RecordDataPerInterval"].type()) {
        DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RecordDataPerInterval"]));
        recordDataPerInterval = make_shared<DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainRecordDataResponseBody() = default;
};
class DescribeVsDomainRecordDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsDomainRecordDataResponseBody> body{};

  DescribeVsDomainRecordDataResponse() {}

  explicit DescribeVsDomainRecordDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsDomainRecordDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsDomainRecordDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainRecordDataResponse() = default;
};
class DescribeVsDomainRegionDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeVsDomainRegionDataRequest() {}

  explicit DescribeVsDomainRegionDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeVsDomainRegionDataRequest() = default;
};
class DescribeVsDomainRegionDataResponseBodyValueRegionProportionData : public Darabonba::Model {
public:
  shared_ptr<string> totalQuery{};
  shared_ptr<string> totalBytes{};
  shared_ptr<string> avgResponseRate{};
  shared_ptr<string> avgResponseTime{};
  shared_ptr<string> reqErrRate{};
  shared_ptr<string> avgObjectSize{};
  shared_ptr<string> bps{};
  shared_ptr<string> qps{};
  shared_ptr<string> regionEname{};
  shared_ptr<string> region{};
  shared_ptr<string> proportion{};
  shared_ptr<string> bytesProportion{};

  DescribeVsDomainRegionDataResponseBodyValueRegionProportionData() {}

  explicit DescribeVsDomainRegionDataResponseBodyValueRegionProportionData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalQuery) {
      res["TotalQuery"] = boost::any(*totalQuery);
    }
    if (totalBytes) {
      res["TotalBytes"] = boost::any(*totalBytes);
    }
    if (avgResponseRate) {
      res["AvgResponseRate"] = boost::any(*avgResponseRate);
    }
    if (avgResponseTime) {
      res["AvgResponseTime"] = boost::any(*avgResponseTime);
    }
    if (reqErrRate) {
      res["ReqErrRate"] = boost::any(*reqErrRate);
    }
    if (avgObjectSize) {
      res["AvgObjectSize"] = boost::any(*avgObjectSize);
    }
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (regionEname) {
      res["RegionEname"] = boost::any(*regionEname);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (proportion) {
      res["Proportion"] = boost::any(*proportion);
    }
    if (bytesProportion) {
      res["BytesProportion"] = boost::any(*bytesProportion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalQuery") != m.end() && !m["TotalQuery"].empty()) {
      totalQuery = make_shared<string>(boost::any_cast<string>(m["TotalQuery"]));
    }
    if (m.find("TotalBytes") != m.end() && !m["TotalBytes"].empty()) {
      totalBytes = make_shared<string>(boost::any_cast<string>(m["TotalBytes"]));
    }
    if (m.find("AvgResponseRate") != m.end() && !m["AvgResponseRate"].empty()) {
      avgResponseRate = make_shared<string>(boost::any_cast<string>(m["AvgResponseRate"]));
    }
    if (m.find("AvgResponseTime") != m.end() && !m["AvgResponseTime"].empty()) {
      avgResponseTime = make_shared<string>(boost::any_cast<string>(m["AvgResponseTime"]));
    }
    if (m.find("ReqErrRate") != m.end() && !m["ReqErrRate"].empty()) {
      reqErrRate = make_shared<string>(boost::any_cast<string>(m["ReqErrRate"]));
    }
    if (m.find("AvgObjectSize") != m.end() && !m["AvgObjectSize"].empty()) {
      avgObjectSize = make_shared<string>(boost::any_cast<string>(m["AvgObjectSize"]));
    }
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<string>(boost::any_cast<string>(m["Bps"]));
    }
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<string>(boost::any_cast<string>(m["Qps"]));
    }
    if (m.find("RegionEname") != m.end() && !m["RegionEname"].empty()) {
      regionEname = make_shared<string>(boost::any_cast<string>(m["RegionEname"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Proportion") != m.end() && !m["Proportion"].empty()) {
      proportion = make_shared<string>(boost::any_cast<string>(m["Proportion"]));
    }
    if (m.find("BytesProportion") != m.end() && !m["BytesProportion"].empty()) {
      bytesProportion = make_shared<string>(boost::any_cast<string>(m["BytesProportion"]));
    }
  }


  virtual ~DescribeVsDomainRegionDataResponseBodyValueRegionProportionData() = default;
};
class DescribeVsDomainRegionDataResponseBodyValue : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsDomainRegionDataResponseBodyValueRegionProportionData>> regionProportionData{};

  DescribeVsDomainRegionDataResponseBodyValue() {}

  explicit DescribeVsDomainRegionDataResponseBodyValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionProportionData) {
      vector<boost::any> temp1;
      for(auto item1:*regionProportionData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionProportionData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionProportionData") != m.end() && !m["RegionProportionData"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionProportionData"].type()) {
        vector<DescribeVsDomainRegionDataResponseBodyValueRegionProportionData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionProportionData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsDomainRegionDataResponseBodyValueRegionProportionData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionProportionData = make_shared<vector<DescribeVsDomainRegionDataResponseBodyValueRegionProportionData>>(expect1);
      }
    }
  }


  virtual ~DescribeVsDomainRegionDataResponseBodyValue() = default;
};
class DescribeVsDomainRegionDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeVsDomainRegionDataResponseBodyValue> value{};

  DescribeVsDomainRegionDataResponseBody() {}

  explicit DescribeVsDomainRegionDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (value) {
      res["Value"] = value ? boost::any(value->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(map<string, boost::any>) == m["Value"].type()) {
        DescribeVsDomainRegionDataResponseBodyValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Value"]));
        value = make_shared<DescribeVsDomainRegionDataResponseBodyValue>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainRegionDataResponseBody() = default;
};
class DescribeVsDomainRegionDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsDomainRegionDataResponseBody> body{};

  DescribeVsDomainRegionDataResponse() {}

  explicit DescribeVsDomainRegionDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsDomainRegionDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsDomainRegionDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainRegionDataResponse() = default;
};
class DescribeVsDomainReqBpsDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};

  DescribeVsDomainReqBpsDataRequest() {}

  explicit DescribeVsDomainReqBpsDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
  }


  virtual ~DescribeVsDomainReqBpsDataRequest() = default;
};
class DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> timeStamp{};
  shared_ptr<string> reqBpsValue{};

  DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule() {}

  explicit DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (reqBpsValue) {
      res["ReqBpsValue"] = boost::any(*reqBpsValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("ReqBpsValue") != m.end() && !m["ReqBpsValue"].empty()) {
      reqBpsValue = make_shared<string>(boost::any_cast<string>(m["ReqBpsValue"]));
    }
  }


  virtual ~DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule() = default;
};
class DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule>> dataModule{};

  DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval() {}

  explicit DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval() = default;
};
class DescribeVsDomainReqBpsDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval> reqBpsDataPerInterval{};

  DescribeVsDomainReqBpsDataResponseBody() {}

  explicit DescribeVsDomainReqBpsDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (reqBpsDataPerInterval) {
      res["ReqBpsDataPerInterval"] = reqBpsDataPerInterval ? boost::any(reqBpsDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("ReqBpsDataPerInterval") != m.end() && !m["ReqBpsDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReqBpsDataPerInterval"].type()) {
        DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReqBpsDataPerInterval"]));
        reqBpsDataPerInterval = make_shared<DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerInterval>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainReqBpsDataResponseBody() = default;
};
class DescribeVsDomainReqBpsDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsDomainReqBpsDataResponseBody> body{};

  DescribeVsDomainReqBpsDataResponse() {}

  explicit DescribeVsDomainReqBpsDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsDomainReqBpsDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsDomainReqBpsDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainReqBpsDataResponse() = default;
};
class DescribeVsDomainReqTrafficDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};

  DescribeVsDomainReqTrafficDataRequest() {}

  explicit DescribeVsDomainReqTrafficDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
  }


  virtual ~DescribeVsDomainReqTrafficDataRequest() = default;
};
class DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> reqTrafficValue{};
  shared_ptr<string> timeStamp{};

  DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule() {}

  explicit DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reqTrafficValue) {
      res["ReqTrafficValue"] = boost::any(*reqTrafficValue);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReqTrafficValue") != m.end() && !m["ReqTrafficValue"].empty()) {
      reqTrafficValue = make_shared<string>(boost::any_cast<string>(m["ReqTrafficValue"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule() = default;
};
class DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule>> dataModule{};

  DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval() {}

  explicit DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval() = default;
};
class DescribeVsDomainReqTrafficDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval> reqTrafficDataPerInterval{};

  DescribeVsDomainReqTrafficDataResponseBody() {}

  explicit DescribeVsDomainReqTrafficDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (reqTrafficDataPerInterval) {
      res["ReqTrafficDataPerInterval"] = reqTrafficDataPerInterval ? boost::any(reqTrafficDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("ReqTrafficDataPerInterval") != m.end() && !m["ReqTrafficDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReqTrafficDataPerInterval"].type()) {
        DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReqTrafficDataPerInterval"]));
        reqTrafficDataPerInterval = make_shared<DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerInterval>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainReqTrafficDataResponseBody() = default;
};
class DescribeVsDomainReqTrafficDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsDomainReqTrafficDataResponseBody> body{};

  DescribeVsDomainReqTrafficDataResponse() {}

  explicit DescribeVsDomainReqTrafficDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsDomainReqTrafficDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsDomainReqTrafficDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainReqTrafficDataResponse() = default;
};
class DescribeVsDomainSnapshotDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeVsDomainSnapshotDataRequest() {}

  explicit DescribeVsDomainSnapshotDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeVsDomainSnapshotDataRequest() = default;
};
class DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> snapshotValue{};
  shared_ptr<string> timeStamp{};

  DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule() {}

  explicit DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (snapshotValue) {
      res["SnapshotValue"] = boost::any(*snapshotValue);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SnapshotValue") != m.end() && !m["SnapshotValue"].empty()) {
      snapshotValue = make_shared<string>(boost::any_cast<string>(m["SnapshotValue"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule() = default;
};
class DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule>> dataModule{};

  DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval() {}

  explicit DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval() = default;
};
class DescribeVsDomainSnapshotDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval> snapshotDataPerInterval{};

  DescribeVsDomainSnapshotDataResponseBody() {}

  explicit DescribeVsDomainSnapshotDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (snapshotDataPerInterval) {
      res["SnapshotDataPerInterval"] = snapshotDataPerInterval ? boost::any(snapshotDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("SnapshotDataPerInterval") != m.end() && !m["SnapshotDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["SnapshotDataPerInterval"].type()) {
        DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SnapshotDataPerInterval"]));
        snapshotDataPerInterval = make_shared<DescribeVsDomainSnapshotDataResponseBodySnapshotDataPerInterval>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainSnapshotDataResponseBody() = default;
};
class DescribeVsDomainSnapshotDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsDomainSnapshotDataResponseBody> body{};

  DescribeVsDomainSnapshotDataResponse() {}

  explicit DescribeVsDomainSnapshotDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsDomainSnapshotDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsDomainSnapshotDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainSnapshotDataResponse() = default;
};
class DescribeVsDomainTrafficDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};

  DescribeVsDomainTrafficDataRequest() {}

  explicit DescribeVsDomainTrafficDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
  }


  virtual ~DescribeVsDomainTrafficDataRequest() = default;
};
class DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> trafficValue{};
  shared_ptr<string> timeStamp{};

  DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule() {}

  explicit DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trafficValue) {
      res["TrafficValue"] = boost::any(*trafficValue);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrafficValue") != m.end() && !m["TrafficValue"].empty()) {
      trafficValue = make_shared<string>(boost::any_cast<string>(m["TrafficValue"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default;
};
class DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>> dataModule{};

  DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval() {}

  explicit DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval() = default;
};
class DescribeVsDomainTrafficDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval> trafficDataPerInterval{};

  DescribeVsDomainTrafficDataResponseBody() {}

  explicit DescribeVsDomainTrafficDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (trafficDataPerInterval) {
      res["TrafficDataPerInterval"] = trafficDataPerInterval ? boost::any(trafficDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("TrafficDataPerInterval") != m.end() && !m["TrafficDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrafficDataPerInterval"].type()) {
        DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrafficDataPerInterval"]));
        trafficDataPerInterval = make_shared<DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainTrafficDataResponseBody() = default;
};
class DescribeVsDomainTrafficDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsDomainTrafficDataResponseBody> body{};

  DescribeVsDomainTrafficDataResponse() {}

  explicit DescribeVsDomainTrafficDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsDomainTrafficDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsDomainTrafficDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainTrafficDataResponse() = default;
};
class DescribeVsDomainUvDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeVsDomainUvDataRequest() {}

  explicit DescribeVsDomainUvDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeVsDomainUvDataRequest() = default;
};
class DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> timeStamp{};

  DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData() {}

  explicit DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData() = default;
};
class DescribeVsDomainUvDataResponseBodyUvDataInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData>> usageData{};

  DescribeVsDomainUvDataResponseBodyUvDataInterval() {}

  explicit DescribeVsDomainUvDataResponseBodyUvDataInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (usageData) {
      vector<boost::any> temp1;
      for(auto item1:*usageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UsageData") != m.end() && !m["UsageData"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageData"].type()) {
        vector<DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageData = make_shared<vector<DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData>>(expect1);
      }
    }
  }


  virtual ~DescribeVsDomainUvDataResponseBodyUvDataInterval() = default;
};
class DescribeVsDomainUvDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeVsDomainUvDataResponseBodyUvDataInterval> uvDataInterval{};

  DescribeVsDomainUvDataResponseBody() {}

  explicit DescribeVsDomainUvDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (uvDataInterval) {
      res["UvDataInterval"] = uvDataInterval ? boost::any(uvDataInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("UvDataInterval") != m.end() && !m["UvDataInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["UvDataInterval"].type()) {
        DescribeVsDomainUvDataResponseBodyUvDataInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UvDataInterval"]));
        uvDataInterval = make_shared<DescribeVsDomainUvDataResponseBodyUvDataInterval>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainUvDataResponseBody() = default;
};
class DescribeVsDomainUvDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsDomainUvDataResponseBody> body{};

  DescribeVsDomainUvDataResponse() {}

  explicit DescribeVsDomainUvDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsDomainUvDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsDomainUvDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsDomainUvDataResponse() = default;
};
class DescribeVsPullStreamInfoConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};

  DescribeVsPullStreamInfoConfigRequest() {}

  explicit DescribeVsPullStreamInfoConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeVsPullStreamInfoConfigRequest() = default;
};
class DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> appName{};
  shared_ptr<string> sourceUrl{};
  shared_ptr<string> startTime{};
  shared_ptr<string> streamName{};
  shared_ptr<string> domainName{};

  DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord() {}

  explicit DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord() = default;
};
class DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord>> liveAppRecord{};

  DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList() {}

  explicit DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveAppRecord) {
      vector<boost::any> temp1;
      for(auto item1:*liveAppRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LiveAppRecord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveAppRecord") != m.end() && !m["LiveAppRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["LiveAppRecord"].type()) {
        vector<DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LiveAppRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        liveAppRecord = make_shared<vector<DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord>>(expect1);
      }
    }
  }


  virtual ~DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList() = default;
};
class DescribeVsPullStreamInfoConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList> liveAppRecordList{};

  DescribeVsPullStreamInfoConfigResponseBody() {}

  explicit DescribeVsPullStreamInfoConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (liveAppRecordList) {
      res["LiveAppRecordList"] = liveAppRecordList ? boost::any(liveAppRecordList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("LiveAppRecordList") != m.end() && !m["LiveAppRecordList"].empty()) {
      if (typeid(map<string, boost::any>) == m["LiveAppRecordList"].type()) {
        DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LiveAppRecordList"]));
        liveAppRecordList = make_shared<DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList>(model1);
      }
    }
  }


  virtual ~DescribeVsPullStreamInfoConfigResponseBody() = default;
};
class DescribeVsPullStreamInfoConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsPullStreamInfoConfigResponseBody> body{};

  DescribeVsPullStreamInfoConfigResponse() {}

  explicit DescribeVsPullStreamInfoConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsPullStreamInfoConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsPullStreamInfoConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsPullStreamInfoConfigResponse() = default;
};
class DescribeVsStorageUsageDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> bucket{};
  shared_ptr<string> splitBy{};
  shared_ptr<string> interval{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeVsStorageUsageDataRequest() {}

  explicit DescribeVsStorageUsageDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (splitBy) {
      res["SplitBy"] = boost::any(*splitBy);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("SplitBy") != m.end() && !m["SplitBy"].empty()) {
      splitBy = make_shared<string>(boost::any_cast<string>(m["SplitBy"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeVsStorageUsageDataRequest() = default;
};
class DescribeVsStorageUsageDataResponseBodyStorageUsageStorageUsageDataModule : public Darabonba::Model {
public:
  shared_ptr<long> storageDataValue{};
  shared_ptr<string> timeStamp{};
  shared_ptr<string> bucket{};

  DescribeVsStorageUsageDataResponseBodyStorageUsageStorageUsageDataModule() {}

  explicit DescribeVsStorageUsageDataResponseBodyStorageUsageStorageUsageDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storageDataValue) {
      res["StorageDataValue"] = boost::any(*storageDataValue);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StorageDataValue") != m.end() && !m["StorageDataValue"].empty()) {
      storageDataValue = make_shared<long>(boost::any_cast<long>(m["StorageDataValue"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
  }


  virtual ~DescribeVsStorageUsageDataResponseBodyStorageUsageStorageUsageDataModule() = default;
};
class DescribeVsStorageUsageDataResponseBodyStorageUsage : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsStorageUsageDataResponseBodyStorageUsageStorageUsageDataModule>> storageUsageDataModule{};

  DescribeVsStorageUsageDataResponseBodyStorageUsage() {}

  explicit DescribeVsStorageUsageDataResponseBodyStorageUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storageUsageDataModule) {
      vector<boost::any> temp1;
      for(auto item1:*storageUsageDataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StorageUsageDataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StorageUsageDataModule") != m.end() && !m["StorageUsageDataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["StorageUsageDataModule"].type()) {
        vector<DescribeVsStorageUsageDataResponseBodyStorageUsageStorageUsageDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StorageUsageDataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsStorageUsageDataResponseBodyStorageUsageStorageUsageDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        storageUsageDataModule = make_shared<vector<DescribeVsStorageUsageDataResponseBodyStorageUsageStorageUsageDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeVsStorageUsageDataResponseBodyStorageUsage() = default;
};
class DescribeVsStorageUsageDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeVsStorageUsageDataResponseBodyStorageUsage> storageUsage{};

  DescribeVsStorageUsageDataResponseBody() {}

  explicit DescribeVsStorageUsageDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (storageUsage) {
      res["StorageUsage"] = storageUsage ? boost::any(storageUsage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StorageUsage") != m.end() && !m["StorageUsage"].empty()) {
      if (typeid(map<string, boost::any>) == m["StorageUsage"].type()) {
        DescribeVsStorageUsageDataResponseBodyStorageUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StorageUsage"]));
        storageUsage = make_shared<DescribeVsStorageUsageDataResponseBodyStorageUsage>(model1);
      }
    }
  }


  virtual ~DescribeVsStorageUsageDataResponseBody() = default;
};
class DescribeVsStorageUsageDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsStorageUsageDataResponseBody> body{};

  DescribeVsStorageUsageDataResponse() {}

  explicit DescribeVsStorageUsageDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsStorageUsageDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsStorageUsageDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsStorageUsageDataResponse() = default;
};
class DescribeVsStreamsNotifyUrlConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};

  DescribeVsStreamsNotifyUrlConfigRequest() {}

  explicit DescribeVsStreamsNotifyUrlConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeVsStreamsNotifyUrlConfigRequest() = default;
};
class DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<string> authKey{};
  shared_ptr<string> domainName{};
  shared_ptr<string> notifyUrl{};

  DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig() {}

  explicit DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (notifyUrl) {
      res["NotifyUrl"] = boost::any(*notifyUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("NotifyUrl") != m.end() && !m["NotifyUrl"].empty()) {
      notifyUrl = make_shared<string>(boost::any_cast<string>(m["NotifyUrl"]));
    }
  }


  virtual ~DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig() = default;
};
class DescribeVsStreamsNotifyUrlConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig> liveStreamsNotifyConfig{};

  DescribeVsStreamsNotifyUrlConfigResponseBody() {}

  explicit DescribeVsStreamsNotifyUrlConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (liveStreamsNotifyConfig) {
      res["LiveStreamsNotifyConfig"] = liveStreamsNotifyConfig ? boost::any(liveStreamsNotifyConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("LiveStreamsNotifyConfig") != m.end() && !m["LiveStreamsNotifyConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LiveStreamsNotifyConfig"].type()) {
        DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LiveStreamsNotifyConfig"]));
        liveStreamsNotifyConfig = make_shared<DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig>(model1);
      }
    }
  }


  virtual ~DescribeVsStreamsNotifyUrlConfigResponseBody() = default;
};
class DescribeVsStreamsNotifyUrlConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsStreamsNotifyUrlConfigResponseBody> body{};

  DescribeVsStreamsNotifyUrlConfigResponse() {}

  explicit DescribeVsStreamsNotifyUrlConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsStreamsNotifyUrlConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsStreamsNotifyUrlConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsStreamsNotifyUrlConfigResponse() = default;
};
class DescribeVsStreamsOnlineListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> appName{};
  shared_ptr<string> streamName{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> streamType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> queryType{};
  shared_ptr<string> orderBy{};

  DescribeVsStreamsOnlineListRequest() {}

  explicit DescribeVsStreamsOnlineListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<string>(boost::any_cast<string>(m["StreamType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
  }


  virtual ~DescribeVsStreamsOnlineListRequest() = default;
};
class DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo : public Darabonba::Model {
public:
  shared_ptr<string> publishTime{};
  shared_ptr<string> appName{};
  shared_ptr<string> publishType{};
  shared_ptr<string> publishUrl{};
  shared_ptr<string> transcoded{};
  shared_ptr<string> streamName{};
  shared_ptr<string> domainName{};
  shared_ptr<string> transcodeId{};
  shared_ptr<string> publishDomain{};

  DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo() {}

  explicit DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (publishType) {
      res["PublishType"] = boost::any(*publishType);
    }
    if (publishUrl) {
      res["PublishUrl"] = boost::any(*publishUrl);
    }
    if (transcoded) {
      res["Transcoded"] = boost::any(*transcoded);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (transcodeId) {
      res["TranscodeId"] = boost::any(*transcodeId);
    }
    if (publishDomain) {
      res["PublishDomain"] = boost::any(*publishDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("PublishType") != m.end() && !m["PublishType"].empty()) {
      publishType = make_shared<string>(boost::any_cast<string>(m["PublishType"]));
    }
    if (m.find("PublishUrl") != m.end() && !m["PublishUrl"].empty()) {
      publishUrl = make_shared<string>(boost::any_cast<string>(m["PublishUrl"]));
    }
    if (m.find("Transcoded") != m.end() && !m["Transcoded"].empty()) {
      transcoded = make_shared<string>(boost::any_cast<string>(m["Transcoded"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("TranscodeId") != m.end() && !m["TranscodeId"].empty()) {
      transcodeId = make_shared<string>(boost::any_cast<string>(m["TranscodeId"]));
    }
    if (m.find("PublishDomain") != m.end() && !m["PublishDomain"].empty()) {
      publishDomain = make_shared<string>(boost::any_cast<string>(m["PublishDomain"]));
    }
  }


  virtual ~DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo() = default;
};
class DescribeVsStreamsOnlineListResponseBodyOnlineInfo : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo>> liveStreamOnlineInfo{};

  DescribeVsStreamsOnlineListResponseBodyOnlineInfo() {}

  explicit DescribeVsStreamsOnlineListResponseBodyOnlineInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveStreamOnlineInfo) {
      vector<boost::any> temp1;
      for(auto item1:*liveStreamOnlineInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LiveStreamOnlineInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveStreamOnlineInfo") != m.end() && !m["LiveStreamOnlineInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["LiveStreamOnlineInfo"].type()) {
        vector<DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LiveStreamOnlineInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        liveStreamOnlineInfo = make_shared<vector<DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeVsStreamsOnlineListResponseBodyOnlineInfo() = default;
};
class DescribeVsStreamsOnlineListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalPage{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};
  shared_ptr<DescribeVsStreamsOnlineListResponseBodyOnlineInfo> onlineInfo{};

  DescribeVsStreamsOnlineListResponseBody() {}

  explicit DescribeVsStreamsOnlineListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (onlineInfo) {
      res["OnlineInfo"] = onlineInfo ? boost::any(onlineInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("OnlineInfo") != m.end() && !m["OnlineInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["OnlineInfo"].type()) {
        DescribeVsStreamsOnlineListResponseBodyOnlineInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OnlineInfo"]));
        onlineInfo = make_shared<DescribeVsStreamsOnlineListResponseBodyOnlineInfo>(model1);
      }
    }
  }


  virtual ~DescribeVsStreamsOnlineListResponseBody() = default;
};
class DescribeVsStreamsOnlineListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsStreamsOnlineListResponseBody> body{};

  DescribeVsStreamsOnlineListResponse() {}

  explicit DescribeVsStreamsOnlineListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsStreamsOnlineListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsStreamsOnlineListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsStreamsOnlineListResponse() = default;
};
class DescribeVsStreamsPublishListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> appName{};
  shared_ptr<string> streamName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> streamType{};
  shared_ptr<string> queryType{};
  shared_ptr<string> orderBy{};

  DescribeVsStreamsPublishListRequest() {}

  explicit DescribeVsStreamsPublishListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<string>(boost::any_cast<string>(m["StreamType"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
  }


  virtual ~DescribeVsStreamsPublishListRequest() = default;
};
class DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo : public Darabonba::Model {
public:
  shared_ptr<string> edgeNodeAddr{};
  shared_ptr<string> publishUrl{};
  shared_ptr<string> streamName{};
  shared_ptr<string> domainName{};
  shared_ptr<string> stopTime{};
  shared_ptr<string> transcodeId{};
  shared_ptr<string> publishDomain{};
  shared_ptr<string> appName{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> publishType{};
  shared_ptr<string> transcoded{};
  shared_ptr<string> clientAddr{};
  shared_ptr<string> streamUrl{};

  DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo() {}

  explicit DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (edgeNodeAddr) {
      res["EdgeNodeAddr"] = boost::any(*edgeNodeAddr);
    }
    if (publishUrl) {
      res["PublishUrl"] = boost::any(*publishUrl);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (stopTime) {
      res["StopTime"] = boost::any(*stopTime);
    }
    if (transcodeId) {
      res["TranscodeId"] = boost::any(*transcodeId);
    }
    if (publishDomain) {
      res["PublishDomain"] = boost::any(*publishDomain);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (publishType) {
      res["PublishType"] = boost::any(*publishType);
    }
    if (transcoded) {
      res["Transcoded"] = boost::any(*transcoded);
    }
    if (clientAddr) {
      res["ClientAddr"] = boost::any(*clientAddr);
    }
    if (streamUrl) {
      res["StreamUrl"] = boost::any(*streamUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EdgeNodeAddr") != m.end() && !m["EdgeNodeAddr"].empty()) {
      edgeNodeAddr = make_shared<string>(boost::any_cast<string>(m["EdgeNodeAddr"]));
    }
    if (m.find("PublishUrl") != m.end() && !m["PublishUrl"].empty()) {
      publishUrl = make_shared<string>(boost::any_cast<string>(m["PublishUrl"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StopTime") != m.end() && !m["StopTime"].empty()) {
      stopTime = make_shared<string>(boost::any_cast<string>(m["StopTime"]));
    }
    if (m.find("TranscodeId") != m.end() && !m["TranscodeId"].empty()) {
      transcodeId = make_shared<string>(boost::any_cast<string>(m["TranscodeId"]));
    }
    if (m.find("PublishDomain") != m.end() && !m["PublishDomain"].empty()) {
      publishDomain = make_shared<string>(boost::any_cast<string>(m["PublishDomain"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("PublishType") != m.end() && !m["PublishType"].empty()) {
      publishType = make_shared<string>(boost::any_cast<string>(m["PublishType"]));
    }
    if (m.find("Transcoded") != m.end() && !m["Transcoded"].empty()) {
      transcoded = make_shared<string>(boost::any_cast<string>(m["Transcoded"]));
    }
    if (m.find("ClientAddr") != m.end() && !m["ClientAddr"].empty()) {
      clientAddr = make_shared<string>(boost::any_cast<string>(m["ClientAddr"]));
    }
    if (m.find("StreamUrl") != m.end() && !m["StreamUrl"].empty()) {
      streamUrl = make_shared<string>(boost::any_cast<string>(m["StreamUrl"]));
    }
  }


  virtual ~DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo() = default;
};
class DescribeVsStreamsPublishListResponseBodyPublishInfo : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo>> liveStreamPublishInfo{};

  DescribeVsStreamsPublishListResponseBodyPublishInfo() {}

  explicit DescribeVsStreamsPublishListResponseBodyPublishInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveStreamPublishInfo) {
      vector<boost::any> temp1;
      for(auto item1:*liveStreamPublishInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LiveStreamPublishInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveStreamPublishInfo") != m.end() && !m["LiveStreamPublishInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["LiveStreamPublishInfo"].type()) {
        vector<DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LiveStreamPublishInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        liveStreamPublishInfo = make_shared<vector<DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeVsStreamsPublishListResponseBodyPublishInfo() = default;
};
class DescribeVsStreamsPublishListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalPage{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};
  shared_ptr<DescribeVsStreamsPublishListResponseBodyPublishInfo> publishInfo{};

  DescribeVsStreamsPublishListResponseBody() {}

  explicit DescribeVsStreamsPublishListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (publishInfo) {
      res["PublishInfo"] = publishInfo ? boost::any(publishInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("PublishInfo") != m.end() && !m["PublishInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PublishInfo"].type()) {
        DescribeVsStreamsPublishListResponseBodyPublishInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PublishInfo"]));
        publishInfo = make_shared<DescribeVsStreamsPublishListResponseBodyPublishInfo>(model1);
      }
    }
  }


  virtual ~DescribeVsStreamsPublishListResponseBody() = default;
};
class DescribeVsStreamsPublishListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsStreamsPublishListResponseBody> body{};

  DescribeVsStreamsPublishListResponse() {}

  explicit DescribeVsStreamsPublishListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsStreamsPublishListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsStreamsPublishListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsStreamsPublishListResponse() = default;
};
class DescribeVsTopDomainsByFlowRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> limit{};

  DescribeVsTopDomainsByFlowRequest() {}

  explicit DescribeVsTopDomainsByFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
  }


  virtual ~DescribeVsTopDomainsByFlowRequest() = default;
};
class DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain : public Darabonba::Model {
public:
  shared_ptr<long> maxBps{};
  shared_ptr<long> rank{};
  shared_ptr<long> totalAccess{};
  shared_ptr<string> trafficPercent{};
  shared_ptr<string> domainName{};
  shared_ptr<string> totalTraffic{};
  shared_ptr<string> maxBpsTime{};

  DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain() {}

  explicit DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxBps) {
      res["MaxBps"] = boost::any(*maxBps);
    }
    if (rank) {
      res["Rank"] = boost::any(*rank);
    }
    if (totalAccess) {
      res["TotalAccess"] = boost::any(*totalAccess);
    }
    if (trafficPercent) {
      res["TrafficPercent"] = boost::any(*trafficPercent);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (totalTraffic) {
      res["TotalTraffic"] = boost::any(*totalTraffic);
    }
    if (maxBpsTime) {
      res["MaxBpsTime"] = boost::any(*maxBpsTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxBps") != m.end() && !m["MaxBps"].empty()) {
      maxBps = make_shared<long>(boost::any_cast<long>(m["MaxBps"]));
    }
    if (m.find("Rank") != m.end() && !m["Rank"].empty()) {
      rank = make_shared<long>(boost::any_cast<long>(m["Rank"]));
    }
    if (m.find("TotalAccess") != m.end() && !m["TotalAccess"].empty()) {
      totalAccess = make_shared<long>(boost::any_cast<long>(m["TotalAccess"]));
    }
    if (m.find("TrafficPercent") != m.end() && !m["TrafficPercent"].empty()) {
      trafficPercent = make_shared<string>(boost::any_cast<string>(m["TrafficPercent"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("TotalTraffic") != m.end() && !m["TotalTraffic"].empty()) {
      totalTraffic = make_shared<string>(boost::any_cast<string>(m["TotalTraffic"]));
    }
    if (m.find("MaxBpsTime") != m.end() && !m["MaxBpsTime"].empty()) {
      maxBpsTime = make_shared<string>(boost::any_cast<string>(m["MaxBpsTime"]));
    }
  }


  virtual ~DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain() = default;
};
class DescribeVsTopDomainsByFlowResponseBodyTopDomains : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain>> topDomain{};

  DescribeVsTopDomainsByFlowResponseBodyTopDomains() {}

  explicit DescribeVsTopDomainsByFlowResponseBodyTopDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topDomain) {
      vector<boost::any> temp1;
      for(auto item1:*topDomain){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TopDomain"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TopDomain") != m.end() && !m["TopDomain"].empty()) {
      if (typeid(vector<boost::any>) == m["TopDomain"].type()) {
        vector<DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TopDomain"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topDomain = make_shared<vector<DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain>>(expect1);
      }
    }
  }


  virtual ~DescribeVsTopDomainsByFlowResponseBodyTopDomains() = default;
};
class DescribeVsTopDomainsByFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> domainOnlineCount{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> requestId{};
  shared_ptr<long> domainCount{};
  shared_ptr<DescribeVsTopDomainsByFlowResponseBodyTopDomains> topDomains{};

  DescribeVsTopDomainsByFlowResponseBody() {}

  explicit DescribeVsTopDomainsByFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainOnlineCount) {
      res["DomainOnlineCount"] = boost::any(*domainOnlineCount);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainCount) {
      res["DomainCount"] = boost::any(*domainCount);
    }
    if (topDomains) {
      res["TopDomains"] = topDomains ? boost::any(topDomains->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainOnlineCount") != m.end() && !m["DomainOnlineCount"].empty()) {
      domainOnlineCount = make_shared<long>(boost::any_cast<long>(m["DomainOnlineCount"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainCount") != m.end() && !m["DomainCount"].empty()) {
      domainCount = make_shared<long>(boost::any_cast<long>(m["DomainCount"]));
    }
    if (m.find("TopDomains") != m.end() && !m["TopDomains"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopDomains"].type()) {
        DescribeVsTopDomainsByFlowResponseBodyTopDomains model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopDomains"]));
        topDomains = make_shared<DescribeVsTopDomainsByFlowResponseBodyTopDomains>(model1);
      }
    }
  }


  virtual ~DescribeVsTopDomainsByFlowResponseBody() = default;
};
class DescribeVsTopDomainsByFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsTopDomainsByFlowResponseBody> body{};

  DescribeVsTopDomainsByFlowResponse() {}

  explicit DescribeVsTopDomainsByFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsTopDomainsByFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsTopDomainsByFlowResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsTopDomainsByFlowResponse() = default;
};
class DescribeVsUpPeakPublishStreamDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> domainSwitch{};
  shared_ptr<string> domainName{};

  DescribeVsUpPeakPublishStreamDataRequest() {}

  explicit DescribeVsUpPeakPublishStreamDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (domainSwitch) {
      res["DomainSwitch"] = boost::any(*domainSwitch);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("DomainSwitch") != m.end() && !m["DomainSwitch"].empty()) {
      domainSwitch = make_shared<string>(boost::any_cast<string>(m["DomainSwitch"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeVsUpPeakPublishStreamDataRequest() = default;
};
class DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData : public Darabonba::Model {
public:
  shared_ptr<string> queryTime{};
  shared_ptr<string> bandWidth{};
  shared_ptr<string> statName{};
  shared_ptr<string> peakTime{};
  shared_ptr<long> publishStreamNum{};

  DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData() {}

  explicit DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryTime) {
      res["QueryTime"] = boost::any(*queryTime);
    }
    if (bandWidth) {
      res["BandWidth"] = boost::any(*bandWidth);
    }
    if (statName) {
      res["StatName"] = boost::any(*statName);
    }
    if (peakTime) {
      res["PeakTime"] = boost::any(*peakTime);
    }
    if (publishStreamNum) {
      res["PublishStreamNum"] = boost::any(*publishStreamNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueryTime") != m.end() && !m["QueryTime"].empty()) {
      queryTime = make_shared<string>(boost::any_cast<string>(m["QueryTime"]));
    }
    if (m.find("BandWidth") != m.end() && !m["BandWidth"].empty()) {
      bandWidth = make_shared<string>(boost::any_cast<string>(m["BandWidth"]));
    }
    if (m.find("StatName") != m.end() && !m["StatName"].empty()) {
      statName = make_shared<string>(boost::any_cast<string>(m["StatName"]));
    }
    if (m.find("PeakTime") != m.end() && !m["PeakTime"].empty()) {
      peakTime = make_shared<string>(boost::any_cast<string>(m["PeakTime"]));
    }
    if (m.find("PublishStreamNum") != m.end() && !m["PublishStreamNum"].empty()) {
      publishStreamNum = make_shared<long>(boost::any_cast<long>(m["PublishStreamNum"]));
    }
  }


  virtual ~DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData() = default;
};
class DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData>> describeVsUpPeakPublishStreamData{};

  DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas() {}

  explicit DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (describeVsUpPeakPublishStreamData) {
      vector<boost::any> temp1;
      for(auto item1:*describeVsUpPeakPublishStreamData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DescribeVsUpPeakPublishStreamData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DescribeVsUpPeakPublishStreamData") != m.end() && !m["DescribeVsUpPeakPublishStreamData"].empty()) {
      if (typeid(vector<boost::any>) == m["DescribeVsUpPeakPublishStreamData"].type()) {
        vector<DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DescribeVsUpPeakPublishStreamData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        describeVsUpPeakPublishStreamData = make_shared<vector<DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData>>(expect1);
      }
    }
  }


  virtual ~DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas() = default;
};
class DescribeVsUpPeakPublishStreamDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas> describeVsUpPeakPublishStreamDatas{};

  DescribeVsUpPeakPublishStreamDataResponseBody() {}

  explicit DescribeVsUpPeakPublishStreamDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (describeVsUpPeakPublishStreamDatas) {
      res["DescribeVsUpPeakPublishStreamDatas"] = describeVsUpPeakPublishStreamDatas ? boost::any(describeVsUpPeakPublishStreamDatas->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DescribeVsUpPeakPublishStreamDatas") != m.end() && !m["DescribeVsUpPeakPublishStreamDatas"].empty()) {
      if (typeid(map<string, boost::any>) == m["DescribeVsUpPeakPublishStreamDatas"].type()) {
        DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DescribeVsUpPeakPublishStreamDatas"]));
        describeVsUpPeakPublishStreamDatas = make_shared<DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas>(model1);
      }
    }
  }


  virtual ~DescribeVsUpPeakPublishStreamDataResponseBody() = default;
};
class DescribeVsUpPeakPublishStreamDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsUpPeakPublishStreamDataResponseBody> body{};

  DescribeVsUpPeakPublishStreamDataResponse() {}

  explicit DescribeVsUpPeakPublishStreamDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsUpPeakPublishStreamDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsUpPeakPublishStreamDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsUpPeakPublishStreamDataResponse() = default;
};
class DescribeVsUserResourcePackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};

  DescribeVsUserResourcePackageRequest() {}

  explicit DescribeVsUserResourcePackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DescribeVsUserResourcePackageRequest() = default;
};
class DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> status{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> currCapacity{};
  shared_ptr<string> initCapacity{};
  shared_ptr<string> instanceId{};

  DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo() {}

  explicit DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (currCapacity) {
      res["CurrCapacity"] = boost::any(*currCapacity);
    }
    if (initCapacity) {
      res["InitCapacity"] = boost::any(*initCapacity);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CurrCapacity") != m.end() && !m["CurrCapacity"].empty()) {
      currCapacity = make_shared<string>(boost::any_cast<string>(m["CurrCapacity"]));
    }
    if (m.find("InitCapacity") != m.end() && !m["InitCapacity"].empty()) {
      initCapacity = make_shared<string>(boost::any_cast<string>(m["InitCapacity"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo() = default;
};
class DescribeVsUserResourcePackageResponseBodyResourcePackageInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo>> resourcePackageInfo{};

  DescribeVsUserResourcePackageResponseBodyResourcePackageInfos() {}

  explicit DescribeVsUserResourcePackageResponseBodyResourcePackageInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourcePackageInfo) {
      vector<boost::any> temp1;
      for(auto item1:*resourcePackageInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourcePackageInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourcePackageInfo") != m.end() && !m["ResourcePackageInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourcePackageInfo"].type()) {
        vector<DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourcePackageInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourcePackageInfo = make_shared<vector<DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeVsUserResourcePackageResponseBodyResourcePackageInfos() = default;
};
class DescribeVsUserResourcePackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeVsUserResourcePackageResponseBodyResourcePackageInfos> resourcePackageInfos{};

  DescribeVsUserResourcePackageResponseBody() {}

  explicit DescribeVsUserResourcePackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourcePackageInfos) {
      res["ResourcePackageInfos"] = resourcePackageInfos ? boost::any(resourcePackageInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourcePackageInfos") != m.end() && !m["ResourcePackageInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourcePackageInfos"].type()) {
        DescribeVsUserResourcePackageResponseBodyResourcePackageInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourcePackageInfos"]));
        resourcePackageInfos = make_shared<DescribeVsUserResourcePackageResponseBodyResourcePackageInfos>(model1);
      }
    }
  }


  virtual ~DescribeVsUserResourcePackageResponseBody() = default;
};
class DescribeVsUserResourcePackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVsUserResourcePackageResponseBody> body{};

  DescribeVsUserResourcePackageResponse() {}

  explicit DescribeVsUserResourcePackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVsUserResourcePackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVsUserResourcePackageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVsUserResourcePackageResponse() = default;
};
class ForbidVsStreamRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> appName{};
  shared_ptr<string> streamName{};
  shared_ptr<string> liveStreamType{};
  shared_ptr<string> oneshot{};
  shared_ptr<string> controlStreamAction{};
  shared_ptr<string> resumeTime{};

  ForbidVsStreamRequest() {}

  explicit ForbidVsStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    if (liveStreamType) {
      res["LiveStreamType"] = boost::any(*liveStreamType);
    }
    if (oneshot) {
      res["Oneshot"] = boost::any(*oneshot);
    }
    if (controlStreamAction) {
      res["ControlStreamAction"] = boost::any(*controlStreamAction);
    }
    if (resumeTime) {
      res["ResumeTime"] = boost::any(*resumeTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
    if (m.find("LiveStreamType") != m.end() && !m["LiveStreamType"].empty()) {
      liveStreamType = make_shared<string>(boost::any_cast<string>(m["LiveStreamType"]));
    }
    if (m.find("Oneshot") != m.end() && !m["Oneshot"].empty()) {
      oneshot = make_shared<string>(boost::any_cast<string>(m["Oneshot"]));
    }
    if (m.find("ControlStreamAction") != m.end() && !m["ControlStreamAction"].empty()) {
      controlStreamAction = make_shared<string>(boost::any_cast<string>(m["ControlStreamAction"]));
    }
    if (m.find("ResumeTime") != m.end() && !m["ResumeTime"].empty()) {
      resumeTime = make_shared<string>(boost::any_cast<string>(m["ResumeTime"]));
    }
  }


  virtual ~ForbidVsStreamRequest() = default;
};
class ForbidVsStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ForbidVsStreamResponseBody() {}

  explicit ForbidVsStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ForbidVsStreamResponseBody() = default;
};
class ForbidVsStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ForbidVsStreamResponseBody> body{};

  ForbidVsStreamResponse() {}

  explicit ForbidVsStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ForbidVsStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ForbidVsStreamResponseBody>(model1);
      }
    }
  }


  virtual ~ForbidVsStreamResponse() = default;
};
class GetBucketInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> bucketName{};

  GetBucketInfoRequest() {}

  explicit GetBucketInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
  }


  virtual ~GetBucketInfoRequest() = default;
};
class GetBucketInfoResponseBodyBucketInfo : public Darabonba::Model {
public:
  shared_ptr<string> storageClass{};
  shared_ptr<string> dataRedundancyType{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> comment{};
  shared_ptr<string> dispatcherType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> bucketAcl{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> modifyTime{};

  GetBucketInfoResponseBodyBucketInfo() {}

  explicit GetBucketInfoResponseBodyBucketInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storageClass) {
      res["StorageClass"] = boost::any(*storageClass);
    }
    if (dataRedundancyType) {
      res["DataRedundancyType"] = boost::any(*dataRedundancyType);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (dispatcherType) {
      res["DispatcherType"] = boost::any(*dispatcherType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (bucketAcl) {
      res["BucketAcl"] = boost::any(*bucketAcl);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StorageClass") != m.end() && !m["StorageClass"].empty()) {
      storageClass = make_shared<string>(boost::any_cast<string>(m["StorageClass"]));
    }
    if (m.find("DataRedundancyType") != m.end() && !m["DataRedundancyType"].empty()) {
      dataRedundancyType = make_shared<string>(boost::any_cast<string>(m["DataRedundancyType"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("DispatcherType") != m.end() && !m["DispatcherType"].empty()) {
      dispatcherType = make_shared<string>(boost::any_cast<string>(m["DispatcherType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("BucketAcl") != m.end() && !m["BucketAcl"].empty()) {
      bucketAcl = make_shared<string>(boost::any_cast<string>(m["BucketAcl"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
  }


  virtual ~GetBucketInfoResponseBodyBucketInfo() = default;
};
class GetBucketInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetBucketInfoResponseBodyBucketInfo> bucketInfo{};

  GetBucketInfoResponseBody() {}

  explicit GetBucketInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bucketInfo) {
      res["BucketInfo"] = bucketInfo ? boost::any(bucketInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BucketInfo") != m.end() && !m["BucketInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["BucketInfo"].type()) {
        GetBucketInfoResponseBodyBucketInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BucketInfo"]));
        bucketInfo = make_shared<GetBucketInfoResponseBodyBucketInfo>(model1);
      }
    }
  }


  virtual ~GetBucketInfoResponseBody() = default;
};
class GetBucketInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetBucketInfoResponseBody> body{};

  GetBucketInfoResponse() {}

  explicit GetBucketInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBucketInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBucketInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetBucketInfoResponse() = default;
};
class GotoPresetRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> presetId{};
  shared_ptr<string> subProtocol{};

  GotoPresetRequest() {}

  explicit GotoPresetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (presetId) {
      res["PresetId"] = boost::any(*presetId);
    }
    if (subProtocol) {
      res["SubProtocol"] = boost::any(*subProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PresetId") != m.end() && !m["PresetId"].empty()) {
      presetId = make_shared<string>(boost::any_cast<string>(m["PresetId"]));
    }
    if (m.find("SubProtocol") != m.end() && !m["SubProtocol"].empty()) {
      subProtocol = make_shared<string>(boost::any_cast<string>(m["SubProtocol"]));
    }
  }


  virtual ~GotoPresetRequest() = default;
};
class GotoPresetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  GotoPresetResponseBody() {}

  explicit GotoPresetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GotoPresetResponseBody() = default;
};
class GotoPresetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GotoPresetResponseBody> body{};

  GotoPresetResponse() {}

  explicit GotoPresetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GotoPresetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GotoPresetResponseBody>(model1);
      }
    }
  }


  virtual ~GotoPresetResponse() = default;
};
class ListBucketsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prefix{};
  shared_ptr<string> keyword{};
  shared_ptr<string> marker{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListBucketsRequest() {}

  explicit ListBucketsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListBucketsRequest() = default;
};
class ListBucketsResponseBodyBucketInfos : public Darabonba::Model {
public:
  shared_ptr<string> storageClass{};
  shared_ptr<string> dataRedundancyType{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> comment{};
  shared_ptr<string> dispatcherType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> bucketAcl{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> modifyTime{};

  ListBucketsResponseBodyBucketInfos() {}

  explicit ListBucketsResponseBodyBucketInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storageClass) {
      res["StorageClass"] = boost::any(*storageClass);
    }
    if (dataRedundancyType) {
      res["DataRedundancyType"] = boost::any(*dataRedundancyType);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (dispatcherType) {
      res["DispatcherType"] = boost::any(*dispatcherType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (bucketAcl) {
      res["BucketAcl"] = boost::any(*bucketAcl);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StorageClass") != m.end() && !m["StorageClass"].empty()) {
      storageClass = make_shared<string>(boost::any_cast<string>(m["StorageClass"]));
    }
    if (m.find("DataRedundancyType") != m.end() && !m["DataRedundancyType"].empty()) {
      dataRedundancyType = make_shared<string>(boost::any_cast<string>(m["DataRedundancyType"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("DispatcherType") != m.end() && !m["DispatcherType"].empty()) {
      dispatcherType = make_shared<string>(boost::any_cast<string>(m["DispatcherType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("BucketAcl") != m.end() && !m["BucketAcl"].empty()) {
      bucketAcl = make_shared<string>(boost::any_cast<string>(m["BucketAcl"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
  }


  virtual ~ListBucketsResponseBodyBucketInfos() = default;
};
class ListBucketsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListBucketsResponseBodyBucketInfos>> bucketInfos{};

  ListBucketsResponseBody() {}

  explicit ListBucketsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bucketInfos) {
      vector<boost::any> temp1;
      for(auto item1:*bucketInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BucketInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BucketInfos") != m.end() && !m["BucketInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["BucketInfos"].type()) {
        vector<ListBucketsResponseBodyBucketInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BucketInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBucketsResponseBodyBucketInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bucketInfos = make_shared<vector<ListBucketsResponseBodyBucketInfos>>(expect1);
      }
    }
  }


  virtual ~ListBucketsResponseBody() = default;
};
class ListBucketsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBucketsResponseBody> body{};

  ListBucketsResponse() {}

  explicit ListBucketsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBucketsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBucketsResponseBody>(model1);
      }
    }
  }


  virtual ~ListBucketsResponse() = default;
};
class ListDeviceChannelsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> deviceId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};

  ListDeviceChannelsRequest() {}

  explicit ListDeviceChannelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
  }


  virtual ~ListDeviceChannelsRequest() = default;
};
class ListDeviceChannelsResponseBodyChannels : public Darabonba::Model {
public:
  shared_ptr<long> channelId{};
  shared_ptr<string> params{};
  shared_ptr<string> deviceStatus{};
  shared_ptr<string> name{};
  shared_ptr<string> deviceId{};

  ListDeviceChannelsResponseBodyChannels() {}

  explicit ListDeviceChannelsResponseBodyChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (deviceStatus) {
      res["DeviceStatus"] = boost::any(*deviceStatus);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<long>(boost::any_cast<long>(m["ChannelId"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("DeviceStatus") != m.end() && !m["DeviceStatus"].empty()) {
      deviceStatus = make_shared<string>(boost::any_cast<string>(m["DeviceStatus"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~ListDeviceChannelsResponseBodyChannels() = default;
};
class ListDeviceChannelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<ListDeviceChannelsResponseBodyChannels>> channels{};

  ListDeviceChannelsResponseBody() {}

  explicit ListDeviceChannelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (channels) {
      vector<boost::any> temp1;
      for(auto item1:*channels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Channels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("Channels") != m.end() && !m["Channels"].empty()) {
      if (typeid(vector<boost::any>) == m["Channels"].type()) {
        vector<ListDeviceChannelsResponseBodyChannels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Channels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeviceChannelsResponseBodyChannels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        channels = make_shared<vector<ListDeviceChannelsResponseBodyChannels>>(expect1);
      }
    }
  }


  virtual ~ListDeviceChannelsResponseBody() = default;
};
class ListDeviceChannelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDeviceChannelsResponseBody> body{};

  ListDeviceChannelsResponse() {}

  explicit ListDeviceChannelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeviceChannelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceChannelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceChannelsResponse() = default;
};
class ListDeviceRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> streamId{};
  shared_ptr<string> searchCriteria{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};

  ListDeviceRecordsRequest() {}

  explicit ListDeviceRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (streamId) {
      res["StreamId"] = boost::any(*streamId);
    }
    if (searchCriteria) {
      res["SearchCriteria"] = boost::any(*searchCriteria);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("StreamId") != m.end() && !m["StreamId"].empty()) {
      streamId = make_shared<string>(boost::any_cast<string>(m["StreamId"]));
    }
    if (m.find("SearchCriteria") != m.end() && !m["SearchCriteria"].empty()) {
      searchCriteria = make_shared<string>(boost::any_cast<string>(m["SearchCriteria"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
  }


  virtual ~ListDeviceRecordsRequest() = default;
};
class ListDeviceRecordsResponseBodyRecords : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> recordType{};
  shared_ptr<string> filename{};
  shared_ptr<long> fileSize{};

  ListDeviceRecordsResponseBodyRecords() {}

  explicit ListDeviceRecordsResponseBodyRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (recordType) {
      res["RecordType"] = boost::any(*recordType);
    }
    if (filename) {
      res["Filename"] = boost::any(*filename);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("RecordType") != m.end() && !m["RecordType"].empty()) {
      recordType = make_shared<string>(boost::any_cast<string>(m["RecordType"]));
    }
    if (m.find("Filename") != m.end() && !m["Filename"].empty()) {
      filename = make_shared<string>(boost::any_cast<string>(m["Filename"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
  }


  virtual ~ListDeviceRecordsResponseBodyRecords() = default;
};
class ListDeviceRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<ListDeviceRecordsResponseBodyRecords>> records{};

  ListDeviceRecordsResponseBody() {}

  explicit ListDeviceRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<ListDeviceRecordsResponseBodyRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeviceRecordsResponseBodyRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<ListDeviceRecordsResponseBodyRecords>>(expect1);
      }
    }
  }


  virtual ~ListDeviceRecordsResponseBody() = default;
};
class ListDeviceRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDeviceRecordsResponseBody> body{};

  ListDeviceRecordsResponse() {}

  explicit ListDeviceRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeviceRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceRecordsResponse() = default;
};
class ListObjectsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> delimiter{};
  shared_ptr<string> encodingType{};
  shared_ptr<string> marker{};
  shared_ptr<long> maxKeys{};
  shared_ptr<string> prefix{};
  shared_ptr<string> continuationToken{};
  shared_ptr<string> startAfter{};

  ListObjectsRequest() {}

  explicit ListObjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (delimiter) {
      res["Delimiter"] = boost::any(*delimiter);
    }
    if (encodingType) {
      res["EncodingType"] = boost::any(*encodingType);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxKeys) {
      res["MaxKeys"] = boost::any(*maxKeys);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (continuationToken) {
      res["ContinuationToken"] = boost::any(*continuationToken);
    }
    if (startAfter) {
      res["StartAfter"] = boost::any(*startAfter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Delimiter") != m.end() && !m["Delimiter"].empty()) {
      delimiter = make_shared<string>(boost::any_cast<string>(m["Delimiter"]));
    }
    if (m.find("EncodingType") != m.end() && !m["EncodingType"].empty()) {
      encodingType = make_shared<string>(boost::any_cast<string>(m["EncodingType"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxKeys") != m.end() && !m["MaxKeys"].empty()) {
      maxKeys = make_shared<long>(boost::any_cast<long>(m["MaxKeys"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("ContinuationToken") != m.end() && !m["ContinuationToken"].empty()) {
      continuationToken = make_shared<string>(boost::any_cast<string>(m["ContinuationToken"]));
    }
    if (m.find("StartAfter") != m.end() && !m["StartAfter"].empty()) {
      startAfter = make_shared<string>(boost::any_cast<string>(m["StartAfter"]));
    }
  }


  virtual ~ListObjectsRequest() = default;
};
class ListObjectsResponseBodyContents : public Darabonba::Model {
public:
  shared_ptr<string> storageClass{};
  shared_ptr<string> lastModified{};
  shared_ptr<string> key{};
  shared_ptr<string> ETag{};
  shared_ptr<long> size{};

  ListObjectsResponseBodyContents() {}

  explicit ListObjectsResponseBodyContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storageClass) {
      res["StorageClass"] = boost::any(*storageClass);
    }
    if (lastModified) {
      res["LastModified"] = boost::any(*lastModified);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (ETag) {
      res["ETag"] = boost::any(*ETag);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StorageClass") != m.end() && !m["StorageClass"].empty()) {
      storageClass = make_shared<string>(boost::any_cast<string>(m["StorageClass"]));
    }
    if (m.find("LastModified") != m.end() && !m["LastModified"].empty()) {
      lastModified = make_shared<string>(boost::any_cast<string>(m["LastModified"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("ETag") != m.end() && !m["ETag"].empty()) {
      ETag = make_shared<string>(boost::any_cast<string>(m["ETag"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListObjectsResponseBodyContents() = default;
};
class ListObjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxKeys{};
  shared_ptr<string> prefix{};
  shared_ptr<string> continuationToken{};
  shared_ptr<string> nextContinuationToken{};
  shared_ptr<string> encodingType{};
  shared_ptr<string> nextMarker{};
  shared_ptr<string> delimiter{};
  shared_ptr<string> requestId{};
  shared_ptr<string> bucketName{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<long> keyCount{};
  shared_ptr<vector<string>> commonPrefixes{};
  shared_ptr<vector<ListObjectsResponseBodyContents>> contents{};

  ListObjectsResponseBody() {}

  explicit ListObjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxKeys) {
      res["MaxKeys"] = boost::any(*maxKeys);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (continuationToken) {
      res["ContinuationToken"] = boost::any(*continuationToken);
    }
    if (nextContinuationToken) {
      res["NextContinuationToken"] = boost::any(*nextContinuationToken);
    }
    if (encodingType) {
      res["EncodingType"] = boost::any(*encodingType);
    }
    if (nextMarker) {
      res["NextMarker"] = boost::any(*nextMarker);
    }
    if (delimiter) {
      res["Delimiter"] = boost::any(*delimiter);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (keyCount) {
      res["KeyCount"] = boost::any(*keyCount);
    }
    if (commonPrefixes) {
      res["CommonPrefixes"] = boost::any(*commonPrefixes);
    }
    if (contents) {
      vector<boost::any> temp1;
      for(auto item1:*contents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Contents"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxKeys") != m.end() && !m["MaxKeys"].empty()) {
      maxKeys = make_shared<long>(boost::any_cast<long>(m["MaxKeys"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("ContinuationToken") != m.end() && !m["ContinuationToken"].empty()) {
      continuationToken = make_shared<string>(boost::any_cast<string>(m["ContinuationToken"]));
    }
    if (m.find("NextContinuationToken") != m.end() && !m["NextContinuationToken"].empty()) {
      nextContinuationToken = make_shared<string>(boost::any_cast<string>(m["NextContinuationToken"]));
    }
    if (m.find("EncodingType") != m.end() && !m["EncodingType"].empty()) {
      encodingType = make_shared<string>(boost::any_cast<string>(m["EncodingType"]));
    }
    if (m.find("NextMarker") != m.end() && !m["NextMarker"].empty()) {
      nextMarker = make_shared<string>(boost::any_cast<string>(m["NextMarker"]));
    }
    if (m.find("Delimiter") != m.end() && !m["Delimiter"].empty()) {
      delimiter = make_shared<string>(boost::any_cast<string>(m["Delimiter"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("KeyCount") != m.end() && !m["KeyCount"].empty()) {
      keyCount = make_shared<long>(boost::any_cast<long>(m["KeyCount"]));
    }
    if (m.find("CommonPrefixes") != m.end() && !m["CommonPrefixes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CommonPrefixes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CommonPrefixes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      commonPrefixes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Contents") != m.end() && !m["Contents"].empty()) {
      if (typeid(vector<boost::any>) == m["Contents"].type()) {
        vector<ListObjectsResponseBodyContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Contents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListObjectsResponseBodyContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contents = make_shared<vector<ListObjectsResponseBodyContents>>(expect1);
      }
    }
  }


  virtual ~ListObjectsResponseBody() = default;
};
class ListObjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListObjectsResponseBody> body{};

  ListObjectsResponse() {}

  explicit ListObjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListObjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListObjectsResponseBody>(model1);
      }
    }
  }


  virtual ~ListObjectsResponse() = default;
};
class ModifyDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> parentId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> type{};
  shared_ptr<bool> autoStart{};
  shared_ptr<string> gbId{};
  shared_ptr<string> ip{};
  shared_ptr<long> port{};
  shared_ptr<string> url{};
  shared_ptr<string> username{};
  shared_ptr<string> password{};
  shared_ptr<string> vendor{};
  shared_ptr<string> longitude{};
  shared_ptr<string> latitude{};
  shared_ptr<bool> autoPos{};
  shared_ptr<long> posInterval{};
  shared_ptr<string> alarmMethod{};
  shared_ptr<string> params{};

  ModifyDeviceRequest() {}

  explicit ModifyDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (autoStart) {
      res["AutoStart"] = boost::any(*autoStart);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (autoPos) {
      res["AutoPos"] = boost::any(*autoPos);
    }
    if (posInterval) {
      res["PosInterval"] = boost::any(*posInterval);
    }
    if (alarmMethod) {
      res["AlarmMethod"] = boost::any(*alarmMethod);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("AutoStart") != m.end() && !m["AutoStart"].empty()) {
      autoStart = make_shared<bool>(boost::any_cast<bool>(m["AutoStart"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("AutoPos") != m.end() && !m["AutoPos"].empty()) {
      autoPos = make_shared<bool>(boost::any_cast<bool>(m["AutoPos"]));
    }
    if (m.find("PosInterval") != m.end() && !m["PosInterval"].empty()) {
      posInterval = make_shared<long>(boost::any_cast<long>(m["PosInterval"]));
    }
    if (m.find("AlarmMethod") != m.end() && !m["AlarmMethod"].empty()) {
      alarmMethod = make_shared<string>(boost::any_cast<string>(m["AlarmMethod"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
  }


  virtual ~ModifyDeviceRequest() = default;
};
class ModifyDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  ModifyDeviceResponseBody() {}

  explicit ModifyDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDeviceResponseBody() = default;
};
class ModifyDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDeviceResponseBody> body{};

  ModifyDeviceResponse() {}

  explicit ModifyDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDeviceResponse() = default;
};
class ModifyDeviceAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<long> channelId{};
  shared_ptr<string> alarmId{};
  shared_ptr<long> status{};

  ModifyDeviceAlarmRequest() {}

  explicit ModifyDeviceAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<long>(boost::any_cast<long>(m["ChannelId"]));
    }
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<string>(boost::any_cast<string>(m["AlarmId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ModifyDeviceAlarmRequest() = default;
};
class ModifyDeviceAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDeviceAlarmResponseBody() {}

  explicit ModifyDeviceAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDeviceAlarmResponseBody() = default;
};
class ModifyDeviceAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDeviceAlarmResponseBody> body{};

  ModifyDeviceAlarmResponse() {}

  explicit ModifyDeviceAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDeviceAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDeviceAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDeviceAlarmResponse() = default;
};
class ModifyDeviceCaptureRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<long> image{};
  shared_ptr<long> video{};

  ModifyDeviceCaptureRequest() {}

  explicit ModifyDeviceCaptureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (video) {
      res["Video"] = boost::any(*video);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<long>(boost::any_cast<long>(m["Image"]));
    }
    if (m.find("Video") != m.end() && !m["Video"].empty()) {
      video = make_shared<long>(boost::any_cast<long>(m["Video"]));
    }
  }


  virtual ~ModifyDeviceCaptureRequest() = default;
};
class ModifyDeviceCaptureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDeviceCaptureResponseBody() {}

  explicit ModifyDeviceCaptureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDeviceCaptureResponseBody() = default;
};
class ModifyDeviceCaptureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDeviceCaptureResponseBody> body{};

  ModifyDeviceCaptureResponse() {}

  explicit ModifyDeviceCaptureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDeviceCaptureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDeviceCaptureResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDeviceCaptureResponse() = default;
};
class ModifyDeviceChannelsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> dsn{};
  shared_ptr<string> deviceStatus{};
  shared_ptr<string> channels{};

  ModifyDeviceChannelsRequest() {}

  explicit ModifyDeviceChannelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (dsn) {
      res["Dsn"] = boost::any(*dsn);
    }
    if (deviceStatus) {
      res["DeviceStatus"] = boost::any(*deviceStatus);
    }
    if (channels) {
      res["Channels"] = boost::any(*channels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Dsn") != m.end() && !m["Dsn"].empty()) {
      dsn = make_shared<string>(boost::any_cast<string>(m["Dsn"]));
    }
    if (m.find("DeviceStatus") != m.end() && !m["DeviceStatus"].empty()) {
      deviceStatus = make_shared<string>(boost::any_cast<string>(m["DeviceStatus"]));
    }
    if (m.find("Channels") != m.end() && !m["Channels"].empty()) {
      channels = make_shared<string>(boost::any_cast<string>(m["Channels"]));
    }
  }


  virtual ~ModifyDeviceChannelsRequest() = default;
};
class ModifyDeviceChannelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDeviceChannelsResponseBody() {}

  explicit ModifyDeviceChannelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDeviceChannelsResponseBody() = default;
};
class ModifyDeviceChannelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDeviceChannelsResponseBody> body{};

  ModifyDeviceChannelsResponse() {}

  explicit ModifyDeviceChannelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDeviceChannelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDeviceChannelsResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDeviceChannelsResponse() = default;
};
class ModifyDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};

  ModifyDirectoryRequest() {}

  explicit ModifyDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~ModifyDirectoryRequest() = default;
};
class ModifyDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  ModifyDirectoryResponseBody() {}

  explicit ModifyDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDirectoryResponseBody() = default;
};
class ModifyDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDirectoryResponseBody> body{};

  ModifyDirectoryResponse() {}

  explicit ModifyDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDirectoryResponse() = default;
};
class ModifyGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> region{};
  shared_ptr<string> inProtocol{};
  shared_ptr<string> outProtocol{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> pushDomain{};
  shared_ptr<string> playDomain{};
  shared_ptr<bool> lazyPull{};
  shared_ptr<string> callback{};
  shared_ptr<long> captureInterval{};
  shared_ptr<long> captureImage{};
  shared_ptr<long> captureVideo{};
  shared_ptr<string> captureOssBucket{};
  shared_ptr<string> captureOssPath{};

  ModifyGroupRequest() {}

  explicit ModifyGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (inProtocol) {
      res["InProtocol"] = boost::any(*inProtocol);
    }
    if (outProtocol) {
      res["OutProtocol"] = boost::any(*outProtocol);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (pushDomain) {
      res["PushDomain"] = boost::any(*pushDomain);
    }
    if (playDomain) {
      res["PlayDomain"] = boost::any(*playDomain);
    }
    if (lazyPull) {
      res["LazyPull"] = boost::any(*lazyPull);
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (captureInterval) {
      res["CaptureInterval"] = boost::any(*captureInterval);
    }
    if (captureImage) {
      res["CaptureImage"] = boost::any(*captureImage);
    }
    if (captureVideo) {
      res["CaptureVideo"] = boost::any(*captureVideo);
    }
    if (captureOssBucket) {
      res["CaptureOssBucket"] = boost::any(*captureOssBucket);
    }
    if (captureOssPath) {
      res["CaptureOssPath"] = boost::any(*captureOssPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("InProtocol") != m.end() && !m["InProtocol"].empty()) {
      inProtocol = make_shared<string>(boost::any_cast<string>(m["InProtocol"]));
    }
    if (m.find("OutProtocol") != m.end() && !m["OutProtocol"].empty()) {
      outProtocol = make_shared<string>(boost::any_cast<string>(m["OutProtocol"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("PushDomain") != m.end() && !m["PushDomain"].empty()) {
      pushDomain = make_shared<string>(boost::any_cast<string>(m["PushDomain"]));
    }
    if (m.find("PlayDomain") != m.end() && !m["PlayDomain"].empty()) {
      playDomain = make_shared<string>(boost::any_cast<string>(m["PlayDomain"]));
    }
    if (m.find("LazyPull") != m.end() && !m["LazyPull"].empty()) {
      lazyPull = make_shared<bool>(boost::any_cast<bool>(m["LazyPull"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
    if (m.find("CaptureInterval") != m.end() && !m["CaptureInterval"].empty()) {
      captureInterval = make_shared<long>(boost::any_cast<long>(m["CaptureInterval"]));
    }
    if (m.find("CaptureImage") != m.end() && !m["CaptureImage"].empty()) {
      captureImage = make_shared<long>(boost::any_cast<long>(m["CaptureImage"]));
    }
    if (m.find("CaptureVideo") != m.end() && !m["CaptureVideo"].empty()) {
      captureVideo = make_shared<long>(boost::any_cast<long>(m["CaptureVideo"]));
    }
    if (m.find("CaptureOssBucket") != m.end() && !m["CaptureOssBucket"].empty()) {
      captureOssBucket = make_shared<string>(boost::any_cast<string>(m["CaptureOssBucket"]));
    }
    if (m.find("CaptureOssPath") != m.end() && !m["CaptureOssPath"].empty()) {
      captureOssPath = make_shared<string>(boost::any_cast<string>(m["CaptureOssPath"]));
    }
  }


  virtual ~ModifyGroupRequest() = default;
};
class ModifyGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  ModifyGroupResponseBody() {}

  explicit ModifyGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyGroupResponseBody() = default;
};
class ModifyGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyGroupResponseBody> body{};

  ModifyGroupResponse() {}

  explicit ModifyGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyGroupResponse() = default;
};
class ModifyParentPlatformRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> gbId{};
  shared_ptr<string> ip{};
  shared_ptr<long> port{};
  shared_ptr<bool> clientAuth{};
  shared_ptr<string> clientUsername{};
  shared_ptr<string> clientPassword{};
  shared_ptr<bool> autoStart{};

  ModifyParentPlatformRequest() {}

  explicit ModifyParentPlatformRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (clientAuth) {
      res["ClientAuth"] = boost::any(*clientAuth);
    }
    if (clientUsername) {
      res["ClientUsername"] = boost::any(*clientUsername);
    }
    if (clientPassword) {
      res["ClientPassword"] = boost::any(*clientPassword);
    }
    if (autoStart) {
      res["AutoStart"] = boost::any(*autoStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ClientAuth") != m.end() && !m["ClientAuth"].empty()) {
      clientAuth = make_shared<bool>(boost::any_cast<bool>(m["ClientAuth"]));
    }
    if (m.find("ClientUsername") != m.end() && !m["ClientUsername"].empty()) {
      clientUsername = make_shared<string>(boost::any_cast<string>(m["ClientUsername"]));
    }
    if (m.find("ClientPassword") != m.end() && !m["ClientPassword"].empty()) {
      clientPassword = make_shared<string>(boost::any_cast<string>(m["ClientPassword"]));
    }
    if (m.find("AutoStart") != m.end() && !m["AutoStart"].empty()) {
      autoStart = make_shared<bool>(boost::any_cast<bool>(m["AutoStart"]));
    }
  }


  virtual ~ModifyParentPlatformRequest() = default;
};
class ModifyParentPlatformResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  ModifyParentPlatformResponseBody() {}

  explicit ModifyParentPlatformResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyParentPlatformResponseBody() = default;
};
class ModifyParentPlatformResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyParentPlatformResponseBody> body{};

  ModifyParentPlatformResponse() {}

  explicit ModifyParentPlatformResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyParentPlatformResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyParentPlatformResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyParentPlatformResponse() = default;
};
class ModifyTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> region{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> ossFilePrefix{};
  shared_ptr<string> trigger{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> interval{};
  shared_ptr<long> retention{};
  shared_ptr<string> fileFormat{};
  shared_ptr<string> jpgOverwrite{};
  shared_ptr<string> jpgSequence{};
  shared_ptr<string> jpgOnDemand{};
  shared_ptr<string> mp4{};
  shared_ptr<string> flv{};
  shared_ptr<string> hlsM3u8{};
  shared_ptr<string> hlsTs{};
  shared_ptr<string> callback{};
  shared_ptr<string> transConfigsJSON{};

  ModifyTemplateRequest() {}

  explicit ModifyTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (ossFilePrefix) {
      res["OssFilePrefix"] = boost::any(*ossFilePrefix);
    }
    if (trigger) {
      res["Trigger"] = boost::any(*trigger);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (fileFormat) {
      res["FileFormat"] = boost::any(*fileFormat);
    }
    if (jpgOverwrite) {
      res["JpgOverwrite"] = boost::any(*jpgOverwrite);
    }
    if (jpgSequence) {
      res["JpgSequence"] = boost::any(*jpgSequence);
    }
    if (jpgOnDemand) {
      res["JpgOnDemand"] = boost::any(*jpgOnDemand);
    }
    if (mp4) {
      res["Mp4"] = boost::any(*mp4);
    }
    if (flv) {
      res["Flv"] = boost::any(*flv);
    }
    if (hlsM3u8) {
      res["HlsM3u8"] = boost::any(*hlsM3u8);
    }
    if (hlsTs) {
      res["HlsTs"] = boost::any(*hlsTs);
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (transConfigsJSON) {
      res["TransConfigsJSON"] = boost::any(*transConfigsJSON);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("OssFilePrefix") != m.end() && !m["OssFilePrefix"].empty()) {
      ossFilePrefix = make_shared<string>(boost::any_cast<string>(m["OssFilePrefix"]));
    }
    if (m.find("Trigger") != m.end() && !m["Trigger"].empty()) {
      trigger = make_shared<string>(boost::any_cast<string>(m["Trigger"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("FileFormat") != m.end() && !m["FileFormat"].empty()) {
      fileFormat = make_shared<string>(boost::any_cast<string>(m["FileFormat"]));
    }
    if (m.find("JpgOverwrite") != m.end() && !m["JpgOverwrite"].empty()) {
      jpgOverwrite = make_shared<string>(boost::any_cast<string>(m["JpgOverwrite"]));
    }
    if (m.find("JpgSequence") != m.end() && !m["JpgSequence"].empty()) {
      jpgSequence = make_shared<string>(boost::any_cast<string>(m["JpgSequence"]));
    }
    if (m.find("JpgOnDemand") != m.end() && !m["JpgOnDemand"].empty()) {
      jpgOnDemand = make_shared<string>(boost::any_cast<string>(m["JpgOnDemand"]));
    }
    if (m.find("Mp4") != m.end() && !m["Mp4"].empty()) {
      mp4 = make_shared<string>(boost::any_cast<string>(m["Mp4"]));
    }
    if (m.find("Flv") != m.end() && !m["Flv"].empty()) {
      flv = make_shared<string>(boost::any_cast<string>(m["Flv"]));
    }
    if (m.find("HlsM3u8") != m.end() && !m["HlsM3u8"].empty()) {
      hlsM3u8 = make_shared<string>(boost::any_cast<string>(m["HlsM3u8"]));
    }
    if (m.find("HlsTs") != m.end() && !m["HlsTs"].empty()) {
      hlsTs = make_shared<string>(boost::any_cast<string>(m["HlsTs"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
    if (m.find("TransConfigsJSON") != m.end() && !m["TransConfigsJSON"].empty()) {
      transConfigsJSON = make_shared<string>(boost::any_cast<string>(m["TransConfigsJSON"]));
    }
  }


  virtual ~ModifyTemplateRequest() = default;
};
class ModifyTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  ModifyTemplateResponseBody() {}

  explicit ModifyTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyTemplateResponseBody() = default;
};
class ModifyTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyTemplateResponseBody> body{};

  ModifyTemplateResponse() {}

  explicit ModifyTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyTemplateResponse() = default;
};
class OpenVsServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenVsServiceResponseBody() {}

  explicit OpenVsServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OpenVsServiceResponseBody() = default;
};
class OpenVsServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OpenVsServiceResponseBody> body{};

  OpenVsServiceResponse() {}

  explicit OpenVsServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenVsServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenVsServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenVsServiceResponse() = default;
};
class PrepareUploadRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> clientIp{};

  PrepareUploadRequest() {}

  explicit PrepareUploadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
  }


  virtual ~PrepareUploadRequest() = default;
};
class PrepareUploadResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> endpoint{};

  PrepareUploadResponseBody() {}

  explicit PrepareUploadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
  }


  virtual ~PrepareUploadResponseBody() = default;
};
class PrepareUploadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PrepareUploadResponseBody> body{};

  PrepareUploadResponse() {}

  explicit PrepareUploadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PrepareUploadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PrepareUploadResponseBody>(model1);
      }
    }
  }


  virtual ~PrepareUploadResponse() = default;
};
class PutBucketRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> comment{};
  shared_ptr<string> dispatcherType{};
  shared_ptr<string> bucketAcl{};
  shared_ptr<string> storageClass{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> dataRedundancyType{};

  PutBucketRequest() {}

  explicit PutBucketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (dispatcherType) {
      res["DispatcherType"] = boost::any(*dispatcherType);
    }
    if (bucketAcl) {
      res["BucketAcl"] = boost::any(*bucketAcl);
    }
    if (storageClass) {
      res["StorageClass"] = boost::any(*storageClass);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (dataRedundancyType) {
      res["DataRedundancyType"] = boost::any(*dataRedundancyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("DispatcherType") != m.end() && !m["DispatcherType"].empty()) {
      dispatcherType = make_shared<string>(boost::any_cast<string>(m["DispatcherType"]));
    }
    if (m.find("BucketAcl") != m.end() && !m["BucketAcl"].empty()) {
      bucketAcl = make_shared<string>(boost::any_cast<string>(m["BucketAcl"]));
    }
    if (m.find("StorageClass") != m.end() && !m["StorageClass"].empty()) {
      storageClass = make_shared<string>(boost::any_cast<string>(m["StorageClass"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("DataRedundancyType") != m.end() && !m["DataRedundancyType"].empty()) {
      dataRedundancyType = make_shared<string>(boost::any_cast<string>(m["DataRedundancyType"]));
    }
  }


  virtual ~PutBucketRequest() = default;
};
class PutBucketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PutBucketResponseBody() {}

  explicit PutBucketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PutBucketResponseBody() = default;
};
class PutBucketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PutBucketResponseBody> body{};

  PutBucketResponse() {}

  explicit PutBucketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutBucketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutBucketResponseBody>(model1);
      }
    }
  }


  virtual ~PutBucketResponse() = default;
};
class ResumeVsStreamRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> appName{};
  shared_ptr<string> streamName{};
  shared_ptr<string> liveStreamType{};
  shared_ptr<string> controlStreamAction{};

  ResumeVsStreamRequest() {}

  explicit ResumeVsStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    if (liveStreamType) {
      res["LiveStreamType"] = boost::any(*liveStreamType);
    }
    if (controlStreamAction) {
      res["ControlStreamAction"] = boost::any(*controlStreamAction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
    if (m.find("LiveStreamType") != m.end() && !m["LiveStreamType"].empty()) {
      liveStreamType = make_shared<string>(boost::any_cast<string>(m["LiveStreamType"]));
    }
    if (m.find("ControlStreamAction") != m.end() && !m["ControlStreamAction"].empty()) {
      controlStreamAction = make_shared<string>(boost::any_cast<string>(m["ControlStreamAction"]));
    }
  }


  virtual ~ResumeVsStreamRequest() = default;
};
class ResumeVsStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResumeVsStreamResponseBody() {}

  explicit ResumeVsStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResumeVsStreamResponseBody() = default;
};
class ResumeVsStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResumeVsStreamResponseBody> body{};

  ResumeVsStreamResponse() {}

  explicit ResumeVsStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResumeVsStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResumeVsStreamResponseBody>(model1);
      }
    }
  }


  virtual ~ResumeVsStreamResponse() = default;
};
class SetPresetRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> presetId{};
  shared_ptr<string> subProtocol{};

  SetPresetRequest() {}

  explicit SetPresetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (presetId) {
      res["PresetId"] = boost::any(*presetId);
    }
    if (subProtocol) {
      res["SubProtocol"] = boost::any(*subProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PresetId") != m.end() && !m["PresetId"].empty()) {
      presetId = make_shared<string>(boost::any_cast<string>(m["PresetId"]));
    }
    if (m.find("SubProtocol") != m.end() && !m["SubProtocol"].empty()) {
      subProtocol = make_shared<string>(boost::any_cast<string>(m["SubProtocol"]));
    }
  }


  virtual ~SetPresetRequest() = default;
};
class SetPresetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  SetPresetResponseBody() {}

  explicit SetPresetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetPresetResponseBody() = default;
};
class SetPresetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetPresetResponseBody> body{};

  SetPresetResponse() {}

  explicit SetPresetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetPresetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetPresetResponseBody>(model1);
      }
    }
  }


  virtual ~SetPresetResponse() = default;
};
class SetVsDomainCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> SSLProtocol{};
  shared_ptr<string> certName{};
  shared_ptr<string> certType{};
  shared_ptr<string> SSLPub{};
  shared_ptr<string> SSLPri{};
  shared_ptr<string> region{};
  shared_ptr<string> forceSet{};

  SetVsDomainCertificateRequest() {}

  explicit SetVsDomainCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (SSLProtocol) {
      res["SSLProtocol"] = boost::any(*SSLProtocol);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (SSLPub) {
      res["SSLPub"] = boost::any(*SSLPub);
    }
    if (SSLPri) {
      res["SSLPri"] = boost::any(*SSLPri);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (forceSet) {
      res["ForceSet"] = boost::any(*forceSet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("SSLProtocol") != m.end() && !m["SSLProtocol"].empty()) {
      SSLProtocol = make_shared<string>(boost::any_cast<string>(m["SSLProtocol"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("SSLPub") != m.end() && !m["SSLPub"].empty()) {
      SSLPub = make_shared<string>(boost::any_cast<string>(m["SSLPub"]));
    }
    if (m.find("SSLPri") != m.end() && !m["SSLPri"].empty()) {
      SSLPri = make_shared<string>(boost::any_cast<string>(m["SSLPri"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ForceSet") != m.end() && !m["ForceSet"].empty()) {
      forceSet = make_shared<string>(boost::any_cast<string>(m["ForceSet"]));
    }
  }


  virtual ~SetVsDomainCertificateRequest() = default;
};
class SetVsDomainCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetVsDomainCertificateResponseBody() {}

  explicit SetVsDomainCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetVsDomainCertificateResponseBody() = default;
};
class SetVsDomainCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetVsDomainCertificateResponseBody> body{};

  SetVsDomainCertificateResponse() {}

  explicit SetVsDomainCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetVsDomainCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetVsDomainCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~SetVsDomainCertificateResponse() = default;
};
class SetVsStreamsNotifyUrlConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> notifyUrl{};
  shared_ptr<string> authType{};
  shared_ptr<string> authKey{};

  SetVsStreamsNotifyUrlConfigRequest() {}

  explicit SetVsStreamsNotifyUrlConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (notifyUrl) {
      res["NotifyUrl"] = boost::any(*notifyUrl);
    }
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("NotifyUrl") != m.end() && !m["NotifyUrl"].empty()) {
      notifyUrl = make_shared<string>(boost::any_cast<string>(m["NotifyUrl"]));
    }
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
  }


  virtual ~SetVsStreamsNotifyUrlConfigRequest() = default;
};
class SetVsStreamsNotifyUrlConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetVsStreamsNotifyUrlConfigResponseBody() {}

  explicit SetVsStreamsNotifyUrlConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetVsStreamsNotifyUrlConfigResponseBody() = default;
};
class SetVsStreamsNotifyUrlConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetVsStreamsNotifyUrlConfigResponseBody> body{};

  SetVsStreamsNotifyUrlConfigResponse() {}

  explicit SetVsStreamsNotifyUrlConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetVsStreamsNotifyUrlConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetVsStreamsNotifyUrlConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SetVsStreamsNotifyUrlConfigResponse() = default;
};
class StartDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  StartDeviceRequest() {}

  explicit StartDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~StartDeviceRequest() = default;
};
class StartDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  StartDeviceResponseBody() {}

  explicit StartDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartDeviceResponseBody() = default;
};
class StartDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartDeviceResponseBody> body{};

  StartDeviceResponse() {}

  explicit StartDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~StartDeviceResponse() = default;
};
class StartParentPlatformRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  StartParentPlatformRequest() {}

  explicit StartParentPlatformRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~StartParentPlatformRequest() = default;
};
class StartParentPlatformResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  StartParentPlatformResponseBody() {}

  explicit StartParentPlatformResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartParentPlatformResponseBody() = default;
};
class StartParentPlatformResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartParentPlatformResponseBody> body{};

  StartParentPlatformResponse() {}

  explicit StartParentPlatformResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartParentPlatformResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartParentPlatformResponseBody>(model1);
      }
    }
  }


  virtual ~StartParentPlatformResponse() = default;
};
class StartRecordStreamRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> playDomain{};
  shared_ptr<string> app{};
  shared_ptr<string> name{};

  StartRecordStreamRequest() {}

  explicit StartRecordStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (playDomain) {
      res["PlayDomain"] = boost::any(*playDomain);
    }
    if (app) {
      res["App"] = boost::any(*app);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PlayDomain") != m.end() && !m["PlayDomain"].empty()) {
      playDomain = make_shared<string>(boost::any_cast<string>(m["PlayDomain"]));
    }
    if (m.find("App") != m.end() && !m["App"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~StartRecordStreamRequest() = default;
};
class StartRecordStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartRecordStreamResponseBody() {}

  explicit StartRecordStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartRecordStreamResponseBody() = default;
};
class StartRecordStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartRecordStreamResponseBody> body{};

  StartRecordStreamResponse() {}

  explicit StartRecordStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartRecordStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartRecordStreamResponseBody>(model1);
      }
    }
  }


  virtual ~StartRecordStreamResponse() = default;
};
class StartStreamRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};

  StartStreamRequest() {}

  explicit StartStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
  }


  virtual ~StartStreamRequest() = default;
};
class StartStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  StartStreamResponseBody() {}

  explicit StartStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~StartStreamResponseBody() = default;
};
class StartStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartStreamResponseBody> body{};

  StartStreamResponse() {}

  explicit StartStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartStreamResponseBody>(model1);
      }
    }
  }


  virtual ~StartStreamResponse() = default;
};
class StartTransferStreamRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> url{};
  shared_ptr<string> transcode{};

  StartTransferStreamRequest() {}

  explicit StartTransferStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (transcode) {
      res["Transcode"] = boost::any(*transcode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Transcode") != m.end() && !m["Transcode"].empty()) {
      transcode = make_shared<string>(boost::any_cast<string>(m["Transcode"]));
    }
  }


  virtual ~StartTransferStreamRequest() = default;
};
class StartTransferStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartTransferStreamResponseBody() {}

  explicit StartTransferStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartTransferStreamResponseBody() = default;
};
class StartTransferStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartTransferStreamResponseBody> body{};

  StartTransferStreamResponse() {}

  explicit StartTransferStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartTransferStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartTransferStreamResponseBody>(model1);
      }
    }
  }


  virtual ~StartTransferStreamResponse() = default;
};
class StopAdjustRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<bool> iris{};
  shared_ptr<bool> focus{};
  shared_ptr<string> subProtocol{};

  StopAdjustRequest() {}

  explicit StopAdjustRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (iris) {
      res["Iris"] = boost::any(*iris);
    }
    if (focus) {
      res["Focus"] = boost::any(*focus);
    }
    if (subProtocol) {
      res["SubProtocol"] = boost::any(*subProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Iris") != m.end() && !m["Iris"].empty()) {
      iris = make_shared<bool>(boost::any_cast<bool>(m["Iris"]));
    }
    if (m.find("Focus") != m.end() && !m["Focus"].empty()) {
      focus = make_shared<bool>(boost::any_cast<bool>(m["Focus"]));
    }
    if (m.find("SubProtocol") != m.end() && !m["SubProtocol"].empty()) {
      subProtocol = make_shared<string>(boost::any_cast<string>(m["SubProtocol"]));
    }
  }


  virtual ~StopAdjustRequest() = default;
};
class StopAdjustResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  StopAdjustResponseBody() {}

  explicit StopAdjustResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopAdjustResponseBody() = default;
};
class StopAdjustResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopAdjustResponseBody> body{};

  StopAdjustResponse() {}

  explicit StopAdjustResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopAdjustResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopAdjustResponseBody>(model1);
      }
    }
  }


  virtual ~StopAdjustResponse() = default;
};
class StopDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> startTime{};

  StopDeviceRequest() {}

  explicit StopDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~StopDeviceRequest() = default;
};
class StopDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  StopDeviceResponseBody() {}

  explicit StopDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopDeviceResponseBody() = default;
};
class StopDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopDeviceResponseBody> body{};

  StopDeviceResponse() {}

  explicit StopDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~StopDeviceResponse() = default;
};
class StopMoveRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<bool> pan{};
  shared_ptr<bool> tilt{};
  shared_ptr<bool> zoom{};
  shared_ptr<string> subProtocol{};

  StopMoveRequest() {}

  explicit StopMoveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (pan) {
      res["Pan"] = boost::any(*pan);
    }
    if (tilt) {
      res["Tilt"] = boost::any(*tilt);
    }
    if (zoom) {
      res["Zoom"] = boost::any(*zoom);
    }
    if (subProtocol) {
      res["SubProtocol"] = boost::any(*subProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Pan") != m.end() && !m["Pan"].empty()) {
      pan = make_shared<bool>(boost::any_cast<bool>(m["Pan"]));
    }
    if (m.find("Tilt") != m.end() && !m["Tilt"].empty()) {
      tilt = make_shared<bool>(boost::any_cast<bool>(m["Tilt"]));
    }
    if (m.find("Zoom") != m.end() && !m["Zoom"].empty()) {
      zoom = make_shared<bool>(boost::any_cast<bool>(m["Zoom"]));
    }
    if (m.find("SubProtocol") != m.end() && !m["SubProtocol"].empty()) {
      subProtocol = make_shared<string>(boost::any_cast<string>(m["SubProtocol"]));
    }
  }


  virtual ~StopMoveRequest() = default;
};
class StopMoveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  StopMoveResponseBody() {}

  explicit StopMoveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopMoveResponseBody() = default;
};
class StopMoveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopMoveResponseBody> body{};

  StopMoveResponse() {}

  explicit StopMoveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopMoveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopMoveResponseBody>(model1);
      }
    }
  }


  virtual ~StopMoveResponse() = default;
};
class StopRecordStreamRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> playDomain{};
  shared_ptr<string> app{};
  shared_ptr<string> name{};

  StopRecordStreamRequest() {}

  explicit StopRecordStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (playDomain) {
      res["PlayDomain"] = boost::any(*playDomain);
    }
    if (app) {
      res["App"] = boost::any(*app);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PlayDomain") != m.end() && !m["PlayDomain"].empty()) {
      playDomain = make_shared<string>(boost::any_cast<string>(m["PlayDomain"]));
    }
    if (m.find("App") != m.end() && !m["App"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~StopRecordStreamRequest() = default;
};
class StopRecordStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopRecordStreamResponseBody() {}

  explicit StopRecordStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopRecordStreamResponseBody() = default;
};
class StopRecordStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopRecordStreamResponseBody> body{};

  StopRecordStreamResponse() {}

  explicit StopRecordStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopRecordStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopRecordStreamResponseBody>(model1);
      }
    }
  }


  virtual ~StopRecordStreamResponse() = default;
};
class StopStreamRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> startTime{};

  StopStreamRequest() {}

  explicit StopStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~StopStreamRequest() = default;
};
class StopStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  StopStreamResponseBody() {}

  explicit StopStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopStreamResponseBody() = default;
};
class StopStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopStreamResponseBody> body{};

  StopStreamResponse() {}

  explicit StopStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopStreamResponseBody>(model1);
      }
    }
  }


  virtual ~StopStreamResponse() = default;
};
class StopTransferStreamRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};
  shared_ptr<string> transcode{};

  StopTransferStreamRequest() {}

  explicit StopTransferStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (transcode) {
      res["Transcode"] = boost::any(*transcode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Transcode") != m.end() && !m["Transcode"].empty()) {
      transcode = make_shared<string>(boost::any_cast<string>(m["Transcode"]));
    }
  }


  virtual ~StopTransferStreamRequest() = default;
};
class StopTransferStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopTransferStreamResponseBody() {}

  explicit StopTransferStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopTransferStreamResponseBody() = default;
};
class StopTransferStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopTransferStreamResponseBody> body{};

  StopTransferStreamResponse() {}

  explicit StopTransferStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopTransferStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopTransferStreamResponseBody>(model1);
      }
    }
  }


  virtual ~StopTransferStreamResponse() = default;
};
class SyncCatalogsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  SyncCatalogsRequest() {}

  explicit SyncCatalogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~SyncCatalogsRequest() = default;
};
class SyncCatalogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  SyncCatalogsResponseBody() {}

  explicit SyncCatalogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SyncCatalogsResponseBody() = default;
};
class SyncCatalogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SyncCatalogsResponseBody> body{};

  SyncCatalogsResponse() {}

  explicit SyncCatalogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncCatalogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncCatalogsResponseBody>(model1);
      }
    }
  }


  virtual ~SyncCatalogsResponse() = default;
};
class SyncDeviceChannelsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> deviceId{};

  SyncDeviceChannelsRequest() {}

  explicit SyncDeviceChannelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~SyncDeviceChannelsRequest() = default;
};
class SyncDeviceChannelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  SyncDeviceChannelsResponseBody() {}

  explicit SyncDeviceChannelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SyncDeviceChannelsResponseBody() = default;
};
class SyncDeviceChannelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SyncDeviceChannelsResponseBody> body{};

  SyncDeviceChannelsResponse() {}

  explicit SyncDeviceChannelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncDeviceChannelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncDeviceChannelsResponseBody>(model1);
      }
    }
  }


  virtual ~SyncDeviceChannelsResponse() = default;
};
class UnbindDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> deviceId{};

  UnbindDirectoryRequest() {}

  explicit UnbindDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~UnbindDirectoryRequest() = default;
};
class UnbindDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnbindDirectoryResponseBody() {}

  explicit UnbindDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnbindDirectoryResponseBody() = default;
};
class UnbindDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnbindDirectoryResponseBody> body{};

  UnbindDirectoryResponse() {}

  explicit UnbindDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindDirectoryResponse() = default;
};
class UnbindParentPlatformDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> parentPlatformId{};
  shared_ptr<string> deviceId{};

  UnbindParentPlatformDeviceRequest() {}

  explicit UnbindParentPlatformDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (parentPlatformId) {
      res["ParentPlatformId"] = boost::any(*parentPlatformId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ParentPlatformId") != m.end() && !m["ParentPlatformId"].empty()) {
      parentPlatformId = make_shared<string>(boost::any_cast<string>(m["ParentPlatformId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~UnbindParentPlatformDeviceRequest() = default;
};
class UnbindParentPlatformDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnbindParentPlatformDeviceResponseBody() {}

  explicit UnbindParentPlatformDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnbindParentPlatformDeviceResponseBody() = default;
};
class UnbindParentPlatformDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnbindParentPlatformDeviceResponseBody> body{};

  UnbindParentPlatformDeviceResponse() {}

  explicit UnbindParentPlatformDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindParentPlatformDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindParentPlatformDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindParentPlatformDeviceResponse() = default;
};
class UnbindPurchasedDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> deviceId{};

  UnbindPurchasedDeviceRequest() {}

  explicit UnbindPurchasedDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~UnbindPurchasedDeviceRequest() = default;
};
class UnbindPurchasedDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnbindPurchasedDeviceResponseBody() {}

  explicit UnbindPurchasedDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnbindPurchasedDeviceResponseBody() = default;
};
class UnbindPurchasedDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnbindPurchasedDeviceResponseBody> body{};

  UnbindPurchasedDeviceResponse() {}

  explicit UnbindPurchasedDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindPurchasedDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindPurchasedDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindPurchasedDeviceResponse() = default;
};
class UnbindTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};

  UnbindTemplateRequest() {}

  explicit UnbindTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~UnbindTemplateRequest() = default;
};
class UnbindTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> templateType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> templateId{};

  UnbindTemplateResponseBody() {}

  explicit UnbindTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~UnbindTemplateResponseBody() = default;
};
class UnbindTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnbindTemplateResponseBody> body{};

  UnbindTemplateResponse() {}

  explicit UnbindTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindTemplateResponse() = default;
};
class UnlockDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> id{};

  UnlockDeviceRequest() {}

  explicit UnlockDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~UnlockDeviceRequest() = default;
};
class UnlockDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  UnlockDeviceResponseBody() {}

  explicit UnlockDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnlockDeviceResponseBody() = default;
};
class UnlockDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnlockDeviceResponseBody> body{};

  UnlockDeviceResponse() {}

  explicit UnlockDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnlockDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnlockDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~UnlockDeviceResponse() = default;
};
class UpdateBucketInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> comment{};

  UpdateBucketInfoRequest() {}

  explicit UpdateBucketInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
  }


  virtual ~UpdateBucketInfoRequest() = default;
};
class UpdateBucketInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateBucketInfoResponseBody() {}

  explicit UpdateBucketInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateBucketInfoResponseBody() = default;
};
class UpdateBucketInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateBucketInfoResponseBody> body{};

  UpdateBucketInfoResponse() {}

  explicit UpdateBucketInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateBucketInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateBucketInfoResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateBucketInfoResponse() = default;
};
class UpdateVsPullStreamInfoConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> appName{};
  shared_ptr<string> streamName{};
  shared_ptr<string> sourceUrl{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> always{};

  UpdateVsPullStreamInfoConfigRequest() {}

  explicit UpdateVsPullStreamInfoConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (always) {
      res["Always"] = boost::any(*always);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Always") != m.end() && !m["Always"].empty()) {
      always = make_shared<string>(boost::any_cast<string>(m["Always"]));
    }
  }


  virtual ~UpdateVsPullStreamInfoConfigRequest() = default;
};
class UpdateVsPullStreamInfoConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateVsPullStreamInfoConfigResponseBody() {}

  explicit UpdateVsPullStreamInfoConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateVsPullStreamInfoConfigResponseBody() = default;
};
class UpdateVsPullStreamInfoConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateVsPullStreamInfoConfigResponseBody> body{};

  UpdateVsPullStreamInfoConfigResponse() {}

  explicit UpdateVsPullStreamInfoConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateVsPullStreamInfoConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVsPullStreamInfoConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVsPullStreamInfoConfigResponse() = default;
};
class UploadDeviceRecordRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> streamId{};
  shared_ptr<string> searchCriteria{};
  shared_ptr<string> uploadType{};
  shared_ptr<string> uploadId{};
  shared_ptr<string> uploadMode{};
  shared_ptr<string> uploadParams{};

  UploadDeviceRecordRequest() {}

  explicit UploadDeviceRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (streamId) {
      res["StreamId"] = boost::any(*streamId);
    }
    if (searchCriteria) {
      res["SearchCriteria"] = boost::any(*searchCriteria);
    }
    if (uploadType) {
      res["UploadType"] = boost::any(*uploadType);
    }
    if (uploadId) {
      res["UploadId"] = boost::any(*uploadId);
    }
    if (uploadMode) {
      res["UploadMode"] = boost::any(*uploadMode);
    }
    if (uploadParams) {
      res["UploadParams"] = boost::any(*uploadParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("StreamId") != m.end() && !m["StreamId"].empty()) {
      streamId = make_shared<string>(boost::any_cast<string>(m["StreamId"]));
    }
    if (m.find("SearchCriteria") != m.end() && !m["SearchCriteria"].empty()) {
      searchCriteria = make_shared<string>(boost::any_cast<string>(m["SearchCriteria"]));
    }
    if (m.find("UploadType") != m.end() && !m["UploadType"].empty()) {
      uploadType = make_shared<string>(boost::any_cast<string>(m["UploadType"]));
    }
    if (m.find("UploadId") != m.end() && !m["UploadId"].empty()) {
      uploadId = make_shared<string>(boost::any_cast<string>(m["UploadId"]));
    }
    if (m.find("UploadMode") != m.end() && !m["UploadMode"].empty()) {
      uploadMode = make_shared<string>(boost::any_cast<string>(m["UploadMode"]));
    }
    if (m.find("UploadParams") != m.end() && !m["UploadParams"].empty()) {
      uploadParams = make_shared<string>(boost::any_cast<string>(m["UploadParams"]));
    }
  }


  virtual ~UploadDeviceRecordRequest() = default;
};
class UploadDeviceRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  UploadDeviceRecordResponseBody() {}

  explicit UploadDeviceRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UploadDeviceRecordResponseBody() = default;
};
class UploadDeviceRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UploadDeviceRecordResponseBody> body{};

  UploadDeviceRecordResponse() {}

  explicit UploadDeviceRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadDeviceRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadDeviceRecordResponseBody>(model1);
      }
    }
  }


  virtual ~UploadDeviceRecordResponse() = default;
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
  AddDeviceResponse addDeviceWithOptions(shared_ptr<AddDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDeviceResponse addDevice(shared_ptr<AddDeviceRequest> request);
  AddVsPullStreamInfoConfigResponse addVsPullStreamInfoConfigWithOptions(shared_ptr<AddVsPullStreamInfoConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddVsPullStreamInfoConfigResponse addVsPullStreamInfoConfig(shared_ptr<AddVsPullStreamInfoConfigRequest> request);
  BatchBindDirectoriesResponse batchBindDirectoriesWithOptions(shared_ptr<BatchBindDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchBindDirectoriesResponse batchBindDirectories(shared_ptr<BatchBindDirectoriesRequest> request);
  BatchBindParentPlatformDevicesResponse batchBindParentPlatformDevicesWithOptions(shared_ptr<BatchBindParentPlatformDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchBindParentPlatformDevicesResponse batchBindParentPlatformDevices(shared_ptr<BatchBindParentPlatformDevicesRequest> request);
  BatchBindPurchasedDevicesResponse batchBindPurchasedDevicesWithOptions(shared_ptr<BatchBindPurchasedDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchBindPurchasedDevicesResponse batchBindPurchasedDevices(shared_ptr<BatchBindPurchasedDevicesRequest> request);
  BatchBindTemplateResponse batchBindTemplateWithOptions(shared_ptr<BatchBindTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchBindTemplateResponse batchBindTemplate(shared_ptr<BatchBindTemplateRequest> request);
  BatchBindTemplatesResponse batchBindTemplatesWithOptions(shared_ptr<BatchBindTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchBindTemplatesResponse batchBindTemplates(shared_ptr<BatchBindTemplatesRequest> request);
  BatchDeleteDevicesResponse batchDeleteDevicesWithOptions(shared_ptr<BatchDeleteDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchDeleteDevicesResponse batchDeleteDevices(shared_ptr<BatchDeleteDevicesRequest> request);
  BatchDeleteVsDomainConfigsResponse batchDeleteVsDomainConfigsWithOptions(shared_ptr<BatchDeleteVsDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchDeleteVsDomainConfigsResponse batchDeleteVsDomainConfigs(shared_ptr<BatchDeleteVsDomainConfigsRequest> request);
  BatchForbidVsStreamResponse batchForbidVsStreamWithOptions(shared_ptr<BatchForbidVsStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchForbidVsStreamResponse batchForbidVsStream(shared_ptr<BatchForbidVsStreamRequest> request);
  BatchResumeVsStreamResponse batchResumeVsStreamWithOptions(shared_ptr<BatchResumeVsStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchResumeVsStreamResponse batchResumeVsStream(shared_ptr<BatchResumeVsStreamRequest> request);
  BatchSetVsDomainConfigsResponse batchSetVsDomainConfigsWithOptions(shared_ptr<BatchSetVsDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchSetVsDomainConfigsResponse batchSetVsDomainConfigs(shared_ptr<BatchSetVsDomainConfigsRequest> request);
  BatchStartDevicesResponse batchStartDevicesWithOptions(shared_ptr<BatchStartDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchStartDevicesResponse batchStartDevices(shared_ptr<BatchStartDevicesRequest> request);
  BatchStartStreamsResponse batchStartStreamsWithOptions(shared_ptr<BatchStartStreamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchStartStreamsResponse batchStartStreams(shared_ptr<BatchStartStreamsRequest> request);
  BatchStopDevicesResponse batchStopDevicesWithOptions(shared_ptr<BatchStopDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchStopDevicesResponse batchStopDevices(shared_ptr<BatchStopDevicesRequest> request);
  BatchStopStreamsResponse batchStopStreamsWithOptions(shared_ptr<BatchStopStreamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchStopStreamsResponse batchStopStreams(shared_ptr<BatchStopStreamsRequest> request);
  BatchUnbindDirectoriesResponse batchUnbindDirectoriesWithOptions(shared_ptr<BatchUnbindDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchUnbindDirectoriesResponse batchUnbindDirectories(shared_ptr<BatchUnbindDirectoriesRequest> request);
  BatchUnbindParentPlatformDevicesResponse batchUnbindParentPlatformDevicesWithOptions(shared_ptr<BatchUnbindParentPlatformDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchUnbindParentPlatformDevicesResponse batchUnbindParentPlatformDevices(shared_ptr<BatchUnbindParentPlatformDevicesRequest> request);
  BatchUnbindPurchasedDevicesResponse batchUnbindPurchasedDevicesWithOptions(shared_ptr<BatchUnbindPurchasedDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchUnbindPurchasedDevicesResponse batchUnbindPurchasedDevices(shared_ptr<BatchUnbindPurchasedDevicesRequest> request);
  BatchUnbindTemplateResponse batchUnbindTemplateWithOptions(shared_ptr<BatchUnbindTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchUnbindTemplateResponse batchUnbindTemplate(shared_ptr<BatchUnbindTemplateRequest> request);
  BatchUnbindTemplatesResponse batchUnbindTemplatesWithOptions(shared_ptr<BatchUnbindTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchUnbindTemplatesResponse batchUnbindTemplates(shared_ptr<BatchUnbindTemplatesRequest> request);
  BindDirectoryResponse bindDirectoryWithOptions(shared_ptr<BindDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindDirectoryResponse bindDirectory(shared_ptr<BindDirectoryRequest> request);
  BindParentPlatformDeviceResponse bindParentPlatformDeviceWithOptions(shared_ptr<BindParentPlatformDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindParentPlatformDeviceResponse bindParentPlatformDevice(shared_ptr<BindParentPlatformDeviceRequest> request);
  BindPurchasedDeviceResponse bindPurchasedDeviceWithOptions(shared_ptr<BindPurchasedDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindPurchasedDeviceResponse bindPurchasedDevice(shared_ptr<BindPurchasedDeviceRequest> request);
  BindTemplateResponse bindTemplateWithOptions(shared_ptr<BindTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindTemplateResponse bindTemplate(shared_ptr<BindTemplateRequest> request);
  ContinuousAdjustResponse continuousAdjustWithOptions(shared_ptr<ContinuousAdjustRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ContinuousAdjustResponse continuousAdjust(shared_ptr<ContinuousAdjustRequest> request);
  ContinuousMoveResponse continuousMoveWithOptions(shared_ptr<ContinuousMoveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ContinuousMoveResponse continuousMove(shared_ptr<ContinuousMoveRequest> request);
  CreateDeviceResponse createDeviceWithOptions(shared_ptr<CreateDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDeviceResponse createDevice(shared_ptr<CreateDeviceRequest> request);
  CreateDeviceAlarmResponse createDeviceAlarmWithOptions(shared_ptr<CreateDeviceAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDeviceAlarmResponse createDeviceAlarm(shared_ptr<CreateDeviceAlarmRequest> request);
  CreateDeviceSnapshotResponse createDeviceSnapshotWithOptions(shared_ptr<CreateDeviceSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDeviceSnapshotResponse createDeviceSnapshot(shared_ptr<CreateDeviceSnapshotRequest> request);
  CreateDirectoryResponse createDirectoryWithOptions(shared_ptr<CreateDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDirectoryResponse createDirectory(shared_ptr<CreateDirectoryRequest> request);
  CreateGroupResponse createGroupWithOptions(shared_ptr<CreateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupResponse createGroup(shared_ptr<CreateGroupRequest> request);
  CreateParentPlatformResponse createParentPlatformWithOptions(shared_ptr<CreateParentPlatformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateParentPlatformResponse createParentPlatform(shared_ptr<CreateParentPlatformRequest> request);
  CreateStreamSnapshotResponse createStreamSnapshotWithOptions(shared_ptr<CreateStreamSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStreamSnapshotResponse createStreamSnapshot(shared_ptr<CreateStreamSnapshotRequest> request);
  CreateTemplateResponse createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTemplateResponse createTemplate(shared_ptr<CreateTemplateRequest> request);
  DeleteBucketResponse deleteBucketWithOptions(shared_ptr<DeleteBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBucketResponse deleteBucket(shared_ptr<DeleteBucketRequest> request);
  DeleteDeviceResponse deleteDeviceWithOptions(shared_ptr<DeleteDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDeviceResponse deleteDevice(shared_ptr<DeleteDeviceRequest> request);
  DeleteDirectoryResponse deleteDirectoryWithOptions(shared_ptr<DeleteDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDirectoryResponse deleteDirectory(shared_ptr<DeleteDirectoryRequest> request);
  DeleteGroupResponse deleteGroupWithOptions(shared_ptr<DeleteGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupResponse deleteGroup(shared_ptr<DeleteGroupRequest> request);
  DeleteParentPlatformResponse deleteParentPlatformWithOptions(shared_ptr<DeleteParentPlatformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteParentPlatformResponse deleteParentPlatform(shared_ptr<DeleteParentPlatformRequest> request);
  DeletePresetResponse deletePresetWithOptions(shared_ptr<DeletePresetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePresetResponse deletePreset(shared_ptr<DeletePresetRequest> request);
  DeleteTemplateResponse deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTemplateResponse deleteTemplate(shared_ptr<DeleteTemplateRequest> request);
  DeleteVsPullStreamInfoConfigResponse deleteVsPullStreamInfoConfigWithOptions(shared_ptr<DeleteVsPullStreamInfoConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVsPullStreamInfoConfigResponse deleteVsPullStreamInfoConfig(shared_ptr<DeleteVsPullStreamInfoConfigRequest> request);
  DeleteVsStreamsNotifyUrlConfigResponse deleteVsStreamsNotifyUrlConfigWithOptions(shared_ptr<DeleteVsStreamsNotifyUrlConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVsStreamsNotifyUrlConfigResponse deleteVsStreamsNotifyUrlConfig(shared_ptr<DeleteVsStreamsNotifyUrlConfigRequest> request);
  DescribeAccountStatResponse describeAccountStatWithOptions(shared_ptr<DescribeAccountStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountStatResponse describeAccountStat(shared_ptr<DescribeAccountStatRequest> request);
  DescribeDeviceResponse describeDeviceWithOptions(shared_ptr<DescribeDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeviceResponse describeDevice(shared_ptr<DescribeDeviceRequest> request);
  DescribeDeviceChannelsResponse describeDeviceChannelsWithOptions(shared_ptr<DescribeDeviceChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeviceChannelsResponse describeDeviceChannels(shared_ptr<DescribeDeviceChannelsRequest> request);
  DescribeDeviceGatewayResponse describeDeviceGatewayWithOptions(shared_ptr<DescribeDeviceGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeviceGatewayResponse describeDeviceGateway(shared_ptr<DescribeDeviceGatewayRequest> request);
  DescribeDevicesResponse describeDevicesWithOptions(shared_ptr<DescribeDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDevicesResponse describeDevices(shared_ptr<DescribeDevicesRequest> request);
  DescribeDeviceURLResponse describeDeviceURLWithOptions(shared_ptr<DescribeDeviceURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeviceURLResponse describeDeviceURL(shared_ptr<DescribeDeviceURLRequest> request);
  DescribeDirectoriesResponse describeDirectoriesWithOptions(shared_ptr<DescribeDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDirectoriesResponse describeDirectories(shared_ptr<DescribeDirectoriesRequest> request);
  DescribeDirectoryResponse describeDirectoryWithOptions(shared_ptr<DescribeDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDirectoryResponse describeDirectory(shared_ptr<DescribeDirectoryRequest> request);
  DescribeGroupResponse describeGroupWithOptions(shared_ptr<DescribeGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGroupResponse describeGroup(shared_ptr<DescribeGroupRequest> request);
  DescribeGroupsResponse describeGroupsWithOptions(shared_ptr<DescribeGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGroupsResponse describeGroups(shared_ptr<DescribeGroupsRequest> request);
  DescribeParentPlatformResponse describeParentPlatformWithOptions(shared_ptr<DescribeParentPlatformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParentPlatformResponse describeParentPlatform(shared_ptr<DescribeParentPlatformRequest> request);
  DescribeParentPlatformDevicesResponse describeParentPlatformDevicesWithOptions(shared_ptr<DescribeParentPlatformDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParentPlatformDevicesResponse describeParentPlatformDevices(shared_ptr<DescribeParentPlatformDevicesRequest> request);
  DescribeParentPlatformsResponse describeParentPlatformsWithOptions(shared_ptr<DescribeParentPlatformsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParentPlatformsResponse describeParentPlatforms(shared_ptr<DescribeParentPlatformsRequest> request);
  DescribePresetsResponse describePresetsWithOptions(shared_ptr<DescribePresetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePresetsResponse describePresets(shared_ptr<DescribePresetsRequest> request);
  DescribePurchasedDeviceResponse describePurchasedDeviceWithOptions(shared_ptr<DescribePurchasedDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePurchasedDeviceResponse describePurchasedDevice(shared_ptr<DescribePurchasedDeviceRequest> request);
  DescribePurchasedDevicesResponse describePurchasedDevicesWithOptions(shared_ptr<DescribePurchasedDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePurchasedDevicesResponse describePurchasedDevices(shared_ptr<DescribePurchasedDevicesRequest> request);
  DescribeRecordsResponse describeRecordsWithOptions(shared_ptr<DescribeRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRecordsResponse describeRecords(shared_ptr<DescribeRecordsRequest> request);
  DescribeStreamResponse describeStreamWithOptions(shared_ptr<DescribeStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStreamResponse describeStream(shared_ptr<DescribeStreamRequest> request);
  DescribeStreamsResponse describeStreamsWithOptions(shared_ptr<DescribeStreamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStreamsResponse describeStreams(shared_ptr<DescribeStreamsRequest> request);
  DescribeStreamURLResponse describeStreamURLWithOptions(shared_ptr<DescribeStreamURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStreamURLResponse describeStreamURL(shared_ptr<DescribeStreamURLRequest> request);
  DescribeStreamVodListResponse describeStreamVodListWithOptions(shared_ptr<DescribeStreamVodListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStreamVodListResponse describeStreamVodList(shared_ptr<DescribeStreamVodListRequest> request);
  DescribeTemplateResponse describeTemplateWithOptions(shared_ptr<DescribeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTemplateResponse describeTemplate(shared_ptr<DescribeTemplateRequest> request);
  DescribeTemplatesResponse describeTemplatesWithOptions(shared_ptr<DescribeTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTemplatesResponse describeTemplates(shared_ptr<DescribeTemplatesRequest> request);
  DescribeVodStreamURLResponse describeVodStreamURLWithOptions(shared_ptr<DescribeVodStreamURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVodStreamURLResponse describeVodStreamURL(shared_ptr<DescribeVodStreamURLRequest> request);
  DescribeVsCertificateDetailResponse describeVsCertificateDetailWithOptions(shared_ptr<DescribeVsCertificateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsCertificateDetailResponse describeVsCertificateDetail(shared_ptr<DescribeVsCertificateDetailRequest> request);
  DescribeVsCertificateListResponse describeVsCertificateListWithOptions(shared_ptr<DescribeVsCertificateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsCertificateListResponse describeVsCertificateList(shared_ptr<DescribeVsCertificateListRequest> request);
  DescribeVsDomainBpsDataResponse describeVsDomainBpsDataWithOptions(shared_ptr<DescribeVsDomainBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsDomainBpsDataResponse describeVsDomainBpsData(shared_ptr<DescribeVsDomainBpsDataRequest> request);
  DescribeVsDomainCertificateInfoResponse describeVsDomainCertificateInfoWithOptions(shared_ptr<DescribeVsDomainCertificateInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsDomainCertificateInfoResponse describeVsDomainCertificateInfo(shared_ptr<DescribeVsDomainCertificateInfoRequest> request);
  DescribeVsDomainConfigsResponse describeVsDomainConfigsWithOptions(shared_ptr<DescribeVsDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsDomainConfigsResponse describeVsDomainConfigs(shared_ptr<DescribeVsDomainConfigsRequest> request);
  DescribeVsDomainDetailResponse describeVsDomainDetailWithOptions(shared_ptr<DescribeVsDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsDomainDetailResponse describeVsDomainDetail(shared_ptr<DescribeVsDomainDetailRequest> request);
  DescribeVsDomainPvDataResponse describeVsDomainPvDataWithOptions(shared_ptr<DescribeVsDomainPvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsDomainPvDataResponse describeVsDomainPvData(shared_ptr<DescribeVsDomainPvDataRequest> request);
  DescribeVsDomainPvUvDataResponse describeVsDomainPvUvDataWithOptions(shared_ptr<DescribeVsDomainPvUvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsDomainPvUvDataResponse describeVsDomainPvUvData(shared_ptr<DescribeVsDomainPvUvDataRequest> request);
  DescribeVsDomainRecordDataResponse describeVsDomainRecordDataWithOptions(shared_ptr<DescribeVsDomainRecordDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsDomainRecordDataResponse describeVsDomainRecordData(shared_ptr<DescribeVsDomainRecordDataRequest> request);
  DescribeVsDomainRegionDataResponse describeVsDomainRegionDataWithOptions(shared_ptr<DescribeVsDomainRegionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsDomainRegionDataResponse describeVsDomainRegionData(shared_ptr<DescribeVsDomainRegionDataRequest> request);
  DescribeVsDomainReqBpsDataResponse describeVsDomainReqBpsDataWithOptions(shared_ptr<DescribeVsDomainReqBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsDomainReqBpsDataResponse describeVsDomainReqBpsData(shared_ptr<DescribeVsDomainReqBpsDataRequest> request);
  DescribeVsDomainReqTrafficDataResponse describeVsDomainReqTrafficDataWithOptions(shared_ptr<DescribeVsDomainReqTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsDomainReqTrafficDataResponse describeVsDomainReqTrafficData(shared_ptr<DescribeVsDomainReqTrafficDataRequest> request);
  DescribeVsDomainSnapshotDataResponse describeVsDomainSnapshotDataWithOptions(shared_ptr<DescribeVsDomainSnapshotDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsDomainSnapshotDataResponse describeVsDomainSnapshotData(shared_ptr<DescribeVsDomainSnapshotDataRequest> request);
  DescribeVsDomainTrafficDataResponse describeVsDomainTrafficDataWithOptions(shared_ptr<DescribeVsDomainTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsDomainTrafficDataResponse describeVsDomainTrafficData(shared_ptr<DescribeVsDomainTrafficDataRequest> request);
  DescribeVsDomainUvDataResponse describeVsDomainUvDataWithOptions(shared_ptr<DescribeVsDomainUvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsDomainUvDataResponse describeVsDomainUvData(shared_ptr<DescribeVsDomainUvDataRequest> request);
  DescribeVsPullStreamInfoConfigResponse describeVsPullStreamInfoConfigWithOptions(shared_ptr<DescribeVsPullStreamInfoConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsPullStreamInfoConfigResponse describeVsPullStreamInfoConfig(shared_ptr<DescribeVsPullStreamInfoConfigRequest> request);
  DescribeVsStorageUsageDataResponse describeVsStorageUsageDataWithOptions(shared_ptr<DescribeVsStorageUsageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsStorageUsageDataResponse describeVsStorageUsageData(shared_ptr<DescribeVsStorageUsageDataRequest> request);
  DescribeVsStreamsNotifyUrlConfigResponse describeVsStreamsNotifyUrlConfigWithOptions(shared_ptr<DescribeVsStreamsNotifyUrlConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsStreamsNotifyUrlConfigResponse describeVsStreamsNotifyUrlConfig(shared_ptr<DescribeVsStreamsNotifyUrlConfigRequest> request);
  DescribeVsStreamsOnlineListResponse describeVsStreamsOnlineListWithOptions(shared_ptr<DescribeVsStreamsOnlineListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsStreamsOnlineListResponse describeVsStreamsOnlineList(shared_ptr<DescribeVsStreamsOnlineListRequest> request);
  DescribeVsStreamsPublishListResponse describeVsStreamsPublishListWithOptions(shared_ptr<DescribeVsStreamsPublishListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsStreamsPublishListResponse describeVsStreamsPublishList(shared_ptr<DescribeVsStreamsPublishListRequest> request);
  DescribeVsTopDomainsByFlowResponse describeVsTopDomainsByFlowWithOptions(shared_ptr<DescribeVsTopDomainsByFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsTopDomainsByFlowResponse describeVsTopDomainsByFlow(shared_ptr<DescribeVsTopDomainsByFlowRequest> request);
  DescribeVsUpPeakPublishStreamDataResponse describeVsUpPeakPublishStreamDataWithOptions(shared_ptr<DescribeVsUpPeakPublishStreamDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsUpPeakPublishStreamDataResponse describeVsUpPeakPublishStreamData(shared_ptr<DescribeVsUpPeakPublishStreamDataRequest> request);
  DescribeVsUserResourcePackageResponse describeVsUserResourcePackageWithOptions(shared_ptr<DescribeVsUserResourcePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVsUserResourcePackageResponse describeVsUserResourcePackage(shared_ptr<DescribeVsUserResourcePackageRequest> request);
  ForbidVsStreamResponse forbidVsStreamWithOptions(shared_ptr<ForbidVsStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ForbidVsStreamResponse forbidVsStream(shared_ptr<ForbidVsStreamRequest> request);
  GetBucketInfoResponse getBucketInfoWithOptions(shared_ptr<GetBucketInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBucketInfoResponse getBucketInfo(shared_ptr<GetBucketInfoRequest> request);
  GotoPresetResponse gotoPresetWithOptions(shared_ptr<GotoPresetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GotoPresetResponse gotoPreset(shared_ptr<GotoPresetRequest> request);
  ListBucketsResponse listBucketsWithOptions(shared_ptr<ListBucketsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBucketsResponse listBuckets(shared_ptr<ListBucketsRequest> request);
  ListDeviceChannelsResponse listDeviceChannelsWithOptions(shared_ptr<ListDeviceChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceChannelsResponse listDeviceChannels(shared_ptr<ListDeviceChannelsRequest> request);
  ListDeviceRecordsResponse listDeviceRecordsWithOptions(shared_ptr<ListDeviceRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceRecordsResponse listDeviceRecords(shared_ptr<ListDeviceRecordsRequest> request);
  ListObjectsResponse listObjectsWithOptions(shared_ptr<ListObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListObjectsResponse listObjects(shared_ptr<ListObjectsRequest> request);
  ModifyDeviceResponse modifyDeviceWithOptions(shared_ptr<ModifyDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDeviceResponse modifyDevice(shared_ptr<ModifyDeviceRequest> request);
  ModifyDeviceAlarmResponse modifyDeviceAlarmWithOptions(shared_ptr<ModifyDeviceAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDeviceAlarmResponse modifyDeviceAlarm(shared_ptr<ModifyDeviceAlarmRequest> request);
  ModifyDeviceCaptureResponse modifyDeviceCaptureWithOptions(shared_ptr<ModifyDeviceCaptureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDeviceCaptureResponse modifyDeviceCapture(shared_ptr<ModifyDeviceCaptureRequest> request);
  ModifyDeviceChannelsResponse modifyDeviceChannelsWithOptions(shared_ptr<ModifyDeviceChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDeviceChannelsResponse modifyDeviceChannels(shared_ptr<ModifyDeviceChannelsRequest> request);
  ModifyDirectoryResponse modifyDirectoryWithOptions(shared_ptr<ModifyDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDirectoryResponse modifyDirectory(shared_ptr<ModifyDirectoryRequest> request);
  ModifyGroupResponse modifyGroupWithOptions(shared_ptr<ModifyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyGroupResponse modifyGroup(shared_ptr<ModifyGroupRequest> request);
  ModifyParentPlatformResponse modifyParentPlatformWithOptions(shared_ptr<ModifyParentPlatformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyParentPlatformResponse modifyParentPlatform(shared_ptr<ModifyParentPlatformRequest> request);
  ModifyTemplateResponse modifyTemplateWithOptions(shared_ptr<ModifyTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyTemplateResponse modifyTemplate(shared_ptr<ModifyTemplateRequest> request);
  OpenVsServiceResponse openVsServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenVsServiceResponse openVsService();
  PrepareUploadResponse prepareUploadWithOptions(shared_ptr<PrepareUploadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PrepareUploadResponse prepareUpload(shared_ptr<PrepareUploadRequest> request);
  PutBucketResponse putBucketWithOptions(shared_ptr<PutBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutBucketResponse putBucket(shared_ptr<PutBucketRequest> request);
  ResumeVsStreamResponse resumeVsStreamWithOptions(shared_ptr<ResumeVsStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeVsStreamResponse resumeVsStream(shared_ptr<ResumeVsStreamRequest> request);
  SetPresetResponse setPresetWithOptions(shared_ptr<SetPresetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetPresetResponse setPreset(shared_ptr<SetPresetRequest> request);
  SetVsDomainCertificateResponse setVsDomainCertificateWithOptions(shared_ptr<SetVsDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetVsDomainCertificateResponse setVsDomainCertificate(shared_ptr<SetVsDomainCertificateRequest> request);
  SetVsStreamsNotifyUrlConfigResponse setVsStreamsNotifyUrlConfigWithOptions(shared_ptr<SetVsStreamsNotifyUrlConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetVsStreamsNotifyUrlConfigResponse setVsStreamsNotifyUrlConfig(shared_ptr<SetVsStreamsNotifyUrlConfigRequest> request);
  StartDeviceResponse startDeviceWithOptions(shared_ptr<StartDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDeviceResponse startDevice(shared_ptr<StartDeviceRequest> request);
  StartParentPlatformResponse startParentPlatformWithOptions(shared_ptr<StartParentPlatformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartParentPlatformResponse startParentPlatform(shared_ptr<StartParentPlatformRequest> request);
  StartRecordStreamResponse startRecordStreamWithOptions(shared_ptr<StartRecordStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartRecordStreamResponse startRecordStream(shared_ptr<StartRecordStreamRequest> request);
  StartStreamResponse startStreamWithOptions(shared_ptr<StartStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartStreamResponse startStream(shared_ptr<StartStreamRequest> request);
  StartTransferStreamResponse startTransferStreamWithOptions(shared_ptr<StartTransferStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartTransferStreamResponse startTransferStream(shared_ptr<StartTransferStreamRequest> request);
  StopAdjustResponse stopAdjustWithOptions(shared_ptr<StopAdjustRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopAdjustResponse stopAdjust(shared_ptr<StopAdjustRequest> request);
  StopDeviceResponse stopDeviceWithOptions(shared_ptr<StopDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDeviceResponse stopDevice(shared_ptr<StopDeviceRequest> request);
  StopMoveResponse stopMoveWithOptions(shared_ptr<StopMoveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopMoveResponse stopMove(shared_ptr<StopMoveRequest> request);
  StopRecordStreamResponse stopRecordStreamWithOptions(shared_ptr<StopRecordStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopRecordStreamResponse stopRecordStream(shared_ptr<StopRecordStreamRequest> request);
  StopStreamResponse stopStreamWithOptions(shared_ptr<StopStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopStreamResponse stopStream(shared_ptr<StopStreamRequest> request);
  StopTransferStreamResponse stopTransferStreamWithOptions(shared_ptr<StopTransferStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopTransferStreamResponse stopTransferStream(shared_ptr<StopTransferStreamRequest> request);
  SyncCatalogsResponse syncCatalogsWithOptions(shared_ptr<SyncCatalogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncCatalogsResponse syncCatalogs(shared_ptr<SyncCatalogsRequest> request);
  SyncDeviceChannelsResponse syncDeviceChannelsWithOptions(shared_ptr<SyncDeviceChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncDeviceChannelsResponse syncDeviceChannels(shared_ptr<SyncDeviceChannelsRequest> request);
  UnbindDirectoryResponse unbindDirectoryWithOptions(shared_ptr<UnbindDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindDirectoryResponse unbindDirectory(shared_ptr<UnbindDirectoryRequest> request);
  UnbindParentPlatformDeviceResponse unbindParentPlatformDeviceWithOptions(shared_ptr<UnbindParentPlatformDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindParentPlatformDeviceResponse unbindParentPlatformDevice(shared_ptr<UnbindParentPlatformDeviceRequest> request);
  UnbindPurchasedDeviceResponse unbindPurchasedDeviceWithOptions(shared_ptr<UnbindPurchasedDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindPurchasedDeviceResponse unbindPurchasedDevice(shared_ptr<UnbindPurchasedDeviceRequest> request);
  UnbindTemplateResponse unbindTemplateWithOptions(shared_ptr<UnbindTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindTemplateResponse unbindTemplate(shared_ptr<UnbindTemplateRequest> request);
  UnlockDeviceResponse unlockDeviceWithOptions(shared_ptr<UnlockDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnlockDeviceResponse unlockDevice(shared_ptr<UnlockDeviceRequest> request);
  UpdateBucketInfoResponse updateBucketInfoWithOptions(shared_ptr<UpdateBucketInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateBucketInfoResponse updateBucketInfo(shared_ptr<UpdateBucketInfoRequest> request);
  UpdateVsPullStreamInfoConfigResponse updateVsPullStreamInfoConfigWithOptions(shared_ptr<UpdateVsPullStreamInfoConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVsPullStreamInfoConfigResponse updateVsPullStreamInfoConfig(shared_ptr<UpdateVsPullStreamInfoConfigRequest> request);
  UploadDeviceRecordResponse uploadDeviceRecordWithOptions(shared_ptr<UploadDeviceRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadDeviceRecordResponse uploadDeviceRecord(shared_ptr<UploadDeviceRecordRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Vs20181212

#endif
