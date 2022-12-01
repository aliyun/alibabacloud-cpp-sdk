// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_UMENG-PUSH20220225_H_
#define ALIBABACLOUD_UMENG-PUSH20220225_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Umeng-push20220225 {
class Alert : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> subtitle{};
  shared_ptr<string> title{};

  Alert() {}

  explicit Alert(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (subtitle) {
      res["subtitle"] = boost::any(*subtitle);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("subtitle") != m.end() && !m["subtitle"].empty()) {
      subtitle = make_shared<string>(boost::any_cast<string>(m["subtitle"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~Alert() = default;
};
class Body : public Darabonba::Model {
public:
  shared_ptr<string> activity{};
  shared_ptr<string> afterOpen{};
  shared_ptr<long> badge{};
  shared_ptr<long> builderId{};
  shared_ptr<string> custom{};
  shared_ptr<string> expandImage{};
  shared_ptr<string> icon{};
  shared_ptr<string> img{};
  shared_ptr<string> largeIcon{};
  shared_ptr<bool> playLights{};
  shared_ptr<bool> playSound{};
  shared_ptr<bool> playVibrate{};
  shared_ptr<string> sound{};
  shared_ptr<string> text{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  Body() {}

  explicit Body(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activity) {
      res["activity"] = boost::any(*activity);
    }
    if (afterOpen) {
      res["afterOpen"] = boost::any(*afterOpen);
    }
    if (badge) {
      res["badge"] = boost::any(*badge);
    }
    if (builderId) {
      res["builderId"] = boost::any(*builderId);
    }
    if (custom) {
      res["custom"] = boost::any(*custom);
    }
    if (expandImage) {
      res["expandImage"] = boost::any(*expandImage);
    }
    if (icon) {
      res["icon"] = boost::any(*icon);
    }
    if (img) {
      res["img"] = boost::any(*img);
    }
    if (largeIcon) {
      res["largeIcon"] = boost::any(*largeIcon);
    }
    if (playLights) {
      res["playLights"] = boost::any(*playLights);
    }
    if (playSound) {
      res["playSound"] = boost::any(*playSound);
    }
    if (playVibrate) {
      res["playVibrate"] = boost::any(*playVibrate);
    }
    if (sound) {
      res["sound"] = boost::any(*sound);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("activity") != m.end() && !m["activity"].empty()) {
      activity = make_shared<string>(boost::any_cast<string>(m["activity"]));
    }
    if (m.find("afterOpen") != m.end() && !m["afterOpen"].empty()) {
      afterOpen = make_shared<string>(boost::any_cast<string>(m["afterOpen"]));
    }
    if (m.find("badge") != m.end() && !m["badge"].empty()) {
      badge = make_shared<long>(boost::any_cast<long>(m["badge"]));
    }
    if (m.find("builderId") != m.end() && !m["builderId"].empty()) {
      builderId = make_shared<long>(boost::any_cast<long>(m["builderId"]));
    }
    if (m.find("custom") != m.end() && !m["custom"].empty()) {
      custom = make_shared<string>(boost::any_cast<string>(m["custom"]));
    }
    if (m.find("expandImage") != m.end() && !m["expandImage"].empty()) {
      expandImage = make_shared<string>(boost::any_cast<string>(m["expandImage"]));
    }
    if (m.find("icon") != m.end() && !m["icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["icon"]));
    }
    if (m.find("img") != m.end() && !m["img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["img"]));
    }
    if (m.find("largeIcon") != m.end() && !m["largeIcon"].empty()) {
      largeIcon = make_shared<string>(boost::any_cast<string>(m["largeIcon"]));
    }
    if (m.find("playLights") != m.end() && !m["playLights"].empty()) {
      playLights = make_shared<bool>(boost::any_cast<bool>(m["playLights"]));
    }
    if (m.find("playSound") != m.end() && !m["playSound"].empty()) {
      playSound = make_shared<bool>(boost::any_cast<bool>(m["playSound"]));
    }
    if (m.find("playVibrate") != m.end() && !m["playVibrate"].empty()) {
      playVibrate = make_shared<bool>(boost::any_cast<bool>(m["playVibrate"]));
    }
    if (m.find("sound") != m.end() && !m["sound"].empty()) {
      sound = make_shared<string>(boost::any_cast<string>(m["sound"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~Body() = default;
};
class AndroidPayload : public Darabonba::Model {
public:
  shared_ptr<Body> body{};
  shared_ptr<string> displayType{};
  shared_ptr<map<string, boost::any>> extra{};

  AndroidPayload() {}

  explicit AndroidPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (displayType) {
      res["displayType"] = boost::any(*displayType);
    }
    if (extra) {
      res["extra"] = boost::any(*extra);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Body model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Body>(model1);
      }
    }
    if (m.find("displayType") != m.end() && !m["displayType"].empty()) {
      displayType = make_shared<string>(boost::any_cast<string>(m["displayType"]));
    }
    if (m.find("extra") != m.end() && !m["extra"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["extra"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extra = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~AndroidPayload() = default;
};
class Aps : public Darabonba::Model {
public:
  shared_ptr<Alert> alert{};
  shared_ptr<long> badge{};
  shared_ptr<string> category{};
  shared_ptr<long> contentAvailable{};
  shared_ptr<string> interruptionLevel{};
  shared_ptr<string> sound{};

  Aps() {}

  explicit Aps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alert) {
      res["alert"] = alert ? boost::any(alert->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (badge) {
      res["badge"] = boost::any(*badge);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (contentAvailable) {
      res["contentAvailable"] = boost::any(*contentAvailable);
    }
    if (interruptionLevel) {
      res["interruptionLevel"] = boost::any(*interruptionLevel);
    }
    if (sound) {
      res["sound"] = boost::any(*sound);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alert") != m.end() && !m["alert"].empty()) {
      if (typeid(map<string, boost::any>) == m["alert"].type()) {
        Alert model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["alert"]));
        alert = make_shared<Alert>(model1);
      }
    }
    if (m.find("badge") != m.end() && !m["badge"].empty()) {
      badge = make_shared<long>(boost::any_cast<long>(m["badge"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("contentAvailable") != m.end() && !m["contentAvailable"].empty()) {
      contentAvailable = make_shared<long>(boost::any_cast<long>(m["contentAvailable"]));
    }
    if (m.find("interruptionLevel") != m.end() && !m["interruptionLevel"].empty()) {
      interruptionLevel = make_shared<string>(boost::any_cast<string>(m["interruptionLevel"]));
    }
    if (m.find("sound") != m.end() && !m["sound"].empty()) {
      sound = make_shared<string>(boost::any_cast<string>(m["sound"]));
    }
  }


  virtual ~Aps() = default;
};
class ChannelProperties : public Darabonba::Model {
public:
  shared_ptr<string> channelActivity{};
  shared_ptr<string> mainActivity{};
  shared_ptr<string> oppoChannelId{};
  shared_ptr<string> vivoClassification{};
  shared_ptr<string> xiaomiChannelId{};

  ChannelProperties() {}

  explicit ChannelProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelActivity) {
      res["channelActivity"] = boost::any(*channelActivity);
    }
    if (mainActivity) {
      res["mainActivity"] = boost::any(*mainActivity);
    }
    if (oppoChannelId) {
      res["oppoChannelId"] = boost::any(*oppoChannelId);
    }
    if (vivoClassification) {
      res["vivoClassification"] = boost::any(*vivoClassification);
    }
    if (xiaomiChannelId) {
      res["xiaomiChannelId"] = boost::any(*xiaomiChannelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channelActivity") != m.end() && !m["channelActivity"].empty()) {
      channelActivity = make_shared<string>(boost::any_cast<string>(m["channelActivity"]));
    }
    if (m.find("mainActivity") != m.end() && !m["mainActivity"].empty()) {
      mainActivity = make_shared<string>(boost::any_cast<string>(m["mainActivity"]));
    }
    if (m.find("oppoChannelId") != m.end() && !m["oppoChannelId"].empty()) {
      oppoChannelId = make_shared<string>(boost::any_cast<string>(m["oppoChannelId"]));
    }
    if (m.find("vivoClassification") != m.end() && !m["vivoClassification"].empty()) {
      vivoClassification = make_shared<string>(boost::any_cast<string>(m["vivoClassification"]));
    }
    if (m.find("xiaomiChannelId") != m.end() && !m["xiaomiChannelId"].empty()) {
      xiaomiChannelId = make_shared<string>(boost::any_cast<string>(m["xiaomiChannelId"]));
    }
  }


  virtual ~ChannelProperties() = default;
};
class IosPayload : public Darabonba::Model {
public:
  shared_ptr<Aps> aps{};
  shared_ptr<map<string, boost::any>> extra{};

  IosPayload() {}

  explicit IosPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aps) {
      res["aps"] = aps ? boost::any(aps->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (extra) {
      res["extra"] = boost::any(*extra);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aps") != m.end() && !m["aps"].empty()) {
      if (typeid(map<string, boost::any>) == m["aps"].type()) {
        Aps model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["aps"]));
        aps = make_shared<Aps>(model1);
      }
    }
    if (m.find("extra") != m.end() && !m["extra"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["extra"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extra = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~IosPayload() = default;
};
class Policy : public Darabonba::Model {
public:
  shared_ptr<string> expireTime{};
  shared_ptr<string> outerBizNo{};
  shared_ptr<long> speed{};
  shared_ptr<string> startTime{};

  Policy() {}

  explicit Policy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["expireTime"] = boost::any(*expireTime);
    }
    if (outerBizNo) {
      res["outerBizNo"] = boost::any(*outerBizNo);
    }
    if (speed) {
      res["speed"] = boost::any(*speed);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("expireTime") != m.end() && !m["expireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["expireTime"]));
    }
    if (m.find("outerBizNo") != m.end() && !m["outerBizNo"].empty()) {
      outerBizNo = make_shared<string>(boost::any_cast<string>(m["outerBizNo"]));
    }
    if (m.find("speed") != m.end() && !m["speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["speed"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~Policy() = default;
};
class SendByAppRequest : public Darabonba::Model {
public:
  shared_ptr<AndroidPayload> androidPayload{};
  shared_ptr<ChannelProperties> channelProperties{};
  shared_ptr<string> description{};
  shared_ptr<IosPayload> iosPayload{};
  shared_ptr<Policy> policy{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};

  SendByAppRequest() {}

  explicit SendByAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidPayload) {
      res["AndroidPayload"] = androidPayload ? boost::any(androidPayload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (channelProperties) {
      res["ChannelProperties"] = channelProperties ? boost::any(channelProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (iosPayload) {
      res["IosPayload"] = iosPayload ? boost::any(iosPayload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productionMode) {
      res["ProductionMode"] = boost::any(*productionMode);
    }
    if (receiptType) {
      res["ReceiptType"] = boost::any(*receiptType);
    }
    if (receiptUrl) {
      res["ReceiptUrl"] = boost::any(*receiptUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidPayload") != m.end() && !m["AndroidPayload"].empty()) {
      if (typeid(map<string, boost::any>) == m["AndroidPayload"].type()) {
        AndroidPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AndroidPayload"]));
        androidPayload = make_shared<AndroidPayload>(model1);
      }
    }
    if (m.find("ChannelProperties") != m.end() && !m["ChannelProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChannelProperties"].type()) {
        ChannelProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChannelProperties"]));
        channelProperties = make_shared<ChannelProperties>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IosPayload") != m.end() && !m["IosPayload"].empty()) {
      if (typeid(map<string, boost::any>) == m["IosPayload"].type()) {
        IosPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IosPayload"]));
        iosPayload = make_shared<IosPayload>(model1);
      }
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        Policy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<Policy>(model1);
      }
    }
    if (m.find("ProductionMode") != m.end() && !m["ProductionMode"].empty()) {
      productionMode = make_shared<bool>(boost::any_cast<bool>(m["ProductionMode"]));
    }
    if (m.find("ReceiptType") != m.end() && !m["ReceiptType"].empty()) {
      receiptType = make_shared<long>(boost::any_cast<long>(m["ReceiptType"]));
    }
    if (m.find("ReceiptUrl") != m.end() && !m["ReceiptUrl"].empty()) {
      receiptUrl = make_shared<string>(boost::any_cast<string>(m["ReceiptUrl"]));
    }
  }


  virtual ~SendByAppRequest() = default;
};
class SendByAppShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> androidPayloadShrink{};
  shared_ptr<string> channelPropertiesShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> iosPayloadShrink{};
  shared_ptr<string> policyShrink{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};

  SendByAppShrinkRequest() {}

  explicit SendByAppShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidPayloadShrink) {
      res["AndroidPayload"] = boost::any(*androidPayloadShrink);
    }
    if (channelPropertiesShrink) {
      res["ChannelProperties"] = boost::any(*channelPropertiesShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (iosPayloadShrink) {
      res["IosPayload"] = boost::any(*iosPayloadShrink);
    }
    if (policyShrink) {
      res["Policy"] = boost::any(*policyShrink);
    }
    if (productionMode) {
      res["ProductionMode"] = boost::any(*productionMode);
    }
    if (receiptType) {
      res["ReceiptType"] = boost::any(*receiptType);
    }
    if (receiptUrl) {
      res["ReceiptUrl"] = boost::any(*receiptUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidPayload") != m.end() && !m["AndroidPayload"].empty()) {
      androidPayloadShrink = make_shared<string>(boost::any_cast<string>(m["AndroidPayload"]));
    }
    if (m.find("ChannelProperties") != m.end() && !m["ChannelProperties"].empty()) {
      channelPropertiesShrink = make_shared<string>(boost::any_cast<string>(m["ChannelProperties"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IosPayload") != m.end() && !m["IosPayload"].empty()) {
      iosPayloadShrink = make_shared<string>(boost::any_cast<string>(m["IosPayload"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policyShrink = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("ProductionMode") != m.end() && !m["ProductionMode"].empty()) {
      productionMode = make_shared<bool>(boost::any_cast<bool>(m["ProductionMode"]));
    }
    if (m.find("ReceiptType") != m.end() && !m["ReceiptType"].empty()) {
      receiptType = make_shared<long>(boost::any_cast<long>(m["ReceiptType"]));
    }
    if (m.find("ReceiptUrl") != m.end() && !m["ReceiptUrl"].empty()) {
      receiptUrl = make_shared<string>(boost::any_cast<string>(m["ReceiptUrl"]));
    }
  }


  virtual ~SendByAppShrinkRequest() = default;
};
class SendByAppResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> msgId{};

  SendByAppResponseBodyData() {}

  explicit SendByAppResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
  }


  virtual ~SendByAppResponseBodyData() = default;
};
class SendByAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SendByAppResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendByAppResponseBody() {}

  explicit SendByAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SendByAppResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SendByAppResponseBodyData>(model1);
      }
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


  virtual ~SendByAppResponseBody() = default;
};
class SendByAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendByAppResponseBody> body{};

  SendByAppResponse() {}

  explicit SendByAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendByAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendByAppResponseBody>(model1);
      }
    }
  }


  virtual ~SendByAppResponse() = default;
};
class SendByDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<AndroidPayload> androidPayload{};
  shared_ptr<ChannelProperties> channelProperties{};
  shared_ptr<string> description{};
  shared_ptr<string> deviceTokens{};
  shared_ptr<IosPayload> iosPayload{};
  shared_ptr<Policy> policy{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};

  SendByDeviceRequest() {}

  explicit SendByDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidPayload) {
      res["AndroidPayload"] = androidPayload ? boost::any(androidPayload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (channelProperties) {
      res["ChannelProperties"] = channelProperties ? boost::any(channelProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (deviceTokens) {
      res["DeviceTokens"] = boost::any(*deviceTokens);
    }
    if (iosPayload) {
      res["IosPayload"] = iosPayload ? boost::any(iosPayload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productionMode) {
      res["ProductionMode"] = boost::any(*productionMode);
    }
    if (receiptType) {
      res["ReceiptType"] = boost::any(*receiptType);
    }
    if (receiptUrl) {
      res["ReceiptUrl"] = boost::any(*receiptUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidPayload") != m.end() && !m["AndroidPayload"].empty()) {
      if (typeid(map<string, boost::any>) == m["AndroidPayload"].type()) {
        AndroidPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AndroidPayload"]));
        androidPayload = make_shared<AndroidPayload>(model1);
      }
    }
    if (m.find("ChannelProperties") != m.end() && !m["ChannelProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChannelProperties"].type()) {
        ChannelProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChannelProperties"]));
        channelProperties = make_shared<ChannelProperties>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DeviceTokens") != m.end() && !m["DeviceTokens"].empty()) {
      deviceTokens = make_shared<string>(boost::any_cast<string>(m["DeviceTokens"]));
    }
    if (m.find("IosPayload") != m.end() && !m["IosPayload"].empty()) {
      if (typeid(map<string, boost::any>) == m["IosPayload"].type()) {
        IosPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IosPayload"]));
        iosPayload = make_shared<IosPayload>(model1);
      }
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        Policy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<Policy>(model1);
      }
    }
    if (m.find("ProductionMode") != m.end() && !m["ProductionMode"].empty()) {
      productionMode = make_shared<bool>(boost::any_cast<bool>(m["ProductionMode"]));
    }
    if (m.find("ReceiptType") != m.end() && !m["ReceiptType"].empty()) {
      receiptType = make_shared<long>(boost::any_cast<long>(m["ReceiptType"]));
    }
    if (m.find("ReceiptUrl") != m.end() && !m["ReceiptUrl"].empty()) {
      receiptUrl = make_shared<string>(boost::any_cast<string>(m["ReceiptUrl"]));
    }
  }


  virtual ~SendByDeviceRequest() = default;
};
class SendByDeviceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> androidPayloadShrink{};
  shared_ptr<string> channelPropertiesShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> deviceTokens{};
  shared_ptr<string> iosPayloadShrink{};
  shared_ptr<string> policyShrink{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};

  SendByDeviceShrinkRequest() {}

  explicit SendByDeviceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidPayloadShrink) {
      res["AndroidPayload"] = boost::any(*androidPayloadShrink);
    }
    if (channelPropertiesShrink) {
      res["ChannelProperties"] = boost::any(*channelPropertiesShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (deviceTokens) {
      res["DeviceTokens"] = boost::any(*deviceTokens);
    }
    if (iosPayloadShrink) {
      res["IosPayload"] = boost::any(*iosPayloadShrink);
    }
    if (policyShrink) {
      res["Policy"] = boost::any(*policyShrink);
    }
    if (productionMode) {
      res["ProductionMode"] = boost::any(*productionMode);
    }
    if (receiptType) {
      res["ReceiptType"] = boost::any(*receiptType);
    }
    if (receiptUrl) {
      res["ReceiptUrl"] = boost::any(*receiptUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidPayload") != m.end() && !m["AndroidPayload"].empty()) {
      androidPayloadShrink = make_shared<string>(boost::any_cast<string>(m["AndroidPayload"]));
    }
    if (m.find("ChannelProperties") != m.end() && !m["ChannelProperties"].empty()) {
      channelPropertiesShrink = make_shared<string>(boost::any_cast<string>(m["ChannelProperties"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DeviceTokens") != m.end() && !m["DeviceTokens"].empty()) {
      deviceTokens = make_shared<string>(boost::any_cast<string>(m["DeviceTokens"]));
    }
    if (m.find("IosPayload") != m.end() && !m["IosPayload"].empty()) {
      iosPayloadShrink = make_shared<string>(boost::any_cast<string>(m["IosPayload"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policyShrink = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("ProductionMode") != m.end() && !m["ProductionMode"].empty()) {
      productionMode = make_shared<bool>(boost::any_cast<bool>(m["ProductionMode"]));
    }
    if (m.find("ReceiptType") != m.end() && !m["ReceiptType"].empty()) {
      receiptType = make_shared<long>(boost::any_cast<long>(m["ReceiptType"]));
    }
    if (m.find("ReceiptUrl") != m.end() && !m["ReceiptUrl"].empty()) {
      receiptUrl = make_shared<string>(boost::any_cast<string>(m["ReceiptUrl"]));
    }
  }


  virtual ~SendByDeviceShrinkRequest() = default;
};
class SendByDeviceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> msgId{};

  SendByDeviceResponseBodyData() {}

  explicit SendByDeviceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
  }


  virtual ~SendByDeviceResponseBodyData() = default;
};
class SendByDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SendByDeviceResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendByDeviceResponseBody() {}

  explicit SendByDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SendByDeviceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SendByDeviceResponseBodyData>(model1);
      }
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


  virtual ~SendByDeviceResponseBody() = default;
};
class SendByDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendByDeviceResponseBody> body{};

  SendByDeviceResponse() {}

  explicit SendByDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendByDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendByDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~SendByDeviceResponse() = default;
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
  SendByAppResponse sendByApp(shared_ptr<SendByAppRequest> request);
  SendByAppResponse sendByAppWithOptions(shared_ptr<SendByAppRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendByDeviceResponse sendByDevice(shared_ptr<SendByDeviceRequest> request);
  SendByDeviceResponse sendByDeviceWithOptions(shared_ptr<SendByDeviceRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Umeng-push20220225

#endif
