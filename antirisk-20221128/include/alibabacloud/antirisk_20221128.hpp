// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ANTIRISK20221128_H_
#define ALIBABACLOUD_ANTIRISK20221128_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Antirisk20221128 {
class GetRealTimeRiskInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> atoken{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> extra{};

  GetRealTimeRiskInfoRequest() {}

  explicit GetRealTimeRiskInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (atoken) {
      res["atoken"] = boost::any(*atoken);
    }
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    if (extra) {
      res["extra"] = boost::any(*extra);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("atoken") != m.end() && !m["atoken"].empty()) {
      atoken = make_shared<string>(boost::any_cast<string>(m["atoken"]));
    }
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
    if (m.find("extra") != m.end() && !m["extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["extra"]));
    }
  }


  virtual ~GetRealTimeRiskInfoRequest() = default;
};
class GetRealTimeRiskInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appChannel{};
  shared_ptr<string> fakeDevice{};
  shared_ptr<string> idfa{};
  shared_ptr<string> oaid{};
  shared_ptr<string> proxyDevice{};
  shared_ptr<string> riskLevel{};
  shared_ptr<string> riskScore{};
  shared_ptr<string> zid{};

  GetRealTimeRiskInfoResponseBodyData() {}

  explicit GetRealTimeRiskInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appChannel) {
      res["appChannel"] = boost::any(*appChannel);
    }
    if (fakeDevice) {
      res["fakeDevice"] = boost::any(*fakeDevice);
    }
    if (idfa) {
      res["idfa"] = boost::any(*idfa);
    }
    if (oaid) {
      res["oaid"] = boost::any(*oaid);
    }
    if (proxyDevice) {
      res["proxyDevice"] = boost::any(*proxyDevice);
    }
    if (riskLevel) {
      res["riskLevel"] = boost::any(*riskLevel);
    }
    if (riskScore) {
      res["riskScore"] = boost::any(*riskScore);
    }
    if (zid) {
      res["zid"] = boost::any(*zid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appChannel") != m.end() && !m["appChannel"].empty()) {
      appChannel = make_shared<string>(boost::any_cast<string>(m["appChannel"]));
    }
    if (m.find("fakeDevice") != m.end() && !m["fakeDevice"].empty()) {
      fakeDevice = make_shared<string>(boost::any_cast<string>(m["fakeDevice"]));
    }
    if (m.find("idfa") != m.end() && !m["idfa"].empty()) {
      idfa = make_shared<string>(boost::any_cast<string>(m["idfa"]));
    }
    if (m.find("oaid") != m.end() && !m["oaid"].empty()) {
      oaid = make_shared<string>(boost::any_cast<string>(m["oaid"]));
    }
    if (m.find("proxyDevice") != m.end() && !m["proxyDevice"].empty()) {
      proxyDevice = make_shared<string>(boost::any_cast<string>(m["proxyDevice"]));
    }
    if (m.find("riskLevel") != m.end() && !m["riskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["riskLevel"]));
    }
    if (m.find("riskScore") != m.end() && !m["riskScore"].empty()) {
      riskScore = make_shared<string>(boost::any_cast<string>(m["riskScore"]));
    }
    if (m.find("zid") != m.end() && !m["zid"].empty()) {
      zid = make_shared<string>(boost::any_cast<string>(m["zid"]));
    }
  }


  virtual ~GetRealTimeRiskInfoResponseBodyData() = default;
};
class GetRealTimeRiskInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<long> code{};
  shared_ptr<GetRealTimeRiskInfoResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRealTimeRiskInfoResponseBody() {}

  explicit GetRealTimeRiskInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetRealTimeRiskInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetRealTimeRiskInfoResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetRealTimeRiskInfoResponseBody() = default;
};
class GetRealTimeRiskInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRealTimeRiskInfoResponseBody> body{};

  GetRealTimeRiskInfoResponse() {}

  explicit GetRealTimeRiskInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRealTimeRiskInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRealTimeRiskInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetRealTimeRiskInfoResponse() = default;
};
class GetZidTagByAtokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> atoken{};
  shared_ptr<string> dataSourceId{};

  GetZidTagByAtokenRequest() {}

  explicit GetZidTagByAtokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (atoken) {
      res["atoken"] = boost::any(*atoken);
    }
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("atoken") != m.end() && !m["atoken"].empty()) {
      atoken = make_shared<string>(boost::any_cast<string>(m["atoken"]));
    }
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
  }


  virtual ~GetZidTagByAtokenRequest() = default;
};
class GetZidTagByAtokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aHook{};
  shared_ptr<string> debug{};
  shared_ptr<string> doubleOpen{};
  shared_ptr<string> javaHook{};
  shared_ptr<string> nativeHook{};
  shared_ptr<string> root{};
  shared_ptr<string> simulator{};
  shared_ptr<string> vpnProxy{};
  shared_ptr<string> wifiProxy{};
  shared_ptr<string> zid{};

  GetZidTagByAtokenResponseBodyData() {}

  explicit GetZidTagByAtokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aHook) {
      res["aHook"] = boost::any(*aHook);
    }
    if (debug) {
      res["debug"] = boost::any(*debug);
    }
    if (doubleOpen) {
      res["doubleOpen"] = boost::any(*doubleOpen);
    }
    if (javaHook) {
      res["javaHook"] = boost::any(*javaHook);
    }
    if (nativeHook) {
      res["nativeHook"] = boost::any(*nativeHook);
    }
    if (root) {
      res["root"] = boost::any(*root);
    }
    if (simulator) {
      res["simulator"] = boost::any(*simulator);
    }
    if (vpnProxy) {
      res["vpnProxy"] = boost::any(*vpnProxy);
    }
    if (wifiProxy) {
      res["wifiProxy"] = boost::any(*wifiProxy);
    }
    if (zid) {
      res["zid"] = boost::any(*zid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aHook") != m.end() && !m["aHook"].empty()) {
      aHook = make_shared<string>(boost::any_cast<string>(m["aHook"]));
    }
    if (m.find("debug") != m.end() && !m["debug"].empty()) {
      debug = make_shared<string>(boost::any_cast<string>(m["debug"]));
    }
    if (m.find("doubleOpen") != m.end() && !m["doubleOpen"].empty()) {
      doubleOpen = make_shared<string>(boost::any_cast<string>(m["doubleOpen"]));
    }
    if (m.find("javaHook") != m.end() && !m["javaHook"].empty()) {
      javaHook = make_shared<string>(boost::any_cast<string>(m["javaHook"]));
    }
    if (m.find("nativeHook") != m.end() && !m["nativeHook"].empty()) {
      nativeHook = make_shared<string>(boost::any_cast<string>(m["nativeHook"]));
    }
    if (m.find("root") != m.end() && !m["root"].empty()) {
      root = make_shared<string>(boost::any_cast<string>(m["root"]));
    }
    if (m.find("simulator") != m.end() && !m["simulator"].empty()) {
      simulator = make_shared<string>(boost::any_cast<string>(m["simulator"]));
    }
    if (m.find("vpnProxy") != m.end() && !m["vpnProxy"].empty()) {
      vpnProxy = make_shared<string>(boost::any_cast<string>(m["vpnProxy"]));
    }
    if (m.find("wifiProxy") != m.end() && !m["wifiProxy"].empty()) {
      wifiProxy = make_shared<string>(boost::any_cast<string>(m["wifiProxy"]));
    }
    if (m.find("zid") != m.end() && !m["zid"].empty()) {
      zid = make_shared<string>(boost::any_cast<string>(m["zid"]));
    }
  }


  virtual ~GetZidTagByAtokenResponseBodyData() = default;
};
class GetZidTagByAtokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<long> code{};
  shared_ptr<GetZidTagByAtokenResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetZidTagByAtokenResponseBody() {}

  explicit GetZidTagByAtokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetZidTagByAtokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetZidTagByAtokenResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetZidTagByAtokenResponseBody() = default;
};
class GetZidTagByAtokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetZidTagByAtokenResponseBody> body{};

  GetZidTagByAtokenResponse() {}

  explicit GetZidTagByAtokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetZidTagByAtokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetZidTagByAtokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetZidTagByAtokenResponse() = default;
};
class GetZidTagScoreByAtokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> atoken{};
  shared_ptr<string> dataSourceId{};

  GetZidTagScoreByAtokenRequest() {}

  explicit GetZidTagScoreByAtokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (atoken) {
      res["atoken"] = boost::any(*atoken);
    }
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("atoken") != m.end() && !m["atoken"].empty()) {
      atoken = make_shared<string>(boost::any_cast<string>(m["atoken"]));
    }
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
  }


  virtual ~GetZidTagScoreByAtokenRequest() = default;
};
class GetZidTagScoreByAtokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aHook{};
  shared_ptr<string> debug{};
  shared_ptr<string> doubleOpen{};
  shared_ptr<string> javaHook{};
  shared_ptr<string> nativeHook{};
  shared_ptr<string> riskLevel{};
  shared_ptr<string> riskScore{};
  shared_ptr<string> root{};
  shared_ptr<string> simulator{};
  shared_ptr<string> vpnProxy{};
  shared_ptr<string> wifiProxy{};
  shared_ptr<string> zid{};

  GetZidTagScoreByAtokenResponseBodyData() {}

  explicit GetZidTagScoreByAtokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aHook) {
      res["aHook"] = boost::any(*aHook);
    }
    if (debug) {
      res["debug"] = boost::any(*debug);
    }
    if (doubleOpen) {
      res["doubleOpen"] = boost::any(*doubleOpen);
    }
    if (javaHook) {
      res["javaHook"] = boost::any(*javaHook);
    }
    if (nativeHook) {
      res["nativeHook"] = boost::any(*nativeHook);
    }
    if (riskLevel) {
      res["riskLevel"] = boost::any(*riskLevel);
    }
    if (riskScore) {
      res["riskScore"] = boost::any(*riskScore);
    }
    if (root) {
      res["root"] = boost::any(*root);
    }
    if (simulator) {
      res["simulator"] = boost::any(*simulator);
    }
    if (vpnProxy) {
      res["vpnProxy"] = boost::any(*vpnProxy);
    }
    if (wifiProxy) {
      res["wifiProxy"] = boost::any(*wifiProxy);
    }
    if (zid) {
      res["zid"] = boost::any(*zid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aHook") != m.end() && !m["aHook"].empty()) {
      aHook = make_shared<string>(boost::any_cast<string>(m["aHook"]));
    }
    if (m.find("debug") != m.end() && !m["debug"].empty()) {
      debug = make_shared<string>(boost::any_cast<string>(m["debug"]));
    }
    if (m.find("doubleOpen") != m.end() && !m["doubleOpen"].empty()) {
      doubleOpen = make_shared<string>(boost::any_cast<string>(m["doubleOpen"]));
    }
    if (m.find("javaHook") != m.end() && !m["javaHook"].empty()) {
      javaHook = make_shared<string>(boost::any_cast<string>(m["javaHook"]));
    }
    if (m.find("nativeHook") != m.end() && !m["nativeHook"].empty()) {
      nativeHook = make_shared<string>(boost::any_cast<string>(m["nativeHook"]));
    }
    if (m.find("riskLevel") != m.end() && !m["riskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["riskLevel"]));
    }
    if (m.find("riskScore") != m.end() && !m["riskScore"].empty()) {
      riskScore = make_shared<string>(boost::any_cast<string>(m["riskScore"]));
    }
    if (m.find("root") != m.end() && !m["root"].empty()) {
      root = make_shared<string>(boost::any_cast<string>(m["root"]));
    }
    if (m.find("simulator") != m.end() && !m["simulator"].empty()) {
      simulator = make_shared<string>(boost::any_cast<string>(m["simulator"]));
    }
    if (m.find("vpnProxy") != m.end() && !m["vpnProxy"].empty()) {
      vpnProxy = make_shared<string>(boost::any_cast<string>(m["vpnProxy"]));
    }
    if (m.find("wifiProxy") != m.end() && !m["wifiProxy"].empty()) {
      wifiProxy = make_shared<string>(boost::any_cast<string>(m["wifiProxy"]));
    }
    if (m.find("zid") != m.end() && !m["zid"].empty()) {
      zid = make_shared<string>(boost::any_cast<string>(m["zid"]));
    }
  }


  virtual ~GetZidTagScoreByAtokenResponseBodyData() = default;
};
class GetZidTagScoreByAtokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> msg{};
  shared_ptr<GetZidTagScoreByAtokenResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetZidTagScoreByAtokenResponseBody() {}

  explicit GetZidTagScoreByAtokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetZidTagScoreByAtokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetZidTagScoreByAtokenResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetZidTagScoreByAtokenResponseBody() = default;
};
class GetZidTagScoreByAtokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetZidTagScoreByAtokenResponseBody> body{};

  GetZidTagScoreByAtokenResponse() {}

  explicit GetZidTagScoreByAtokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetZidTagScoreByAtokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetZidTagScoreByAtokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetZidTagScoreByAtokenResponse() = default;
};
class ListChannelRiskDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> end{};
  shared_ptr<string> isAllChannel{};
  shared_ptr<string> start{};

  ListChannelRiskDetailsRequest() {}

  explicit ListChannelRiskDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["channel"] = boost::any(*channel);
    }
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (isAllChannel) {
      res["isAllChannel"] = boost::any(*isAllChannel);
    }
    if (start) {
      res["start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channel") != m.end() && !m["channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["channel"]));
    }
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<string>(boost::any_cast<string>(m["end"]));
    }
    if (m.find("isAllChannel") != m.end() && !m["isAllChannel"].empty()) {
      isAllChannel = make_shared<string>(boost::any_cast<string>(m["isAllChannel"]));
    }
    if (m.find("start") != m.end() && !m["start"].empty()) {
      start = make_shared<string>(boost::any_cast<string>(m["start"]));
    }
  }


  virtual ~ListChannelRiskDetailsRequest() = default;
};
class ListChannelRiskDetailsResponseBodyDataRiskDetails : public Darabonba::Model {
public:
  shared_ptr<string> an{};
  shared_ptr<string> av{};
  shared_ptr<string> bn{};
  shared_ptr<string> c{};
  shared_ptr<string> date{};
  shared_ptr<string> fd{};
  shared_ptr<string> idfa{};
  shared_ptr<string> jb{};
  shared_ptr<string> oaid{};
  shared_ptr<string> py{};
  shared_ptr<string> rl{};
  shared_ptr<string> rs{};
  shared_ptr<string> zid{};

