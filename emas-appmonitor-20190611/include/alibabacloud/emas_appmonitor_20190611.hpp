// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EMAS-APPMONITOR20190611_H_
#define ALIBABACLOUD_EMAS-APPMONITOR20190611_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Emas-appmonitor20190611 {
class EventFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> op{};
  shared_ptr<vector<EventFilter>> subFilters{};
  shared_ptr<vector<string>> values{};

  EventFilter() {}

  explicit EventFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (op) {
      res["Op"] = boost::any(*op);
    }
    if (subFilters) {
      vector<boost::any> temp1;
      for(auto item1:*subFilters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubFilters"] = boost::any(temp1);
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
    if (m.find("Op") != m.end() && !m["Op"].empty()) {
      op = make_shared<string>(boost::any_cast<string>(m["Op"]));
    }
    if (m.find("SubFilters") != m.end() && !m["SubFilters"].empty()) {
      if (typeid(vector<boost::any>) == m["SubFilters"].type()) {
        vector<EventFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubFilters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EventFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subFilters = make_shared<vector<EventFilter>>(expect1);
      }
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


  virtual ~EventFilter() = default;
};
class ConditionalRule : public Darabonba::Model {
public:
  shared_ptr<EventFilter> filter{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> operator_{};
  shared_ptr<double> sampleRate{};

  ConditionalRule() {}

  explicit ConditionalRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["Filter"] = filter ? boost::any(filter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(map<string, boost::any>) == m["Filter"].type()) {
        EventFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Filter"]));
        filter = make_shared<EventFilter>(model1);
      }
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<double>(boost::any_cast<double>(m["SampleRate"]));
    }
  }


  virtual ~ConditionalRule() = default;
};
class EventRule : public Darabonba::Model {
public:
  shared_ptr<vector<ConditionalRule>> conditional{};
  shared_ptr<bool> enable{};
  shared_ptr<string> eventId{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> operator_{};
  shared_ptr<double> sampleRate{};

  EventRule() {}

  explicit EventRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditional) {
      vector<boost::any> temp1;
      for(auto item1:*conditional){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Conditional"] = boost::any(temp1);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Conditional") != m.end() && !m["Conditional"].empty()) {
      if (typeid(vector<boost::any>) == m["Conditional"].type()) {
        vector<ConditionalRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Conditional"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConditionalRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditional = make_shared<vector<ConditionalRule>>(expect1);
      }
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<double>(boost::any_cast<double>(m["SampleRate"]));
    }
  }


  virtual ~EventRule() = default;
};
class Filter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<Filter>> subFilters{};
  shared_ptr<boost::any> values{};

  Filter() {}

  explicit Filter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (subFilters) {
      vector<boost::any> temp1;
      for(auto item1:*subFilters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubFilters"] = boost::any(temp1);
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
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("SubFilters") != m.end() && !m["SubFilters"].empty()) {
      if (typeid(vector<boost::any>) == m["SubFilters"].type()) {
        vector<Filter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubFilters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Filter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subFilters = make_shared<vector<Filter>>(expect1);
      }
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      values = make_shared<boost::any>(boost::any_cast<boost::any>(m["Values"]));
    }
  }


  virtual ~Filter() = default;
};
class FullSampleItem : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> operator_{};

  FullSampleItem() {}

  explicit FullSampleItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
  }


  virtual ~FullSampleItem() = default;
};
class SampleBase : public Darabonba::Model {
public:
  shared_ptr<vector<FullSampleItem>> fullSampleDeviceIds{};
  shared_ptr<vector<FullSampleItem>> fullSampleUsers{};
  shared_ptr<string> sampleMethod{};
  shared_ptr<double> sampleRate{};

  SampleBase() {}

