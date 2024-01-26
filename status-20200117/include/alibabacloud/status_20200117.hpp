// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_STATUS20200117_H_
#define ALIBABACLOUD_STATUS20200117_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Status20200117 {
class ListEventInProgressRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> regionIds{};

  ListEventInProgressRequest() {}

  explicit ListEventInProgressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListEventInProgressRequest() = default;
};
class ListEventInProgressShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionIdsShrink{};

  ListEventInProgressShrinkRequest() {}

  explicit ListEventInProgressShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionIdsShrink) {
      res["RegionIds"] = boost::any(*regionIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      regionIdsShrink = make_shared<string>(boost::any_cast<string>(m["RegionIds"]));
    }
  }


  virtual ~ListEventInProgressShrinkRequest() = default;
};
class ListEventInProgressResponseBodyDataEventUpdates : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> publishTime{};

  ListEventInProgressResponseBodyDataEventUpdates() {}

  explicit ListEventInProgressResponseBodyDataEventUpdates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<long>(boost::any_cast<long>(m["PublishTime"]));
    }
  }


  virtual ~ListEventInProgressResponseBodyDataEventUpdates() = default;
};
class ListEventInProgressResponseBodyDataImpactsProduct : public Darabonba::Model {
public:
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};

  ListEventInProgressResponseBodyDataImpactsProduct() {}

  explicit ListEventInProgressResponseBodyDataImpactsProduct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
  }


  virtual ~ListEventInProgressResponseBodyDataImpactsProduct() = default;
};
class ListEventInProgressResponseBodyDataImpactsRegion : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};

  ListEventInProgressResponseBodyDataImpactsRegion() {}

  explicit ListEventInProgressResponseBodyDataImpactsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
  }


  virtual ~ListEventInProgressResponseBodyDataImpactsRegion() = default;
};
class ListEventInProgressResponseBodyDataImpacts : public Darabonba::Model {
public:
  shared_ptr<ListEventInProgressResponseBodyDataImpactsProduct> product{};
  shared_ptr<long> recoveryTime{};
  shared_ptr<ListEventInProgressResponseBodyDataImpactsRegion> region{};
  shared_ptr<long> startTime{};

  ListEventInProgressResponseBodyDataImpacts() {}

  explicit ListEventInProgressResponseBodyDataImpacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (product) {
      res["Product"] = product ? boost::any(product->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (recoveryTime) {
      res["RecoveryTime"] = boost::any(*recoveryTime);
    }
    if (region) {
      res["Region"] = region ? boost::any(region->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      if (typeid(map<string, boost::any>) == m["Product"].type()) {
        ListEventInProgressResponseBodyDataImpactsProduct model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Product"]));
        product = make_shared<ListEventInProgressResponseBodyDataImpactsProduct>(model1);
      }
    }
    if (m.find("RecoveryTime") != m.end() && !m["RecoveryTime"].empty()) {
      recoveryTime = make_shared<long>(boost::any_cast<long>(m["RecoveryTime"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(map<string, boost::any>) == m["Region"].type()) {
        ListEventInProgressResponseBodyDataImpactsRegion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Region"]));
        region = make_shared<ListEventInProgressResponseBodyDataImpactsRegion>(model1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListEventInProgressResponseBodyDataImpacts() = default;
};
class ListEventInProgressResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListEventInProgressResponseBodyDataEventUpdates>> eventUpdates{};
  shared_ptr<long> id{};
  shared_ptr<vector<ListEventInProgressResponseBodyDataImpacts>> impacts{};
  shared_ptr<long> startTime{};
  shared_ptr<string> title{};

  ListEventInProgressResponseBodyData() {}

  explicit ListEventInProgressResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventUpdates) {
      vector<boost::any> temp1;
      for(auto item1:*eventUpdates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventUpdates"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (impacts) {
      vector<boost::any> temp1;
      for(auto item1:*impacts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Impacts"] = boost::any(temp1);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventUpdates") != m.end() && !m["EventUpdates"].empty()) {
      if (typeid(vector<boost::any>) == m["EventUpdates"].type()) {
        vector<ListEventInProgressResponseBodyDataEventUpdates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventUpdates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEventInProgressResponseBodyDataEventUpdates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventUpdates = make_shared<vector<ListEventInProgressResponseBodyDataEventUpdates>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Impacts") != m.end() && !m["Impacts"].empty()) {
      if (typeid(vector<boost::any>) == m["Impacts"].type()) {
        vector<ListEventInProgressResponseBodyDataImpacts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Impacts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEventInProgressResponseBodyDataImpacts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        impacts = make_shared<vector<ListEventInProgressResponseBodyDataImpacts>>(expect1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListEventInProgressResponseBodyData() = default;
};
class ListEventInProgressResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListEventInProgressResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListEventInProgressResponseBody() {}

  explicit ListEventInProgressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListEventInProgressResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEventInProgressResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEventInProgressResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListEventInProgressResponseBody() = default;
};
class ListEventInProgressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEventInProgressResponseBody> body{};

  ListEventInProgressResponse() {}

  explicit ListEventInProgressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEventInProgressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEventInProgressResponseBody>(model1);
      }
    }
  }


  virtual ~ListEventInProgressResponse() = default;
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
  ListEventInProgressResponse listEventInProgressWithOptions(shared_ptr<ListEventInProgressRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEventInProgressResponse listEventInProgress(shared_ptr<ListEventInProgressRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Status20200117

#endif
