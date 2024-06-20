// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MODELSERVICE20220614_H_
#define ALIBABACLOUD_MODELSERVICE20220614_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ModelService20220614 {
class GetMonthAmountRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneType{};

  GetMonthAmountRequest() {}

  explicit GetMonthAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneType) {
      res["SceneType"] = boost::any(*sceneType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneType") != m.end() && !m["SceneType"].empty()) {
      sceneType = make_shared<string>(boost::any_cast<string>(m["SceneType"]));
    }
  }


  virtual ~GetMonthAmountRequest() = default;
};
class GetMonthAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> backgroundAmount{};
  shared_ptr<long> postpayAmount{};
  shared_ptr<long> prepayAmount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalAmount{};

  GetMonthAmountResponseBody() {}

  explicit GetMonthAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backgroundAmount) {
      res["BackgroundAmount"] = boost::any(*backgroundAmount);
    }
    if (postpayAmount) {
      res["PostpayAmount"] = boost::any(*postpayAmount);
    }
    if (prepayAmount) {
      res["PrepayAmount"] = boost::any(*prepayAmount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalAmount) {
      res["TotalAmount"] = boost::any(*totalAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackgroundAmount") != m.end() && !m["BackgroundAmount"].empty()) {
      backgroundAmount = make_shared<long>(boost::any_cast<long>(m["BackgroundAmount"]));
    }
    if (m.find("PostpayAmount") != m.end() && !m["PostpayAmount"].empty()) {
      postpayAmount = make_shared<long>(boost::any_cast<long>(m["PostpayAmount"]));
    }
    if (m.find("PrepayAmount") != m.end() && !m["PrepayAmount"].empty()) {
      prepayAmount = make_shared<long>(boost::any_cast<long>(m["PrepayAmount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalAmount") != m.end() && !m["TotalAmount"].empty()) {
      totalAmount = make_shared<long>(boost::any_cast<long>(m["TotalAmount"]));
    }
  }


  virtual ~GetMonthAmountResponseBody() = default;
};
class GetMonthAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMonthAmountResponseBody> body{};

  GetMonthAmountResponse() {}

  explicit GetMonthAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMonthAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMonthAmountResponseBody>(model1);
      }
    }
  }


  virtual ~GetMonthAmountResponse() = default;
};
class GetUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneType{};

  GetUserRequest() {}

  explicit GetUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneType) {
      res["SceneType"] = boost::any(*sceneType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneType") != m.end() && !m["SceneType"].empty()) {
      sceneType = make_shared<string>(boost::any_cast<string>(m["SceneType"]));
    }
  }


  virtual ~GetUserRequest() = default;
};
class GetUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> code{};
  shared_ptr<string> host{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> token{};

  GetUserResponseBody() {}

  explicit GetUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetUserResponseBody() = default;
};
class GetUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserResponseBody> body{};

  GetUserResponse() {}

  explicit GetUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserResponse() = default;
};
class ListDayAmountRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> sceneType{};
  shared_ptr<string> startTime{};

  ListDayAmountRequest() {}

  explicit ListDayAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (sceneType) {
      res["SceneType"] = boost::any(*sceneType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("SceneType") != m.end() && !m["SceneType"].empty()) {
      sceneType = make_shared<string>(boost::any_cast<string>(m["SceneType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListDayAmountRequest() = default;
};
class ListDayAmountResponseBodyDayAmounts : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> date{};

  ListDayAmountResponseBodyDayAmounts() {}

  explicit ListDayAmountResponseBodyDayAmounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
  }


  virtual ~ListDayAmountResponseBodyDayAmounts() = default;
};
class ListDayAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDayAmountResponseBodyDayAmounts>> dayAmounts{};
  shared_ptr<string> requestId{};

  ListDayAmountResponseBody() {}

  explicit ListDayAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dayAmounts) {
      vector<boost::any> temp1;
      for(auto item1:*dayAmounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DayAmounts"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DayAmounts") != m.end() && !m["DayAmounts"].empty()) {
      if (typeid(vector<boost::any>) == m["DayAmounts"].type()) {
        vector<ListDayAmountResponseBodyDayAmounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DayAmounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDayAmountResponseBodyDayAmounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dayAmounts = make_shared<vector<ListDayAmountResponseBodyDayAmounts>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDayAmountResponseBody() = default;
};
class ListDayAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDayAmountResponseBody> body{};

  ListDayAmountResponse() {}

  explicit ListDayAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDayAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDayAmountResponseBody>(model1);
      }
    }
  }


  virtual ~ListDayAmountResponse() = default;
};
class ListRechargeBillsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sceneType{};

  ListRechargeBillsRequest() {}

  explicit ListRechargeBillsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sceneType) {
      res["SceneType"] = boost::any(*sceneType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SceneType") != m.end() && !m["SceneType"].empty()) {
      sceneType = make_shared<string>(boost::any_cast<string>(m["SceneType"]));
    }
  }


  virtual ~ListRechargeBillsRequest() = default;
};
class ListRechargeBillsResponseBodyInstanseInfos : public Darabonba::Model {
public:
  shared_ptr<long> currTimes{};
  shared_ptr<string> gmtEndTime{};
  shared_ptr<long> initTimes{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> source{};

  ListRechargeBillsResponseBodyInstanseInfos() {}

  explicit ListRechargeBillsResponseBodyInstanseInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currTimes) {
      res["CurrTimes"] = boost::any(*currTimes);
    }
    if (gmtEndTime) {
      res["GmtEndTime"] = boost::any(*gmtEndTime);
    }
    if (initTimes) {
      res["InitTimes"] = boost::any(*initTimes);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrTimes") != m.end() && !m["CurrTimes"].empty()) {
      currTimes = make_shared<long>(boost::any_cast<long>(m["CurrTimes"]));
    }
    if (m.find("GmtEndTime") != m.end() && !m["GmtEndTime"].empty()) {
      gmtEndTime = make_shared<string>(boost::any_cast<string>(m["GmtEndTime"]));
    }
    if (m.find("InitTimes") != m.end() && !m["InitTimes"].empty()) {
      initTimes = make_shared<long>(boost::any_cast<long>(m["InitTimes"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListRechargeBillsResponseBodyInstanseInfos() = default;
};
class ListRechargeBillsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRechargeBillsResponseBodyInstanseInfos>> instanseInfos{};
  shared_ptr<string> requestId{};
  shared_ptr<long> residueAmount{};
  shared_ptr<long> totalCount{};

  ListRechargeBillsResponseBody() {}

  explicit ListRechargeBillsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanseInfos) {
      vector<boost::any> temp1;
      for(auto item1:*instanseInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanseInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (residueAmount) {
      res["ResidueAmount"] = boost::any(*residueAmount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanseInfos") != m.end() && !m["InstanseInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanseInfos"].type()) {
        vector<ListRechargeBillsResponseBodyInstanseInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanseInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRechargeBillsResponseBodyInstanseInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanseInfos = make_shared<vector<ListRechargeBillsResponseBodyInstanseInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResidueAmount") != m.end() && !m["ResidueAmount"].empty()) {
      residueAmount = make_shared<long>(boost::any_cast<long>(m["ResidueAmount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListRechargeBillsResponseBody() = default;
};
class ListRechargeBillsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRechargeBillsResponseBody> body{};

  ListRechargeBillsResponse() {}

  explicit ListRechargeBillsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRechargeBillsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRechargeBillsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRechargeBillsResponse() = default;
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
  GetMonthAmountResponse getMonthAmountWithOptions(shared_ptr<GetMonthAmountRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMonthAmountResponse getMonthAmount(shared_ptr<GetMonthAmountRequest> request);
  GetUserResponse getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<GetUserRequest> request);
  ListDayAmountResponse listDayAmountWithOptions(shared_ptr<ListDayAmountRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDayAmountResponse listDayAmount(shared_ptr<ListDayAmountRequest> request);
  ListRechargeBillsResponse listRechargeBillsWithOptions(shared_ptr<ListRechargeBillsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRechargeBillsResponse listRechargeBills(shared_ptr<ListRechargeBillsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ModelService20220614

#endif
