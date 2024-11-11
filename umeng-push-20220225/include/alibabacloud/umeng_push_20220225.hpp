// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_UMENG-PUSH20220225_H_
#define ALIBABACLOUD_UMENG-PUSH20220225_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
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
  shared_ptr<long> addBadge{};
  shared_ptr<string> afterOpen{};
  shared_ptr<long> builderId{};
  shared_ptr<string> custom{};
  shared_ptr<string> expandImage{};
  shared_ptr<string> icon{};
  shared_ptr<string> img{};
  shared_ptr<bool> playLights{};
  shared_ptr<bool> playSound{};
  shared_ptr<bool> playVibrate{};
  shared_ptr<long> rePop{};
  shared_ptr<long> setBadge{};
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
    if (addBadge) {
      res["addBadge"] = boost::any(*addBadge);
    }
    if (afterOpen) {
      res["afterOpen"] = boost::any(*afterOpen);
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
    if (playLights) {
      res["playLights"] = boost::any(*playLights);
    }
    if (playSound) {
      res["playSound"] = boost::any(*playSound);
    }
    if (playVibrate) {
      res["playVibrate"] = boost::any(*playVibrate);
    }
    if (rePop) {
      res["rePop"] = boost::any(*rePop);
    }
    if (setBadge) {
      res["setBadge"] = boost::any(*setBadge);
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
    if (m.find("addBadge") != m.end() && !m["addBadge"].empty()) {
      addBadge = make_shared<long>(boost::any_cast<long>(m["addBadge"]));
    }
    if (m.find("afterOpen") != m.end() && !m["afterOpen"].empty()) {
      afterOpen = make_shared<string>(boost::any_cast<string>(m["afterOpen"]));
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
    if (m.find("playLights") != m.end() && !m["playLights"].empty()) {
      playLights = make_shared<bool>(boost::any_cast<bool>(m["playLights"]));
    }
    if (m.find("playSound") != m.end() && !m["playSound"].empty()) {
      playSound = make_shared<bool>(boost::any_cast<bool>(m["playSound"]));
    }
    if (m.find("playVibrate") != m.end() && !m["playVibrate"].empty()) {
      playVibrate = make_shared<bool>(boost::any_cast<bool>(m["playVibrate"]));
    }
    if (m.find("rePop") != m.end() && !m["rePop"].empty()) {
      rePop = make_shared<long>(boost::any_cast<long>(m["rePop"]));
    }
    if (m.find("setBadge") != m.end() && !m["setBadge"].empty()) {
      setBadge = make_shared<long>(boost::any_cast<long>(m["setBadge"]));
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
class Message2ThirdChannel : public Darabonba::Model {
public:
  shared_ptr<long> setBadge{};
  shared_ptr<long> addBadge{};
  shared_ptr<string> bigBody{};
  shared_ptr<string> bigTitle{};
  shared_ptr<string> expandImage{};
  shared_ptr<string> img{};
  shared_ptr<string> sound{};
  shared_ptr<string> text{};
  shared_ptr<string> title{};

  Message2ThirdChannel() {}

  explicit Message2ThirdChannel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (setBadge) {
      res["SetBadge"] = boost::any(*setBadge);
    }
    if (addBadge) {
      res["addBadge"] = boost::any(*addBadge);
    }
    if (bigBody) {
      res["bigBody"] = boost::any(*bigBody);
    }
    if (bigTitle) {
      res["bigTitle"] = boost::any(*bigTitle);
    }
    if (expandImage) {
      res["expandImage"] = boost::any(*expandImage);
    }
    if (img) {
      res["img"] = boost::any(*img);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SetBadge") != m.end() && !m["SetBadge"].empty()) {
      setBadge = make_shared<long>(boost::any_cast<long>(m["SetBadge"]));
    }
    if (m.find("addBadge") != m.end() && !m["addBadge"].empty()) {
      addBadge = make_shared<long>(boost::any_cast<long>(m["addBadge"]));
    }
    if (m.find("bigBody") != m.end() && !m["bigBody"].empty()) {
      bigBody = make_shared<string>(boost::any_cast<string>(m["bigBody"]));
    }
    if (m.find("bigTitle") != m.end() && !m["bigTitle"].empty()) {
      bigTitle = make_shared<string>(boost::any_cast<string>(m["bigTitle"]));
    }
    if (m.find("expandImage") != m.end() && !m["expandImage"].empty()) {
      expandImage = make_shared<string>(boost::any_cast<string>(m["expandImage"]));
    }
    if (m.find("img") != m.end() && !m["img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["img"]));
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
  }


  virtual ~Message2ThirdChannel() = default;
};
class AndroidPayload : public Darabonba::Model {
public:
  shared_ptr<Body> body{};
  shared_ptr<string> displayType{};
  shared_ptr<map<string, boost::any>> extra{};
  shared_ptr<Message2ThirdChannel> message2ThirdChannel{};

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
    if (message2ThirdChannel) {
      res["message2ThirdChannel"] = message2ThirdChannel ? boost::any(message2ThirdChannel->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("message2ThirdChannel") != m.end() && !m["message2ThirdChannel"].empty()) {
      if (typeid(map<string, boost::any>) == m["message2ThirdChannel"].type()) {
        Message2ThirdChannel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["message2ThirdChannel"]));
        message2ThirdChannel = make_shared<Message2ThirdChannel>(model1);
      }
    }
  }


  virtual ~AndroidPayload() = default;
};
class AndroidShortPayloadBody : public Darabonba::Model {
public:
  shared_ptr<string> custom{};

  AndroidShortPayloadBody() {}

  explicit AndroidShortPayloadBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custom) {
      res["custom"] = boost::any(*custom);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("custom") != m.end() && !m["custom"].empty()) {
      custom = make_shared<string>(boost::any_cast<string>(m["custom"]));
    }
  }


  virtual ~AndroidShortPayloadBody() = default;
};
class AndroidShortPayload : public Darabonba::Model {
public:
  shared_ptr<AndroidShortPayloadBody> body{};
  shared_ptr<map<string, boost::any>> extra{};

  AndroidShortPayload() {}

  explicit AndroidShortPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (extra) {
      res["extra"] = boost::any(*extra);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AndroidShortPayloadBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AndroidShortPayloadBody>(model1);
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


  virtual ~AndroidShortPayload() = default;
};
class Aps : public Darabonba::Model {
public:
  shared_ptr<Alert> alert{};
  shared_ptr<string> badge{};
  shared_ptr<string> category{};
  shared_ptr<long> contentAvailable{};
  shared_ptr<string> interruptionLevel{};
  shared_ptr<string> sound{};
  shared_ptr<string> threadID{};

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
    if (threadID) {
      res["threadID"] = boost::any(*threadID);
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
      badge = make_shared<string>(boost::any_cast<string>(m["badge"]));
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
    if (m.find("threadID") != m.end() && !m["threadID"].empty()) {
      threadID = make_shared<string>(boost::any_cast<string>(m["threadID"]));
    }
  }


  virtual ~Aps() = default;
};
class ChannelProperties : public Darabonba::Model {
public:
  shared_ptr<string> channelActivity{};
  shared_ptr<string> channelFcm{};
  shared_ptr<string> huaweiChannelCategory{};
  shared_ptr<string> huaweiChannelImportance{};
  shared_ptr<string> huaweiMessageUrgency{};
  shared_ptr<string> mainActivity{};
  shared_ptr<string> oppoChannelId{};
  shared_ptr<string> useHuaweiMessage{};
  shared_ptr<string> vivoAddBadge{};
  shared_ptr<string> vivoCategory{};
  shared_ptr<string> vivoPushMode{};
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
    if (channelFcm) {
      res["channelFcm"] = boost::any(*channelFcm);
    }
    if (huaweiChannelCategory) {
      res["huaweiChannelCategory"] = boost::any(*huaweiChannelCategory);
    }
    if (huaweiChannelImportance) {
      res["huaweiChannelImportance"] = boost::any(*huaweiChannelImportance);
    }
    if (huaweiMessageUrgency) {
      res["huaweiMessageUrgency"] = boost::any(*huaweiMessageUrgency);
    }
    if (mainActivity) {
      res["mainActivity"] = boost::any(*mainActivity);
    }
    if (oppoChannelId) {
      res["oppoChannelId"] = boost::any(*oppoChannelId);
    }
    if (useHuaweiMessage) {
      res["useHuaweiMessage"] = boost::any(*useHuaweiMessage);
    }
    if (vivoAddBadge) {
      res["vivoAddBadge"] = boost::any(*vivoAddBadge);
    }
    if (vivoCategory) {
      res["vivoCategory"] = boost::any(*vivoCategory);
    }
    if (vivoPushMode) {
      res["vivoPushMode"] = boost::any(*vivoPushMode);
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
    if (m.find("channelFcm") != m.end() && !m["channelFcm"].empty()) {
      channelFcm = make_shared<string>(boost::any_cast<string>(m["channelFcm"]));
    }
    if (m.find("huaweiChannelCategory") != m.end() && !m["huaweiChannelCategory"].empty()) {
      huaweiChannelCategory = make_shared<string>(boost::any_cast<string>(m["huaweiChannelCategory"]));
    }
    if (m.find("huaweiChannelImportance") != m.end() && !m["huaweiChannelImportance"].empty()) {
      huaweiChannelImportance = make_shared<string>(boost::any_cast<string>(m["huaweiChannelImportance"]));
    }
    if (m.find("huaweiMessageUrgency") != m.end() && !m["huaweiMessageUrgency"].empty()) {
      huaweiMessageUrgency = make_shared<string>(boost::any_cast<string>(m["huaweiMessageUrgency"]));
    }
    if (m.find("mainActivity") != m.end() && !m["mainActivity"].empty()) {
      mainActivity = make_shared<string>(boost::any_cast<string>(m["mainActivity"]));
    }
    if (m.find("oppoChannelId") != m.end() && !m["oppoChannelId"].empty()) {
      oppoChannelId = make_shared<string>(boost::any_cast<string>(m["oppoChannelId"]));
    }
    if (m.find("useHuaweiMessage") != m.end() && !m["useHuaweiMessage"].empty()) {
      useHuaweiMessage = make_shared<string>(boost::any_cast<string>(m["useHuaweiMessage"]));
    }
    if (m.find("vivoAddBadge") != m.end() && !m["vivoAddBadge"].empty()) {
      vivoAddBadge = make_shared<string>(boost::any_cast<string>(m["vivoAddBadge"]));
    }
    if (m.find("vivoCategory") != m.end() && !m["vivoCategory"].empty()) {
      vivoCategory = make_shared<string>(boost::any_cast<string>(m["vivoCategory"]));
    }
    if (m.find("vivoPushMode") != m.end() && !m["vivoPushMode"].empty()) {
      vivoPushMode = make_shared<string>(boost::any_cast<string>(m["vivoPushMode"]));
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
class CancelByMsgIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> msgId{};

  CancelByMsgIdRequest() {}

  explicit CancelByMsgIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelByMsgIdRequest() = default;
};
class CancelByMsgIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> msgId{};

  CancelByMsgIdResponseBodyData() {}

  explicit CancelByMsgIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelByMsgIdResponseBodyData() = default;
};
class CancelByMsgIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CancelByMsgIdResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CancelByMsgIdResponseBody() {}

  explicit CancelByMsgIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelByMsgIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CancelByMsgIdResponseBodyData>(model1);
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


  virtual ~CancelByMsgIdResponseBody() = default;
};
class CancelByMsgIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelByMsgIdResponseBody> body{};

  CancelByMsgIdResponse() {}

  explicit CancelByMsgIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelByMsgIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelByMsgIdResponseBody>(model1);
      }
    }
  }


  virtual ~CancelByMsgIdResponse() = default;
};
class QueryMsgStatRequest : public Darabonba::Model {
public:
  shared_ptr<string> msgId{};