  ListChannelRiskDetailsResponseBodyDataRiskDetails() {}

  explicit ListChannelRiskDetailsResponseBodyDataRiskDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (an) {
      res["an"] = boost::any(*an);
    }
    if (av) {
      res["av"] = boost::any(*av);
    }
    if (bn) {
      res["bn"] = boost::any(*bn);
    }
    if (c) {
      res["c"] = boost::any(*c);
    }
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (fd) {
      res["fd"] = boost::any(*fd);
    }
    if (idfa) {
      res["idfa"] = boost::any(*idfa);
    }
    if (jb) {
      res["jb"] = boost::any(*jb);
    }
    if (oaid) {
      res["oaid"] = boost::any(*oaid);
    }
    if (py) {
      res["py"] = boost::any(*py);
    }
    if (rl) {
      res["rl"] = boost::any(*rl);
    }
    if (rs) {
      res["rs"] = boost::any(*rs);
    }
    if (zid) {
      res["zid"] = boost::any(*zid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("an") != m.end() && !m["an"].empty()) {
      an = make_shared<string>(boost::any_cast<string>(m["an"]));
    }
    if (m.find("av") != m.end() && !m["av"].empty()) {
      av = make_shared<string>(boost::any_cast<string>(m["av"]));
    }
    if (m.find("bn") != m.end() && !m["bn"].empty()) {
      bn = make_shared<string>(boost::any_cast<string>(m["bn"]));
    }
    if (m.find("c") != m.end() && !m["c"].empty()) {
      c = make_shared<string>(boost::any_cast<string>(m["c"]));
    }
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("fd") != m.end() && !m["fd"].empty()) {
      fd = make_shared<string>(boost::any_cast<string>(m["fd"]));
    }
    if (m.find("idfa") != m.end() && !m["idfa"].empty()) {
      idfa = make_shared<string>(boost::any_cast<string>(m["idfa"]));
    }
    if (m.find("jb") != m.end() && !m["jb"].empty()) {
      jb = make_shared<string>(boost::any_cast<string>(m["jb"]));
    }
    if (m.find("oaid") != m.end() && !m["oaid"].empty()) {
      oaid = make_shared<string>(boost::any_cast<string>(m["oaid"]));
    }
    if (m.find("py") != m.end() && !m["py"].empty()) {
      py = make_shared<string>(boost::any_cast<string>(m["py"]));
    }
    if (m.find("rl") != m.end() && !m["rl"].empty()) {
      rl = make_shared<string>(boost::any_cast<string>(m["rl"]));
    }
    if (m.find("rs") != m.end() && !m["rs"].empty()) {
      rs = make_shared<string>(boost::any_cast<string>(m["rs"]));
    }
    if (m.find("zid") != m.end() && !m["zid"].empty()) {
      zid = make_shared<string>(boost::any_cast<string>(m["zid"]));
    }
  }


  virtual ~ListChannelRiskDetailsResponseBodyDataRiskDetails() = default;
};
class ListChannelRiskDetailsResponseBodyDataRiskSumary : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<string> riskZidEmuDistinctNew{};

  ListChannelRiskDetailsResponseBodyDataRiskSumary() {}

  explicit ListChannelRiskDetailsResponseBodyDataRiskSumary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (riskZidEmuDistinctNew) {
      res["riskZidEmuDistinctNew"] = boost::any(*riskZidEmuDistinctNew);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("riskZidEmuDistinctNew") != m.end() && !m["riskZidEmuDistinctNew"].empty()) {
      riskZidEmuDistinctNew = make_shared<string>(boost::any_cast<string>(m["riskZidEmuDistinctNew"]));
    }
  }


  virtual ~ListChannelRiskDetailsResponseBodyDataRiskSumary() = default;
};
class ListChannelRiskDetailsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListChannelRiskDetailsResponseBodyDataRiskDetails>> riskDetails{};
  shared_ptr<vector<ListChannelRiskDetailsResponseBodyDataRiskSumary>> riskSumary{};

  ListChannelRiskDetailsResponseBodyData() {}

  explicit ListChannelRiskDetailsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskDetails) {
      vector<boost::any> temp1;
      for(auto item1:*riskDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["riskDetails"] = boost::any(temp1);
    }
    if (riskSumary) {
      vector<boost::any> temp1;
      for(auto item1:*riskSumary){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["riskSumary"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("riskDetails") != m.end() && !m["riskDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["riskDetails"].type()) {
        vector<ListChannelRiskDetailsResponseBodyDataRiskDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["riskDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChannelRiskDetailsResponseBodyDataRiskDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        riskDetails = make_shared<vector<ListChannelRiskDetailsResponseBodyDataRiskDetails>>(expect1);
      }
    }
    if (m.find("riskSumary") != m.end() && !m["riskSumary"].empty()) {
      if (typeid(vector<boost::any>) == m["riskSumary"].type()) {
        vector<ListChannelRiskDetailsResponseBodyDataRiskSumary> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["riskSumary"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChannelRiskDetailsResponseBodyDataRiskSumary model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        riskSumary = make_shared<vector<ListChannelRiskDetailsResponseBodyDataRiskSumary>>(expect1);
      }
    }
  }


  virtual ~ListChannelRiskDetailsResponseBodyData() = default;
};
class ListChannelRiskDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<long> code{};
  shared_ptr<ListChannelRiskDetailsResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListChannelRiskDetailsResponseBody() {}

  explicit ListChannelRiskDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListChannelRiskDetailsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListChannelRiskDetailsResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListChannelRiskDetailsResponseBody() = default;
};
class ListChannelRiskDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChannelRiskDetailsResponseBody> body{};

  ListChannelRiskDetailsResponse() {}

  explicit ListChannelRiskDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListChannelRiskDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChannelRiskDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListChannelRiskDetailsResponse() = default;
};
class ListUninstallDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> endDs{};
  shared_ptr<string> startDs{};

  ListUninstallDetailRequest() {}

  explicit ListUninstallDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    if (endDs) {
      res["endDs"] = boost::any(*endDs);
    }
    if (startDs) {
      res["startDs"] = boost::any(*startDs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
    if (m.find("endDs") != m.end() && !m["endDs"].empty()) {
      endDs = make_shared<string>(boost::any_cast<string>(m["endDs"]));
    }
    if (m.find("startDs") != m.end() && !m["startDs"].empty()) {
      startDs = make_shared<string>(boost::any_cast<string>(m["startDs"]));
    }
  }


  virtual ~ListUninstallDetailRequest() = default;
};
class ListUninstallDetailResponseBodyDataDetails : public Darabonba::Model {
public:
  shared_ptr<string> activeDatetime{};
  shared_ptr<string> city{};
  shared_ptr<string> deviceBrand{};
  shared_ptr<string> deviceModel{};
  shared_ptr<string> firstActiveDatetime{};
  shared_ptr<string> idfa{};
  shared_ptr<string> imei{};
  shared_ptr<string> installAppVersion{};
  shared_ptr<string> installChannel{};
  shared_ptr<string> oaid{};
  shared_ptr<string> osVersion{};
  shared_ptr<string> puid{};
  shared_ptr<string> umid{};
  shared_ptr<long> uninstallCount{};
  shared_ptr<string> uninstallDatetime{};
  shared_ptr<string> zid{};

  ListUninstallDetailResponseBodyDataDetails() {}

  explicit ListUninstallDetailResponseBodyDataDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeDatetime) {
      res["activeDatetime"] = boost::any(*activeDatetime);
    }
    if (city) {
      res["city"] = boost::any(*city);
    }
    if (deviceBrand) {
      res["deviceBrand"] = boost::any(*deviceBrand);
    }
    if (deviceModel) {
      res["deviceModel"] = boost::any(*deviceModel);
    }
    if (firstActiveDatetime) {
      res["firstActiveDatetime"] = boost::any(*firstActiveDatetime);
    }
    if (idfa) {
      res["idfa"] = boost::any(*idfa);
    }
    if (imei) {
      res["imei"] = boost::any(*imei);
    }
    if (installAppVersion) {
      res["installAppVersion"] = boost::any(*installAppVersion);
    }
    if (installChannel) {
      res["installChannel"] = boost::any(*installChannel);
    }
    if (oaid) {
      res["oaid"] = boost::any(*oaid);
    }
    if (osVersion) {
      res["osVersion"] = boost::any(*osVersion);
    }
    if (puid) {
      res["puid"] = boost::any(*puid);
    }
    if (umid) {
      res["umid"] = boost::any(*umid);
    }
    if (uninstallCount) {
      res["uninstallCount"] = boost::any(*uninstallCount);
    }
    if (uninstallDatetime) {
      res["uninstallDatetime"] = boost::any(*uninstallDatetime);
    }
    if (zid) {
      res["zid"] = boost::any(*zid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("activeDatetime") != m.end() && !m["activeDatetime"].empty()) {
      activeDatetime = make_shared<string>(boost::any_cast<string>(m["activeDatetime"]));
    }
    if (m.find("city") != m.end() && !m["city"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["city"]));
    }
    if (m.find("deviceBrand") != m.end() && !m["deviceBrand"].empty()) {
      deviceBrand = make_shared<string>(boost::any_cast<string>(m["deviceBrand"]));
    }
    if (m.find("deviceModel") != m.end() && !m["deviceModel"].empty()) {
      deviceModel = make_shared<string>(boost::any_cast<string>(m["deviceModel"]));
    }
    if (m.find("firstActiveDatetime") != m.end() && !m["firstActiveDatetime"].empty()) {
      firstActiveDatetime = make_shared<string>(boost::any_cast<string>(m["firstActiveDatetime"]));
    }
    if (m.find("idfa") != m.end() && !m["idfa"].empty()) {
      idfa = make_shared<string>(boost::any_cast<string>(m["idfa"]));
    }
    if (m.find("imei") != m.end() && !m["imei"].empty()) {
      imei = make_shared<string>(boost::any_cast<string>(m["imei"]));
    }
    if (m.find("installAppVersion") != m.end() && !m["installAppVersion"].empty()) {
      installAppVersion = make_shared<string>(boost::any_cast<string>(m["installAppVersion"]));
    }
    if (m.find("installChannel") != m.end() && !m["installChannel"].empty()) {
      installChannel = make_shared<string>(boost::any_cast<string>(m["installChannel"]));
    }
    if (m.find("oaid") != m.end() && !m["oaid"].empty()) {
      oaid = make_shared<string>(boost::any_cast<string>(m["oaid"]));
    }
    if (m.find("osVersion") != m.end() && !m["osVersion"].empty()) {
      osVersion = make_shared<string>(boost::any_cast<string>(m["osVersion"]));
    }
    if (m.find("puid") != m.end() && !m["puid"].empty()) {
      puid = make_shared<string>(boost::any_cast<string>(m["puid"]));
    }
    if (m.find("umid") != m.end() && !m["umid"].empty()) {
      umid = make_shared<string>(boost::any_cast<string>(m["umid"]));
    }
    if (m.find("uninstallCount") != m.end() && !m["uninstallCount"].empty()) {
      uninstallCount = make_shared<long>(boost::any_cast<long>(m["uninstallCount"]));
    }
    if (m.find("uninstallDatetime") != m.end() && !m["uninstallDatetime"].empty()) {
      uninstallDatetime = make_shared<string>(boost::any_cast<string>(m["uninstallDatetime"]));
    }
    if (m.find("zid") != m.end() && !m["zid"].empty()) {
      zid = make_shared<string>(boost::any_cast<string>(m["zid"]));
    }
  }


  virtual ~ListUninstallDetailResponseBodyDataDetails() = default;
};
class ListUninstallDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListUninstallDetailResponseBodyDataDetails>> details{};

  ListUninstallDetailResponseBodyData() {}

  explicit ListUninstallDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (details) {
      vector<boost::any> temp1;
      for(auto item1:*details){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["details"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("details") != m.end() && !m["details"].empty()) {
      if (typeid(vector<boost::any>) == m["details"].type()) {
        vector<ListUninstallDetailResponseBodyDataDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUninstallDetailResponseBodyDataDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        details = make_shared<vector<ListUninstallDetailResponseBodyDataDetails>>(expect1);
      }
    }
  }


  virtual ~ListUninstallDetailResponseBodyData() = default;
};
class ListUninstallDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<bool> success{};
  shared_ptr<long> code{};
  shared_ptr<ListUninstallDetailResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListUninstallDetailResponseBody() {}

  explicit ListUninstallDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListUninstallDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListUninstallDetailResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListUninstallDetailResponseBody() = default;
};
class ListUninstallDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUninstallDetailResponseBody> body{};

  ListUninstallDetailResponse() {}

  explicit ListUninstallDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUninstallDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUninstallDetailResponseBody>(model1);
      }
    }
  }


  virtual ~ListUninstallDetailResponse() = default;
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
  GetRealTimeRiskInfoResponse getRealTimeRiskInfoWithOptions(shared_ptr<GetRealTimeRiskInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRealTimeRiskInfoResponse getRealTimeRiskInfo(shared_ptr<GetRealTimeRiskInfoRequest> request);
  GetZidTagByAtokenResponse getZidTagByAtokenWithOptions(shared_ptr<GetZidTagByAtokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetZidTagByAtokenResponse getZidTagByAtoken(shared_ptr<GetZidTagByAtokenRequest> request);
  GetZidTagScoreByAtokenResponse getZidTagScoreByAtokenWithOptions(shared_ptr<GetZidTagScoreByAtokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetZidTagScoreByAtokenResponse getZidTagScoreByAtoken(shared_ptr<GetZidTagScoreByAtokenRequest> request);
  ListChannelRiskDetailsResponse listChannelRiskDetailsWithOptions(shared_ptr<ListChannelRiskDetailsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChannelRiskDetailsResponse listChannelRiskDetails(shared_ptr<ListChannelRiskDetailsRequest> request);
  ListUninstallDetailResponse listUninstallDetailWithOptions(shared_ptr<ListUninstallDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUninstallDetailResponse listUninstallDetail(shared_ptr<ListUninstallDetailRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Antirisk20221128

#endif
