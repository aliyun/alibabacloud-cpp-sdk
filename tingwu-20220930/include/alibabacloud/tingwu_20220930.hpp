// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_TINGWU20220930_H_
#define ALIBABACLOUD_TINGWU20220930_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Tingwu20220930 {
class CreateFileTransRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> abilityParams{};
  shared_ptr<string> appKey{};
  shared_ptr<map<string, boost::any>> asrParams{};
  shared_ptr<string> audioLanguage{};
  shared_ptr<string> audioOssBucket{};
  shared_ptr<string> audioOssPath{};
  shared_ptr<bool> audioOutputEnabled{};
  shared_ptr<string> audioOutputOssBucket{};
  shared_ptr<string> audioOutputOssPath{};
  shared_ptr<string> audioRoleNum{};
  shared_ptr<bool> audioSegmentsEnabled{};
  shared_ptr<map<string, boost::any>> labParams{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> transKey{};
  shared_ptr<string> transResultOssBucket{};
  shared_ptr<string> transResultOssPath{};
  shared_ptr<bool> videoOutputEnabled{};
  shared_ptr<string> videoOutputOssBucket{};
  shared_ptr<string> videoOutputOssPath{};

  CreateFileTransRequest() {}

  explicit CreateFileTransRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abilityParams) {
      res["AbilityParams"] = boost::any(*abilityParams);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (asrParams) {
      res["AsrParams"] = boost::any(*asrParams);
    }
    if (audioLanguage) {
      res["AudioLanguage"] = boost::any(*audioLanguage);
    }
    if (audioOssBucket) {
      res["AudioOssBucket"] = boost::any(*audioOssBucket);
    }
    if (audioOssPath) {
      res["AudioOssPath"] = boost::any(*audioOssPath);
    }
    if (audioOutputEnabled) {
      res["AudioOutputEnabled"] = boost::any(*audioOutputEnabled);
    }
    if (audioOutputOssBucket) {
      res["AudioOutputOssBucket"] = boost::any(*audioOutputOssBucket);
    }
    if (audioOutputOssPath) {
      res["AudioOutputOssPath"] = boost::any(*audioOutputOssPath);
    }
    if (audioRoleNum) {
      res["AudioRoleNum"] = boost::any(*audioRoleNum);
    }
    if (audioSegmentsEnabled) {
      res["AudioSegmentsEnabled"] = boost::any(*audioSegmentsEnabled);
    }
    if (labParams) {
      res["LabParams"] = boost::any(*labParams);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (transKey) {
      res["TransKey"] = boost::any(*transKey);
    }
    if (transResultOssBucket) {
      res["TransResultOssBucket"] = boost::any(*transResultOssBucket);
    }
    if (transResultOssPath) {
      res["TransResultOssPath"] = boost::any(*transResultOssPath);
    }
    if (videoOutputEnabled) {
      res["VideoOutputEnabled"] = boost::any(*videoOutputEnabled);
    }
    if (videoOutputOssBucket) {
      res["VideoOutputOssBucket"] = boost::any(*videoOutputOssBucket);
    }
    if (videoOutputOssPath) {
      res["VideoOutputOssPath"] = boost::any(*videoOutputOssPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbilityParams") != m.end() && !m["AbilityParams"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AbilityParams"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      abilityParams = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("AsrParams") != m.end() && !m["AsrParams"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AsrParams"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      asrParams = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("AudioLanguage") != m.end() && !m["AudioLanguage"].empty()) {
      audioLanguage = make_shared<string>(boost::any_cast<string>(m["AudioLanguage"]));
    }
    if (m.find("AudioOssBucket") != m.end() && !m["AudioOssBucket"].empty()) {
      audioOssBucket = make_shared<string>(boost::any_cast<string>(m["AudioOssBucket"]));
    }
    if (m.find("AudioOssPath") != m.end() && !m["AudioOssPath"].empty()) {
      audioOssPath = make_shared<string>(boost::any_cast<string>(m["AudioOssPath"]));
    }
    if (m.find("AudioOutputEnabled") != m.end() && !m["AudioOutputEnabled"].empty()) {
      audioOutputEnabled = make_shared<bool>(boost::any_cast<bool>(m["AudioOutputEnabled"]));
    }
    if (m.find("AudioOutputOssBucket") != m.end() && !m["AudioOutputOssBucket"].empty()) {
      audioOutputOssBucket = make_shared<string>(boost::any_cast<string>(m["AudioOutputOssBucket"]));
    }
    if (m.find("AudioOutputOssPath") != m.end() && !m["AudioOutputOssPath"].empty()) {
      audioOutputOssPath = make_shared<string>(boost::any_cast<string>(m["AudioOutputOssPath"]));
    }
    if (m.find("AudioRoleNum") != m.end() && !m["AudioRoleNum"].empty()) {
      audioRoleNum = make_shared<string>(boost::any_cast<string>(m["AudioRoleNum"]));
    }
    if (m.find("AudioSegmentsEnabled") != m.end() && !m["AudioSegmentsEnabled"].empty()) {
      audioSegmentsEnabled = make_shared<bool>(boost::any_cast<bool>(m["AudioSegmentsEnabled"]));
    }
    if (m.find("LabParams") != m.end() && !m["LabParams"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["LabParams"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labParams = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TransKey") != m.end() && !m["TransKey"].empty()) {
      transKey = make_shared<string>(boost::any_cast<string>(m["TransKey"]));
    }
    if (m.find("TransResultOssBucket") != m.end() && !m["TransResultOssBucket"].empty()) {
      transResultOssBucket = make_shared<string>(boost::any_cast<string>(m["TransResultOssBucket"]));
    }
    if (m.find("TransResultOssPath") != m.end() && !m["TransResultOssPath"].empty()) {
      transResultOssPath = make_shared<string>(boost::any_cast<string>(m["TransResultOssPath"]));
    }
    if (m.find("VideoOutputEnabled") != m.end() && !m["VideoOutputEnabled"].empty()) {
      videoOutputEnabled = make_shared<bool>(boost::any_cast<bool>(m["VideoOutputEnabled"]));
    }
    if (m.find("VideoOutputOssBucket") != m.end() && !m["VideoOutputOssBucket"].empty()) {
      videoOutputOssBucket = make_shared<string>(boost::any_cast<string>(m["VideoOutputOssBucket"]));
    }
    if (m.find("VideoOutputOssPath") != m.end() && !m["VideoOutputOssPath"].empty()) {
      videoOutputOssPath = make_shared<string>(boost::any_cast<string>(m["VideoOutputOssPath"]));
    }
  }


  virtual ~CreateFileTransRequest() = default;
};
class CreateFileTransResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> transId{};
  shared_ptr<string> transKey{};

  CreateFileTransResponseBodyData() {}

  explicit CreateFileTransResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (transId) {
      res["TransId"] = boost::any(*transId);
    }
    if (transKey) {
      res["TransKey"] = boost::any(*transKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TransId") != m.end() && !m["TransId"].empty()) {
      transId = make_shared<string>(boost::any_cast<string>(m["TransId"]));
    }
    if (m.find("TransKey") != m.end() && !m["TransKey"].empty()) {
      transKey = make_shared<string>(boost::any_cast<string>(m["TransKey"]));
    }
  }


  virtual ~CreateFileTransResponseBodyData() = default;
};
class CreateFileTransResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateFileTransResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateFileTransResponseBody() {}

  explicit CreateFileTransResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateFileTransResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateFileTransResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFileTransResponseBody() = default;
};
class CreateFileTransResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFileTransResponseBody> body{};

  CreateFileTransResponse() {}

  explicit CreateFileTransResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFileTransResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFileTransResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFileTransResponse() = default;
};
class CreateMeetingTransRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> abilityParams{};
  shared_ptr<string> appKey{};
  shared_ptr<map<string, boost::any>> asrParams{};
  shared_ptr<long> audioBitRate{};
  shared_ptr<string> audioFormat{};
  shared_ptr<string> audioLanguage{};
  shared_ptr<bool> audioOutputEnabled{};
  shared_ptr<string> audioOutputOssBucket{};
  shared_ptr<string> audioOutputOssPath{};
  shared_ptr<string> audioPackage{};
  shared_ptr<long> audioSampleRate{};
  shared_ptr<bool> audioSegmentsEnabled{};
  shared_ptr<bool> docResultEnabled{};
  shared_ptr<map<string, boost::any>> labParams{};
  shared_ptr<string> meetingKey{};
  shared_ptr<bool> meetingResultEnabled{};
  shared_ptr<string> meetingResultOssBucket{};
  shared_ptr<string> meetingResultOssPath{};
  shared_ptr<long> realtimeActiveResultLevel{};
  shared_ptr<bool> realtimeResultEnabled{};
  shared_ptr<long> realtimeResultLevel{};
  shared_ptr<bool> realtimeResultMeetingInfoEnabled{};
  shared_ptr<bool> realtimeResultWordsEnabled{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<long> translateActiveResultLevel{};
  shared_ptr<string> translateLanguages{};
  shared_ptr<bool> translateResultEnabled{};
  shared_ptr<long> translateResultLevel{};

  CreateMeetingTransRequest() {}

  explicit CreateMeetingTransRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abilityParams) {
      res["AbilityParams"] = boost::any(*abilityParams);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (asrParams) {
      res["AsrParams"] = boost::any(*asrParams);
    }
    if (audioBitRate) {
      res["AudioBitRate"] = boost::any(*audioBitRate);
    }
    if (audioFormat) {
      res["AudioFormat"] = boost::any(*audioFormat);
    }
    if (audioLanguage) {
      res["AudioLanguage"] = boost::any(*audioLanguage);
    }
    if (audioOutputEnabled) {
      res["AudioOutputEnabled"] = boost::any(*audioOutputEnabled);
    }
    if (audioOutputOssBucket) {
      res["AudioOutputOssBucket"] = boost::any(*audioOutputOssBucket);
    }
    if (audioOutputOssPath) {
      res["AudioOutputOssPath"] = boost::any(*audioOutputOssPath);
    }
    if (audioPackage) {
      res["AudioPackage"] = boost::any(*audioPackage);
    }
    if (audioSampleRate) {
      res["AudioSampleRate"] = boost::any(*audioSampleRate);
    }
    if (audioSegmentsEnabled) {
      res["AudioSegmentsEnabled"] = boost::any(*audioSegmentsEnabled);
    }
    if (docResultEnabled) {
      res["DocResultEnabled"] = boost::any(*docResultEnabled);
    }
    if (labParams) {
      res["LabParams"] = boost::any(*labParams);
    }
    if (meetingKey) {
      res["MeetingKey"] = boost::any(*meetingKey);
    }
    if (meetingResultEnabled) {
      res["MeetingResultEnabled"] = boost::any(*meetingResultEnabled);
    }
    if (meetingResultOssBucket) {
      res["MeetingResultOssBucket"] = boost::any(*meetingResultOssBucket);
    }
    if (meetingResultOssPath) {
      res["MeetingResultOssPath"] = boost::any(*meetingResultOssPath);
    }
    if (realtimeActiveResultLevel) {
      res["RealtimeActiveResultLevel"] = boost::any(*realtimeActiveResultLevel);
    }
    if (realtimeResultEnabled) {
      res["RealtimeResultEnabled"] = boost::any(*realtimeResultEnabled);
    }
    if (realtimeResultLevel) {
      res["RealtimeResultLevel"] = boost::any(*realtimeResultLevel);
    }
    if (realtimeResultMeetingInfoEnabled) {
      res["RealtimeResultMeetingInfoEnabled"] = boost::any(*realtimeResultMeetingInfoEnabled);
    }
    if (realtimeResultWordsEnabled) {
      res["RealtimeResultWordsEnabled"] = boost::any(*realtimeResultWordsEnabled);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (translateActiveResultLevel) {
      res["TranslateActiveResultLevel"] = boost::any(*translateActiveResultLevel);
    }
    if (translateLanguages) {
      res["TranslateLanguages"] = boost::any(*translateLanguages);
    }
    if (translateResultEnabled) {
      res["TranslateResultEnabled"] = boost::any(*translateResultEnabled);
    }
    if (translateResultLevel) {
      res["TranslateResultLevel"] = boost::any(*translateResultLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbilityParams") != m.end() && !m["AbilityParams"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AbilityParams"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      abilityParams = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("AsrParams") != m.end() && !m["AsrParams"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AsrParams"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      asrParams = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("AudioBitRate") != m.end() && !m["AudioBitRate"].empty()) {
      audioBitRate = make_shared<long>(boost::any_cast<long>(m["AudioBitRate"]));
    }
    if (m.find("AudioFormat") != m.end() && !m["AudioFormat"].empty()) {
      audioFormat = make_shared<string>(boost::any_cast<string>(m["AudioFormat"]));
    }
    if (m.find("AudioLanguage") != m.end() && !m["AudioLanguage"].empty()) {
      audioLanguage = make_shared<string>(boost::any_cast<string>(m["AudioLanguage"]));
    }
    if (m.find("AudioOutputEnabled") != m.end() && !m["AudioOutputEnabled"].empty()) {
      audioOutputEnabled = make_shared<bool>(boost::any_cast<bool>(m["AudioOutputEnabled"]));
    }
    if (m.find("AudioOutputOssBucket") != m.end() && !m["AudioOutputOssBucket"].empty()) {
      audioOutputOssBucket = make_shared<string>(boost::any_cast<string>(m["AudioOutputOssBucket"]));
    }
    if (m.find("AudioOutputOssPath") != m.end() && !m["AudioOutputOssPath"].empty()) {
      audioOutputOssPath = make_shared<string>(boost::any_cast<string>(m["AudioOutputOssPath"]));
    }
    if (m.find("AudioPackage") != m.end() && !m["AudioPackage"].empty()) {
      audioPackage = make_shared<string>(boost::any_cast<string>(m["AudioPackage"]));
    }
    if (m.find("AudioSampleRate") != m.end() && !m["AudioSampleRate"].empty()) {
      audioSampleRate = make_shared<long>(boost::any_cast<long>(m["AudioSampleRate"]));
    }
    if (m.find("AudioSegmentsEnabled") != m.end() && !m["AudioSegmentsEnabled"].empty()) {
      audioSegmentsEnabled = make_shared<bool>(boost::any_cast<bool>(m["AudioSegmentsEnabled"]));
    }
    if (m.find("DocResultEnabled") != m.end() && !m["DocResultEnabled"].empty()) {
      docResultEnabled = make_shared<bool>(boost::any_cast<bool>(m["DocResultEnabled"]));
    }
    if (m.find("LabParams") != m.end() && !m["LabParams"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["LabParams"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labParams = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("MeetingKey") != m.end() && !m["MeetingKey"].empty()) {
      meetingKey = make_shared<string>(boost::any_cast<string>(m["MeetingKey"]));
    }
    if (m.find("MeetingResultEnabled") != m.end() && !m["MeetingResultEnabled"].empty()) {
      meetingResultEnabled = make_shared<bool>(boost::any_cast<bool>(m["MeetingResultEnabled"]));
    }
    if (m.find("MeetingResultOssBucket") != m.end() && !m["MeetingResultOssBucket"].empty()) {
      meetingResultOssBucket = make_shared<string>(boost::any_cast<string>(m["MeetingResultOssBucket"]));
    }
    if (m.find("MeetingResultOssPath") != m.end() && !m["MeetingResultOssPath"].empty()) {
      meetingResultOssPath = make_shared<string>(boost::any_cast<string>(m["MeetingResultOssPath"]));
    }
    if (m.find("RealtimeActiveResultLevel") != m.end() && !m["RealtimeActiveResultLevel"].empty()) {
      realtimeActiveResultLevel = make_shared<long>(boost::any_cast<long>(m["RealtimeActiveResultLevel"]));
    }
    if (m.find("RealtimeResultEnabled") != m.end() && !m["RealtimeResultEnabled"].empty()) {
      realtimeResultEnabled = make_shared<bool>(boost::any_cast<bool>(m["RealtimeResultEnabled"]));
    }
    if (m.find("RealtimeResultLevel") != m.end() && !m["RealtimeResultLevel"].empty()) {
      realtimeResultLevel = make_shared<long>(boost::any_cast<long>(m["RealtimeResultLevel"]));
    }
    if (m.find("RealtimeResultMeetingInfoEnabled") != m.end() && !m["RealtimeResultMeetingInfoEnabled"].empty()) {
      realtimeResultMeetingInfoEnabled = make_shared<bool>(boost::any_cast<bool>(m["RealtimeResultMeetingInfoEnabled"]));
    }
    if (m.find("RealtimeResultWordsEnabled") != m.end() && !m["RealtimeResultWordsEnabled"].empty()) {
      realtimeResultWordsEnabled = make_shared<bool>(boost::any_cast<bool>(m["RealtimeResultWordsEnabled"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TranslateActiveResultLevel") != m.end() && !m["TranslateActiveResultLevel"].empty()) {
      translateActiveResultLevel = make_shared<long>(boost::any_cast<long>(m["TranslateActiveResultLevel"]));
    }
    if (m.find("TranslateLanguages") != m.end() && !m["TranslateLanguages"].empty()) {
      translateLanguages = make_shared<string>(boost::any_cast<string>(m["TranslateLanguages"]));
    }
    if (m.find("TranslateResultEnabled") != m.end() && !m["TranslateResultEnabled"].empty()) {
      translateResultEnabled = make_shared<bool>(boost::any_cast<bool>(m["TranslateResultEnabled"]));
    }
    if (m.find("TranslateResultLevel") != m.end() && !m["TranslateResultLevel"].empty()) {
      translateResultLevel = make_shared<long>(boost::any_cast<long>(m["TranslateResultLevel"]));
    }
  }


  virtual ~CreateMeetingTransRequest() = default;
};
class CreateMeetingTransResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> meetingId{};
  shared_ptr<string> meetingJoinUrl{};
  shared_ptr<string> meetingKey{};

  CreateMeetingTransResponseBodyData() {}

  explicit CreateMeetingTransResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meetingId) {
      res["MeetingId"] = boost::any(*meetingId);
    }
    if (meetingJoinUrl) {
      res["MeetingJoinUrl"] = boost::any(*meetingJoinUrl);
    }
    if (meetingKey) {
      res["MeetingKey"] = boost::any(*meetingKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MeetingId") != m.end() && !m["MeetingId"].empty()) {
      meetingId = make_shared<string>(boost::any_cast<string>(m["MeetingId"]));
    }
    if (m.find("MeetingJoinUrl") != m.end() && !m["MeetingJoinUrl"].empty()) {
      meetingJoinUrl = make_shared<string>(boost::any_cast<string>(m["MeetingJoinUrl"]));
    }
    if (m.find("MeetingKey") != m.end() && !m["MeetingKey"].empty()) {
      meetingKey = make_shared<string>(boost::any_cast<string>(m["MeetingKey"]));
    }
  }


  virtual ~CreateMeetingTransResponseBodyData() = default;
};
class CreateMeetingTransResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateMeetingTransResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateMeetingTransResponseBody() {}

  explicit CreateMeetingTransResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateMeetingTransResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateMeetingTransResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateMeetingTransResponseBody() = default;
};
class CreateMeetingTransResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMeetingTransResponseBody> body{};

  CreateMeetingTransResponse() {}

  explicit CreateMeetingTransResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMeetingTransResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMeetingTransResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMeetingTransResponse() = default;
};
class GetFileTransResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> transId{};
  shared_ptr<string> transKey{};
  shared_ptr<string> transStatus{};

  GetFileTransResponseBodyData() {}

  explicit GetFileTransResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (transId) {
      res["TransId"] = boost::any(*transId);
    }
    if (transKey) {
      res["TransKey"] = boost::any(*transKey);
    }
    if (transStatus) {
      res["TransStatus"] = boost::any(*transStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TransId") != m.end() && !m["TransId"].empty()) {
      transId = make_shared<string>(boost::any_cast<string>(m["TransId"]));
    }
    if (m.find("TransKey") != m.end() && !m["TransKey"].empty()) {
      transKey = make_shared<string>(boost::any_cast<string>(m["TransKey"]));
    }
    if (m.find("TransStatus") != m.end() && !m["TransStatus"].empty()) {
      transStatus = make_shared<string>(boost::any_cast<string>(m["TransStatus"]));
    }
  }


  virtual ~GetFileTransResponseBodyData() = default;
};
class GetFileTransResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetFileTransResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetFileTransResponseBody() {}

  explicit GetFileTransResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetFileTransResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetFileTransResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetFileTransResponseBody() = default;
};
class GetFileTransResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFileTransResponseBody> body{};

  GetFileTransResponse() {}

  explicit GetFileTransResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFileTransResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFileTransResponseBody>(model1);
      }
    }
  }


  virtual ~GetFileTransResponse() = default;
};
class GetMeetingTransResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> meetingId{};
  shared_ptr<string> meetingKey{};
  shared_ptr<string> meetingStatus{};

  GetMeetingTransResponseBodyData() {}

  explicit GetMeetingTransResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meetingId) {
      res["MeetingId"] = boost::any(*meetingId);
    }
    if (meetingKey) {
      res["MeetingKey"] = boost::any(*meetingKey);
    }
    if (meetingStatus) {
      res["MeetingStatus"] = boost::any(*meetingStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MeetingId") != m.end() && !m["MeetingId"].empty()) {
      meetingId = make_shared<string>(boost::any_cast<string>(m["MeetingId"]));
    }
    if (m.find("MeetingKey") != m.end() && !m["MeetingKey"].empty()) {
      meetingKey = make_shared<string>(boost::any_cast<string>(m["MeetingKey"]));
    }
    if (m.find("MeetingStatus") != m.end() && !m["MeetingStatus"].empty()) {
      meetingStatus = make_shared<string>(boost::any_cast<string>(m["MeetingStatus"]));
    }
  }


  virtual ~GetMeetingTransResponseBodyData() = default;
};
class GetMeetingTransResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetMeetingTransResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetMeetingTransResponseBody() {}

  explicit GetMeetingTransResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetMeetingTransResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetMeetingTransResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMeetingTransResponseBody() = default;
};
class GetMeetingTransResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMeetingTransResponseBody> body{};

  GetMeetingTransResponse() {}

  explicit GetMeetingTransResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMeetingTransResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMeetingTransResponseBody>(model1);
      }
    }
  }


  virtual ~GetMeetingTransResponse() = default;
};
class StopMeetingTransRequest : public Darabonba::Model {
public:
  shared_ptr<long> meetingRoleNum{};
  shared_ptr<bool> onlyRoleSplitResult{};

