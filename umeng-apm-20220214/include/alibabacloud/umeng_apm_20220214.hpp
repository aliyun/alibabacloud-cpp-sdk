// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_UMENG-APM20220214_H_
#define ALIBABACLOUD_UMENG-APM20220214_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Umeng-apm20220214 {
class GetH5PageTrendRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> endDate{};
  shared_ptr<string> startDate{};
  shared_ptr<string> timeUnit{};

  GetH5PageTrendRequest() {}

  explicit GetH5PageTrendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["appVersion"] = boost::any(*appVersion);
    }
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    if (timeUnit) {
      res["timeUnit"] = boost::any(*timeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appVersion") != m.end() && !m["appVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["appVersion"]));
    }
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["endDate"]));
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["startDate"]));
    }
    if (m.find("timeUnit") != m.end() && !m["timeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["timeUnit"]));
    }
  }


  virtual ~GetH5PageTrendRequest() = default;
};
class GetH5PageTrendResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> analyzeDOM{};
  shared_ptr<double> appCache{};
  shared_ptr<double> contentTrans{};
  shared_ptr<double> dns{};
  shared_ptr<double> domReady{};
  shared_ptr<double> fcp{};
  shared_ptr<double> firstByte{};
  shared_ptr<double> fiveSecondRate{};
  shared_ptr<double> fp{};
  shared_ptr<double> loadEvent{};
  shared_ptr<double> loadFinish{};
  shared_ptr<double> loadResource{};
  shared_ptr<long> logCnt{};
  shared_ptr<double> oneSecondRate{};
  shared_ptr<double> redirect{};
  shared_ptr<double> ssl{};
  shared_ptr<double> tcp{};
  shared_ptr<string> timePoint{};
  shared_ptr<double> ttfb{};
  shared_ptr<double> tti{};
  shared_ptr<double> twoSecondRate{};
  shared_ptr<double> unload{};

  GetH5PageTrendResponseBodyData() {}

  explicit GetH5PageTrendResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analyzeDOM) {
      res["analyzeDOM"] = boost::any(*analyzeDOM);
    }
    if (appCache) {
      res["appCache"] = boost::any(*appCache);
    }
    if (contentTrans) {
      res["contentTrans"] = boost::any(*contentTrans);
    }
    if (dns) {
      res["dns"] = boost::any(*dns);
    }
    if (domReady) {
      res["domReady"] = boost::any(*domReady);
    }
    if (fcp) {
      res["fcp"] = boost::any(*fcp);
    }
    if (firstByte) {
      res["firstByte"] = boost::any(*firstByte);
    }
    if (fiveSecondRate) {
      res["fiveSecondRate"] = boost::any(*fiveSecondRate);
    }
    if (fp) {
      res["fp"] = boost::any(*fp);
    }
    if (loadEvent) {
      res["loadEvent"] = boost::any(*loadEvent);
    }
    if (loadFinish) {
      res["loadFinish"] = boost::any(*loadFinish);
    }
    if (loadResource) {
      res["loadResource"] = boost::any(*loadResource);
    }
    if (logCnt) {
      res["logCnt"] = boost::any(*logCnt);
    }
    if (oneSecondRate) {
      res["oneSecondRate"] = boost::any(*oneSecondRate);
    }
    if (redirect) {
      res["redirect"] = boost::any(*redirect);
    }
    if (ssl) {
      res["ssl"] = boost::any(*ssl);
    }
    if (tcp) {
      res["tcp"] = boost::any(*tcp);
    }
    if (timePoint) {
      res["timePoint"] = boost::any(*timePoint);
    }
    if (ttfb) {
      res["ttfb"] = boost::any(*ttfb);
    }
    if (tti) {
      res["tti"] = boost::any(*tti);
    }
    if (twoSecondRate) {
      res["twoSecondRate"] = boost::any(*twoSecondRate);
    }
    if (unload) {
      res["unload"] = boost::any(*unload);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analyzeDOM") != m.end() && !m["analyzeDOM"].empty()) {
      analyzeDOM = make_shared<double>(boost::any_cast<double>(m["analyzeDOM"]));
    }
    if (m.find("appCache") != m.end() && !m["appCache"].empty()) {
      appCache = make_shared<double>(boost::any_cast<double>(m["appCache"]));
    }
    if (m.find("contentTrans") != m.end() && !m["contentTrans"].empty()) {
      contentTrans = make_shared<double>(boost::any_cast<double>(m["contentTrans"]));
    }
    if (m.find("dns") != m.end() && !m["dns"].empty()) {
      dns = make_shared<double>(boost::any_cast<double>(m["dns"]));
    }
    if (m.find("domReady") != m.end() && !m["domReady"].empty()) {
      domReady = make_shared<double>(boost::any_cast<double>(m["domReady"]));
    }
    if (m.find("fcp") != m.end() && !m["fcp"].empty()) {
      fcp = make_shared<double>(boost::any_cast<double>(m["fcp"]));
    }
    if (m.find("firstByte") != m.end() && !m["firstByte"].empty()) {
      firstByte = make_shared<double>(boost::any_cast<double>(m["firstByte"]));
    }
    if (m.find("fiveSecondRate") != m.end() && !m["fiveSecondRate"].empty()) {
      fiveSecondRate = make_shared<double>(boost::any_cast<double>(m["fiveSecondRate"]));
    }
    if (m.find("fp") != m.end() && !m["fp"].empty()) {
      fp = make_shared<double>(boost::any_cast<double>(m["fp"]));
    }
    if (m.find("loadEvent") != m.end() && !m["loadEvent"].empty()) {
      loadEvent = make_shared<double>(boost::any_cast<double>(m["loadEvent"]));
    }
    if (m.find("loadFinish") != m.end() && !m["loadFinish"].empty()) {
      loadFinish = make_shared<double>(boost::any_cast<double>(m["loadFinish"]));
    }
    if (m.find("loadResource") != m.end() && !m["loadResource"].empty()) {
      loadResource = make_shared<double>(boost::any_cast<double>(m["loadResource"]));
    }
    if (m.find("logCnt") != m.end() && !m["logCnt"].empty()) {
      logCnt = make_shared<long>(boost::any_cast<long>(m["logCnt"]));
    }
    if (m.find("oneSecondRate") != m.end() && !m["oneSecondRate"].empty()) {
      oneSecondRate = make_shared<double>(boost::any_cast<double>(m["oneSecondRate"]));
    }
    if (m.find("redirect") != m.end() && !m["redirect"].empty()) {
      redirect = make_shared<double>(boost::any_cast<double>(m["redirect"]));
    }
    if (m.find("ssl") != m.end() && !m["ssl"].empty()) {
      ssl = make_shared<double>(boost::any_cast<double>(m["ssl"]));
    }
    if (m.find("tcp") != m.end() && !m["tcp"].empty()) {
      tcp = make_shared<double>(boost::any_cast<double>(m["tcp"]));
    }
    if (m.find("timePoint") != m.end() && !m["timePoint"].empty()) {
      timePoint = make_shared<string>(boost::any_cast<string>(m["timePoint"]));
    }
    if (m.find("ttfb") != m.end() && !m["ttfb"].empty()) {
      ttfb = make_shared<double>(boost::any_cast<double>(m["ttfb"]));
    }
    if (m.find("tti") != m.end() && !m["tti"].empty()) {
      tti = make_shared<double>(boost::any_cast<double>(m["tti"]));
    }
    if (m.find("twoSecondRate") != m.end() && !m["twoSecondRate"].empty()) {
      twoSecondRate = make_shared<double>(boost::any_cast<double>(m["twoSecondRate"]));
    }
    if (m.find("unload") != m.end() && !m["unload"].empty()) {
      unload = make_shared<double>(boost::any_cast<double>(m["unload"]));
    }
  }


  virtual ~GetH5PageTrendResponseBodyData() = default;
};
class GetH5PageTrendResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<GetH5PageTrendResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<bool> success{};

  GetH5PageTrendResponseBody() {}

  explicit GetH5PageTrendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetH5PageTrendResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetH5PageTrendResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetH5PageTrendResponseBodyData>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetH5PageTrendResponseBody() = default;
};
class GetH5PageTrendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetH5PageTrendResponseBody> body{};

  GetH5PageTrendResponse() {}

  explicit GetH5PageTrendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetH5PageTrendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetH5PageTrendResponseBody>(model1);
      }
    }
  }


  virtual ~GetH5PageTrendResponse() = default;
};
class GetLaunchTrendRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> endDate{};
  shared_ptr<string> startDate{};
  shared_ptr<string> timeUnit{};

  GetLaunchTrendRequest() {}

  explicit GetLaunchTrendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["appVersion"] = boost::any(*appVersion);
    }
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    if (timeUnit) {
      res["timeUnit"] = boost::any(*timeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appVersion") != m.end() && !m["appVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["appVersion"]));
    }
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["endDate"]));
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["startDate"]));
    }
    if (m.find("timeUnit") != m.end() && !m["timeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["timeUnit"]));
    }
  }


  virtual ~GetLaunchTrendRequest() = default;
};
class GetLaunchTrendResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> coldLaunchCount{};
  shared_ptr<double> coldLaunchDuration{};
  shared_ptr<long> firstLaunchCount{};
  shared_ptr<double> firstLaunchDuration{};
  shared_ptr<long> hotLaunchCount{};
  shared_ptr<double> hotLaunchDuration{};
  shared_ptr<string> timePoint{};

  GetLaunchTrendResponseBodyData() {}

  explicit GetLaunchTrendResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coldLaunchCount) {
      res["coldLaunchCount"] = boost::any(*coldLaunchCount);
    }
    if (coldLaunchDuration) {
      res["coldLaunchDuration"] = boost::any(*coldLaunchDuration);
    }
    if (firstLaunchCount) {
      res["firstLaunchCount"] = boost::any(*firstLaunchCount);
    }
    if (firstLaunchDuration) {
      res["firstLaunchDuration"] = boost::any(*firstLaunchDuration);
    }
    if (hotLaunchCount) {
      res["hotLaunchCount"] = boost::any(*hotLaunchCount);
    }
    if (hotLaunchDuration) {
      res["hotLaunchDuration"] = boost::any(*hotLaunchDuration);
    }
    if (timePoint) {
      res["timePoint"] = boost::any(*timePoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("coldLaunchCount") != m.end() && !m["coldLaunchCount"].empty()) {
      coldLaunchCount = make_shared<long>(boost::any_cast<long>(m["coldLaunchCount"]));
    }
    if (m.find("coldLaunchDuration") != m.end() && !m["coldLaunchDuration"].empty()) {
      coldLaunchDuration = make_shared<double>(boost::any_cast<double>(m["coldLaunchDuration"]));
    }
    if (m.find("firstLaunchCount") != m.end() && !m["firstLaunchCount"].empty()) {
      firstLaunchCount = make_shared<long>(boost::any_cast<long>(m["firstLaunchCount"]));
    }
    if (m.find("firstLaunchDuration") != m.end() && !m["firstLaunchDuration"].empty()) {
      firstLaunchDuration = make_shared<double>(boost::any_cast<double>(m["firstLaunchDuration"]));
    }
    if (m.find("hotLaunchCount") != m.end() && !m["hotLaunchCount"].empty()) {
      hotLaunchCount = make_shared<long>(boost::any_cast<long>(m["hotLaunchCount"]));
    }
    if (m.find("hotLaunchDuration") != m.end() && !m["hotLaunchDuration"].empty()) {
      hotLaunchDuration = make_shared<double>(boost::any_cast<double>(m["hotLaunchDuration"]));
    }
    if (m.find("timePoint") != m.end() && !m["timePoint"].empty()) {
      timePoint = make_shared<string>(boost::any_cast<string>(m["timePoint"]));
    }
  }


  virtual ~GetLaunchTrendResponseBodyData() = default;
};
class GetLaunchTrendResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<GetLaunchTrendResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<bool> success{};

  GetLaunchTrendResponseBody() {}

  explicit GetLaunchTrendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetLaunchTrendResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLaunchTrendResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetLaunchTrendResponseBodyData>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetLaunchTrendResponseBody() = default;
};
class GetLaunchTrendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLaunchTrendResponseBody> body{};

  GetLaunchTrendResponse() {}

  explicit GetLaunchTrendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLaunchTrendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLaunchTrendResponseBody>(model1);
      }
    }
  }


  virtual ~GetLaunchTrendResponse() = default;
};
class GetNativePageTrendRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> endDate{};
  shared_ptr<string> startDate{};
  shared_ptr<string> timeUnit{};

  GetNativePageTrendRequest() {}

  explicit GetNativePageTrendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["appVersion"] = boost::any(*appVersion);
    }
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    if (timeUnit) {
      res["timeUnit"] = boost::any(*timeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appVersion") != m.end() && !m["appVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["appVersion"]));
    }
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["endDate"]));
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["startDate"]));
    }
    if (m.find("timeUnit") != m.end() && !m["timeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["timeUnit"]));
    }
  }


  virtual ~GetNativePageTrendRequest() = default;
};
class GetNativePageTrendResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> avgLoadDuration{};
  shared_ptr<double> crashRate{};
  shared_ptr<long> loadCnt{};
  shared_ptr<double> slowLoadRate{};
  shared_ptr<string> timePoint{};

  GetNativePageTrendResponseBodyData() {}

  explicit GetNativePageTrendResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avgLoadDuration) {
      res["avgLoadDuration"] = boost::any(*avgLoadDuration);
    }
    if (crashRate) {
      res["crashRate"] = boost::any(*crashRate);
    }
    if (loadCnt) {
      res["loadCnt"] = boost::any(*loadCnt);
    }
    if (slowLoadRate) {
      res["slowLoadRate"] = boost::any(*slowLoadRate);
    }
    if (timePoint) {
      res["timePoint"] = boost::any(*timePoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("avgLoadDuration") != m.end() && !m["avgLoadDuration"].empty()) {
      avgLoadDuration = make_shared<double>(boost::any_cast<double>(m["avgLoadDuration"]));
    }
    if (m.find("crashRate") != m.end() && !m["crashRate"].empty()) {
      crashRate = make_shared<double>(boost::any_cast<double>(m["crashRate"]));
    }
    if (m.find("loadCnt") != m.end() && !m["loadCnt"].empty()) {
      loadCnt = make_shared<long>(boost::any_cast<long>(m["loadCnt"]));
    }
    if (m.find("slowLoadRate") != m.end() && !m["slowLoadRate"].empty()) {
      slowLoadRate = make_shared<double>(boost::any_cast<double>(m["slowLoadRate"]));
    }
    if (m.find("timePoint") != m.end() && !m["timePoint"].empty()) {
      timePoint = make_shared<string>(boost::any_cast<string>(m["timePoint"]));
    }
  }


  virtual ~GetNativePageTrendResponseBodyData() = default;
};
class GetNativePageTrendResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<GetNativePageTrendResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<bool> success{};

  GetNativePageTrendResponseBody() {}

  explicit GetNativePageTrendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetNativePageTrendResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNativePageTrendResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetNativePageTrendResponseBodyData>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetNativePageTrendResponseBody() = default;
};
class GetNativePageTrendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNativePageTrendResponseBody> body{};

  GetNativePageTrendResponse() {}

  explicit GetNativePageTrendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNativePageTrendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNativePageTrendResponseBody>(model1);
      }
    }
  }


  virtual ~GetNativePageTrendResponse() = default;
};
class GetNetworkTrendRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> endDate{};
  shared_ptr<string> startDate{};
  shared_ptr<string> timeUnit{};

  GetNetworkTrendRequest() {}

  explicit GetNetworkTrendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["appVersion"] = boost::any(*appVersion);
    }
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    if (timeUnit) {
      res["timeUnit"] = boost::any(*timeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appVersion") != m.end() && !m["appVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["appVersion"]));
    }
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["endDate"]));
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["startDate"]));
    }
    if (m.find("timeUnit") != m.end() && !m["timeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["timeUnit"]));
    }
  }


  virtual ~GetNetworkTrendRequest() = default;
};
class GetNetworkTrendResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> avgCost{};
  shared_ptr<double> avgResponseTime{};
  shared_ptr<double> avgTransformBytes{};
  shared_ptr<double> requestPerMinute{};
  shared_ptr<string> timePoint{};

  GetNetworkTrendResponseBodyData() {}

  explicit GetNetworkTrendResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avgCost) {
      res["avgCost"] = boost::any(*avgCost);
    }
    if (avgResponseTime) {
      res["avgResponseTime"] = boost::any(*avgResponseTime);
    }
    if (avgTransformBytes) {
      res["avgTransformBytes"] = boost::any(*avgTransformBytes);
    }
    if (requestPerMinute) {
      res["requestPerMinute"] = boost::any(*requestPerMinute);
    }
    if (timePoint) {
      res["timePoint"] = boost::any(*timePoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("avgCost") != m.end() && !m["avgCost"].empty()) {
      avgCost = make_shared<double>(boost::any_cast<double>(m["avgCost"]));
    }
    if (m.find("avgResponseTime") != m.end() && !m["avgResponseTime"].empty()) {
      avgResponseTime = make_shared<double>(boost::any_cast<double>(m["avgResponseTime"]));
    }
    if (m.find("avgTransformBytes") != m.end() && !m["avgTransformBytes"].empty()) {
      avgTransformBytes = make_shared<double>(boost::any_cast<double>(m["avgTransformBytes"]));
    }
    if (m.find("requestPerMinute") != m.end() && !m["requestPerMinute"].empty()) {
      requestPerMinute = make_shared<double>(boost::any_cast<double>(m["requestPerMinute"]));
    }
    if (m.find("timePoint") != m.end() && !m["timePoint"].empty()) {
      timePoint = make_shared<string>(boost::any_cast<string>(m["timePoint"]));
    }
  }


  virtual ~GetNetworkTrendResponseBodyData() = default;
};
class GetNetworkTrendResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<GetNetworkTrendResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<bool> success{};

  GetNetworkTrendResponseBody() {}

  explicit GetNetworkTrendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetNetworkTrendResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNetworkTrendResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetNetworkTrendResponseBodyData>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetNetworkTrendResponseBody() = default;
};
class GetNetworkTrendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNetworkTrendResponseBody> body{};

  GetNetworkTrendResponse() {}

  explicit GetNetworkTrendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNetworkTrendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNetworkTrendResponseBody>(model1);
      }
    }
  }


  virtual ~GetNetworkTrendResponse() = default;
};
class GetStatTrendRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> endDate{};
  shared_ptr<string> startDate{};
  shared_ptr<long> type{};

  GetStatTrendRequest() {}

  explicit GetStatTrendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["appVersion"] = boost::any(*appVersion);
    }
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appVersion") != m.end() && !m["appVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["appVersion"]));
    }
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["endDate"]));
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["startDate"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~GetStatTrendRequest() = default;
};
class GetStatTrendResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> affectedUserCount{};
  shared_ptr<long> affectedUserRate{};
  shared_ptr<long> errorCount{};
  shared_ptr<long> errorRate{};
  shared_ptr<string> timePoint{};

  GetStatTrendResponseBodyData() {}

  explicit GetStatTrendResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (affectedUserCount) {
      res["affectedUserCount"] = boost::any(*affectedUserCount);
    }
    if (affectedUserRate) {
      res["affectedUserRate"] = boost::any(*affectedUserRate);
    }
    if (errorCount) {
      res["errorCount"] = boost::any(*errorCount);
    }
    if (errorRate) {
      res["errorRate"] = boost::any(*errorRate);
    }
    if (timePoint) {
      res["timePoint"] = boost::any(*timePoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("affectedUserCount") != m.end() && !m["affectedUserCount"].empty()) {
      affectedUserCount = make_shared<long>(boost::any_cast<long>(m["affectedUserCount"]));
    }
    if (m.find("affectedUserRate") != m.end() && !m["affectedUserRate"].empty()) {
      affectedUserRate = make_shared<long>(boost::any_cast<long>(m["affectedUserRate"]));
    }
    if (m.find("errorCount") != m.end() && !m["errorCount"].empty()) {
      errorCount = make_shared<long>(boost::any_cast<long>(m["errorCount"]));
    }
    if (m.find("errorRate") != m.end() && !m["errorRate"].empty()) {
      errorRate = make_shared<long>(boost::any_cast<long>(m["errorRate"]));
    }
    if (m.find("timePoint") != m.end() && !m["timePoint"].empty()) {
      timePoint = make_shared<string>(boost::any_cast<string>(m["timePoint"]));
    }
  }


  virtual ~GetStatTrendResponseBodyData() = default;
};
class GetStatTrendResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<GetStatTrendResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<bool> success{};

  GetStatTrendResponseBody() {}

  explicit GetStatTrendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetStatTrendResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStatTrendResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetStatTrendResponseBodyData>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetStatTrendResponseBody() = default;
};
class GetStatTrendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStatTrendResponseBody> body{};

  GetStatTrendResponse() {}

  explicit GetStatTrendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStatTrendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStatTrendResponseBody>(model1);
      }
    }
  }


  virtual ~GetStatTrendResponse() = default;
};
class GetSymUploadParamRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> flutterName{};

  GetSymUploadParamRequest() {}

  explicit GetSymUploadParamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["appVersion"] = boost::any(*appVersion);
    }
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (flutterName) {
      res["flutterName"] = boost::any(*flutterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appVersion") != m.end() && !m["appVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["appVersion"]));
    }
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("flutterName") != m.end() && !m["flutterName"].empty()) {
      flutterName = make_shared<string>(boost::any_cast<string>(m["flutterName"]));
    }
  }


  virtual ~GetSymUploadParamRequest() = default;
};
class GetSymUploadParamResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> callback{};
  shared_ptr<string> key{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};
  shared_ptr<string> uploadAddress{};

  GetSymUploadParamResponseBodyData() {}

  explicit GetSymUploadParamResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["accessKeyId"] = boost::any(*accessKeyId);
    }
    if (callback) {
      res["callback"] = boost::any(*callback);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (policy) {
      res["policy"] = boost::any(*policy);
    }
    if (signature) {
      res["signature"] = boost::any(*signature);
    }
    if (uploadAddress) {
      res["uploadAddress"] = boost::any(*uploadAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKeyId") != m.end() && !m["accessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["accessKeyId"]));
    }
    if (m.find("callback") != m.end() && !m["callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["callback"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("policy") != m.end() && !m["policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["policy"]));
    }
    if (m.find("signature") != m.end() && !m["signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["signature"]));
    }
    if (m.find("uploadAddress") != m.end() && !m["uploadAddress"].empty()) {
      uploadAddress = make_shared<string>(boost::any_cast<string>(m["uploadAddress"]));
    }
  }


  virtual ~GetSymUploadParamResponseBodyData() = default;
};
class GetSymUploadParamResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetSymUploadParamResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  GetSymUploadParamResponseBody() {}

  explicit GetSymUploadParamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetSymUploadParamResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetSymUploadParamResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~GetSymUploadParamResponseBody() = default;
};
class GetSymUploadParamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSymUploadParamResponseBody> body{};

  GetSymUploadParamResponse() {}

  explicit GetSymUploadParamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSymUploadParamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSymUploadParamResponseBody>(model1);
      }
    }
  }


  virtual ~GetSymUploadParamResponse() = default;
};
class GetTodayStatTrendRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<long> type{};

  GetTodayStatTrendRequest() {}

  explicit GetTodayStatTrendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["appVersion"] = boost::any(*appVersion);
    }
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appVersion") != m.end() && !m["appVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["appVersion"]));
    }
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~GetTodayStatTrendRequest() = default;
};
class GetTodayStatTrendResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> affectedUserCount{};
  shared_ptr<long> affectedUserRate{};
  shared_ptr<long> errorCount{};
  shared_ptr<long> errorRate{};
  shared_ptr<string> timePoint{};

  GetTodayStatTrendResponseBodyData() {}

  explicit GetTodayStatTrendResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (affectedUserCount) {
      res["affectedUserCount"] = boost::any(*affectedUserCount);
    }
    if (affectedUserRate) {
      res["affectedUserRate"] = boost::any(*affectedUserRate);
    }
    if (errorCount) {
      res["errorCount"] = boost::any(*errorCount);
    }
    if (errorRate) {
      res["errorRate"] = boost::any(*errorRate);
    }
    if (timePoint) {
      res["timePoint"] = boost::any(*timePoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("affectedUserCount") != m.end() && !m["affectedUserCount"].empty()) {
      affectedUserCount = make_shared<long>(boost::any_cast<long>(m["affectedUserCount"]));
    }
    if (m.find("affectedUserRate") != m.end() && !m["affectedUserRate"].empty()) {
      affectedUserRate = make_shared<long>(boost::any_cast<long>(m["affectedUserRate"]));
    }
    if (m.find("errorCount") != m.end() && !m["errorCount"].empty()) {
      errorCount = make_shared<long>(boost::any_cast<long>(m["errorCount"]));
    }
    if (m.find("errorRate") != m.end() && !m["errorRate"].empty()) {
      errorRate = make_shared<long>(boost::any_cast<long>(m["errorRate"]));
    }
    if (m.find("timePoint") != m.end() && !m["timePoint"].empty()) {
      timePoint = make_shared<string>(boost::any_cast<string>(m["timePoint"]));
    }
  }


  virtual ~GetTodayStatTrendResponseBodyData() = default;
};
class GetTodayStatTrendResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<GetTodayStatTrendResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<bool> success{};

  GetTodayStatTrendResponseBody() {}

  explicit GetTodayStatTrendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetTodayStatTrendResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTodayStatTrendResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetTodayStatTrendResponseBodyData>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetTodayStatTrendResponseBody() = default;
};
class GetTodayStatTrendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTodayStatTrendResponseBody> body{};

  GetTodayStatTrendResponse() {}

  explicit GetTodayStatTrendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTodayStatTrendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTodayStatTrendResponseBody>(model1);
      }
    }
  }


  virtual ~GetTodayStatTrendResponse() = default;
};
class UpdateAlertPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<long> planId{};
  shared_ptr<string> versions{};

  UpdateAlertPlanRequest() {}

  explicit UpdateAlertPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    if (planId) {
      res["planId"] = boost::any(*planId);
    }
    if (versions) {
      res["versions"] = boost::any(*versions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
    if (m.find("planId") != m.end() && !m["planId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["planId"]));
    }
    if (m.find("versions") != m.end() && !m["versions"].empty()) {
      versions = make_shared<string>(boost::any_cast<string>(m["versions"]));
    }
  }


  virtual ~UpdateAlertPlanRequest() = default;
};
class UpdateAlertPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> msg{};
  shared_ptr<bool> success{};

  UpdateAlertPlanResponseBody() {}

  explicit UpdateAlertPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateAlertPlanResponseBody() = default;
};
class UpdateAlertPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAlertPlanResponseBody> body{};

  UpdateAlertPlanResponse() {}

  explicit UpdateAlertPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAlertPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAlertPlanResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAlertPlanResponse() = default;
};
class UploadSymbolFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> flutterName{};
  shared_ptr<string> ossUrl{};

  UploadSymbolFileRequest() {}

  explicit UploadSymbolFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["appVersion"] = boost::any(*appVersion);
    }
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (flutterName) {
      res["flutterName"] = boost::any(*flutterName);
    }
    if (ossUrl) {
      res["ossUrl"] = boost::any(*ossUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appVersion") != m.end() && !m["appVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["appVersion"]));
    }
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("flutterName") != m.end() && !m["flutterName"].empty()) {
      flutterName = make_shared<string>(boost::any_cast<string>(m["flutterName"]));
    }
    if (m.find("ossUrl") != m.end() && !m["ossUrl"].empty()) {
      ossUrl = make_shared<string>(boost::any_cast<string>(m["ossUrl"]));
    }
  }


  virtual ~UploadSymbolFileRequest() = default;
};
class UploadSymbolFileAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> flutterName{};
  shared_ptr<Darabonba::Stream> ossUrlObject{};

  UploadSymbolFileAdvanceRequest() {}

  explicit UploadSymbolFileAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["appVersion"] = boost::any(*appVersion);
    }
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (flutterName) {
      res["flutterName"] = boost::any(*flutterName);
    }
    if (ossUrlObject) {
      res["ossUrl"] = boost::any(*ossUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appVersion") != m.end() && !m["appVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["appVersion"]));
    }
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("flutterName") != m.end() && !m["flutterName"].empty()) {
      flutterName = make_shared<string>(boost::any_cast<string>(m["flutterName"]));
    }
    if (m.find("ossUrl") != m.end() && !m["ossUrl"].empty()) {
      ossUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ossUrl"]));
    }
  }


  virtual ~UploadSymbolFileAdvanceRequest() = default;
};
class UploadSymbolFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  UploadSymbolFileResponseBody() {}

  explicit UploadSymbolFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~UploadSymbolFileResponseBody() = default;
};
class UploadSymbolFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadSymbolFileResponseBody> body{};

  UploadSymbolFileResponse() {}

  explicit UploadSymbolFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadSymbolFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadSymbolFileResponseBody>(model1);
      }
    }
  }


  virtual ~UploadSymbolFileResponse() = default;
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
  GetH5PageTrendResponse getH5PageTrendWithOptions(shared_ptr<GetH5PageTrendRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetH5PageTrendResponse getH5PageTrend(shared_ptr<GetH5PageTrendRequest> request);
  GetLaunchTrendResponse getLaunchTrendWithOptions(shared_ptr<GetLaunchTrendRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLaunchTrendResponse getLaunchTrend(shared_ptr<GetLaunchTrendRequest> request);
  GetNativePageTrendResponse getNativePageTrendWithOptions(shared_ptr<GetNativePageTrendRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNativePageTrendResponse getNativePageTrend(shared_ptr<GetNativePageTrendRequest> request);
  GetNetworkTrendResponse getNetworkTrendWithOptions(shared_ptr<GetNetworkTrendRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNetworkTrendResponse getNetworkTrend(shared_ptr<GetNetworkTrendRequest> request);
  GetStatTrendResponse getStatTrendWithOptions(shared_ptr<GetStatTrendRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStatTrendResponse getStatTrend(shared_ptr<GetStatTrendRequest> request);
  GetSymUploadParamResponse getSymUploadParamWithOptions(shared_ptr<GetSymUploadParamRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSymUploadParamResponse getSymUploadParam(shared_ptr<GetSymUploadParamRequest> request);
  GetTodayStatTrendResponse getTodayStatTrendWithOptions(shared_ptr<GetTodayStatTrendRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTodayStatTrendResponse getTodayStatTrend(shared_ptr<GetTodayStatTrendRequest> request);
  UpdateAlertPlanResponse updateAlertPlanWithOptions(shared_ptr<UpdateAlertPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAlertPlanResponse updateAlertPlan(shared_ptr<UpdateAlertPlanRequest> request);
  UploadSymbolFileResponse uploadSymbolFileWithOptions(shared_ptr<UploadSymbolFileRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadSymbolFileResponse uploadSymbolFile(shared_ptr<UploadSymbolFileRequest> request);
  UploadSymbolFileResponse uploadSymbolFileAdvance(shared_ptr<UploadSymbolFileAdvanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Umeng-apm20220214

#endif