  QueryMsgStatRequest() {}

  explicit QueryMsgStatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryMsgStatRequest() = default;
};
class QueryMsgStatResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> accept{};
  shared_ptr<long> arrive{};
  shared_ptr<long> closePush{};
  shared_ptr<long> dismiss{};
  shared_ptr<string> msgId{};
  shared_ptr<long> open{};
  shared_ptr<long> sent{};
  shared_ptr<long> status{};

  QueryMsgStatResponseBodyData() {}

  explicit QueryMsgStatResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accept) {
      res["Accept"] = boost::any(*accept);
    }
    if (arrive) {
      res["Arrive"] = boost::any(*arrive);
    }
    if (closePush) {
      res["ClosePush"] = boost::any(*closePush);
    }
    if (dismiss) {
      res["Dismiss"] = boost::any(*dismiss);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (open) {
      res["Open"] = boost::any(*open);
    }
    if (sent) {
      res["Sent"] = boost::any(*sent);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accept") != m.end() && !m["Accept"].empty()) {
      accept = make_shared<long>(boost::any_cast<long>(m["Accept"]));
    }
    if (m.find("Arrive") != m.end() && !m["Arrive"].empty()) {
      arrive = make_shared<long>(boost::any_cast<long>(m["Arrive"]));
    }
    if (m.find("ClosePush") != m.end() && !m["ClosePush"].empty()) {
      closePush = make_shared<long>(boost::any_cast<long>(m["ClosePush"]));
    }
    if (m.find("Dismiss") != m.end() && !m["Dismiss"].empty()) {
      dismiss = make_shared<long>(boost::any_cast<long>(m["Dismiss"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("Open") != m.end() && !m["Open"].empty()) {
      open = make_shared<long>(boost::any_cast<long>(m["Open"]));
    }
    if (m.find("Sent") != m.end() && !m["Sent"].empty()) {
      sent = make_shared<long>(boost::any_cast<long>(m["Sent"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~QueryMsgStatResponseBodyData() = default;
};
class QueryMsgStatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryMsgStatResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryMsgStatResponseBody() {}

  explicit QueryMsgStatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMsgStatResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryMsgStatResponseBodyData>(model1);
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


  virtual ~QueryMsgStatResponseBody() = default;
};
class QueryMsgStatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMsgStatResponseBody> body{};

  QueryMsgStatResponse() {}

  explicit QueryMsgStatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMsgStatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMsgStatResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMsgStatResponse() = default;
};
class SendByAliasRequest : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> aliasType{};
  shared_ptr<AndroidPayload> androidPayload{};
  shared_ptr<AndroidShortPayload> androidShortPayload{};
  shared_ptr<ChannelProperties> channelProperties{};
  shared_ptr<string> description{};
  shared_ptr<IosPayload> iosPayload{};
  shared_ptr<Policy> policy{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};
  shared_ptr<string> thirdPartyId{};
  shared_ptr<string> callbackParams{};

  SendByAliasRequest() {}

  explicit SendByAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (aliasType) {
      res["AliasType"] = boost::any(*aliasType);
    }
    if (androidPayload) {
      res["AndroidPayload"] = androidPayload ? boost::any(androidPayload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (androidShortPayload) {
      res["AndroidShortPayload"] = androidShortPayload ? boost::any(androidShortPayload->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (thirdPartyId) {
      res["ThirdPartyId"] = boost::any(*thirdPartyId);
    }
    if (callbackParams) {
      res["callbackParams"] = boost::any(*callbackParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("AliasType") != m.end() && !m["AliasType"].empty()) {
      aliasType = make_shared<string>(boost::any_cast<string>(m["AliasType"]));
    }
    if (m.find("AndroidPayload") != m.end() && !m["AndroidPayload"].empty()) {
      if (typeid(map<string, boost::any>) == m["AndroidPayload"].type()) {
        AndroidPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AndroidPayload"]));
        androidPayload = make_shared<AndroidPayload>(model1);
      }
    }
    if (m.find("AndroidShortPayload") != m.end() && !m["AndroidShortPayload"].empty()) {
      if (typeid(map<string, boost::any>) == m["AndroidShortPayload"].type()) {
        AndroidShortPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AndroidShortPayload"]));
        androidShortPayload = make_shared<AndroidShortPayload>(model1);
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
    if (m.find("ThirdPartyId") != m.end() && !m["ThirdPartyId"].empty()) {
      thirdPartyId = make_shared<string>(boost::any_cast<string>(m["ThirdPartyId"]));
    }
    if (m.find("callbackParams") != m.end() && !m["callbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["callbackParams"]));
    }
  }


  virtual ~SendByAliasRequest() = default;
};
class SendByAliasShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> aliasType{};
  shared_ptr<string> androidPayloadShrink{};
  shared_ptr<string> androidShortPayloadShrink{};
  shared_ptr<string> channelPropertiesShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> iosPayloadShrink{};
  shared_ptr<string> policyShrink{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};
  shared_ptr<string> thirdPartyId{};
  shared_ptr<string> callbackParams{};

  SendByAliasShrinkRequest() {}

  explicit SendByAliasShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (aliasType) {
      res["AliasType"] = boost::any(*aliasType);
    }
    if (androidPayloadShrink) {
      res["AndroidPayload"] = boost::any(*androidPayloadShrink);
    }
    if (androidShortPayloadShrink) {
      res["AndroidShortPayload"] = boost::any(*androidShortPayloadShrink);
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
    if (thirdPartyId) {
      res["ThirdPartyId"] = boost::any(*thirdPartyId);
    }
    if (callbackParams) {
      res["callbackParams"] = boost::any(*callbackParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("AliasType") != m.end() && !m["AliasType"].empty()) {
      aliasType = make_shared<string>(boost::any_cast<string>(m["AliasType"]));
    }
    if (m.find("AndroidPayload") != m.end() && !m["AndroidPayload"].empty()) {
      androidPayloadShrink = make_shared<string>(boost::any_cast<string>(m["AndroidPayload"]));
    }
    if (m.find("AndroidShortPayload") != m.end() && !m["AndroidShortPayload"].empty()) {
      androidShortPayloadShrink = make_shared<string>(boost::any_cast<string>(m["AndroidShortPayload"]));
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
    if (m.find("ThirdPartyId") != m.end() && !m["ThirdPartyId"].empty()) {
      thirdPartyId = make_shared<string>(boost::any_cast<string>(m["ThirdPartyId"]));
    }
    if (m.find("callbackParams") != m.end() && !m["callbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["callbackParams"]));
    }
  }


  virtual ~SendByAliasShrinkRequest() = default;
};
class SendByAliasResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> msgId{};

  SendByAliasResponseBodyData() {}

  explicit SendByAliasResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendByAliasResponseBodyData() = default;
};
class SendByAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SendByAliasResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendByAliasResponseBody() {}

  explicit SendByAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendByAliasResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SendByAliasResponseBodyData>(model1);
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


  virtual ~SendByAliasResponseBody() = default;
};
class SendByAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendByAliasResponseBody> body{};

  SendByAliasResponse() {}

  explicit SendByAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendByAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendByAliasResponseBody>(model1);
      }
    }
  }


  virtual ~SendByAliasResponse() = default;
};
class SendByAliasFileIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliasType{};
  shared_ptr<AndroidPayload> androidPayload{};
  shared_ptr<AndroidShortPayload> androidShortPayload{};
  shared_ptr<ChannelProperties> channelProperties{};
  shared_ptr<string> description{};
  shared_ptr<string> fileId{};
  shared_ptr<IosPayload> iosPayload{};
  shared_ptr<Policy> policy{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};
  shared_ptr<string> thirdPartyId{};
  shared_ptr<string> callbackParams{};

  SendByAliasFileIdRequest() {}

  explicit SendByAliasFileIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasType) {
      res["AliasType"] = boost::any(*aliasType);
    }
    if (androidPayload) {
      res["AndroidPayload"] = androidPayload ? boost::any(androidPayload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (androidShortPayload) {
      res["AndroidShortPayload"] = androidShortPayload ? boost::any(androidShortPayload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (channelProperties) {
      res["ChannelProperties"] = channelProperties ? boost::any(channelProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
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
    if (thirdPartyId) {
      res["ThirdPartyId"] = boost::any(*thirdPartyId);
    }
    if (callbackParams) {
      res["callbackParams"] = boost::any(*callbackParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasType") != m.end() && !m["AliasType"].empty()) {
      aliasType = make_shared<string>(boost::any_cast<string>(m["AliasType"]));
    }
    if (m.find("AndroidPayload") != m.end() && !m["AndroidPayload"].empty()) {
      if (typeid(map<string, boost::any>) == m["AndroidPayload"].type()) {
        AndroidPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AndroidPayload"]));
        androidPayload = make_shared<AndroidPayload>(model1);
      }
    }
    if (m.find("AndroidShortPayload") != m.end() && !m["AndroidShortPayload"].empty()) {
      if (typeid(map<string, boost::any>) == m["AndroidShortPayload"].type()) {
        AndroidShortPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AndroidShortPayload"]));
        androidShortPayload = make_shared<AndroidShortPayload>(model1);
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
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
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
    if (m.find("ThirdPartyId") != m.end() && !m["ThirdPartyId"].empty()) {
      thirdPartyId = make_shared<string>(boost::any_cast<string>(m["ThirdPartyId"]));
    }
    if (m.find("callbackParams") != m.end() && !m["callbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["callbackParams"]));
    }
  }


  virtual ~SendByAliasFileIdRequest() = default;
};
class SendByAliasFileIdShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliasType{};
  shared_ptr<string> androidPayloadShrink{};
  shared_ptr<string> androidShortPayloadShrink{};
  shared_ptr<string> channelPropertiesShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> fileId{};
  shared_ptr<string> iosPayloadShrink{};
  shared_ptr<string> policyShrink{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};
  shared_ptr<string> thirdPartyId{};
  shared_ptr<string> callbackParams{};

  SendByAliasFileIdShrinkRequest() {}

  explicit SendByAliasFileIdShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasType) {
      res["AliasType"] = boost::any(*aliasType);
    }
    if (androidPayloadShrink) {
      res["AndroidPayload"] = boost::any(*androidPayloadShrink);
    }
    if (androidShortPayloadShrink) {
      res["AndroidShortPayload"] = boost::any(*androidShortPayloadShrink);
    }
    if (channelPropertiesShrink) {
      res["ChannelProperties"] = boost::any(*channelPropertiesShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
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
    if (thirdPartyId) {
      res["ThirdPartyId"] = boost::any(*thirdPartyId);
    }
    if (callbackParams) {
      res["callbackParams"] = boost::any(*callbackParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasType") != m.end() && !m["AliasType"].empty()) {
      aliasType = make_shared<string>(boost::any_cast<string>(m["AliasType"]));
    }
    if (m.find("AndroidPayload") != m.end() && !m["AndroidPayload"].empty()) {
      androidPayloadShrink = make_shared<string>(boost::any_cast<string>(m["AndroidPayload"]));
    }
    if (m.find("AndroidShortPayload") != m.end() && !m["AndroidShortPayload"].empty()) {
      androidShortPayloadShrink = make_shared<string>(boost::any_cast<string>(m["AndroidShortPayload"]));
    }
    if (m.find("ChannelProperties") != m.end() && !m["ChannelProperties"].empty()) {
      channelPropertiesShrink = make_shared<string>(boost::any_cast<string>(m["ChannelProperties"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
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
    if (m.find("ThirdPartyId") != m.end() && !m["ThirdPartyId"].empty()) {
      thirdPartyId = make_shared<string>(boost::any_cast<string>(m["ThirdPartyId"]));
    }
    if (m.find("callbackParams") != m.end() && !m["callbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["callbackParams"]));
    }
  }


  virtual ~SendByAliasFileIdShrinkRequest() = default;
};
class SendByAliasFileIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> msgId{};

  SendByAliasFileIdResponseBodyData() {}

  explicit SendByAliasFileIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendByAliasFileIdResponseBodyData() = default;
};
class SendByAliasFileIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SendByAliasFileIdResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendByAliasFileIdResponseBody() {}

  explicit SendByAliasFileIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendByAliasFileIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SendByAliasFileIdResponseBodyData>(model1);
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


  virtual ~SendByAliasFileIdResponseBody() = default;
};
class SendByAliasFileIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendByAliasFileIdResponseBody> body{};

  SendByAliasFileIdResponse() {}

  explicit SendByAliasFileIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendByAliasFileIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendByAliasFileIdResponseBody>(model1);
      }
    }
  }


  virtual ~SendByAliasFileIdResponse() = default;
};
class SendByAppRequest : public Darabonba::Model {
public:
  shared_ptr<AndroidPayload> androidPayload{};
  shared_ptr<AndroidShortPayload> androidShortPayload{};
  shared_ptr<ChannelProperties> channelProperties{};
  shared_ptr<string> description{};
  shared_ptr<IosPayload> iosPayload{};
  shared_ptr<Policy> policy{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};
  shared_ptr<string> thirdPartyId{};
  shared_ptr<string> callbackParams{};

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
    if (androidShortPayload) {
      res["AndroidShortPayload"] = androidShortPayload ? boost::any(androidShortPayload->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (thirdPartyId) {
      res["ThirdPartyId"] = boost::any(*thirdPartyId);
    }
    if (callbackParams) {
      res["callbackParams"] = boost::any(*callbackParams);
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
    if (m.find("AndroidShortPayload") != m.end() && !m["AndroidShortPayload"].empty()) {
      if (typeid(map<string, boost::any>) == m["AndroidShortPayload"].type()) {
        AndroidShortPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AndroidShortPayload"]));
        androidShortPayload = make_shared<AndroidShortPayload>(model1);
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
    if (m.find("ThirdPartyId") != m.end() && !m["ThirdPartyId"].empty()) {
      thirdPartyId = make_shared<string>(boost::any_cast<string>(m["ThirdPartyId"]));
    }
    if (m.find("callbackParams") != m.end() && !m["callbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["callbackParams"]));
    }
  }


  virtual ~SendByAppRequest() = default;
};
class SendByAppShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> androidPayloadShrink{};
  shared_ptr<string> androidShortPayloadShrink{};
  shared_ptr<string> channelPropertiesShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> iosPayloadShrink{};
  shared_ptr<string> policyShrink{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};
  shared_ptr<string> thirdPartyId{};
  shared_ptr<string> callbackParams{};

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
    if (androidShortPayloadShrink) {
      res["AndroidShortPayload"] = boost::any(*androidShortPayloadShrink);
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
    if (thirdPartyId) {
      res["ThirdPartyId"] = boost::any(*thirdPartyId);
    }
    if (callbackParams) {
      res["callbackParams"] = boost::any(*callbackParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidPayload") != m.end() && !m["AndroidPayload"].empty()) {
      androidPayloadShrink = make_shared<string>(boost::any_cast<string>(m["AndroidPayload"]));
    }
    if (m.find("AndroidShortPayload") != m.end() && !m["AndroidShortPayload"].empty()) {
      androidShortPayloadShrink = make_shared<string>(boost::any_cast<string>(m["AndroidShortPayload"]));
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
    if (m.find("ThirdPartyId") != m.end() && !m["ThirdPartyId"].empty()) {
      thirdPartyId = make_shared<string>(boost::any_cast<string>(m["ThirdPartyId"]));
    }
    if (m.find("callbackParams") != m.end() && !m["callbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["callbackParams"]));
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
  shared_ptr<AndroidShortPayload> androidShortPayload{};
  shared_ptr<ChannelProperties> channelProperties{};
  shared_ptr<string> description{};
  shared_ptr<string> deviceTokens{};
  shared_ptr<IosPayload> iosPayload{};
  shared_ptr<Policy> policy{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};
  shared_ptr<string> thirdPartyId{};
  shared_ptr<string> callbackParams{};

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
    if (androidShortPayload) {
      res["AndroidShortPayload"] = androidShortPayload ? boost::any(androidShortPayload->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (thirdPartyId) {
      res["ThirdPartyId"] = boost::any(*thirdPartyId);
    }
    if (callbackParams) {
      res["callbackParams"] = boost::any(*callbackParams);
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
    if (m.find("AndroidShortPayload") != m.end() && !m["AndroidShortPayload"].empty()) {
      if (typeid(map<string, boost::any>) == m["AndroidShortPayload"].type()) {
        AndroidShortPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AndroidShortPayload"]));
        androidShortPayload = make_shared<AndroidShortPayload>(model1);
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
    if (m.find("ThirdPartyId") != m.end() && !m["ThirdPartyId"].empty()) {
      thirdPartyId = make_shared<string>(boost::any_cast<string>(m["ThirdPartyId"]));
    }
    if (m.find("callbackParams") != m.end() && !m["callbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["callbackParams"]));
    }
  }


  virtual ~SendByDeviceRequest() = default;
};
class SendByDeviceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> androidPayloadShrink{};
  shared_ptr<string> androidShortPayloadShrink{};
  shared_ptr<string> channelPropertiesShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> deviceTokens{};
  shared_ptr<string> iosPayloadShrink{};
  shared_ptr<string> policyShrink{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};
  shared_ptr<string> thirdPartyId{};
  shared_ptr<string> callbackParams{};

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
    if (androidShortPayloadShrink) {
      res["AndroidShortPayload"] = boost::any(*androidShortPayloadShrink);
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
    if (thirdPartyId) {
      res["ThirdPartyId"] = boost::any(*thirdPartyId);
    }
    if (callbackParams) {
      res["callbackParams"] = boost::any(*callbackParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidPayload") != m.end() && !m["AndroidPayload"].empty()) {
      androidPayloadShrink = make_shared<string>(boost::any_cast<string>(m["AndroidPayload"]));
    }
    if (m.find("AndroidShortPayload") != m.end() && !m["AndroidShortPayload"].empty()) {
      androidShortPayloadShrink = make_shared<string>(boost::any_cast<string>(m["AndroidShortPayload"]));
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
    if (m.find("ThirdPartyId") != m.end() && !m["ThirdPartyId"].empty()) {
      thirdPartyId = make_shared<string>(boost::any_cast<string>(m["ThirdPartyId"]));
    }
    if (m.find("callbackParams") != m.end() && !m["callbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["callbackParams"]));
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
        SendByDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendByDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~SendByDeviceResponse() = default;
};
class SendByDeviceFileIdRequest : public Darabonba::Model {
public:
  shared_ptr<AndroidPayload> androidPayload{};
  shared_ptr<AndroidShortPayload> androidShortPayload{};
  shared_ptr<ChannelProperties> channelProperties{};
  shared_ptr<string> description{};
  shared_ptr<string> fileId{};
  shared_ptr<IosPayload> iosPayload{};
  shared_ptr<Policy> policy{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};
  shared_ptr<string> thirdPartyId{};
  shared_ptr<string> callbackParams{};

  SendByDeviceFileIdRequest() {}

  explicit SendByDeviceFileIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidPayload) {
      res["AndroidPayload"] = androidPayload ? boost::any(androidPayload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (androidShortPayload) {
      res["AndroidShortPayload"] = androidShortPayload ? boost::any(androidShortPayload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (channelProperties) {
      res["ChannelProperties"] = channelProperties ? boost::any(channelProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
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
    if (thirdPartyId) {
      res["ThirdPartyId"] = boost::any(*thirdPartyId);
    }
    if (callbackParams) {
      res["callbackParams"] = boost::any(*callbackParams);
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
    if (m.find("AndroidShortPayload") != m.end() && !m["AndroidShortPayload"].empty()) {
      if (typeid(map<string, boost::any>) == m["AndroidShortPayload"].type()) {
        AndroidShortPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AndroidShortPayload"]));
        androidShortPayload = make_shared<AndroidShortPayload>(model1);
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
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
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
    if (m.find("ThirdPartyId") != m.end() && !m["ThirdPartyId"].empty()) {
      thirdPartyId = make_shared<string>(boost::any_cast<string>(m["ThirdPartyId"]));
    }
    if (m.find("callbackParams") != m.end() && !m["callbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["callbackParams"]));
    }
  }


  virtual ~SendByDeviceFileIdRequest() = default;
};
class SendByDeviceFileIdShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> androidPayloadShrink{};
  shared_ptr<string> androidShortPayloadShrink{};
  shared_ptr<string> channelPropertiesShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> fileId{};
  shared_ptr<string> iosPayloadShrink{};
  shared_ptr<string> policyShrink{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};
  shared_ptr<string> thirdPartyId{};
  shared_ptr<string> callbackParams{};

  SendByDeviceFileIdShrinkRequest() {}

  explicit SendByDeviceFileIdShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidPayloadShrink) {
      res["AndroidPayload"] = boost::any(*androidPayloadShrink);
    }
    if (androidShortPayloadShrink) {
      res["AndroidShortPayload"] = boost::any(*androidShortPayloadShrink);
    }
    if (channelPropertiesShrink) {
      res["ChannelProperties"] = boost::any(*channelPropertiesShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
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
    if (thirdPartyId) {
      res["ThirdPartyId"] = boost::any(*thirdPartyId);
    }
    if (callbackParams) {
      res["callbackParams"] = boost::any(*callbackParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidPayload") != m.end() && !m["AndroidPayload"].empty()) {
      androidPayloadShrink = make_shared<string>(boost::any_cast<string>(m["AndroidPayload"]));
    }
    if (m.find("AndroidShortPayload") != m.end() && !m["AndroidShortPayload"].empty()) {
      androidShortPayloadShrink = make_shared<string>(boost::any_cast<string>(m["AndroidShortPayload"]));
    }
    if (m.find("ChannelProperties") != m.end() && !m["ChannelProperties"].empty()) {
      channelPropertiesShrink = make_shared<string>(boost::any_cast<string>(m["ChannelProperties"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
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
    if (m.find("ThirdPartyId") != m.end() && !m["ThirdPartyId"].empty()) {
      thirdPartyId = make_shared<string>(boost::any_cast<string>(m["ThirdPartyId"]));
    }
    if (m.find("callbackParams") != m.end() && !m["callbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["callbackParams"]));
    }
  }


  virtual ~SendByDeviceFileIdShrinkRequest() = default;
};
class SendByDeviceFileIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> msgId{};

  SendByDeviceFileIdResponseBodyData() {}

  explicit SendByDeviceFileIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendByDeviceFileIdResponseBodyData() = default;
};
class SendByDeviceFileIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SendByDeviceFileIdResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendByDeviceFileIdResponseBody() {}

  explicit SendByDeviceFileIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendByDeviceFileIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SendByDeviceFileIdResponseBodyData>(model1);
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


  virtual ~SendByDeviceFileIdResponseBody() = default;
};
class SendByDeviceFileIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendByDeviceFileIdResponseBody> body{};

  SendByDeviceFileIdResponse() {}

  explicit SendByDeviceFileIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendByDeviceFileIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendByDeviceFileIdResponseBody>(model1);
      }
    }
  }


  virtual ~SendByDeviceFileIdResponse() = default;
};
class SendByFilterRequest : public Darabonba::Model {
public:
  shared_ptr<AndroidPayload> androidPayload{};
  shared_ptr<AndroidShortPayload> androidShortPayload{};
  shared_ptr<ChannelProperties> channelProperties{};
  shared_ptr<string> description{};
  shared_ptr<string> filter{};
  shared_ptr<IosPayload> iosPayload{};
  shared_ptr<Policy> policy{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};
  shared_ptr<string> thirdPartyId{};
  shared_ptr<string> callbackParams{};

  SendByFilterRequest() {}

  explicit SendByFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidPayload) {
      res["AndroidPayload"] = androidPayload ? boost::any(androidPayload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (androidShortPayload) {
      res["AndroidShortPayload"] = androidShortPayload ? boost::any(androidShortPayload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (channelProperties) {
      res["ChannelProperties"] = channelProperties ? boost::any(channelProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
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
    if (thirdPartyId) {
      res["ThirdPartyId"] = boost::any(*thirdPartyId);
    }
    if (callbackParams) {
      res["callbackParams"] = boost::any(*callbackParams);
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
    if (m.find("AndroidShortPayload") != m.end() && !m["AndroidShortPayload"].empty()) {
      if (typeid(map<string, boost::any>) == m["AndroidShortPayload"].type()) {
        AndroidShortPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AndroidShortPayload"]));
        androidShortPayload = make_shared<AndroidShortPayload>(model1);
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
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
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
    if (m.find("ThirdPartyId") != m.end() && !m["ThirdPartyId"].empty()) {
      thirdPartyId = make_shared<string>(boost::any_cast<string>(m["ThirdPartyId"]));
    }
    if (m.find("callbackParams") != m.end() && !m["callbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["callbackParams"]));
    }
  }


  virtual ~SendByFilterRequest() = default;
};
class SendByFilterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> androidPayloadShrink{};
  shared_ptr<AndroidShortPayload> androidShortPayload{};
  shared_ptr<string> channelPropertiesShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> filter{};
  shared_ptr<string> iosPayloadShrink{};
  shared_ptr<string> policyShrink{};
  shared_ptr<bool> productionMode{};
  shared_ptr<long> receiptType{};
  shared_ptr<string> receiptUrl{};
  shared_ptr<string> thirdPartyId{};
  shared_ptr<string> callbackParams{};

  SendByFilterShrinkRequest() {}

  explicit SendByFilterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidPayloadShrink) {
      res["AndroidPayload"] = boost::any(*androidPayloadShrink);
    }
    if (androidShortPayload) {
      res["AndroidShortPayload"] = androidShortPayload ? boost::any(androidShortPayload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (channelPropertiesShrink) {
      res["ChannelProperties"] = boost::any(*channelPropertiesShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
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
    if (thirdPartyId) {
      res["ThirdPartyId"] = boost::any(*thirdPartyId);
    }
    if (callbackParams) {
      res["callbackParams"] = boost::any(*callbackParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidPayload") != m.end() && !m["AndroidPayload"].empty()) {
      androidPayloadShrink = make_shared<string>(boost::any_cast<string>(m["AndroidPayload"]));
    }
    if (m.find("AndroidShortPayload") != m.end() && !m["AndroidShortPayload"].empty()) {
      if (typeid(map<string, boost::any>) == m["AndroidShortPayload"].type()) {
        AndroidShortPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AndroidShortPayload"]));
        androidShortPayload = make_shared<AndroidShortPayload>(model1);
      }
    }
    if (m.find("ChannelProperties") != m.end() && !m["ChannelProperties"].empty()) {
      channelPropertiesShrink = make_shared<string>(boost::any_cast<string>(m["ChannelProperties"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
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
    if (m.find("ThirdPartyId") != m.end() && !m["ThirdPartyId"].empty()) {
      thirdPartyId = make_shared<string>(boost::any_cast<string>(m["ThirdPartyId"]));
    }
    if (m.find("callbackParams") != m.end() && !m["callbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["callbackParams"]));
    }
  }


  virtual ~SendByFilterShrinkRequest() = default;
};
class SendByFilterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> msgId{};

  SendByFilterResponseBodyData() {}

  explicit SendByFilterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendByFilterResponseBodyData() = default;
};
class SendByFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SendByFilterResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendByFilterResponseBody() {}

  explicit SendByFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendByFilterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SendByFilterResponseBodyData>(model1);
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


  virtual ~SendByFilterResponseBody() = default;
};
class SendByFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendByFilterResponseBody> body{};

  SendByFilterResponse() {}

  explicit SendByFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendByFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendByFilterResponseBody>(model1);
      }
    }
  }


  virtual ~SendByFilterResponse() = default;
};
class UploadDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceTokens{};

  UploadDeviceRequest() {}

  explicit UploadDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceTokens) {
      res["DeviceTokens"] = boost::any(*deviceTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceTokens") != m.end() && !m["DeviceTokens"].empty()) {
      deviceTokens = make_shared<string>(boost::any_cast<string>(m["DeviceTokens"]));
    }
  }


  virtual ~UploadDeviceRequest() = default;
};
class UploadDeviceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> fileId{};

  UploadDeviceResponseBodyData() {}

  explicit UploadDeviceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
  }


  virtual ~UploadDeviceResponseBodyData() = default;
};
class UploadDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UploadDeviceResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UploadDeviceResponseBody() {}

  explicit UploadDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadDeviceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UploadDeviceResponseBodyData>(model1);
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


  virtual ~UploadDeviceResponseBody() = default;
};
class UploadDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadDeviceResponseBody> body{};

  UploadDeviceResponse() {}

  explicit UploadDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~UploadDeviceResponse() = default;
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
  CancelByMsgIdResponse cancelByMsgIdWithOptions(shared_ptr<CancelByMsgIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelByMsgIdResponse cancelByMsgId(shared_ptr<CancelByMsgIdRequest> request);
  QueryMsgStatResponse queryMsgStatWithOptions(shared_ptr<QueryMsgStatRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMsgStatResponse queryMsgStat(shared_ptr<QueryMsgStatRequest> request);
  SendByAliasResponse sendByAliasWithOptions(shared_ptr<SendByAliasRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendByAliasResponse sendByAlias(shared_ptr<SendByAliasRequest> request);
  SendByAliasFileIdResponse sendByAliasFileIdWithOptions(shared_ptr<SendByAliasFileIdRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendByAliasFileIdResponse sendByAliasFileId(shared_ptr<SendByAliasFileIdRequest> request);
  SendByAppResponse sendByAppWithOptions(shared_ptr<SendByAppRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendByAppResponse sendByApp(shared_ptr<SendByAppRequest> request);
  SendByDeviceResponse sendByDeviceWithOptions(shared_ptr<SendByDeviceRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendByDeviceResponse sendByDevice(shared_ptr<SendByDeviceRequest> request);
  SendByDeviceFileIdResponse sendByDeviceFileIdWithOptions(shared_ptr<SendByDeviceFileIdRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendByDeviceFileIdResponse sendByDeviceFileId(shared_ptr<SendByDeviceFileIdRequest> request);
  SendByFilterResponse sendByFilterWithOptions(shared_ptr<SendByFilterRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendByFilterResponse sendByFilter(shared_ptr<SendByFilterRequest> request);
  UploadDeviceResponse uploadDeviceWithOptions(shared_ptr<UploadDeviceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadDeviceResponse uploadDevice(shared_ptr<UploadDeviceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Umeng-push20220225

#endif
