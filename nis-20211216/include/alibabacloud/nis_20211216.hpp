// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_NIS20211216_H_
#define ALIBABACLOUD_NIS20211216_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Nis20211216 {
class GetNatTopNRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> ip{};
  shared_ptr<string> natGatewayId{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> regionId{};
  shared_ptr<long> topN{};

  GetNatTopNRequest() {}

  explicit GetNatTopNRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topN) {
      res["TopN"] = boost::any(*topN);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TopN") != m.end() && !m["TopN"].empty()) {
      topN = make_shared<long>(boost::any_cast<long>(m["TopN"]));
    }
  }


  virtual ~GetNatTopNRequest() = default;
};
class GetNatTopNResponseBodyNatGatewayTopN : public Darabonba::Model {
public:
  shared_ptr<double> activeSessionCount{};
  shared_ptr<double> inBps{};
  shared_ptr<double> inFlowPerMinute{};
  shared_ptr<double> inPps{};
  shared_ptr<string> ip{};
  shared_ptr<double> newSessionPerSecond{};
  shared_ptr<double> outBps{};
  shared_ptr<double> outFlowPerMinute{};
  shared_ptr<double> outPps{};

  GetNatTopNResponseBodyNatGatewayTopN() {}

  explicit GetNatTopNResponseBodyNatGatewayTopN(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeSessionCount) {
      res["ActiveSessionCount"] = boost::any(*activeSessionCount);
    }
    if (inBps) {
      res["InBps"] = boost::any(*inBps);
    }
    if (inFlowPerMinute) {
      res["InFlowPerMinute"] = boost::any(*inFlowPerMinute);
    }
    if (inPps) {
      res["InPps"] = boost::any(*inPps);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (newSessionPerSecond) {
      res["NewSessionPerSecond"] = boost::any(*newSessionPerSecond);
    }
    if (outBps) {
      res["OutBps"] = boost::any(*outBps);
    }
    if (outFlowPerMinute) {
      res["OutFlowPerMinute"] = boost::any(*outFlowPerMinute);
    }
    if (outPps) {
      res["OutPps"] = boost::any(*outPps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveSessionCount") != m.end() && !m["ActiveSessionCount"].empty()) {
      activeSessionCount = make_shared<double>(boost::any_cast<double>(m["ActiveSessionCount"]));
    }
    if (m.find("InBps") != m.end() && !m["InBps"].empty()) {
      inBps = make_shared<double>(boost::any_cast<double>(m["InBps"]));
    }
    if (m.find("InFlowPerMinute") != m.end() && !m["InFlowPerMinute"].empty()) {
      inFlowPerMinute = make_shared<double>(boost::any_cast<double>(m["InFlowPerMinute"]));
    }
    if (m.find("InPps") != m.end() && !m["InPps"].empty()) {
      inPps = make_shared<double>(boost::any_cast<double>(m["InPps"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("NewSessionPerSecond") != m.end() && !m["NewSessionPerSecond"].empty()) {
      newSessionPerSecond = make_shared<double>(boost::any_cast<double>(m["NewSessionPerSecond"]));
    }
    if (m.find("OutBps") != m.end() && !m["OutBps"].empty()) {
      outBps = make_shared<double>(boost::any_cast<double>(m["OutBps"]));
    }
    if (m.find("OutFlowPerMinute") != m.end() && !m["OutFlowPerMinute"].empty()) {
      outFlowPerMinute = make_shared<double>(boost::any_cast<double>(m["OutFlowPerMinute"]));
    }
    if (m.find("OutPps") != m.end() && !m["OutPps"].empty()) {
      outPps = make_shared<double>(boost::any_cast<double>(m["OutPps"]));
    }
  }


  virtual ~GetNatTopNResponseBodyNatGatewayTopN() = default;
};
class GetNatTopNResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isTopNOpen{};
  shared_ptr<vector<GetNatTopNResponseBodyNatGatewayTopN>> natGatewayTopN{};
  shared_ptr<string> requestId{};

  GetNatTopNResponseBody() {}

  explicit GetNatTopNResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTopNOpen) {
      res["IsTopNOpen"] = boost::any(*isTopNOpen);
    }
    if (natGatewayTopN) {
      vector<boost::any> temp1;
      for(auto item1:*natGatewayTopN){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NatGatewayTopN"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTopNOpen") != m.end() && !m["IsTopNOpen"].empty()) {
      isTopNOpen = make_shared<bool>(boost::any_cast<bool>(m["IsTopNOpen"]));
    }
    if (m.find("NatGatewayTopN") != m.end() && !m["NatGatewayTopN"].empty()) {
      if (typeid(vector<boost::any>) == m["NatGatewayTopN"].type()) {
        vector<GetNatTopNResponseBodyNatGatewayTopN> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NatGatewayTopN"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNatTopNResponseBodyNatGatewayTopN model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        natGatewayTopN = make_shared<vector<GetNatTopNResponseBodyNatGatewayTopN>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetNatTopNResponseBody() = default;
};
class GetNatTopNResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNatTopNResponseBody> body{};

  GetNatTopNResponse() {}

  explicit GetNatTopNResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNatTopNResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNatTopNResponseBody>(model1);
      }
    }
  }


  virtual ~GetNatTopNResponse() = default;
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
  GetNatTopNResponse getNatTopNWithOptions(shared_ptr<GetNatTopNRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNatTopNResponse getNatTopN(shared_ptr<GetNatTopNRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Nis20211216

#endif