  explicit SampleBase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fullSampleDeviceIds) {
      vector<boost::any> temp1;
      for(auto item1:*fullSampleDeviceIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FullSampleDeviceIds"] = boost::any(temp1);
    }
    if (fullSampleUsers) {
      vector<boost::any> temp1;
      for(auto item1:*fullSampleUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FullSampleUsers"] = boost::any(temp1);
    }
    if (sampleMethod) {
      res["SampleMethod"] = boost::any(*sampleMethod);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FullSampleDeviceIds") != m.end() && !m["FullSampleDeviceIds"].empty()) {
      if (typeid(vector<boost::any>) == m["FullSampleDeviceIds"].type()) {
        vector<FullSampleItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FullSampleDeviceIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FullSampleItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fullSampleDeviceIds = make_shared<vector<FullSampleItem>>(expect1);
      }
    }
    if (m.find("FullSampleUsers") != m.end() && !m["FullSampleUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["FullSampleUsers"].type()) {
        vector<FullSampleItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FullSampleUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FullSampleItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fullSampleUsers = make_shared<vector<FullSampleItem>>(expect1);
      }
    }
    if (m.find("SampleMethod") != m.end() && !m["SampleMethod"].empty()) {
      sampleMethod = make_shared<string>(boost::any_cast<string>(m["SampleMethod"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<double>(boost::any_cast<double>(m["SampleRate"]));
    }
  }


  virtual ~SampleBase() = default;
};
class GetErrorRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> bizModule{};
  shared_ptr<long> clientTime{};
  shared_ptr<string> did{};
  shared_ptr<bool> force{};
  shared_ptr<string> os{};
  shared_ptr<string> uuid{};

  GetErrorRequest() {}

  explicit GetErrorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (bizModule) {
      res["BizModule"] = boost::any(*bizModule);
    }
    if (clientTime) {
      res["ClientTime"] = boost::any(*clientTime);
    }
    if (did) {
      res["Did"] = boost::any(*did);
    }
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("BizModule") != m.end() && !m["BizModule"].empty()) {
      bizModule = make_shared<string>(boost::any_cast<string>(m["BizModule"]));
    }
    if (m.find("ClientTime") != m.end() && !m["ClientTime"].empty()) {
      clientTime = make_shared<long>(boost::any_cast<long>(m["ClientTime"]));
    }
    if (m.find("Did") != m.end() && !m["Did"].empty()) {
      did = make_shared<string>(boost::any_cast<string>(m["Did"]));
    }
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~GetErrorRequest() = default;
};
class GetErrorResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> access{};
  shared_ptr<string> accessSubType{};
  shared_ptr<string> additionalCallbackInfo{};
  shared_ptr<string> additionalCrossPlatformCrashInfo{};
  shared_ptr<string> additionalCustomInfo{};
  shared_ptr<string> androidVm{};
  shared_ptr<string> appId{};
  shared_ptr<long> appKey{};
  shared_ptr<string> appVersion{};
  shared_ptr<long> argHash{};
  shared_ptr<string> args{};
  shared_ptr<string> backtrace{};
  shared_ptr<string> banner{};
  shared_ptr<string> binaryUuids{};
  shared_ptr<string> brand{};
  shared_ptr<string> browserName{};
  shared_ptr<string> browserVersion{};
  shared_ptr<string> build{};
  shared_ptr<string> businessCountry{};
  shared_ptr<string> businessErrorExtData{};
  shared_ptr<string> businessLogType{};
  shared_ptr<string> carrier{};
  shared_ptr<string> channel{};
  shared_ptr<string> city{};
  shared_ptr<string> clientIp{};
  shared_ptr<long> clientTime{};
  shared_ptr<string> colNo{};
  shared_ptr<string> country{};
  shared_ptr<string> cpuModel{};
  shared_ptr<string> cruxModule{};
  shared_ptr<string> cruxStack{};
  shared_ptr<long> cruxStackHash{};
  shared_ptr<string> cruxStackTrace{};
  shared_ptr<long> cruxStackTraceHash{};
  shared_ptr<string> customExceptionType{};
  shared_ptr<string> customInfo{};
  shared_ptr<string> dataDirectory{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> deviceModel{};
  shared_ptr<string> did{};
  shared_ptr<string> digest{};
  shared_ptr<string> digestHash{};
  shared_ptr<string> domScore{};
  shared_ptr<string> downloadCacheDirectory{};
  shared_ptr<string> errorName{};
  shared_ptr<string> errorType{};
  shared_ptr<long> eventId{};
  shared_ptr<string> eventLog{};
  shared_ptr<string> exceptionArg1{};
  shared_ptr<string> exceptionArg2{};
  shared_ptr<string> exceptionArg3{};
  shared_ptr<string> exceptionCode{};
  shared_ptr<string> exceptionCodes{};
  shared_ptr<string> exceptionDetail{};
  shared_ptr<string> exceptionId{};
  shared_ptr<string> exceptionMsg{};
  shared_ptr<string> exceptionSubtype{};
  shared_ptr<string> exceptionType{};
  shared_ptr<string> exceptionVersion{};
  shared_ptr<string> exportStatus{};
  shared_ptr<string> externalStorageDirectory{};
  shared_ptr<string> featureScene{};
  shared_ptr<string> fileName{};
  shared_ptr<string> filePath{};
  shared_ptr<string> filename{};
  shared_ptr<string> flutterRoute{};
  shared_ptr<long> forceGround{};
  shared_ptr<long> foreGround{};
  shared_ptr<string> h5FullUrl{};
  shared_ptr<string> h5ShortUrl{};
  shared_ptr<long> hasOpenMultiProcessMode{};
  shared_ptr<long> hasSdCard{};
  shared_ptr<long> hasSgSecurityConfigKey{};
  shared_ptr<string> imei{};
  shared_ptr<string> imsi{};
  shared_ptr<long> inMainProcess{};
  shared_ptr<long> installSdCard{};
  shared_ptr<long> isBackTrace{};
  shared_ptr<long> isSpeedVersion{};
  shared_ptr<string> isp{};
  shared_ptr<string> jsBacktrace{};
  shared_ptr<string> language{};
  shared_ptr<string> launchedTime{};
  shared_ptr<string> lineNo{};
  shared_ptr<long> logHash{};
  shared_ptr<string> mainLog{};
  shared_ptr<string> memoryMap{};
  shared_ptr<string> moreInfo1{};
  shared_ptr<string> moreInfo2{};
  shared_ptr<string> moreInfo3{};
  shared_ptr<string> nativeAllThreadDump{};
  shared_ptr<string> nativeMaps{};
  shared_ptr<long> needReCluster{};
  shared_ptr<long> openedFileCount{};
  shared_ptr<string> operations{};
  shared_ptr<string> originData{};
  shared_ptr<string> originUri{};
  shared_ptr<string> os{};
  shared_ptr<string> osVersion{};
  shared_ptr<string> page{};
  shared_ptr<string> parentProcessName{};
  shared_ptr<long> pid{};
  shared_ptr<string> platform{};
  shared_ptr<string> processName{};
  shared_ptr<string> province{};
  shared_ptr<string> reason{};
  shared_ptr<string> reportContent{};
  shared_ptr<string> reportType{};
  shared_ptr<string> resolution{};
  shared_ptr<string> rootDirectory{};
  shared_ptr<string> runtimeExtData{};
  shared_ptr<string> sceneValue{};
  shared_ptr<string> sdkType{};
  shared_ptr<string> sdkVersion{};
  shared_ptr<string> seq{};
  shared_ptr<long> serverTime{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> simpleReportContent{};
  shared_ptr<string> soLibBuild{};
  shared_ptr<string> speedFlags{};
  shared_ptr<string> stack{};
  shared_ptr<string> status{};
  shared_ptr<string> summary{};
  shared_ptr<string> symbolicFileType{};
  shared_ptr<string> sysLog{};
  shared_ptr<string> threadName{};
  shared_ptr<string> threads{};
  shared_ptr<long> tid{};
  shared_ptr<string> track{};
  shared_ptr<string> triggeredTime{};
  shared_ptr<long> uploadTime{};
  shared_ptr<string> uri{};
  shared_ptr<string> user{};
  shared_ptr<string> userId{};
  shared_ptr<string> userNick{};
  shared_ptr<string> utdid{};
  shared_ptr<string> uuid{};
  shared_ptr<string> view{};
  shared_ptr<string> weexFullUrl{};
  shared_ptr<string> weexShortUrl{};
  shared_ptr<long> writeLimit{};

  GetErrorResponseBodyModel() {}

  explicit GetErrorResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (access) {
      res["Access"] = boost::any(*access);
    }
    if (accessSubType) {
      res["AccessSubType"] = boost::any(*accessSubType);
    }
    if (additionalCallbackInfo) {
      res["AdditionalCallbackInfo"] = boost::any(*additionalCallbackInfo);
    }
    if (additionalCrossPlatformCrashInfo) {
      res["AdditionalCrossPlatformCrashInfo"] = boost::any(*additionalCrossPlatformCrashInfo);
    }
    if (additionalCustomInfo) {
      res["AdditionalCustomInfo"] = boost::any(*additionalCustomInfo);
    }
    if (androidVm) {
      res["AndroidVm"] = boost::any(*androidVm);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (argHash) {
      res["ArgHash"] = boost::any(*argHash);
    }
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (backtrace) {
      res["Backtrace"] = boost::any(*backtrace);
    }
    if (banner) {
      res["Banner"] = boost::any(*banner);
    }
    if (binaryUuids) {
      res["BinaryUuids"] = boost::any(*binaryUuids);
    }
    if (brand) {
      res["Brand"] = boost::any(*brand);
    }
    if (browserName) {
      res["BrowserName"] = boost::any(*browserName);
    }
    if (browserVersion) {
      res["BrowserVersion"] = boost::any(*browserVersion);
    }
    if (build) {
      res["Build"] = boost::any(*build);
    }
    if (businessCountry) {
      res["BusinessCountry"] = boost::any(*businessCountry);
    }
    if (businessErrorExtData) {
      res["BusinessErrorExtData"] = boost::any(*businessErrorExtData);
    }
    if (businessLogType) {
      res["BusinessLogType"] = boost::any(*businessLogType);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (clientTime) {
      res["ClientTime"] = boost::any(*clientTime);
    }
    if (colNo) {
      res["ColNo"] = boost::any(*colNo);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (cpuModel) {
      res["CpuModel"] = boost::any(*cpuModel);
    }
    if (cruxModule) {
      res["CruxModule"] = boost::any(*cruxModule);
    }
    if (cruxStack) {
      res["CruxStack"] = boost::any(*cruxStack);
    }
    if (cruxStackHash) {
      res["CruxStackHash"] = boost::any(*cruxStackHash);
    }
    if (cruxStackTrace) {
      res["CruxStackTrace"] = boost::any(*cruxStackTrace);
    }
    if (cruxStackTraceHash) {
      res["CruxStackTraceHash"] = boost::any(*cruxStackTraceHash);
    }
    if (customExceptionType) {
      res["CustomExceptionType"] = boost::any(*customExceptionType);
    }
    if (customInfo) {
      res["CustomInfo"] = boost::any(*customInfo);
    }
    if (dataDirectory) {
      res["DataDirectory"] = boost::any(*dataDirectory);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (deviceModel) {
      res["DeviceModel"] = boost::any(*deviceModel);
    }
    if (did) {
      res["Did"] = boost::any(*did);
    }
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (digestHash) {
      res["DigestHash"] = boost::any(*digestHash);
    }
    if (domScore) {
      res["DomScore"] = boost::any(*domScore);
    }
    if (downloadCacheDirectory) {
      res["DownloadCacheDirectory"] = boost::any(*downloadCacheDirectory);
    }
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (errorType) {
      res["ErrorType"] = boost::any(*errorType);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (eventLog) {
      res["EventLog"] = boost::any(*eventLog);
    }
    if (exceptionArg1) {
      res["ExceptionArg1"] = boost::any(*exceptionArg1);
    }
    if (exceptionArg2) {
      res["ExceptionArg2"] = boost::any(*exceptionArg2);
    }
    if (exceptionArg3) {
      res["ExceptionArg3"] = boost::any(*exceptionArg3);
    }
    if (exceptionCode) {
      res["ExceptionCode"] = boost::any(*exceptionCode);
    }
    if (exceptionCodes) {
      res["ExceptionCodes"] = boost::any(*exceptionCodes);
    }
    if (exceptionDetail) {
      res["ExceptionDetail"] = boost::any(*exceptionDetail);
    }
    if (exceptionId) {
      res["ExceptionId"] = boost::any(*exceptionId);
    }
    if (exceptionMsg) {
      res["ExceptionMsg"] = boost::any(*exceptionMsg);
    }
    if (exceptionSubtype) {
      res["ExceptionSubtype"] = boost::any(*exceptionSubtype);
    }
    if (exceptionType) {
      res["ExceptionType"] = boost::any(*exceptionType);
    }
    if (exceptionVersion) {
      res["ExceptionVersion"] = boost::any(*exceptionVersion);
    }
    if (exportStatus) {
      res["ExportStatus"] = boost::any(*exportStatus);
    }
    if (externalStorageDirectory) {
      res["ExternalStorageDirectory"] = boost::any(*externalStorageDirectory);
    }
    if (featureScene) {
      res["FeatureScene"] = boost::any(*featureScene);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (filename) {
      res["Filename"] = boost::any(*filename);
    }
    if (flutterRoute) {
      res["FlutterRoute"] = boost::any(*flutterRoute);
    }
    if (forceGround) {
      res["ForceGround"] = boost::any(*forceGround);
    }
    if (foreGround) {
      res["ForeGround"] = boost::any(*foreGround);
    }
    if (h5FullUrl) {
      res["H5FullUrl"] = boost::any(*h5FullUrl);
    }
    if (h5ShortUrl) {
      res["H5ShortUrl"] = boost::any(*h5ShortUrl);
    }
    if (hasOpenMultiProcessMode) {
      res["HasOpenMultiProcessMode"] = boost::any(*hasOpenMultiProcessMode);
    }
    if (hasSdCard) {
      res["HasSdCard"] = boost::any(*hasSdCard);
    }
    if (hasSgSecurityConfigKey) {
      res["HasSgSecurityConfigKey"] = boost::any(*hasSgSecurityConfigKey);
    }
    if (imei) {
      res["Imei"] = boost::any(*imei);
    }
    if (imsi) {
      res["Imsi"] = boost::any(*imsi);
    }
    if (inMainProcess) {
      res["InMainProcess"] = boost::any(*inMainProcess);
    }
    if (installSdCard) {
      res["InstallSdCard"] = boost::any(*installSdCard);
    }
    if (isBackTrace) {
      res["IsBackTrace"] = boost::any(*isBackTrace);
    }
    if (isSpeedVersion) {
      res["IsSpeedVersion"] = boost::any(*isSpeedVersion);
    }
    if (isp) {
      res["Isp"] = boost::any(*isp);
    }
    if (jsBacktrace) {
      res["JsBacktrace"] = boost::any(*jsBacktrace);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (launchedTime) {
      res["LaunchedTime"] = boost::any(*launchedTime);
    }
    if (lineNo) {
      res["LineNo"] = boost::any(*lineNo);
    }
    if (logHash) {
      res["LogHash"] = boost::any(*logHash);
    }
    if (mainLog) {
      res["MainLog"] = boost::any(*mainLog);
    }
    if (memoryMap) {
      res["MemoryMap"] = boost::any(*memoryMap);
    }
    if (moreInfo1) {
      res["MoreInfo1"] = boost::any(*moreInfo1);
    }
    if (moreInfo2) {
      res["MoreInfo2"] = boost::any(*moreInfo2);
    }
    if (moreInfo3) {
      res["MoreInfo3"] = boost::any(*moreInfo3);
    }
    if (nativeAllThreadDump) {
      res["NativeAllThreadDump"] = boost::any(*nativeAllThreadDump);
    }
    if (nativeMaps) {
      res["NativeMaps"] = boost::any(*nativeMaps);
    }
    if (needReCluster) {
      res["NeedReCluster"] = boost::any(*needReCluster);
    }
    if (openedFileCount) {
      res["OpenedFileCount"] = boost::any(*openedFileCount);
    }
    if (operations) {
      res["Operations"] = boost::any(*operations);
    }
    if (originData) {
      res["OriginData"] = boost::any(*originData);
    }
    if (originUri) {
      res["OriginUri"] = boost::any(*originUri);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (osVersion) {
      res["OsVersion"] = boost::any(*osVersion);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (parentProcessName) {
      res["ParentProcessName"] = boost::any(*parentProcessName);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (processName) {
      res["ProcessName"] = boost::any(*processName);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (reportContent) {
      res["ReportContent"] = boost::any(*reportContent);
    }
    if (reportType) {
      res["ReportType"] = boost::any(*reportType);
    }
    if (resolution) {
      res["Resolution"] = boost::any(*resolution);
    }
    if (rootDirectory) {
      res["RootDirectory"] = boost::any(*rootDirectory);
    }
    if (runtimeExtData) {
      res["RuntimeExtData"] = boost::any(*runtimeExtData);
    }
    if (sceneValue) {
      res["SceneValue"] = boost::any(*sceneValue);
    }
    if (sdkType) {
      res["SdkType"] = boost::any(*sdkType);
    }
    if (sdkVersion) {
      res["SdkVersion"] = boost::any(*sdkVersion);
    }
    if (seq) {
      res["Seq"] = boost::any(*seq);
    }
    if (serverTime) {
      res["ServerTime"] = boost::any(*serverTime);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (simpleReportContent) {
      res["SimpleReportContent"] = boost::any(*simpleReportContent);
    }
    if (soLibBuild) {
      res["SoLibBuild"] = boost::any(*soLibBuild);
    }
    if (speedFlags) {
      res["SpeedFlags"] = boost::any(*speedFlags);
    }
    if (stack) {
      res["Stack"] = boost::any(*stack);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (symbolicFileType) {
      res["SymbolicFileType"] = boost::any(*symbolicFileType);
    }
    if (sysLog) {
      res["SysLog"] = boost::any(*sysLog);
    }
    if (threadName) {
      res["ThreadName"] = boost::any(*threadName);
    }
    if (threads) {
      res["Threads"] = boost::any(*threads);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (track) {
      res["Track"] = boost::any(*track);
    }
    if (triggeredTime) {
      res["TriggeredTime"] = boost::any(*triggeredTime);
    }
    if (uploadTime) {
      res["UploadTime"] = boost::any(*uploadTime);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userNick) {
      res["UserNick"] = boost::any(*userNick);
    }
    if (utdid) {
      res["Utdid"] = boost::any(*utdid);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    if (view) {
      res["View"] = boost::any(*view);
    }
    if (weexFullUrl) {
      res["WeexFullUrl"] = boost::any(*weexFullUrl);
    }
    if (weexShortUrl) {
      res["WeexShortUrl"] = boost::any(*weexShortUrl);
    }
    if (writeLimit) {
      res["WriteLimit"] = boost::any(*writeLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Access") != m.end() && !m["Access"].empty()) {
      access = make_shared<string>(boost::any_cast<string>(m["Access"]));
    }
    if (m.find("AccessSubType") != m.end() && !m["AccessSubType"].empty()) {
      accessSubType = make_shared<string>(boost::any_cast<string>(m["AccessSubType"]));
    }
    if (m.find("AdditionalCallbackInfo") != m.end() && !m["AdditionalCallbackInfo"].empty()) {
      additionalCallbackInfo = make_shared<string>(boost::any_cast<string>(m["AdditionalCallbackInfo"]));
    }
    if (m.find("AdditionalCrossPlatformCrashInfo") != m.end() && !m["AdditionalCrossPlatformCrashInfo"].empty()) {
      additionalCrossPlatformCrashInfo = make_shared<string>(boost::any_cast<string>(m["AdditionalCrossPlatformCrashInfo"]));
    }
    if (m.find("AdditionalCustomInfo") != m.end() && !m["AdditionalCustomInfo"].empty()) {
      additionalCustomInfo = make_shared<string>(boost::any_cast<string>(m["AdditionalCustomInfo"]));
    }
    if (m.find("AndroidVm") != m.end() && !m["AndroidVm"].empty()) {
      androidVm = make_shared<string>(boost::any_cast<string>(m["AndroidVm"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("ArgHash") != m.end() && !m["ArgHash"].empty()) {
      argHash = make_shared<long>(boost::any_cast<long>(m["ArgHash"]));
    }
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      args = make_shared<string>(boost::any_cast<string>(m["Args"]));
    }
    if (m.find("Backtrace") != m.end() && !m["Backtrace"].empty()) {
      backtrace = make_shared<string>(boost::any_cast<string>(m["Backtrace"]));
    }
    if (m.find("Banner") != m.end() && !m["Banner"].empty()) {
      banner = make_shared<string>(boost::any_cast<string>(m["Banner"]));
    }
    if (m.find("BinaryUuids") != m.end() && !m["BinaryUuids"].empty()) {
      binaryUuids = make_shared<string>(boost::any_cast<string>(m["BinaryUuids"]));
    }
    if (m.find("Brand") != m.end() && !m["Brand"].empty()) {
      brand = make_shared<string>(boost::any_cast<string>(m["Brand"]));
    }
    if (m.find("BrowserName") != m.end() && !m["BrowserName"].empty()) {
      browserName = make_shared<string>(boost::any_cast<string>(m["BrowserName"]));
    }
    if (m.find("BrowserVersion") != m.end() && !m["BrowserVersion"].empty()) {
      browserVersion = make_shared<string>(boost::any_cast<string>(m["BrowserVersion"]));
    }
    if (m.find("Build") != m.end() && !m["Build"].empty()) {
      build = make_shared<string>(boost::any_cast<string>(m["Build"]));
    }
    if (m.find("BusinessCountry") != m.end() && !m["BusinessCountry"].empty()) {
      businessCountry = make_shared<string>(boost::any_cast<string>(m["BusinessCountry"]));
    }
    if (m.find("BusinessErrorExtData") != m.end() && !m["BusinessErrorExtData"].empty()) {
      businessErrorExtData = make_shared<string>(boost::any_cast<string>(m["BusinessErrorExtData"]));
    }
    if (m.find("BusinessLogType") != m.end() && !m["BusinessLogType"].empty()) {
      businessLogType = make_shared<string>(boost::any_cast<string>(m["BusinessLogType"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ClientTime") != m.end() && !m["ClientTime"].empty()) {
      clientTime = make_shared<long>(boost::any_cast<long>(m["ClientTime"]));
    }
    if (m.find("ColNo") != m.end() && !m["ColNo"].empty()) {
      colNo = make_shared<string>(boost::any_cast<string>(m["ColNo"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("CpuModel") != m.end() && !m["CpuModel"].empty()) {
      cpuModel = make_shared<string>(boost::any_cast<string>(m["CpuModel"]));
    }
    if (m.find("CruxModule") != m.end() && !m["CruxModule"].empty()) {
      cruxModule = make_shared<string>(boost::any_cast<string>(m["CruxModule"]));
    }
    if (m.find("CruxStack") != m.end() && !m["CruxStack"].empty()) {
      cruxStack = make_shared<string>(boost::any_cast<string>(m["CruxStack"]));
    }
    if (m.find("CruxStackHash") != m.end() && !m["CruxStackHash"].empty()) {
      cruxStackHash = make_shared<long>(boost::any_cast<long>(m["CruxStackHash"]));
    }
    if (m.find("CruxStackTrace") != m.end() && !m["CruxStackTrace"].empty()) {
      cruxStackTrace = make_shared<string>(boost::any_cast<string>(m["CruxStackTrace"]));
    }
    if (m.find("CruxStackTraceHash") != m.end() && !m["CruxStackTraceHash"].empty()) {
      cruxStackTraceHash = make_shared<long>(boost::any_cast<long>(m["CruxStackTraceHash"]));
    }
    if (m.find("CustomExceptionType") != m.end() && !m["CustomExceptionType"].empty()) {
      customExceptionType = make_shared<string>(boost::any_cast<string>(m["CustomExceptionType"]));
    }
    if (m.find("CustomInfo") != m.end() && !m["CustomInfo"].empty()) {
      customInfo = make_shared<string>(boost::any_cast<string>(m["CustomInfo"]));
    }
    if (m.find("DataDirectory") != m.end() && !m["DataDirectory"].empty()) {
      dataDirectory = make_shared<string>(boost::any_cast<string>(m["DataDirectory"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("DeviceModel") != m.end() && !m["DeviceModel"].empty()) {
      deviceModel = make_shared<string>(boost::any_cast<string>(m["DeviceModel"]));
    }
    if (m.find("Did") != m.end() && !m["Did"].empty()) {
      did = make_shared<string>(boost::any_cast<string>(m["Did"]));
    }
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("DigestHash") != m.end() && !m["DigestHash"].empty()) {
      digestHash = make_shared<string>(boost::any_cast<string>(m["DigestHash"]));
    }
    if (m.find("DomScore") != m.end() && !m["DomScore"].empty()) {
      domScore = make_shared<string>(boost::any_cast<string>(m["DomScore"]));
    }
    if (m.find("DownloadCacheDirectory") != m.end() && !m["DownloadCacheDirectory"].empty()) {
      downloadCacheDirectory = make_shared<string>(boost::any_cast<string>(m["DownloadCacheDirectory"]));
    }
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("ErrorType") != m.end() && !m["ErrorType"].empty()) {
      errorType = make_shared<string>(boost::any_cast<string>(m["ErrorType"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<long>(boost::any_cast<long>(m["EventId"]));
    }
    if (m.find("EventLog") != m.end() && !m["EventLog"].empty()) {
      eventLog = make_shared<string>(boost::any_cast<string>(m["EventLog"]));
    }
    if (m.find("ExceptionArg1") != m.end() && !m["ExceptionArg1"].empty()) {
      exceptionArg1 = make_shared<string>(boost::any_cast<string>(m["ExceptionArg1"]));
    }
    if (m.find("ExceptionArg2") != m.end() && !m["ExceptionArg2"].empty()) {
      exceptionArg2 = make_shared<string>(boost::any_cast<string>(m["ExceptionArg2"]));
    }
    if (m.find("ExceptionArg3") != m.end() && !m["ExceptionArg3"].empty()) {
      exceptionArg3 = make_shared<string>(boost::any_cast<string>(m["ExceptionArg3"]));
    }
    if (m.find("ExceptionCode") != m.end() && !m["ExceptionCode"].empty()) {
      exceptionCode = make_shared<string>(boost::any_cast<string>(m["ExceptionCode"]));
    }
    if (m.find("ExceptionCodes") != m.end() && !m["ExceptionCodes"].empty()) {
      exceptionCodes = make_shared<string>(boost::any_cast<string>(m["ExceptionCodes"]));
    }
    if (m.find("ExceptionDetail") != m.end() && !m["ExceptionDetail"].empty()) {
      exceptionDetail = make_shared<string>(boost::any_cast<string>(m["ExceptionDetail"]));
    }
    if (m.find("ExceptionId") != m.end() && !m["ExceptionId"].empty()) {
      exceptionId = make_shared<string>(boost::any_cast<string>(m["ExceptionId"]));
    }
    if (m.find("ExceptionMsg") != m.end() && !m["ExceptionMsg"].empty()) {
      exceptionMsg = make_shared<string>(boost::any_cast<string>(m["ExceptionMsg"]));
    }
    if (m.find("ExceptionSubtype") != m.end() && !m["ExceptionSubtype"].empty()) {
      exceptionSubtype = make_shared<string>(boost::any_cast<string>(m["ExceptionSubtype"]));
    }
    if (m.find("ExceptionType") != m.end() && !m["ExceptionType"].empty()) {
      exceptionType = make_shared<string>(boost::any_cast<string>(m["ExceptionType"]));
    }
    if (m.find("ExceptionVersion") != m.end() && !m["ExceptionVersion"].empty()) {
      exceptionVersion = make_shared<string>(boost::any_cast<string>(m["ExceptionVersion"]));
    }
    if (m.find("ExportStatus") != m.end() && !m["ExportStatus"].empty()) {
      exportStatus = make_shared<string>(boost::any_cast<string>(m["ExportStatus"]));
    }
    if (m.find("ExternalStorageDirectory") != m.end() && !m["ExternalStorageDirectory"].empty()) {
      externalStorageDirectory = make_shared<string>(boost::any_cast<string>(m["ExternalStorageDirectory"]));
    }
    if (m.find("FeatureScene") != m.end() && !m["FeatureScene"].empty()) {
      featureScene = make_shared<string>(boost::any_cast<string>(m["FeatureScene"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("Filename") != m.end() && !m["Filename"].empty()) {
      filename = make_shared<string>(boost::any_cast<string>(m["Filename"]));
    }
    if (m.find("FlutterRoute") != m.end() && !m["FlutterRoute"].empty()) {
      flutterRoute = make_shared<string>(boost::any_cast<string>(m["FlutterRoute"]));
    }
    if (m.find("ForceGround") != m.end() && !m["ForceGround"].empty()) {
      forceGround = make_shared<long>(boost::any_cast<long>(m["ForceGround"]));
    }
    if (m.find("ForeGround") != m.end() && !m["ForeGround"].empty()) {
      foreGround = make_shared<long>(boost::any_cast<long>(m["ForeGround"]));
    }
    if (m.find("H5FullUrl") != m.end() && !m["H5FullUrl"].empty()) {
      h5FullUrl = make_shared<string>(boost::any_cast<string>(m["H5FullUrl"]));
    }
    if (m.find("H5ShortUrl") != m.end() && !m["H5ShortUrl"].empty()) {
      h5ShortUrl = make_shared<string>(boost::any_cast<string>(m["H5ShortUrl"]));
    }
    if (m.find("HasOpenMultiProcessMode") != m.end() && !m["HasOpenMultiProcessMode"].empty()) {
      hasOpenMultiProcessMode = make_shared<long>(boost::any_cast<long>(m["HasOpenMultiProcessMode"]));
    }
    if (m.find("HasSdCard") != m.end() && !m["HasSdCard"].empty()) {
      hasSdCard = make_shared<long>(boost::any_cast<long>(m["HasSdCard"]));
    }
    if (m.find("HasSgSecurityConfigKey") != m.end() && !m["HasSgSecurityConfigKey"].empty()) {
      hasSgSecurityConfigKey = make_shared<long>(boost::any_cast<long>(m["HasSgSecurityConfigKey"]));
    }
    if (m.find("Imei") != m.end() && !m["Imei"].empty()) {
      imei = make_shared<string>(boost::any_cast<string>(m["Imei"]));
    }
    if (m.find("Imsi") != m.end() && !m["Imsi"].empty()) {
      imsi = make_shared<string>(boost::any_cast<string>(m["Imsi"]));
    }
    if (m.find("InMainProcess") != m.end() && !m["InMainProcess"].empty()) {
      inMainProcess = make_shared<long>(boost::any_cast<long>(m["InMainProcess"]));
    }
    if (m.find("InstallSdCard") != m.end() && !m["InstallSdCard"].empty()) {
      installSdCard = make_shared<long>(boost::any_cast<long>(m["InstallSdCard"]));
    }
    if (m.find("IsBackTrace") != m.end() && !m["IsBackTrace"].empty()) {
      isBackTrace = make_shared<long>(boost::any_cast<long>(m["IsBackTrace"]));
    }
    if (m.find("IsSpeedVersion") != m.end() && !m["IsSpeedVersion"].empty()) {
      isSpeedVersion = make_shared<long>(boost::any_cast<long>(m["IsSpeedVersion"]));
    }
    if (m.find("Isp") != m.end() && !m["Isp"].empty()) {
      isp = make_shared<string>(boost::any_cast<string>(m["Isp"]));
    }
    if (m.find("JsBacktrace") != m.end() && !m["JsBacktrace"].empty()) {
      jsBacktrace = make_shared<string>(boost::any_cast<string>(m["JsBacktrace"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("LaunchedTime") != m.end() && !m["LaunchedTime"].empty()) {
      launchedTime = make_shared<string>(boost::any_cast<string>(m["LaunchedTime"]));
    }
    if (m.find("LineNo") != m.end() && !m["LineNo"].empty()) {
      lineNo = make_shared<string>(boost::any_cast<string>(m["LineNo"]));
    }
    if (m.find("LogHash") != m.end() && !m["LogHash"].empty()) {
      logHash = make_shared<long>(boost::any_cast<long>(m["LogHash"]));
    }
    if (m.find("MainLog") != m.end() && !m["MainLog"].empty()) {
      mainLog = make_shared<string>(boost::any_cast<string>(m["MainLog"]));
    }
    if (m.find("MemoryMap") != m.end() && !m["MemoryMap"].empty()) {
      memoryMap = make_shared<string>(boost::any_cast<string>(m["MemoryMap"]));
    }
    if (m.find("MoreInfo1") != m.end() && !m["MoreInfo1"].empty()) {
      moreInfo1 = make_shared<string>(boost::any_cast<string>(m["MoreInfo1"]));
    }
    if (m.find("MoreInfo2") != m.end() && !m["MoreInfo2"].empty()) {
      moreInfo2 = make_shared<string>(boost::any_cast<string>(m["MoreInfo2"]));
    }
    if (m.find("MoreInfo3") != m.end() && !m["MoreInfo3"].empty()) {
      moreInfo3 = make_shared<string>(boost::any_cast<string>(m["MoreInfo3"]));
    }
    if (m.find("NativeAllThreadDump") != m.end() && !m["NativeAllThreadDump"].empty()) {
      nativeAllThreadDump = make_shared<string>(boost::any_cast<string>(m["NativeAllThreadDump"]));
    }
    if (m.find("NativeMaps") != m.end() && !m["NativeMaps"].empty()) {
      nativeMaps = make_shared<string>(boost::any_cast<string>(m["NativeMaps"]));
    }
    if (m.find("NeedReCluster") != m.end() && !m["NeedReCluster"].empty()) {
      needReCluster = make_shared<long>(boost::any_cast<long>(m["NeedReCluster"]));
    }
    if (m.find("OpenedFileCount") != m.end() && !m["OpenedFileCount"].empty()) {
      openedFileCount = make_shared<long>(boost::any_cast<long>(m["OpenedFileCount"]));
    }
    if (m.find("Operations") != m.end() && !m["Operations"].empty()) {
      operations = make_shared<string>(boost::any_cast<string>(m["Operations"]));
    }
    if (m.find("OriginData") != m.end() && !m["OriginData"].empty()) {
      originData = make_shared<string>(boost::any_cast<string>(m["OriginData"]));
    }
    if (m.find("OriginUri") != m.end() && !m["OriginUri"].empty()) {
      originUri = make_shared<string>(boost::any_cast<string>(m["OriginUri"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("OsVersion") != m.end() && !m["OsVersion"].empty()) {
      osVersion = make_shared<string>(boost::any_cast<string>(m["OsVersion"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<string>(boost::any_cast<string>(m["Page"]));
    }
    if (m.find("ParentProcessName") != m.end() && !m["ParentProcessName"].empty()) {
      parentProcessName = make_shared<string>(boost::any_cast<string>(m["ParentProcessName"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("ProcessName") != m.end() && !m["ProcessName"].empty()) {
      processName = make_shared<string>(boost::any_cast<string>(m["ProcessName"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("ReportContent") != m.end() && !m["ReportContent"].empty()) {
      reportContent = make_shared<string>(boost::any_cast<string>(m["ReportContent"]));
    }
    if (m.find("ReportType") != m.end() && !m["ReportType"].empty()) {
      reportType = make_shared<string>(boost::any_cast<string>(m["ReportType"]));
    }
    if (m.find("Resolution") != m.end() && !m["Resolution"].empty()) {
      resolution = make_shared<string>(boost::any_cast<string>(m["Resolution"]));
    }
    if (m.find("RootDirectory") != m.end() && !m["RootDirectory"].empty()) {
      rootDirectory = make_shared<string>(boost::any_cast<string>(m["RootDirectory"]));
    }
    if (m.find("RuntimeExtData") != m.end() && !m["RuntimeExtData"].empty()) {
      runtimeExtData = make_shared<string>(boost::any_cast<string>(m["RuntimeExtData"]));
    }
    if (m.find("SceneValue") != m.end() && !m["SceneValue"].empty()) {
      sceneValue = make_shared<string>(boost::any_cast<string>(m["SceneValue"]));
    }
    if (m.find("SdkType") != m.end() && !m["SdkType"].empty()) {
      sdkType = make_shared<string>(boost::any_cast<string>(m["SdkType"]));
    }
    if (m.find("SdkVersion") != m.end() && !m["SdkVersion"].empty()) {
      sdkVersion = make_shared<string>(boost::any_cast<string>(m["SdkVersion"]));
    }
    if (m.find("Seq") != m.end() && !m["Seq"].empty()) {
      seq = make_shared<string>(boost::any_cast<string>(m["Seq"]));
    }
    if (m.find("ServerTime") != m.end() && !m["ServerTime"].empty()) {
      serverTime = make_shared<long>(boost::any_cast<long>(m["ServerTime"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("SimpleReportContent") != m.end() && !m["SimpleReportContent"].empty()) {
      simpleReportContent = make_shared<string>(boost::any_cast<string>(m["SimpleReportContent"]));
    }
    if (m.find("SoLibBuild") != m.end() && !m["SoLibBuild"].empty()) {
      soLibBuild = make_shared<string>(boost::any_cast<string>(m["SoLibBuild"]));
    }
    if (m.find("SpeedFlags") != m.end() && !m["SpeedFlags"].empty()) {
      speedFlags = make_shared<string>(boost::any_cast<string>(m["SpeedFlags"]));
    }
    if (m.find("Stack") != m.end() && !m["Stack"].empty()) {
      stack = make_shared<string>(boost::any_cast<string>(m["Stack"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("SymbolicFileType") != m.end() && !m["SymbolicFileType"].empty()) {
      symbolicFileType = make_shared<string>(boost::any_cast<string>(m["SymbolicFileType"]));
    }
    if (m.find("SysLog") != m.end() && !m["SysLog"].empty()) {
      sysLog = make_shared<string>(boost::any_cast<string>(m["SysLog"]));
    }
    if (m.find("ThreadName") != m.end() && !m["ThreadName"].empty()) {
      threadName = make_shared<string>(boost::any_cast<string>(m["ThreadName"]));
    }
    if (m.find("Threads") != m.end() && !m["Threads"].empty()) {
      threads = make_shared<string>(boost::any_cast<string>(m["Threads"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("Track") != m.end() && !m["Track"].empty()) {
      track = make_shared<string>(boost::any_cast<string>(m["Track"]));
    }
    if (m.find("TriggeredTime") != m.end() && !m["TriggeredTime"].empty()) {
      triggeredTime = make_shared<string>(boost::any_cast<string>(m["TriggeredTime"]));
    }
    if (m.find("UploadTime") != m.end() && !m["UploadTime"].empty()) {
      uploadTime = make_shared<long>(boost::any_cast<long>(m["UploadTime"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserNick") != m.end() && !m["UserNick"].empty()) {
      userNick = make_shared<string>(boost::any_cast<string>(m["UserNick"]));
    }
    if (m.find("Utdid") != m.end() && !m["Utdid"].empty()) {
      utdid = make_shared<string>(boost::any_cast<string>(m["Utdid"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
    if (m.find("View") != m.end() && !m["View"].empty()) {
      view = make_shared<string>(boost::any_cast<string>(m["View"]));
    }
    if (m.find("WeexFullUrl") != m.end() && !m["WeexFullUrl"].empty()) {
      weexFullUrl = make_shared<string>(boost::any_cast<string>(m["WeexFullUrl"]));
    }
    if (m.find("WeexShortUrl") != m.end() && !m["WeexShortUrl"].empty()) {
      weexShortUrl = make_shared<string>(boost::any_cast<string>(m["WeexShortUrl"]));
    }
    if (m.find("WriteLimit") != m.end() && !m["WriteLimit"].empty()) {
      writeLimit = make_shared<long>(boost::any_cast<long>(m["WriteLimit"]));
    }
  }


  virtual ~GetErrorResponseBodyModel() = default;
};
class GetErrorResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> args{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<GetErrorResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetErrorResponseBody() {}

  explicit GetErrorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Args"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      args = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        GetErrorResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<GetErrorResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetErrorResponseBody() = default;
};
class GetErrorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetErrorResponseBody> body{};

  GetErrorResponse() {}

  explicit GetErrorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetErrorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetErrorResponseBody>(model1);
      }
    }
  }


  virtual ~GetErrorResponse() = default;
};
class GetErrorsRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<string>> subFilters{};
  shared_ptr<vector<boost::any>> values{};

  GetErrorsRequestFilter() {}

  explicit GetErrorsRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (subFilters) {
      res["SubFilters"] = boost::any(*subFilters);
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
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("SubFilters") != m.end() && !m["SubFilters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubFilters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubFilters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subFilters = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      values = make_shared<vector<boost::any>>(toVec1);
    }
  }


  virtual ~GetErrorsRequestFilter() = default;
};
class GetErrorsRequestTimeRange : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};

  GetErrorsRequestTimeRange() {}

  explicit GetErrorsRequestTimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetErrorsRequestTimeRange() = default;
};
class GetErrorsRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> bizModule{};
  shared_ptr<string> digestHash{};
  shared_ptr<GetErrorsRequestFilter> filter{};
  shared_ptr<string> os{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<GetErrorsRequestTimeRange> timeRange{};
  shared_ptr<string> utdid{};

  GetErrorsRequest() {}

  explicit GetErrorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (bizModule) {
      res["BizModule"] = boost::any(*bizModule);
    }
    if (digestHash) {
      res["DigestHash"] = boost::any(*digestHash);
    }
    if (filter) {
      res["Filter"] = filter ? boost::any(filter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (timeRange) {
      res["TimeRange"] = timeRange ? boost::any(timeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (utdid) {
      res["Utdid"] = boost::any(*utdid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("BizModule") != m.end() && !m["BizModule"].empty()) {
      bizModule = make_shared<string>(boost::any_cast<string>(m["BizModule"]));
    }
    if (m.find("DigestHash") != m.end() && !m["DigestHash"].empty()) {
      digestHash = make_shared<string>(boost::any_cast<string>(m["DigestHash"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(map<string, boost::any>) == m["Filter"].type()) {
        GetErrorsRequestFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Filter"]));
        filter = make_shared<GetErrorsRequestFilter>(model1);
      }
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TimeRange") != m.end() && !m["TimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["TimeRange"].type()) {
        GetErrorsRequestTimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TimeRange"]));
        timeRange = make_shared<GetErrorsRequestTimeRange>(model1);
      }
    }
    if (m.find("Utdid") != m.end() && !m["Utdid"].empty()) {
      utdid = make_shared<string>(boost::any_cast<string>(m["Utdid"]));
    }
  }


  virtual ~GetErrorsRequest() = default;
};
class GetErrorsShrinkRequestTimeRange : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};

  GetErrorsShrinkRequestTimeRange() {}

  explicit GetErrorsShrinkRequestTimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetErrorsShrinkRequestTimeRange() = default;
};
class GetErrorsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> bizModule{};
  shared_ptr<string> digestHash{};
  shared_ptr<string> filterShrink{};
  shared_ptr<string> os{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<GetErrorsShrinkRequestTimeRange> timeRange{};
  shared_ptr<string> utdid{};

  GetErrorsShrinkRequest() {}

  explicit GetErrorsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (bizModule) {
      res["BizModule"] = boost::any(*bizModule);
    }
    if (digestHash) {
      res["DigestHash"] = boost::any(*digestHash);
    }
    if (filterShrink) {
      res["Filter"] = boost::any(*filterShrink);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (timeRange) {
      res["TimeRange"] = timeRange ? boost::any(timeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (utdid) {
      res["Utdid"] = boost::any(*utdid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("BizModule") != m.end() && !m["BizModule"].empty()) {
      bizModule = make_shared<string>(boost::any_cast<string>(m["BizModule"]));
    }
    if (m.find("DigestHash") != m.end() && !m["DigestHash"].empty()) {
      digestHash = make_shared<string>(boost::any_cast<string>(m["DigestHash"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filterShrink = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TimeRange") != m.end() && !m["TimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["TimeRange"].type()) {
        GetErrorsShrinkRequestTimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TimeRange"]));
        timeRange = make_shared<GetErrorsShrinkRequestTimeRange>(model1);
      }
    }
    if (m.find("Utdid") != m.end() && !m["Utdid"].empty()) {
      utdid = make_shared<string>(boost::any_cast<string>(m["Utdid"]));
    }
  }


  virtual ~GetErrorsShrinkRequest() = default;
};
class GetErrorsResponseBodyModelItems : public Darabonba::Model {
public:
  shared_ptr<long> clientTime{};
  shared_ptr<string> did{};
  shared_ptr<string> utdid{};
  shared_ptr<string> uuid{};

  GetErrorsResponseBodyModelItems() {}

  explicit GetErrorsResponseBodyModelItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientTime) {
      res["ClientTime"] = boost::any(*clientTime);
    }
    if (did) {
      res["Did"] = boost::any(*did);
    }
    if (utdid) {
      res["Utdid"] = boost::any(*utdid);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientTime") != m.end() && !m["ClientTime"].empty()) {
      clientTime = make_shared<long>(boost::any_cast<long>(m["ClientTime"]));
    }
    if (m.find("Did") != m.end() && !m["Did"].empty()) {
      did = make_shared<string>(boost::any_cast<string>(m["Did"]));
    }
    if (m.find("Utdid") != m.end() && !m["Utdid"].empty()) {
      utdid = make_shared<string>(boost::any_cast<string>(m["Utdid"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~GetErrorsResponseBodyModelItems() = default;
};
class GetErrorsResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<GetErrorsResponseBodyModelItems>> items{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pages{};
  shared_ptr<long> total{};

  GetErrorsResponseBodyModel() {}

  explicit GetErrorsResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<GetErrorsResponseBodyModelItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetErrorsResponseBodyModelItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GetErrorsResponseBodyModelItems>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetErrorsResponseBodyModel() = default;
};
class GetErrorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> args{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<GetErrorsResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetErrorsResponseBody() {}

  explicit GetErrorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Args"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      args = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        GetErrorsResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<GetErrorsResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetErrorsResponseBody() = default;
};
class GetErrorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetErrorsResponseBody> body{};

  GetErrorsResponse() {}

  explicit GetErrorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetErrorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetErrorsResponseBody>(model1);
      }
    }
  }


  virtual ~GetErrorsResponse() = default;
};
class GetIssueRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<string>> subFilters{};
  shared_ptr<vector<boost::any>> values{};

  GetIssueRequestFilter() {}

  explicit GetIssueRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (subFilters) {
      res["SubFilters"] = boost::any(*subFilters);
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
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("SubFilters") != m.end() && !m["SubFilters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubFilters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubFilters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subFilters = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      values = make_shared<vector<boost::any>>(toVec1);
    }
  }


  virtual ~GetIssueRequestFilter() = default;
};
class GetIssueRequestTimeRange : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> granularity{};
  shared_ptr<string> granularityUnit{};
  shared_ptr<long> startTime{};

  GetIssueRequestTimeRange() {}

  explicit GetIssueRequestTimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (granularityUnit) {
      res["GranularityUnit"] = boost::any(*granularityUnit);
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
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<long>(boost::any_cast<long>(m["Granularity"]));
    }
    if (m.find("GranularityUnit") != m.end() && !m["GranularityUnit"].empty()) {
      granularityUnit = make_shared<string>(boost::any_cast<string>(m["GranularityUnit"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetIssueRequestTimeRange() = default;
};
class GetIssueRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> bizModule{};
  shared_ptr<string> digestHash{};
  shared_ptr<GetIssueRequestFilter> filter{};
  shared_ptr<string> os{};
  shared_ptr<GetIssueRequestTimeRange> timeRange{};

  GetIssueRequest() {}

  explicit GetIssueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (bizModule) {
      res["BizModule"] = boost::any(*bizModule);
    }
    if (digestHash) {
      res["DigestHash"] = boost::any(*digestHash);
    }
    if (filter) {
      res["Filter"] = filter ? boost::any(filter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (timeRange) {
      res["TimeRange"] = timeRange ? boost::any(timeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("BizModule") != m.end() && !m["BizModule"].empty()) {
      bizModule = make_shared<string>(boost::any_cast<string>(m["BizModule"]));
    }
    if (m.find("DigestHash") != m.end() && !m["DigestHash"].empty()) {
      digestHash = make_shared<string>(boost::any_cast<string>(m["DigestHash"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(map<string, boost::any>) == m["Filter"].type()) {
        GetIssueRequestFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Filter"]));
        filter = make_shared<GetIssueRequestFilter>(model1);
      }
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("TimeRange") != m.end() && !m["TimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["TimeRange"].type()) {
        GetIssueRequestTimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TimeRange"]));
        timeRange = make_shared<GetIssueRequestTimeRange>(model1);
      }
    }
  }


  virtual ~GetIssueRequest() = default;
};
class GetIssueShrinkRequestTimeRange : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> granularity{};
  shared_ptr<string> granularityUnit{};
  shared_ptr<long> startTime{};

  GetIssueShrinkRequestTimeRange() {}

  explicit GetIssueShrinkRequestTimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (granularityUnit) {
      res["GranularityUnit"] = boost::any(*granularityUnit);
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
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<long>(boost::any_cast<long>(m["Granularity"]));
    }
    if (m.find("GranularityUnit") != m.end() && !m["GranularityUnit"].empty()) {
      granularityUnit = make_shared<string>(boost::any_cast<string>(m["GranularityUnit"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetIssueShrinkRequestTimeRange() = default;
};
class GetIssueShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> bizModule{};
  shared_ptr<string> digestHash{};
  shared_ptr<string> filterShrink{};
  shared_ptr<string> os{};
  shared_ptr<GetIssueShrinkRequestTimeRange> timeRange{};

  GetIssueShrinkRequest() {}

  explicit GetIssueShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (bizModule) {
      res["BizModule"] = boost::any(*bizModule);
    }
    if (digestHash) {
      res["DigestHash"] = boost::any(*digestHash);
    }
    if (filterShrink) {
      res["Filter"] = boost::any(*filterShrink);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (timeRange) {
      res["TimeRange"] = timeRange ? boost::any(timeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("BizModule") != m.end() && !m["BizModule"].empty()) {
      bizModule = make_shared<string>(boost::any_cast<string>(m["BizModule"]));
    }
    if (m.find("DigestHash") != m.end() && !m["DigestHash"].empty()) {
      digestHash = make_shared<string>(boost::any_cast<string>(m["DigestHash"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filterShrink = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("TimeRange") != m.end() && !m["TimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["TimeRange"].type()) {
        GetIssueShrinkRequestTimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TimeRange"]));
        timeRange = make_shared<GetIssueShrinkRequestTimeRange>(model1);
      }
    }
  }


  virtual ~GetIssueShrinkRequest() = default;
};
class GetIssueResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<string>> affectedVersions{};
  shared_ptr<string> cruxStack{};
  shared_ptr<string> digestHash{};
  shared_ptr<long> errorColumn{};
  shared_ptr<long> errorCount{};
  shared_ptr<double> errorCountGrowthRate{};
  shared_ptr<long> errorDeviceCount{};
  shared_ptr<double> errorDeviceCountGrowthRate{};
  shared_ptr<double> errorDeviceRate{};
  shared_ptr<double> errorDeviceRateGrowthRate{};
  shared_ptr<string> errorFileName{};
  shared_ptr<string> errorLine{};
  shared_ptr<string> errorName{};
  shared_ptr<double> errorRate{};
  shared_ptr<double> errorRateGrowthRate{};
  shared_ptr<string> errorType{};
  shared_ptr<string> firstVersion{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtLatest{};
  shared_ptr<long> keyLine{};
  shared_ptr<string> name{};
  shared_ptr<string> stack{};
  shared_ptr<long> status{};
  shared_ptr<string> summary{};
  shared_ptr<bool> symbolicStatus{};
  shared_ptr<vector<string>> tags{};

  GetIssueResponseBodyModel() {}

  explicit GetIssueResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (affectedVersions) {
      res["AffectedVersions"] = boost::any(*affectedVersions);
    }
    if (cruxStack) {
      res["CruxStack"] = boost::any(*cruxStack);
    }
    if (digestHash) {
      res["DigestHash"] = boost::any(*digestHash);
    }
    if (errorColumn) {
      res["ErrorColumn"] = boost::any(*errorColumn);
    }
    if (errorCount) {
      res["ErrorCount"] = boost::any(*errorCount);
    }
    if (errorCountGrowthRate) {
      res["ErrorCountGrowthRate"] = boost::any(*errorCountGrowthRate);
    }
    if (errorDeviceCount) {
      res["ErrorDeviceCount"] = boost::any(*errorDeviceCount);
    }
    if (errorDeviceCountGrowthRate) {
      res["ErrorDeviceCountGrowthRate"] = boost::any(*errorDeviceCountGrowthRate);
    }
    if (errorDeviceRate) {
      res["ErrorDeviceRate"] = boost::any(*errorDeviceRate);
    }
    if (errorDeviceRateGrowthRate) {
      res["ErrorDeviceRateGrowthRate"] = boost::any(*errorDeviceRateGrowthRate);
    }
    if (errorFileName) {
      res["ErrorFileName"] = boost::any(*errorFileName);
    }
    if (errorLine) {
      res["ErrorLine"] = boost::any(*errorLine);
    }
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (errorRate) {
      res["ErrorRate"] = boost::any(*errorRate);
    }
    if (errorRateGrowthRate) {
      res["ErrorRateGrowthRate"] = boost::any(*errorRateGrowthRate);
    }
    if (errorType) {
      res["ErrorType"] = boost::any(*errorType);
    }
    if (firstVersion) {
      res["FirstVersion"] = boost::any(*firstVersion);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtLatest) {
      res["GmtLatest"] = boost::any(*gmtLatest);
    }
    if (keyLine) {
      res["KeyLine"] = boost::any(*keyLine);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (stack) {
      res["Stack"] = boost::any(*stack);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (symbolicStatus) {
      res["SymbolicStatus"] = boost::any(*symbolicStatus);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AffectedVersions") != m.end() && !m["AffectedVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AffectedVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AffectedVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      affectedVersions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CruxStack") != m.end() && !m["CruxStack"].empty()) {
      cruxStack = make_shared<string>(boost::any_cast<string>(m["CruxStack"]));
    }
    if (m.find("DigestHash") != m.end() && !m["DigestHash"].empty()) {
      digestHash = make_shared<string>(boost::any_cast<string>(m["DigestHash"]));
    }
    if (m.find("ErrorColumn") != m.end() && !m["ErrorColumn"].empty()) {
      errorColumn = make_shared<long>(boost::any_cast<long>(m["ErrorColumn"]));
    }
    if (m.find("ErrorCount") != m.end() && !m["ErrorCount"].empty()) {
      errorCount = make_shared<long>(boost::any_cast<long>(m["ErrorCount"]));
    }
    if (m.find("ErrorCountGrowthRate") != m.end() && !m["ErrorCountGrowthRate"].empty()) {
      errorCountGrowthRate = make_shared<double>(boost::any_cast<double>(m["ErrorCountGrowthRate"]));
    }
    if (m.find("ErrorDeviceCount") != m.end() && !m["ErrorDeviceCount"].empty()) {
      errorDeviceCount = make_shared<long>(boost::any_cast<long>(m["ErrorDeviceCount"]));
    }
    if (m.find("ErrorDeviceCountGrowthRate") != m.end() && !m["ErrorDeviceCountGrowthRate"].empty()) {
      errorDeviceCountGrowthRate = make_shared<double>(boost::any_cast<double>(m["ErrorDeviceCountGrowthRate"]));
    }
    if (m.find("ErrorDeviceRate") != m.end() && !m["ErrorDeviceRate"].empty()) {
      errorDeviceRate = make_shared<double>(boost::any_cast<double>(m["ErrorDeviceRate"]));
    }
    if (m.find("ErrorDeviceRateGrowthRate") != m.end() && !m["ErrorDeviceRateGrowthRate"].empty()) {
      errorDeviceRateGrowthRate = make_shared<double>(boost::any_cast<double>(m["ErrorDeviceRateGrowthRate"]));
    }
    if (m.find("ErrorFileName") != m.end() && !m["ErrorFileName"].empty()) {
      errorFileName = make_shared<string>(boost::any_cast<string>(m["ErrorFileName"]));
    }
    if (m.find("ErrorLine") != m.end() && !m["ErrorLine"].empty()) {
      errorLine = make_shared<string>(boost::any_cast<string>(m["ErrorLine"]));
    }
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("ErrorRate") != m.end() && !m["ErrorRate"].empty()) {
      errorRate = make_shared<double>(boost::any_cast<double>(m["ErrorRate"]));
    }
    if (m.find("ErrorRateGrowthRate") != m.end() && !m["ErrorRateGrowthRate"].empty()) {
      errorRateGrowthRate = make_shared<double>(boost::any_cast<double>(m["ErrorRateGrowthRate"]));
    }
    if (m.find("ErrorType") != m.end() && !m["ErrorType"].empty()) {
      errorType = make_shared<string>(boost::any_cast<string>(m["ErrorType"]));
    }
    if (m.find("FirstVersion") != m.end() && !m["FirstVersion"].empty()) {
      firstVersion = make_shared<string>(boost::any_cast<string>(m["FirstVersion"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtLatest") != m.end() && !m["GmtLatest"].empty()) {
      gmtLatest = make_shared<long>(boost::any_cast<long>(m["GmtLatest"]));
    }
    if (m.find("KeyLine") != m.end() && !m["KeyLine"].empty()) {
      keyLine = make_shared<long>(boost::any_cast<long>(m["KeyLine"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Stack") != m.end() && !m["Stack"].empty()) {
      stack = make_shared<string>(boost::any_cast<string>(m["Stack"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("SymbolicStatus") != m.end() && !m["SymbolicStatus"].empty()) {
      symbolicStatus = make_shared<bool>(boost::any_cast<bool>(m["SymbolicStatus"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetIssueResponseBodyModel() = default;
};
class GetIssueResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> args{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<GetIssueResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetIssueResponseBody() {}

  explicit GetIssueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Args"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      args = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        GetIssueResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<GetIssueResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetIssueResponseBody() = default;
};
class GetIssueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetIssueResponseBody> body{};

  GetIssueResponse() {}

  explicit GetIssueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetIssueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIssueResponseBody>(model1);
      }
    }
  }


  virtual ~GetIssueResponse() = default;
};
class GetIssuesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<string>> subFilters{};
  shared_ptr<vector<boost::any>> values{};

  GetIssuesRequestFilter() {}

  explicit GetIssuesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (subFilters) {
      res["SubFilters"] = boost::any(*subFilters);
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
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("SubFilters") != m.end() && !m["SubFilters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubFilters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubFilters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subFilters = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      values = make_shared<vector<boost::any>>(toVec1);
    }
  }


  virtual ~GetIssuesRequestFilter() = default;
};
class GetIssuesRequestTimeRange : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> granularity{};
  shared_ptr<string> granularityUnit{};
  shared_ptr<long> startTime{};

  GetIssuesRequestTimeRange() {}

  explicit GetIssuesRequestTimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (granularityUnit) {
      res["GranularityUnit"] = boost::any(*granularityUnit);
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
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<long>(boost::any_cast<long>(m["Granularity"]));
    }
    if (m.find("GranularityUnit") != m.end() && !m["GranularityUnit"].empty()) {
      granularityUnit = make_shared<string>(boost::any_cast<string>(m["GranularityUnit"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetIssuesRequestTimeRange() = default;
};
class GetIssuesRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> bizModule{};
  shared_ptr<GetIssuesRequestFilter> filter{};
  shared_ptr<string> name{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> orderType{};
  shared_ptr<string> os{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};
  shared_ptr<GetIssuesRequestTimeRange> timeRange{};

  GetIssuesRequest() {}

  explicit GetIssuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (bizModule) {
      res["BizModule"] = boost::any(*bizModule);
    }
    if (filter) {
      res["Filter"] = filter ? boost::any(filter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeRange) {
      res["TimeRange"] = timeRange ? boost::any(timeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("BizModule") != m.end() && !m["BizModule"].empty()) {
      bizModule = make_shared<string>(boost::any_cast<string>(m["BizModule"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(map<string, boost::any>) == m["Filter"].type()) {
        GetIssuesRequestFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Filter"]));
        filter = make_shared<GetIssuesRequestFilter>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TimeRange") != m.end() && !m["TimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["TimeRange"].type()) {
        GetIssuesRequestTimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TimeRange"]));
        timeRange = make_shared<GetIssuesRequestTimeRange>(model1);
      }
    }
  }


  virtual ~GetIssuesRequest() = default;
};
class GetIssuesShrinkRequestTimeRange : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> granularity{};
  shared_ptr<string> granularityUnit{};
  shared_ptr<long> startTime{};

  GetIssuesShrinkRequestTimeRange() {}

  explicit GetIssuesShrinkRequestTimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (granularityUnit) {
      res["GranularityUnit"] = boost::any(*granularityUnit);
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
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<long>(boost::any_cast<long>(m["Granularity"]));
    }
    if (m.find("GranularityUnit") != m.end() && !m["GranularityUnit"].empty()) {
      granularityUnit = make_shared<string>(boost::any_cast<string>(m["GranularityUnit"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetIssuesShrinkRequestTimeRange() = default;
};
class GetIssuesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> bizModule{};
  shared_ptr<string> filterShrink{};
  shared_ptr<string> name{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> orderType{};
  shared_ptr<string> os{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};
  shared_ptr<GetIssuesShrinkRequestTimeRange> timeRange{};

  GetIssuesShrinkRequest() {}

  explicit GetIssuesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (bizModule) {
      res["BizModule"] = boost::any(*bizModule);
    }
    if (filterShrink) {
      res["Filter"] = boost::any(*filterShrink);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeRange) {
      res["TimeRange"] = timeRange ? boost::any(timeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("BizModule") != m.end() && !m["BizModule"].empty()) {
      bizModule = make_shared<string>(boost::any_cast<string>(m["BizModule"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filterShrink = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TimeRange") != m.end() && !m["TimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["TimeRange"].type()) {
        GetIssuesShrinkRequestTimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TimeRange"]));
        timeRange = make_shared<GetIssuesShrinkRequestTimeRange>(model1);
      }
    }
  }


  virtual ~GetIssuesShrinkRequest() = default;
};
class GetIssuesResponseBodyModelItems : public Darabonba::Model {
public:
  shared_ptr<long> affectedUserCount{};
  shared_ptr<string> digestHash{};
  shared_ptr<string> domScore{};
  shared_ptr<long> errorColumn{};
  shared_ptr<long> errorCount{};
  shared_ptr<long> errorDeviceCount{};
  shared_ptr<double> errorDeviceRate{};
  shared_ptr<string> errorFileName{};
  shared_ptr<long> errorLine{};
  shared_ptr<string> errorName{};
  shared_ptr<double> errorRate{};
  shared_ptr<string> errorType{};
  shared_ptr<string> eventTime{};
  shared_ptr<string> firstVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> stack{};
  shared_ptr<long> status{};

  GetIssuesResponseBodyModelItems() {}

  explicit GetIssuesResponseBodyModelItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (affectedUserCount) {
      res["AffectedUserCount"] = boost::any(*affectedUserCount);
    }
    if (digestHash) {
      res["DigestHash"] = boost::any(*digestHash);
    }
    if (domScore) {
      res["DomScore"] = boost::any(*domScore);
    }
    if (errorColumn) {
      res["ErrorColumn"] = boost::any(*errorColumn);
    }
    if (errorCount) {
      res["ErrorCount"] = boost::any(*errorCount);
    }
    if (errorDeviceCount) {
      res["ErrorDeviceCount"] = boost::any(*errorDeviceCount);
    }
    if (errorDeviceRate) {
      res["ErrorDeviceRate"] = boost::any(*errorDeviceRate);
    }
    if (errorFileName) {
      res["ErrorFileName"] = boost::any(*errorFileName);
    }
    if (errorLine) {
      res["ErrorLine"] = boost::any(*errorLine);
    }
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (errorRate) {
      res["ErrorRate"] = boost::any(*errorRate);
    }
    if (errorType) {
      res["ErrorType"] = boost::any(*errorType);
    }
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    if (firstVersion) {
      res["FirstVersion"] = boost::any(*firstVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (stack) {
      res["Stack"] = boost::any(*stack);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AffectedUserCount") != m.end() && !m["AffectedUserCount"].empty()) {
      affectedUserCount = make_shared<long>(boost::any_cast<long>(m["AffectedUserCount"]));
    }
    if (m.find("DigestHash") != m.end() && !m["DigestHash"].empty()) {
      digestHash = make_shared<string>(boost::any_cast<string>(m["DigestHash"]));
    }
    if (m.find("DomScore") != m.end() && !m["DomScore"].empty()) {
      domScore = make_shared<string>(boost::any_cast<string>(m["DomScore"]));
    }
    if (m.find("ErrorColumn") != m.end() && !m["ErrorColumn"].empty()) {
      errorColumn = make_shared<long>(boost::any_cast<long>(m["ErrorColumn"]));
    }
    if (m.find("ErrorCount") != m.end() && !m["ErrorCount"].empty()) {
      errorCount = make_shared<long>(boost::any_cast<long>(m["ErrorCount"]));
    }
    if (m.find("ErrorDeviceCount") != m.end() && !m["ErrorDeviceCount"].empty()) {
      errorDeviceCount = make_shared<long>(boost::any_cast<long>(m["ErrorDeviceCount"]));
    }
    if (m.find("ErrorDeviceRate") != m.end() && !m["ErrorDeviceRate"].empty()) {
      errorDeviceRate = make_shared<double>(boost::any_cast<double>(m["ErrorDeviceRate"]));
    }
    if (m.find("ErrorFileName") != m.end() && !m["ErrorFileName"].empty()) {
      errorFileName = make_shared<string>(boost::any_cast<string>(m["ErrorFileName"]));
    }
    if (m.find("ErrorLine") != m.end() && !m["ErrorLine"].empty()) {
      errorLine = make_shared<long>(boost::any_cast<long>(m["ErrorLine"]));
    }
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("ErrorRate") != m.end() && !m["ErrorRate"].empty()) {
      errorRate = make_shared<double>(boost::any_cast<double>(m["ErrorRate"]));
    }
    if (m.find("ErrorType") != m.end() && !m["ErrorType"].empty()) {
      errorType = make_shared<string>(boost::any_cast<string>(m["ErrorType"]));
    }
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<string>(boost::any_cast<string>(m["EventTime"]));
    }
    if (m.find("FirstVersion") != m.end() && !m["FirstVersion"].empty()) {
      firstVersion = make_shared<string>(boost::any_cast<string>(m["FirstVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Stack") != m.end() && !m["Stack"].empty()) {
      stack = make_shared<string>(boost::any_cast<string>(m["Stack"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~GetIssuesResponseBodyModelItems() = default;
};
class GetIssuesResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<GetIssuesResponseBodyModelItems>> items{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pages{};
  shared_ptr<long> total{};

  GetIssuesResponseBodyModel() {}

  explicit GetIssuesResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<GetIssuesResponseBodyModelItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetIssuesResponseBodyModelItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GetIssuesResponseBodyModelItems>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetIssuesResponseBodyModel() = default;
};
class GetIssuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> args{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<GetIssuesResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetIssuesResponseBody() {}

  explicit GetIssuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Args"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      args = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        GetIssuesResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<GetIssuesResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetIssuesResponseBody() = default;
};
class GetIssuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetIssuesResponseBody> body{};

  GetIssuesResponse() {}

  explicit GetIssuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetIssuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIssuesResponseBody>(model1);
      }
    }
  }


  virtual ~GetIssuesResponse() = default;
};
class GetSymbolicFilesRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> buildId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> exportStatus{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<string> os{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTime{};
  shared_ptr<string> uuid{};

  GetSymbolicFilesRequest() {}

  explicit GetSymbolicFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (buildId) {
      res["BuildId"] = boost::any(*buildId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (exportStatus) {
      res["ExportStatus"] = boost::any(*exportStatus);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("BuildId") != m.end() && !m["BuildId"].empty()) {
      buildId = make_shared<string>(boost::any_cast<string>(m["BuildId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ExportStatus") != m.end() && !m["ExportStatus"].empty()) {
      exportStatus = make_shared<string>(boost::any_cast<string>(m["ExportStatus"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~GetSymbolicFilesRequest() = default;
};
class GetSymbolicFilesResponseBodyModelItems : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> buildId{};
  shared_ptr<string> exportStatus{};
  shared_ptr<string> fileName{};
  shared_ptr<string> filePath{};
  shared_ptr<string> fileType{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> id{};
  shared_ptr<string> status{};
  shared_ptr<string> uuid{};

  GetSymbolicFilesResponseBodyModelItems() {}

  explicit GetSymbolicFilesResponseBodyModelItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (buildId) {
      res["BuildId"] = boost::any(*buildId);
    }
    if (exportStatus) {
      res["ExportStatus"] = boost::any(*exportStatus);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("BuildId") != m.end() && !m["BuildId"].empty()) {
      buildId = make_shared<string>(boost::any_cast<string>(m["BuildId"]));
    }
    if (m.find("ExportStatus") != m.end() && !m["ExportStatus"].empty()) {
      exportStatus = make_shared<string>(boost::any_cast<string>(m["ExportStatus"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~GetSymbolicFilesResponseBodyModelItems() = default;
};
class GetSymbolicFilesResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<GetSymbolicFilesResponseBodyModelItems>> items{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pages{};
  shared_ptr<long> total{};

  GetSymbolicFilesResponseBodyModel() {}

  explicit GetSymbolicFilesResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<GetSymbolicFilesResponseBodyModelItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSymbolicFilesResponseBodyModelItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GetSymbolicFilesResponseBodyModelItems>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetSymbolicFilesResponseBodyModel() = default;
};
class GetSymbolicFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> args{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<GetSymbolicFilesResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetSymbolicFilesResponseBody() {}

  explicit GetSymbolicFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Args"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      args = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        GetSymbolicFilesResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<GetSymbolicFilesResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetSymbolicFilesResponseBody() = default;
};
class GetSymbolicFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSymbolicFilesResponseBody> body{};

  GetSymbolicFilesResponse() {}

  explicit GetSymbolicFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSymbolicFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSymbolicFilesResponseBody>(model1);
      }
    }
  }


  virtual ~GetSymbolicFilesResponse() = default;
};
class RequestUploadTokenRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> os{};

  RequestUploadTokenRequest() {}

  explicit RequestUploadTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
  }


  virtual ~RequestUploadTokenRequest() = default;
};
class RequestUploadTokenResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> uploadBucket{};
  shared_ptr<string> uploadDir{};

  RequestUploadTokenResponseBodyModel() {}

  explicit RequestUploadTokenResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (uploadBucket) {
      res["UploadBucket"] = boost::any(*uploadBucket);
    }
    if (uploadDir) {
      res["UploadDir"] = boost::any(*uploadDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("UploadBucket") != m.end() && !m["UploadBucket"].empty()) {
      uploadBucket = make_shared<string>(boost::any_cast<string>(m["UploadBucket"]));
    }
    if (m.find("UploadDir") != m.end() && !m["UploadDir"].empty()) {
      uploadDir = make_shared<string>(boost::any_cast<string>(m["UploadDir"]));
    }
  }


  virtual ~RequestUploadTokenResponseBodyModel() = default;
};
class RequestUploadTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> args{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<RequestUploadTokenResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RequestUploadTokenResponseBody() {}

  explicit RequestUploadTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Args"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      args = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        RequestUploadTokenResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<RequestUploadTokenResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RequestUploadTokenResponseBody() = default;
};
class RequestUploadTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestUploadTokenResponseBody> body{};

  RequestUploadTokenResponse() {}

  explicit RequestUploadTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestUploadTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestUploadTokenResponseBody>(model1);
      }
    }
  }


  virtual ~RequestUploadTokenResponse() = default;
};
class SubmitSymbolicRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> buildId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> filePath{};
  shared_ptr<string> fileType{};
  shared_ptr<string> os{};
  shared_ptr<string> uuid{};

  SubmitSymbolicRequest() {}

  explicit SubmitSymbolicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (buildId) {
      res["BuildId"] = boost::any(*buildId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("BuildId") != m.end() && !m["BuildId"].empty()) {
      buildId = make_shared<string>(boost::any_cast<string>(m["BuildId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~SubmitSymbolicRequest() = default;
};
class SubmitSymbolicResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> args{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitSymbolicResponseBody() {}

  explicit SubmitSymbolicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Args"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      args = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
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


  virtual ~SubmitSymbolicResponseBody() = default;
};
class SubmitSymbolicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitSymbolicResponseBody> body{};

  SubmitSymbolicResponse() {}

  explicit SubmitSymbolicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitSymbolicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitSymbolicResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitSymbolicResponse() = default;
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
  GetErrorResponse getErrorWithOptions(shared_ptr<GetErrorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetErrorResponse getError(shared_ptr<GetErrorRequest> request);
  GetErrorsResponse getErrorsWithOptions(shared_ptr<GetErrorsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetErrorsResponse getErrors(shared_ptr<GetErrorsRequest> request);
  GetIssueResponse getIssueWithOptions(shared_ptr<GetIssueRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIssueResponse getIssue(shared_ptr<GetIssueRequest> request);
  GetIssuesResponse getIssuesWithOptions(shared_ptr<GetIssuesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIssuesResponse getIssues(shared_ptr<GetIssuesRequest> request);
  GetSymbolicFilesResponse getSymbolicFilesWithOptions(shared_ptr<GetSymbolicFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSymbolicFilesResponse getSymbolicFiles(shared_ptr<GetSymbolicFilesRequest> request);
  RequestUploadTokenResponse requestUploadTokenWithOptions(shared_ptr<RequestUploadTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestUploadTokenResponse requestUploadToken(shared_ptr<RequestUploadTokenRequest> request);
  SubmitSymbolicResponse submitSymbolicWithOptions(shared_ptr<SubmitSymbolicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitSymbolicResponse submitSymbolic(shared_ptr<SubmitSymbolicRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Emas-appmonitor20190611

#endif
