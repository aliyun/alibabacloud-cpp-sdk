// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_RTC20180111_H_
#define ALIBABACLOUD_RTC20180111_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Rtc20180111 {
class AddRecordTemplateRequestBackgrounds : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  AddRecordTemplateRequestBackgrounds() {}

  explicit AddRecordTemplateRequestBackgrounds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~AddRecordTemplateRequestBackgrounds() = default;
};
class AddRecordTemplateRequestClockWidgets : public Darabonba::Model {
public:
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  AddRecordTemplateRequestClockWidgets() {}

  explicit AddRecordTemplateRequestClockWidgets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~AddRecordTemplateRequestClockWidgets() = default;
};
class AddRecordTemplateRequestWatermarks : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  AddRecordTemplateRequestWatermarks() {}

  explicit AddRecordTemplateRequestWatermarks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~AddRecordTemplateRequestWatermarks() = default;
};
class AddRecordTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> backgroundColor{};
  shared_ptr<vector<AddRecordTemplateRequestBackgrounds>> backgrounds{};
  shared_ptr<vector<AddRecordTemplateRequestClockWidgets>> clockWidgets{};
  shared_ptr<long> delayStopTime{};
  shared_ptr<bool> enableM3u8DateTime{};
  shared_ptr<long> fileSplitInterval{};
  shared_ptr<vector<string>> formats{};
  shared_ptr<string> httpCallbackUrl{};
  shared_ptr<vector<long>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<string> mnsQueue{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> ossFilePrefix{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> taskProfile{};
  shared_ptr<vector<AddRecordTemplateRequestWatermarks>> watermarks{};

  AddRecordTemplateRequest() {}

  explicit AddRecordTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (backgroundColor) {
      res["BackgroundColor"] = boost::any(*backgroundColor);
    }
    if (backgrounds) {
      vector<boost::any> temp1;
      for(auto item1:*backgrounds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backgrounds"] = boost::any(temp1);
    }
    if (clockWidgets) {
      vector<boost::any> temp1;
      for(auto item1:*clockWidgets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClockWidgets"] = boost::any(temp1);
    }
    if (delayStopTime) {
      res["DelayStopTime"] = boost::any(*delayStopTime);
    }
    if (enableM3u8DateTime) {
      res["EnableM3u8DateTime"] = boost::any(*enableM3u8DateTime);
    }
    if (fileSplitInterval) {
      res["FileSplitInterval"] = boost::any(*fileSplitInterval);
    }
    if (formats) {
      res["Formats"] = boost::any(*formats);
    }
    if (httpCallbackUrl) {
      res["HttpCallbackUrl"] = boost::any(*httpCallbackUrl);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (mnsQueue) {
      res["MnsQueue"] = boost::any(*mnsQueue);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (taskProfile) {
      res["TaskProfile"] = boost::any(*taskProfile);
    }
    if (watermarks) {
      vector<boost::any> temp1;
      for(auto item1:*watermarks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Watermarks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BackgroundColor") != m.end() && !m["BackgroundColor"].empty()) {
      backgroundColor = make_shared<long>(boost::any_cast<long>(m["BackgroundColor"]));
    }
    if (m.find("Backgrounds") != m.end() && !m["Backgrounds"].empty()) {
      if (typeid(vector<boost::any>) == m["Backgrounds"].type()) {
        vector<AddRecordTemplateRequestBackgrounds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backgrounds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddRecordTemplateRequestBackgrounds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backgrounds = make_shared<vector<AddRecordTemplateRequestBackgrounds>>(expect1);
      }
    }
    if (m.find("ClockWidgets") != m.end() && !m["ClockWidgets"].empty()) {
      if (typeid(vector<boost::any>) == m["ClockWidgets"].type()) {
        vector<AddRecordTemplateRequestClockWidgets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClockWidgets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddRecordTemplateRequestClockWidgets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clockWidgets = make_shared<vector<AddRecordTemplateRequestClockWidgets>>(expect1);
      }
    }
    if (m.find("DelayStopTime") != m.end() && !m["DelayStopTime"].empty()) {
      delayStopTime = make_shared<long>(boost::any_cast<long>(m["DelayStopTime"]));
    }
    if (m.find("EnableM3u8DateTime") != m.end() && !m["EnableM3u8DateTime"].empty()) {
      enableM3u8DateTime = make_shared<bool>(boost::any_cast<bool>(m["EnableM3u8DateTime"]));
    }
    if (m.find("FileSplitInterval") != m.end() && !m["FileSplitInterval"].empty()) {
      fileSplitInterval = make_shared<long>(boost::any_cast<long>(m["FileSplitInterval"]));
    }
    if (m.find("Formats") != m.end() && !m["Formats"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Formats"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Formats"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      formats = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HttpCallbackUrl") != m.end() && !m["HttpCallbackUrl"].empty()) {
      httpCallbackUrl = make_shared<string>(boost::any_cast<string>(m["HttpCallbackUrl"]));
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      layoutIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("MnsQueue") != m.end() && !m["MnsQueue"].empty()) {
      mnsQueue = make_shared<string>(boost::any_cast<string>(m["MnsQueue"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TaskProfile") != m.end() && !m["TaskProfile"].empty()) {
      taskProfile = make_shared<string>(boost::any_cast<string>(m["TaskProfile"]));
    }
    if (m.find("Watermarks") != m.end() && !m["Watermarks"].empty()) {
      if (typeid(vector<boost::any>) == m["Watermarks"].type()) {
        vector<AddRecordTemplateRequestWatermarks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Watermarks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddRecordTemplateRequestWatermarks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        watermarks = make_shared<vector<AddRecordTemplateRequestWatermarks>>(expect1);
      }
    }
  }


  virtual ~AddRecordTemplateRequest() = default;
};
class AddRecordTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  AddRecordTemplateResponseBody() {}

  explicit AddRecordTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~AddRecordTemplateResponseBody() = default;
};
class AddRecordTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddRecordTemplateResponseBody> body{};

  AddRecordTemplateResponse() {}

  explicit AddRecordTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddRecordTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddRecordTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~AddRecordTemplateResponse() = default;
};
class CreateAutoLiveStreamRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callBack{};
  shared_ptr<vector<string>> channelIdPrefixes{};
  shared_ptr<vector<string>> channelIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> playDomain{};
  shared_ptr<string> ruleName{};

  CreateAutoLiveStreamRuleRequest() {}

  explicit CreateAutoLiveStreamRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callBack) {
      res["CallBack"] = boost::any(*callBack);
    }
    if (channelIdPrefixes) {
      res["ChannelIdPrefixes"] = boost::any(*channelIdPrefixes);
    }
    if (channelIds) {
      res["ChannelIds"] = boost::any(*channelIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playDomain) {
      res["PlayDomain"] = boost::any(*playDomain);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallBack") != m.end() && !m["CallBack"].empty()) {
      callBack = make_shared<string>(boost::any_cast<string>(m["CallBack"]));
    }
    if (m.find("ChannelIdPrefixes") != m.end() && !m["ChannelIdPrefixes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelIdPrefixes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelIdPrefixes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channelIdPrefixes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ChannelIds") != m.end() && !m["ChannelIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channelIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlayDomain") != m.end() && !m["PlayDomain"].empty()) {
      playDomain = make_shared<string>(boost::any_cast<string>(m["PlayDomain"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~CreateAutoLiveStreamRuleRequest() = default;
};
class CreateAutoLiveStreamRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> ruleId{};

  CreateAutoLiveStreamRuleResponseBody() {}

  explicit CreateAutoLiveStreamRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~CreateAutoLiveStreamRuleResponseBody() = default;
};
class CreateAutoLiveStreamRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAutoLiveStreamRuleResponseBody> body{};

  CreateAutoLiveStreamRuleResponse() {}

  explicit CreateAutoLiveStreamRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAutoLiveStreamRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAutoLiveStreamRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAutoLiveStreamRuleResponse() = default;
};
class CreateEventSubscribeRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> channelId{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> events{};
  shared_ptr<bool> needCallbackAuth{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> role{};
  shared_ptr<vector<string>> users{};

  CreateEventSubscribeRequest() {}

  explicit CreateEventSubscribeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (events) {
      res["Events"] = boost::any(*events);
    }
    if (needCallbackAuth) {
      res["NeedCallbackAuth"] = boost::any(*needCallbackAuth);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Events"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      events = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NeedCallbackAuth") != m.end() && !m["NeedCallbackAuth"].empty()) {
      needCallbackAuth = make_shared<bool>(boost::any_cast<bool>(m["NeedCallbackAuth"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<long>(boost::any_cast<long>(m["Role"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Users"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      users = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateEventSubscribeRequest() = default;
};
class CreateEventSubscribeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> subscribeId{};

  CreateEventSubscribeResponseBody() {}

  explicit CreateEventSubscribeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subscribeId) {
      res["SubscribeId"] = boost::any(*subscribeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubscribeId") != m.end() && !m["SubscribeId"].empty()) {
      subscribeId = make_shared<string>(boost::any_cast<string>(m["SubscribeId"]));
    }
  }


  virtual ~CreateEventSubscribeResponseBody() = default;
};
class CreateEventSubscribeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEventSubscribeResponseBody> body{};

  CreateEventSubscribeResponse() {}

  explicit CreateEventSubscribeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEventSubscribeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEventSubscribeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEventSubscribeResponse() = default;
};
class CreateMPULayoutRequestPanes : public Darabonba::Model {
public:
  shared_ptr<double> height{};
  shared_ptr<long> majorPane{};
  shared_ptr<long> paneId{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  CreateMPULayoutRequestPanes() {}

  explicit CreateMPULayoutRequestPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (majorPane) {
      res["MajorPane"] = boost::any(*majorPane);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("MajorPane") != m.end() && !m["MajorPane"].empty()) {
      majorPane = make_shared<long>(boost::any_cast<long>(m["MajorPane"]));
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~CreateMPULayoutRequestPanes() = default;
};
class CreateMPULayoutRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> audioMixCount{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<CreateMPULayoutRequestPanes>> panes{};

  CreateMPULayoutRequest() {}

  explicit CreateMPULayoutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (audioMixCount) {
      res["AudioMixCount"] = boost::any(*audioMixCount);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (panes) {
      vector<boost::any> temp1;
      for(auto item1:*panes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Panes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AudioMixCount") != m.end() && !m["AudioMixCount"].empty()) {
      audioMixCount = make_shared<long>(boost::any_cast<long>(m["AudioMixCount"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Panes") != m.end() && !m["Panes"].empty()) {
      if (typeid(vector<boost::any>) == m["Panes"].type()) {
        vector<CreateMPULayoutRequestPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Panes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMPULayoutRequestPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        panes = make_shared<vector<CreateMPULayoutRequestPanes>>(expect1);
      }
    }
  }


  virtual ~CreateMPULayoutRequest() = default;
};
class CreateMPULayoutResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> layoutId{};
  shared_ptr<string> requestId{};

  CreateMPULayoutResponseBody() {}

  explicit CreateMPULayoutResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layoutId) {
      res["LayoutId"] = boost::any(*layoutId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LayoutId") != m.end() && !m["LayoutId"].empty()) {
      layoutId = make_shared<long>(boost::any_cast<long>(m["LayoutId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateMPULayoutResponseBody() = default;
};
class CreateMPULayoutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMPULayoutResponseBody> body{};

  CreateMPULayoutResponse() {}

  explicit CreateMPULayoutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMPULayoutResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMPULayoutResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMPULayoutResponse() = default;
};
class DeleteAutoLiveStreamRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> ruleId{};

  DeleteAutoLiveStreamRuleRequest() {}

  explicit DeleteAutoLiveStreamRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DeleteAutoLiveStreamRuleRequest() = default;
};
class DeleteAutoLiveStreamRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAutoLiveStreamRuleResponseBody() {}

  explicit DeleteAutoLiveStreamRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAutoLiveStreamRuleResponseBody() = default;
};
class DeleteAutoLiveStreamRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAutoLiveStreamRuleResponseBody> body{};

  DeleteAutoLiveStreamRuleResponse() {}

  explicit DeleteAutoLiveStreamRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAutoLiveStreamRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAutoLiveStreamRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAutoLiveStreamRuleResponse() = default;
};
class DeleteChannelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> ownerId{};

  DeleteChannelRequest() {}

  explicit DeleteChannelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DeleteChannelRequest() = default;
};
class DeleteChannelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteChannelResponseBody() {}

  explicit DeleteChannelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteChannelResponseBody() = default;
};
class DeleteChannelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteChannelResponseBody> body{};

  DeleteChannelResponse() {}

  explicit DeleteChannelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteChannelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteChannelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteChannelResponse() = default;
};
class DeleteEventSubscribeRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> subscribeId{};

  DeleteEventSubscribeRequest() {}

  explicit DeleteEventSubscribeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (subscribeId) {
      res["SubscribeId"] = boost::any(*subscribeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SubscribeId") != m.end() && !m["SubscribeId"].empty()) {
      subscribeId = make_shared<string>(boost::any_cast<string>(m["SubscribeId"]));
    }
  }


  virtual ~DeleteEventSubscribeRequest() = default;
};
class DeleteEventSubscribeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteEventSubscribeResponseBody() {}

  explicit DeleteEventSubscribeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteEventSubscribeResponseBody() = default;
};
class DeleteEventSubscribeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEventSubscribeResponseBody> body{};

  DeleteEventSubscribeResponse() {}

  explicit DeleteEventSubscribeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEventSubscribeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEventSubscribeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEventSubscribeResponse() = default;
};
class DeleteMPULayoutRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> layoutId{};
  shared_ptr<long> ownerId{};

  DeleteMPULayoutRequest() {}

  explicit DeleteMPULayoutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (layoutId) {
      res["LayoutId"] = boost::any(*layoutId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LayoutId") != m.end() && !m["LayoutId"].empty()) {
      layoutId = make_shared<long>(boost::any_cast<long>(m["LayoutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DeleteMPULayoutRequest() = default;
};
class DeleteMPULayoutResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteMPULayoutResponseBody() {}

  explicit DeleteMPULayoutResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteMPULayoutResponseBody() = default;
};
class DeleteMPULayoutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMPULayoutResponseBody> body{};

  DeleteMPULayoutResponse() {}

  explicit DeleteMPULayoutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMPULayoutResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMPULayoutResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMPULayoutResponse() = default;
};
class DeleteRecordTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> templateId{};

  DeleteRecordTemplateRequest() {}

  explicit DeleteRecordTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DeleteRecordTemplateRequest() = default;
};
class DeleteRecordTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRecordTemplateResponseBody() {}

  explicit DeleteRecordTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteRecordTemplateResponseBody() = default;
};
class DeleteRecordTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRecordTemplateResponseBody> body{};

  DeleteRecordTemplateResponse() {}

  explicit DeleteRecordTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRecordTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRecordTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRecordTemplateResponse() = default;
};
class DescribeAppKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};

  DescribeAppKeyRequest() {}

  explicit DescribeAppKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DescribeAppKeyRequest() = default;
};
class DescribeAppKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> requestId{};

  DescribeAppKeyResponseBody() {}

  explicit DescribeAppKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAppKeyResponseBody() = default;
};
class DescribeAppKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppKeyResponseBody> body{};

  DescribeAppKeyResponse() {}

  explicit DescribeAppKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAppKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppKeyResponse() = default;
};
class DescribeAppsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> order{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  DescribeAppsRequest() {}

  explicit DescribeAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeAppsRequest() = default;
};
class DescribeAppsResponseBodyAppListAppServiceAreas : public Darabonba::Model {
public:
  shared_ptr<vector<string>> serviceArea{};

  DescribeAppsResponseBodyAppListAppServiceAreas() {}

  explicit DescribeAppsResponseBodyAppListAppServiceAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServiceArea"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServiceArea"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serviceArea = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAppsResponseBodyAppListAppServiceAreas() = default;
};
class DescribeAppsResponseBodyAppListApp : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> billType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> region{};
  shared_ptr<DescribeAppsResponseBodyAppListAppServiceAreas> serviceAreas{};
  shared_ptr<long> status{};

  DescribeAppsResponseBodyAppListApp() {}

  explicit DescribeAppsResponseBodyAppListApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (billType) {
      res["BillType"] = boost::any(*billType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (serviceAreas) {
      res["ServiceAreas"] = serviceAreas ? boost::any(serviceAreas->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("BillType") != m.end() && !m["BillType"].empty()) {
      billType = make_shared<string>(boost::any_cast<string>(m["BillType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ServiceAreas") != m.end() && !m["ServiceAreas"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceAreas"].type()) {
        DescribeAppsResponseBodyAppListAppServiceAreas model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceAreas"]));
        serviceAreas = make_shared<DescribeAppsResponseBodyAppListAppServiceAreas>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeAppsResponseBodyAppListApp() = default;
};
class DescribeAppsResponseBodyAppList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAppsResponseBodyAppListApp>> app{};

  DescribeAppsResponseBodyAppList() {}

  explicit DescribeAppsResponseBodyAppList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      vector<boost::any> temp1;
      for(auto item1:*app){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["App"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(vector<boost::any>) == m["App"].type()) {
        vector<DescribeAppsResponseBodyAppListApp> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["App"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppsResponseBodyAppListApp model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        app = make_shared<vector<DescribeAppsResponseBodyAppListApp>>(expect1);
      }
    }
  }


  virtual ~DescribeAppsResponseBodyAppList() = default;
};
class DescribeAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAppsResponseBodyAppList> appList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};

  DescribeAppsResponseBody() {}

  explicit DescribeAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appList) {
      res["AppList"] = appList ? boost::any(appList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppList") != m.end() && !m["AppList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppList"].type()) {
        DescribeAppsResponseBodyAppList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppList"]));
        appList = make_shared<DescribeAppsResponseBodyAppList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeAppsResponseBody() = default;
};
class DescribeAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppsResponseBody> body{};

  DescribeAppsResponse() {}

  explicit DescribeAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppsResponse() = default;
};
class DescribeAutoLiveStreamRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};

  DescribeAutoLiveStreamRuleRequest() {}

  explicit DescribeAutoLiveStreamRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DescribeAutoLiveStreamRuleRequest() = default;
};
class DescribeAutoLiveStreamRuleResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<string> callBack{};
  shared_ptr<vector<string>> channelIdPrefixes{};
  shared_ptr<vector<string>> channelIds{};
  shared_ptr<string> createTime{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<string> playDomain{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> status{};

  DescribeAutoLiveStreamRuleResponseBodyRules() {}

  explicit DescribeAutoLiveStreamRuleResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callBack) {
      res["CallBack"] = boost::any(*callBack);
    }
    if (channelIdPrefixes) {
      res["ChannelIdPrefixes"] = boost::any(*channelIdPrefixes);
    }
    if (channelIds) {
      res["ChannelIds"] = boost::any(*channelIds);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (playDomain) {
      res["PlayDomain"] = boost::any(*playDomain);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallBack") != m.end() && !m["CallBack"].empty()) {
      callBack = make_shared<string>(boost::any_cast<string>(m["CallBack"]));
    }
    if (m.find("ChannelIdPrefixes") != m.end() && !m["ChannelIdPrefixes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelIdPrefixes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelIdPrefixes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channelIdPrefixes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ChannelIds") != m.end() && !m["ChannelIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channelIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("PlayDomain") != m.end() && !m["PlayDomain"].empty()) {
      playDomain = make_shared<string>(boost::any_cast<string>(m["PlayDomain"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeAutoLiveStreamRuleResponseBodyRules() = default;
};
class DescribeAutoLiveStreamRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeAutoLiveStreamRuleResponseBodyRules>> rules{};

  DescribeAutoLiveStreamRuleResponseBody() {}

  explicit DescribeAutoLiveStreamRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<DescribeAutoLiveStreamRuleResponseBodyRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAutoLiveStreamRuleResponseBodyRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<DescribeAutoLiveStreamRuleResponseBodyRules>>(expect1);
      }
    }
  }


  virtual ~DescribeAutoLiveStreamRuleResponseBody() = default;
};
class DescribeAutoLiveStreamRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAutoLiveStreamRuleResponseBody> body{};

  DescribeAutoLiveStreamRuleResponse() {}

  explicit DescribeAutoLiveStreamRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAutoLiveStreamRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAutoLiveStreamRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAutoLiveStreamRuleResponse() = default;
};
class DescribeCallListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> endTs{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryMode{};
  shared_ptr<long> startTs{};
  shared_ptr<string> userId{};

  DescribeCallListRequest() {}

  explicit DescribeCallListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryMode) {
      res["QueryMode"] = boost::any(*queryMode);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryMode") != m.end() && !m["QueryMode"].empty()) {
      queryMode = make_shared<string>(boost::any_cast<string>(m["QueryMode"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeCallListRequest() = default;
};
class DescribeCallListResponseBodyCallList : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> badExpUserCnt{};
  shared_ptr<string> callStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};
  shared_ptr<long> userCnt{};

  DescribeCallListResponseBodyCallList() {}

  explicit DescribeCallListResponseBodyCallList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (badExpUserCnt) {
      res["BadExpUserCnt"] = boost::any(*badExpUserCnt);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (userCnt) {
      res["UserCnt"] = boost::any(*userCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BadExpUserCnt") != m.end() && !m["BadExpUserCnt"].empty()) {
      badExpUserCnt = make_shared<long>(boost::any_cast<long>(m["BadExpUserCnt"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("UserCnt") != m.end() && !m["UserCnt"].empty()) {
      userCnt = make_shared<long>(boost::any_cast<long>(m["UserCnt"]));
    }
  }


  virtual ~DescribeCallListResponseBodyCallList() = default;
};
class DescribeCallListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCallListResponseBodyCallList>> callList{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCnt{};

  DescribeCallListResponseBody() {}

  explicit DescribeCallListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callList) {
      vector<boost::any> temp1;
      for(auto item1:*callList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CallList"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCnt) {
      res["TotalCnt"] = boost::any(*totalCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallList") != m.end() && !m["CallList"].empty()) {
      if (typeid(vector<boost::any>) == m["CallList"].type()) {
        vector<DescribeCallListResponseBodyCallList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CallList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCallListResponseBodyCallList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        callList = make_shared<vector<DescribeCallListResponseBodyCallList>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCnt") != m.end() && !m["TotalCnt"].empty()) {
      totalCnt = make_shared<long>(boost::any_cast<long>(m["TotalCnt"]));
    }
  }


  virtual ~DescribeCallListResponseBody() = default;
};
class DescribeCallListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCallListResponseBody> body{};

  DescribeCallListResponse() {}

  explicit DescribeCallListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCallListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCallListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCallListResponse() = default;
};
class DescribeChannelParticipantsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<string> order{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeChannelParticipantsRequest() {}

  explicit DescribeChannelParticipantsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeChannelParticipantsRequest() = default;
};
class DescribeChannelParticipantsResponseBodyUserList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> user{};

  DescribeChannelParticipantsResponseBodyUserList() {}

  explicit DescribeChannelParticipantsResponseBodyUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("User") != m.end() && !m["User"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["User"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["User"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      user = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeChannelParticipantsResponseBodyUserList() = default;
};
class DescribeChannelParticipantsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> timestamp{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};
  shared_ptr<DescribeChannelParticipantsResponseBodyUserList> userList{};

  DescribeChannelParticipantsResponseBody() {}

  explicit DescribeChannelParticipantsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (userList) {
      res["UserList"] = userList ? boost::any(userList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("UserList") != m.end() && !m["UserList"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserList"].type()) {
        DescribeChannelParticipantsResponseBodyUserList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserList"]));
        userList = make_shared<DescribeChannelParticipantsResponseBodyUserList>(model1);
      }
    }
  }


  virtual ~DescribeChannelParticipantsResponseBody() = default;
};
class DescribeChannelParticipantsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelParticipantsResponseBody> body{};

  DescribeChannelParticipantsResponse() {}

  explicit DescribeChannelParticipantsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeChannelParticipantsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelParticipantsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelParticipantsResponse() = default;
};
class DescribeChannelUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> ownerId{};

  DescribeChannelUsersRequest() {}

  explicit DescribeChannelUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DescribeChannelUsersRequest() = default;
};
class DescribeChannelUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> channelProfile{};
  shared_ptr<long> commTotalNum{};
  shared_ptr<vector<string>> interactiveUserList{};
  shared_ptr<long> interactiveUserNum{};
  shared_ptr<bool> isChannelExist{};
  shared_ptr<vector<string>> liveUserList{};
  shared_ptr<long> liveUserNum{};
  shared_ptr<string> requestId{};
  shared_ptr<long> timestamp{};
  shared_ptr<vector<string>> userList{};

  DescribeChannelUsersResponseBody() {}

  explicit DescribeChannelUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelProfile) {
      res["ChannelProfile"] = boost::any(*channelProfile);
    }
    if (commTotalNum) {
      res["CommTotalNum"] = boost::any(*commTotalNum);
    }
    if (interactiveUserList) {
      res["InteractiveUserList"] = boost::any(*interactiveUserList);
    }
    if (interactiveUserNum) {
      res["InteractiveUserNum"] = boost::any(*interactiveUserNum);
    }
    if (isChannelExist) {
      res["IsChannelExist"] = boost::any(*isChannelExist);
    }
    if (liveUserList) {
      res["LiveUserList"] = boost::any(*liveUserList);
    }
    if (liveUserNum) {
      res["LiveUserNum"] = boost::any(*liveUserNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (userList) {
      res["UserList"] = boost::any(*userList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelProfile") != m.end() && !m["ChannelProfile"].empty()) {
      channelProfile = make_shared<long>(boost::any_cast<long>(m["ChannelProfile"]));
    }
    if (m.find("CommTotalNum") != m.end() && !m["CommTotalNum"].empty()) {
      commTotalNum = make_shared<long>(boost::any_cast<long>(m["CommTotalNum"]));
    }
    if (m.find("InteractiveUserList") != m.end() && !m["InteractiveUserList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InteractiveUserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InteractiveUserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      interactiveUserList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InteractiveUserNum") != m.end() && !m["InteractiveUserNum"].empty()) {
      interactiveUserNum = make_shared<long>(boost::any_cast<long>(m["InteractiveUserNum"]));
    }
    if (m.find("IsChannelExist") != m.end() && !m["IsChannelExist"].empty()) {
      isChannelExist = make_shared<bool>(boost::any_cast<bool>(m["IsChannelExist"]));
    }
    if (m.find("LiveUserList") != m.end() && !m["LiveUserList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LiveUserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LiveUserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      liveUserList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LiveUserNum") != m.end() && !m["LiveUserNum"].empty()) {
      liveUserNum = make_shared<long>(boost::any_cast<long>(m["LiveUserNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("UserList") != m.end() && !m["UserList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeChannelUsersResponseBody() = default;
};
class DescribeChannelUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelUsersResponseBody> body{};

  DescribeChannelUsersResponse() {}

  explicit DescribeChannelUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeChannelUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelUsersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelUsersResponse() = default;
};
class DescribeMPULayoutInfoListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> layoutId{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeMPULayoutInfoListRequest() {}

  explicit DescribeMPULayoutInfoListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (layoutId) {
      res["LayoutId"] = boost::any(*layoutId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LayoutId") != m.end() && !m["LayoutId"].empty()) {
      layoutId = make_shared<long>(boost::any_cast<long>(m["LayoutId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeMPULayoutInfoListRequest() = default;
};
class DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes : public Darabonba::Model {
public:
  shared_ptr<double> height{};
  shared_ptr<long> majorPane{};
  shared_ptr<long> paneId{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes() {}

  explicit DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (majorPane) {
      res["MajorPane"] = boost::any(*majorPane);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("MajorPane") != m.end() && !m["MajorPane"].empty()) {
      majorPane = make_shared<long>(boost::any_cast<long>(m["MajorPane"]));
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes() = default;
};
class DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes>> panes{};

  DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes() {}

  explicit DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (panes) {
      vector<boost::any> temp1;
      for(auto item1:*panes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Panes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Panes") != m.end() && !m["Panes"].empty()) {
      if (typeid(vector<boost::any>) == m["Panes"].type()) {
        vector<DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Panes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        panes = make_shared<vector<DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes>>(expect1);
      }
    }
  }


  virtual ~DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes() = default;
};
class DescribeMPULayoutInfoListResponseBodyLayoutsLayout : public Darabonba::Model {
public:
  shared_ptr<long> audioMixCount{};
  shared_ptr<long> layoutId{};
  shared_ptr<string> name{};
  shared_ptr<DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes> panes{};

  DescribeMPULayoutInfoListResponseBodyLayoutsLayout() {}

  explicit DescribeMPULayoutInfoListResponseBodyLayoutsLayout(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioMixCount) {
      res["AudioMixCount"] = boost::any(*audioMixCount);
    }
    if (layoutId) {
      res["LayoutId"] = boost::any(*layoutId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (panes) {
      res["Panes"] = panes ? boost::any(panes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioMixCount") != m.end() && !m["AudioMixCount"].empty()) {
      audioMixCount = make_shared<long>(boost::any_cast<long>(m["AudioMixCount"]));
    }
    if (m.find("LayoutId") != m.end() && !m["LayoutId"].empty()) {
      layoutId = make_shared<long>(boost::any_cast<long>(m["LayoutId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Panes") != m.end() && !m["Panes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Panes"].type()) {
        DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Panes"]));
        panes = make_shared<DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes>(model1);
      }
    }
  }


  virtual ~DescribeMPULayoutInfoListResponseBodyLayoutsLayout() = default;
};
class DescribeMPULayoutInfoListResponseBodyLayouts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMPULayoutInfoListResponseBodyLayoutsLayout>> layout{};

  DescribeMPULayoutInfoListResponseBodyLayouts() {}

  explicit DescribeMPULayoutInfoListResponseBodyLayouts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layout) {
      vector<boost::any> temp1;
      for(auto item1:*layout){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Layout"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Layout") != m.end() && !m["Layout"].empty()) {
      if (typeid(vector<boost::any>) == m["Layout"].type()) {
        vector<DescribeMPULayoutInfoListResponseBodyLayoutsLayout> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Layout"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMPULayoutInfoListResponseBodyLayoutsLayout model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layout = make_shared<vector<DescribeMPULayoutInfoListResponseBodyLayoutsLayout>>(expect1);
      }
    }
  }


  virtual ~DescribeMPULayoutInfoListResponseBodyLayouts() = default;
};
class DescribeMPULayoutInfoListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeMPULayoutInfoListResponseBodyLayouts> layouts{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};

  DescribeMPULayoutInfoListResponseBody() {}

  explicit DescribeMPULayoutInfoListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layouts) {
      res["Layouts"] = layouts ? boost::any(layouts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Layouts") != m.end() && !m["Layouts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Layouts"].type()) {
        DescribeMPULayoutInfoListResponseBodyLayouts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Layouts"]));
        layouts = make_shared<DescribeMPULayoutInfoListResponseBodyLayouts>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeMPULayoutInfoListResponseBody() = default;
};
class DescribeMPULayoutInfoListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMPULayoutInfoListResponseBody> body{};

  DescribeMPULayoutInfoListResponse() {}

  explicit DescribeMPULayoutInfoListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMPULayoutInfoListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMPULayoutInfoListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMPULayoutInfoListResponse() = default;
};
class DescribeRecordFilesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<vector<string>> taskIds{};

  DescribeRecordFilesRequest() {}

  explicit DescribeRecordFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskIds) {
      res["TaskIds"] = boost::any(*taskIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskIds") != m.end() && !m["TaskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRecordFilesRequest() = default;
};
class DescribeRecordFilesResponseBodyRecordFiles : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<string> createTime{};
  shared_ptr<double> duration{};
  shared_ptr<string> startTime{};
  shared_ptr<string> stopTime{};
  shared_ptr<string> taskId{};
  shared_ptr<string> url{};

  DescribeRecordFilesResponseBodyRecordFiles() {}

  explicit DescribeRecordFilesResponseBodyRecordFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (stopTime) {
      res["StopTime"] = boost::any(*stopTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("StopTime") != m.end() && !m["StopTime"].empty()) {
      stopTime = make_shared<string>(boost::any_cast<string>(m["StopTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeRecordFilesResponseBodyRecordFiles() = default;
};
class DescribeRecordFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRecordFilesResponseBodyRecordFiles>> recordFiles{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};

  DescribeRecordFilesResponseBody() {}

  explicit DescribeRecordFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordFiles) {
      vector<boost::any> temp1;
      for(auto item1:*recordFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RecordFiles"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordFiles") != m.end() && !m["RecordFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["RecordFiles"].type()) {
        vector<DescribeRecordFilesResponseBodyRecordFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RecordFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRecordFilesResponseBodyRecordFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recordFiles = make_shared<vector<DescribeRecordFilesResponseBodyRecordFiles>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeRecordFilesResponseBody() = default;
};
class DescribeRecordFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRecordFilesResponseBody> body{};

  DescribeRecordFilesResponse() {}

  explicit DescribeRecordFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRecordFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRecordFilesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRecordFilesResponse() = default;
};
class DescribeRecordTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> templateIds{};

  DescribeRecordTemplatesRequest() {}

  explicit DescribeRecordTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (templateIds) {
      res["TemplateIds"] = boost::any(*templateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TemplateIds") != m.end() && !m["TemplateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TemplateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TemplateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      templateIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRecordTemplatesRequest() = default;
};
class DescribeRecordTemplatesResponseBodyTemplatesBackgrounds : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  DescribeRecordTemplatesResponseBodyTemplatesBackgrounds() {}

  explicit DescribeRecordTemplatesResponseBodyTemplatesBackgrounds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~DescribeRecordTemplatesResponseBodyTemplatesBackgrounds() = default;
};
class DescribeRecordTemplatesResponseBodyTemplatesClockWidgets : public Darabonba::Model {
public:
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  DescribeRecordTemplatesResponseBodyTemplatesClockWidgets() {}

  explicit DescribeRecordTemplatesResponseBodyTemplatesClockWidgets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~DescribeRecordTemplatesResponseBodyTemplatesClockWidgets() = default;
};
class DescribeRecordTemplatesResponseBodyTemplatesWatermarks : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  DescribeRecordTemplatesResponseBodyTemplatesWatermarks() {}

  explicit DescribeRecordTemplatesResponseBodyTemplatesWatermarks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~DescribeRecordTemplatesResponseBodyTemplatesWatermarks() = default;
};
class DescribeRecordTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<long> backgroundColor{};
  shared_ptr<vector<DescribeRecordTemplatesResponseBodyTemplatesBackgrounds>> backgrounds{};
  shared_ptr<vector<DescribeRecordTemplatesResponseBodyTemplatesClockWidgets>> clockWidgets{};
  shared_ptr<string> createTime{};
  shared_ptr<long> delayStopTime{};
  shared_ptr<bool> enableM3u8DateTime{};
  shared_ptr<long> fileSplitInterval{};
  shared_ptr<vector<string>> formats{};
  shared_ptr<string> httpCallbackUrl{};
  shared_ptr<vector<long>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<string> mnsQueue{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossFilePrefix{};
  shared_ptr<string> taskProfile{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<DescribeRecordTemplatesResponseBodyTemplatesWatermarks>> watermarks{};

  DescribeRecordTemplatesResponseBodyTemplates() {}

  explicit DescribeRecordTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backgroundColor) {
      res["BackgroundColor"] = boost::any(*backgroundColor);
    }
    if (backgrounds) {
      vector<boost::any> temp1;
      for(auto item1:*backgrounds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backgrounds"] = boost::any(temp1);
    }
    if (clockWidgets) {
      vector<boost::any> temp1;
      for(auto item1:*clockWidgets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClockWidgets"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (delayStopTime) {
      res["DelayStopTime"] = boost::any(*delayStopTime);
    }
    if (enableM3u8DateTime) {
      res["EnableM3u8DateTime"] = boost::any(*enableM3u8DateTime);
    }
    if (fileSplitInterval) {
      res["FileSplitInterval"] = boost::any(*fileSplitInterval);
    }
    if (formats) {
      res["Formats"] = boost::any(*formats);
    }
    if (httpCallbackUrl) {
      res["HttpCallbackUrl"] = boost::any(*httpCallbackUrl);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (mnsQueue) {
      res["MnsQueue"] = boost::any(*mnsQueue);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossFilePrefix) {
      res["OssFilePrefix"] = boost::any(*ossFilePrefix);
    }
    if (taskProfile) {
      res["TaskProfile"] = boost::any(*taskProfile);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (watermarks) {
      vector<boost::any> temp1;
      for(auto item1:*watermarks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Watermarks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackgroundColor") != m.end() && !m["BackgroundColor"].empty()) {
      backgroundColor = make_shared<long>(boost::any_cast<long>(m["BackgroundColor"]));
    }
    if (m.find("Backgrounds") != m.end() && !m["Backgrounds"].empty()) {
      if (typeid(vector<boost::any>) == m["Backgrounds"].type()) {
        vector<DescribeRecordTemplatesResponseBodyTemplatesBackgrounds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backgrounds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRecordTemplatesResponseBodyTemplatesBackgrounds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backgrounds = make_shared<vector<DescribeRecordTemplatesResponseBodyTemplatesBackgrounds>>(expect1);
      }
    }
    if (m.find("ClockWidgets") != m.end() && !m["ClockWidgets"].empty()) {
      if (typeid(vector<boost::any>) == m["ClockWidgets"].type()) {
        vector<DescribeRecordTemplatesResponseBodyTemplatesClockWidgets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClockWidgets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRecordTemplatesResponseBodyTemplatesClockWidgets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clockWidgets = make_shared<vector<DescribeRecordTemplatesResponseBodyTemplatesClockWidgets>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DelayStopTime") != m.end() && !m["DelayStopTime"].empty()) {
      delayStopTime = make_shared<long>(boost::any_cast<long>(m["DelayStopTime"]));
    }
    if (m.find("EnableM3u8DateTime") != m.end() && !m["EnableM3u8DateTime"].empty()) {
      enableM3u8DateTime = make_shared<bool>(boost::any_cast<bool>(m["EnableM3u8DateTime"]));
    }
    if (m.find("FileSplitInterval") != m.end() && !m["FileSplitInterval"].empty()) {
      fileSplitInterval = make_shared<long>(boost::any_cast<long>(m["FileSplitInterval"]));
    }
    if (m.find("Formats") != m.end() && !m["Formats"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Formats"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Formats"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      formats = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HttpCallbackUrl") != m.end() && !m["HttpCallbackUrl"].empty()) {
      httpCallbackUrl = make_shared<string>(boost::any_cast<string>(m["HttpCallbackUrl"]));
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      layoutIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("MnsQueue") != m.end() && !m["MnsQueue"].empty()) {
      mnsQueue = make_shared<string>(boost::any_cast<string>(m["MnsQueue"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssFilePrefix") != m.end() && !m["OssFilePrefix"].empty()) {
      ossFilePrefix = make_shared<string>(boost::any_cast<string>(m["OssFilePrefix"]));
    }
    if (m.find("TaskProfile") != m.end() && !m["TaskProfile"].empty()) {
      taskProfile = make_shared<string>(boost::any_cast<string>(m["TaskProfile"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Watermarks") != m.end() && !m["Watermarks"].empty()) {
      if (typeid(vector<boost::any>) == m["Watermarks"].type()) {
        vector<DescribeRecordTemplatesResponseBodyTemplatesWatermarks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Watermarks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRecordTemplatesResponseBodyTemplatesWatermarks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        watermarks = make_shared<vector<DescribeRecordTemplatesResponseBodyTemplatesWatermarks>>(expect1);
      }
    }
  }


  virtual ~DescribeRecordTemplatesResponseBodyTemplates() = default;
};
class DescribeRecordTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRecordTemplatesResponseBodyTemplates>> templates{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};

  DescribeRecordTemplatesResponseBody() {}

  explicit DescribeRecordTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<DescribeRecordTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRecordTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<DescribeRecordTemplatesResponseBodyTemplates>>(expect1);
      }
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeRecordTemplatesResponseBody() = default;
};
class DescribeRecordTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRecordTemplatesResponseBody> body{};

  DescribeRecordTemplatesResponse() {}

  explicit DescribeRecordTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRecordTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRecordTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRecordTemplatesResponse() = default;
};
class DescribeRtcChannelListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> serviceArea{};
  shared_ptr<string> sortType{};
  shared_ptr<string> timePoint{};
  shared_ptr<string> userId{};

  DescribeRtcChannelListRequest() {}

  explicit DescribeRtcChannelListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (sortType) {
      res["SortType"] = boost::any(*sortType);
    }
    if (timePoint) {
      res["TimePoint"] = boost::any(*timePoint);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("SortType") != m.end() && !m["SortType"].empty()) {
      sortType = make_shared<string>(boost::any_cast<string>(m["SortType"]));
    }
    if (m.find("TimePoint") != m.end() && !m["TimePoint"].empty()) {
      timePoint = make_shared<string>(boost::any_cast<string>(m["TimePoint"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeRtcChannelListRequest() = default;
};
class DescribeRtcChannelListResponseBodyChannelListChannelListCallArea : public Darabonba::Model {
public:
  shared_ptr<vector<string>> callArea{};

  DescribeRtcChannelListResponseBodyChannelListChannelListCallArea() {}

  explicit DescribeRtcChannelListResponseBodyChannelListChannelListCallArea(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callArea) {
      res["CallArea"] = boost::any(*callArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallArea") != m.end() && !m["CallArea"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CallArea"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CallArea"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      callArea = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRtcChannelListResponseBodyChannelListChannelListCallArea() = default;
};
class DescribeRtcChannelListResponseBodyChannelListChannelList : public Darabonba::Model {
public:
  shared_ptr<DescribeRtcChannelListResponseBodyChannelListChannelListCallArea> callArea{};
  shared_ptr<string> channelId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<long> totalUserCnt{};

  DescribeRtcChannelListResponseBodyChannelListChannelList() {}

  explicit DescribeRtcChannelListResponseBodyChannelListChannelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callArea) {
      res["CallArea"] = callArea ? boost::any(callArea->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (totalUserCnt) {
      res["TotalUserCnt"] = boost::any(*totalUserCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallArea") != m.end() && !m["CallArea"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallArea"].type()) {
        DescribeRtcChannelListResponseBodyChannelListChannelListCallArea model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallArea"]));
        callArea = make_shared<DescribeRtcChannelListResponseBodyChannelListChannelListCallArea>(model1);
      }
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TotalUserCnt") != m.end() && !m["TotalUserCnt"].empty()) {
      totalUserCnt = make_shared<long>(boost::any_cast<long>(m["TotalUserCnt"]));
    }
  }


  virtual ~DescribeRtcChannelListResponseBodyChannelListChannelList() = default;
};
class DescribeRtcChannelListResponseBodyChannelList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRtcChannelListResponseBodyChannelListChannelList>> channelList{};

  DescribeRtcChannelListResponseBodyChannelList() {}

  explicit DescribeRtcChannelListResponseBodyChannelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelList) {
      vector<boost::any> temp1;
      for(auto item1:*channelList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChannelList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelList") != m.end() && !m["ChannelList"].empty()) {
      if (typeid(vector<boost::any>) == m["ChannelList"].type()) {
        vector<DescribeRtcChannelListResponseBodyChannelListChannelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChannelList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRtcChannelListResponseBodyChannelListChannelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        channelList = make_shared<vector<DescribeRtcChannelListResponseBodyChannelListChannelList>>(expect1);
      }
    }
  }


  virtual ~DescribeRtcChannelListResponseBodyChannelList() = default;
};
class DescribeRtcChannelListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRtcChannelListResponseBodyChannelList> channelList{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCnt{};

  DescribeRtcChannelListResponseBody() {}

  explicit DescribeRtcChannelListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelList) {
      res["ChannelList"] = channelList ? boost::any(channelList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCnt) {
      res["TotalCnt"] = boost::any(*totalCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelList") != m.end() && !m["ChannelList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChannelList"].type()) {
        DescribeRtcChannelListResponseBodyChannelList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChannelList"]));
        channelList = make_shared<DescribeRtcChannelListResponseBodyChannelList>(model1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCnt") != m.end() && !m["TotalCnt"].empty()) {
      totalCnt = make_shared<long>(boost::any_cast<long>(m["TotalCnt"]));
    }
  }


  virtual ~DescribeRtcChannelListResponseBody() = default;
};
class DescribeRtcChannelListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRtcChannelListResponseBody> body{};

  DescribeRtcChannelListResponse() {}

  explicit DescribeRtcChannelListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRtcChannelListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRtcChannelListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRtcChannelListResponse() = default;
};
class DescribeRtcChannelMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> timePoint{};

  DescribeRtcChannelMetricRequest() {}

  explicit DescribeRtcChannelMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (timePoint) {
      res["TimePoint"] = boost::any(*timePoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TimePoint") != m.end() && !m["TimePoint"].empty()) {
      timePoint = make_shared<string>(boost::any_cast<string>(m["TimePoint"]));
    }
  }


  virtual ~DescribeRtcChannelMetricRequest() = default;
};
class DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric : public Darabonba::Model {
public:
  shared_ptr<string> channelId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pubUserCount{};
  shared_ptr<string> startTime{};
  shared_ptr<long> subUserCount{};
  shared_ptr<long> userCount{};

  DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric() {}

  explicit DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pubUserCount) {
      res["PubUserCount"] = boost::any(*pubUserCount);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (subUserCount) {
      res["SubUserCount"] = boost::any(*subUserCount);
    }
    if (userCount) {
      res["UserCount"] = boost::any(*userCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PubUserCount") != m.end() && !m["PubUserCount"].empty()) {
      pubUserCount = make_shared<long>(boost::any_cast<long>(m["PubUserCount"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("SubUserCount") != m.end() && !m["SubUserCount"].empty()) {
      subUserCount = make_shared<long>(boost::any_cast<long>(m["SubUserCount"]));
    }
    if (m.find("UserCount") != m.end() && !m["UserCount"].empty()) {
      userCount = make_shared<long>(boost::any_cast<long>(m["UserCount"]));
    }
  }


  virtual ~DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric() = default;
};
class DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration : public Darabonba::Model {
public:
  shared_ptr<long> audio{};
  shared_ptr<long> content{};
  shared_ptr<long> video1080{};
  shared_ptr<long> video360{};
  shared_ptr<long> video720{};

  DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration() {}

  explicit DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audio) {
      res["Audio"] = boost::any(*audio);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (video1080) {
      res["Video1080"] = boost::any(*video1080);
    }
    if (video360) {
      res["Video360"] = boost::any(*video360);
    }
    if (video720) {
      res["Video720"] = boost::any(*video720);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Audio") != m.end() && !m["Audio"].empty()) {
      audio = make_shared<long>(boost::any_cast<long>(m["Audio"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<long>(boost::any_cast<long>(m["Content"]));
    }
    if (m.find("Video1080") != m.end() && !m["Video1080"].empty()) {
      video1080 = make_shared<long>(boost::any_cast<long>(m["Video1080"]));
    }
    if (m.find("Video360") != m.end() && !m["Video360"].empty()) {
      video360 = make_shared<long>(boost::any_cast<long>(m["Video360"]));
    }
    if (m.find("Video720") != m.end() && !m["Video720"].empty()) {
      video720 = make_shared<long>(boost::any_cast<long>(m["Video720"]));
    }
  }


  virtual ~DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration() = default;
};
class DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration : public Darabonba::Model {
public:
  shared_ptr<long> audio{};
  shared_ptr<long> content{};
  shared_ptr<long> video1080{};
  shared_ptr<long> video360{};
  shared_ptr<long> video720{};

  DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration() {}

  explicit DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audio) {
      res["Audio"] = boost::any(*audio);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (video1080) {
      res["Video1080"] = boost::any(*video1080);
    }
    if (video360) {
      res["Video360"] = boost::any(*video360);
    }
    if (video720) {
      res["Video720"] = boost::any(*video720);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Audio") != m.end() && !m["Audio"].empty()) {
      audio = make_shared<long>(boost::any_cast<long>(m["Audio"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<long>(boost::any_cast<long>(m["Content"]));
    }
    if (m.find("Video1080") != m.end() && !m["Video1080"].empty()) {
      video1080 = make_shared<long>(boost::any_cast<long>(m["Video1080"]));
    }
    if (m.find("Video360") != m.end() && !m["Video360"].empty()) {
      video360 = make_shared<long>(boost::any_cast<long>(m["Video360"]));
    }
    if (m.find("Video720") != m.end() && !m["Video720"].empty()) {
      video720 = make_shared<long>(boost::any_cast<long>(m["Video720"]));
    }
  }


  virtual ~DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration() = default;
};
class DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration : public Darabonba::Model {
public:
  shared_ptr<DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration> pubDuration{};
  shared_ptr<DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration> subDuration{};

  DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration() {}

  explicit DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pubDuration) {
      res["PubDuration"] = pubDuration ? boost::any(pubDuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subDuration) {
      res["SubDuration"] = subDuration ? boost::any(subDuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PubDuration") != m.end() && !m["PubDuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["PubDuration"].type()) {
        DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PubDuration"]));
        pubDuration = make_shared<DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration>(model1);
      }
    }
    if (m.find("SubDuration") != m.end() && !m["SubDuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubDuration"].type()) {
        DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubDuration"]));
        subDuration = make_shared<DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration>(model1);
      }
    }
  }


  virtual ~DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration() = default;
};
class DescribeRtcChannelMetricResponseBodyChannelMetricInfo : public Darabonba::Model {
public:
  shared_ptr<DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric> channelMetric{};
  shared_ptr<DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration> duration{};

  DescribeRtcChannelMetricResponseBodyChannelMetricInfo() {}

  explicit DescribeRtcChannelMetricResponseBodyChannelMetricInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelMetric) {
      res["ChannelMetric"] = channelMetric ? boost::any(channelMetric->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (duration) {
      res["Duration"] = duration ? boost::any(duration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelMetric") != m.end() && !m["ChannelMetric"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChannelMetric"].type()) {
        DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChannelMetric"]));
        channelMetric = make_shared<DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric>(model1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      if (typeid(map<string, boost::any>) == m["Duration"].type()) {
        DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Duration"]));
        duration = make_shared<DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration>(model1);
      }
    }
  }


  virtual ~DescribeRtcChannelMetricResponseBodyChannelMetricInfo() = default;
};
class DescribeRtcChannelMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRtcChannelMetricResponseBodyChannelMetricInfo> channelMetricInfo{};
  shared_ptr<string> requestId{};

  DescribeRtcChannelMetricResponseBody() {}

  explicit DescribeRtcChannelMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelMetricInfo) {
      res["ChannelMetricInfo"] = channelMetricInfo ? boost::any(channelMetricInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelMetricInfo") != m.end() && !m["ChannelMetricInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChannelMetricInfo"].type()) {
        DescribeRtcChannelMetricResponseBodyChannelMetricInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChannelMetricInfo"]));
        channelMetricInfo = make_shared<DescribeRtcChannelMetricResponseBodyChannelMetricInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRtcChannelMetricResponseBody() = default;
};
class DescribeRtcChannelMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRtcChannelMetricResponseBody> body{};

  DescribeRtcChannelMetricResponse() {}

  explicit DescribeRtcChannelMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRtcChannelMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRtcChannelMetricResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRtcChannelMetricResponse() = default;
};
class DescribeRtcDurationDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> serviceArea{};
  shared_ptr<string> startTime{};

  DescribeRtcDurationDataRequest() {}

  explicit DescribeRtcDurationDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeRtcDurationDataRequest() = default;
};
class DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule : public Darabonba::Model {
public:
  shared_ptr<long> audioDuration{};
  shared_ptr<long> contentDuration{};
  shared_ptr<string> timeStamp{};
  shared_ptr<long> totalDuration{};
  shared_ptr<long> v1080Duration{};
  shared_ptr<long> v360Duration{};
  shared_ptr<long> v720Duration{};

  DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule() {}

  explicit DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioDuration) {
      res["AudioDuration"] = boost::any(*audioDuration);
    }
    if (contentDuration) {
      res["ContentDuration"] = boost::any(*contentDuration);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (totalDuration) {
      res["TotalDuration"] = boost::any(*totalDuration);
    }
    if (v1080Duration) {
      res["V1080Duration"] = boost::any(*v1080Duration);
    }
    if (v360Duration) {
      res["V360Duration"] = boost::any(*v360Duration);
    }
    if (v720Duration) {
      res["V720Duration"] = boost::any(*v720Duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioDuration") != m.end() && !m["AudioDuration"].empty()) {
      audioDuration = make_shared<long>(boost::any_cast<long>(m["AudioDuration"]));
    }
    if (m.find("ContentDuration") != m.end() && !m["ContentDuration"].empty()) {
      contentDuration = make_shared<long>(boost::any_cast<long>(m["ContentDuration"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("TotalDuration") != m.end() && !m["TotalDuration"].empty()) {
      totalDuration = make_shared<long>(boost::any_cast<long>(m["TotalDuration"]));
    }
    if (m.find("V1080Duration") != m.end() && !m["V1080Duration"].empty()) {
      v1080Duration = make_shared<long>(boost::any_cast<long>(m["V1080Duration"]));
    }
    if (m.find("V360Duration") != m.end() && !m["V360Duration"].empty()) {
      v360Duration = make_shared<long>(boost::any_cast<long>(m["V360Duration"]));
    }
    if (m.find("V720Duration") != m.end() && !m["V720Duration"].empty()) {
      v720Duration = make_shared<long>(boost::any_cast<long>(m["V720Duration"]));
    }
  }


  virtual ~DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule() = default;
};
class DescribeRtcDurationDataResponseBodyDurationDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule>> durationModule{};

  DescribeRtcDurationDataResponseBodyDurationDataPerInterval() {}

  explicit DescribeRtcDurationDataResponseBodyDurationDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationModule) {
      vector<boost::any> temp1;
      for(auto item1:*durationModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DurationModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DurationModule") != m.end() && !m["DurationModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DurationModule"].type()) {
        vector<DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DurationModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        durationModule = make_shared<vector<DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule>>(expect1);
      }
    }
  }


  virtual ~DescribeRtcDurationDataResponseBodyDurationDataPerInterval() = default;
};
class DescribeRtcDurationDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRtcDurationDataResponseBodyDurationDataPerInterval> durationDataPerInterval{};
  shared_ptr<string> requestId{};

  DescribeRtcDurationDataResponseBody() {}

  explicit DescribeRtcDurationDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationDataPerInterval) {
      res["DurationDataPerInterval"] = durationDataPerInterval ? boost::any(durationDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DurationDataPerInterval") != m.end() && !m["DurationDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["DurationDataPerInterval"].type()) {
        DescribeRtcDurationDataResponseBodyDurationDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DurationDataPerInterval"]));
        durationDataPerInterval = make_shared<DescribeRtcDurationDataResponseBodyDurationDataPerInterval>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRtcDurationDataResponseBody() = default;
};
class DescribeRtcDurationDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRtcDurationDataResponseBody> body{};

  DescribeRtcDurationDataResponse() {}

  explicit DescribeRtcDurationDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRtcDurationDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRtcDurationDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRtcDurationDataResponse() = default;
};
class DescribeRtcPeakChannelCntDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> serviceArea{};
  shared_ptr<string> startTime{};

  DescribeRtcPeakChannelCntDataRequest() {}

  explicit DescribeRtcPeakChannelCntDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeRtcPeakChannelCntDataRequest() = default;
};
class DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule : public Darabonba::Model {
public:
  shared_ptr<long> activeChannelPeak{};
  shared_ptr<string> activeChannelPeakTime{};
  shared_ptr<string> timeStamp{};

  DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule() {}

  explicit DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeChannelPeak) {
      res["ActiveChannelPeak"] = boost::any(*activeChannelPeak);
    }
    if (activeChannelPeakTime) {
      res["ActiveChannelPeakTime"] = boost::any(*activeChannelPeakTime);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveChannelPeak") != m.end() && !m["ActiveChannelPeak"].empty()) {
      activeChannelPeak = make_shared<long>(boost::any_cast<long>(m["ActiveChannelPeak"]));
    }
    if (m.find("ActiveChannelPeakTime") != m.end() && !m["ActiveChannelPeakTime"].empty()) {
      activeChannelPeakTime = make_shared<string>(boost::any_cast<string>(m["ActiveChannelPeakTime"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule() = default;
};
class DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule>> peakChannelCntModule{};

  DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval() {}

  explicit DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (peakChannelCntModule) {
      vector<boost::any> temp1;
      for(auto item1:*peakChannelCntModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PeakChannelCntModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeakChannelCntModule") != m.end() && !m["PeakChannelCntModule"].empty()) {
      if (typeid(vector<boost::any>) == m["PeakChannelCntModule"].type()) {
        vector<DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PeakChannelCntModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        peakChannelCntModule = make_shared<vector<DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule>>(expect1);
      }
    }
  }


  virtual ~DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval() = default;
};
class DescribeRtcPeakChannelCntDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval> peakChannelCntDataPerInterval{};
  shared_ptr<string> requestId{};

  DescribeRtcPeakChannelCntDataResponseBody() {}

  explicit DescribeRtcPeakChannelCntDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (peakChannelCntDataPerInterval) {
      res["PeakChannelCntDataPerInterval"] = peakChannelCntDataPerInterval ? boost::any(peakChannelCntDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeakChannelCntDataPerInterval") != m.end() && !m["PeakChannelCntDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["PeakChannelCntDataPerInterval"].type()) {
        DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PeakChannelCntDataPerInterval"]));
        peakChannelCntDataPerInterval = make_shared<DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRtcPeakChannelCntDataResponseBody() = default;
};
class DescribeRtcPeakChannelCntDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRtcPeakChannelCntDataResponseBody> body{};

  DescribeRtcPeakChannelCntDataResponse() {}

  explicit DescribeRtcPeakChannelCntDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRtcPeakChannelCntDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRtcPeakChannelCntDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRtcPeakChannelCntDataResponse() = default;
};
class DescribeRtcUserCntDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> serviceArea{};
  shared_ptr<string> startTime{};

  DescribeRtcUserCntDataRequest() {}

  explicit DescribeRtcUserCntDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeRtcUserCntDataRequest() = default;
};
class DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule : public Darabonba::Model {
public:
  shared_ptr<long> activeUserCnt{};
  shared_ptr<string> timeStamp{};

  DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule() {}

  explicit DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeUserCnt) {
      res["ActiveUserCnt"] = boost::any(*activeUserCnt);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveUserCnt") != m.end() && !m["ActiveUserCnt"].empty()) {
      activeUserCnt = make_shared<long>(boost::any_cast<long>(m["ActiveUserCnt"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule() = default;
};
class DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule>> userCntModule{};

  DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval() {}

  explicit DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userCntModule) {
      vector<boost::any> temp1;
      for(auto item1:*userCntModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserCntModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserCntModule") != m.end() && !m["UserCntModule"].empty()) {
      if (typeid(vector<boost::any>) == m["UserCntModule"].type()) {
        vector<DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserCntModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userCntModule = make_shared<vector<DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule>>(expect1);
      }
    }
  }


  virtual ~DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval() = default;
};
class DescribeRtcUserCntDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval> userCntDataPerInterval{};

  DescribeRtcUserCntDataResponseBody() {}

  explicit DescribeRtcUserCntDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userCntDataPerInterval) {
      res["UserCntDataPerInterval"] = userCntDataPerInterval ? boost::any(userCntDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserCntDataPerInterval") != m.end() && !m["UserCntDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserCntDataPerInterval"].type()) {
        DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserCntDataPerInterval"]));
        userCntDataPerInterval = make_shared<DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval>(model1);
      }
    }
  }


  virtual ~DescribeRtcUserCntDataResponseBody() = default;
};
class DescribeRtcUserCntDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRtcUserCntDataResponseBody> body{};

  DescribeRtcUserCntDataResponse() {}

  explicit DescribeRtcUserCntDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRtcUserCntDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRtcUserCntDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRtcUserCntDataResponse() = default;
};
class DescribeUserInfoInChannelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> userId{};

  DescribeUserInfoInChannelRequest() {}

  explicit DescribeUserInfoInChannelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeUserInfoInChannelRequest() = default;
};
class DescribeUserInfoInChannelResponseBodyProperty : public Darabonba::Model {
public:
  shared_ptr<long> join{};
  shared_ptr<long> role{};
  shared_ptr<string> session{};

  DescribeUserInfoInChannelResponseBodyProperty() {}

  explicit DescribeUserInfoInChannelResponseBodyProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (join) {
      res["Join"] = boost::any(*join);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (session) {
      res["Session"] = boost::any(*session);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Join") != m.end() && !m["Join"].empty()) {
      join = make_shared<long>(boost::any_cast<long>(m["Join"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<long>(boost::any_cast<long>(m["Role"]));
    }
    if (m.find("Session") != m.end() && !m["Session"].empty()) {
      session = make_shared<string>(boost::any_cast<string>(m["Session"]));
    }
  }


  virtual ~DescribeUserInfoInChannelResponseBodyProperty() = default;
};
class DescribeUserInfoInChannelResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isChannelExist{};
  shared_ptr<bool> isInChannel{};
  shared_ptr<vector<DescribeUserInfoInChannelResponseBodyProperty>> property{};
  shared_ptr<string> requestId{};
  shared_ptr<long> timestamp{};

  DescribeUserInfoInChannelResponseBody() {}

  explicit DescribeUserInfoInChannelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isChannelExist) {
      res["IsChannelExist"] = boost::any(*isChannelExist);
    }
    if (isInChannel) {
      res["IsInChannel"] = boost::any(*isInChannel);
    }
    if (property) {
      vector<boost::any> temp1;
      for(auto item1:*property){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Property"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsChannelExist") != m.end() && !m["IsChannelExist"].empty()) {
      isChannelExist = make_shared<bool>(boost::any_cast<bool>(m["IsChannelExist"]));
    }
    if (m.find("IsInChannel") != m.end() && !m["IsInChannel"].empty()) {
      isInChannel = make_shared<bool>(boost::any_cast<bool>(m["IsInChannel"]));
    }
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      if (typeid(vector<boost::any>) == m["Property"].type()) {
        vector<DescribeUserInfoInChannelResponseBodyProperty> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Property"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserInfoInChannelResponseBodyProperty model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        property = make_shared<vector<DescribeUserInfoInChannelResponseBodyProperty>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~DescribeUserInfoInChannelResponseBody() = default;
};
class DescribeUserInfoInChannelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserInfoInChannelResponseBody> body{};

  DescribeUserInfoInChannelResponse() {}

  explicit DescribeUserInfoInChannelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserInfoInChannelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserInfoInChannelResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserInfoInChannelResponse() = default;
};
class DisableAutoLiveStreamRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> ruleId{};

  DisableAutoLiveStreamRuleRequest() {}

  explicit DisableAutoLiveStreamRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DisableAutoLiveStreamRuleRequest() = default;
};
class DisableAutoLiveStreamRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableAutoLiveStreamRuleResponseBody() {}

  explicit DisableAutoLiveStreamRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableAutoLiveStreamRuleResponseBody() = default;
};
class DisableAutoLiveStreamRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableAutoLiveStreamRuleResponseBody> body{};

  DisableAutoLiveStreamRuleResponse() {}

  explicit DisableAutoLiveStreamRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableAutoLiveStreamRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableAutoLiveStreamRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DisableAutoLiveStreamRuleResponse() = default;
};
class EnableAutoLiveStreamRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> ruleId{};

  EnableAutoLiveStreamRuleRequest() {}

  explicit EnableAutoLiveStreamRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~EnableAutoLiveStreamRuleRequest() = default;
};
class EnableAutoLiveStreamRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableAutoLiveStreamRuleResponseBody() {}

  explicit EnableAutoLiveStreamRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableAutoLiveStreamRuleResponseBody() = default;
};
class EnableAutoLiveStreamRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableAutoLiveStreamRuleResponseBody> body{};

  EnableAutoLiveStreamRuleResponse() {}

  explicit EnableAutoLiveStreamRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableAutoLiveStreamRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableAutoLiveStreamRuleResponseBody>(model1);
      }
    }
  }


  virtual ~EnableAutoLiveStreamRuleResponse() = default;
};
class GetMPUTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> taskId{};

  GetMPUTaskStatusRequest() {}

  explicit GetMPUTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetMPUTaskStatusRequest() = default;
};
class GetMPUTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};

  GetMPUTaskStatusResponseBody() {}

  explicit GetMPUTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~GetMPUTaskStatusResponseBody() = default;
};
class GetMPUTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMPUTaskStatusResponseBody> body{};

  GetMPUTaskStatusResponse() {}

  explicit GetMPUTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMPUTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMPUTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetMPUTaskStatusResponse() = default;
};
class ModifyAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<long> ownerId{};

  ModifyAppRequest() {}

  explicit ModifyAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~ModifyAppRequest() = default;
};
class ModifyAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAppResponseBody() {}

  explicit ModifyAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAppResponseBody() = default;
};
class ModifyAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppResponseBody> body{};

  ModifyAppResponse() {}

  explicit ModifyAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppResponse() = default;
};
class ModifyMPULayoutRequestPanes : public Darabonba::Model {
public:
  shared_ptr<double> height{};
  shared_ptr<long> majorPane{};
  shared_ptr<long> paneId{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  ModifyMPULayoutRequestPanes() {}

  explicit ModifyMPULayoutRequestPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (majorPane) {
      res["MajorPane"] = boost::any(*majorPane);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("MajorPane") != m.end() && !m["MajorPane"].empty()) {
      majorPane = make_shared<long>(boost::any_cast<long>(m["MajorPane"]));
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~ModifyMPULayoutRequestPanes() = default;
};
class ModifyMPULayoutRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> audioMixCount{};
  shared_ptr<long> layoutId{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<ModifyMPULayoutRequestPanes>> panes{};

  ModifyMPULayoutRequest() {}

  explicit ModifyMPULayoutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (audioMixCount) {
      res["AudioMixCount"] = boost::any(*audioMixCount);
    }
    if (layoutId) {
      res["LayoutId"] = boost::any(*layoutId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (panes) {
      vector<boost::any> temp1;
      for(auto item1:*panes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Panes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AudioMixCount") != m.end() && !m["AudioMixCount"].empty()) {
      audioMixCount = make_shared<long>(boost::any_cast<long>(m["AudioMixCount"]));
    }
    if (m.find("LayoutId") != m.end() && !m["LayoutId"].empty()) {
      layoutId = make_shared<long>(boost::any_cast<long>(m["LayoutId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Panes") != m.end() && !m["Panes"].empty()) {
      if (typeid(vector<boost::any>) == m["Panes"].type()) {
        vector<ModifyMPULayoutRequestPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Panes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyMPULayoutRequestPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        panes = make_shared<vector<ModifyMPULayoutRequestPanes>>(expect1);
      }
    }
  }


  virtual ~ModifyMPULayoutRequest() = default;
};
class ModifyMPULayoutResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyMPULayoutResponseBody() {}

  explicit ModifyMPULayoutResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyMPULayoutResponseBody() = default;
};
class ModifyMPULayoutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyMPULayoutResponseBody> body{};

  ModifyMPULayoutResponse() {}

  explicit ModifyMPULayoutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyMPULayoutResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyMPULayoutResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyMPULayoutResponse() = default;
};
class RemoveTerminalsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<string>> terminalIds{};

  RemoveTerminalsRequest() {}

  explicit RemoveTerminalsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (terminalIds) {
      res["TerminalIds"] = boost::any(*terminalIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TerminalIds") != m.end() && !m["TerminalIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TerminalIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TerminalIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      terminalIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RemoveTerminalsRequest() = default;
};
class RemoveTerminalsResponseBodyTerminalsTerminal : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> id{};
  shared_ptr<string> message{};

  RemoveTerminalsResponseBodyTerminalsTerminal() {}

  explicit RemoveTerminalsResponseBodyTerminalsTerminal(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~RemoveTerminalsResponseBodyTerminalsTerminal() = default;
};
class RemoveTerminalsResponseBodyTerminals : public Darabonba::Model {
public:
  shared_ptr<vector<RemoveTerminalsResponseBodyTerminalsTerminal>> terminal{};

  RemoveTerminalsResponseBodyTerminals() {}

  explicit RemoveTerminalsResponseBodyTerminals(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (terminal) {
      vector<boost::any> temp1;
      for(auto item1:*terminal){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Terminal"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Terminal") != m.end() && !m["Terminal"].empty()) {
      if (typeid(vector<boost::any>) == m["Terminal"].type()) {
        vector<RemoveTerminalsResponseBodyTerminalsTerminal> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Terminal"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RemoveTerminalsResponseBodyTerminalsTerminal model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        terminal = make_shared<vector<RemoveTerminalsResponseBodyTerminalsTerminal>>(expect1);
      }
    }
  }


  virtual ~RemoveTerminalsResponseBodyTerminals() = default;
};
class RemoveTerminalsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RemoveTerminalsResponseBodyTerminals> terminals{};

  RemoveTerminalsResponseBody() {}

  explicit RemoveTerminalsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (terminals) {
      res["Terminals"] = terminals ? boost::any(terminals->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Terminals") != m.end() && !m["Terminals"].empty()) {
      if (typeid(map<string, boost::any>) == m["Terminals"].type()) {
        RemoveTerminalsResponseBodyTerminals model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Terminals"]));
        terminals = make_shared<RemoveTerminalsResponseBodyTerminals>(model1);
      }
    }
  }


  virtual ~RemoveTerminalsResponseBody() = default;
};
class RemoveTerminalsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveTerminalsResponseBody> body{};

  RemoveTerminalsResponse() {}

  explicit RemoveTerminalsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveTerminalsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveTerminalsResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveTerminalsResponse() = default;
};
class StartMPUTaskRequestBackgrounds : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  StartMPUTaskRequestBackgrounds() {}

  explicit StartMPUTaskRequestBackgrounds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~StartMPUTaskRequestBackgrounds() = default;
};
class StartMPUTaskRequestClockWidgets : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> borderColor{};
  shared_ptr<long> borderWidth{};
  shared_ptr<bool> box{};
  shared_ptr<long> boxBorderWidth{};
  shared_ptr<long> boxColor{};
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  StartMPUTaskRequestClockWidgets() {}

  explicit StartMPUTaskRequestClockWidgets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (borderColor) {
      res["BorderColor"] = boost::any(*borderColor);
    }
    if (borderWidth) {
      res["BorderWidth"] = boost::any(*borderWidth);
    }
    if (box) {
      res["Box"] = boost::any(*box);
    }
    if (boxBorderWidth) {
      res["BoxBorderWidth"] = boost::any(*boxBorderWidth);
    }
    if (boxColor) {
      res["BoxColor"] = boost::any(*boxColor);
    }
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BorderColor") != m.end() && !m["BorderColor"].empty()) {
      borderColor = make_shared<long>(boost::any_cast<long>(m["BorderColor"]));
    }
    if (m.find("BorderWidth") != m.end() && !m["BorderWidth"].empty()) {
      borderWidth = make_shared<long>(boost::any_cast<long>(m["BorderWidth"]));
    }
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      box = make_shared<bool>(boost::any_cast<bool>(m["Box"]));
    }
    if (m.find("BoxBorderWidth") != m.end() && !m["BoxBorderWidth"].empty()) {
      boxBorderWidth = make_shared<long>(boost::any_cast<long>(m["BoxBorderWidth"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      boxColor = make_shared<long>(boost::any_cast<long>(m["BoxColor"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~StartMPUTaskRequestClockWidgets() = default;
};
class StartMPUTaskRequestEnhancedParam : public Darabonba::Model {
public:
  shared_ptr<bool> enablePortraitSegmentation{};

  StartMPUTaskRequestEnhancedParam() {}

  explicit StartMPUTaskRequestEnhancedParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablePortraitSegmentation) {
      res["EnablePortraitSegmentation"] = boost::any(*enablePortraitSegmentation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnablePortraitSegmentation") != m.end() && !m["EnablePortraitSegmentation"].empty()) {
      enablePortraitSegmentation = make_shared<bool>(boost::any_cast<bool>(m["EnablePortraitSegmentation"]));
    }
  }


  virtual ~StartMPUTaskRequestEnhancedParam() = default;
};
class StartMPUTaskRequestUserPanesImages : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  StartMPUTaskRequestUserPanesImages() {}

  explicit StartMPUTaskRequestUserPanesImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~StartMPUTaskRequestUserPanesImages() = default;
};
class StartMPUTaskRequestUserPanesTexts : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> borderColor{};
  shared_ptr<long> borderWidth{};
  shared_ptr<bool> box{};
  shared_ptr<long> boxBorderWidth{};
  shared_ptr<long> boxColor{};
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<string> text{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  StartMPUTaskRequestUserPanesTexts() {}

  explicit StartMPUTaskRequestUserPanesTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (borderColor) {
      res["BorderColor"] = boost::any(*borderColor);
    }
    if (borderWidth) {
      res["BorderWidth"] = boost::any(*borderWidth);
    }
    if (box) {
      res["Box"] = boost::any(*box);
    }
    if (boxBorderWidth) {
      res["BoxBorderWidth"] = boost::any(*boxBorderWidth);
    }
    if (boxColor) {
      res["BoxColor"] = boost::any(*boxColor);
    }
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BorderColor") != m.end() && !m["BorderColor"].empty()) {
      borderColor = make_shared<long>(boost::any_cast<long>(m["BorderColor"]));
    }
    if (m.find("BorderWidth") != m.end() && !m["BorderWidth"].empty()) {
      borderWidth = make_shared<long>(boost::any_cast<long>(m["BorderWidth"]));
    }
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      box = make_shared<bool>(boost::any_cast<bool>(m["Box"]));
    }
    if (m.find("BoxBorderWidth") != m.end() && !m["BoxBorderWidth"].empty()) {
      boxBorderWidth = make_shared<long>(boost::any_cast<long>(m["BoxBorderWidth"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      boxColor = make_shared<long>(boost::any_cast<long>(m["BoxColor"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~StartMPUTaskRequestUserPanesTexts() = default;
};
class StartMPUTaskRequestUserPanes : public Darabonba::Model {
public:
  shared_ptr<vector<StartMPUTaskRequestUserPanesImages>> images{};
  shared_ptr<long> paneId{};
  shared_ptr<long> segmentType{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<StartMPUTaskRequestUserPanesTexts>> texts{};
  shared_ptr<string> userId{};

  StartMPUTaskRequestUserPanes() {}

  explicit StartMPUTaskRequestUserPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (segmentType) {
      res["SegmentType"] = boost::any(*segmentType);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<StartMPUTaskRequestUserPanesImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartMPUTaskRequestUserPanesImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<StartMPUTaskRequestUserPanesImages>>(expect1);
      }
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("SegmentType") != m.end() && !m["SegmentType"].empty()) {
      segmentType = make_shared<long>(boost::any_cast<long>(m["SegmentType"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<StartMPUTaskRequestUserPanesTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartMPUTaskRequestUserPanesTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<StartMPUTaskRequestUserPanesTexts>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~StartMPUTaskRequestUserPanes() = default;
};
class StartMPUTaskRequestWatermarks : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  StartMPUTaskRequestWatermarks() {}

  explicit StartMPUTaskRequestWatermarks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~StartMPUTaskRequestWatermarks() = default;
};
class StartMPUTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> backgroundColor{};
  shared_ptr<vector<StartMPUTaskRequestBackgrounds>> backgrounds{};
  shared_ptr<string> channelId{};
  shared_ptr<vector<StartMPUTaskRequestClockWidgets>> clockWidgets{};
  shared_ptr<long> cropMode{};
  shared_ptr<StartMPUTaskRequestEnhancedParam> enhancedParam{};
  shared_ptr<vector<long>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<long> mixMode{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> payloadType{};
  shared_ptr<long> reportVad{};
  shared_ptr<long> rtpExtInfo{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> streamType{};
  shared_ptr<string> streamURL{};
  shared_ptr<vector<string>> subSpecAudioUsers{};
  shared_ptr<vector<string>> subSpecCameraUsers{};
  shared_ptr<vector<string>> subSpecShareScreenUsers{};
  shared_ptr<vector<string>> subSpecUsers{};
  shared_ptr<string> taskId{};
  shared_ptr<long> taskType{};
  shared_ptr<long> timeStampRef{};
  shared_ptr<vector<string>> unsubSpecAudioUsers{};
  shared_ptr<vector<string>> unsubSpecCameraUsers{};
  shared_ptr<vector<string>> unsubSpecShareScreenUsers{};
  shared_ptr<vector<StartMPUTaskRequestUserPanes>> userPanes{};
  shared_ptr<long> vadInterval{};
  shared_ptr<vector<StartMPUTaskRequestWatermarks>> watermarks{};

  StartMPUTaskRequest() {}

  explicit StartMPUTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (backgroundColor) {
      res["BackgroundColor"] = boost::any(*backgroundColor);
    }
    if (backgrounds) {
      vector<boost::any> temp1;
      for(auto item1:*backgrounds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backgrounds"] = boost::any(temp1);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (clockWidgets) {
      vector<boost::any> temp1;
      for(auto item1:*clockWidgets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClockWidgets"] = boost::any(temp1);
    }
    if (cropMode) {
      res["CropMode"] = boost::any(*cropMode);
    }
    if (enhancedParam) {
      res["EnhancedParam"] = enhancedParam ? boost::any(enhancedParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (mixMode) {
      res["MixMode"] = boost::any(*mixMode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (payloadType) {
      res["PayloadType"] = boost::any(*payloadType);
    }
    if (reportVad) {
      res["ReportVad"] = boost::any(*reportVad);
    }
    if (rtpExtInfo) {
      res["RtpExtInfo"] = boost::any(*rtpExtInfo);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    if (streamURL) {
      res["StreamURL"] = boost::any(*streamURL);
    }
    if (subSpecAudioUsers) {
      res["SubSpecAudioUsers"] = boost::any(*subSpecAudioUsers);
    }
    if (subSpecCameraUsers) {
      res["SubSpecCameraUsers"] = boost::any(*subSpecCameraUsers);
    }
    if (subSpecShareScreenUsers) {
      res["SubSpecShareScreenUsers"] = boost::any(*subSpecShareScreenUsers);
    }
    if (subSpecUsers) {
      res["SubSpecUsers"] = boost::any(*subSpecUsers);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (timeStampRef) {
      res["TimeStampRef"] = boost::any(*timeStampRef);
    }
    if (unsubSpecAudioUsers) {
      res["UnsubSpecAudioUsers"] = boost::any(*unsubSpecAudioUsers);
    }
    if (unsubSpecCameraUsers) {
      res["UnsubSpecCameraUsers"] = boost::any(*unsubSpecCameraUsers);
    }
    if (unsubSpecShareScreenUsers) {
      res["UnsubSpecShareScreenUsers"] = boost::any(*unsubSpecShareScreenUsers);
    }
    if (userPanes) {
      vector<boost::any> temp1;
      for(auto item1:*userPanes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserPanes"] = boost::any(temp1);
    }
    if (vadInterval) {
      res["VadInterval"] = boost::any(*vadInterval);
    }
    if (watermarks) {
      vector<boost::any> temp1;
      for(auto item1:*watermarks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Watermarks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BackgroundColor") != m.end() && !m["BackgroundColor"].empty()) {
      backgroundColor = make_shared<long>(boost::any_cast<long>(m["BackgroundColor"]));
    }
    if (m.find("Backgrounds") != m.end() && !m["Backgrounds"].empty()) {
      if (typeid(vector<boost::any>) == m["Backgrounds"].type()) {
        vector<StartMPUTaskRequestBackgrounds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backgrounds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartMPUTaskRequestBackgrounds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backgrounds = make_shared<vector<StartMPUTaskRequestBackgrounds>>(expect1);
      }
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("ClockWidgets") != m.end() && !m["ClockWidgets"].empty()) {
      if (typeid(vector<boost::any>) == m["ClockWidgets"].type()) {
        vector<StartMPUTaskRequestClockWidgets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClockWidgets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartMPUTaskRequestClockWidgets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clockWidgets = make_shared<vector<StartMPUTaskRequestClockWidgets>>(expect1);
      }
    }
    if (m.find("CropMode") != m.end() && !m["CropMode"].empty()) {
      cropMode = make_shared<long>(boost::any_cast<long>(m["CropMode"]));
    }
    if (m.find("EnhancedParam") != m.end() && !m["EnhancedParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnhancedParam"].type()) {
        StartMPUTaskRequestEnhancedParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnhancedParam"]));
        enhancedParam = make_shared<StartMPUTaskRequestEnhancedParam>(model1);
      }
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      layoutIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("MixMode") != m.end() && !m["MixMode"].empty()) {
      mixMode = make_shared<long>(boost::any_cast<long>(m["MixMode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PayloadType") != m.end() && !m["PayloadType"].empty()) {
      payloadType = make_shared<long>(boost::any_cast<long>(m["PayloadType"]));
    }
    if (m.find("ReportVad") != m.end() && !m["ReportVad"].empty()) {
      reportVad = make_shared<long>(boost::any_cast<long>(m["ReportVad"]));
    }
    if (m.find("RtpExtInfo") != m.end() && !m["RtpExtInfo"].empty()) {
      rtpExtInfo = make_shared<long>(boost::any_cast<long>(m["RtpExtInfo"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
    if (m.find("StreamURL") != m.end() && !m["StreamURL"].empty()) {
      streamURL = make_shared<string>(boost::any_cast<string>(m["StreamURL"]));
    }
    if (m.find("SubSpecAudioUsers") != m.end() && !m["SubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecCameraUsers") != m.end() && !m["SubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecShareScreenUsers") != m.end() && !m["SubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecUsers") != m.end() && !m["SubSpecUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<long>(boost::any_cast<long>(m["TaskType"]));
    }
    if (m.find("TimeStampRef") != m.end() && !m["TimeStampRef"].empty()) {
      timeStampRef = make_shared<long>(boost::any_cast<long>(m["TimeStampRef"]));
    }
    if (m.find("UnsubSpecAudioUsers") != m.end() && !m["UnsubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecCameraUsers") != m.end() && !m["UnsubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecShareScreenUsers") != m.end() && !m["UnsubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserPanes") != m.end() && !m["UserPanes"].empty()) {
      if (typeid(vector<boost::any>) == m["UserPanes"].type()) {
        vector<StartMPUTaskRequestUserPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserPanes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartMPUTaskRequestUserPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userPanes = make_shared<vector<StartMPUTaskRequestUserPanes>>(expect1);
      }
    }
    if (m.find("VadInterval") != m.end() && !m["VadInterval"].empty()) {
      vadInterval = make_shared<long>(boost::any_cast<long>(m["VadInterval"]));
    }
    if (m.find("Watermarks") != m.end() && !m["Watermarks"].empty()) {
      if (typeid(vector<boost::any>) == m["Watermarks"].type()) {
        vector<StartMPUTaskRequestWatermarks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Watermarks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartMPUTaskRequestWatermarks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        watermarks = make_shared<vector<StartMPUTaskRequestWatermarks>>(expect1);
      }
    }
  }


  virtual ~StartMPUTaskRequest() = default;
};
class StartMPUTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartMPUTaskResponseBody() {}

  explicit StartMPUTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartMPUTaskResponseBody() = default;
};
class StartMPUTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartMPUTaskResponseBody> body{};

  StartMPUTaskResponse() {}

  explicit StartMPUTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartMPUTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartMPUTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StartMPUTaskResponse() = default;
};
class StartRecordTaskRequestUserPanesImages : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  StartRecordTaskRequestUserPanesImages() {}

  explicit StartRecordTaskRequestUserPanesImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~StartRecordTaskRequestUserPanesImages() = default;
};
class StartRecordTaskRequestUserPanesTexts : public Darabonba::Model {
public:
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<string> text{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  StartRecordTaskRequestUserPanesTexts() {}

  explicit StartRecordTaskRequestUserPanesTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~StartRecordTaskRequestUserPanesTexts() = default;
};
class StartRecordTaskRequestUserPanes : public Darabonba::Model {
public:
  shared_ptr<vector<StartRecordTaskRequestUserPanesImages>> images{};
  shared_ptr<long> paneId{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<StartRecordTaskRequestUserPanesTexts>> texts{};
  shared_ptr<string> userId{};

  StartRecordTaskRequestUserPanes() {}

  explicit StartRecordTaskRequestUserPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<StartRecordTaskRequestUserPanesImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartRecordTaskRequestUserPanesImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<StartRecordTaskRequestUserPanesImages>>(expect1);
      }
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<StartRecordTaskRequestUserPanesTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartRecordTaskRequestUserPanesTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<StartRecordTaskRequestUserPanesTexts>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~StartRecordTaskRequestUserPanes() = default;
};
class StartRecordTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> cropMode{};
  shared_ptr<vector<long>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<long> mixMode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> streamType{};
  shared_ptr<vector<string>> subSpecAudioUsers{};
  shared_ptr<vector<string>> subSpecCameraUsers{};
  shared_ptr<vector<string>> subSpecShareScreenUsers{};
  shared_ptr<vector<string>> subSpecUsers{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskProfile{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<string>> unsubSpecAudioUsers{};
  shared_ptr<vector<string>> unsubSpecCameraUsers{};
  shared_ptr<vector<string>> unsubSpecShareScreenUsers{};
  shared_ptr<vector<StartRecordTaskRequestUserPanes>> userPanes{};

  StartRecordTaskRequest() {}

  explicit StartRecordTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (cropMode) {
      res["CropMode"] = boost::any(*cropMode);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (mixMode) {
      res["MixMode"] = boost::any(*mixMode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    if (subSpecAudioUsers) {
      res["SubSpecAudioUsers"] = boost::any(*subSpecAudioUsers);
    }
    if (subSpecCameraUsers) {
      res["SubSpecCameraUsers"] = boost::any(*subSpecCameraUsers);
    }
    if (subSpecShareScreenUsers) {
      res["SubSpecShareScreenUsers"] = boost::any(*subSpecShareScreenUsers);
    }
    if (subSpecUsers) {
      res["SubSpecUsers"] = boost::any(*subSpecUsers);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskProfile) {
      res["TaskProfile"] = boost::any(*taskProfile);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (unsubSpecAudioUsers) {
      res["UnsubSpecAudioUsers"] = boost::any(*unsubSpecAudioUsers);
    }
    if (unsubSpecCameraUsers) {
      res["UnsubSpecCameraUsers"] = boost::any(*unsubSpecCameraUsers);
    }
    if (unsubSpecShareScreenUsers) {
      res["UnsubSpecShareScreenUsers"] = boost::any(*unsubSpecShareScreenUsers);
    }
    if (userPanes) {
      vector<boost::any> temp1;
      for(auto item1:*userPanes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserPanes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CropMode") != m.end() && !m["CropMode"].empty()) {
      cropMode = make_shared<long>(boost::any_cast<long>(m["CropMode"]));
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      layoutIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("MixMode") != m.end() && !m["MixMode"].empty()) {
      mixMode = make_shared<long>(boost::any_cast<long>(m["MixMode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
    if (m.find("SubSpecAudioUsers") != m.end() && !m["SubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecCameraUsers") != m.end() && !m["SubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecShareScreenUsers") != m.end() && !m["SubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecUsers") != m.end() && !m["SubSpecUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskProfile") != m.end() && !m["TaskProfile"].empty()) {
      taskProfile = make_shared<string>(boost::any_cast<string>(m["TaskProfile"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("UnsubSpecAudioUsers") != m.end() && !m["UnsubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecCameraUsers") != m.end() && !m["UnsubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecShareScreenUsers") != m.end() && !m["UnsubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserPanes") != m.end() && !m["UserPanes"].empty()) {
      if (typeid(vector<boost::any>) == m["UserPanes"].type()) {
        vector<StartRecordTaskRequestUserPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserPanes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartRecordTaskRequestUserPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userPanes = make_shared<vector<StartRecordTaskRequestUserPanes>>(expect1);
      }
    }
  }


  virtual ~StartRecordTaskRequest() = default;
};
class StartRecordTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartRecordTaskResponseBody() {}

  explicit StartRecordTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartRecordTaskResponseBody() = default;
};
class StartRecordTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartRecordTaskResponseBody> body{};

  StartRecordTaskResponse() {}

  explicit StartRecordTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartRecordTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartRecordTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StartRecordTaskResponse() = default;
};
class StopMPUTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> taskId{};

  StopMPUTaskRequest() {}

  explicit StopMPUTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StopMPUTaskRequest() = default;
};
class StopMPUTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopMPUTaskResponseBody() {}

  explicit StopMPUTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopMPUTaskResponseBody() = default;
};
class StopMPUTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopMPUTaskResponseBody> body{};

  StopMPUTaskResponse() {}

  explicit StopMPUTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopMPUTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopMPUTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StopMPUTaskResponse() = default;
};
class StopRecordTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> taskId{};

  StopRecordTaskRequest() {}

  explicit StopRecordTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StopRecordTaskRequest() = default;
};
class StopRecordTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopRecordTaskResponseBody() {}

  explicit StopRecordTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopRecordTaskResponseBody() = default;
};
class StopRecordTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopRecordTaskResponseBody> body{};

  StopRecordTaskResponse() {}

  explicit StopRecordTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopRecordTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopRecordTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StopRecordTaskResponse() = default;
};
class UpdateAutoLiveStreamRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callBack{};
  shared_ptr<vector<string>> channelIdPrefixes{};
  shared_ptr<vector<string>> channelIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> playDomain{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};

  UpdateAutoLiveStreamRuleRequest() {}

  explicit UpdateAutoLiveStreamRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callBack) {
      res["CallBack"] = boost::any(*callBack);
    }
    if (channelIdPrefixes) {
      res["ChannelIdPrefixes"] = boost::any(*channelIdPrefixes);
    }
    if (channelIds) {
      res["ChannelIds"] = boost::any(*channelIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playDomain) {
      res["PlayDomain"] = boost::any(*playDomain);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallBack") != m.end() && !m["CallBack"].empty()) {
      callBack = make_shared<string>(boost::any_cast<string>(m["CallBack"]));
    }
    if (m.find("ChannelIdPrefixes") != m.end() && !m["ChannelIdPrefixes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelIdPrefixes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelIdPrefixes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channelIdPrefixes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ChannelIds") != m.end() && !m["ChannelIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channelIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlayDomain") != m.end() && !m["PlayDomain"].empty()) {
      playDomain = make_shared<string>(boost::any_cast<string>(m["PlayDomain"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~UpdateAutoLiveStreamRuleRequest() = default;
};
class UpdateAutoLiveStreamRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAutoLiveStreamRuleResponseBody() {}

  explicit UpdateAutoLiveStreamRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAutoLiveStreamRuleResponseBody() = default;
};
class UpdateAutoLiveStreamRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAutoLiveStreamRuleResponseBody> body{};

  UpdateAutoLiveStreamRuleResponse() {}

  explicit UpdateAutoLiveStreamRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAutoLiveStreamRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAutoLiveStreamRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAutoLiveStreamRuleResponse() = default;
};
class UpdateMPUTaskRequestBackgrounds : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateMPUTaskRequestBackgrounds() {}

  explicit UpdateMPUTaskRequestBackgrounds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateMPUTaskRequestBackgrounds() = default;
};
class UpdateMPUTaskRequestClockWidgets : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> borderColor{};
  shared_ptr<long> borderWidth{};
  shared_ptr<bool> box{};
  shared_ptr<long> boxBorderWidth{};
  shared_ptr<long> boxColor{};
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateMPUTaskRequestClockWidgets() {}

  explicit UpdateMPUTaskRequestClockWidgets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (borderColor) {
      res["BorderColor"] = boost::any(*borderColor);
    }
    if (borderWidth) {
      res["BorderWidth"] = boost::any(*borderWidth);
    }
    if (box) {
      res["Box"] = boost::any(*box);
    }
    if (boxBorderWidth) {
      res["BoxBorderWidth"] = boost::any(*boxBorderWidth);
    }
    if (boxColor) {
      res["BoxColor"] = boost::any(*boxColor);
    }
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BorderColor") != m.end() && !m["BorderColor"].empty()) {
      borderColor = make_shared<long>(boost::any_cast<long>(m["BorderColor"]));
    }
    if (m.find("BorderWidth") != m.end() && !m["BorderWidth"].empty()) {
      borderWidth = make_shared<long>(boost::any_cast<long>(m["BorderWidth"]));
    }
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      box = make_shared<bool>(boost::any_cast<bool>(m["Box"]));
    }
    if (m.find("BoxBorderWidth") != m.end() && !m["BoxBorderWidth"].empty()) {
      boxBorderWidth = make_shared<long>(boost::any_cast<long>(m["BoxBorderWidth"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      boxColor = make_shared<long>(boost::any_cast<long>(m["BoxColor"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateMPUTaskRequestClockWidgets() = default;
};
class UpdateMPUTaskRequestUserPanesImages : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateMPUTaskRequestUserPanesImages() {}

  explicit UpdateMPUTaskRequestUserPanesImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateMPUTaskRequestUserPanesImages() = default;
};
class UpdateMPUTaskRequestUserPanesTexts : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> borderColor{};
  shared_ptr<long> borderWidth{};
  shared_ptr<bool> box{};
  shared_ptr<long> boxBorderWidth{};
  shared_ptr<long> boxColor{};
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<string> text{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateMPUTaskRequestUserPanesTexts() {}

  explicit UpdateMPUTaskRequestUserPanesTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (borderColor) {
      res["BorderColor"] = boost::any(*borderColor);
    }
    if (borderWidth) {
      res["BorderWidth"] = boost::any(*borderWidth);
    }
    if (box) {
      res["Box"] = boost::any(*box);
    }
    if (boxBorderWidth) {
      res["BoxBorderWidth"] = boost::any(*boxBorderWidth);
    }
    if (boxColor) {
      res["BoxColor"] = boost::any(*boxColor);
    }
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BorderColor") != m.end() && !m["BorderColor"].empty()) {
      borderColor = make_shared<long>(boost::any_cast<long>(m["BorderColor"]));
    }
    if (m.find("BorderWidth") != m.end() && !m["BorderWidth"].empty()) {
      borderWidth = make_shared<long>(boost::any_cast<long>(m["BorderWidth"]));
    }
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      box = make_shared<bool>(boost::any_cast<bool>(m["Box"]));
    }
    if (m.find("BoxBorderWidth") != m.end() && !m["BoxBorderWidth"].empty()) {
      boxBorderWidth = make_shared<long>(boost::any_cast<long>(m["BoxBorderWidth"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      boxColor = make_shared<long>(boost::any_cast<long>(m["BoxColor"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateMPUTaskRequestUserPanesTexts() = default;
};
class UpdateMPUTaskRequestUserPanes : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateMPUTaskRequestUserPanesImages>> images{};
  shared_ptr<long> paneId{};
  shared_ptr<long> segmentType{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<UpdateMPUTaskRequestUserPanesTexts>> texts{};
  shared_ptr<string> userId{};

  UpdateMPUTaskRequestUserPanes() {}

  explicit UpdateMPUTaskRequestUserPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (segmentType) {
      res["SegmentType"] = boost::any(*segmentType);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<UpdateMPUTaskRequestUserPanesImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMPUTaskRequestUserPanesImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<UpdateMPUTaskRequestUserPanesImages>>(expect1);
      }
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("SegmentType") != m.end() && !m["SegmentType"].empty()) {
      segmentType = make_shared<long>(boost::any_cast<long>(m["SegmentType"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<UpdateMPUTaskRequestUserPanesTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMPUTaskRequestUserPanesTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<UpdateMPUTaskRequestUserPanesTexts>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateMPUTaskRequestUserPanes() = default;
};
class UpdateMPUTaskRequestWatermarks : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateMPUTaskRequestWatermarks() {}

  explicit UpdateMPUTaskRequestWatermarks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateMPUTaskRequestWatermarks() = default;
};
class UpdateMPUTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> backgroundColor{};
  shared_ptr<vector<UpdateMPUTaskRequestBackgrounds>> backgrounds{};
  shared_ptr<vector<UpdateMPUTaskRequestClockWidgets>> clockWidgets{};
  shared_ptr<long> cropMode{};
  shared_ptr<vector<long>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<long> mixMode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> streamType{};
  shared_ptr<vector<string>> subSpecAudioUsers{};
  shared_ptr<vector<string>> subSpecCameraUsers{};
  shared_ptr<vector<string>> subSpecShareScreenUsers{};
  shared_ptr<vector<string>> subSpecUsers{};
  shared_ptr<string> taskId{};
  shared_ptr<vector<string>> unsubSpecAudioUsers{};
  shared_ptr<vector<string>> unsubSpecCameraUsers{};
  shared_ptr<vector<string>> unsubSpecShareScreenUsers{};
  shared_ptr<vector<UpdateMPUTaskRequestUserPanes>> userPanes{};
  shared_ptr<vector<UpdateMPUTaskRequestWatermarks>> watermarks{};

  UpdateMPUTaskRequest() {}

  explicit UpdateMPUTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (backgroundColor) {
      res["BackgroundColor"] = boost::any(*backgroundColor);
    }
    if (backgrounds) {
      vector<boost::any> temp1;
      for(auto item1:*backgrounds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backgrounds"] = boost::any(temp1);
    }
    if (clockWidgets) {
      vector<boost::any> temp1;
      for(auto item1:*clockWidgets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClockWidgets"] = boost::any(temp1);
    }
    if (cropMode) {
      res["CropMode"] = boost::any(*cropMode);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (mixMode) {
      res["MixMode"] = boost::any(*mixMode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    if (subSpecAudioUsers) {
      res["SubSpecAudioUsers"] = boost::any(*subSpecAudioUsers);
    }
    if (subSpecCameraUsers) {
      res["SubSpecCameraUsers"] = boost::any(*subSpecCameraUsers);
    }
    if (subSpecShareScreenUsers) {
      res["SubSpecShareScreenUsers"] = boost::any(*subSpecShareScreenUsers);
    }
    if (subSpecUsers) {
      res["SubSpecUsers"] = boost::any(*subSpecUsers);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (unsubSpecAudioUsers) {
      res["UnsubSpecAudioUsers"] = boost::any(*unsubSpecAudioUsers);
    }
    if (unsubSpecCameraUsers) {
      res["UnsubSpecCameraUsers"] = boost::any(*unsubSpecCameraUsers);
    }
    if (unsubSpecShareScreenUsers) {
      res["UnsubSpecShareScreenUsers"] = boost::any(*unsubSpecShareScreenUsers);
    }
    if (userPanes) {
      vector<boost::any> temp1;
      for(auto item1:*userPanes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserPanes"] = boost::any(temp1);
    }
    if (watermarks) {
      vector<boost::any> temp1;
      for(auto item1:*watermarks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Watermarks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BackgroundColor") != m.end() && !m["BackgroundColor"].empty()) {
      backgroundColor = make_shared<long>(boost::any_cast<long>(m["BackgroundColor"]));
    }
    if (m.find("Backgrounds") != m.end() && !m["Backgrounds"].empty()) {
      if (typeid(vector<boost::any>) == m["Backgrounds"].type()) {
        vector<UpdateMPUTaskRequestBackgrounds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backgrounds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMPUTaskRequestBackgrounds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backgrounds = make_shared<vector<UpdateMPUTaskRequestBackgrounds>>(expect1);
      }
    }
    if (m.find("ClockWidgets") != m.end() && !m["ClockWidgets"].empty()) {
      if (typeid(vector<boost::any>) == m["ClockWidgets"].type()) {
        vector<UpdateMPUTaskRequestClockWidgets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClockWidgets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMPUTaskRequestClockWidgets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clockWidgets = make_shared<vector<UpdateMPUTaskRequestClockWidgets>>(expect1);
      }
    }
    if (m.find("CropMode") != m.end() && !m["CropMode"].empty()) {
      cropMode = make_shared<long>(boost::any_cast<long>(m["CropMode"]));
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      layoutIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("MixMode") != m.end() && !m["MixMode"].empty()) {
      mixMode = make_shared<long>(boost::any_cast<long>(m["MixMode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
    if (m.find("SubSpecAudioUsers") != m.end() && !m["SubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecCameraUsers") != m.end() && !m["SubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecShareScreenUsers") != m.end() && !m["SubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecUsers") != m.end() && !m["SubSpecUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("UnsubSpecAudioUsers") != m.end() && !m["UnsubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecCameraUsers") != m.end() && !m["UnsubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecShareScreenUsers") != m.end() && !m["UnsubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserPanes") != m.end() && !m["UserPanes"].empty()) {
      if (typeid(vector<boost::any>) == m["UserPanes"].type()) {
        vector<UpdateMPUTaskRequestUserPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserPanes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMPUTaskRequestUserPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userPanes = make_shared<vector<UpdateMPUTaskRequestUserPanes>>(expect1);
      }
    }
    if (m.find("Watermarks") != m.end() && !m["Watermarks"].empty()) {
      if (typeid(vector<boost::any>) == m["Watermarks"].type()) {
        vector<UpdateMPUTaskRequestWatermarks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Watermarks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMPUTaskRequestWatermarks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        watermarks = make_shared<vector<UpdateMPUTaskRequestWatermarks>>(expect1);
      }
    }
  }


  virtual ~UpdateMPUTaskRequest() = default;
};
class UpdateMPUTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateMPUTaskResponseBody() {}

  explicit UpdateMPUTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateMPUTaskResponseBody() = default;
};
class UpdateMPUTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateMPUTaskResponseBody> body{};

  UpdateMPUTaskResponse() {}

  explicit UpdateMPUTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMPUTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMPUTaskResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMPUTaskResponse() = default;
};
class UpdateRecordTaskRequestUserPanesImages : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateRecordTaskRequestUserPanesImages() {}

  explicit UpdateRecordTaskRequestUserPanesImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateRecordTaskRequestUserPanesImages() = default;
};
class UpdateRecordTaskRequestUserPanesTexts : public Darabonba::Model {
public:
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<string> text{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateRecordTaskRequestUserPanesTexts() {}

  explicit UpdateRecordTaskRequestUserPanesTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateRecordTaskRequestUserPanesTexts() = default;
};
class UpdateRecordTaskRequestUserPanes : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateRecordTaskRequestUserPanesImages>> images{};
  shared_ptr<long> paneId{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<UpdateRecordTaskRequestUserPanesTexts>> texts{};
  shared_ptr<string> userId{};

  UpdateRecordTaskRequestUserPanes() {}

  explicit UpdateRecordTaskRequestUserPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<UpdateRecordTaskRequestUserPanesImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRecordTaskRequestUserPanesImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<UpdateRecordTaskRequestUserPanesImages>>(expect1);
      }
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<UpdateRecordTaskRequestUserPanesTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRecordTaskRequestUserPanesTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<UpdateRecordTaskRequestUserPanesTexts>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateRecordTaskRequestUserPanes() = default;
};
class UpdateRecordTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> cropMode{};
  shared_ptr<vector<long>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<string>> subSpecAudioUsers{};
  shared_ptr<vector<string>> subSpecCameraUsers{};
  shared_ptr<vector<string>> subSpecShareScreenUsers{};
  shared_ptr<vector<string>> subSpecUsers{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskProfile{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<string>> unsubSpecAudioUsers{};
  shared_ptr<vector<string>> unsubSpecCameraUsers{};
  shared_ptr<vector<string>> unsubSpecShareScreenUsers{};
  shared_ptr<vector<UpdateRecordTaskRequestUserPanes>> userPanes{};

  UpdateRecordTaskRequest() {}

  explicit UpdateRecordTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (cropMode) {
      res["CropMode"] = boost::any(*cropMode);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (subSpecAudioUsers) {
      res["SubSpecAudioUsers"] = boost::any(*subSpecAudioUsers);
    }
    if (subSpecCameraUsers) {
      res["SubSpecCameraUsers"] = boost::any(*subSpecCameraUsers);
    }
    if (subSpecShareScreenUsers) {
      res["SubSpecShareScreenUsers"] = boost::any(*subSpecShareScreenUsers);
    }
    if (subSpecUsers) {
      res["SubSpecUsers"] = boost::any(*subSpecUsers);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskProfile) {
      res["TaskProfile"] = boost::any(*taskProfile);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (unsubSpecAudioUsers) {
      res["UnsubSpecAudioUsers"] = boost::any(*unsubSpecAudioUsers);
    }
    if (unsubSpecCameraUsers) {
      res["UnsubSpecCameraUsers"] = boost::any(*unsubSpecCameraUsers);
    }
    if (unsubSpecShareScreenUsers) {
      res["UnsubSpecShareScreenUsers"] = boost::any(*unsubSpecShareScreenUsers);
    }
    if (userPanes) {
      vector<boost::any> temp1;
      for(auto item1:*userPanes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserPanes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CropMode") != m.end() && !m["CropMode"].empty()) {
      cropMode = make_shared<long>(boost::any_cast<long>(m["CropMode"]));
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      layoutIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SubSpecAudioUsers") != m.end() && !m["SubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecCameraUsers") != m.end() && !m["SubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecShareScreenUsers") != m.end() && !m["SubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecUsers") != m.end() && !m["SubSpecUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskProfile") != m.end() && !m["TaskProfile"].empty()) {
      taskProfile = make_shared<string>(boost::any_cast<string>(m["TaskProfile"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("UnsubSpecAudioUsers") != m.end() && !m["UnsubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecCameraUsers") != m.end() && !m["UnsubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecShareScreenUsers") != m.end() && !m["UnsubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserPanes") != m.end() && !m["UserPanes"].empty()) {
      if (typeid(vector<boost::any>) == m["UserPanes"].type()) {
        vector<UpdateRecordTaskRequestUserPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserPanes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRecordTaskRequestUserPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userPanes = make_shared<vector<UpdateRecordTaskRequestUserPanes>>(expect1);
      }
    }
  }


  virtual ~UpdateRecordTaskRequest() = default;
};
class UpdateRecordTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateRecordTaskResponseBody() {}

  explicit UpdateRecordTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateRecordTaskResponseBody() = default;
};
class UpdateRecordTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRecordTaskResponseBody> body{};

  UpdateRecordTaskResponse() {}

  explicit UpdateRecordTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRecordTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRecordTaskResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRecordTaskResponse() = default;
};
class UpdateRecordTemplateRequestBackgrounds : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateRecordTemplateRequestBackgrounds() {}

  explicit UpdateRecordTemplateRequestBackgrounds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateRecordTemplateRequestBackgrounds() = default;
};
class UpdateRecordTemplateRequestClockWidgets : public Darabonba::Model {
public:
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateRecordTemplateRequestClockWidgets() {}

  explicit UpdateRecordTemplateRequestClockWidgets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateRecordTemplateRequestClockWidgets() = default;
};
class UpdateRecordTemplateRequestWatermarks : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateRecordTemplateRequestWatermarks() {}

  explicit UpdateRecordTemplateRequestWatermarks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateRecordTemplateRequestWatermarks() = default;
};
class UpdateRecordTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> backgroundColor{};
  shared_ptr<vector<UpdateRecordTemplateRequestBackgrounds>> backgrounds{};
  shared_ptr<vector<UpdateRecordTemplateRequestClockWidgets>> clockWidgets{};
  shared_ptr<long> delayStopTime{};
  shared_ptr<bool> enableM3u8DateTime{};
  shared_ptr<long> fileSplitInterval{};
  shared_ptr<vector<string>> formats{};
  shared_ptr<string> httpCallbackUrl{};
  shared_ptr<vector<long>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<string> mnsQueue{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> ossFilePrefix{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> taskProfile{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<UpdateRecordTemplateRequestWatermarks>> watermarks{};

  UpdateRecordTemplateRequest() {}

  explicit UpdateRecordTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (backgroundColor) {
      res["BackgroundColor"] = boost::any(*backgroundColor);
    }
    if (backgrounds) {
      vector<boost::any> temp1;
      for(auto item1:*backgrounds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backgrounds"] = boost::any(temp1);
    }
    if (clockWidgets) {
      vector<boost::any> temp1;
      for(auto item1:*clockWidgets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClockWidgets"] = boost::any(temp1);
    }
    if (delayStopTime) {
      res["DelayStopTime"] = boost::any(*delayStopTime);
    }
    if (enableM3u8DateTime) {
      res["EnableM3u8DateTime"] = boost::any(*enableM3u8DateTime);
    }
    if (fileSplitInterval) {
      res["FileSplitInterval"] = boost::any(*fileSplitInterval);
    }
    if (formats) {
      res["Formats"] = boost::any(*formats);
    }
    if (httpCallbackUrl) {
      res["HttpCallbackUrl"] = boost::any(*httpCallbackUrl);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (mnsQueue) {
      res["MnsQueue"] = boost::any(*mnsQueue);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (taskProfile) {
      res["TaskProfile"] = boost::any(*taskProfile);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (watermarks) {
      vector<boost::any> temp1;
      for(auto item1:*watermarks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Watermarks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BackgroundColor") != m.end() && !m["BackgroundColor"].empty()) {
      backgroundColor = make_shared<long>(boost::any_cast<long>(m["BackgroundColor"]));
    }
    if (m.find("Backgrounds") != m.end() && !m["Backgrounds"].empty()) {
      if (typeid(vector<boost::any>) == m["Backgrounds"].type()) {
        vector<UpdateRecordTemplateRequestBackgrounds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backgrounds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRecordTemplateRequestBackgrounds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backgrounds = make_shared<vector<UpdateRecordTemplateRequestBackgrounds>>(expect1);
      }
    }
    if (m.find("ClockWidgets") != m.end() && !m["ClockWidgets"].empty()) {
      if (typeid(vector<boost::any>) == m["ClockWidgets"].type()) {
        vector<UpdateRecordTemplateRequestClockWidgets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClockWidgets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRecordTemplateRequestClockWidgets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clockWidgets = make_shared<vector<UpdateRecordTemplateRequestClockWidgets>>(expect1);
      }
    }
    if (m.find("DelayStopTime") != m.end() && !m["DelayStopTime"].empty()) {
      delayStopTime = make_shared<long>(boost::any_cast<long>(m["DelayStopTime"]));
    }
    if (m.find("EnableM3u8DateTime") != m.end() && !m["EnableM3u8DateTime"].empty()) {
      enableM3u8DateTime = make_shared<bool>(boost::any_cast<bool>(m["EnableM3u8DateTime"]));
    }
    if (m.find("FileSplitInterval") != m.end() && !m["FileSplitInterval"].empty()) {
      fileSplitInterval = make_shared<long>(boost::any_cast<long>(m["FileSplitInterval"]));
    }
    if (m.find("Formats") != m.end() && !m["Formats"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Formats"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Formats"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      formats = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HttpCallbackUrl") != m.end() && !m["HttpCallbackUrl"].empty()) {
      httpCallbackUrl = make_shared<string>(boost::any_cast<string>(m["HttpCallbackUrl"]));
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      layoutIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("MnsQueue") != m.end() && !m["MnsQueue"].empty()) {
      mnsQueue = make_shared<string>(boost::any_cast<string>(m["MnsQueue"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TaskProfile") != m.end() && !m["TaskProfile"].empty()) {
      taskProfile = make_shared<string>(boost::any_cast<string>(m["TaskProfile"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Watermarks") != m.end() && !m["Watermarks"].empty()) {
      if (typeid(vector<boost::any>) == m["Watermarks"].type()) {
        vector<UpdateRecordTemplateRequestWatermarks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Watermarks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRecordTemplateRequestWatermarks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        watermarks = make_shared<vector<UpdateRecordTemplateRequestWatermarks>>(expect1);
      }
    }
  }


  virtual ~UpdateRecordTemplateRequest() = default;
};
class UpdateRecordTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  UpdateRecordTemplateResponseBody() {}

  explicit UpdateRecordTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~UpdateRecordTemplateResponseBody() = default;
};
class UpdateRecordTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRecordTemplateResponseBody> body{};

  UpdateRecordTemplateResponse() {}

  explicit UpdateRecordTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRecordTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRecordTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRecordTemplateResponse() = default;
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
  AddRecordTemplateResponse addRecordTemplateWithOptions(shared_ptr<AddRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddRecordTemplateResponse addRecordTemplate(shared_ptr<AddRecordTemplateRequest> request);
  CreateAutoLiveStreamRuleResponse createAutoLiveStreamRuleWithOptions(shared_ptr<CreateAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAutoLiveStreamRuleResponse createAutoLiveStreamRule(shared_ptr<CreateAutoLiveStreamRuleRequest> request);
  CreateEventSubscribeResponse createEventSubscribeWithOptions(shared_ptr<CreateEventSubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEventSubscribeResponse createEventSubscribe(shared_ptr<CreateEventSubscribeRequest> request);
  CreateMPULayoutResponse createMPULayoutWithOptions(shared_ptr<CreateMPULayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMPULayoutResponse createMPULayout(shared_ptr<CreateMPULayoutRequest> request);
  DeleteAutoLiveStreamRuleResponse deleteAutoLiveStreamRuleWithOptions(shared_ptr<DeleteAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAutoLiveStreamRuleResponse deleteAutoLiveStreamRule(shared_ptr<DeleteAutoLiveStreamRuleRequest> request);
  DeleteChannelResponse deleteChannelWithOptions(shared_ptr<DeleteChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChannelResponse deleteChannel(shared_ptr<DeleteChannelRequest> request);
  DeleteEventSubscribeResponse deleteEventSubscribeWithOptions(shared_ptr<DeleteEventSubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEventSubscribeResponse deleteEventSubscribe(shared_ptr<DeleteEventSubscribeRequest> request);
  DeleteMPULayoutResponse deleteMPULayoutWithOptions(shared_ptr<DeleteMPULayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMPULayoutResponse deleteMPULayout(shared_ptr<DeleteMPULayoutRequest> request);
  DeleteRecordTemplateResponse deleteRecordTemplateWithOptions(shared_ptr<DeleteRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRecordTemplateResponse deleteRecordTemplate(shared_ptr<DeleteRecordTemplateRequest> request);
  DescribeAppKeyResponse describeAppKeyWithOptions(shared_ptr<DescribeAppKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppKeyResponse describeAppKey(shared_ptr<DescribeAppKeyRequest> request);
  DescribeAppsResponse describeAppsWithOptions(shared_ptr<DescribeAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppsResponse describeApps(shared_ptr<DescribeAppsRequest> request);
  DescribeAutoLiveStreamRuleResponse describeAutoLiveStreamRuleWithOptions(shared_ptr<DescribeAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAutoLiveStreamRuleResponse describeAutoLiveStreamRule(shared_ptr<DescribeAutoLiveStreamRuleRequest> request);
  DescribeCallListResponse describeCallListWithOptions(shared_ptr<DescribeCallListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCallListResponse describeCallList(shared_ptr<DescribeCallListRequest> request);
  DescribeChannelParticipantsResponse describeChannelParticipantsWithOptions(shared_ptr<DescribeChannelParticipantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelParticipantsResponse describeChannelParticipants(shared_ptr<DescribeChannelParticipantsRequest> request);
  DescribeChannelUsersResponse describeChannelUsersWithOptions(shared_ptr<DescribeChannelUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelUsersResponse describeChannelUsers(shared_ptr<DescribeChannelUsersRequest> request);
  DescribeMPULayoutInfoListResponse describeMPULayoutInfoListWithOptions(shared_ptr<DescribeMPULayoutInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMPULayoutInfoListResponse describeMPULayoutInfoList(shared_ptr<DescribeMPULayoutInfoListRequest> request);
  DescribeRecordFilesResponse describeRecordFilesWithOptions(shared_ptr<DescribeRecordFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRecordFilesResponse describeRecordFiles(shared_ptr<DescribeRecordFilesRequest> request);
  DescribeRecordTemplatesResponse describeRecordTemplatesWithOptions(shared_ptr<DescribeRecordTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRecordTemplatesResponse describeRecordTemplates(shared_ptr<DescribeRecordTemplatesRequest> request);
  DescribeRtcChannelListResponse describeRtcChannelListWithOptions(shared_ptr<DescribeRtcChannelListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRtcChannelListResponse describeRtcChannelList(shared_ptr<DescribeRtcChannelListRequest> request);
  DescribeRtcChannelMetricResponse describeRtcChannelMetricWithOptions(shared_ptr<DescribeRtcChannelMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRtcChannelMetricResponse describeRtcChannelMetric(shared_ptr<DescribeRtcChannelMetricRequest> request);
  DescribeRtcDurationDataResponse describeRtcDurationDataWithOptions(shared_ptr<DescribeRtcDurationDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRtcDurationDataResponse describeRtcDurationData(shared_ptr<DescribeRtcDurationDataRequest> request);
  DescribeRtcPeakChannelCntDataResponse describeRtcPeakChannelCntDataWithOptions(shared_ptr<DescribeRtcPeakChannelCntDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRtcPeakChannelCntDataResponse describeRtcPeakChannelCntData(shared_ptr<DescribeRtcPeakChannelCntDataRequest> request);
  DescribeRtcUserCntDataResponse describeRtcUserCntDataWithOptions(shared_ptr<DescribeRtcUserCntDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRtcUserCntDataResponse describeRtcUserCntData(shared_ptr<DescribeRtcUserCntDataRequest> request);
  DescribeUserInfoInChannelResponse describeUserInfoInChannelWithOptions(shared_ptr<DescribeUserInfoInChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserInfoInChannelResponse describeUserInfoInChannel(shared_ptr<DescribeUserInfoInChannelRequest> request);
  DisableAutoLiveStreamRuleResponse disableAutoLiveStreamRuleWithOptions(shared_ptr<DisableAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableAutoLiveStreamRuleResponse disableAutoLiveStreamRule(shared_ptr<DisableAutoLiveStreamRuleRequest> request);
  EnableAutoLiveStreamRuleResponse enableAutoLiveStreamRuleWithOptions(shared_ptr<EnableAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableAutoLiveStreamRuleResponse enableAutoLiveStreamRule(shared_ptr<EnableAutoLiveStreamRuleRequest> request);
  GetMPUTaskStatusResponse getMPUTaskStatusWithOptions(shared_ptr<GetMPUTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMPUTaskStatusResponse getMPUTaskStatus(shared_ptr<GetMPUTaskStatusRequest> request);
  ModifyAppResponse modifyAppWithOptions(shared_ptr<ModifyAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppResponse modifyApp(shared_ptr<ModifyAppRequest> request);
  ModifyMPULayoutResponse modifyMPULayoutWithOptions(shared_ptr<ModifyMPULayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMPULayoutResponse modifyMPULayout(shared_ptr<ModifyMPULayoutRequest> request);
  RemoveTerminalsResponse removeTerminalsWithOptions(shared_ptr<RemoveTerminalsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveTerminalsResponse removeTerminals(shared_ptr<RemoveTerminalsRequest> request);
  StartMPUTaskResponse startMPUTaskWithOptions(shared_ptr<StartMPUTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartMPUTaskResponse startMPUTask(shared_ptr<StartMPUTaskRequest> request);
  StartRecordTaskResponse startRecordTaskWithOptions(shared_ptr<StartRecordTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartRecordTaskResponse startRecordTask(shared_ptr<StartRecordTaskRequest> request);
  StopMPUTaskResponse stopMPUTaskWithOptions(shared_ptr<StopMPUTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopMPUTaskResponse stopMPUTask(shared_ptr<StopMPUTaskRequest> request);
  StopRecordTaskResponse stopRecordTaskWithOptions(shared_ptr<StopRecordTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopRecordTaskResponse stopRecordTask(shared_ptr<StopRecordTaskRequest> request);
  UpdateAutoLiveStreamRuleResponse updateAutoLiveStreamRuleWithOptions(shared_ptr<UpdateAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAutoLiveStreamRuleResponse updateAutoLiveStreamRule(shared_ptr<UpdateAutoLiveStreamRuleRequest> request);
  UpdateMPUTaskResponse updateMPUTaskWithOptions(shared_ptr<UpdateMPUTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMPUTaskResponse updateMPUTask(shared_ptr<UpdateMPUTaskRequest> request);
  UpdateRecordTaskResponse updateRecordTaskWithOptions(shared_ptr<UpdateRecordTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRecordTaskResponse updateRecordTask(shared_ptr<UpdateRecordTaskRequest> request);
  UpdateRecordTemplateResponse updateRecordTemplateWithOptions(shared_ptr<UpdateRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRecordTemplateResponse updateRecordTemplate(shared_ptr<UpdateRecordTemplateRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Rtc20180111

#endif