  StopMeetingTransRequest() {}

  explicit StopMeetingTransRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meetingRoleNum) {
      res["MeetingRoleNum"] = boost::any(*meetingRoleNum);
    }
    if (onlyRoleSplitResult) {
      res["OnlyRoleSplitResult"] = boost::any(*onlyRoleSplitResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MeetingRoleNum") != m.end() && !m["MeetingRoleNum"].empty()) {
      meetingRoleNum = make_shared<long>(boost::any_cast<long>(m["MeetingRoleNum"]));
    }
    if (m.find("OnlyRoleSplitResult") != m.end() && !m["OnlyRoleSplitResult"].empty()) {
      onlyRoleSplitResult = make_shared<bool>(boost::any_cast<bool>(m["OnlyRoleSplitResult"]));
    }
  }


  virtual ~StopMeetingTransRequest() = default;
};
class StopMeetingTransResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> meetingId{};
  shared_ptr<string> meetingKey{};
  shared_ptr<string> meetingStatus{};

  StopMeetingTransResponseBodyData() {}

  explicit StopMeetingTransResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meetingId) {
      res["MeetingId"] = boost::any(*meetingId);
    }
    if (meetingKey) {
      res["MeetingKey"] = boost::any(*meetingKey);
    }
    if (meetingStatus) {
      res["MeetingStatus"] = boost::any(*meetingStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MeetingId") != m.end() && !m["MeetingId"].empty()) {
      meetingId = make_shared<string>(boost::any_cast<string>(m["MeetingId"]));
    }
    if (m.find("MeetingKey") != m.end() && !m["MeetingKey"].empty()) {
      meetingKey = make_shared<string>(boost::any_cast<string>(m["MeetingKey"]));
    }
    if (m.find("MeetingStatus") != m.end() && !m["MeetingStatus"].empty()) {
      meetingStatus = make_shared<string>(boost::any_cast<string>(m["MeetingStatus"]));
    }
  }


  virtual ~StopMeetingTransResponseBodyData() = default;
};
class StopMeetingTransResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<StopMeetingTransResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  StopMeetingTransResponseBody() {}

  explicit StopMeetingTransResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        StopMeetingTransResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<StopMeetingTransResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopMeetingTransResponseBody() = default;
};
class StopMeetingTransResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopMeetingTransResponseBody> body{};

  StopMeetingTransResponse() {}

  explicit StopMeetingTransResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopMeetingTransResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopMeetingTransResponseBody>(model1);
      }
    }
  }


  virtual ~StopMeetingTransResponse() = default;
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
  CreateFileTransResponse createFileTransWithOptions(shared_ptr<CreateFileTransRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFileTransResponse createFileTrans(shared_ptr<CreateFileTransRequest> request);
  CreateMeetingTransResponse createMeetingTransWithOptions(shared_ptr<CreateMeetingTransRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMeetingTransResponse createMeetingTrans(shared_ptr<CreateMeetingTransRequest> request);
  GetFileTransResponse getFileTransWithOptions(shared_ptr<string> TransId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFileTransResponse getFileTrans(shared_ptr<string> TransId);
  GetMeetingTransResponse getMeetingTransWithOptions(shared_ptr<string> MeetingId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMeetingTransResponse getMeetingTrans(shared_ptr<string> MeetingId);
  StopMeetingTransResponse stopMeetingTransWithOptions(shared_ptr<string> MeetingId,
                                                       shared_ptr<StopMeetingTransRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopMeetingTransResponse stopMeetingTrans(shared_ptr<string> MeetingId, shared_ptr<StopMeetingTransRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Tingwu20220930

#endif
