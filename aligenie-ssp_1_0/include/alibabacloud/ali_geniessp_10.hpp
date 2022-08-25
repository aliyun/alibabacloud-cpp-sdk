// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALIGENIESSP10_H_
#define ALIBABACLOUD_ALIGENIESSP10_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_AliGeniessp10 {
class AddAndRemoveFavoriteContentHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  AddAndRemoveFavoriteContentHeaders() {}

  explicit AddAndRemoveFavoriteContentHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~AddAndRemoveFavoriteContentHeaders() = default;
};
class AddAndRemoveFavoriteContentRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  AddAndRemoveFavoriteContentRequestDeviceInfo() {}

  explicit AddAndRemoveFavoriteContentRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~AddAndRemoveFavoriteContentRequestDeviceInfo() = default;
};
class AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequestOpenSourceRawIdPair : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> extendInfo{};
  shared_ptr<string> rawId{};
  shared_ptr<string> source{};

  AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequestOpenSourceRawIdPair() {}

  explicit AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequestOpenSourceRawIdPair(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtendInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<string>(boost::any_cast<string>(m["RawId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequestOpenSourceRawIdPair() = default;
};
class AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> favoriteCmd{};
  shared_ptr<AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequestOpenSourceRawIdPair> openSourceRawIdPair{};
  shared_ptr<string> packageType{};

  AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest() {}

  explicit AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (favoriteCmd) {
      res["FavoriteCmd"] = boost::any(*favoriteCmd);
    }
    if (openSourceRawIdPair) {
      res["OpenSourceRawIdPair"] = openSourceRawIdPair ? boost::any(openSourceRawIdPair->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FavoriteCmd") != m.end() && !m["FavoriteCmd"].empty()) {
      favoriteCmd = make_shared<string>(boost::any_cast<string>(m["FavoriteCmd"]));
    }
    if (m.find("OpenSourceRawIdPair") != m.end() && !m["OpenSourceRawIdPair"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpenSourceRawIdPair"].type()) {
        AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequestOpenSourceRawIdPair model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpenSourceRawIdPair"]));
        openSourceRawIdPair = make_shared<AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequestOpenSourceRawIdPair>(model1);
      }
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
  }


  virtual ~AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest() = default;
};
class AddAndRemoveFavoriteContentRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  AddAndRemoveFavoriteContentRequestUserInfo() {}

  explicit AddAndRemoveFavoriteContentRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~AddAndRemoveFavoriteContentRequestUserInfo() = default;
};
class AddAndRemoveFavoriteContentRequest : public Darabonba::Model {
public:
  shared_ptr<AddAndRemoveFavoriteContentRequestDeviceInfo> deviceInfo{};
  shared_ptr<AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest> openAddAndRemoveFavoriteContentRequest{};
  shared_ptr<AddAndRemoveFavoriteContentRequestUserInfo> userInfo{};

  AddAndRemoveFavoriteContentRequest() {}

  explicit AddAndRemoveFavoriteContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (openAddAndRemoveFavoriteContentRequest) {
      res["OpenAddAndRemoveFavoriteContentRequest"] = openAddAndRemoveFavoriteContentRequest ? boost::any(openAddAndRemoveFavoriteContentRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        AddAndRemoveFavoriteContentRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<AddAndRemoveFavoriteContentRequestDeviceInfo>(model1);
      }
    }
    if (m.find("OpenAddAndRemoveFavoriteContentRequest") != m.end() && !m["OpenAddAndRemoveFavoriteContentRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpenAddAndRemoveFavoriteContentRequest"].type()) {
        AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpenAddAndRemoveFavoriteContentRequest"]));
        openAddAndRemoveFavoriteContentRequest = make_shared<AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        AddAndRemoveFavoriteContentRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<AddAndRemoveFavoriteContentRequestUserInfo>(model1);
      }
    }
  }


  virtual ~AddAndRemoveFavoriteContentRequest() = default;
};
class AddAndRemoveFavoriteContentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> openAddAndRemoveFavoriteContentRequestShrink{};
  shared_ptr<string> userInfoShrink{};

  AddAndRemoveFavoriteContentShrinkRequest() {}

  explicit AddAndRemoveFavoriteContentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (openAddAndRemoveFavoriteContentRequestShrink) {
      res["OpenAddAndRemoveFavoriteContentRequest"] = boost::any(*openAddAndRemoveFavoriteContentRequestShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("OpenAddAndRemoveFavoriteContentRequest") != m.end() && !m["OpenAddAndRemoveFavoriteContentRequest"].empty()) {
      openAddAndRemoveFavoriteContentRequestShrink = make_shared<string>(boost::any_cast<string>(m["OpenAddAndRemoveFavoriteContentRequest"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~AddAndRemoveFavoriteContentShrinkRequest() = default;
};
class AddAndRemoveFavoriteContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<string> success{};

  AddAndRemoveFavoriteContentResponseBody() {}

  explicit AddAndRemoveFavoriteContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~AddAndRemoveFavoriteContentResponseBody() = default;
};
class AddAndRemoveFavoriteContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddAndRemoveFavoriteContentResponseBody> body{};

  AddAndRemoveFavoriteContentResponse() {}

  explicit AddAndRemoveFavoriteContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddAndRemoveFavoriteContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddAndRemoveFavoriteContentResponseBody>(model1);
      }
    }
  }


  virtual ~AddAndRemoveFavoriteContentResponse() = default;
};
class AddSubHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  AddSubHeaders() {}

  explicit AddSubHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~AddSubHeaders() = default;
};
class AddSubRequestAddSubscriptionInfoRequestScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<vector<long>> daysOfWeek{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};

  AddSubRequestAddSubscriptionInfoRequestScheduleInfo() {}

  explicit AddSubRequestAddSubscriptionInfoRequestScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (daysOfWeek) {
      res["DaysOfWeek"] = boost::any(*daysOfWeek);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DaysOfWeek") != m.end() && !m["DaysOfWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
  }


  virtual ~AddSubRequestAddSubscriptionInfoRequestScheduleInfo() = default;
};
class AddSubRequestAddSubscriptionInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> albumId{};
  shared_ptr<long> dailyStudyCnt{};
  shared_ptr<string> playMode{};
  shared_ptr<AddSubRequestAddSubscriptionInfoRequestScheduleInfo> scheduleInfo{};

  AddSubRequestAddSubscriptionInfoRequest() {}

  explicit AddSubRequestAddSubscriptionInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumId) {
      res["AlbumId"] = boost::any(*albumId);
    }
    if (dailyStudyCnt) {
      res["DailyStudyCnt"] = boost::any(*dailyStudyCnt);
    }
    if (playMode) {
      res["PlayMode"] = boost::any(*playMode);
    }
    if (scheduleInfo) {
      res["ScheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumId") != m.end() && !m["AlbumId"].empty()) {
      albumId = make_shared<string>(boost::any_cast<string>(m["AlbumId"]));
    }
    if (m.find("DailyStudyCnt") != m.end() && !m["DailyStudyCnt"].empty()) {
      dailyStudyCnt = make_shared<long>(boost::any_cast<long>(m["DailyStudyCnt"]));
    }
    if (m.find("PlayMode") != m.end() && !m["PlayMode"].empty()) {
      playMode = make_shared<string>(boost::any_cast<string>(m["PlayMode"]));
    }
    if (m.find("ScheduleInfo") != m.end() && !m["ScheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScheduleInfo"].type()) {
        AddSubRequestAddSubscriptionInfoRequestScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScheduleInfo"]));
        scheduleInfo = make_shared<AddSubRequestAddSubscriptionInfoRequestScheduleInfo>(model1);
      }
    }
  }


  virtual ~AddSubRequestAddSubscriptionInfoRequest() = default;
};
class AddSubRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  AddSubRequestDeviceInfo() {}

  explicit AddSubRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~AddSubRequestDeviceInfo() = default;
};
class AddSubRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  AddSubRequestUserInfo() {}

  explicit AddSubRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~AddSubRequestUserInfo() = default;
};
class AddSubRequest : public Darabonba::Model {
public:
  shared_ptr<AddSubRequestAddSubscriptionInfoRequest> addSubscriptionInfoRequest{};
  shared_ptr<AddSubRequestDeviceInfo> deviceInfo{};
  shared_ptr<AddSubRequestUserInfo> userInfo{};

  AddSubRequest() {}

  explicit AddSubRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addSubscriptionInfoRequest) {
      res["AddSubscriptionInfoRequest"] = addSubscriptionInfoRequest ? boost::any(addSubscriptionInfoRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddSubscriptionInfoRequest") != m.end() && !m["AddSubscriptionInfoRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddSubscriptionInfoRequest"].type()) {
        AddSubRequestAddSubscriptionInfoRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddSubscriptionInfoRequest"]));
        addSubscriptionInfoRequest = make_shared<AddSubRequestAddSubscriptionInfoRequest>(model1);
      }
    }
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        AddSubRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<AddSubRequestDeviceInfo>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        AddSubRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<AddSubRequestUserInfo>(model1);
      }
    }
  }


  virtual ~AddSubRequest() = default;
};
class AddSubShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> addSubscriptionInfoRequestShrink{};
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> userInfoShrink{};

  AddSubShrinkRequest() {}

  explicit AddSubShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addSubscriptionInfoRequestShrink) {
      res["AddSubscriptionInfoRequest"] = boost::any(*addSubscriptionInfoRequestShrink);
    }
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddSubscriptionInfoRequest") != m.end() && !m["AddSubscriptionInfoRequest"].empty()) {
      addSubscriptionInfoRequestShrink = make_shared<string>(boost::any_cast<string>(m["AddSubscriptionInfoRequest"]));
    }
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~AddSubShrinkRequest() = default;
};
class AddSubResponseBodyResultScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<vector<long>> daysOfWeek{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};

  AddSubResponseBodyResultScheduleInfo() {}

  explicit AddSubResponseBodyResultScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (daysOfWeek) {
      res["DaysOfWeek"] = boost::any(*daysOfWeek);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DaysOfWeek") != m.end() && !m["DaysOfWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
  }


  virtual ~AddSubResponseBodyResultScheduleInfo() = default;
};
class AddSubResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> albumId{};
  shared_ptr<long> dailyStudyCnt{};
  shared_ptr<string> deviceId{};
  shared_ptr<long> id{};
  shared_ptr<string> playMode{};
  shared_ptr<AddSubResponseBodyResultScheduleInfo> scheduleInfo{};
  shared_ptr<string> userId{};

  AddSubResponseBodyResult() {}

  explicit AddSubResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumId) {
      res["AlbumId"] = boost::any(*albumId);
    }
    if (dailyStudyCnt) {
      res["DailyStudyCnt"] = boost::any(*dailyStudyCnt);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (playMode) {
      res["PlayMode"] = boost::any(*playMode);
    }
    if (scheduleInfo) {
      res["ScheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumId") != m.end() && !m["AlbumId"].empty()) {
      albumId = make_shared<string>(boost::any_cast<string>(m["AlbumId"]));
    }
    if (m.find("DailyStudyCnt") != m.end() && !m["DailyStudyCnt"].empty()) {
      dailyStudyCnt = make_shared<long>(boost::any_cast<long>(m["DailyStudyCnt"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("PlayMode") != m.end() && !m["PlayMode"].empty()) {
      playMode = make_shared<string>(boost::any_cast<string>(m["PlayMode"]));
    }
    if (m.find("ScheduleInfo") != m.end() && !m["ScheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScheduleInfo"].type()) {
        AddSubResponseBodyResultScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScheduleInfo"]));
        scheduleInfo = make_shared<AddSubResponseBodyResultScheduleInfo>(model1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~AddSubResponseBodyResult() = default;
};
class AddSubResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<AddSubResponseBodyResult> result{};

  AddSubResponseBody() {}

  explicit AddSubResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        AddSubResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<AddSubResponseBodyResult>(model1);
      }
    }
  }


  virtual ~AddSubResponseBody() = default;
};
class AddSubResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddSubResponseBody> body{};

  AddSubResponse() {}

  explicit AddSubResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddSubResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddSubResponseBody>(model1);
      }
    }
  }


  virtual ~AddSubResponse() = default;
};
class CheckAuthCodeBindForExtHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  CheckAuthCodeBindForExtHeaders() {}

  explicit CheckAuthCodeBindForExtHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~CheckAuthCodeBindForExtHeaders() = default;
};
class CheckAuthCodeBindForExtRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  CheckAuthCodeBindForExtRequestUserInfo() {}

  explicit CheckAuthCodeBindForExtRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~CheckAuthCodeBindForExtRequestUserInfo() = default;
};
class CheckAuthCodeBindForExtRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<CheckAuthCodeBindForExtRequestUserInfo> userInfo{};

  CheckAuthCodeBindForExtRequest() {}

  explicit CheckAuthCodeBindForExtRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        CheckAuthCodeBindForExtRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<CheckAuthCodeBindForExtRequestUserInfo>(model1);
      }
    }
  }


  virtual ~CheckAuthCodeBindForExtRequest() = default;
};
class CheckAuthCodeBindForExtShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> userInfoShrink{};

  CheckAuthCodeBindForExtShrinkRequest() {}

  explicit CheckAuthCodeBindForExtShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~CheckAuthCodeBindForExtShrinkRequest() = default;
};
class CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> idType{};

  CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo() {}

  explicit CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
  }


  virtual ~CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo() = default;
};
class CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> idType{};

  CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo() {}

  explicit CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
  }


  virtual ~CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo() = default;
};
class CheckAuthCodeBindForExtResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo> deviceOpenInfo{};
  shared_ptr<CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo> userOpenInfo{};

  CheckAuthCodeBindForExtResponseBodyResult() {}

  explicit CheckAuthCodeBindForExtResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceOpenInfo) {
      res["DeviceOpenInfo"] = deviceOpenInfo ? boost::any(deviceOpenInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userOpenInfo) {
      res["UserOpenInfo"] = userOpenInfo ? boost::any(userOpenInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceOpenInfo") != m.end() && !m["DeviceOpenInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceOpenInfo"].type()) {
        CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceOpenInfo"]));
        deviceOpenInfo = make_shared<CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo>(model1);
      }
    }
    if (m.find("UserOpenInfo") != m.end() && !m["UserOpenInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserOpenInfo"].type()) {
        CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserOpenInfo"]));
        userOpenInfo = make_shared<CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo>(model1);
      }
    }
  }


  virtual ~CheckAuthCodeBindForExtResponseBodyResult() = default;
};
class CheckAuthCodeBindForExtResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CheckAuthCodeBindForExtResponseBodyResult> result{};

  CheckAuthCodeBindForExtResponseBody() {}

  explicit CheckAuthCodeBindForExtResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CheckAuthCodeBindForExtResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CheckAuthCodeBindForExtResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CheckAuthCodeBindForExtResponseBody() = default;
};
class CheckAuthCodeBindForExtResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckAuthCodeBindForExtResponseBody> body{};

  CheckAuthCodeBindForExtResponse() {}

  explicit CheckAuthCodeBindForExtResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckAuthCodeBindForExtResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckAuthCodeBindForExtResponseBody>(model1);
      }
    }
  }


  virtual ~CheckAuthCodeBindForExtResponse() = default;
};
class CreateAlarmHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  CreateAlarmHeaders() {}

  explicit CreateAlarmHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~CreateAlarmHeaders() = default;
};
class CreateAlarmRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  CreateAlarmRequestDeviceInfo() {}

  explicit CreateAlarmRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~CreateAlarmRequestDeviceInfo() = default;
};
class CreateAlarmRequestPayloadMusicInfo : public Darabonba::Model {
public:
  shared_ptr<long> musicId{};
  shared_ptr<string> musicName{};
  shared_ptr<long> musicType{};
  shared_ptr<string> musicTypeName{};
  shared_ptr<string> musicUrl{};

  CreateAlarmRequestPayloadMusicInfo() {}

  explicit CreateAlarmRequestPayloadMusicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (musicId) {
      res["MusicId"] = boost::any(*musicId);
    }
    if (musicName) {
      res["MusicName"] = boost::any(*musicName);
    }
    if (musicType) {
      res["MusicType"] = boost::any(*musicType);
    }
    if (musicTypeName) {
      res["MusicTypeName"] = boost::any(*musicTypeName);
    }
    if (musicUrl) {
      res["MusicUrl"] = boost::any(*musicUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MusicId") != m.end() && !m["MusicId"].empty()) {
      musicId = make_shared<long>(boost::any_cast<long>(m["MusicId"]));
    }
    if (m.find("MusicName") != m.end() && !m["MusicName"].empty()) {
      musicName = make_shared<string>(boost::any_cast<string>(m["MusicName"]));
    }
    if (m.find("MusicType") != m.end() && !m["MusicType"].empty()) {
      musicType = make_shared<long>(boost::any_cast<long>(m["MusicType"]));
    }
    if (m.find("MusicTypeName") != m.end() && !m["MusicTypeName"].empty()) {
      musicTypeName = make_shared<string>(boost::any_cast<string>(m["MusicTypeName"]));
    }
    if (m.find("MusicUrl") != m.end() && !m["MusicUrl"].empty()) {
      musicUrl = make_shared<string>(boost::any_cast<string>(m["MusicUrl"]));
    }
  }


  virtual ~CreateAlarmRequestPayloadMusicInfo() = default;
};
class CreateAlarmRequestPayloadScheduleInfoOnce : public Darabonba::Model {
public:
  shared_ptr<long> day{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};
  shared_ptr<long> month{};
  shared_ptr<long> year{};

  CreateAlarmRequestPayloadScheduleInfoOnce() {}

  explicit CreateAlarmRequestPayloadScheduleInfoOnce(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    if (year) {
      res["Year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<long>(boost::any_cast<long>(m["Day"]));
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["Month"]));
    }
    if (m.find("Year") != m.end() && !m["Year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["Year"]));
    }
  }


  virtual ~CreateAlarmRequestPayloadScheduleInfoOnce() = default;
};
class CreateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay : public Darabonba::Model {
public:
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};

  CreateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay() {}

  explicit CreateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
  }


  virtual ~CreateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay() = default;
};
class CreateAlarmRequestPayloadScheduleInfoWeekly : public Darabonba::Model {
public:
  shared_ptr<vector<long>> daysOfWeek{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};

  CreateAlarmRequestPayloadScheduleInfoWeekly() {}

  explicit CreateAlarmRequestPayloadScheduleInfoWeekly(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (daysOfWeek) {
      res["DaysOfWeek"] = boost::any(*daysOfWeek);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DaysOfWeek") != m.end() && !m["DaysOfWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
  }


  virtual ~CreateAlarmRequestPayloadScheduleInfoWeekly() = default;
};
class CreateAlarmRequestPayloadScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<CreateAlarmRequestPayloadScheduleInfoOnce> once{};
  shared_ptr<CreateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay> statutoryWorkingDay{};
  shared_ptr<string> type{};
  shared_ptr<CreateAlarmRequestPayloadScheduleInfoWeekly> weekly{};

  CreateAlarmRequestPayloadScheduleInfo() {}

  explicit CreateAlarmRequestPayloadScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (once) {
      res["Once"] = once ? boost::any(once->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (statutoryWorkingDay) {
      res["StatutoryWorkingDay"] = statutoryWorkingDay ? boost::any(statutoryWorkingDay->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weekly) {
      res["Weekly"] = weekly ? boost::any(weekly->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Once") != m.end() && !m["Once"].empty()) {
      if (typeid(map<string, boost::any>) == m["Once"].type()) {
        CreateAlarmRequestPayloadScheduleInfoOnce model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Once"]));
        once = make_shared<CreateAlarmRequestPayloadScheduleInfoOnce>(model1);
      }
    }
    if (m.find("StatutoryWorkingDay") != m.end() && !m["StatutoryWorkingDay"].empty()) {
      if (typeid(map<string, boost::any>) == m["StatutoryWorkingDay"].type()) {
        CreateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StatutoryWorkingDay"]));
        statutoryWorkingDay = make_shared<CreateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weekly") != m.end() && !m["Weekly"].empty()) {
      if (typeid(map<string, boost::any>) == m["Weekly"].type()) {
        CreateAlarmRequestPayloadScheduleInfoWeekly model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Weekly"]));
        weekly = make_shared<CreateAlarmRequestPayloadScheduleInfoWeekly>(model1);
      }
    }
  }


  virtual ~CreateAlarmRequestPayloadScheduleInfo() = default;
};
class CreateAlarmRequestPayload : public Darabonba::Model {
public:
  shared_ptr<CreateAlarmRequestPayloadMusicInfo> musicInfo{};
  shared_ptr<CreateAlarmRequestPayloadScheduleInfo> scheduleInfo{};
  shared_ptr<long> volume{};

  CreateAlarmRequestPayload() {}

  explicit CreateAlarmRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (musicInfo) {
      res["MusicInfo"] = musicInfo ? boost::any(musicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["ScheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MusicInfo") != m.end() && !m["MusicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MusicInfo"].type()) {
        CreateAlarmRequestPayloadMusicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MusicInfo"]));
        musicInfo = make_shared<CreateAlarmRequestPayloadMusicInfo>(model1);
      }
    }
    if (m.find("ScheduleInfo") != m.end() && !m["ScheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScheduleInfo"].type()) {
        CreateAlarmRequestPayloadScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScheduleInfo"]));
        scheduleInfo = make_shared<CreateAlarmRequestPayloadScheduleInfo>(model1);
      }
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~CreateAlarmRequestPayload() = default;
};
class CreateAlarmRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  CreateAlarmRequestUserInfo() {}

  explicit CreateAlarmRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~CreateAlarmRequestUserInfo() = default;
};
class CreateAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<CreateAlarmRequestDeviceInfo> deviceInfo{};
  shared_ptr<CreateAlarmRequestPayload> payload{};
  shared_ptr<CreateAlarmRequestUserInfo> userInfo{};

  CreateAlarmRequest() {}

  explicit CreateAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        CreateAlarmRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<CreateAlarmRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        CreateAlarmRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<CreateAlarmRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        CreateAlarmRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<CreateAlarmRequestUserInfo>(model1);
      }
    }
  }


  virtual ~CreateAlarmRequest() = default;
};
class CreateAlarmShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  CreateAlarmShrinkRequest() {}

  explicit CreateAlarmShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~CreateAlarmShrinkRequest() = default;
};
class CreateAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> result{};

  CreateAlarmResponseBody() {}

  explicit CreateAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
  }


  virtual ~CreateAlarmResponseBody() = default;
};
class CreateAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAlarmResponseBody> body{};

  CreateAlarmResponse() {}

  explicit CreateAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAlarmResponse() = default;
};
class CreatePlayingListHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  CreatePlayingListHeaders() {}

  explicit CreatePlayingListHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~CreatePlayingListHeaders() = default;
};
class CreatePlayingListRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  CreatePlayingListRequestDeviceInfo() {}

  explicit CreatePlayingListRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~CreatePlayingListRequestDeviceInfo() = default;
};
class CreatePlayingListRequestOpenCreatePlayingListRequestContentList : public Darabonba::Model {
public:
  shared_ptr<string> rawId{};
  shared_ptr<string> source{};

  CreatePlayingListRequestOpenCreatePlayingListRequestContentList() {}

  explicit CreatePlayingListRequestOpenCreatePlayingListRequestContentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<string>(boost::any_cast<string>(m["RawId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~CreatePlayingListRequestOpenCreatePlayingListRequestContentList() = default;
};
class CreatePlayingListRequestOpenCreatePlayingListRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreatePlayingListRequestOpenCreatePlayingListRequestContentList>> contentList{};
  shared_ptr<string> contentType{};
  shared_ptr<map<string, boost::any>> extendInfo{};
  shared_ptr<long> index{};
  shared_ptr<bool> needAlbumContinued{};
  shared_ptr<string> playFrom{};
  shared_ptr<string> playMode{};

  CreatePlayingListRequestOpenCreatePlayingListRequest() {}

  explicit CreatePlayingListRequestOpenCreatePlayingListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentList) {
      vector<boost::any> temp1;
      for(auto item1:*contentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ContentList"] = boost::any(temp1);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (needAlbumContinued) {
      res["NeedAlbumContinued"] = boost::any(*needAlbumContinued);
    }
    if (playFrom) {
      res["PlayFrom"] = boost::any(*playFrom);
    }
    if (playMode) {
      res["PlayMode"] = boost::any(*playMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContentList") != m.end() && !m["ContentList"].empty()) {
      if (typeid(vector<boost::any>) == m["ContentList"].type()) {
        vector<CreatePlayingListRequestOpenCreatePlayingListRequestContentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ContentList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePlayingListRequestOpenCreatePlayingListRequestContentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contentList = make_shared<vector<CreatePlayingListRequestOpenCreatePlayingListRequestContentList>>(expect1);
      }
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtendInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("NeedAlbumContinued") != m.end() && !m["NeedAlbumContinued"].empty()) {
      needAlbumContinued = make_shared<bool>(boost::any_cast<bool>(m["NeedAlbumContinued"]));
    }
    if (m.find("PlayFrom") != m.end() && !m["PlayFrom"].empty()) {
      playFrom = make_shared<string>(boost::any_cast<string>(m["PlayFrom"]));
    }
    if (m.find("PlayMode") != m.end() && !m["PlayMode"].empty()) {
      playMode = make_shared<string>(boost::any_cast<string>(m["PlayMode"]));
    }
  }


  virtual ~CreatePlayingListRequestOpenCreatePlayingListRequest() = default;
};
class CreatePlayingListRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  CreatePlayingListRequestUserInfo() {}

  explicit CreatePlayingListRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~CreatePlayingListRequestUserInfo() = default;
};
class CreatePlayingListRequest : public Darabonba::Model {
public:
  shared_ptr<CreatePlayingListRequestDeviceInfo> deviceInfo{};
  shared_ptr<CreatePlayingListRequestOpenCreatePlayingListRequest> openCreatePlayingListRequest{};
  shared_ptr<CreatePlayingListRequestUserInfo> userInfo{};

  CreatePlayingListRequest() {}

  explicit CreatePlayingListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (openCreatePlayingListRequest) {
      res["OpenCreatePlayingListRequest"] = openCreatePlayingListRequest ? boost::any(openCreatePlayingListRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        CreatePlayingListRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<CreatePlayingListRequestDeviceInfo>(model1);
      }
    }
    if (m.find("OpenCreatePlayingListRequest") != m.end() && !m["OpenCreatePlayingListRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpenCreatePlayingListRequest"].type()) {
        CreatePlayingListRequestOpenCreatePlayingListRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpenCreatePlayingListRequest"]));
        openCreatePlayingListRequest = make_shared<CreatePlayingListRequestOpenCreatePlayingListRequest>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        CreatePlayingListRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<CreatePlayingListRequestUserInfo>(model1);
      }
    }
  }


  virtual ~CreatePlayingListRequest() = default;
};
class CreatePlayingListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> openCreatePlayingListRequestShrink{};
  shared_ptr<string> userInfoShrink{};

  CreatePlayingListShrinkRequest() {}

  explicit CreatePlayingListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (openCreatePlayingListRequestShrink) {
      res["OpenCreatePlayingListRequest"] = boost::any(*openCreatePlayingListRequestShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("OpenCreatePlayingListRequest") != m.end() && !m["OpenCreatePlayingListRequest"].empty()) {
      openCreatePlayingListRequestShrink = make_shared<string>(boost::any_cast<string>(m["OpenCreatePlayingListRequest"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~CreatePlayingListShrinkRequest() = default;
};
class CreatePlayingListResponseBodyResultCover : public Darabonba::Model {
public:
  shared_ptr<bool> canResize{};
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> mediam{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};

  CreatePlayingListResponseBodyResultCover() {}

  explicit CreatePlayingListResponseBodyResultCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canResize) {
      res["CanResize"] = boost::any(*canResize);
    }
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (mediam) {
      res["Mediam"] = boost::any(*mediam);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanResize") != m.end() && !m["CanResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["CanResize"]));
    }
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Mediam") != m.end() && !m["Mediam"].empty()) {
      mediam = make_shared<string>(boost::any_cast<string>(m["Mediam"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
  }


  virtual ~CreatePlayingListResponseBodyResultCover() = default;
};
class CreatePlayingListResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> albumName{};
  shared_ptr<string> albumRawId{};
  shared_ptr<long> audioLength{};
  shared_ptr<long> copyright{};
  shared_ptr<CreatePlayingListResponseBodyResultCover> cover{};
  shared_ptr<long> defaultPlayOrder{};
  shared_ptr<string> itemUrl{};
  shared_ptr<bool> liked{};
  shared_ptr<string> lyricUrl{};
  shared_ptr<string> playMode{};
  shared_ptr<long> pos{};
  shared_ptr<long> progress{};
  shared_ptr<string> rawId{};
  shared_ptr<string> singer{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<string> valid{};

  CreatePlayingListResponseBodyResult() {}

  explicit CreatePlayingListResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumName) {
      res["AlbumName"] = boost::any(*albumName);
    }
    if (albumRawId) {
      res["AlbumRawId"] = boost::any(*albumRawId);
    }
    if (audioLength) {
      res["AudioLength"] = boost::any(*audioLength);
    }
    if (copyright) {
      res["Copyright"] = boost::any(*copyright);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (defaultPlayOrder) {
      res["DefaultPlayOrder"] = boost::any(*defaultPlayOrder);
    }
    if (itemUrl) {
      res["ItemUrl"] = boost::any(*itemUrl);
    }
    if (liked) {
      res["Liked"] = boost::any(*liked);
    }
    if (lyricUrl) {
      res["LyricUrl"] = boost::any(*lyricUrl);
    }
    if (playMode) {
      res["PlayMode"] = boost::any(*playMode);
    }
    if (pos) {
      res["Pos"] = boost::any(*pos);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (singer) {
      res["Singer"] = boost::any(*singer);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumName") != m.end() && !m["AlbumName"].empty()) {
      albumName = make_shared<string>(boost::any_cast<string>(m["AlbumName"]));
    }
    if (m.find("AlbumRawId") != m.end() && !m["AlbumRawId"].empty()) {
      albumRawId = make_shared<string>(boost::any_cast<string>(m["AlbumRawId"]));
    }
    if (m.find("AudioLength") != m.end() && !m["AudioLength"].empty()) {
      audioLength = make_shared<long>(boost::any_cast<long>(m["AudioLength"]));
    }
    if (m.find("Copyright") != m.end() && !m["Copyright"].empty()) {
      copyright = make_shared<long>(boost::any_cast<long>(m["Copyright"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        CreatePlayingListResponseBodyResultCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<CreatePlayingListResponseBodyResultCover>(model1);
      }
    }
    if (m.find("DefaultPlayOrder") != m.end() && !m["DefaultPlayOrder"].empty()) {
      defaultPlayOrder = make_shared<long>(boost::any_cast<long>(m["DefaultPlayOrder"]));
    }
    if (m.find("ItemUrl") != m.end() && !m["ItemUrl"].empty()) {
      itemUrl = make_shared<string>(boost::any_cast<string>(m["ItemUrl"]));
    }
    if (m.find("Liked") != m.end() && !m["Liked"].empty()) {
      liked = make_shared<bool>(boost::any_cast<bool>(m["Liked"]));
    }
    if (m.find("LyricUrl") != m.end() && !m["LyricUrl"].empty()) {
      lyricUrl = make_shared<string>(boost::any_cast<string>(m["LyricUrl"]));
    }
    if (m.find("PlayMode") != m.end() && !m["PlayMode"].empty()) {
      playMode = make_shared<string>(boost::any_cast<string>(m["PlayMode"]));
    }
    if (m.find("Pos") != m.end() && !m["Pos"].empty()) {
      pos = make_shared<long>(boost::any_cast<long>(m["Pos"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<string>(boost::any_cast<string>(m["RawId"]));
    }
    if (m.find("Singer") != m.end() && !m["Singer"].empty()) {
      singer = make_shared<string>(boost::any_cast<string>(m["Singer"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<string>(boost::any_cast<string>(m["Valid"]));
    }
  }


  virtual ~CreatePlayingListResponseBodyResult() = default;
};
class CreatePlayingListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CreatePlayingListResponseBodyResult> result{};
  shared_ptr<string> success{};

  CreatePlayingListResponseBody() {}

  explicit CreatePlayingListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreatePlayingListResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreatePlayingListResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~CreatePlayingListResponseBody() = default;
};
class CreatePlayingListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePlayingListResponseBody> body{};

  CreatePlayingListResponse() {}

  explicit CreatePlayingListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePlayingListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePlayingListResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePlayingListResponse() = default;
};
class CreateScheduleTaskHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  CreateScheduleTaskHeaders() {}

  explicit CreateScheduleTaskHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~CreateScheduleTaskHeaders() = default;
};
class CreateScheduleTaskRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  CreateScheduleTaskRequestDeviceInfo() {}

  explicit CreateScheduleTaskRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~CreateScheduleTaskRequestDeviceInfo() = default;
};
class CreateScheduleTaskRequestPayloadActionDTOs : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> customAction{};

  CreateScheduleTaskRequestPayloadActionDTOs() {}

  explicit CreateScheduleTaskRequestPayloadActionDTOs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customAction) {
      res["customAction"] = boost::any(*customAction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customAction") != m.end() && !m["customAction"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["customAction"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customAction = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateScheduleTaskRequestPayloadActionDTOs() = default;
};
class CreateScheduleTaskRequestPayloadScheduleDTOOnce : public Darabonba::Model {
public:
  shared_ptr<long> day{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};
  shared_ptr<long> month{};
  shared_ptr<long> year{};

  CreateScheduleTaskRequestPayloadScheduleDTOOnce() {}

  explicit CreateScheduleTaskRequestPayloadScheduleDTOOnce(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    if (year) {
      res["Year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<long>(boost::any_cast<long>(m["Day"]));
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["Month"]));
    }
    if (m.find("Year") != m.end() && !m["Year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["Year"]));
    }
  }


  virtual ~CreateScheduleTaskRequestPayloadScheduleDTOOnce() = default;
};
class CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay : public Darabonba::Model {
public:
  shared_ptr<vector<long>> hours{};
  shared_ptr<vector<long>> minutes{};

  CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay() {}

  explicit CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hours) {
      res["Hours"] = boost::any(*hours);
    }
    if (minutes) {
      res["Minutes"] = boost::any(*minutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hours") != m.end() && !m["Hours"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Hours"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Hours"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      hours = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Minutes") != m.end() && !m["Minutes"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Minutes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Minutes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      minutes = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay() = default;
};
class CreateScheduleTaskRequestPayloadScheduleDTOWeekly : public Darabonba::Model {
public:
  shared_ptr<vector<long>> daysOfWeek{};
  shared_ptr<vector<long>> hours{};
  shared_ptr<vector<long>> minutes{};

  CreateScheduleTaskRequestPayloadScheduleDTOWeekly() {}

  explicit CreateScheduleTaskRequestPayloadScheduleDTOWeekly(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (daysOfWeek) {
      res["DaysOfWeek"] = boost::any(*daysOfWeek);
    }
    if (hours) {
      res["Hours"] = boost::any(*hours);
    }
    if (minutes) {
      res["Minutes"] = boost::any(*minutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DaysOfWeek") != m.end() && !m["DaysOfWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Hours") != m.end() && !m["Hours"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Hours"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Hours"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      hours = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Minutes") != m.end() && !m["Minutes"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Minutes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Minutes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      minutes = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateScheduleTaskRequestPayloadScheduleDTOWeekly() = default;
};
class CreateScheduleTaskRequestPayloadScheduleDTO : public Darabonba::Model {
public:
  shared_ptr<CreateScheduleTaskRequestPayloadScheduleDTOOnce> once{};
  shared_ptr<long> scheduleEndTime{};
  shared_ptr<long> scheduleStartTime{};
  shared_ptr<string> scheduleType{};
  shared_ptr<CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay> statutoryWorkingDay{};
  shared_ptr<CreateScheduleTaskRequestPayloadScheduleDTOWeekly> weekly{};

  CreateScheduleTaskRequestPayloadScheduleDTO() {}

  explicit CreateScheduleTaskRequestPayloadScheduleDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (once) {
      res["Once"] = once ? boost::any(once->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleEndTime) {
      res["ScheduleEndTime"] = boost::any(*scheduleEndTime);
    }
    if (scheduleStartTime) {
      res["ScheduleStartTime"] = boost::any(*scheduleStartTime);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (statutoryWorkingDay) {
      res["StatutoryWorkingDay"] = statutoryWorkingDay ? boost::any(statutoryWorkingDay->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (weekly) {
      res["Weekly"] = weekly ? boost::any(weekly->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Once") != m.end() && !m["Once"].empty()) {
      if (typeid(map<string, boost::any>) == m["Once"].type()) {
        CreateScheduleTaskRequestPayloadScheduleDTOOnce model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Once"]));
        once = make_shared<CreateScheduleTaskRequestPayloadScheduleDTOOnce>(model1);
      }
    }
    if (m.find("ScheduleEndTime") != m.end() && !m["ScheduleEndTime"].empty()) {
      scheduleEndTime = make_shared<long>(boost::any_cast<long>(m["ScheduleEndTime"]));
    }
    if (m.find("ScheduleStartTime") != m.end() && !m["ScheduleStartTime"].empty()) {
      scheduleStartTime = make_shared<long>(boost::any_cast<long>(m["ScheduleStartTime"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("StatutoryWorkingDay") != m.end() && !m["StatutoryWorkingDay"].empty()) {
      if (typeid(map<string, boost::any>) == m["StatutoryWorkingDay"].type()) {
        CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StatutoryWorkingDay"]));
        statutoryWorkingDay = make_shared<CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay>(model1);
      }
    }
    if (m.find("Weekly") != m.end() && !m["Weekly"].empty()) {
      if (typeid(map<string, boost::any>) == m["Weekly"].type()) {
        CreateScheduleTaskRequestPayloadScheduleDTOWeekly model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Weekly"]));
        weekly = make_shared<CreateScheduleTaskRequestPayloadScheduleDTOWeekly>(model1);
      }
    }
  }


  virtual ~CreateScheduleTaskRequestPayloadScheduleDTO() = default;
};
class CreateScheduleTaskRequestPayload : public Darabonba::Model {
public:
  shared_ptr<vector<CreateScheduleTaskRequestPayloadActionDTOs>> actionDTOs{};
  shared_ptr<string> idempotentId{};
  shared_ptr<CreateScheduleTaskRequestPayloadScheduleDTO> scheduleDTO{};

  CreateScheduleTaskRequestPayload() {}

  explicit CreateScheduleTaskRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionDTOs) {
      vector<boost::any> temp1;
      for(auto item1:*actionDTOs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ActionDTOs"] = boost::any(temp1);
    }
    if (idempotentId) {
      res["IdempotentId"] = boost::any(*idempotentId);
    }
    if (scheduleDTO) {
      res["ScheduleDTO"] = scheduleDTO ? boost::any(scheduleDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionDTOs") != m.end() && !m["ActionDTOs"].empty()) {
      if (typeid(vector<boost::any>) == m["ActionDTOs"].type()) {
        vector<CreateScheduleTaskRequestPayloadActionDTOs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ActionDTOs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateScheduleTaskRequestPayloadActionDTOs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actionDTOs = make_shared<vector<CreateScheduleTaskRequestPayloadActionDTOs>>(expect1);
      }
    }
    if (m.find("IdempotentId") != m.end() && !m["IdempotentId"].empty()) {
      idempotentId = make_shared<string>(boost::any_cast<string>(m["IdempotentId"]));
    }
    if (m.find("ScheduleDTO") != m.end() && !m["ScheduleDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScheduleDTO"].type()) {
        CreateScheduleTaskRequestPayloadScheduleDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScheduleDTO"]));
        scheduleDTO = make_shared<CreateScheduleTaskRequestPayloadScheduleDTO>(model1);
      }
    }
  }


  virtual ~CreateScheduleTaskRequestPayload() = default;
};
class CreateScheduleTaskRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  CreateScheduleTaskRequestUserInfo() {}

  explicit CreateScheduleTaskRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~CreateScheduleTaskRequestUserInfo() = default;
};
class CreateScheduleTaskRequest : public Darabonba::Model {
public:
  shared_ptr<CreateScheduleTaskRequestDeviceInfo> deviceInfo{};
  shared_ptr<CreateScheduleTaskRequestPayload> payload{};
  shared_ptr<CreateScheduleTaskRequestUserInfo> userInfo{};

  CreateScheduleTaskRequest() {}

  explicit CreateScheduleTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        CreateScheduleTaskRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<CreateScheduleTaskRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        CreateScheduleTaskRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<CreateScheduleTaskRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        CreateScheduleTaskRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<CreateScheduleTaskRequestUserInfo>(model1);
      }
    }
  }


  virtual ~CreateScheduleTaskRequest() = default;
};
class CreateScheduleTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  CreateScheduleTaskShrinkRequest() {}

  explicit CreateScheduleTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~CreateScheduleTaskShrinkRequest() = default;
};
class CreateScheduleTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> result{};

  CreateScheduleTaskResponseBody() {}

  explicit CreateScheduleTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
  }


  virtual ~CreateScheduleTaskResponseBody() = default;
};
class CreateScheduleTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateScheduleTaskResponseBody> body{};

  CreateScheduleTaskResponse() {}

  explicit CreateScheduleTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScheduleTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScheduleTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScheduleTaskResponse() = default;
};
class DeleteAlarmsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  DeleteAlarmsHeaders() {}

  explicit DeleteAlarmsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~DeleteAlarmsHeaders() = default;
};
class DeleteAlarmsRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  DeleteAlarmsRequestDeviceInfo() {}

  explicit DeleteAlarmsRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~DeleteAlarmsRequestDeviceInfo() = default;
};
class DeleteAlarmsRequestPayload : public Darabonba::Model {
public:
  shared_ptr<vector<long>> alarmIds{};

  DeleteAlarmsRequestPayload() {}

  explicit DeleteAlarmsRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmIds) {
      res["AlarmIds"] = boost::any(*alarmIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmIds") != m.end() && !m["AlarmIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AlarmIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AlarmIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      alarmIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~DeleteAlarmsRequestPayload() = default;
};
class DeleteAlarmsRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  DeleteAlarmsRequestUserInfo() {}

  explicit DeleteAlarmsRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~DeleteAlarmsRequestUserInfo() = default;
};
class DeleteAlarmsRequest : public Darabonba::Model {
public:
  shared_ptr<DeleteAlarmsRequestDeviceInfo> deviceInfo{};
  shared_ptr<DeleteAlarmsRequestPayload> payload{};
  shared_ptr<DeleteAlarmsRequestUserInfo> userInfo{};

  DeleteAlarmsRequest() {}

  explicit DeleteAlarmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        DeleteAlarmsRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<DeleteAlarmsRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        DeleteAlarmsRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<DeleteAlarmsRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        DeleteAlarmsRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<DeleteAlarmsRequestUserInfo>(model1);
      }
    }
  }


  virtual ~DeleteAlarmsRequest() = default;
};
class DeleteAlarmsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  DeleteAlarmsShrinkRequest() {}

  explicit DeleteAlarmsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~DeleteAlarmsShrinkRequest() = default;
};
class DeleteAlarmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  DeleteAlarmsResponseBody() {}

  explicit DeleteAlarmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~DeleteAlarmsResponseBody() = default;
};
class DeleteAlarmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAlarmsResponseBody> body{};

  DeleteAlarmsResponse() {}

  explicit DeleteAlarmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAlarmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAlarmsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAlarmsResponse() = default;
};
class DeleteScheduleTaskHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  DeleteScheduleTaskHeaders() {}

  explicit DeleteScheduleTaskHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~DeleteScheduleTaskHeaders() = default;
};
class DeleteScheduleTaskRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  DeleteScheduleTaskRequestDeviceInfo() {}

  explicit DeleteScheduleTaskRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~DeleteScheduleTaskRequestDeviceInfo() = default;
};
class DeleteScheduleTaskRequestPayload : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  DeleteScheduleTaskRequestPayload() {}

  explicit DeleteScheduleTaskRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DeleteScheduleTaskRequestPayload() = default;
};
class DeleteScheduleTaskRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  DeleteScheduleTaskRequestUserInfo() {}

  explicit DeleteScheduleTaskRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~DeleteScheduleTaskRequestUserInfo() = default;
};
class DeleteScheduleTaskRequest : public Darabonba::Model {
public:
  shared_ptr<DeleteScheduleTaskRequestDeviceInfo> deviceInfo{};
  shared_ptr<DeleteScheduleTaskRequestPayload> payload{};
  shared_ptr<DeleteScheduleTaskRequestUserInfo> userInfo{};

  DeleteScheduleTaskRequest() {}

  explicit DeleteScheduleTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        DeleteScheduleTaskRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<DeleteScheduleTaskRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        DeleteScheduleTaskRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<DeleteScheduleTaskRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        DeleteScheduleTaskRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<DeleteScheduleTaskRequestUserInfo>(model1);
      }
    }
  }


  virtual ~DeleteScheduleTaskRequest() = default;
};
class DeleteScheduleTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  DeleteScheduleTaskShrinkRequest() {}

  explicit DeleteScheduleTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~DeleteScheduleTaskShrinkRequest() = default;
};
class DeleteScheduleTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  DeleteScheduleTaskResponseBody() {}

  explicit DeleteScheduleTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~DeleteScheduleTaskResponseBody() = default;
};
class DeleteScheduleTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteScheduleTaskResponseBody> body{};

  DeleteScheduleTaskResponse() {}

  explicit DeleteScheduleTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScheduleTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScheduleTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScheduleTaskResponse() = default;
};
class DeleteSubHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  DeleteSubHeaders() {}

  explicit DeleteSubHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~DeleteSubHeaders() = default;
};
class DeleteSubRequest : public Darabonba::Model {
public:
  shared_ptr<long> subId{};

  DeleteSubRequest() {}

  explicit DeleteSubRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subId) {
      res["SubId"] = boost::any(*subId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubId") != m.end() && !m["SubId"].empty()) {
      subId = make_shared<long>(boost::any_cast<long>(m["SubId"]));
    }
  }


  virtual ~DeleteSubRequest() = default;
};
class DeleteSubResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  DeleteSubResponseBody() {}

  explicit DeleteSubResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~DeleteSubResponseBody() = default;
};
class DeleteSubResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSubResponseBody> body{};

  DeleteSubResponse() {}

  explicit DeleteSubResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSubResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSubResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSubResponse() = default;
};
class DeviceControlHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  DeviceControlHeaders() {}

  explicit DeviceControlHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~DeviceControlHeaders() = default;
};
class DeviceControlRequestControlRequest : public Darabonba::Model {
public:
  shared_ptr<bool> muted{};
  shared_ptr<long> volume{};

  DeviceControlRequestControlRequest() {}

  explicit DeviceControlRequestControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (muted) {
      res["Muted"] = boost::any(*muted);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Muted") != m.end() && !m["Muted"].empty()) {
      muted = make_shared<bool>(boost::any_cast<bool>(m["Muted"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~DeviceControlRequestControlRequest() = default;
};
class DeviceControlRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  DeviceControlRequestDeviceInfo() {}

  explicit DeviceControlRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~DeviceControlRequestDeviceInfo() = default;
};
class DeviceControlRequest : public Darabonba::Model {
public:
  shared_ptr<DeviceControlRequestControlRequest> controlRequest{};
  shared_ptr<DeviceControlRequestDeviceInfo> deviceInfo{};

  DeviceControlRequest() {}

  explicit DeviceControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlRequest) {
      res["ControlRequest"] = controlRequest ? boost::any(controlRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlRequest") != m.end() && !m["ControlRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["ControlRequest"].type()) {
        DeviceControlRequestControlRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ControlRequest"]));
        controlRequest = make_shared<DeviceControlRequestControlRequest>(model1);
      }
    }
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        DeviceControlRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<DeviceControlRequestDeviceInfo>(model1);
      }
    }
  }


  virtual ~DeviceControlRequest() = default;
};
class DeviceControlShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> controlRequestShrink{};
  shared_ptr<string> deviceInfoShrink{};

  DeviceControlShrinkRequest() {}

  explicit DeviceControlShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlRequestShrink) {
      res["ControlRequest"] = boost::any(*controlRequestShrink);
    }
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlRequest") != m.end() && !m["ControlRequest"].empty()) {
      controlRequestShrink = make_shared<string>(boost::any_cast<string>(m["ControlRequest"]));
    }
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
  }


  virtual ~DeviceControlShrinkRequest() = default;
};
class DeviceControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  DeviceControlResponseBody() {}

  explicit DeviceControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~DeviceControlResponseBody() = default;
};
class DeviceControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeviceControlResponseBody> body{};

  DeviceControlResponse() {}

  explicit DeviceControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeviceControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeviceControlResponseBody>(model1);
      }
    }
  }


  virtual ~DeviceControlResponse() = default;
};
class GetAlarmHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetAlarmHeaders() {}

  explicit GetAlarmHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetAlarmHeaders() = default;
};
class GetAlarmRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetAlarmRequestDeviceInfo() {}

  explicit GetAlarmRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetAlarmRequestDeviceInfo() = default;
};
class GetAlarmRequestPayload : public Darabonba::Model {
public:
  shared_ptr<long> alarmId{};

  GetAlarmRequestPayload() {}

  explicit GetAlarmRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<long>(boost::any_cast<long>(m["AlarmId"]));
    }
  }


  virtual ~GetAlarmRequestPayload() = default;
};
class GetAlarmRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetAlarmRequestUserInfo() {}

  explicit GetAlarmRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetAlarmRequestUserInfo() = default;
};
class GetAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<GetAlarmRequestDeviceInfo> deviceInfo{};
  shared_ptr<GetAlarmRequestPayload> payload{};
  shared_ptr<GetAlarmRequestUserInfo> userInfo{};

  GetAlarmRequest() {}

  explicit GetAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        GetAlarmRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<GetAlarmRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        GetAlarmRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<GetAlarmRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        GetAlarmRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<GetAlarmRequestUserInfo>(model1);
      }
    }
  }


  virtual ~GetAlarmRequest() = default;
};
class GetAlarmShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  GetAlarmShrinkRequest() {}

  explicit GetAlarmShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~GetAlarmShrinkRequest() = default;
};
class GetAlarmResponseBodyResultMusicInfo : public Darabonba::Model {
public:
  shared_ptr<long> musicId{};
  shared_ptr<string> musicName{};
  shared_ptr<long> musicType{};
  shared_ptr<string> musicTypeName{};
  shared_ptr<string> musicUrl{};

  GetAlarmResponseBodyResultMusicInfo() {}

  explicit GetAlarmResponseBodyResultMusicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (musicId) {
      res["MusicId"] = boost::any(*musicId);
    }
    if (musicName) {
      res["MusicName"] = boost::any(*musicName);
    }
    if (musicType) {
      res["MusicType"] = boost::any(*musicType);
    }
    if (musicTypeName) {
      res["MusicTypeName"] = boost::any(*musicTypeName);
    }
    if (musicUrl) {
      res["MusicUrl"] = boost::any(*musicUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MusicId") != m.end() && !m["MusicId"].empty()) {
      musicId = make_shared<long>(boost::any_cast<long>(m["MusicId"]));
    }
    if (m.find("MusicName") != m.end() && !m["MusicName"].empty()) {
      musicName = make_shared<string>(boost::any_cast<string>(m["MusicName"]));
    }
    if (m.find("MusicType") != m.end() && !m["MusicType"].empty()) {
      musicType = make_shared<long>(boost::any_cast<long>(m["MusicType"]));
    }
    if (m.find("MusicTypeName") != m.end() && !m["MusicTypeName"].empty()) {
      musicTypeName = make_shared<string>(boost::any_cast<string>(m["MusicTypeName"]));
    }
    if (m.find("MusicUrl") != m.end() && !m["MusicUrl"].empty()) {
      musicUrl = make_shared<string>(boost::any_cast<string>(m["MusicUrl"]));
    }
  }


  virtual ~GetAlarmResponseBodyResultMusicInfo() = default;
};
class GetAlarmResponseBodyResultScheduleInfoOnce : public Darabonba::Model {
public:
  shared_ptr<long> day{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};
  shared_ptr<long> month{};
  shared_ptr<long> year{};

  GetAlarmResponseBodyResultScheduleInfoOnce() {}

  explicit GetAlarmResponseBodyResultScheduleInfoOnce(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    if (year) {
      res["Year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<long>(boost::any_cast<long>(m["Day"]));
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["Month"]));
    }
    if (m.find("Year") != m.end() && !m["Year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["Year"]));
    }
  }


  virtual ~GetAlarmResponseBodyResultScheduleInfoOnce() = default;
};
class GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay : public Darabonba::Model {
public:
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};

  GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay() {}

  explicit GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
  }


  virtual ~GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay() = default;
};
class GetAlarmResponseBodyResultScheduleInfoWeekly : public Darabonba::Model {
public:
  shared_ptr<vector<long>> daysOfWeek{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};

  GetAlarmResponseBodyResultScheduleInfoWeekly() {}

  explicit GetAlarmResponseBodyResultScheduleInfoWeekly(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (daysOfWeek) {
      res["DaysOfWeek"] = boost::any(*daysOfWeek);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DaysOfWeek") != m.end() && !m["DaysOfWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
  }


  virtual ~GetAlarmResponseBodyResultScheduleInfoWeekly() = default;
};
class GetAlarmResponseBodyResultScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<GetAlarmResponseBodyResultScheduleInfoOnce> once{};
  shared_ptr<GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay> statutoryWorkingDay{};
  shared_ptr<string> type{};
  shared_ptr<GetAlarmResponseBodyResultScheduleInfoWeekly> weekly{};

  GetAlarmResponseBodyResultScheduleInfo() {}

  explicit GetAlarmResponseBodyResultScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (once) {
      res["Once"] = once ? boost::any(once->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (statutoryWorkingDay) {
      res["StatutoryWorkingDay"] = statutoryWorkingDay ? boost::any(statutoryWorkingDay->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weekly) {
      res["Weekly"] = weekly ? boost::any(weekly->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Once") != m.end() && !m["Once"].empty()) {
      if (typeid(map<string, boost::any>) == m["Once"].type()) {
        GetAlarmResponseBodyResultScheduleInfoOnce model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Once"]));
        once = make_shared<GetAlarmResponseBodyResultScheduleInfoOnce>(model1);
      }
    }
    if (m.find("StatutoryWorkingDay") != m.end() && !m["StatutoryWorkingDay"].empty()) {
      if (typeid(map<string, boost::any>) == m["StatutoryWorkingDay"].type()) {
        GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StatutoryWorkingDay"]));
        statutoryWorkingDay = make_shared<GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weekly") != m.end() && !m["Weekly"].empty()) {
      if (typeid(map<string, boost::any>) == m["Weekly"].type()) {
        GetAlarmResponseBodyResultScheduleInfoWeekly model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Weekly"]));
        weekly = make_shared<GetAlarmResponseBodyResultScheduleInfoWeekly>(model1);
      }
    }
  }


  virtual ~GetAlarmResponseBodyResultScheduleInfo() = default;
};
class GetAlarmResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> alarmId{};
  shared_ptr<GetAlarmResponseBodyResultMusicInfo> musicInfo{};
  shared_ptr<GetAlarmResponseBodyResultScheduleInfo> scheduleInfo{};
  shared_ptr<string> scheduleTypeDesc{};
  shared_ptr<long> status{};
  shared_ptr<string> triggerDateDesc{};
  shared_ptr<string> triggerTimeDesc{};
  shared_ptr<long> userId{};
  shared_ptr<string> uuid{};
  shared_ptr<long> volume{};

  GetAlarmResponseBodyResult() {}

  explicit GetAlarmResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    if (musicInfo) {
      res["MusicInfo"] = musicInfo ? boost::any(musicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["ScheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleTypeDesc) {
      res["ScheduleTypeDesc"] = boost::any(*scheduleTypeDesc);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (triggerDateDesc) {
      res["TriggerDateDesc"] = boost::any(*triggerDateDesc);
    }
    if (triggerTimeDesc) {
      res["TriggerTimeDesc"] = boost::any(*triggerTimeDesc);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<long>(boost::any_cast<long>(m["AlarmId"]));
    }
    if (m.find("MusicInfo") != m.end() && !m["MusicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MusicInfo"].type()) {
        GetAlarmResponseBodyResultMusicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MusicInfo"]));
        musicInfo = make_shared<GetAlarmResponseBodyResultMusicInfo>(model1);
      }
    }
    if (m.find("ScheduleInfo") != m.end() && !m["ScheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScheduleInfo"].type()) {
        GetAlarmResponseBodyResultScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScheduleInfo"]));
        scheduleInfo = make_shared<GetAlarmResponseBodyResultScheduleInfo>(model1);
      }
    }
    if (m.find("ScheduleTypeDesc") != m.end() && !m["ScheduleTypeDesc"].empty()) {
      scheduleTypeDesc = make_shared<string>(boost::any_cast<string>(m["ScheduleTypeDesc"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TriggerDateDesc") != m.end() && !m["TriggerDateDesc"].empty()) {
      triggerDateDesc = make_shared<string>(boost::any_cast<string>(m["TriggerDateDesc"]));
    }
    if (m.find("TriggerTimeDesc") != m.end() && !m["TriggerTimeDesc"].empty()) {
      triggerTimeDesc = make_shared<string>(boost::any_cast<string>(m["TriggerTimeDesc"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~GetAlarmResponseBodyResult() = default;
};
class GetAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetAlarmResponseBodyResult> result{};

  GetAlarmResponseBody() {}

  explicit GetAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetAlarmResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetAlarmResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetAlarmResponseBody() = default;
};
class GetAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAlarmResponseBody> body{};

  GetAlarmResponse() {}

  explicit GetAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~GetAlarmResponse() = default;
};
class GetAlbumHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetAlbumHeaders() {}

  explicit GetAlbumHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetAlbumHeaders() = default;
};
class GetAlbumRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> type{};

  GetAlbumRequest() {}

  explicit GetAlbumRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetAlbumRequest() = default;
};
class GetAlbumResponseBodyResultAuthors : public Darabonba::Model {
public:
  shared_ptr<vector<string>> authorTypes{};
  shared_ptr<string> gender{};
  shared_ptr<long> id{};
  shared_ptr<bool> online{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};

  GetAlbumResponseBodyResultAuthors() {}

  explicit GetAlbumResponseBodyResultAuthors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorTypes) {
      res["AuthorTypes"] = boost::any(*authorTypes);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorTypes") != m.end() && !m["AuthorTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetAlbumResponseBodyResultAuthors() = default;
};
class GetAlbumResponseBodyResultCover : public Darabonba::Model {
public:
  shared_ptr<bool> canResize{};
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};

  GetAlbumResponseBodyResultCover() {}

  explicit GetAlbumResponseBodyResultCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canResize) {
      res["CanResize"] = boost::any(*canResize);
    }
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanResize") != m.end() && !m["CanResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["CanResize"]));
    }
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
  }


  virtual ~GetAlbumResponseBodyResultCover() = default;
};
class GetAlbumResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<string>> alias{};
  shared_ptr<bool> audition{};
  shared_ptr<vector<GetAlbumResponseBodyResultAuthors>> authors{};
  shared_ptr<string> category{};
  shared_ptr<bool> charge{};
  shared_ptr<long> commCateId{};
  shared_ptr<GetAlbumResponseBodyResultCover> cover{};
  shared_ptr<string> description{};
  shared_ptr<string> finished{};
  shared_ptr<double> hotScore{};
  shared_ptr<long> id{};
  shared_ptr<string> itemType{};
  shared_ptr<string> rawId{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};
  shared_ptr<long> totalEpisode{};
  shared_ptr<string> type{};
  shared_ptr<string> valid{};

  GetAlbumResponseBodyResult() {}

  explicit GetAlbumResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (audition) {
      res["Audition"] = boost::any(*audition);
    }
    if (authors) {
      vector<boost::any> temp1;
      for(auto item1:*authors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Authors"] = boost::any(temp1);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (charge) {
      res["Charge"] = boost::any(*charge);
    }
    if (commCateId) {
      res["CommCateId"] = boost::any(*commCateId);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (finished) {
      res["Finished"] = boost::any(*finished);
    }
    if (hotScore) {
      res["HotScore"] = boost::any(*hotScore);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (itemType) {
      res["ItemType"] = boost::any(*itemType);
    }
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (totalEpisode) {
      res["TotalEpisode"] = boost::any(*totalEpisode);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Alias"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Alias"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alias = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Audition") != m.end() && !m["Audition"].empty()) {
      audition = make_shared<bool>(boost::any_cast<bool>(m["Audition"]));
    }
    if (m.find("Authors") != m.end() && !m["Authors"].empty()) {
      if (typeid(vector<boost::any>) == m["Authors"].type()) {
        vector<GetAlbumResponseBodyResultAuthors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Authors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAlbumResponseBodyResultAuthors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authors = make_shared<vector<GetAlbumResponseBodyResultAuthors>>(expect1);
      }
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Charge") != m.end() && !m["Charge"].empty()) {
      charge = make_shared<bool>(boost::any_cast<bool>(m["Charge"]));
    }
    if (m.find("CommCateId") != m.end() && !m["CommCateId"].empty()) {
      commCateId = make_shared<long>(boost::any_cast<long>(m["CommCateId"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        GetAlbumResponseBodyResultCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<GetAlbumResponseBodyResultCover>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Finished") != m.end() && !m["Finished"].empty()) {
      finished = make_shared<string>(boost::any_cast<string>(m["Finished"]));
    }
    if (m.find("HotScore") != m.end() && !m["HotScore"].empty()) {
      hotScore = make_shared<double>(boost::any_cast<double>(m["HotScore"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ItemType") != m.end() && !m["ItemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["ItemType"]));
    }
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<string>(boost::any_cast<string>(m["RawId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("TotalEpisode") != m.end() && !m["TotalEpisode"].empty()) {
      totalEpisode = make_shared<long>(boost::any_cast<long>(m["TotalEpisode"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<string>(boost::any_cast<string>(m["Valid"]));
    }
  }


  virtual ~GetAlbumResponseBodyResult() = default;
};
class GetAlbumResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> requestId{};
  shared_ptr<GetAlbumResponseBodyResult> result{};

  GetAlbumResponseBody() {}

  explicit GetAlbumResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetAlbumResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetAlbumResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetAlbumResponseBody() = default;
};
class GetAlbumResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAlbumResponseBody> body{};

  GetAlbumResponse() {}

  explicit GetAlbumResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAlbumResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAlbumResponseBody>(model1);
      }
    }
  }


  virtual ~GetAlbumResponse() = default;
};
class GetAlbumDetailByIdHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetAlbumDetailByIdHeaders() {}

  explicit GetAlbumDetailByIdHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetAlbumDetailByIdHeaders() = default;
};
class GetAlbumDetailByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> albumId{};

  GetAlbumDetailByIdRequest() {}

  explicit GetAlbumDetailByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumId) {
      res["AlbumId"] = boost::any(*albumId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumId") != m.end() && !m["AlbumId"].empty()) {
      albumId = make_shared<string>(boost::any_cast<string>(m["AlbumId"]));
    }
  }


  virtual ~GetAlbumDetailByIdRequest() = default;
};
class GetAlbumDetailByIdResponseBodyResultAlbumContentList : public Darabonba::Model {
public:
  shared_ptr<string> duration{};
  shared_ptr<string> id{};
  shared_ptr<string> orderIndex{};
  shared_ptr<string> title{};

  GetAlbumDetailByIdResponseBodyResultAlbumContentList() {}

  explicit GetAlbumDetailByIdResponseBodyResultAlbumContentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (orderIndex) {
      res["OrderIndex"] = boost::any(*orderIndex);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("OrderIndex") != m.end() && !m["OrderIndex"].empty()) {
      orderIndex = make_shared<string>(boost::any_cast<string>(m["OrderIndex"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetAlbumDetailByIdResponseBodyResultAlbumContentList() = default;
};
class GetAlbumDetailByIdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<GetAlbumDetailByIdResponseBodyResultAlbumContentList>> albumContentList{};
  shared_ptr<string> albumCoverUrl{};
  shared_ptr<string> albumDescription{};
  shared_ptr<string> albumId{};
  shared_ptr<string> albumTitle{};

  GetAlbumDetailByIdResponseBodyResult() {}

  explicit GetAlbumDetailByIdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumContentList) {
      vector<boost::any> temp1;
      for(auto item1:*albumContentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AlbumContentList"] = boost::any(temp1);
    }
    if (albumCoverUrl) {
      res["AlbumCoverUrl"] = boost::any(*albumCoverUrl);
    }
    if (albumDescription) {
      res["AlbumDescription"] = boost::any(*albumDescription);
    }
    if (albumId) {
      res["AlbumId"] = boost::any(*albumId);
    }
    if (albumTitle) {
      res["AlbumTitle"] = boost::any(*albumTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumContentList") != m.end() && !m["AlbumContentList"].empty()) {
      if (typeid(vector<boost::any>) == m["AlbumContentList"].type()) {
        vector<GetAlbumDetailByIdResponseBodyResultAlbumContentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AlbumContentList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAlbumDetailByIdResponseBodyResultAlbumContentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        albumContentList = make_shared<vector<GetAlbumDetailByIdResponseBodyResultAlbumContentList>>(expect1);
      }
    }
    if (m.find("AlbumCoverUrl") != m.end() && !m["AlbumCoverUrl"].empty()) {
      albumCoverUrl = make_shared<string>(boost::any_cast<string>(m["AlbumCoverUrl"]));
    }
    if (m.find("AlbumDescription") != m.end() && !m["AlbumDescription"].empty()) {
      albumDescription = make_shared<string>(boost::any_cast<string>(m["AlbumDescription"]));
    }
    if (m.find("AlbumId") != m.end() && !m["AlbumId"].empty()) {
      albumId = make_shared<string>(boost::any_cast<string>(m["AlbumId"]));
    }
    if (m.find("AlbumTitle") != m.end() && !m["AlbumTitle"].empty()) {
      albumTitle = make_shared<string>(boost::any_cast<string>(m["AlbumTitle"]));
    }
  }


  virtual ~GetAlbumDetailByIdResponseBodyResult() = default;
};
class GetAlbumDetailByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetAlbumDetailByIdResponseBodyResult> result{};

  GetAlbumDetailByIdResponseBody() {}

  explicit GetAlbumDetailByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetAlbumDetailByIdResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetAlbumDetailByIdResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetAlbumDetailByIdResponseBody() = default;
};
class GetAlbumDetailByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAlbumDetailByIdResponseBody> body{};

  GetAlbumDetailByIdResponse() {}

  explicit GetAlbumDetailByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAlbumDetailByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAlbumDetailByIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetAlbumDetailByIdResponse() = default;
};
class GetCodeEnhanceHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetCodeEnhanceHeaders() {}

  explicit GetCodeEnhanceHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetCodeEnhanceHeaders() = default;
};
class GetCodeEnhanceRequestChannelInfo : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<string> extInfo{};

  GetCodeEnhanceRequestChannelInfo() {}

  explicit GetCodeEnhanceRequestChannelInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
  }


  virtual ~GetCodeEnhanceRequestChannelInfo() = default;
};
class GetCodeEnhanceRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetCodeEnhanceRequestUserInfo() {}

  explicit GetCodeEnhanceRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetCodeEnhanceRequestUserInfo() = default;
};
class GetCodeEnhanceRequest : public Darabonba::Model {
public:
  shared_ptr<GetCodeEnhanceRequestChannelInfo> channelInfo{};
  shared_ptr<GetCodeEnhanceRequestUserInfo> userInfo{};

  GetCodeEnhanceRequest() {}

  explicit GetCodeEnhanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelInfo) {
      res["ChannelInfo"] = channelInfo ? boost::any(channelInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelInfo") != m.end() && !m["ChannelInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChannelInfo"].type()) {
        GetCodeEnhanceRequestChannelInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChannelInfo"]));
        channelInfo = make_shared<GetCodeEnhanceRequestChannelInfo>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        GetCodeEnhanceRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<GetCodeEnhanceRequestUserInfo>(model1);
      }
    }
  }


  virtual ~GetCodeEnhanceRequest() = default;
};
class GetCodeEnhanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelInfoShrink{};
  shared_ptr<string> userInfoShrink{};

  GetCodeEnhanceShrinkRequest() {}

  explicit GetCodeEnhanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelInfoShrink) {
      res["ChannelInfo"] = boost::any(*channelInfoShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelInfo") != m.end() && !m["ChannelInfo"].empty()) {
      channelInfoShrink = make_shared<string>(boost::any_cast<string>(m["ChannelInfo"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~GetCodeEnhanceShrinkRequest() = default;
};
class GetCodeEnhanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  GetCodeEnhanceResponseBody() {}

  explicit GetCodeEnhanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~GetCodeEnhanceResponseBody() = default;
};
class GetCodeEnhanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCodeEnhanceResponseBody> body{};

  GetCodeEnhanceResponse() {}

  explicit GetCodeEnhanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCodeEnhanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCodeEnhanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetCodeEnhanceResponse() = default;
};
class GetContentHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetContentHeaders() {}

  explicit GetContentHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetContentHeaders() = default;
};
class GetContentRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> type{};

  GetContentRequest() {}

  explicit GetContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetContentRequest() = default;
};
class GetContentResponseBodyResultAuthors : public Darabonba::Model {
public:
  shared_ptr<vector<string>> authorTypes{};
  shared_ptr<string> gender{};
  shared_ptr<long> id{};
  shared_ptr<bool> online{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};

  GetContentResponseBodyResultAuthors() {}

  explicit GetContentResponseBodyResultAuthors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorTypes) {
      res["AuthorTypes"] = boost::any(*authorTypes);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorTypes") != m.end() && !m["AuthorTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetContentResponseBodyResultAuthors() = default;
};
class GetContentResponseBodyResultCover : public Darabonba::Model {
public:
  shared_ptr<bool> canResize{};
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};

  GetContentResponseBodyResultCover() {}

  explicit GetContentResponseBodyResultCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canResize) {
      res["CanResize"] = boost::any(*canResize);
    }
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanResize") != m.end() && !m["CanResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["CanResize"]));
    }
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
  }


  virtual ~GetContentResponseBodyResultCover() = default;
};
class GetContentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> albumId{};
  shared_ptr<vector<string>> alias{};
  shared_ptr<bool> audition{};
  shared_ptr<vector<GetContentResponseBodyResultAuthors>> authors{};
  shared_ptr<string> category{};
  shared_ptr<bool> charge{};
  shared_ptr<long> commCateId{};
  shared_ptr<GetContentResponseBodyResultCover> cover{};
  shared_ptr<string> description{};
  shared_ptr<long> duration{};
  shared_ptr<double> hotScore{};
  shared_ptr<long> id{};
  shared_ptr<string> itemType{};
  shared_ptr<string> lyric{};
  shared_ptr<string> source{};
  shared_ptr<vector<string>> styles{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<string> valid{};

  GetContentResponseBodyResult() {}

  explicit GetContentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumId) {
      res["AlbumId"] = boost::any(*albumId);
    }
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (audition) {
      res["Audition"] = boost::any(*audition);
    }
    if (authors) {
      vector<boost::any> temp1;
      for(auto item1:*authors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Authors"] = boost::any(temp1);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (charge) {
      res["Charge"] = boost::any(*charge);
    }
    if (commCateId) {
      res["CommCateId"] = boost::any(*commCateId);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (hotScore) {
      res["HotScore"] = boost::any(*hotScore);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (itemType) {
      res["ItemType"] = boost::any(*itemType);
    }
    if (lyric) {
      res["Lyric"] = boost::any(*lyric);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (styles) {
      res["Styles"] = boost::any(*styles);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumId") != m.end() && !m["AlbumId"].empty()) {
      albumId = make_shared<string>(boost::any_cast<string>(m["AlbumId"]));
    }
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Alias"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Alias"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alias = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Audition") != m.end() && !m["Audition"].empty()) {
      audition = make_shared<bool>(boost::any_cast<bool>(m["Audition"]));
    }
    if (m.find("Authors") != m.end() && !m["Authors"].empty()) {
      if (typeid(vector<boost::any>) == m["Authors"].type()) {
        vector<GetContentResponseBodyResultAuthors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Authors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetContentResponseBodyResultAuthors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authors = make_shared<vector<GetContentResponseBodyResultAuthors>>(expect1);
      }
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Charge") != m.end() && !m["Charge"].empty()) {
      charge = make_shared<bool>(boost::any_cast<bool>(m["Charge"]));
    }
    if (m.find("CommCateId") != m.end() && !m["CommCateId"].empty()) {
      commCateId = make_shared<long>(boost::any_cast<long>(m["CommCateId"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        GetContentResponseBodyResultCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<GetContentResponseBodyResultCover>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("HotScore") != m.end() && !m["HotScore"].empty()) {
      hotScore = make_shared<double>(boost::any_cast<double>(m["HotScore"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ItemType") != m.end() && !m["ItemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["ItemType"]));
    }
    if (m.find("Lyric") != m.end() && !m["Lyric"].empty()) {
      lyric = make_shared<string>(boost::any_cast<string>(m["Lyric"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Styles") != m.end() && !m["Styles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Styles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Styles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      styles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<string>(boost::any_cast<string>(m["Valid"]));
    }
  }


  virtual ~GetContentResponseBodyResult() = default;
};
class GetContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetContentResponseBodyResult> result{};

  GetContentResponseBody() {}

  explicit GetContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetContentResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetContentResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetContentResponseBody() = default;
};
class GetContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetContentResponseBody> body{};

  GetContentResponse() {}

  explicit GetContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetContentResponseBody>(model1);
      }
    }
  }


  virtual ~GetContentResponse() = default;
};
class GetCurrentPlayingItemHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetCurrentPlayingItemHeaders() {}

  explicit GetCurrentPlayingItemHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetCurrentPlayingItemHeaders() = default;
};
class GetCurrentPlayingItemRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetCurrentPlayingItemRequestDeviceInfo() {}

  explicit GetCurrentPlayingItemRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetCurrentPlayingItemRequestDeviceInfo() = default;
};
class GetCurrentPlayingItemRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetCurrentPlayingItemRequestUserInfo() {}

  explicit GetCurrentPlayingItemRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetCurrentPlayingItemRequestUserInfo() = default;
};
class GetCurrentPlayingItemRequest : public Darabonba::Model {
public:
  shared_ptr<GetCurrentPlayingItemRequestDeviceInfo> deviceInfo{};
  shared_ptr<GetCurrentPlayingItemRequestUserInfo> userInfo{};

  GetCurrentPlayingItemRequest() {}

  explicit GetCurrentPlayingItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        GetCurrentPlayingItemRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<GetCurrentPlayingItemRequestDeviceInfo>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        GetCurrentPlayingItemRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<GetCurrentPlayingItemRequestUserInfo>(model1);
      }
    }
  }


  virtual ~GetCurrentPlayingItemRequest() = default;
};
class GetCurrentPlayingItemShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> userInfoShrink{};

  GetCurrentPlayingItemShrinkRequest() {}

  explicit GetCurrentPlayingItemShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~GetCurrentPlayingItemShrinkRequest() = default;
};
class GetCurrentPlayingItemResponseBodyResultCover : public Darabonba::Model {
public:
  shared_ptr<bool> canResize{};
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> mediam{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};

  GetCurrentPlayingItemResponseBodyResultCover() {}

  explicit GetCurrentPlayingItemResponseBodyResultCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canResize) {
      res["CanResize"] = boost::any(*canResize);
    }
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (mediam) {
      res["Mediam"] = boost::any(*mediam);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanResize") != m.end() && !m["CanResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["CanResize"]));
    }
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Mediam") != m.end() && !m["Mediam"].empty()) {
      mediam = make_shared<string>(boost::any_cast<string>(m["Mediam"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
  }


  virtual ~GetCurrentPlayingItemResponseBodyResultCover() = default;
};
class GetCurrentPlayingItemResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> albumName{};
  shared_ptr<string> albumRawId{};
  shared_ptr<long> audioLength{};
  shared_ptr<long> copyright{};
  shared_ptr<GetCurrentPlayingItemResponseBodyResultCover> cover{};
  shared_ptr<long> defaultPlayOrder{};
  shared_ptr<string> itemUrl{};
  shared_ptr<string> liked{};
  shared_ptr<string> lyricUrl{};
  shared_ptr<string> playMode{};
  shared_ptr<long> pos{};
  shared_ptr<long> progress{};
  shared_ptr<string> rawId{};
  shared_ptr<string> singer{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<string> valid{};

  GetCurrentPlayingItemResponseBodyResult() {}

  explicit GetCurrentPlayingItemResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumName) {
      res["AlbumName"] = boost::any(*albumName);
    }
    if (albumRawId) {
      res["AlbumRawId"] = boost::any(*albumRawId);
    }
    if (audioLength) {
      res["AudioLength"] = boost::any(*audioLength);
    }
    if (copyright) {
      res["Copyright"] = boost::any(*copyright);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (defaultPlayOrder) {
      res["DefaultPlayOrder"] = boost::any(*defaultPlayOrder);
    }
    if (itemUrl) {
      res["ItemUrl"] = boost::any(*itemUrl);
    }
    if (liked) {
      res["Liked"] = boost::any(*liked);
    }
    if (lyricUrl) {
      res["LyricUrl"] = boost::any(*lyricUrl);
    }
    if (playMode) {
      res["PlayMode"] = boost::any(*playMode);
    }
    if (pos) {
      res["Pos"] = boost::any(*pos);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (singer) {
      res["Singer"] = boost::any(*singer);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumName") != m.end() && !m["AlbumName"].empty()) {
      albumName = make_shared<string>(boost::any_cast<string>(m["AlbumName"]));
    }
    if (m.find("AlbumRawId") != m.end() && !m["AlbumRawId"].empty()) {
      albumRawId = make_shared<string>(boost::any_cast<string>(m["AlbumRawId"]));
    }
    if (m.find("AudioLength") != m.end() && !m["AudioLength"].empty()) {
      audioLength = make_shared<long>(boost::any_cast<long>(m["AudioLength"]));
    }
    if (m.find("Copyright") != m.end() && !m["Copyright"].empty()) {
      copyright = make_shared<long>(boost::any_cast<long>(m["Copyright"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        GetCurrentPlayingItemResponseBodyResultCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<GetCurrentPlayingItemResponseBodyResultCover>(model1);
      }
    }
    if (m.find("DefaultPlayOrder") != m.end() && !m["DefaultPlayOrder"].empty()) {
      defaultPlayOrder = make_shared<long>(boost::any_cast<long>(m["DefaultPlayOrder"]));
    }
    if (m.find("ItemUrl") != m.end() && !m["ItemUrl"].empty()) {
      itemUrl = make_shared<string>(boost::any_cast<string>(m["ItemUrl"]));
    }
    if (m.find("Liked") != m.end() && !m["Liked"].empty()) {
      liked = make_shared<string>(boost::any_cast<string>(m["Liked"]));
    }
    if (m.find("LyricUrl") != m.end() && !m["LyricUrl"].empty()) {
      lyricUrl = make_shared<string>(boost::any_cast<string>(m["LyricUrl"]));
    }
    if (m.find("PlayMode") != m.end() && !m["PlayMode"].empty()) {
      playMode = make_shared<string>(boost::any_cast<string>(m["PlayMode"]));
    }
    if (m.find("Pos") != m.end() && !m["Pos"].empty()) {
      pos = make_shared<long>(boost::any_cast<long>(m["Pos"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<string>(boost::any_cast<string>(m["RawId"]));
    }
    if (m.find("Singer") != m.end() && !m["Singer"].empty()) {
      singer = make_shared<string>(boost::any_cast<string>(m["Singer"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<string>(boost::any_cast<string>(m["Valid"]));
    }
  }


  virtual ~GetCurrentPlayingItemResponseBodyResult() = default;
};
class GetCurrentPlayingItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetCurrentPlayingItemResponseBodyResult> result{};
  shared_ptr<string> success{};

  GetCurrentPlayingItemResponseBody() {}

  explicit GetCurrentPlayingItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetCurrentPlayingItemResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetCurrentPlayingItemResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~GetCurrentPlayingItemResponseBody() = default;
};
class GetCurrentPlayingItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCurrentPlayingItemResponseBody> body{};

  GetCurrentPlayingItemResponse() {}

  explicit GetCurrentPlayingItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCurrentPlayingItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCurrentPlayingItemResponseBody>(model1);
      }
    }
  }


  virtual ~GetCurrentPlayingItemResponse() = default;
};
class GetCurrentPlayingListHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetCurrentPlayingListHeaders() {}

  explicit GetCurrentPlayingListHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetCurrentPlayingListHeaders() = default;
};
class GetCurrentPlayingListRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetCurrentPlayingListRequestDeviceInfo() {}

  explicit GetCurrentPlayingListRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetCurrentPlayingListRequestDeviceInfo() = default;
};
class GetCurrentPlayingListRequestOpenQueryPlayListRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  GetCurrentPlayingListRequestOpenQueryPlayListRequest() {}

  explicit GetCurrentPlayingListRequestOpenQueryPlayListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~GetCurrentPlayingListRequestOpenQueryPlayListRequest() = default;
};
class GetCurrentPlayingListRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetCurrentPlayingListRequestUserInfo() {}

  explicit GetCurrentPlayingListRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetCurrentPlayingListRequestUserInfo() = default;
};
class GetCurrentPlayingListRequest : public Darabonba::Model {
public:
  shared_ptr<GetCurrentPlayingListRequestDeviceInfo> deviceInfo{};
  shared_ptr<GetCurrentPlayingListRequestOpenQueryPlayListRequest> openQueryPlayListRequest{};
  shared_ptr<GetCurrentPlayingListRequestUserInfo> userInfo{};

  GetCurrentPlayingListRequest() {}

  explicit GetCurrentPlayingListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (openQueryPlayListRequest) {
      res["OpenQueryPlayListRequest"] = openQueryPlayListRequest ? boost::any(openQueryPlayListRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        GetCurrentPlayingListRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<GetCurrentPlayingListRequestDeviceInfo>(model1);
      }
    }
    if (m.find("OpenQueryPlayListRequest") != m.end() && !m["OpenQueryPlayListRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpenQueryPlayListRequest"].type()) {
        GetCurrentPlayingListRequestOpenQueryPlayListRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpenQueryPlayListRequest"]));
        openQueryPlayListRequest = make_shared<GetCurrentPlayingListRequestOpenQueryPlayListRequest>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        GetCurrentPlayingListRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<GetCurrentPlayingListRequestUserInfo>(model1);
      }
    }
  }


  virtual ~GetCurrentPlayingListRequest() = default;
};
class GetCurrentPlayingListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> openQueryPlayListRequestShrink{};
  shared_ptr<string> userInfoShrink{};

  GetCurrentPlayingListShrinkRequest() {}

  explicit GetCurrentPlayingListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (openQueryPlayListRequestShrink) {
      res["OpenQueryPlayListRequest"] = boost::any(*openQueryPlayListRequestShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("OpenQueryPlayListRequest") != m.end() && !m["OpenQueryPlayListRequest"].empty()) {
      openQueryPlayListRequestShrink = make_shared<string>(boost::any_cast<string>(m["OpenQueryPlayListRequest"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~GetCurrentPlayingListShrinkRequest() = default;
};
class GetCurrentPlayingListResponseBodyResultCover : public Darabonba::Model {
public:
  shared_ptr<bool> canResize{};
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> mediam{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};

  GetCurrentPlayingListResponseBodyResultCover() {}

  explicit GetCurrentPlayingListResponseBodyResultCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canResize) {
      res["CanResize"] = boost::any(*canResize);
    }
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (mediam) {
      res["Mediam"] = boost::any(*mediam);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanResize") != m.end() && !m["CanResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["CanResize"]));
    }
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Mediam") != m.end() && !m["Mediam"].empty()) {
      mediam = make_shared<string>(boost::any_cast<string>(m["Mediam"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
  }


  virtual ~GetCurrentPlayingListResponseBodyResultCover() = default;
};
class GetCurrentPlayingListResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> albumName{};
  shared_ptr<string> albumRawId{};
  shared_ptr<long> audioLength{};
  shared_ptr<long> copyright{};
  shared_ptr<GetCurrentPlayingListResponseBodyResultCover> cover{};
  shared_ptr<long> defaultPlayOrder{};
  shared_ptr<string> itemUrl{};
  shared_ptr<bool> liked{};
  shared_ptr<string> lyricUrl{};
  shared_ptr<string> playMode{};
  shared_ptr<long> pos{};
  shared_ptr<long> progress{};
  shared_ptr<string> rawId{};
  shared_ptr<string> singer{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<string> valid{};

  GetCurrentPlayingListResponseBodyResult() {}

  explicit GetCurrentPlayingListResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumName) {
      res["AlbumName"] = boost::any(*albumName);
    }
    if (albumRawId) {
      res["AlbumRawId"] = boost::any(*albumRawId);
    }
    if (audioLength) {
      res["AudioLength"] = boost::any(*audioLength);
    }
    if (copyright) {
      res["Copyright"] = boost::any(*copyright);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (defaultPlayOrder) {
      res["DefaultPlayOrder"] = boost::any(*defaultPlayOrder);
    }
    if (itemUrl) {
      res["ItemUrl"] = boost::any(*itemUrl);
    }
    if (liked) {
      res["Liked"] = boost::any(*liked);
    }
    if (lyricUrl) {
      res["LyricUrl"] = boost::any(*lyricUrl);
    }
    if (playMode) {
      res["PlayMode"] = boost::any(*playMode);
    }
    if (pos) {
      res["Pos"] = boost::any(*pos);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (singer) {
      res["Singer"] = boost::any(*singer);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumName") != m.end() && !m["AlbumName"].empty()) {
      albumName = make_shared<string>(boost::any_cast<string>(m["AlbumName"]));
    }
    if (m.find("AlbumRawId") != m.end() && !m["AlbumRawId"].empty()) {
      albumRawId = make_shared<string>(boost::any_cast<string>(m["AlbumRawId"]));
    }
    if (m.find("AudioLength") != m.end() && !m["AudioLength"].empty()) {
      audioLength = make_shared<long>(boost::any_cast<long>(m["AudioLength"]));
    }
    if (m.find("Copyright") != m.end() && !m["Copyright"].empty()) {
      copyright = make_shared<long>(boost::any_cast<long>(m["Copyright"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        GetCurrentPlayingListResponseBodyResultCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<GetCurrentPlayingListResponseBodyResultCover>(model1);
      }
    }
    if (m.find("DefaultPlayOrder") != m.end() && !m["DefaultPlayOrder"].empty()) {
      defaultPlayOrder = make_shared<long>(boost::any_cast<long>(m["DefaultPlayOrder"]));
    }
    if (m.find("ItemUrl") != m.end() && !m["ItemUrl"].empty()) {
      itemUrl = make_shared<string>(boost::any_cast<string>(m["ItemUrl"]));
    }
    if (m.find("Liked") != m.end() && !m["Liked"].empty()) {
      liked = make_shared<bool>(boost::any_cast<bool>(m["Liked"]));
    }
    if (m.find("LyricUrl") != m.end() && !m["LyricUrl"].empty()) {
      lyricUrl = make_shared<string>(boost::any_cast<string>(m["LyricUrl"]));
    }
    if (m.find("PlayMode") != m.end() && !m["PlayMode"].empty()) {
      playMode = make_shared<string>(boost::any_cast<string>(m["PlayMode"]));
    }
    if (m.find("Pos") != m.end() && !m["Pos"].empty()) {
      pos = make_shared<long>(boost::any_cast<long>(m["Pos"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<string>(boost::any_cast<string>(m["RawId"]));
    }
    if (m.find("Singer") != m.end() && !m["Singer"].empty()) {
      singer = make_shared<string>(boost::any_cast<string>(m["Singer"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<string>(boost::any_cast<string>(m["Valid"]));
    }
  }


  virtual ~GetCurrentPlayingListResponseBodyResult() = default;
};
class GetCurrentPlayingListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetCurrentPlayingListResponseBodyResult>> result{};
  shared_ptr<string> success{};

  GetCurrentPlayingListResponseBody() {}

  explicit GetCurrentPlayingListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<GetCurrentPlayingListResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCurrentPlayingListResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<GetCurrentPlayingListResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~GetCurrentPlayingListResponseBody() = default;
};
class GetCurrentPlayingListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCurrentPlayingListResponseBody> body{};

  GetCurrentPlayingListResponse() {}

  explicit GetCurrentPlayingListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCurrentPlayingListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCurrentPlayingListResponseBody>(model1);
      }
    }
  }


  virtual ~GetCurrentPlayingListResponse() = default;
};
class GetDeviceBasicInfoHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetDeviceBasicInfoHeaders() {}

  explicit GetDeviceBasicInfoHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetDeviceBasicInfoHeaders() = default;
};
class GetDeviceBasicInfoRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetDeviceBasicInfoRequestDeviceInfo() {}

  explicit GetDeviceBasicInfoRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetDeviceBasicInfoRequestDeviceInfo() = default;
};
class GetDeviceBasicInfoRequest : public Darabonba::Model {
public:
  shared_ptr<GetDeviceBasicInfoRequestDeviceInfo> deviceInfo{};

  GetDeviceBasicInfoRequest() {}

  explicit GetDeviceBasicInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        GetDeviceBasicInfoRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<GetDeviceBasicInfoRequestDeviceInfo>(model1);
      }
    }
  }


  virtual ~GetDeviceBasicInfoRequest() = default;
};
class GetDeviceBasicInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};

  GetDeviceBasicInfoShrinkRequest() {}

  explicit GetDeviceBasicInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
  }


  virtual ~GetDeviceBasicInfoShrinkRequest() = default;
};
class GetDeviceBasicInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> firmwareVersion{};
  shared_ptr<string> mac{};
  shared_ptr<string> name{};
  shared_ptr<string> sn{};

  GetDeviceBasicInfoResponseBodyResult() {}

  explicit GetDeviceBasicInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firmwareVersion) {
      res["FirmwareVersion"] = boost::any(*firmwareVersion);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FirmwareVersion") != m.end() && !m["FirmwareVersion"].empty()) {
      firmwareVersion = make_shared<string>(boost::any_cast<string>(m["FirmwareVersion"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
  }


  virtual ~GetDeviceBasicInfoResponseBodyResult() = default;
};
class GetDeviceBasicInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetDeviceBasicInfoResponseBodyResult> result{};

  GetDeviceBasicInfoResponseBody() {}

  explicit GetDeviceBasicInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetDeviceBasicInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetDeviceBasicInfoResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetDeviceBasicInfoResponseBody() = default;
};
class GetDeviceBasicInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceBasicInfoResponseBody> body{};

  GetDeviceBasicInfoResponse() {}

  explicit GetDeviceBasicInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceBasicInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceBasicInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceBasicInfoResponse() = default;
};
class GetDeviceIdByIdentityHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetDeviceIdByIdentityHeaders() {}

  explicit GetDeviceIdByIdentityHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetDeviceIdByIdentityHeaders() = default;
};
class GetDeviceIdByIdentityRequest : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> identityId{};
  shared_ptr<string> identityType{};
  shared_ptr<string> productKey{};

  GetDeviceIdByIdentityRequest() {}

  explicit GetDeviceIdByIdentityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (identityId) {
      res["IdentityId"] = boost::any(*identityId);
    }
    if (identityType) {
      res["IdentityType"] = boost::any(*identityType);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("IdentityId") != m.end() && !m["IdentityId"].empty()) {
      identityId = make_shared<string>(boost::any_cast<string>(m["IdentityId"]));
    }
    if (m.find("IdentityType") != m.end() && !m["IdentityType"].empty()) {
      identityType = make_shared<string>(boost::any_cast<string>(m["IdentityType"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~GetDeviceIdByIdentityRequest() = default;
};
class GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds : public Darabonba::Model {
public:
  shared_ptr<string> deviceUnionId{};
  shared_ptr<string> organizationId{};

  GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds() {}

  explicit GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceUnionId) {
      res["DeviceUnionId"] = boost::any(*deviceUnionId);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceUnionId") != m.end() && !m["DeviceUnionId"].empty()) {
      deviceUnionId = make_shared<string>(boost::any_cast<string>(m["DeviceUnionId"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds() = default;
};
class GetDeviceIdByIdentityResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> deviceOpenId{};
  shared_ptr<vector<GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds>> deviceUnionIds{};

  GetDeviceIdByIdentityResponseBodyResult() {}

  explicit GetDeviceIdByIdentityResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceOpenId) {
      res["DeviceOpenId"] = boost::any(*deviceOpenId);
    }
    if (deviceUnionIds) {
      vector<boost::any> temp1;
      for(auto item1:*deviceUnionIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceUnionIds"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceOpenId") != m.end() && !m["DeviceOpenId"].empty()) {
      deviceOpenId = make_shared<string>(boost::any_cast<string>(m["DeviceOpenId"]));
    }
    if (m.find("DeviceUnionIds") != m.end() && !m["DeviceUnionIds"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceUnionIds"].type()) {
        vector<GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceUnionIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceUnionIds = make_shared<vector<GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds>>(expect1);
      }
    }
  }


  virtual ~GetDeviceIdByIdentityResponseBodyResult() = default;
};
class GetDeviceIdByIdentityResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetDeviceIdByIdentityResponseBodyResult> result{};

  GetDeviceIdByIdentityResponseBody() {}

  explicit GetDeviceIdByIdentityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetDeviceIdByIdentityResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetDeviceIdByIdentityResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetDeviceIdByIdentityResponseBody() = default;
};
class GetDeviceIdByIdentityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceIdByIdentityResponseBody> body{};

  GetDeviceIdByIdentityResponse() {}

  explicit GetDeviceIdByIdentityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceIdByIdentityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceIdByIdentityResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceIdByIdentityResponse() = default;
};
class GetDeviceSettingHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetDeviceSettingHeaders() {}

  explicit GetDeviceSettingHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetDeviceSettingHeaders() = default;
};
class GetDeviceSettingRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetDeviceSettingRequestDeviceInfo() {}

  explicit GetDeviceSettingRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetDeviceSettingRequestDeviceInfo() = default;
};
class GetDeviceSettingRequest : public Darabonba::Model {
public:
  shared_ptr<GetDeviceSettingRequestDeviceInfo> deviceInfo{};
  shared_ptr<vector<string>> keys{};

  GetDeviceSettingRequest() {}

  explicit GetDeviceSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        GetDeviceSettingRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<GetDeviceSettingRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keys = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetDeviceSettingRequest() = default;
};
class GetDeviceSettingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> keysShrink{};

  GetDeviceSettingShrinkRequest() {}

  explicit GetDeviceSettingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (keysShrink) {
      res["Keys"] = boost::any(*keysShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      keysShrink = make_shared<string>(boost::any_cast<string>(m["Keys"]));
    }
  }


  virtual ~GetDeviceSettingShrinkRequest() = default;
};
class GetDeviceSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  GetDeviceSettingResponseBody() {}

  explicit GetDeviceSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetDeviceSettingResponseBody() = default;
};
class GetDeviceSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceSettingResponseBody> body{};

  GetDeviceSettingResponse() {}

  explicit GetDeviceSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceSettingResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceSettingResponse() = default;
};
class GetDeviceStatusDetailHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetDeviceStatusDetailHeaders() {}

  explicit GetDeviceStatusDetailHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetDeviceStatusDetailHeaders() = default;
};
class GetDeviceStatusDetailRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetDeviceStatusDetailRequestDeviceInfo() {}

  explicit GetDeviceStatusDetailRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetDeviceStatusDetailRequestDeviceInfo() = default;
};
class GetDeviceStatusDetailRequest : public Darabonba::Model {
public:
  shared_ptr<GetDeviceStatusDetailRequestDeviceInfo> deviceInfo{};
  shared_ptr<vector<string>> keys{};

  GetDeviceStatusDetailRequest() {}

  explicit GetDeviceStatusDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        GetDeviceStatusDetailRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<GetDeviceStatusDetailRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keys = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetDeviceStatusDetailRequest() = default;
};
class GetDeviceStatusDetailShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> keysShrink{};

  GetDeviceStatusDetailShrinkRequest() {}

  explicit GetDeviceStatusDetailShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (keysShrink) {
      res["Keys"] = boost::any(*keysShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      keysShrink = make_shared<string>(boost::any_cast<string>(m["Keys"]));
    }
  }


  virtual ~GetDeviceStatusDetailShrinkRequest() = default;
};
class GetDeviceStatusDetailResponseBodyResultPlayer : public Darabonba::Model {
public:
  shared_ptr<string> audioAlbum{};
  shared_ptr<string> audioAnchor{};
  shared_ptr<string> audioExt{};
  shared_ptr<string> audioId{};
  shared_ptr<string> audioLength{};
  shared_ptr<string> audioName{};
  shared_ptr<string> audioSource{};
  shared_ptr<string> audioUrl{};
  shared_ptr<string> format{};
  shared_ptr<string> progress{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> timestamp{};

  GetDeviceStatusDetailResponseBodyResultPlayer() {}

  explicit GetDeviceStatusDetailResponseBodyResultPlayer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioAlbum) {
      res["AudioAlbum"] = boost::any(*audioAlbum);
    }
    if (audioAnchor) {
      res["AudioAnchor"] = boost::any(*audioAnchor);
    }
    if (audioExt) {
      res["AudioExt"] = boost::any(*audioExt);
    }
    if (audioId) {
      res["AudioId"] = boost::any(*audioId);
    }
    if (audioLength) {
      res["AudioLength"] = boost::any(*audioLength);
    }
    if (audioName) {
      res["AudioName"] = boost::any(*audioName);
    }
    if (audioSource) {
      res["AudioSource"] = boost::any(*audioSource);
    }
    if (audioUrl) {
      res["AudioUrl"] = boost::any(*audioUrl);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioAlbum") != m.end() && !m["AudioAlbum"].empty()) {
      audioAlbum = make_shared<string>(boost::any_cast<string>(m["AudioAlbum"]));
    }
    if (m.find("AudioAnchor") != m.end() && !m["AudioAnchor"].empty()) {
      audioAnchor = make_shared<string>(boost::any_cast<string>(m["AudioAnchor"]));
    }
    if (m.find("AudioExt") != m.end() && !m["AudioExt"].empty()) {
      audioExt = make_shared<string>(boost::any_cast<string>(m["AudioExt"]));
    }
    if (m.find("AudioId") != m.end() && !m["AudioId"].empty()) {
      audioId = make_shared<string>(boost::any_cast<string>(m["AudioId"]));
    }
    if (m.find("AudioLength") != m.end() && !m["AudioLength"].empty()) {
      audioLength = make_shared<string>(boost::any_cast<string>(m["AudioLength"]));
    }
    if (m.find("AudioName") != m.end() && !m["AudioName"].empty()) {
      audioName = make_shared<string>(boost::any_cast<string>(m["AudioName"]));
    }
    if (m.find("AudioSource") != m.end() && !m["AudioSource"].empty()) {
      audioSource = make_shared<string>(boost::any_cast<string>(m["AudioSource"]));
    }
    if (m.find("AudioUrl") != m.end() && !m["AudioUrl"].empty()) {
      audioUrl = make_shared<string>(boost::any_cast<string>(m["AudioUrl"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
  }


  virtual ~GetDeviceStatusDetailResponseBodyResultPlayer() = default;
};
class GetDeviceStatusDetailResponseBodyResultPower : public Darabonba::Model {
public:
  shared_ptr<long> quantity{};
  shared_ptr<string> status{};

  GetDeviceStatusDetailResponseBodyResultPower() {}

  explicit GetDeviceStatusDetailResponseBodyResultPower(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetDeviceStatusDetailResponseBodyResultPower() = default;
};
class GetDeviceStatusDetailResponseBodyResultSpeaker : public Darabonba::Model {
public:
  shared_ptr<bool> muted{};
  shared_ptr<long> volume{};

  GetDeviceStatusDetailResponseBodyResultSpeaker() {}

  explicit GetDeviceStatusDetailResponseBodyResultSpeaker(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (muted) {
      res["Muted"] = boost::any(*muted);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Muted") != m.end() && !m["Muted"].empty()) {
      muted = make_shared<bool>(boost::any_cast<bool>(m["Muted"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~GetDeviceStatusDetailResponseBodyResultSpeaker() = default;
};
class GetDeviceStatusDetailResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<GetDeviceStatusDetailResponseBodyResultPlayer> player{};
  shared_ptr<GetDeviceStatusDetailResponseBodyResultPower> power{};
  shared_ptr<GetDeviceStatusDetailResponseBodyResultSpeaker> speaker{};

  GetDeviceStatusDetailResponseBodyResult() {}

  explicit GetDeviceStatusDetailResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (player) {
      res["Player"] = player ? boost::any(player->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (power) {
      res["Power"] = power ? boost::any(power->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (speaker) {
      res["Speaker"] = speaker ? boost::any(speaker->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Player") != m.end() && !m["Player"].empty()) {
      if (typeid(map<string, boost::any>) == m["Player"].type()) {
        GetDeviceStatusDetailResponseBodyResultPlayer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Player"]));
        player = make_shared<GetDeviceStatusDetailResponseBodyResultPlayer>(model1);
      }
    }
    if (m.find("Power") != m.end() && !m["Power"].empty()) {
      if (typeid(map<string, boost::any>) == m["Power"].type()) {
        GetDeviceStatusDetailResponseBodyResultPower model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Power"]));
        power = make_shared<GetDeviceStatusDetailResponseBodyResultPower>(model1);
      }
    }
    if (m.find("Speaker") != m.end() && !m["Speaker"].empty()) {
      if (typeid(map<string, boost::any>) == m["Speaker"].type()) {
        GetDeviceStatusDetailResponseBodyResultSpeaker model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Speaker"]));
        speaker = make_shared<GetDeviceStatusDetailResponseBodyResultSpeaker>(model1);
      }
    }
  }


  virtual ~GetDeviceStatusDetailResponseBodyResult() = default;
};
class GetDeviceStatusDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetDeviceStatusDetailResponseBodyResult> result{};

  GetDeviceStatusDetailResponseBody() {}

  explicit GetDeviceStatusDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetDeviceStatusDetailResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetDeviceStatusDetailResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetDeviceStatusDetailResponseBody() = default;
};
class GetDeviceStatusDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceStatusDetailResponseBody> body{};

  GetDeviceStatusDetailResponse() {}

  explicit GetDeviceStatusDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceStatusDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceStatusDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceStatusDetailResponse() = default;
};
class GetDeviceStatusInfoHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetDeviceStatusInfoHeaders() {}

  explicit GetDeviceStatusInfoHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetDeviceStatusInfoHeaders() = default;
};
class GetDeviceStatusInfoRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetDeviceStatusInfoRequestDeviceInfo() {}

  explicit GetDeviceStatusInfoRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetDeviceStatusInfoRequestDeviceInfo() = default;
};
class GetDeviceStatusInfoRequest : public Darabonba::Model {
public:
  shared_ptr<GetDeviceStatusInfoRequestDeviceInfo> deviceInfo{};

  GetDeviceStatusInfoRequest() {}

  explicit GetDeviceStatusInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        GetDeviceStatusInfoRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<GetDeviceStatusInfoRequestDeviceInfo>(model1);
      }
    }
  }


  virtual ~GetDeviceStatusInfoRequest() = default;
};
class GetDeviceStatusInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};

  GetDeviceStatusInfoShrinkRequest() {}

  explicit GetDeviceStatusInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
  }


  virtual ~GetDeviceStatusInfoShrinkRequest() = default;
};
class GetDeviceStatusInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> online{};

  GetDeviceStatusInfoResponseBodyResult() {}

  explicit GetDeviceStatusInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (online) {
      res["Online"] = boost::any(*online);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<long>(boost::any_cast<long>(m["Online"]));
    }
  }


  virtual ~GetDeviceStatusInfoResponseBodyResult() = default;
};
class GetDeviceStatusInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetDeviceStatusInfoResponseBodyResult> result{};

  GetDeviceStatusInfoResponseBody() {}

  explicit GetDeviceStatusInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetDeviceStatusInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetDeviceStatusInfoResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetDeviceStatusInfoResponseBody() = default;
};
class GetDeviceStatusInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceStatusInfoResponseBody> body{};

  GetDeviceStatusInfoResponse() {}

  explicit GetDeviceStatusInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceStatusInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceStatusInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceStatusInfoResponse() = default;
};
class GetDeviceTagHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetDeviceTagHeaders() {}

  explicit GetDeviceTagHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetDeviceTagHeaders() = default;
};
class GetDeviceTagRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetDeviceTagRequestDeviceInfo() {}

  explicit GetDeviceTagRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetDeviceTagRequestDeviceInfo() = default;
};
class GetDeviceTagRequest : public Darabonba::Model {
public:
  shared_ptr<GetDeviceTagRequestDeviceInfo> deviceInfo{};

  GetDeviceTagRequest() {}

  explicit GetDeviceTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        GetDeviceTagRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<GetDeviceTagRequestDeviceInfo>(model1);
      }
    }
  }


  virtual ~GetDeviceTagRequest() = default;
};
class GetDeviceTagShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};

  GetDeviceTagShrinkRequest() {}

  explicit GetDeviceTagShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
  }


  virtual ~GetDeviceTagShrinkRequest() = default;
};
class GetDeviceTagResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> deviceTags{};

  GetDeviceTagResponseBodyResult() {}

  explicit GetDeviceTagResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceTags) {
      res["DeviceTags"] = boost::any(*deviceTags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceTags") != m.end() && !m["DeviceTags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DeviceTags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      deviceTags = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetDeviceTagResponseBodyResult() = default;
};
class GetDeviceTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetDeviceTagResponseBodyResult> result{};

  GetDeviceTagResponseBody() {}

  explicit GetDeviceTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetDeviceTagResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetDeviceTagResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetDeviceTagResponseBody() = default;
};
class GetDeviceTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceTagResponseBody> body{};

  GetDeviceTagResponse() {}

  explicit GetDeviceTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceTagResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceTagResponse() = default;
};
class GetScheduleTaskHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetScheduleTaskHeaders() {}

  explicit GetScheduleTaskHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetScheduleTaskHeaders() = default;
};
class GetScheduleTaskRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetScheduleTaskRequestDeviceInfo() {}

  explicit GetScheduleTaskRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetScheduleTaskRequestDeviceInfo() = default;
};
class GetScheduleTaskRequestPayload : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  GetScheduleTaskRequestPayload() {}

  explicit GetScheduleTaskRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetScheduleTaskRequestPayload() = default;
};
class GetScheduleTaskRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetScheduleTaskRequestUserInfo() {}

  explicit GetScheduleTaskRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetScheduleTaskRequestUserInfo() = default;
};
class GetScheduleTaskRequest : public Darabonba::Model {
public:
  shared_ptr<GetScheduleTaskRequestDeviceInfo> deviceInfo{};
  shared_ptr<GetScheduleTaskRequestPayload> payload{};
  shared_ptr<GetScheduleTaskRequestUserInfo> userInfo{};

  GetScheduleTaskRequest() {}

  explicit GetScheduleTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        GetScheduleTaskRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<GetScheduleTaskRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        GetScheduleTaskRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<GetScheduleTaskRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        GetScheduleTaskRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<GetScheduleTaskRequestUserInfo>(model1);
      }
    }
  }


  virtual ~GetScheduleTaskRequest() = default;
};
class GetScheduleTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  GetScheduleTaskShrinkRequest() {}

  explicit GetScheduleTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~GetScheduleTaskShrinkRequest() = default;
};
class GetScheduleTaskResponseBodyResultActionTopicList : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> customAction{};

  GetScheduleTaskResponseBodyResultActionTopicList() {}

  explicit GetScheduleTaskResponseBodyResultActionTopicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customAction) {
      res["CustomAction"] = boost::any(*customAction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomAction") != m.end() && !m["CustomAction"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomAction"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customAction = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetScheduleTaskResponseBodyResultActionTopicList() = default;
};
class GetScheduleTaskResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<GetScheduleTaskResponseBodyResultActionTopicList>> actionTopicList{};
  shared_ptr<string> cron{};
  shared_ptr<string> scheduleEndTime{};
  shared_ptr<long> scheduleId{};
  shared_ptr<string> scheduleStartTime{};
  shared_ptr<string> scheduleType{};

  GetScheduleTaskResponseBodyResult() {}

  explicit GetScheduleTaskResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionTopicList) {
      vector<boost::any> temp1;
      for(auto item1:*actionTopicList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ActionTopicList"] = boost::any(temp1);
    }
    if (cron) {
      res["Cron"] = boost::any(*cron);
    }
    if (scheduleEndTime) {
      res["ScheduleEndTime"] = boost::any(*scheduleEndTime);
    }
    if (scheduleId) {
      res["ScheduleId"] = boost::any(*scheduleId);
    }
    if (scheduleStartTime) {
      res["ScheduleStartTime"] = boost::any(*scheduleStartTime);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionTopicList") != m.end() && !m["ActionTopicList"].empty()) {
      if (typeid(vector<boost::any>) == m["ActionTopicList"].type()) {
        vector<GetScheduleTaskResponseBodyResultActionTopicList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ActionTopicList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetScheduleTaskResponseBodyResultActionTopicList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actionTopicList = make_shared<vector<GetScheduleTaskResponseBodyResultActionTopicList>>(expect1);
      }
    }
    if (m.find("Cron") != m.end() && !m["Cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["Cron"]));
    }
    if (m.find("ScheduleEndTime") != m.end() && !m["ScheduleEndTime"].empty()) {
      scheduleEndTime = make_shared<string>(boost::any_cast<string>(m["ScheduleEndTime"]));
    }
    if (m.find("ScheduleId") != m.end() && !m["ScheduleId"].empty()) {
      scheduleId = make_shared<long>(boost::any_cast<long>(m["ScheduleId"]));
    }
    if (m.find("ScheduleStartTime") != m.end() && !m["ScheduleStartTime"].empty()) {
      scheduleStartTime = make_shared<string>(boost::any_cast<string>(m["ScheduleStartTime"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
  }


  virtual ~GetScheduleTaskResponseBodyResult() = default;
};
class GetScheduleTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetScheduleTaskResponseBodyResult> result{};

  GetScheduleTaskResponseBody() {}

  explicit GetScheduleTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetScheduleTaskResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetScheduleTaskResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetScheduleTaskResponseBody() = default;
};
class GetScheduleTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetScheduleTaskResponseBody> body{};

  GetScheduleTaskResponse() {}

  explicit GetScheduleTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetScheduleTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetScheduleTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetScheduleTaskResponse() = default;
};
class GetUnreadMessageCountHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetUnreadMessageCountHeaders() {}

  explicit GetUnreadMessageCountHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetUnreadMessageCountHeaders() = default;
};
class GetUnreadMessageCountRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetUnreadMessageCountRequestUserInfo() {}

  explicit GetUnreadMessageCountRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetUnreadMessageCountRequestUserInfo() = default;
};
class GetUnreadMessageCountRequest : public Darabonba::Model {
public:
  shared_ptr<GetUnreadMessageCountRequestUserInfo> userInfo{};

  GetUnreadMessageCountRequest() {}

  explicit GetUnreadMessageCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        GetUnreadMessageCountRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<GetUnreadMessageCountRequestUserInfo>(model1);
      }
    }
  }


  virtual ~GetUnreadMessageCountRequest() = default;
};
class GetUnreadMessageCountShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> userInfoShrink{};

  GetUnreadMessageCountShrinkRequest() {}

  explicit GetUnreadMessageCountShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~GetUnreadMessageCountShrinkRequest() = default;
};
class GetUnreadMessageCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> result{};

  GetUnreadMessageCountResponseBody() {}

  explicit GetUnreadMessageCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
  }


  virtual ~GetUnreadMessageCountResponseBody() = default;
};
class GetUnreadMessageCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUnreadMessageCountResponseBody> body{};

  GetUnreadMessageCountResponse() {}

  explicit GetUnreadMessageCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUnreadMessageCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUnreadMessageCountResponseBody>(model1);
      }
    }
  }


  virtual ~GetUnreadMessageCountResponse() = default;
};
class GetUserByDeviceIdHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetUserByDeviceIdHeaders() {}

  explicit GetUserByDeviceIdHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetUserByDeviceIdHeaders() = default;
};
class GetUserByDeviceIdRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetUserByDeviceIdRequestDeviceInfo() {}

  explicit GetUserByDeviceIdRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetUserByDeviceIdRequestDeviceInfo() = default;
};
class GetUserByDeviceIdRequest : public Darabonba::Model {
public:
  shared_ptr<GetUserByDeviceIdRequestDeviceInfo> deviceInfo{};

  GetUserByDeviceIdRequest() {}

  explicit GetUserByDeviceIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        GetUserByDeviceIdRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<GetUserByDeviceIdRequestDeviceInfo>(model1);
      }
    }
  }


  virtual ~GetUserByDeviceIdRequest() = default;
};
class GetUserByDeviceIdShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};

  GetUserByDeviceIdShrinkRequest() {}

  explicit GetUserByDeviceIdShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
  }


  virtual ~GetUserByDeviceIdShrinkRequest() = default;
};
class GetUserByDeviceIdResponseBodyResultUserUnionIds : public Darabonba::Model {
public:
  shared_ptr<string> organizationId{};
  shared_ptr<string> userUnionId{};

  GetUserByDeviceIdResponseBodyResultUserUnionIds() {}

  explicit GetUserByDeviceIdResponseBodyResultUserUnionIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (userUnionId) {
      res["UserUnionId"] = boost::any(*userUnionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("UserUnionId") != m.end() && !m["UserUnionId"].empty()) {
      userUnionId = make_shared<string>(boost::any_cast<string>(m["UserUnionId"]));
    }
  }


  virtual ~GetUserByDeviceIdResponseBodyResultUserUnionIds() = default;
};
class GetUserByDeviceIdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> userOpenId{};
  shared_ptr<vector<GetUserByDeviceIdResponseBodyResultUserUnionIds>> userUnionIds{};

  GetUserByDeviceIdResponseBodyResult() {}

  explicit GetUserByDeviceIdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userOpenId) {
      res["UserOpenId"] = boost::any(*userOpenId);
    }
    if (userUnionIds) {
      vector<boost::any> temp1;
      for(auto item1:*userUnionIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserUnionIds"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserOpenId") != m.end() && !m["UserOpenId"].empty()) {
      userOpenId = make_shared<string>(boost::any_cast<string>(m["UserOpenId"]));
    }
    if (m.find("UserUnionIds") != m.end() && !m["UserUnionIds"].empty()) {
      if (typeid(vector<boost::any>) == m["UserUnionIds"].type()) {
        vector<GetUserByDeviceIdResponseBodyResultUserUnionIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserUnionIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserByDeviceIdResponseBodyResultUserUnionIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userUnionIds = make_shared<vector<GetUserByDeviceIdResponseBodyResultUserUnionIds>>(expect1);
      }
    }
  }


  virtual ~GetUserByDeviceIdResponseBodyResult() = default;
};
class GetUserByDeviceIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetUserByDeviceIdResponseBodyResult> result{};

  GetUserByDeviceIdResponseBody() {}

  explicit GetUserByDeviceIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetUserByDeviceIdResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetUserByDeviceIdResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetUserByDeviceIdResponseBody() = default;
};
class GetUserByDeviceIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserByDeviceIdResponseBody> body{};

  GetUserByDeviceIdResponse() {}

  explicit GetUserByDeviceIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserByDeviceIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserByDeviceIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserByDeviceIdResponse() = default;
};
class GetWeatherHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetWeatherHeaders() {}

  explicit GetWeatherHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetWeatherHeaders() = default;
};
class GetWeatherRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetWeatherRequestDeviceInfo() {}

  explicit GetWeatherRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetWeatherRequestDeviceInfo() = default;
};
class GetWeatherRequestPayload : public Darabonba::Model {
public:

  GetWeatherRequestPayload() {}

  explicit GetWeatherRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
  }


  virtual ~GetWeatherRequestPayload() = default;
};
class GetWeatherRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetWeatherRequestUserInfo() {}

  explicit GetWeatherRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetWeatherRequestUserInfo() = default;
};
class GetWeatherRequest : public Darabonba::Model {
public:
  shared_ptr<GetWeatherRequestDeviceInfo> deviceInfo{};
  shared_ptr<GetWeatherRequestPayload> payload{};
  shared_ptr<GetWeatherRequestUserInfo> userInfo{};

  GetWeatherRequest() {}

  explicit GetWeatherRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        GetWeatherRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<GetWeatherRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        GetWeatherRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<GetWeatherRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        GetWeatherRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<GetWeatherRequestUserInfo>(model1);
      }
    }
  }


  virtual ~GetWeatherRequest() = default;
};
class GetWeatherShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  GetWeatherShrinkRequest() {}

  explicit GetWeatherShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~GetWeatherShrinkRequest() = default;
};
class GetWeatherResponseBodyResultCurrentMeteorologyTemperature : public Darabonba::Model {
public:
  shared_ptr<string> current{};
  shared_ptr<string> currentDesc{};
  shared_ptr<string> high{};
  shared_ptr<string> highDesc{};
  shared_ptr<string> logical{};
  shared_ptr<string> low{};
  shared_ptr<string> lowDesc{};

  GetWeatherResponseBodyResultCurrentMeteorologyTemperature() {}

  explicit GetWeatherResponseBodyResultCurrentMeteorologyTemperature(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (currentDesc) {
      res["CurrentDesc"] = boost::any(*currentDesc);
    }
    if (high) {
      res["High"] = boost::any(*high);
    }
    if (highDesc) {
      res["HighDesc"] = boost::any(*highDesc);
    }
    if (logical) {
      res["Logical"] = boost::any(*logical);
    }
    if (low) {
      res["Low"] = boost::any(*low);
    }
    if (lowDesc) {
      res["LowDesc"] = boost::any(*lowDesc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<string>(boost::any_cast<string>(m["Current"]));
    }
    if (m.find("CurrentDesc") != m.end() && !m["CurrentDesc"].empty()) {
      currentDesc = make_shared<string>(boost::any_cast<string>(m["CurrentDesc"]));
    }
    if (m.find("High") != m.end() && !m["High"].empty()) {
      high = make_shared<string>(boost::any_cast<string>(m["High"]));
    }
    if (m.find("HighDesc") != m.end() && !m["HighDesc"].empty()) {
      highDesc = make_shared<string>(boost::any_cast<string>(m["HighDesc"]));
    }
    if (m.find("Logical") != m.end() && !m["Logical"].empty()) {
      logical = make_shared<string>(boost::any_cast<string>(m["Logical"]));
    }
    if (m.find("Low") != m.end() && !m["Low"].empty()) {
      low = make_shared<string>(boost::any_cast<string>(m["Low"]));
    }
    if (m.find("LowDesc") != m.end() && !m["LowDesc"].empty()) {
      lowDesc = make_shared<string>(boost::any_cast<string>(m["LowDesc"]));
    }
  }


  virtual ~GetWeatherResponseBodyResultCurrentMeteorologyTemperature() = default;
};
class GetWeatherResponseBodyResultCurrentMeteorologyWeather : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  GetWeatherResponseBodyResultCurrentMeteorologyWeather() {}

  explicit GetWeatherResponseBodyResultCurrentMeteorologyWeather(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetWeatherResponseBodyResultCurrentMeteorologyWeather() = default;
};
class GetWeatherResponseBodyResultCurrentMeteorology : public Darabonba::Model {
public:
  shared_ptr<GetWeatherResponseBodyResultCurrentMeteorologyTemperature> temperature{};
  shared_ptr<GetWeatherResponseBodyResultCurrentMeteorologyWeather> weather{};

  GetWeatherResponseBodyResultCurrentMeteorology() {}

  explicit GetWeatherResponseBodyResultCurrentMeteorology(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (temperature) {
      res["Temperature"] = temperature ? boost::any(temperature->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (weather) {
      res["Weather"] = weather ? boost::any(weather->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Temperature") != m.end() && !m["Temperature"].empty()) {
      if (typeid(map<string, boost::any>) == m["Temperature"].type()) {
        GetWeatherResponseBodyResultCurrentMeteorologyTemperature model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Temperature"]));
        temperature = make_shared<GetWeatherResponseBodyResultCurrentMeteorologyTemperature>(model1);
      }
    }
    if (m.find("Weather") != m.end() && !m["Weather"].empty()) {
      if (typeid(map<string, boost::any>) == m["Weather"].type()) {
        GetWeatherResponseBodyResultCurrentMeteorologyWeather model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Weather"]));
        weather = make_shared<GetWeatherResponseBodyResultCurrentMeteorologyWeather>(model1);
      }
    }
  }


  virtual ~GetWeatherResponseBodyResultCurrentMeteorology() = default;
};
class GetWeatherResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<GetWeatherResponseBodyResultCurrentMeteorology> currentMeteorology{};

  GetWeatherResponseBodyResult() {}

  explicit GetWeatherResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentMeteorology) {
      res["CurrentMeteorology"] = currentMeteorology ? boost::any(currentMeteorology->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentMeteorology") != m.end() && !m["CurrentMeteorology"].empty()) {
      if (typeid(map<string, boost::any>) == m["CurrentMeteorology"].type()) {
        GetWeatherResponseBodyResultCurrentMeteorology model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CurrentMeteorology"]));
        currentMeteorology = make_shared<GetWeatherResponseBodyResultCurrentMeteorology>(model1);
      }
    }
  }


  virtual ~GetWeatherResponseBodyResult() = default;
};
class GetWeatherResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetWeatherResponseBodyResult> result{};

  GetWeatherResponseBody() {}

  explicit GetWeatherResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetWeatherResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetWeatherResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetWeatherResponseBody() = default;
};
class GetWeatherResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWeatherResponseBody> body{};

  GetWeatherResponse() {}

  explicit GetWeatherResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWeatherResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWeatherResponseBody>(model1);
      }
    }
  }


  virtual ~GetWeatherResponse() = default;
};
class IndexControlPlayingListHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  IndexControlPlayingListHeaders() {}

  explicit IndexControlPlayingListHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~IndexControlPlayingListHeaders() = default;
};
class IndexControlPlayingListRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  IndexControlPlayingListRequestDeviceInfo() {}

  explicit IndexControlPlayingListRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~IndexControlPlayingListRequestDeviceInfo() = default;
};
class IndexControlPlayingListRequestOpenIndexControlRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> extendInfo{};
  shared_ptr<long> index{};
  shared_ptr<bool> needContentContinued{};

  IndexControlPlayingListRequestOpenIndexControlRequest() {}

  explicit IndexControlPlayingListRequestOpenIndexControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (needContentContinued) {
      res["NeedContentContinued"] = boost::any(*needContentContinued);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtendInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("NeedContentContinued") != m.end() && !m["NeedContentContinued"].empty()) {
      needContentContinued = make_shared<bool>(boost::any_cast<bool>(m["NeedContentContinued"]));
    }
  }


  virtual ~IndexControlPlayingListRequestOpenIndexControlRequest() = default;
};
class IndexControlPlayingListRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  IndexControlPlayingListRequestUserInfo() {}

  explicit IndexControlPlayingListRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~IndexControlPlayingListRequestUserInfo() = default;
};
class IndexControlPlayingListRequest : public Darabonba::Model {
public:
  shared_ptr<IndexControlPlayingListRequestDeviceInfo> deviceInfo{};
  shared_ptr<IndexControlPlayingListRequestOpenIndexControlRequest> openIndexControlRequest{};
  shared_ptr<IndexControlPlayingListRequestUserInfo> userInfo{};

  IndexControlPlayingListRequest() {}

  explicit IndexControlPlayingListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (openIndexControlRequest) {
      res["OpenIndexControlRequest"] = openIndexControlRequest ? boost::any(openIndexControlRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        IndexControlPlayingListRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<IndexControlPlayingListRequestDeviceInfo>(model1);
      }
    }
    if (m.find("OpenIndexControlRequest") != m.end() && !m["OpenIndexControlRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpenIndexControlRequest"].type()) {
        IndexControlPlayingListRequestOpenIndexControlRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpenIndexControlRequest"]));
        openIndexControlRequest = make_shared<IndexControlPlayingListRequestOpenIndexControlRequest>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        IndexControlPlayingListRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<IndexControlPlayingListRequestUserInfo>(model1);
      }
    }
  }


  virtual ~IndexControlPlayingListRequest() = default;
};
class IndexControlPlayingListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> openIndexControlRequestShrink{};
  shared_ptr<string> userInfoShrink{};

  IndexControlPlayingListShrinkRequest() {}

  explicit IndexControlPlayingListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (openIndexControlRequestShrink) {
      res["OpenIndexControlRequest"] = boost::any(*openIndexControlRequestShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("OpenIndexControlRequest") != m.end() && !m["OpenIndexControlRequest"].empty()) {
      openIndexControlRequestShrink = make_shared<string>(boost::any_cast<string>(m["OpenIndexControlRequest"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~IndexControlPlayingListShrinkRequest() = default;
};
class IndexControlPlayingListResponseBodyResultCover : public Darabonba::Model {
public:
  shared_ptr<bool> canResize{};
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> mediam{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};

  IndexControlPlayingListResponseBodyResultCover() {}

  explicit IndexControlPlayingListResponseBodyResultCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canResize) {
      res["CanResize"] = boost::any(*canResize);
    }
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (mediam) {
      res["Mediam"] = boost::any(*mediam);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanResize") != m.end() && !m["CanResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["CanResize"]));
    }
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Mediam") != m.end() && !m["Mediam"].empty()) {
      mediam = make_shared<string>(boost::any_cast<string>(m["Mediam"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
  }


  virtual ~IndexControlPlayingListResponseBodyResultCover() = default;
};
class IndexControlPlayingListResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> albumName{};
  shared_ptr<string> albumRawId{};
  shared_ptr<long> audioLength{};
  shared_ptr<long> copyright{};
  shared_ptr<IndexControlPlayingListResponseBodyResultCover> cover{};
  shared_ptr<long> defaultPlayOrder{};
  shared_ptr<string> itemUrl{};
  shared_ptr<bool> liked{};
  shared_ptr<string> lyricUrl{};
  shared_ptr<string> playMode{};
  shared_ptr<long> pos{};
  shared_ptr<long> progress{};
  shared_ptr<string> rawId{};
  shared_ptr<string> singer{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<string> valid{};

  IndexControlPlayingListResponseBodyResult() {}

  explicit IndexControlPlayingListResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumName) {
      res["AlbumName"] = boost::any(*albumName);
    }
    if (albumRawId) {
      res["AlbumRawId"] = boost::any(*albumRawId);
    }
    if (audioLength) {
      res["AudioLength"] = boost::any(*audioLength);
    }
    if (copyright) {
      res["Copyright"] = boost::any(*copyright);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (defaultPlayOrder) {
      res["DefaultPlayOrder"] = boost::any(*defaultPlayOrder);
    }
    if (itemUrl) {
      res["ItemUrl"] = boost::any(*itemUrl);
    }
    if (liked) {
      res["Liked"] = boost::any(*liked);
    }
    if (lyricUrl) {
      res["LyricUrl"] = boost::any(*lyricUrl);
    }
    if (playMode) {
      res["PlayMode"] = boost::any(*playMode);
    }
    if (pos) {
      res["Pos"] = boost::any(*pos);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (singer) {
      res["Singer"] = boost::any(*singer);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumName") != m.end() && !m["AlbumName"].empty()) {
      albumName = make_shared<string>(boost::any_cast<string>(m["AlbumName"]));
    }
    if (m.find("AlbumRawId") != m.end() && !m["AlbumRawId"].empty()) {
      albumRawId = make_shared<string>(boost::any_cast<string>(m["AlbumRawId"]));
    }
    if (m.find("AudioLength") != m.end() && !m["AudioLength"].empty()) {
      audioLength = make_shared<long>(boost::any_cast<long>(m["AudioLength"]));
    }
    if (m.find("Copyright") != m.end() && !m["Copyright"].empty()) {
      copyright = make_shared<long>(boost::any_cast<long>(m["Copyright"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        IndexControlPlayingListResponseBodyResultCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<IndexControlPlayingListResponseBodyResultCover>(model1);
      }
    }
    if (m.find("DefaultPlayOrder") != m.end() && !m["DefaultPlayOrder"].empty()) {
      defaultPlayOrder = make_shared<long>(boost::any_cast<long>(m["DefaultPlayOrder"]));
    }
    if (m.find("ItemUrl") != m.end() && !m["ItemUrl"].empty()) {
      itemUrl = make_shared<string>(boost::any_cast<string>(m["ItemUrl"]));
    }
    if (m.find("Liked") != m.end() && !m["Liked"].empty()) {
      liked = make_shared<bool>(boost::any_cast<bool>(m["Liked"]));
    }
    if (m.find("LyricUrl") != m.end() && !m["LyricUrl"].empty()) {
      lyricUrl = make_shared<string>(boost::any_cast<string>(m["LyricUrl"]));
    }
    if (m.find("PlayMode") != m.end() && !m["PlayMode"].empty()) {
      playMode = make_shared<string>(boost::any_cast<string>(m["PlayMode"]));
    }
    if (m.find("Pos") != m.end() && !m["Pos"].empty()) {
      pos = make_shared<long>(boost::any_cast<long>(m["Pos"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<string>(boost::any_cast<string>(m["RawId"]));
    }
    if (m.find("Singer") != m.end() && !m["Singer"].empty()) {
      singer = make_shared<string>(boost::any_cast<string>(m["Singer"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<string>(boost::any_cast<string>(m["Valid"]));
    }
  }


  virtual ~IndexControlPlayingListResponseBodyResult() = default;
};
class IndexControlPlayingListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<IndexControlPlayingListResponseBodyResult> result{};
  shared_ptr<string> success{};

  IndexControlPlayingListResponseBody() {}

  explicit IndexControlPlayingListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        IndexControlPlayingListResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<IndexControlPlayingListResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~IndexControlPlayingListResponseBody() = default;
};
class IndexControlPlayingListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IndexControlPlayingListResponseBody> body{};

  IndexControlPlayingListResponse() {}

  explicit IndexControlPlayingListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IndexControlPlayingListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IndexControlPlayingListResponseBody>(model1);
      }
    }
  }


  virtual ~IndexControlPlayingListResponse() = default;
};
class ListAlarmsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListAlarmsHeaders() {}

  explicit ListAlarmsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListAlarmsHeaders() = default;
};
class ListAlarmsRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListAlarmsRequestDeviceInfo() {}

  explicit ListAlarmsRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListAlarmsRequestDeviceInfo() = default;
};
class ListAlarmsRequestPayload : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  ListAlarmsRequestPayload() {}

  explicit ListAlarmsRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListAlarmsRequestPayload() = default;
};
class ListAlarmsRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListAlarmsRequestUserInfo() {}

  explicit ListAlarmsRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListAlarmsRequestUserInfo() = default;
};
class ListAlarmsRequest : public Darabonba::Model {
public:
  shared_ptr<ListAlarmsRequestDeviceInfo> deviceInfo{};
  shared_ptr<ListAlarmsRequestPayload> payload{};
  shared_ptr<ListAlarmsRequestUserInfo> userInfo{};

  ListAlarmsRequest() {}

  explicit ListAlarmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        ListAlarmsRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<ListAlarmsRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        ListAlarmsRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<ListAlarmsRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListAlarmsRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListAlarmsRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ListAlarmsRequest() = default;
};
class ListAlarmsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  ListAlarmsShrinkRequest() {}

  explicit ListAlarmsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ListAlarmsShrinkRequest() = default;
};
class ListAlarmsResponseBodyResultModelMusicInfo : public Darabonba::Model {
public:
  shared_ptr<long> musicId{};
  shared_ptr<string> musicName{};
  shared_ptr<long> musicType{};
  shared_ptr<string> musicTypeName{};
  shared_ptr<string> musicUrl{};

  ListAlarmsResponseBodyResultModelMusicInfo() {}

  explicit ListAlarmsResponseBodyResultModelMusicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (musicId) {
      res["MusicId"] = boost::any(*musicId);
    }
    if (musicName) {
      res["MusicName"] = boost::any(*musicName);
    }
    if (musicType) {
      res["MusicType"] = boost::any(*musicType);
    }
    if (musicTypeName) {
      res["MusicTypeName"] = boost::any(*musicTypeName);
    }
    if (musicUrl) {
      res["MusicUrl"] = boost::any(*musicUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MusicId") != m.end() && !m["MusicId"].empty()) {
      musicId = make_shared<long>(boost::any_cast<long>(m["MusicId"]));
    }
    if (m.find("MusicName") != m.end() && !m["MusicName"].empty()) {
      musicName = make_shared<string>(boost::any_cast<string>(m["MusicName"]));
    }
    if (m.find("MusicType") != m.end() && !m["MusicType"].empty()) {
      musicType = make_shared<long>(boost::any_cast<long>(m["MusicType"]));
    }
    if (m.find("MusicTypeName") != m.end() && !m["MusicTypeName"].empty()) {
      musicTypeName = make_shared<string>(boost::any_cast<string>(m["MusicTypeName"]));
    }
    if (m.find("MusicUrl") != m.end() && !m["MusicUrl"].empty()) {
      musicUrl = make_shared<string>(boost::any_cast<string>(m["MusicUrl"]));
    }
  }


  virtual ~ListAlarmsResponseBodyResultModelMusicInfo() = default;
};
class ListAlarmsResponseBodyResultModelScheduleInfoOnce : public Darabonba::Model {
public:
  shared_ptr<long> day{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};
  shared_ptr<long> month{};
  shared_ptr<long> year{};

  ListAlarmsResponseBodyResultModelScheduleInfoOnce() {}

  explicit ListAlarmsResponseBodyResultModelScheduleInfoOnce(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    if (year) {
      res["Year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<long>(boost::any_cast<long>(m["Day"]));
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["Month"]));
    }
    if (m.find("Year") != m.end() && !m["Year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["Year"]));
    }
  }


  virtual ~ListAlarmsResponseBodyResultModelScheduleInfoOnce() = default;
};
class ListAlarmsResponseBodyResultModelScheduleInfoStatutoryWorkingDay : public Darabonba::Model {
public:
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};

  ListAlarmsResponseBodyResultModelScheduleInfoStatutoryWorkingDay() {}

  explicit ListAlarmsResponseBodyResultModelScheduleInfoStatutoryWorkingDay(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
  }


  virtual ~ListAlarmsResponseBodyResultModelScheduleInfoStatutoryWorkingDay() = default;
};
class ListAlarmsResponseBodyResultModelScheduleInfoWeekly : public Darabonba::Model {
public:
  shared_ptr<vector<long>> daysOfWeek{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};

  ListAlarmsResponseBodyResultModelScheduleInfoWeekly() {}

  explicit ListAlarmsResponseBodyResultModelScheduleInfoWeekly(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (daysOfWeek) {
      res["DaysOfWeek"] = boost::any(*daysOfWeek);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DaysOfWeek") != m.end() && !m["DaysOfWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
  }


  virtual ~ListAlarmsResponseBodyResultModelScheduleInfoWeekly() = default;
};
class ListAlarmsResponseBodyResultModelScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<ListAlarmsResponseBodyResultModelScheduleInfoOnce> once{};
  shared_ptr<ListAlarmsResponseBodyResultModelScheduleInfoStatutoryWorkingDay> statutoryWorkingDay{};
  shared_ptr<string> type{};
  shared_ptr<ListAlarmsResponseBodyResultModelScheduleInfoWeekly> weekly{};

  ListAlarmsResponseBodyResultModelScheduleInfo() {}

  explicit ListAlarmsResponseBodyResultModelScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (once) {
      res["Once"] = once ? boost::any(once->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (statutoryWorkingDay) {
      res["StatutoryWorkingDay"] = statutoryWorkingDay ? boost::any(statutoryWorkingDay->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weekly) {
      res["Weekly"] = weekly ? boost::any(weekly->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Once") != m.end() && !m["Once"].empty()) {
      if (typeid(map<string, boost::any>) == m["Once"].type()) {
        ListAlarmsResponseBodyResultModelScheduleInfoOnce model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Once"]));
        once = make_shared<ListAlarmsResponseBodyResultModelScheduleInfoOnce>(model1);
      }
    }
    if (m.find("StatutoryWorkingDay") != m.end() && !m["StatutoryWorkingDay"].empty()) {
      if (typeid(map<string, boost::any>) == m["StatutoryWorkingDay"].type()) {
        ListAlarmsResponseBodyResultModelScheduleInfoStatutoryWorkingDay model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StatutoryWorkingDay"]));
        statutoryWorkingDay = make_shared<ListAlarmsResponseBodyResultModelScheduleInfoStatutoryWorkingDay>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weekly") != m.end() && !m["Weekly"].empty()) {
      if (typeid(map<string, boost::any>) == m["Weekly"].type()) {
        ListAlarmsResponseBodyResultModelScheduleInfoWeekly model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Weekly"]));
        weekly = make_shared<ListAlarmsResponseBodyResultModelScheduleInfoWeekly>(model1);
      }
    }
  }


  virtual ~ListAlarmsResponseBodyResultModelScheduleInfo() = default;
};
class ListAlarmsResponseBodyResultModel : public Darabonba::Model {
public:
  shared_ptr<long> alarmId{};
  shared_ptr<ListAlarmsResponseBodyResultModelMusicInfo> musicInfo{};
  shared_ptr<ListAlarmsResponseBodyResultModelScheduleInfo> scheduleInfo{};
  shared_ptr<string> scheduleTypeDesc{};
  shared_ptr<long> status{};
  shared_ptr<string> triggerDateDesc{};
  shared_ptr<string> triggerTimeDesc{};
  shared_ptr<long> userId{};
  shared_ptr<string> uuid{};
  shared_ptr<long> volume{};

  ListAlarmsResponseBodyResultModel() {}

  explicit ListAlarmsResponseBodyResultModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    if (musicInfo) {
      res["MusicInfo"] = musicInfo ? boost::any(musicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["ScheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleTypeDesc) {
      res["ScheduleTypeDesc"] = boost::any(*scheduleTypeDesc);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (triggerDateDesc) {
      res["TriggerDateDesc"] = boost::any(*triggerDateDesc);
    }
    if (triggerTimeDesc) {
      res["TriggerTimeDesc"] = boost::any(*triggerTimeDesc);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<long>(boost::any_cast<long>(m["AlarmId"]));
    }
    if (m.find("MusicInfo") != m.end() && !m["MusicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MusicInfo"].type()) {
        ListAlarmsResponseBodyResultModelMusicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MusicInfo"]));
        musicInfo = make_shared<ListAlarmsResponseBodyResultModelMusicInfo>(model1);
      }
    }
    if (m.find("ScheduleInfo") != m.end() && !m["ScheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScheduleInfo"].type()) {
        ListAlarmsResponseBodyResultModelScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScheduleInfo"]));
        scheduleInfo = make_shared<ListAlarmsResponseBodyResultModelScheduleInfo>(model1);
      }
    }
    if (m.find("ScheduleTypeDesc") != m.end() && !m["ScheduleTypeDesc"].empty()) {
      scheduleTypeDesc = make_shared<string>(boost::any_cast<string>(m["ScheduleTypeDesc"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TriggerDateDesc") != m.end() && !m["TriggerDateDesc"].empty()) {
      triggerDateDesc = make_shared<string>(boost::any_cast<string>(m["TriggerDateDesc"]));
    }
    if (m.find("TriggerTimeDesc") != m.end() && !m["TriggerTimeDesc"].empty()) {
      triggerTimeDesc = make_shared<string>(boost::any_cast<string>(m["TriggerTimeDesc"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~ListAlarmsResponseBodyResultModel() = default;
};
class ListAlarmsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<ListAlarmsResponseBodyResultModel>> model{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListAlarmsResponseBodyResult() {}

  explicit ListAlarmsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (model) {
      vector<boost::any> temp1;
      for(auto item1:*model){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Model"] = boost::any(temp1);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(vector<boost::any>) == m["Model"].type()) {
        vector<ListAlarmsResponseBodyResultModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Model"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlarmsResponseBodyResultModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        model = make_shared<vector<ListAlarmsResponseBodyResultModel>>(expect1);
      }
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAlarmsResponseBodyResult() = default;
};
class ListAlarmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListAlarmsResponseBodyResult> result{};

  ListAlarmsResponseBody() {}

  explicit ListAlarmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListAlarmsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListAlarmsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListAlarmsResponseBody() = default;
};
class ListAlarmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAlarmsResponseBody> body{};

  ListAlarmsResponse() {}

  explicit ListAlarmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAlarmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlarmsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlarmsResponse() = default;
};
class ListAlbumDetailHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListAlbumDetailHeaders() {}

  explicit ListAlbumDetailHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListAlbumDetailHeaders() = default;
};
class ListAlbumDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListAlbumDetailRequest() {}

  explicit ListAlbumDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListAlbumDetailRequest() = default;
};
class ListAlbumDetailResponseBodyResultOpenDataItemListAuthors : public Darabonba::Model {
public:
  shared_ptr<vector<string>> authorTypes{};
  shared_ptr<string> gender{};
  shared_ptr<long> id{};
  shared_ptr<bool> online{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};

  ListAlbumDetailResponseBodyResultOpenDataItemListAuthors() {}

  explicit ListAlbumDetailResponseBodyResultOpenDataItemListAuthors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorTypes) {
      res["AuthorTypes"] = boost::any(*authorTypes);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorTypes") != m.end() && !m["AuthorTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListAlbumDetailResponseBodyResultOpenDataItemListAuthors() = default;
};
class ListAlbumDetailResponseBodyResultOpenDataItemListCover : public Darabonba::Model {
public:
  shared_ptr<bool> canResize{};
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};

  ListAlbumDetailResponseBodyResultOpenDataItemListCover() {}

  explicit ListAlbumDetailResponseBodyResultOpenDataItemListCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canResize) {
      res["CanResize"] = boost::any(*canResize);
    }
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanResize") != m.end() && !m["CanResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["CanResize"]));
    }
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
  }


  virtual ~ListAlbumDetailResponseBodyResultOpenDataItemListCover() = default;
};
class ListAlbumDetailResponseBodyResultOpenDataItemList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> alias{};
  shared_ptr<bool> audition{};
  shared_ptr<vector<ListAlbumDetailResponseBodyResultOpenDataItemListAuthors>> authors{};
  shared_ptr<string> category{};
  shared_ptr<bool> charge{};
  shared_ptr<long> commCateId{};
  shared_ptr<ListAlbumDetailResponseBodyResultOpenDataItemListCover> cover{};
  shared_ptr<string> description{};
  shared_ptr<long> duration{};
  shared_ptr<double> hotScore{};
  shared_ptr<long> id{};
  shared_ptr<string> itemType{};
  shared_ptr<long> orderIndex{};
  shared_ptr<string> rawId{};
  shared_ptr<string> source{};
  shared_ptr<vector<string>> styles{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<string> valid{};

  ListAlbumDetailResponseBodyResultOpenDataItemList() {}

  explicit ListAlbumDetailResponseBodyResultOpenDataItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (audition) {
      res["Audition"] = boost::any(*audition);
    }
    if (authors) {
      vector<boost::any> temp1;
      for(auto item1:*authors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Authors"] = boost::any(temp1);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (charge) {
      res["Charge"] = boost::any(*charge);
    }
    if (commCateId) {
      res["CommCateId"] = boost::any(*commCateId);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (hotScore) {
      res["HotScore"] = boost::any(*hotScore);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (itemType) {
      res["ItemType"] = boost::any(*itemType);
    }
    if (orderIndex) {
      res["OrderIndex"] = boost::any(*orderIndex);
    }
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (styles) {
      res["Styles"] = boost::any(*styles);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Alias"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Alias"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alias = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Audition") != m.end() && !m["Audition"].empty()) {
      audition = make_shared<bool>(boost::any_cast<bool>(m["Audition"]));
    }
    if (m.find("Authors") != m.end() && !m["Authors"].empty()) {
      if (typeid(vector<boost::any>) == m["Authors"].type()) {
        vector<ListAlbumDetailResponseBodyResultOpenDataItemListAuthors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Authors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlbumDetailResponseBodyResultOpenDataItemListAuthors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authors = make_shared<vector<ListAlbumDetailResponseBodyResultOpenDataItemListAuthors>>(expect1);
      }
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Charge") != m.end() && !m["Charge"].empty()) {
      charge = make_shared<bool>(boost::any_cast<bool>(m["Charge"]));
    }
    if (m.find("CommCateId") != m.end() && !m["CommCateId"].empty()) {
      commCateId = make_shared<long>(boost::any_cast<long>(m["CommCateId"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        ListAlbumDetailResponseBodyResultOpenDataItemListCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<ListAlbumDetailResponseBodyResultOpenDataItemListCover>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("HotScore") != m.end() && !m["HotScore"].empty()) {
      hotScore = make_shared<double>(boost::any_cast<double>(m["HotScore"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ItemType") != m.end() && !m["ItemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["ItemType"]));
    }
    if (m.find("OrderIndex") != m.end() && !m["OrderIndex"].empty()) {
      orderIndex = make_shared<long>(boost::any_cast<long>(m["OrderIndex"]));
    }
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<string>(boost::any_cast<string>(m["RawId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Styles") != m.end() && !m["Styles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Styles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Styles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      styles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<string>(boost::any_cast<string>(m["Valid"]));
    }
  }


  virtual ~ListAlbumDetailResponseBodyResultOpenDataItemList() = default;
};
class ListAlbumDetailResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<vector<ListAlbumDetailResponseBodyResultOpenDataItemList>> openDataItemList{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListAlbumDetailResponseBodyResult() {}

  explicit ListAlbumDetailResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (openDataItemList) {
      vector<boost::any> temp1;
      for(auto item1:*openDataItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OpenDataItemList"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("OpenDataItemList") != m.end() && !m["OpenDataItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["OpenDataItemList"].type()) {
        vector<ListAlbumDetailResponseBodyResultOpenDataItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OpenDataItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlbumDetailResponseBodyResultOpenDataItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        openDataItemList = make_shared<vector<ListAlbumDetailResponseBodyResultOpenDataItemList>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~ListAlbumDetailResponseBodyResult() = default;
};
class ListAlbumDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListAlbumDetailResponseBodyResult> result{};

  ListAlbumDetailResponseBody() {}

  explicit ListAlbumDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListAlbumDetailResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListAlbumDetailResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListAlbumDetailResponseBody() = default;
};
class ListAlbumDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAlbumDetailResponseBody> body{};

  ListAlbumDetailResponse() {}

  explicit ListAlbumDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAlbumDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlbumDetailResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlbumDetailResponse() = default;
};
class ListAlbumIsAddedHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListAlbumIsAddedHeaders() {}

  explicit ListAlbumIsAddedHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListAlbumIsAddedHeaders() = default;
};
class ListAlbumIsAddedRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListAlbumIsAddedRequestDeviceInfo() {}

  explicit ListAlbumIsAddedRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListAlbumIsAddedRequestDeviceInfo() = default;
};
class ListAlbumIsAddedRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListAlbumIsAddedRequestUserInfo() {}

  explicit ListAlbumIsAddedRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListAlbumIsAddedRequestUserInfo() = default;
};
class ListAlbumIsAddedRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> albumIdList{};
  shared_ptr<ListAlbumIsAddedRequestDeviceInfo> deviceInfo{};
  shared_ptr<ListAlbumIsAddedRequestUserInfo> userInfo{};

  ListAlbumIsAddedRequest() {}

  explicit ListAlbumIsAddedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumIdList) {
      res["AlbumIdList"] = boost::any(*albumIdList);
    }
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumIdList") != m.end() && !m["AlbumIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AlbumIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AlbumIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      albumIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        ListAlbumIsAddedRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<ListAlbumIsAddedRequestDeviceInfo>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListAlbumIsAddedRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListAlbumIsAddedRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ListAlbumIsAddedRequest() = default;
};
class ListAlbumIsAddedShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> albumIdListShrink{};
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> userInfoShrink{};

  ListAlbumIsAddedShrinkRequest() {}

  explicit ListAlbumIsAddedShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumIdListShrink) {
      res["AlbumIdList"] = boost::any(*albumIdListShrink);
    }
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumIdList") != m.end() && !m["AlbumIdList"].empty()) {
      albumIdListShrink = make_shared<string>(boost::any_cast<string>(m["AlbumIdList"]));
    }
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ListAlbumIsAddedShrinkRequest() = default;
};
class ListAlbumIsAddedResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> albumId{};
  shared_ptr<string> isAdded{};

  ListAlbumIsAddedResponseBodyResult() {}

  explicit ListAlbumIsAddedResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumId) {
      res["AlbumId"] = boost::any(*albumId);
    }
    if (isAdded) {
      res["IsAdded"] = boost::any(*isAdded);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumId") != m.end() && !m["AlbumId"].empty()) {
      albumId = make_shared<string>(boost::any_cast<string>(m["AlbumId"]));
    }
    if (m.find("IsAdded") != m.end() && !m["IsAdded"].empty()) {
      isAdded = make_shared<string>(boost::any_cast<string>(m["IsAdded"]));
    }
  }


  virtual ~ListAlbumIsAddedResponseBodyResult() = default;
};
class ListAlbumIsAddedResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAlbumIsAddedResponseBodyResult>> result{};

  ListAlbumIsAddedResponseBody() {}

  explicit ListAlbumIsAddedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListAlbumIsAddedResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlbumIsAddedResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListAlbumIsAddedResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListAlbumIsAddedResponseBody() = default;
};
class ListAlbumIsAddedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAlbumIsAddedResponseBody> body{};

  ListAlbumIsAddedResponse() {}

  explicit ListAlbumIsAddedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAlbumIsAddedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlbumIsAddedResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlbumIsAddedResponse() = default;
};
class ListCateContentHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListCateContentHeaders() {}

  explicit ListCateContentHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListCateContentHeaders() = default;
};
class ListCateContentRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListCateContentRequestDeviceInfo() {}

  explicit ListCateContentRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListCateContentRequestDeviceInfo() = default;
};
class ListCateContentRequestRequest : public Darabonba::Model {
public:
  shared_ptr<long> cateId{};
  shared_ptr<bool> isAlbum{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortOrder{};

  ListCateContentRequestRequest() {}

  explicit ListCateContentRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateId) {
      res["CateId"] = boost::any(*cateId);
    }
    if (isAlbum) {
      res["IsAlbum"] = boost::any(*isAlbum);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateId") != m.end() && !m["CateId"].empty()) {
      cateId = make_shared<long>(boost::any_cast<long>(m["CateId"]));
    }
    if (m.find("IsAlbum") != m.end() && !m["IsAlbum"].empty()) {
      isAlbum = make_shared<bool>(boost::any_cast<bool>(m["IsAlbum"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
  }


  virtual ~ListCateContentRequestRequest() = default;
};
class ListCateContentRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListCateContentRequestUserInfo() {}

  explicit ListCateContentRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListCateContentRequestUserInfo() = default;
};
class ListCateContentRequest : public Darabonba::Model {
public:
  shared_ptr<ListCateContentRequestDeviceInfo> deviceInfo{};
  shared_ptr<ListCateContentRequestRequest> request{};
  shared_ptr<ListCateContentRequestUserInfo> userInfo{};

  ListCateContentRequest() {}

  explicit ListCateContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        ListCateContentRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<ListCateContentRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        ListCateContentRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<ListCateContentRequestRequest>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListCateContentRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListCateContentRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ListCateContentRequest() = default;
};
class ListCateContentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> requestShrink{};
  shared_ptr<string> userInfoShrink{};

  ListCateContentShrinkRequest() {}

  explicit ListCateContentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (requestShrink) {
      res["Request"] = boost::any(*requestShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      requestShrink = make_shared<string>(boost::any_cast<string>(m["Request"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ListCateContentShrinkRequest() = default;
};
class ListCateContentResponseBodyResultOpenDataItemListAuthorsCover : public Darabonba::Model {
public:
  shared_ptr<bool> canResize{};
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> mediam{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};

  ListCateContentResponseBodyResultOpenDataItemListAuthorsCover() {}

  explicit ListCateContentResponseBodyResultOpenDataItemListAuthorsCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canResize) {
      res["CanResize"] = boost::any(*canResize);
    }
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (mediam) {
      res["Mediam"] = boost::any(*mediam);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanResize") != m.end() && !m["CanResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["CanResize"]));
    }
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Mediam") != m.end() && !m["Mediam"].empty()) {
      mediam = make_shared<string>(boost::any_cast<string>(m["Mediam"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
  }


  virtual ~ListCateContentResponseBodyResultOpenDataItemListAuthorsCover() = default;
};
class ListCateContentResponseBodyResultOpenDataItemListAuthors : public Darabonba::Model {
public:
  shared_ptr<vector<string>> authorTypes{};
  shared_ptr<ListCateContentResponseBodyResultOpenDataItemListAuthorsCover> cover{};
  shared_ptr<string> description{};
  shared_ptr<string> gender{};
  shared_ptr<long> id{};
  shared_ptr<bool> online{};
  shared_ptr<string> rawId{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};

  ListCateContentResponseBodyResultOpenDataItemListAuthors() {}

  explicit ListCateContentResponseBodyResultOpenDataItemListAuthors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorTypes) {
      res["AuthorTypes"] = boost::any(*authorTypes);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorTypes") != m.end() && !m["AuthorTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        ListCateContentResponseBodyResultOpenDataItemListAuthorsCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<ListCateContentResponseBodyResultOpenDataItemListAuthorsCover>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<string>(boost::any_cast<string>(m["RawId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListCateContentResponseBodyResultOpenDataItemListAuthors() = default;
};
class ListCateContentResponseBodyResultOpenDataItemListCover : public Darabonba::Model {
public:
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> mediam{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};
  shared_ptr<bool> canResize{};

  ListCateContentResponseBodyResultOpenDataItemListCover() {}

  explicit ListCateContentResponseBodyResultOpenDataItemListCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (mediam) {
      res["Mediam"] = boost::any(*mediam);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    if (canResize) {
      res["canResize"] = boost::any(*canResize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Mediam") != m.end() && !m["Mediam"].empty()) {
      mediam = make_shared<string>(boost::any_cast<string>(m["Mediam"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
    if (m.find("canResize") != m.end() && !m["canResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["canResize"]));
    }
  }


  virtual ~ListCateContentResponseBodyResultOpenDataItemListCover() = default;
};
class ListCateContentResponseBodyResultOpenDataItemList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> alias{};
  shared_ptr<bool> audition{};
  shared_ptr<vector<ListCateContentResponseBodyResultOpenDataItemListAuthors>> authors{};
  shared_ptr<string> category{};
  shared_ptr<bool> charge{};
  shared_ptr<string> commCateId{};
  shared_ptr<ListCateContentResponseBodyResultOpenDataItemListCover> cover{};
  shared_ptr<string> description{};
  shared_ptr<double> hotScore{};
  shared_ptr<string> itemType{};
  shared_ptr<string> rawId{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<string> valid{};
  shared_ptr<long> id{};

  ListCateContentResponseBodyResultOpenDataItemList() {}

  explicit ListCateContentResponseBodyResultOpenDataItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (audition) {
      res["Audition"] = boost::any(*audition);
    }
    if (authors) {
      vector<boost::any> temp1;
      for(auto item1:*authors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Authors"] = boost::any(temp1);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (charge) {
      res["Charge"] = boost::any(*charge);
    }
    if (commCateId) {
      res["CommCateId"] = boost::any(*commCateId);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hotScore) {
      res["HotScore"] = boost::any(*hotScore);
    }
    if (itemType) {
      res["ItemType"] = boost::any(*itemType);
    }
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Alias"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Alias"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alias = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Audition") != m.end() && !m["Audition"].empty()) {
      audition = make_shared<bool>(boost::any_cast<bool>(m["Audition"]));
    }
    if (m.find("Authors") != m.end() && !m["Authors"].empty()) {
      if (typeid(vector<boost::any>) == m["Authors"].type()) {
        vector<ListCateContentResponseBodyResultOpenDataItemListAuthors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Authors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCateContentResponseBodyResultOpenDataItemListAuthors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authors = make_shared<vector<ListCateContentResponseBodyResultOpenDataItemListAuthors>>(expect1);
      }
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Charge") != m.end() && !m["Charge"].empty()) {
      charge = make_shared<bool>(boost::any_cast<bool>(m["Charge"]));
    }
    if (m.find("CommCateId") != m.end() && !m["CommCateId"].empty()) {
      commCateId = make_shared<string>(boost::any_cast<string>(m["CommCateId"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        ListCateContentResponseBodyResultOpenDataItemListCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<ListCateContentResponseBodyResultOpenDataItemListCover>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HotScore") != m.end() && !m["HotScore"].empty()) {
      hotScore = make_shared<double>(boost::any_cast<double>(m["HotScore"]));
    }
    if (m.find("ItemType") != m.end() && !m["ItemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["ItemType"]));
    }
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<string>(boost::any_cast<string>(m["RawId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<string>(boost::any_cast<string>(m["Valid"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
  }


  virtual ~ListCateContentResponseBodyResultOpenDataItemList() = default;
};
class ListCateContentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<vector<ListCateContentResponseBodyResultOpenDataItemList>> openDataItemList{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListCateContentResponseBodyResult() {}

  explicit ListCateContentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (openDataItemList) {
      vector<boost::any> temp1;
      for(auto item1:*openDataItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OpenDataItemList"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("OpenDataItemList") != m.end() && !m["OpenDataItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["OpenDataItemList"].type()) {
        vector<ListCateContentResponseBodyResultOpenDataItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OpenDataItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCateContentResponseBodyResultOpenDataItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        openDataItemList = make_shared<vector<ListCateContentResponseBodyResultOpenDataItemList>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~ListCateContentResponseBodyResult() = default;
};
class ListCateContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListCateContentResponseBodyResult> result{};

  ListCateContentResponseBody() {}

  explicit ListCateContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListCateContentResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListCateContentResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListCateContentResponseBody() = default;
};
class ListCateContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCateContentResponseBody> body{};

  ListCateContentResponse() {}

  explicit ListCateContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCateContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCateContentResponseBody>(model1);
      }
    }
  }


  virtual ~ListCateContentResponse() = default;
};
class ListCateInfoHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListCateInfoHeaders() {}

  explicit ListCateInfoHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListCateInfoHeaders() = default;
};
class ListCateInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  ListCateInfoRequest() {}

  explicit ListCateInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListCateInfoRequest() = default;
};
class ListCateInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> cateId{};
  shared_ptr<string> cateName{};
  shared_ptr<long> parentCateId{};

  ListCateInfoResponseBodyResult() {}

  explicit ListCateInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateId) {
      res["CateId"] = boost::any(*cateId);
    }
    if (cateName) {
      res["CateName"] = boost::any(*cateName);
    }
    if (parentCateId) {
      res["ParentCateId"] = boost::any(*parentCateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateId") != m.end() && !m["CateId"].empty()) {
      cateId = make_shared<long>(boost::any_cast<long>(m["CateId"]));
    }
    if (m.find("CateName") != m.end() && !m["CateName"].empty()) {
      cateName = make_shared<string>(boost::any_cast<string>(m["CateName"]));
    }
    if (m.find("ParentCateId") != m.end() && !m["ParentCateId"].empty()) {
      parentCateId = make_shared<long>(boost::any_cast<long>(m["ParentCateId"]));
    }
  }


  virtual ~ListCateInfoResponseBodyResult() = default;
};
class ListCateInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListCateInfoResponseBodyResult>> result{};

  ListCateInfoResponseBody() {}

  explicit ListCateInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListCateInfoResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCateInfoResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListCateInfoResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListCateInfoResponseBody() = default;
};
class ListCateInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCateInfoResponseBody> body{};

  ListCateInfoResponse() {}

  explicit ListCateInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCateInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCateInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ListCateInfoResponse() = default;
};
class ListCommonCateFirstFloorHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListCommonCateFirstFloorHeaders() {}

  explicit ListCommonCateFirstFloorHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListCommonCateFirstFloorHeaders() = default;
};
class ListCommonCateFirstFloorRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  ListCommonCateFirstFloorRequest() {}

  explicit ListCommonCateFirstFloorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListCommonCateFirstFloorRequest() = default;
};
class ListCommonCateFirstFloorResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> cateId{};
  shared_ptr<string> cateName{};
  shared_ptr<long> parentCateId{};

  ListCommonCateFirstFloorResponseBodyResult() {}

  explicit ListCommonCateFirstFloorResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateId) {
      res["CateId"] = boost::any(*cateId);
    }
    if (cateName) {
      res["CateName"] = boost::any(*cateName);
    }
    if (parentCateId) {
      res["ParentCateId"] = boost::any(*parentCateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateId") != m.end() && !m["CateId"].empty()) {
      cateId = make_shared<long>(boost::any_cast<long>(m["CateId"]));
    }
    if (m.find("CateName") != m.end() && !m["CateName"].empty()) {
      cateName = make_shared<string>(boost::any_cast<string>(m["CateName"]));
    }
    if (m.find("ParentCateId") != m.end() && !m["ParentCateId"].empty()) {
      parentCateId = make_shared<long>(boost::any_cast<long>(m["ParentCateId"]));
    }
  }


  virtual ~ListCommonCateFirstFloorResponseBodyResult() = default;
};
class ListCommonCateFirstFloorResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListCommonCateFirstFloorResponseBodyResult>> result{};

  ListCommonCateFirstFloorResponseBody() {}

  explicit ListCommonCateFirstFloorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListCommonCateFirstFloorResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCommonCateFirstFloorResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListCommonCateFirstFloorResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListCommonCateFirstFloorResponseBody() = default;
};
class ListCommonCateFirstFloorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCommonCateFirstFloorResponseBody> body{};

  ListCommonCateFirstFloorResponse() {}

  explicit ListCommonCateFirstFloorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCommonCateFirstFloorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCommonCateFirstFloorResponseBody>(model1);
      }
    }
  }


  virtual ~ListCommonCateFirstFloorResponse() = default;
};
class ListCommonCateSecondFloorHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListCommonCateSecondFloorHeaders() {}

  explicit ListCommonCateSecondFloorHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListCommonCateSecondFloorHeaders() = default;
};
class ListCommonCateSecondFloorRequest : public Darabonba::Model {
public:
  shared_ptr<long> parentCateId{};

  ListCommonCateSecondFloorRequest() {}

  explicit ListCommonCateSecondFloorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentCateId) {
      res["ParentCateId"] = boost::any(*parentCateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentCateId") != m.end() && !m["ParentCateId"].empty()) {
      parentCateId = make_shared<long>(boost::any_cast<long>(m["ParentCateId"]));
    }
  }


  virtual ~ListCommonCateSecondFloorRequest() = default;
};
class ListCommonCateSecondFloorResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> cateId{};
  shared_ptr<string> cateName{};
  shared_ptr<long> parentCateId{};

  ListCommonCateSecondFloorResponseBodyResult() {}

  explicit ListCommonCateSecondFloorResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateId) {
      res["CateId"] = boost::any(*cateId);
    }
    if (cateName) {
      res["CateName"] = boost::any(*cateName);
    }
    if (parentCateId) {
      res["ParentCateId"] = boost::any(*parentCateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateId") != m.end() && !m["CateId"].empty()) {
      cateId = make_shared<long>(boost::any_cast<long>(m["CateId"]));
    }
    if (m.find("CateName") != m.end() && !m["CateName"].empty()) {
      cateName = make_shared<string>(boost::any_cast<string>(m["CateName"]));
    }
    if (m.find("ParentCateId") != m.end() && !m["ParentCateId"].empty()) {
      parentCateId = make_shared<long>(boost::any_cast<long>(m["ParentCateId"]));
    }
  }


  virtual ~ListCommonCateSecondFloorResponseBodyResult() = default;
};
class ListCommonCateSecondFloorResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListCommonCateSecondFloorResponseBodyResult>> result{};

  ListCommonCateSecondFloorResponseBody() {}

  explicit ListCommonCateSecondFloorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListCommonCateSecondFloorResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCommonCateSecondFloorResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListCommonCateSecondFloorResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListCommonCateSecondFloorResponseBody() = default;
};
class ListCommonCateSecondFloorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCommonCateSecondFloorResponseBody> body{};

  ListCommonCateSecondFloorResponse() {}

  explicit ListCommonCateSecondFloorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCommonCateSecondFloorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCommonCateSecondFloorResponseBody>(model1);
      }
    }
  }


  virtual ~ListCommonCateSecondFloorResponse() = default;
};
class ListDeviceBasicInfoHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListDeviceBasicInfoHeaders() {}

  explicit ListDeviceBasicInfoHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListDeviceBasicInfoHeaders() = default;
};
class ListDeviceBasicInfoRequestDeviceInfos : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> idType{};
  shared_ptr<vector<string>> ids{};
  shared_ptr<string> organizationId{};

  ListDeviceBasicInfoRequestDeviceInfos() {}

  explicit ListDeviceBasicInfoRequestDeviceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListDeviceBasicInfoRequestDeviceInfos() = default;
};
class ListDeviceBasicInfoRequest : public Darabonba::Model {
public:
  shared_ptr<ListDeviceBasicInfoRequestDeviceInfos> deviceInfos{};

  ListDeviceBasicInfoRequest() {}

  explicit ListDeviceBasicInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfos) {
      res["DeviceInfos"] = deviceInfos ? boost::any(deviceInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfos") != m.end() && !m["DeviceInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfos"].type()) {
        ListDeviceBasicInfoRequestDeviceInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfos"]));
        deviceInfos = make_shared<ListDeviceBasicInfoRequestDeviceInfos>(model1);
      }
    }
  }


  virtual ~ListDeviceBasicInfoRequest() = default;
};
class ListDeviceBasicInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfosShrink{};

  ListDeviceBasicInfoShrinkRequest() {}

  explicit ListDeviceBasicInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfosShrink) {
      res["DeviceInfos"] = boost::any(*deviceInfosShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfos") != m.end() && !m["DeviceInfos"].empty()) {
      deviceInfosShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfos"]));
    }
  }


  virtual ~ListDeviceBasicInfoShrinkRequest() = default;
};
class ResultValueDeviceUnionIds : public Darabonba::Model {
public:
  shared_ptr<string> organizationId{};
  shared_ptr<string> deviceUnionId{};

  ResultValueDeviceUnionIds() {}

  explicit ResultValueDeviceUnionIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (deviceUnionId) {
      res["DeviceUnionId"] = boost::any(*deviceUnionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("DeviceUnionId") != m.end() && !m["DeviceUnionId"].empty()) {
      deviceUnionId = make_shared<string>(boost::any_cast<string>(m["DeviceUnionId"]));
    }
  }


  virtual ~ResultValueDeviceUnionIds() = default;
};
class ResultValue : public Darabonba::Model {
public:
  shared_ptr<string> deviceOpenId{};
  shared_ptr<vector<ResultValueDeviceUnionIds>> deviceUnionIds{};
  shared_ptr<string> name{};
  shared_ptr<string> firmwareVersion{};
  shared_ptr<string> mac{};
  shared_ptr<string> sn{};

  ResultValue() {}

  explicit ResultValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceOpenId) {
      res["DeviceOpenId"] = boost::any(*deviceOpenId);
    }
    if (deviceUnionIds) {
      vector<boost::any> temp1;
      for(auto item1:*deviceUnionIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceUnionIds"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (firmwareVersion) {
      res["FirmwareVersion"] = boost::any(*firmwareVersion);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceOpenId") != m.end() && !m["DeviceOpenId"].empty()) {
      deviceOpenId = make_shared<string>(boost::any_cast<string>(m["DeviceOpenId"]));
    }
    if (m.find("DeviceUnionIds") != m.end() && !m["DeviceUnionIds"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceUnionIds"].type()) {
        vector<ResultValueDeviceUnionIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceUnionIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResultValueDeviceUnionIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceUnionIds = make_shared<vector<ResultValueDeviceUnionIds>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("FirmwareVersion") != m.end() && !m["FirmwareVersion"].empty()) {
      firmwareVersion = make_shared<string>(boost::any_cast<string>(m["FirmwareVersion"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
  }


  virtual ~ResultValue() = default;
};
class ListDeviceBasicInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, ResultValue>> result{};

  ListDeviceBasicInfoResponseBody() {}

  explicit ListDeviceBasicInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      map<string, boost::any> temp1;
      for(auto item1:*result){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        map<string, ResultValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            ResultValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        result = make_shared<map<string, ResultValue>>(expect1);
      }
    }
  }


  virtual ~ListDeviceBasicInfoResponseBody() = default;
};
class ListDeviceBasicInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeviceBasicInfoResponseBody> body{};

  ListDeviceBasicInfoResponse() {}

  explicit ListDeviceBasicInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeviceBasicInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceBasicInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceBasicInfoResponse() = default;
};
class ListDeviceByUserIdHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListDeviceByUserIdHeaders() {}

  explicit ListDeviceByUserIdHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListDeviceByUserIdHeaders() = default;
};
class ListDeviceByUserIdRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListDeviceByUserIdRequestUserInfo() {}

  explicit ListDeviceByUserIdRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListDeviceByUserIdRequestUserInfo() = default;
};
class ListDeviceByUserIdRequest : public Darabonba::Model {
public:
  shared_ptr<ListDeviceByUserIdRequestUserInfo> userInfo{};

  ListDeviceByUserIdRequest() {}

  explicit ListDeviceByUserIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListDeviceByUserIdRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListDeviceByUserIdRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ListDeviceByUserIdRequest() = default;
};
class ListDeviceByUserIdShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> userInfoShrink{};

  ListDeviceByUserIdShrinkRequest() {}

  explicit ListDeviceByUserIdShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ListDeviceByUserIdShrinkRequest() = default;
};
class ListDeviceByUserIdResponseBodyResultDeviceUnionIds : public Darabonba::Model {
public:
  shared_ptr<string> deviceUnionId{};
  shared_ptr<string> organizationId{};

  ListDeviceByUserIdResponseBodyResultDeviceUnionIds() {}

  explicit ListDeviceByUserIdResponseBodyResultDeviceUnionIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceUnionId) {
      res["DeviceUnionId"] = boost::any(*deviceUnionId);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceUnionId") != m.end() && !m["DeviceUnionId"].empty()) {
      deviceUnionId = make_shared<string>(boost::any_cast<string>(m["DeviceUnionId"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListDeviceByUserIdResponseBodyResultDeviceUnionIds() = default;
};
class ListDeviceByUserIdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> deviceOpenId{};
  shared_ptr<vector<ListDeviceByUserIdResponseBodyResultDeviceUnionIds>> deviceUnionIds{};

  ListDeviceByUserIdResponseBodyResult() {}

  explicit ListDeviceByUserIdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceOpenId) {
      res["DeviceOpenId"] = boost::any(*deviceOpenId);
    }
    if (deviceUnionIds) {
      vector<boost::any> temp1;
      for(auto item1:*deviceUnionIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceUnionIds"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceOpenId") != m.end() && !m["DeviceOpenId"].empty()) {
      deviceOpenId = make_shared<string>(boost::any_cast<string>(m["DeviceOpenId"]));
    }
    if (m.find("DeviceUnionIds") != m.end() && !m["DeviceUnionIds"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceUnionIds"].type()) {
        vector<ListDeviceByUserIdResponseBodyResultDeviceUnionIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceUnionIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeviceByUserIdResponseBodyResultDeviceUnionIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceUnionIds = make_shared<vector<ListDeviceByUserIdResponseBodyResultDeviceUnionIds>>(expect1);
      }
    }
  }


  virtual ~ListDeviceByUserIdResponseBodyResult() = default;
};
class ListDeviceByUserIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDeviceByUserIdResponseBodyResult>> result{};

  ListDeviceByUserIdResponseBody() {}

  explicit ListDeviceByUserIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListDeviceByUserIdResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeviceByUserIdResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDeviceByUserIdResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListDeviceByUserIdResponseBody() = default;
};
class ListDeviceByUserIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeviceByUserIdResponseBody> body{};

  ListDeviceByUserIdResponse() {}

  explicit ListDeviceByUserIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeviceByUserIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceByUserIdResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceByUserIdResponse() = default;
};
class ListDeviceByUserIdAndChanelHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListDeviceByUserIdAndChanelHeaders() {}

  explicit ListDeviceByUserIdAndChanelHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListDeviceByUserIdAndChanelHeaders() = default;
};
class ListDeviceByUserIdAndChanelRequestChannelInfo : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<string> extInfo{};

  ListDeviceByUserIdAndChanelRequestChannelInfo() {}

  explicit ListDeviceByUserIdAndChanelRequestChannelInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
  }


  virtual ~ListDeviceByUserIdAndChanelRequestChannelInfo() = default;
};
class ListDeviceByUserIdAndChanelRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListDeviceByUserIdAndChanelRequestUserInfo() {}

  explicit ListDeviceByUserIdAndChanelRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListDeviceByUserIdAndChanelRequestUserInfo() = default;
};
class ListDeviceByUserIdAndChanelRequest : public Darabonba::Model {
public:
  shared_ptr<ListDeviceByUserIdAndChanelRequestChannelInfo> channelInfo{};
  shared_ptr<ListDeviceByUserIdAndChanelRequestUserInfo> userInfo{};

  ListDeviceByUserIdAndChanelRequest() {}

  explicit ListDeviceByUserIdAndChanelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelInfo) {
      res["ChannelInfo"] = channelInfo ? boost::any(channelInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelInfo") != m.end() && !m["ChannelInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChannelInfo"].type()) {
        ListDeviceByUserIdAndChanelRequestChannelInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChannelInfo"]));
        channelInfo = make_shared<ListDeviceByUserIdAndChanelRequestChannelInfo>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListDeviceByUserIdAndChanelRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListDeviceByUserIdAndChanelRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ListDeviceByUserIdAndChanelRequest() = default;
};
class ListDeviceByUserIdAndChanelShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelInfoShrink{};
  shared_ptr<string> userInfoShrink{};

  ListDeviceByUserIdAndChanelShrinkRequest() {}

  explicit ListDeviceByUserIdAndChanelShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelInfoShrink) {
      res["ChannelInfo"] = boost::any(*channelInfoShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelInfo") != m.end() && !m["ChannelInfo"].empty()) {
      channelInfoShrink = make_shared<string>(boost::any_cast<string>(m["ChannelInfo"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ListDeviceByUserIdAndChanelShrinkRequest() = default;
};
class ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds : public Darabonba::Model {
public:
  shared_ptr<string> deviceUnionId{};
  shared_ptr<string> organizationId{};

  ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds() {}

  explicit ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceUnionId) {
      res["DeviceUnionId"] = boost::any(*deviceUnionId);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceUnionId") != m.end() && !m["DeviceUnionId"].empty()) {
      deviceUnionId = make_shared<string>(boost::any_cast<string>(m["DeviceUnionId"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds() = default;
};
class ListDeviceByUserIdAndChanelResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> deviceOpenId{};
  shared_ptr<vector<ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds>> deviceUnionIds{};

  ListDeviceByUserIdAndChanelResponseBodyResult() {}

  explicit ListDeviceByUserIdAndChanelResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceOpenId) {
      res["DeviceOpenId"] = boost::any(*deviceOpenId);
    }
    if (deviceUnionIds) {
      vector<boost::any> temp1;
      for(auto item1:*deviceUnionIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceUnionIds"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceOpenId") != m.end() && !m["DeviceOpenId"].empty()) {
      deviceOpenId = make_shared<string>(boost::any_cast<string>(m["DeviceOpenId"]));
    }
    if (m.find("DeviceUnionIds") != m.end() && !m["DeviceUnionIds"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceUnionIds"].type()) {
        vector<ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceUnionIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceUnionIds = make_shared<vector<ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds>>(expect1);
      }
    }
  }


  virtual ~ListDeviceByUserIdAndChanelResponseBodyResult() = default;
};
class ListDeviceByUserIdAndChanelResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDeviceByUserIdAndChanelResponseBodyResult>> result{};

  ListDeviceByUserIdAndChanelResponseBody() {}

  explicit ListDeviceByUserIdAndChanelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListDeviceByUserIdAndChanelResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeviceByUserIdAndChanelResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDeviceByUserIdAndChanelResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListDeviceByUserIdAndChanelResponseBody() = default;
};
class ListDeviceByUserIdAndChanelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeviceByUserIdAndChanelResponseBody> body{};

  ListDeviceByUserIdAndChanelResponse() {}

  explicit ListDeviceByUserIdAndChanelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeviceByUserIdAndChanelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceByUserIdAndChanelResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceByUserIdAndChanelResponse() = default;
};
class ListDeviceIdByIdentitiesHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListDeviceIdByIdentitiesHeaders() {}

  explicit ListDeviceIdByIdentitiesHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListDeviceIdByIdentitiesHeaders() = default;
};
class ListDeviceIdByIdentitiesRequest : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<vector<string>> identityIds{};
  shared_ptr<string> identityType{};
  shared_ptr<string> productKey{};

  ListDeviceIdByIdentitiesRequest() {}

  explicit ListDeviceIdByIdentitiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (identityIds) {
      res["IdentityIds"] = boost::any(*identityIds);
    }
    if (identityType) {
      res["IdentityType"] = boost::any(*identityType);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("IdentityIds") != m.end() && !m["IdentityIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IdentityIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IdentityIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      identityIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IdentityType") != m.end() && !m["IdentityType"].empty()) {
      identityType = make_shared<string>(boost::any_cast<string>(m["IdentityType"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~ListDeviceIdByIdentitiesRequest() = default;
};
class ListDeviceIdByIdentitiesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> identityIdsShrink{};
  shared_ptr<string> identityType{};
  shared_ptr<string> productKey{};

  ListDeviceIdByIdentitiesShrinkRequest() {}

  explicit ListDeviceIdByIdentitiesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (identityIdsShrink) {
      res["IdentityIds"] = boost::any(*identityIdsShrink);
    }
    if (identityType) {
      res["IdentityType"] = boost::any(*identityType);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("IdentityIds") != m.end() && !m["IdentityIds"].empty()) {
      identityIdsShrink = make_shared<string>(boost::any_cast<string>(m["IdentityIds"]));
    }
    if (m.find("IdentityType") != m.end() && !m["IdentityType"].empty()) {
      identityType = make_shared<string>(boost::any_cast<string>(m["IdentityType"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~ListDeviceIdByIdentitiesShrinkRequest() = default;
};
class ListDeviceIdByIdentitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, ResultValue>> result{};

  ListDeviceIdByIdentitiesResponseBody() {}

  explicit ListDeviceIdByIdentitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      map<string, boost::any> temp1;
      for(auto item1:*result){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        map<string, ResultValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            ResultValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        result = make_shared<map<string, ResultValue>>(expect1);
      }
    }
  }


  virtual ~ListDeviceIdByIdentitiesResponseBody() = default;
};
class ListDeviceIdByIdentitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeviceIdByIdentitiesResponseBody> body{};

  ListDeviceIdByIdentitiesResponse() {}

  explicit ListDeviceIdByIdentitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeviceIdByIdentitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceIdByIdentitiesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceIdByIdentitiesResponse() = default;
};
class ListMusicHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListMusicHeaders() {}

  explicit ListMusicHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListMusicHeaders() = default;
};
class ListMusicRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListMusicRequestDeviceInfo() {}

  explicit ListMusicRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListMusicRequestDeviceInfo() = default;
};
class ListMusicRequestPayload : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> musicId{};
  shared_ptr<string> musicName{};
  shared_ptr<long> musicType{};
  shared_ptr<string> musicTypeName{};
  shared_ptr<long> pageSize{};

  ListMusicRequestPayload() {}

  explicit ListMusicRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (musicId) {
      res["MusicId"] = boost::any(*musicId);
    }
    if (musicName) {
      res["MusicName"] = boost::any(*musicName);
    }
    if (musicType) {
      res["MusicType"] = boost::any(*musicType);
    }
    if (musicTypeName) {
      res["MusicTypeName"] = boost::any(*musicTypeName);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("MusicId") != m.end() && !m["MusicId"].empty()) {
      musicId = make_shared<long>(boost::any_cast<long>(m["MusicId"]));
    }
    if (m.find("MusicName") != m.end() && !m["MusicName"].empty()) {
      musicName = make_shared<string>(boost::any_cast<string>(m["MusicName"]));
    }
    if (m.find("MusicType") != m.end() && !m["MusicType"].empty()) {
      musicType = make_shared<long>(boost::any_cast<long>(m["MusicType"]));
    }
    if (m.find("MusicTypeName") != m.end() && !m["MusicTypeName"].empty()) {
      musicTypeName = make_shared<string>(boost::any_cast<string>(m["MusicTypeName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListMusicRequestPayload() = default;
};
class ListMusicRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListMusicRequestUserInfo() {}

  explicit ListMusicRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListMusicRequestUserInfo() = default;
};
class ListMusicRequest : public Darabonba::Model {
public:
  shared_ptr<ListMusicRequestDeviceInfo> deviceInfo{};
  shared_ptr<ListMusicRequestPayload> payload{};
  shared_ptr<ListMusicRequestUserInfo> userInfo{};

  ListMusicRequest() {}

  explicit ListMusicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        ListMusicRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<ListMusicRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        ListMusicRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<ListMusicRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListMusicRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListMusicRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ListMusicRequest() = default;
};
class ListMusicShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  ListMusicShrinkRequest() {}

  explicit ListMusicShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ListMusicShrinkRequest() = default;
};
class ListMusicResponseBodyResultModel : public Darabonba::Model {
public:
  shared_ptr<long> musicId{};
  shared_ptr<string> musicName{};
  shared_ptr<long> musicType{};
  shared_ptr<string> musicTypeName{};
  shared_ptr<string> musicUrl{};

  ListMusicResponseBodyResultModel() {}

  explicit ListMusicResponseBodyResultModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (musicId) {
      res["MusicId"] = boost::any(*musicId);
    }
    if (musicName) {
      res["MusicName"] = boost::any(*musicName);
    }
    if (musicType) {
      res["MusicType"] = boost::any(*musicType);
    }
    if (musicTypeName) {
      res["MusicTypeName"] = boost::any(*musicTypeName);
    }
    if (musicUrl) {
      res["MusicUrl"] = boost::any(*musicUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MusicId") != m.end() && !m["MusicId"].empty()) {
      musicId = make_shared<long>(boost::any_cast<long>(m["MusicId"]));
    }
    if (m.find("MusicName") != m.end() && !m["MusicName"].empty()) {
      musicName = make_shared<string>(boost::any_cast<string>(m["MusicName"]));
    }
    if (m.find("MusicType") != m.end() && !m["MusicType"].empty()) {
      musicType = make_shared<long>(boost::any_cast<long>(m["MusicType"]));
    }
    if (m.find("MusicTypeName") != m.end() && !m["MusicTypeName"].empty()) {
      musicTypeName = make_shared<string>(boost::any_cast<string>(m["MusicTypeName"]));
    }
    if (m.find("MusicUrl") != m.end() && !m["MusicUrl"].empty()) {
      musicUrl = make_shared<string>(boost::any_cast<string>(m["MusicUrl"]));
    }
  }


  virtual ~ListMusicResponseBodyResultModel() = default;
};
class ListMusicResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<ListMusicResponseBodyResultModel>> model{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListMusicResponseBodyResult() {}

  explicit ListMusicResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (model) {
      vector<boost::any> temp1;
      for(auto item1:*model){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Model"] = boost::any(temp1);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(vector<boost::any>) == m["Model"].type()) {
        vector<ListMusicResponseBodyResultModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Model"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMusicResponseBodyResultModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        model = make_shared<vector<ListMusicResponseBodyResultModel>>(expect1);
      }
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListMusicResponseBodyResult() = default;
};
class ListMusicResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListMusicResponseBodyResult> result{};

  ListMusicResponseBody() {}

  explicit ListMusicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListMusicResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListMusicResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListMusicResponseBody() = default;
};
class ListMusicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMusicResponseBody> body{};

  ListMusicResponse() {}

  explicit ListMusicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMusicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMusicResponseBody>(model1);
      }
    }
  }


  virtual ~ListMusicResponse() = default;
};
class ListPlayHistoryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListPlayHistoryHeaders() {}

  explicit ListPlayHistoryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListPlayHistoryHeaders() = default;
};
class ListPlayHistoryRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListPlayHistoryRequestDeviceInfo() {}

  explicit ListPlayHistoryRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListPlayHistoryRequestDeviceInfo() = default;
};
class ListPlayHistoryRequestRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> type{};

  ListPlayHistoryRequestRequest() {}

  explicit ListPlayHistoryRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListPlayHistoryRequestRequest() = default;
};
class ListPlayHistoryRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListPlayHistoryRequestUserInfo() {}

  explicit ListPlayHistoryRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListPlayHistoryRequestUserInfo() = default;
};
class ListPlayHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<ListPlayHistoryRequestDeviceInfo> deviceInfo{};
  shared_ptr<ListPlayHistoryRequestRequest> request{};
  shared_ptr<ListPlayHistoryRequestUserInfo> userInfo{};

  ListPlayHistoryRequest() {}

  explicit ListPlayHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        ListPlayHistoryRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<ListPlayHistoryRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        ListPlayHistoryRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<ListPlayHistoryRequestRequest>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListPlayHistoryRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListPlayHistoryRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ListPlayHistoryRequest() = default;
};
class ListPlayHistoryShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> requestShrink{};
  shared_ptr<string> userInfoShrink{};

  ListPlayHistoryShrinkRequest() {}

  explicit ListPlayHistoryShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (requestShrink) {
      res["Request"] = boost::any(*requestShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      requestShrink = make_shared<string>(boost::any_cast<string>(m["Request"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ListPlayHistoryShrinkRequest() = default;
};
class ListPlayHistoryResponseBodyResultAuthorsCover : public Darabonba::Model {
public:
  shared_ptr<bool> canResize{};
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};

  ListPlayHistoryResponseBodyResultAuthorsCover() {}

  explicit ListPlayHistoryResponseBodyResultAuthorsCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canResize) {
      res["CanResize"] = boost::any(*canResize);
    }
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanResize") != m.end() && !m["CanResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["CanResize"]));
    }
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
  }


  virtual ~ListPlayHistoryResponseBodyResultAuthorsCover() = default;
};
class ListPlayHistoryResponseBodyResultAuthors : public Darabonba::Model {
public:
  shared_ptr<vector<string>> authorTypes{};
  shared_ptr<ListPlayHistoryResponseBodyResultAuthorsCover> cover{};
  shared_ptr<string> description{};
  shared_ptr<string> gender{};
  shared_ptr<long> id{};
  shared_ptr<bool> online{};
  shared_ptr<string> rawId{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};

  ListPlayHistoryResponseBodyResultAuthors() {}

  explicit ListPlayHistoryResponseBodyResultAuthors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorTypes) {
      res["AuthorTypes"] = boost::any(*authorTypes);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorTypes") != m.end() && !m["AuthorTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        ListPlayHistoryResponseBodyResultAuthorsCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<ListPlayHistoryResponseBodyResultAuthorsCover>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<string>(boost::any_cast<string>(m["RawId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListPlayHistoryResponseBodyResultAuthors() = default;
};
class ListPlayHistoryResponseBodyResultCover : public Darabonba::Model {
public:
  shared_ptr<bool> canResize{};
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> mediam{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};

  ListPlayHistoryResponseBodyResultCover() {}

  explicit ListPlayHistoryResponseBodyResultCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canResize) {
      res["CanResize"] = boost::any(*canResize);
    }
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (mediam) {
      res["Mediam"] = boost::any(*mediam);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanResize") != m.end() && !m["CanResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["CanResize"]));
    }
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Mediam") != m.end() && !m["Mediam"].empty()) {
      mediam = make_shared<string>(boost::any_cast<string>(m["Mediam"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
  }


  virtual ~ListPlayHistoryResponseBodyResultCover() = default;
};
class ListPlayHistoryResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<string>> alias{};
  shared_ptr<bool> audition{};
  shared_ptr<vector<ListPlayHistoryResponseBodyResultAuthors>> authors{};
  shared_ptr<string> category{};
  shared_ptr<bool> charge{};
  shared_ptr<long> commCateId{};
  shared_ptr<ListPlayHistoryResponseBodyResultCover> cover{};
  shared_ptr<string> description{};
  shared_ptr<double> hotScore{};
  shared_ptr<long> id{};
  shared_ptr<string> itemType{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<string> valid{};

  ListPlayHistoryResponseBodyResult() {}

  explicit ListPlayHistoryResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (audition) {
      res["Audition"] = boost::any(*audition);
    }
    if (authors) {
      vector<boost::any> temp1;
      for(auto item1:*authors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Authors"] = boost::any(temp1);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (charge) {
      res["Charge"] = boost::any(*charge);
    }
    if (commCateId) {
      res["CommCateId"] = boost::any(*commCateId);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hotScore) {
      res["HotScore"] = boost::any(*hotScore);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (itemType) {
      res["ItemType"] = boost::any(*itemType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Alias"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Alias"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alias = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Audition") != m.end() && !m["Audition"].empty()) {
      audition = make_shared<bool>(boost::any_cast<bool>(m["Audition"]));
    }
    if (m.find("Authors") != m.end() && !m["Authors"].empty()) {
      if (typeid(vector<boost::any>) == m["Authors"].type()) {
        vector<ListPlayHistoryResponseBodyResultAuthors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Authors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPlayHistoryResponseBodyResultAuthors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authors = make_shared<vector<ListPlayHistoryResponseBodyResultAuthors>>(expect1);
      }
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Charge") != m.end() && !m["Charge"].empty()) {
      charge = make_shared<bool>(boost::any_cast<bool>(m["Charge"]));
    }
    if (m.find("CommCateId") != m.end() && !m["CommCateId"].empty()) {
      commCateId = make_shared<long>(boost::any_cast<long>(m["CommCateId"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        ListPlayHistoryResponseBodyResultCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<ListPlayHistoryResponseBodyResultCover>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HotScore") != m.end() && !m["HotScore"].empty()) {
      hotScore = make_shared<double>(boost::any_cast<double>(m["HotScore"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ItemType") != m.end() && !m["ItemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["ItemType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<string>(boost::any_cast<string>(m["Valid"]));
    }
  }


  virtual ~ListPlayHistoryResponseBodyResult() = default;
};
class ListPlayHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<ListPlayHistoryResponseBodyResult>> result{};
  shared_ptr<string> requestId{};

  ListPlayHistoryResponseBody() {}

  explicit ListPlayHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListPlayHistoryResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPlayHistoryResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListPlayHistoryResponseBodyResult>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListPlayHistoryResponseBody() = default;
};
class ListPlayHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPlayHistoryResponseBody> body{};

  ListPlayHistoryResponse() {}

  explicit ListPlayHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPlayHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPlayHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~ListPlayHistoryResponse() = default;
};
class ListRecommendContentHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListRecommendContentHeaders() {}

  explicit ListRecommendContentHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListRecommendContentHeaders() = default;
};
class ListRecommendContentRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListRecommendContentRequestDeviceInfo() {}

  explicit ListRecommendContentRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListRecommendContentRequestDeviceInfo() = default;
};
class ListRecommendContentRequestRequest : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> type{};

  ListRecommendContentRequestRequest() {}

  explicit ListRecommendContentRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListRecommendContentRequestRequest() = default;
};
class ListRecommendContentRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListRecommendContentRequestUserInfo() {}

  explicit ListRecommendContentRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListRecommendContentRequestUserInfo() = default;
};
class ListRecommendContentRequest : public Darabonba::Model {
public:
  shared_ptr<ListRecommendContentRequestDeviceInfo> deviceInfo{};
  shared_ptr<ListRecommendContentRequestRequest> request{};
  shared_ptr<ListRecommendContentRequestUserInfo> userInfo{};

  ListRecommendContentRequest() {}

  explicit ListRecommendContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        ListRecommendContentRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<ListRecommendContentRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        ListRecommendContentRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<ListRecommendContentRequestRequest>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListRecommendContentRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListRecommendContentRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ListRecommendContentRequest() = default;
};
class ListRecommendContentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> requestShrink{};
  shared_ptr<string> userInfoShrink{};

  ListRecommendContentShrinkRequest() {}

  explicit ListRecommendContentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (requestShrink) {
      res["Request"] = boost::any(*requestShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      requestShrink = make_shared<string>(boost::any_cast<string>(m["Request"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ListRecommendContentShrinkRequest() = default;
};
class ListRecommendContentResponseBodyResultAuthorsCover : public Darabonba::Model {
public:
  shared_ptr<bool> canResize{};
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};

  ListRecommendContentResponseBodyResultAuthorsCover() {}

  explicit ListRecommendContentResponseBodyResultAuthorsCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canResize) {
      res["CanResize"] = boost::any(*canResize);
    }
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanResize") != m.end() && !m["CanResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["CanResize"]));
    }
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
  }


  virtual ~ListRecommendContentResponseBodyResultAuthorsCover() = default;
};
class ListRecommendContentResponseBodyResultAuthors : public Darabonba::Model {
public:
  shared_ptr<vector<string>> authorTypes{};
  shared_ptr<ListRecommendContentResponseBodyResultAuthorsCover> cover{};
  shared_ptr<string> description{};
  shared_ptr<string> gender{};
  shared_ptr<long> id{};
  shared_ptr<bool> online{};
  shared_ptr<string> rawId{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};

  ListRecommendContentResponseBodyResultAuthors() {}

  explicit ListRecommendContentResponseBodyResultAuthors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorTypes) {
      res["AuthorTypes"] = boost::any(*authorTypes);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorTypes") != m.end() && !m["AuthorTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        ListRecommendContentResponseBodyResultAuthorsCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<ListRecommendContentResponseBodyResultAuthorsCover>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<string>(boost::any_cast<string>(m["RawId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListRecommendContentResponseBodyResultAuthors() = default;
};
class ListRecommendContentResponseBodyResultCover : public Darabonba::Model {
public:
  shared_ptr<bool> canResize{};
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> mediam{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};

  ListRecommendContentResponseBodyResultCover() {}

  explicit ListRecommendContentResponseBodyResultCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canResize) {
      res["CanResize"] = boost::any(*canResize);
    }
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (mediam) {
      res["Mediam"] = boost::any(*mediam);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanResize") != m.end() && !m["CanResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["CanResize"]));
    }
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Mediam") != m.end() && !m["Mediam"].empty()) {
      mediam = make_shared<string>(boost::any_cast<string>(m["Mediam"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
  }


  virtual ~ListRecommendContentResponseBodyResultCover() = default;
};
class ListRecommendContentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<string>> alias{};
  shared_ptr<bool> audition{};
  shared_ptr<vector<ListRecommendContentResponseBodyResultAuthors>> authors{};
  shared_ptr<string> category{};
  shared_ptr<bool> charge{};
  shared_ptr<long> commCateId{};
  shared_ptr<ListRecommendContentResponseBodyResultCover> cover{};
  shared_ptr<string> description{};
  shared_ptr<double> hotScore{};
  shared_ptr<long> id{};
  shared_ptr<string> itemType{};
  shared_ptr<string> rawId{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<string> valid{};

  ListRecommendContentResponseBodyResult() {}

  explicit ListRecommendContentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (audition) {
      res["Audition"] = boost::any(*audition);
    }
    if (authors) {
      vector<boost::any> temp1;
      for(auto item1:*authors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Authors"] = boost::any(temp1);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (charge) {
      res["Charge"] = boost::any(*charge);
    }
    if (commCateId) {
      res["CommCateId"] = boost::any(*commCateId);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hotScore) {
      res["HotScore"] = boost::any(*hotScore);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (itemType) {
      res["ItemType"] = boost::any(*itemType);
    }
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Alias"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Alias"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alias = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Audition") != m.end() && !m["Audition"].empty()) {
      audition = make_shared<bool>(boost::any_cast<bool>(m["Audition"]));
    }
    if (m.find("Authors") != m.end() && !m["Authors"].empty()) {
      if (typeid(vector<boost::any>) == m["Authors"].type()) {
        vector<ListRecommendContentResponseBodyResultAuthors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Authors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRecommendContentResponseBodyResultAuthors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authors = make_shared<vector<ListRecommendContentResponseBodyResultAuthors>>(expect1);
      }
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Charge") != m.end() && !m["Charge"].empty()) {
      charge = make_shared<bool>(boost::any_cast<bool>(m["Charge"]));
    }
    if (m.find("CommCateId") != m.end() && !m["CommCateId"].empty()) {
      commCateId = make_shared<long>(boost::any_cast<long>(m["CommCateId"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        ListRecommendContentResponseBodyResultCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<ListRecommendContentResponseBodyResultCover>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HotScore") != m.end() && !m["HotScore"].empty()) {
      hotScore = make_shared<double>(boost::any_cast<double>(m["HotScore"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ItemType") != m.end() && !m["ItemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["ItemType"]));
    }
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<string>(boost::any_cast<string>(m["RawId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<string>(boost::any_cast<string>(m["Valid"]));
    }
  }


  virtual ~ListRecommendContentResponseBodyResult() = default;
};
class ListRecommendContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRecommendContentResponseBodyResult>> result{};

  ListRecommendContentResponseBody() {}

  explicit ListRecommendContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListRecommendContentResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRecommendContentResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRecommendContentResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListRecommendContentResponseBody() = default;
};
class ListRecommendContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRecommendContentResponseBody> body{};

  ListRecommendContentResponse() {}

  explicit ListRecommendContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRecommendContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRecommendContentResponseBody>(model1);
      }
    }
  }


  virtual ~ListRecommendContentResponse() = default;
};
class ListSubHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListSubHeaders() {}

  explicit ListSubHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListSubHeaders() = default;
};
class ListSubRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListSubRequestDeviceInfo() {}

  explicit ListSubRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListSubRequestDeviceInfo() = default;
};
class ListSubRequestPage : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListSubRequestPage() {}

  explicit ListSubRequestPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListSubRequestPage() = default;
};
class ListSubRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListSubRequestUserInfo() {}

  explicit ListSubRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListSubRequestUserInfo() = default;
};
class ListSubRequest : public Darabonba::Model {
public:
  shared_ptr<ListSubRequestDeviceInfo> deviceInfo{};
  shared_ptr<ListSubRequestPage> page{};
  shared_ptr<ListSubRequestUserInfo> userInfo{};

  ListSubRequest() {}

  explicit ListSubRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        ListSubRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<ListSubRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        ListSubRequestPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<ListSubRequestPage>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListSubRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListSubRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ListSubRequest() = default;
};
class ListSubShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> pageShrink{};
  shared_ptr<string> userInfoShrink{};

  ListSubShrinkRequest() {}

  explicit ListSubShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (pageShrink) {
      res["Page"] = boost::any(*pageShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      pageShrink = make_shared<string>(boost::any_cast<string>(m["Page"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ListSubShrinkRequest() = default;
};
class ListSubResponseBodyResultDataListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<vector<long>> daysOfWeek{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};

  ListSubResponseBodyResultDataListScheduleInfo() {}

  explicit ListSubResponseBodyResultDataListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (daysOfWeek) {
      res["DaysOfWeek"] = boost::any(*daysOfWeek);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DaysOfWeek") != m.end() && !m["DaysOfWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
  }


  virtual ~ListSubResponseBodyResultDataListScheduleInfo() = default;
};
class ListSubResponseBodyResultDataList : public Darabonba::Model {
public:
  shared_ptr<string> albumId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<long> dailyStudyCnt{};
  shared_ptr<string> deviceId{};
  shared_ptr<long> id{};
  shared_ptr<string> playMode{};
  shared_ptr<ListSubResponseBodyResultDataListScheduleInfo> scheduleInfo{};
  shared_ptr<string> title{};
  shared_ptr<long> userId{};

  ListSubResponseBodyResultDataList() {}

  explicit ListSubResponseBodyResultDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumId) {
      res["AlbumId"] = boost::any(*albumId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (dailyStudyCnt) {
      res["DailyStudyCnt"] = boost::any(*dailyStudyCnt);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (playMode) {
      res["PlayMode"] = boost::any(*playMode);
    }
    if (scheduleInfo) {
      res["ScheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumId") != m.end() && !m["AlbumId"].empty()) {
      albumId = make_shared<string>(boost::any_cast<string>(m["AlbumId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("DailyStudyCnt") != m.end() && !m["DailyStudyCnt"].empty()) {
      dailyStudyCnt = make_shared<long>(boost::any_cast<long>(m["DailyStudyCnt"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("PlayMode") != m.end() && !m["PlayMode"].empty()) {
      playMode = make_shared<string>(boost::any_cast<string>(m["PlayMode"]));
    }
    if (m.find("ScheduleInfo") != m.end() && !m["ScheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScheduleInfo"].type()) {
        ListSubResponseBodyResultDataListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScheduleInfo"]));
        scheduleInfo = make_shared<ListSubResponseBodyResultDataListScheduleInfo>(model1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~ListSubResponseBodyResultDataList() = default;
};
class ListSubResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListSubResponseBodyResultDataList>> dataList{};
  shared_ptr<bool> hasNext{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPageCount{};

  ListSubResponseBodyResult() {}

  explicit ListSubResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (hasNext) {
      res["HasNext"] = boost::any(*hasNext);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPageCount) {
      res["TotalPageCount"] = boost::any(*totalPageCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<ListSubResponseBodyResultDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubResponseBodyResultDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<ListSubResponseBodyResultDataList>>(expect1);
      }
    }
    if (m.find("HasNext") != m.end() && !m["HasNext"].empty()) {
      hasNext = make_shared<bool>(boost::any_cast<bool>(m["HasNext"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPageCount") != m.end() && !m["TotalPageCount"].empty()) {
      totalPageCount = make_shared<long>(boost::any_cast<long>(m["TotalPageCount"]));
    }
  }


  virtual ~ListSubResponseBodyResult() = default;
};
class ListSubResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListSubResponseBodyResult> result{};

  ListSubResponseBody() {}

  explicit ListSubResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListSubResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListSubResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListSubResponseBody() = default;
};
class ListSubResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSubResponseBody> body{};

  ListSubResponse() {}

  explicit ListSubResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSubResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSubResponseBody>(model1);
      }
    }
  }


  virtual ~ListSubResponse() = default;
};
class ListSubAlbumHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListSubAlbumHeaders() {}

  explicit ListSubAlbumHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListSubAlbumHeaders() = default;
};
class ListSubAlbumRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListSubAlbumRequestDeviceInfo() {}

  explicit ListSubAlbumRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListSubAlbumRequestDeviceInfo() = default;
};
class ListSubAlbumRequestQuerySubscriptionAlbumRequestPage : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListSubAlbumRequestQuerySubscriptionAlbumRequestPage() {}

  explicit ListSubAlbumRequestQuerySubscriptionAlbumRequestPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListSubAlbumRequestQuerySubscriptionAlbumRequestPage() = default;
};
class ListSubAlbumRequestQuerySubscriptionAlbumRequest : public Darabonba::Model {
public:
  shared_ptr<string> albumId{};
  shared_ptr<long> categoryId{};
  shared_ptr<ListSubAlbumRequestQuerySubscriptionAlbumRequestPage> page{};
  shared_ptr<string> title{};

  ListSubAlbumRequestQuerySubscriptionAlbumRequest() {}

  explicit ListSubAlbumRequestQuerySubscriptionAlbumRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumId) {
      res["AlbumId"] = boost::any(*albumId);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumId") != m.end() && !m["AlbumId"].empty()) {
      albumId = make_shared<string>(boost::any_cast<string>(m["AlbumId"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        ListSubAlbumRequestQuerySubscriptionAlbumRequestPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<ListSubAlbumRequestQuerySubscriptionAlbumRequestPage>(model1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListSubAlbumRequestQuerySubscriptionAlbumRequest() = default;
};
class ListSubAlbumRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListSubAlbumRequestUserInfo() {}

  explicit ListSubAlbumRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListSubAlbumRequestUserInfo() = default;
};
class ListSubAlbumRequest : public Darabonba::Model {
public:
  shared_ptr<ListSubAlbumRequestDeviceInfo> deviceInfo{};
  shared_ptr<ListSubAlbumRequestQuerySubscriptionAlbumRequest> querySubscriptionAlbumRequest{};
  shared_ptr<ListSubAlbumRequestUserInfo> userInfo{};

  ListSubAlbumRequest() {}

  explicit ListSubAlbumRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (querySubscriptionAlbumRequest) {
      res["QuerySubscriptionAlbumRequest"] = querySubscriptionAlbumRequest ? boost::any(querySubscriptionAlbumRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        ListSubAlbumRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<ListSubAlbumRequestDeviceInfo>(model1);
      }
    }
    if (m.find("QuerySubscriptionAlbumRequest") != m.end() && !m["QuerySubscriptionAlbumRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["QuerySubscriptionAlbumRequest"].type()) {
        ListSubAlbumRequestQuerySubscriptionAlbumRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QuerySubscriptionAlbumRequest"]));
        querySubscriptionAlbumRequest = make_shared<ListSubAlbumRequestQuerySubscriptionAlbumRequest>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListSubAlbumRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListSubAlbumRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ListSubAlbumRequest() = default;
};
class ListSubAlbumShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> querySubscriptionAlbumRequestShrink{};
  shared_ptr<string> userInfoShrink{};

  ListSubAlbumShrinkRequest() {}

  explicit ListSubAlbumShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (querySubscriptionAlbumRequestShrink) {
      res["QuerySubscriptionAlbumRequest"] = boost::any(*querySubscriptionAlbumRequestShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("QuerySubscriptionAlbumRequest") != m.end() && !m["QuerySubscriptionAlbumRequest"].empty()) {
      querySubscriptionAlbumRequestShrink = make_shared<string>(boost::any_cast<string>(m["QuerySubscriptionAlbumRequest"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ListSubAlbumShrinkRequest() = default;
};
class ListSubAlbumResponseBodyResultDataListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<vector<long>> daysOfWeek{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};
  shared_ptr<long> scheduleId{};

  ListSubAlbumResponseBodyResultDataListScheduleInfo() {}

  explicit ListSubAlbumResponseBodyResultDataListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (daysOfWeek) {
      res["DaysOfWeek"] = boost::any(*daysOfWeek);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    if (scheduleId) {
      res["ScheduleId"] = boost::any(*scheduleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DaysOfWeek") != m.end() && !m["DaysOfWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
    if (m.find("ScheduleId") != m.end() && !m["ScheduleId"].empty()) {
      scheduleId = make_shared<long>(boost::any_cast<long>(m["ScheduleId"]));
    }
  }


  virtual ~ListSubAlbumResponseBodyResultDataListScheduleInfo() = default;
};
class ListSubAlbumResponseBodyResultDataList : public Darabonba::Model {
public:
  shared_ptr<string> albumId{};
  shared_ptr<long> categoryId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<long> id{};
  shared_ptr<bool> isAdded{};
  shared_ptr<ListSubAlbumResponseBodyResultDataListScheduleInfo> scheduleInfo{};
  shared_ptr<long> sequence{};
  shared_ptr<string> title{};
  shared_ptr<long> totalEpisode{};

  ListSubAlbumResponseBodyResultDataList() {}

  explicit ListSubAlbumResponseBodyResultDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumId) {
      res["AlbumId"] = boost::any(*albumId);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isAdded) {
      res["IsAdded"] = boost::any(*isAdded);
    }
    if (scheduleInfo) {
      res["ScheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sequence) {
      res["Sequence"] = boost::any(*sequence);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (totalEpisode) {
      res["TotalEpisode"] = boost::any(*totalEpisode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumId") != m.end() && !m["AlbumId"].empty()) {
      albumId = make_shared<string>(boost::any_cast<string>(m["AlbumId"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsAdded") != m.end() && !m["IsAdded"].empty()) {
      isAdded = make_shared<bool>(boost::any_cast<bool>(m["IsAdded"]));
    }
    if (m.find("ScheduleInfo") != m.end() && !m["ScheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScheduleInfo"].type()) {
        ListSubAlbumResponseBodyResultDataListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScheduleInfo"]));
        scheduleInfo = make_shared<ListSubAlbumResponseBodyResultDataListScheduleInfo>(model1);
      }
    }
    if (m.find("Sequence") != m.end() && !m["Sequence"].empty()) {
      sequence = make_shared<long>(boost::any_cast<long>(m["Sequence"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("TotalEpisode") != m.end() && !m["TotalEpisode"].empty()) {
      totalEpisode = make_shared<long>(boost::any_cast<long>(m["TotalEpisode"]));
    }
  }


  virtual ~ListSubAlbumResponseBodyResultDataList() = default;
};
class ListSubAlbumResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListSubAlbumResponseBodyResultDataList>> dataList{};
  shared_ptr<bool> hasNext{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPageCount{};

  ListSubAlbumResponseBodyResult() {}

  explicit ListSubAlbumResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (hasNext) {
      res["HasNext"] = boost::any(*hasNext);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPageCount) {
      res["TotalPageCount"] = boost::any(*totalPageCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<ListSubAlbumResponseBodyResultDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubAlbumResponseBodyResultDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<ListSubAlbumResponseBodyResultDataList>>(expect1);
      }
    }
    if (m.find("HasNext") != m.end() && !m["HasNext"].empty()) {
      hasNext = make_shared<bool>(boost::any_cast<bool>(m["HasNext"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPageCount") != m.end() && !m["TotalPageCount"].empty()) {
      totalPageCount = make_shared<long>(boost::any_cast<long>(m["TotalPageCount"]));
    }
  }


  virtual ~ListSubAlbumResponseBodyResult() = default;
};
class ListSubAlbumResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListSubAlbumResponseBodyResult> result{};

  ListSubAlbumResponseBody() {}

  explicit ListSubAlbumResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListSubAlbumResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListSubAlbumResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListSubAlbumResponseBody() = default;
};
class ListSubAlbumResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSubAlbumResponseBody> body{};

  ListSubAlbumResponse() {}

  explicit ListSubAlbumResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSubAlbumResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSubAlbumResponseBody>(model1);
      }
    }
  }


  virtual ~ListSubAlbumResponse() = default;
};
class ListSubscriptionAlbumCategoryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListSubscriptionAlbumCategoryHeaders() {}

  explicit ListSubscriptionAlbumCategoryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListSubscriptionAlbumCategoryHeaders() = default;
};
class ListSubscriptionAlbumCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};

  ListSubscriptionAlbumCategoryRequest() {}

  explicit ListSubscriptionAlbumCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
  }


  virtual ~ListSubscriptionAlbumCategoryRequest() = default;
};
class ListSubscriptionAlbumCategoryResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> categoryName{};

  ListSubscriptionAlbumCategoryResponseBodyResult() {}

  explicit ListSubscriptionAlbumCategoryResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
  }


  virtual ~ListSubscriptionAlbumCategoryResponseBodyResult() = default;
};
class ListSubscriptionAlbumCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSubscriptionAlbumCategoryResponseBodyResult>> result{};

  ListSubscriptionAlbumCategoryResponseBody() {}

  explicit ListSubscriptionAlbumCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListSubscriptionAlbumCategoryResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubscriptionAlbumCategoryResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListSubscriptionAlbumCategoryResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListSubscriptionAlbumCategoryResponseBody() = default;
};
class ListSubscriptionAlbumCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSubscriptionAlbumCategoryResponseBody> body{};

  ListSubscriptionAlbumCategoryResponse() {}

  explicit ListSubscriptionAlbumCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSubscriptionAlbumCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSubscriptionAlbumCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~ListSubscriptionAlbumCategoryResponse() = default;
};
class ListUserMessageHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListUserMessageHeaders() {}

  explicit ListUserMessageHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListUserMessageHeaders() = default;
};
class ListUserMessageRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListUserMessageRequestUserInfo() {}

  explicit ListUserMessageRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListUserMessageRequestUserInfo() = default;
};
class ListUserMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> beforeTime{};
  shared_ptr<ListUserMessageRequestUserInfo> userInfo{};
  shared_ptr<long> limit{};

  ListUserMessageRequest() {}

  explicit ListUserMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beforeTime) {
      res["BeforeTime"] = boost::any(*beforeTime);
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeforeTime") != m.end() && !m["BeforeTime"].empty()) {
      beforeTime = make_shared<string>(boost::any_cast<string>(m["BeforeTime"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListUserMessageRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListUserMessageRequestUserInfo>(model1);
      }
    }
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
  }


  virtual ~ListUserMessageRequest() = default;
};
class ListUserMessageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> beforeTime{};
  shared_ptr<string> userInfoShrink{};
  shared_ptr<long> limit{};

  ListUserMessageShrinkRequest() {}

  explicit ListUserMessageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beforeTime) {
      res["BeforeTime"] = boost::any(*beforeTime);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeforeTime") != m.end() && !m["BeforeTime"].empty()) {
      beforeTime = make_shared<string>(boost::any_cast<string>(m["BeforeTime"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
  }


  virtual ~ListUserMessageShrinkRequest() = default;
};
class ListUserMessageResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> id{};
  shared_ptr<string> pic{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceUuid{};
  shared_ptr<long> status{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  ListUserMessageResponseBodyResult() {}

  explicit ListUserMessageResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (pic) {
      res["Pic"] = boost::any(*pic);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceUuid) {
      res["SourceUuid"] = boost::any(*sourceUuid);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Pic") != m.end() && !m["Pic"].empty()) {
      pic = make_shared<string>(boost::any_cast<string>(m["Pic"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceUuid") != m.end() && !m["SourceUuid"].empty()) {
      sourceUuid = make_shared<string>(boost::any_cast<string>(m["SourceUuid"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ListUserMessageResponseBodyResult() = default;
};
class ListUserMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<ListUserMessageResponseBodyResult>> result{};

  ListUserMessageResponseBody() {}

  explicit ListUserMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListUserMessageResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserMessageResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListUserMessageResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListUserMessageResponseBody() = default;
};
class ListUserMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserMessageResponseBody> body{};

  ListUserMessageResponse() {}

  explicit ListUserMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserMessageResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserMessageResponse() = default;
};
class PlayAndPauseControlHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  PlayAndPauseControlHeaders() {}

  explicit PlayAndPauseControlHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~PlayAndPauseControlHeaders() = default;
};
class PlayAndPauseControlRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  PlayAndPauseControlRequestDeviceInfo() {}

  explicit PlayAndPauseControlRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~PlayAndPauseControlRequestDeviceInfo() = default;
};
class PlayAndPauseControlRequestOpenPlayAndPauseControlParam : public Darabonba::Model {
public:
  shared_ptr<string> openPlayAndPauseCommand{};

  PlayAndPauseControlRequestOpenPlayAndPauseControlParam() {}

  explicit PlayAndPauseControlRequestOpenPlayAndPauseControlParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openPlayAndPauseCommand) {
      res["OpenPlayAndPauseCommand"] = boost::any(*openPlayAndPauseCommand);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenPlayAndPauseCommand") != m.end() && !m["OpenPlayAndPauseCommand"].empty()) {
      openPlayAndPauseCommand = make_shared<string>(boost::any_cast<string>(m["OpenPlayAndPauseCommand"]));
    }
  }


  virtual ~PlayAndPauseControlRequestOpenPlayAndPauseControlParam() = default;
};
class PlayAndPauseControlRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  PlayAndPauseControlRequestUserInfo() {}

  explicit PlayAndPauseControlRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~PlayAndPauseControlRequestUserInfo() = default;
};
class PlayAndPauseControlRequest : public Darabonba::Model {
public:
  shared_ptr<PlayAndPauseControlRequestDeviceInfo> deviceInfo{};
  shared_ptr<PlayAndPauseControlRequestOpenPlayAndPauseControlParam> openPlayAndPauseControlParam{};
  shared_ptr<PlayAndPauseControlRequestUserInfo> userInfo{};

  PlayAndPauseControlRequest() {}

  explicit PlayAndPauseControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (openPlayAndPauseControlParam) {
      res["OpenPlayAndPauseControlParam"] = openPlayAndPauseControlParam ? boost::any(openPlayAndPauseControlParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        PlayAndPauseControlRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<PlayAndPauseControlRequestDeviceInfo>(model1);
      }
    }
    if (m.find("OpenPlayAndPauseControlParam") != m.end() && !m["OpenPlayAndPauseControlParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpenPlayAndPauseControlParam"].type()) {
        PlayAndPauseControlRequestOpenPlayAndPauseControlParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpenPlayAndPauseControlParam"]));
        openPlayAndPauseControlParam = make_shared<PlayAndPauseControlRequestOpenPlayAndPauseControlParam>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        PlayAndPauseControlRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<PlayAndPauseControlRequestUserInfo>(model1);
      }
    }
  }


  virtual ~PlayAndPauseControlRequest() = default;
};
class PlayAndPauseControlShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> openPlayAndPauseControlParamShrink{};
  shared_ptr<string> userInfoShrink{};

  PlayAndPauseControlShrinkRequest() {}

  explicit PlayAndPauseControlShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (openPlayAndPauseControlParamShrink) {
      res["OpenPlayAndPauseControlParam"] = boost::any(*openPlayAndPauseControlParamShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("OpenPlayAndPauseControlParam") != m.end() && !m["OpenPlayAndPauseControlParam"].empty()) {
      openPlayAndPauseControlParamShrink = make_shared<string>(boost::any_cast<string>(m["OpenPlayAndPauseControlParam"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~PlayAndPauseControlShrinkRequest() = default;
};
class PlayAndPauseControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<string> success{};

  PlayAndPauseControlResponseBody() {}

  explicit PlayAndPauseControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~PlayAndPauseControlResponseBody() = default;
};
class PlayAndPauseControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PlayAndPauseControlResponseBody> body{};

  PlayAndPauseControlResponse() {}

  explicit PlayAndPauseControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PlayAndPauseControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PlayAndPauseControlResponseBody>(model1);
      }
    }
  }


  virtual ~PlayAndPauseControlResponse() = default;
};
class PlayModeControlHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  PlayModeControlHeaders() {}

  explicit PlayModeControlHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~PlayModeControlHeaders() = default;
};
class PlayModeControlRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  PlayModeControlRequestDeviceInfo() {}

  explicit PlayModeControlRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~PlayModeControlRequestDeviceInfo() = default;
};
class PlayModeControlRequestOpenPlayModeControlRequest : public Darabonba::Model {
public:
  shared_ptr<string> openPlayMode{};

  PlayModeControlRequestOpenPlayModeControlRequest() {}

  explicit PlayModeControlRequestOpenPlayModeControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openPlayMode) {
      res["OpenPlayMode"] = boost::any(*openPlayMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenPlayMode") != m.end() && !m["OpenPlayMode"].empty()) {
      openPlayMode = make_shared<string>(boost::any_cast<string>(m["OpenPlayMode"]));
    }
  }


  virtual ~PlayModeControlRequestOpenPlayModeControlRequest() = default;
};
class PlayModeControlRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  PlayModeControlRequestUserInfo() {}

  explicit PlayModeControlRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~PlayModeControlRequestUserInfo() = default;
};
class PlayModeControlRequest : public Darabonba::Model {
public:
  shared_ptr<PlayModeControlRequestDeviceInfo> deviceInfo{};
  shared_ptr<PlayModeControlRequestOpenPlayModeControlRequest> openPlayModeControlRequest{};
  shared_ptr<PlayModeControlRequestUserInfo> userInfo{};

  PlayModeControlRequest() {}

  explicit PlayModeControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (openPlayModeControlRequest) {
      res["OpenPlayModeControlRequest"] = openPlayModeControlRequest ? boost::any(openPlayModeControlRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        PlayModeControlRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<PlayModeControlRequestDeviceInfo>(model1);
      }
    }
    if (m.find("OpenPlayModeControlRequest") != m.end() && !m["OpenPlayModeControlRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpenPlayModeControlRequest"].type()) {
        PlayModeControlRequestOpenPlayModeControlRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpenPlayModeControlRequest"]));
        openPlayModeControlRequest = make_shared<PlayModeControlRequestOpenPlayModeControlRequest>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        PlayModeControlRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<PlayModeControlRequestUserInfo>(model1);
      }
    }
  }


  virtual ~PlayModeControlRequest() = default;
};
class PlayModeControlShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> openPlayModeControlRequestShrink{};
  shared_ptr<string> userInfoShrink{};

  PlayModeControlShrinkRequest() {}

  explicit PlayModeControlShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (openPlayModeControlRequestShrink) {
      res["OpenPlayModeControlRequest"] = boost::any(*openPlayModeControlRequestShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("OpenPlayModeControlRequest") != m.end() && !m["OpenPlayModeControlRequest"].empty()) {
      openPlayModeControlRequestShrink = make_shared<string>(boost::any_cast<string>(m["OpenPlayModeControlRequest"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~PlayModeControlShrinkRequest() = default;
};
class PlayModeControlResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> openPlayMode{};

  PlayModeControlResponseBodyResult() {}

  explicit PlayModeControlResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openPlayMode) {
      res["OpenPlayMode"] = boost::any(*openPlayMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenPlayMode") != m.end() && !m["OpenPlayMode"].empty()) {
      openPlayMode = make_shared<string>(boost::any_cast<string>(m["OpenPlayMode"]));
    }
  }


  virtual ~PlayModeControlResponseBodyResult() = default;
};
class PlayModeControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<PlayModeControlResponseBodyResult> result{};
  shared_ptr<string> success{};

  PlayModeControlResponseBody() {}

  explicit PlayModeControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        PlayModeControlResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<PlayModeControlResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~PlayModeControlResponseBody() = default;
};
class PlayModeControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PlayModeControlResponseBody> body{};

  PlayModeControlResponse() {}

  explicit PlayModeControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PlayModeControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PlayModeControlResponseBody>(model1);
      }
    }
  }


  virtual ~PlayModeControlResponse() = default;
};
class PreviousAndNextControlHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  PreviousAndNextControlHeaders() {}

  explicit PreviousAndNextControlHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~PreviousAndNextControlHeaders() = default;
};
class PreviousAndNextControlRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  PreviousAndNextControlRequestDeviceInfo() {}

  explicit PreviousAndNextControlRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~PreviousAndNextControlRequestDeviceInfo() = default;
};
class PreviousAndNextControlRequestOpenControlPlayingListRequest : public Darabonba::Model {
public:
  shared_ptr<string> cmd{};
  shared_ptr<map<string, boost::any>> extendInfo{};
  shared_ptr<bool> isFromDevice{};

  PreviousAndNextControlRequestOpenControlPlayingListRequest() {}

  explicit PreviousAndNextControlRequestOpenControlPlayingListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cmd) {
      res["Cmd"] = boost::any(*cmd);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (isFromDevice) {
      res["IsFromDevice"] = boost::any(*isFromDevice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cmd") != m.end() && !m["Cmd"].empty()) {
      cmd = make_shared<string>(boost::any_cast<string>(m["Cmd"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtendInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("IsFromDevice") != m.end() && !m["IsFromDevice"].empty()) {
      isFromDevice = make_shared<bool>(boost::any_cast<bool>(m["IsFromDevice"]));
    }
  }


  virtual ~PreviousAndNextControlRequestOpenControlPlayingListRequest() = default;
};
class PreviousAndNextControlRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  PreviousAndNextControlRequestUserInfo() {}

  explicit PreviousAndNextControlRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~PreviousAndNextControlRequestUserInfo() = default;
};
class PreviousAndNextControlRequest : public Darabonba::Model {
public:
  shared_ptr<PreviousAndNextControlRequestDeviceInfo> deviceInfo{};
  shared_ptr<PreviousAndNextControlRequestOpenControlPlayingListRequest> openControlPlayingListRequest{};
  shared_ptr<PreviousAndNextControlRequestUserInfo> userInfo{};

  PreviousAndNextControlRequest() {}

  explicit PreviousAndNextControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (openControlPlayingListRequest) {
      res["OpenControlPlayingListRequest"] = openControlPlayingListRequest ? boost::any(openControlPlayingListRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        PreviousAndNextControlRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<PreviousAndNextControlRequestDeviceInfo>(model1);
      }
    }
    if (m.find("OpenControlPlayingListRequest") != m.end() && !m["OpenControlPlayingListRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpenControlPlayingListRequest"].type()) {
        PreviousAndNextControlRequestOpenControlPlayingListRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpenControlPlayingListRequest"]));
        openControlPlayingListRequest = make_shared<PreviousAndNextControlRequestOpenControlPlayingListRequest>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        PreviousAndNextControlRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<PreviousAndNextControlRequestUserInfo>(model1);
      }
    }
  }


  virtual ~PreviousAndNextControlRequest() = default;
};
class PreviousAndNextControlShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> openControlPlayingListRequestShrink{};
  shared_ptr<string> userInfoShrink{};

  PreviousAndNextControlShrinkRequest() {}

  explicit PreviousAndNextControlShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (openControlPlayingListRequestShrink) {
      res["OpenControlPlayingListRequest"] = boost::any(*openControlPlayingListRequestShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("OpenControlPlayingListRequest") != m.end() && !m["OpenControlPlayingListRequest"].empty()) {
      openControlPlayingListRequestShrink = make_shared<string>(boost::any_cast<string>(m["OpenControlPlayingListRequest"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~PreviousAndNextControlShrinkRequest() = default;
};
class PreviousAndNextControlResponseBodyResultCover : public Darabonba::Model {
public:
  shared_ptr<bool> canResize{};
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> mediam{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};

  PreviousAndNextControlResponseBodyResultCover() {}

  explicit PreviousAndNextControlResponseBodyResultCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canResize) {
      res["CanResize"] = boost::any(*canResize);
    }
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (mediam) {
      res["Mediam"] = boost::any(*mediam);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanResize") != m.end() && !m["CanResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["CanResize"]));
    }
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Mediam") != m.end() && !m["Mediam"].empty()) {
      mediam = make_shared<string>(boost::any_cast<string>(m["Mediam"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
  }


  virtual ~PreviousAndNextControlResponseBodyResultCover() = default;
};
class PreviousAndNextControlResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> albumName{};
  shared_ptr<string> albumRawId{};
  shared_ptr<long> audioLength{};
  shared_ptr<long> copyright{};
  shared_ptr<PreviousAndNextControlResponseBodyResultCover> cover{};
  shared_ptr<long> defaultPlayOrder{};
  shared_ptr<string> itemUrl{};
  shared_ptr<bool> liked{};
  shared_ptr<string> lyricUrl{};
  shared_ptr<string> playMode{};
  shared_ptr<long> pos{};
  shared_ptr<long> progress{};
  shared_ptr<string> rawId{};
  shared_ptr<string> singer{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<string> valid{};

  PreviousAndNextControlResponseBodyResult() {}

  explicit PreviousAndNextControlResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumName) {
      res["AlbumName"] = boost::any(*albumName);
    }
    if (albumRawId) {
      res["AlbumRawId"] = boost::any(*albumRawId);
    }
    if (audioLength) {
      res["AudioLength"] = boost::any(*audioLength);
    }
    if (copyright) {
      res["Copyright"] = boost::any(*copyright);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (defaultPlayOrder) {
      res["DefaultPlayOrder"] = boost::any(*defaultPlayOrder);
    }
    if (itemUrl) {
      res["ItemUrl"] = boost::any(*itemUrl);
    }
    if (liked) {
      res["Liked"] = boost::any(*liked);
    }
    if (lyricUrl) {
      res["LyricUrl"] = boost::any(*lyricUrl);
    }
    if (playMode) {
      res["PlayMode"] = boost::any(*playMode);
    }
    if (pos) {
      res["Pos"] = boost::any(*pos);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (singer) {
      res["Singer"] = boost::any(*singer);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumName") != m.end() && !m["AlbumName"].empty()) {
      albumName = make_shared<string>(boost::any_cast<string>(m["AlbumName"]));
    }
    if (m.find("AlbumRawId") != m.end() && !m["AlbumRawId"].empty()) {
      albumRawId = make_shared<string>(boost::any_cast<string>(m["AlbumRawId"]));
    }
    if (m.find("AudioLength") != m.end() && !m["AudioLength"].empty()) {
      audioLength = make_shared<long>(boost::any_cast<long>(m["AudioLength"]));
    }
    if (m.find("Copyright") != m.end() && !m["Copyright"].empty()) {
      copyright = make_shared<long>(boost::any_cast<long>(m["Copyright"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        PreviousAndNextControlResponseBodyResultCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<PreviousAndNextControlResponseBodyResultCover>(model1);
      }
    }
    if (m.find("DefaultPlayOrder") != m.end() && !m["DefaultPlayOrder"].empty()) {
      defaultPlayOrder = make_shared<long>(boost::any_cast<long>(m["DefaultPlayOrder"]));
    }
    if (m.find("ItemUrl") != m.end() && !m["ItemUrl"].empty()) {
      itemUrl = make_shared<string>(boost::any_cast<string>(m["ItemUrl"]));
    }
    if (m.find("Liked") != m.end() && !m["Liked"].empty()) {
      liked = make_shared<bool>(boost::any_cast<bool>(m["Liked"]));
    }
    if (m.find("LyricUrl") != m.end() && !m["LyricUrl"].empty()) {
      lyricUrl = make_shared<string>(boost::any_cast<string>(m["LyricUrl"]));
    }
    if (m.find("PlayMode") != m.end() && !m["PlayMode"].empty()) {
      playMode = make_shared<string>(boost::any_cast<string>(m["PlayMode"]));
    }
    if (m.find("Pos") != m.end() && !m["Pos"].empty()) {
      pos = make_shared<long>(boost::any_cast<long>(m["Pos"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<string>(boost::any_cast<string>(m["RawId"]));
    }
    if (m.find("Singer") != m.end() && !m["Singer"].empty()) {
      singer = make_shared<string>(boost::any_cast<string>(m["Singer"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<string>(boost::any_cast<string>(m["Valid"]));
    }
  }


  virtual ~PreviousAndNextControlResponseBodyResult() = default;
};
class PreviousAndNextControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<PreviousAndNextControlResponseBodyResult> result{};
  shared_ptr<string> success{};

  PreviousAndNextControlResponseBody() {}

  explicit PreviousAndNextControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        PreviousAndNextControlResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<PreviousAndNextControlResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~PreviousAndNextControlResponseBody() = default;
};
class PreviousAndNextControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PreviousAndNextControlResponseBody> body{};

  PreviousAndNextControlResponse() {}

  explicit PreviousAndNextControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PreviousAndNextControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PreviousAndNextControlResponseBody>(model1);
      }
    }
  }


  virtual ~PreviousAndNextControlResponse() = default;
};
class ProgressControlHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ProgressControlHeaders() {}

  explicit ProgressControlHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ProgressControlHeaders() = default;
};
class ProgressControlRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ProgressControlRequestDeviceInfo() {}

  explicit ProgressControlRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ProgressControlRequestDeviceInfo() = default;
};
class ProgressControlRequestOpenProgressControlRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> extendInfo{};
  shared_ptr<long> progress{};

  ProgressControlRequestOpenProgressControlRequest() {}

  explicit ProgressControlRequestOpenProgressControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtendInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
  }


  virtual ~ProgressControlRequestOpenProgressControlRequest() = default;
};
class ProgressControlRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ProgressControlRequestUserInfo() {}

  explicit ProgressControlRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ProgressControlRequestUserInfo() = default;
};
class ProgressControlRequest : public Darabonba::Model {
public:
  shared_ptr<ProgressControlRequestDeviceInfo> deviceInfo{};
  shared_ptr<ProgressControlRequestOpenProgressControlRequest> openProgressControlRequest{};
  shared_ptr<ProgressControlRequestUserInfo> userInfo{};

  ProgressControlRequest() {}

  explicit ProgressControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (openProgressControlRequest) {
      res["OpenProgressControlRequest"] = openProgressControlRequest ? boost::any(openProgressControlRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        ProgressControlRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<ProgressControlRequestDeviceInfo>(model1);
      }
    }
    if (m.find("OpenProgressControlRequest") != m.end() && !m["OpenProgressControlRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpenProgressControlRequest"].type()) {
        ProgressControlRequestOpenProgressControlRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpenProgressControlRequest"]));
        openProgressControlRequest = make_shared<ProgressControlRequestOpenProgressControlRequest>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ProgressControlRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ProgressControlRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ProgressControlRequest() = default;
};
class ProgressControlShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> openProgressControlRequestShrink{};
  shared_ptr<string> userInfoShrink{};

  ProgressControlShrinkRequest() {}

  explicit ProgressControlShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (openProgressControlRequestShrink) {
      res["OpenProgressControlRequest"] = boost::any(*openProgressControlRequestShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("OpenProgressControlRequest") != m.end() && !m["OpenProgressControlRequest"].empty()) {
      openProgressControlRequestShrink = make_shared<string>(boost::any_cast<string>(m["OpenProgressControlRequest"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ProgressControlShrinkRequest() = default;
};
class ProgressControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<string> success{};

  ProgressControlResponseBody() {}

  explicit ProgressControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ProgressControlResponseBody() = default;
};
class ProgressControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ProgressControlResponseBody> body{};

  ProgressControlResponse() {}

  explicit ProgressControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ProgressControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ProgressControlResponseBody>(model1);
      }
    }
  }


  virtual ~ProgressControlResponse() = default;
};
class QueryMusicTypeHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  QueryMusicTypeHeaders() {}

  explicit QueryMusicTypeHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~QueryMusicTypeHeaders() = default;
};
class QueryMusicTypeRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  QueryMusicTypeRequestDeviceInfo() {}

  explicit QueryMusicTypeRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~QueryMusicTypeRequestDeviceInfo() = default;
};
class QueryMusicTypeRequestPayload : public Darabonba::Model {
public:

  QueryMusicTypeRequestPayload() {}

  explicit QueryMusicTypeRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
  }


  virtual ~QueryMusicTypeRequestPayload() = default;
};
class QueryMusicTypeRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  QueryMusicTypeRequestUserInfo() {}

  explicit QueryMusicTypeRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~QueryMusicTypeRequestUserInfo() = default;
};
class QueryMusicTypeRequest : public Darabonba::Model {
public:
  shared_ptr<QueryMusicTypeRequestDeviceInfo> deviceInfo{};
  shared_ptr<QueryMusicTypeRequestPayload> payload{};
  shared_ptr<QueryMusicTypeRequestUserInfo> userInfo{};

  QueryMusicTypeRequest() {}

  explicit QueryMusicTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        QueryMusicTypeRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<QueryMusicTypeRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        QueryMusicTypeRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<QueryMusicTypeRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        QueryMusicTypeRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<QueryMusicTypeRequestUserInfo>(model1);
      }
    }
  }


  virtual ~QueryMusicTypeRequest() = default;
};
class QueryMusicTypeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  QueryMusicTypeShrinkRequest() {}

  explicit QueryMusicTypeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~QueryMusicTypeShrinkRequest() = default;
};
class QueryMusicTypeResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> musicType{};
  shared_ptr<string> musicTypeName{};

  QueryMusicTypeResponseBodyResult() {}

  explicit QueryMusicTypeResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (musicType) {
      res["MusicType"] = boost::any(*musicType);
    }
    if (musicTypeName) {
      res["MusicTypeName"] = boost::any(*musicTypeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MusicType") != m.end() && !m["MusicType"].empty()) {
      musicType = make_shared<long>(boost::any_cast<long>(m["MusicType"]));
    }
    if (m.find("MusicTypeName") != m.end() && !m["MusicTypeName"].empty()) {
      musicTypeName = make_shared<string>(boost::any_cast<string>(m["MusicTypeName"]));
    }
  }


  virtual ~QueryMusicTypeResponseBodyResult() = default;
};
class QueryMusicTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryMusicTypeResponseBodyResult>> result{};

  QueryMusicTypeResponseBody() {}

  explicit QueryMusicTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QueryMusicTypeResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMusicTypeResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QueryMusicTypeResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~QueryMusicTypeResponseBody() = default;
};
class QueryMusicTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMusicTypeResponseBody> body{};

  QueryMusicTypeResponse() {}

  explicit QueryMusicTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMusicTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMusicTypeResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMusicTypeResponse() = default;
};
class ReadMessageHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ReadMessageHeaders() {}

  explicit ReadMessageHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ReadMessageHeaders() = default;
};
class ReadMessageRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ReadMessageRequestUserInfo() {}

  explicit ReadMessageRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ReadMessageRequestUserInfo() = default;
};
class ReadMessageRequest : public Darabonba::Model {
public:
  shared_ptr<long> messageId{};
  shared_ptr<ReadMessageRequestUserInfo> userInfo{};

  ReadMessageRequest() {}

  explicit ReadMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<long>(boost::any_cast<long>(m["MessageId"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ReadMessageRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ReadMessageRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ReadMessageRequest() = default;
};
class ReadMessageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> messageId{};
  shared_ptr<string> userInfoShrink{};

  ReadMessageShrinkRequest() {}

  explicit ReadMessageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<long>(boost::any_cast<long>(m["MessageId"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ReadMessageShrinkRequest() = default;
};
class ReadMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> result{};

  ReadMessageResponseBody() {}

  explicit ReadMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~ReadMessageResponseBody() = default;
};
class ReadMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReadMessageResponseBody> body{};

  ReadMessageResponse() {}

  explicit ReadMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReadMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReadMessageResponseBody>(model1);
      }
    }
  }


  virtual ~ReadMessageResponse() = default;
};
class ScgSearchHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ScgSearchHeaders() {}

  explicit ScgSearchHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ScgSearchHeaders() = default;
};
class ScgSearchRequestScgFilterOffSetParam : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<long> offset{};

  ScgSearchRequestScgFilterOffSetParam() {}

  explicit ScgSearchRequestScgFilterOffSetParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
  }


  virtual ~ScgSearchRequestScgFilterOffSetParam() = default;
};
class ScgSearchRequestScgFilterPageParam : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ScgSearchRequestScgFilterPageParam() {}

  explicit ScgSearchRequestScgFilterPageParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ScgSearchRequestScgFilterPageParam() = default;
};
class ScgSearchRequestScgFilterSortParam : public Darabonba::Model {
public:
  shared_ptr<string> sortKey{};
  shared_ptr<string> sortOrder{};
  shared_ptr<string> sortText{};

  ScgSearchRequestScgFilterSortParam() {}

  explicit ScgSearchRequestScgFilterSortParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sortKey) {
      res["SortKey"] = boost::any(*sortKey);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (sortText) {
      res["SortText"] = boost::any(*sortText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SortKey") != m.end() && !m["SortKey"].empty()) {
      sortKey = make_shared<string>(boost::any_cast<string>(m["SortKey"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
    if (m.find("SortText") != m.end() && !m["SortText"].empty()) {
      sortText = make_shared<string>(boost::any_cast<string>(m["SortText"]));
    }
  }


  virtual ~ScgSearchRequestScgFilterSortParam() = default;
};
class ScgSearchRequestScgFilter : public Darabonba::Model {
public:
  shared_ptr<ScgSearchRequestScgFilterOffSetParam> offSetParam{};
  shared_ptr<ScgSearchRequestScgFilterPageParam> pageParam{};
  shared_ptr<ScgSearchRequestScgFilterSortParam> sortParam{};
  shared_ptr<bool> useOffSet{};

  ScgSearchRequestScgFilter() {}

  explicit ScgSearchRequestScgFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offSetParam) {
      res["OffSetParam"] = offSetParam ? boost::any(offSetParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageParam) {
      res["PageParam"] = pageParam ? boost::any(pageParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sortParam) {
      res["SortParam"] = sortParam ? boost::any(sortParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (useOffSet) {
      res["UseOffSet"] = boost::any(*useOffSet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OffSetParam") != m.end() && !m["OffSetParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["OffSetParam"].type()) {
        ScgSearchRequestScgFilterOffSetParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OffSetParam"]));
        offSetParam = make_shared<ScgSearchRequestScgFilterOffSetParam>(model1);
      }
    }
    if (m.find("PageParam") != m.end() && !m["PageParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageParam"].type()) {
        ScgSearchRequestScgFilterPageParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageParam"]));
        pageParam = make_shared<ScgSearchRequestScgFilterPageParam>(model1);
      }
    }
    if (m.find("SortParam") != m.end() && !m["SortParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["SortParam"].type()) {
        ScgSearchRequestScgFilterSortParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SortParam"]));
        sortParam = make_shared<ScgSearchRequestScgFilterSortParam>(model1);
      }
    }
    if (m.find("UseOffSet") != m.end() && !m["UseOffSet"].empty()) {
      useOffSet = make_shared<bool>(boost::any_cast<bool>(m["UseOffSet"]));
    }
  }


  virtual ~ScgSearchRequestScgFilter() = default;
};
class ScgSearchRequest : public Darabonba::Model {
public:
  shared_ptr<ScgSearchRequestScgFilter> scgFilter{};
  shared_ptr<string> topicId{};

  ScgSearchRequest() {}

  explicit ScgSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scgFilter) {
      res["ScgFilter"] = scgFilter ? boost::any(scgFilter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topicId) {
      res["TopicId"] = boost::any(*topicId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScgFilter") != m.end() && !m["ScgFilter"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScgFilter"].type()) {
        ScgSearchRequestScgFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScgFilter"]));
        scgFilter = make_shared<ScgSearchRequestScgFilter>(model1);
      }
    }
    if (m.find("TopicId") != m.end() && !m["TopicId"].empty()) {
      topicId = make_shared<string>(boost::any_cast<string>(m["TopicId"]));
    }
  }


  virtual ~ScgSearchRequest() = default;
};
class ScgSearchShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> scgFilterShrink{};
  shared_ptr<string> topicId{};

  ScgSearchShrinkRequest() {}

  explicit ScgSearchShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scgFilterShrink) {
      res["ScgFilter"] = boost::any(*scgFilterShrink);
    }
    if (topicId) {
      res["TopicId"] = boost::any(*topicId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScgFilter") != m.end() && !m["ScgFilter"].empty()) {
      scgFilterShrink = make_shared<string>(boost::any_cast<string>(m["ScgFilter"]));
    }
    if (m.find("TopicId") != m.end() && !m["TopicId"].empty()) {
      topicId = make_shared<string>(boost::any_cast<string>(m["TopicId"]));
    }
  }


  virtual ~ScgSearchShrinkRequest() = default;
};
class ScgSearchResponseBodyResultCover : public Darabonba::Model {
public:
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};
  shared_ptr<bool> canResize{};

  ScgSearchResponseBodyResultCover() {}

  explicit ScgSearchResponseBodyResultCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    if (canResize) {
      res["canResize"] = boost::any(*canResize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
    if (m.find("canResize") != m.end() && !m["canResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["canResize"]));
    }
  }


  virtual ~ScgSearchResponseBodyResultCover() = default;
};
class ScgSearchResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> album{};
  shared_ptr<string> albumRawId{};
  shared_ptr<long> albumType{};
  shared_ptr<vector<string>> alias{};
  shared_ptr<vector<long>> authorIds{};
  shared_ptr<vector<string>> authorNames{};
  shared_ptr<string> category{};
  shared_ptr<string> contentType{};
  shared_ptr<ScgSearchResponseBodyResultCover> cover{};
  shared_ptr<bool> isAudition{};
  shared_ptr<string> isCharge{};
  shared_ptr<bool> needCharge{};
  shared_ptr<long> rawId{};
  shared_ptr<string> singers{};
  shared_ptr<string> source{};
  shared_ptr<bool> supportAudition{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  ScgSearchResponseBodyResult() {}

  explicit ScgSearchResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (album) {
      res["Album"] = boost::any(*album);
    }
    if (albumRawId) {
      res["AlbumRawId"] = boost::any(*albumRawId);
    }
    if (albumType) {
      res["AlbumType"] = boost::any(*albumType);
    }
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (authorIds) {
      res["AuthorIds"] = boost::any(*authorIds);
    }
    if (authorNames) {
      res["AuthorNames"] = boost::any(*authorNames);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isAudition) {
      res["IsAudition"] = boost::any(*isAudition);
    }
    if (isCharge) {
      res["IsCharge"] = boost::any(*isCharge);
    }
    if (needCharge) {
      res["NeedCharge"] = boost::any(*needCharge);
    }
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (singers) {
      res["Singers"] = boost::any(*singers);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (supportAudition) {
      res["SupportAudition"] = boost::any(*supportAudition);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Album") != m.end() && !m["Album"].empty()) {
      album = make_shared<bool>(boost::any_cast<bool>(m["Album"]));
    }
    if (m.find("AlbumRawId") != m.end() && !m["AlbumRawId"].empty()) {
      albumRawId = make_shared<string>(boost::any_cast<string>(m["AlbumRawId"]));
    }
    if (m.find("AlbumType") != m.end() && !m["AlbumType"].empty()) {
      albumType = make_shared<long>(boost::any_cast<long>(m["AlbumType"]));
    }
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Alias"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Alias"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alias = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AuthorIds") != m.end() && !m["AuthorIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      authorIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("AuthorNames") != m.end() && !m["AuthorNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        ScgSearchResponseBodyResultCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<ScgSearchResponseBodyResultCover>(model1);
      }
    }
    if (m.find("IsAudition") != m.end() && !m["IsAudition"].empty()) {
      isAudition = make_shared<bool>(boost::any_cast<bool>(m["IsAudition"]));
    }
    if (m.find("IsCharge") != m.end() && !m["IsCharge"].empty()) {
      isCharge = make_shared<string>(boost::any_cast<string>(m["IsCharge"]));
    }
    if (m.find("NeedCharge") != m.end() && !m["NeedCharge"].empty()) {
      needCharge = make_shared<bool>(boost::any_cast<bool>(m["NeedCharge"]));
    }
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<long>(boost::any_cast<long>(m["RawId"]));
    }
    if (m.find("Singers") != m.end() && !m["Singers"].empty()) {
      singers = make_shared<string>(boost::any_cast<string>(m["Singers"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SupportAudition") != m.end() && !m["SupportAudition"].empty()) {
      supportAudition = make_shared<bool>(boost::any_cast<bool>(m["SupportAudition"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ScgSearchResponseBodyResult() = default;
};
class ScgSearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ScgSearchResponseBodyResult>> result{};

  ScgSearchResponseBody() {}

  explicit ScgSearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ScgSearchResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScgSearchResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ScgSearchResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ScgSearchResponseBody() = default;
};
class ScgSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ScgSearchResponseBody> body{};

  ScgSearchResponse() {}

  explicit ScgSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScgSearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScgSearchResponseBody>(model1);
      }
    }
  }


  virtual ~ScgSearchResponse() = default;
};
class SearchContentHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  SearchContentHeaders() {}

  explicit SearchContentHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~SearchContentHeaders() = default;
};
class SearchContentRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  SearchContentRequestDeviceInfo() {}

  explicit SearchContentRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~SearchContentRequestDeviceInfo() = default;
};
class SearchContentRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> cate{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<bool> queryAlbum{};
  shared_ptr<string> subCate{};

  SearchContentRequestRequest() {}

  explicit SearchContentRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cate) {
      res["Cate"] = boost::any(*cate);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (queryAlbum) {
      res["QueryAlbum"] = boost::any(*queryAlbum);
    }
    if (subCate) {
      res["SubCate"] = boost::any(*subCate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cate") != m.end() && !m["Cate"].empty()) {
      cate = make_shared<string>(boost::any_cast<string>(m["Cate"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("QueryAlbum") != m.end() && !m["QueryAlbum"].empty()) {
      queryAlbum = make_shared<bool>(boost::any_cast<bool>(m["QueryAlbum"]));
    }
    if (m.find("SubCate") != m.end() && !m["SubCate"].empty()) {
      subCate = make_shared<string>(boost::any_cast<string>(m["SubCate"]));
    }
  }


  virtual ~SearchContentRequestRequest() = default;
};
class SearchContentRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  SearchContentRequestUserInfo() {}

  explicit SearchContentRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~SearchContentRequestUserInfo() = default;
};
class SearchContentRequest : public Darabonba::Model {
public:
  shared_ptr<SearchContentRequestDeviceInfo> deviceInfo{};
  shared_ptr<SearchContentRequestRequest> request{};
  shared_ptr<SearchContentRequestUserInfo> userInfo{};

  SearchContentRequest() {}

  explicit SearchContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        SearchContentRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<SearchContentRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        SearchContentRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<SearchContentRequestRequest>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        SearchContentRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<SearchContentRequestUserInfo>(model1);
      }
    }
  }


  virtual ~SearchContentRequest() = default;
};
class SearchContentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> requestShrink{};
  shared_ptr<string> userInfoShrink{};

  SearchContentShrinkRequest() {}

  explicit SearchContentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (requestShrink) {
      res["Request"] = boost::any(*requestShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      requestShrink = make_shared<string>(boost::any_cast<string>(m["Request"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~SearchContentShrinkRequest() = default;
};
class SearchContentResponseBodyResultAuthorsCover : public Darabonba::Model {
public:
  shared_ptr<bool> canResize{};
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};

  SearchContentResponseBodyResultAuthorsCover() {}

  explicit SearchContentResponseBodyResultAuthorsCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canResize) {
      res["CanResize"] = boost::any(*canResize);
    }
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanResize") != m.end() && !m["CanResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["CanResize"]));
    }
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
  }


  virtual ~SearchContentResponseBodyResultAuthorsCover() = default;
};
class SearchContentResponseBodyResultAuthors : public Darabonba::Model {
public:
  shared_ptr<vector<string>> authorTypes{};
  shared_ptr<SearchContentResponseBodyResultAuthorsCover> cover{};
  shared_ptr<string> description{};
  shared_ptr<string> gender{};
  shared_ptr<long> id{};
  shared_ptr<bool> online{};
  shared_ptr<string> rawId{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};

  SearchContentResponseBodyResultAuthors() {}

  explicit SearchContentResponseBodyResultAuthors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorTypes) {
      res["AuthorTypes"] = boost::any(*authorTypes);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (rawId) {
      res["RawId"] = boost::any(*rawId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorTypes") != m.end() && !m["AuthorTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        SearchContentResponseBodyResultAuthorsCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<SearchContentResponseBodyResultAuthorsCover>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("RawId") != m.end() && !m["RawId"].empty()) {
      rawId = make_shared<string>(boost::any_cast<string>(m["RawId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~SearchContentResponseBodyResultAuthors() = default;
};
class SearchContentResponseBodyResultCover : public Darabonba::Model {
public:
  shared_ptr<bool> canResize{};
  shared_ptr<string> img{};
  shared_ptr<string> large{};
  shared_ptr<string> mediam{};
  shared_ptr<string> medium{};
  shared_ptr<string> small{};

  SearchContentResponseBodyResultCover() {}

  explicit SearchContentResponseBodyResultCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canResize) {
      res["CanResize"] = boost::any(*canResize);
    }
    if (img) {
      res["Img"] = boost::any(*img);
    }
    if (large) {
      res["Large"] = boost::any(*large);
    }
    if (mediam) {
      res["Mediam"] = boost::any(*mediam);
    }
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (small) {
      res["Small"] = boost::any(*small);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanResize") != m.end() && !m["CanResize"].empty()) {
      canResize = make_shared<bool>(boost::any_cast<bool>(m["CanResize"]));
    }
    if (m.find("Img") != m.end() && !m["Img"].empty()) {
      img = make_shared<string>(boost::any_cast<string>(m["Img"]));
    }
    if (m.find("Large") != m.end() && !m["Large"].empty()) {
      large = make_shared<string>(boost::any_cast<string>(m["Large"]));
    }
    if (m.find("Mediam") != m.end() && !m["Mediam"].empty()) {
      mediam = make_shared<string>(boost::any_cast<string>(m["Mediam"]));
    }
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("Small") != m.end() && !m["Small"].empty()) {
      small = make_shared<string>(boost::any_cast<string>(m["Small"]));
    }
  }


  virtual ~SearchContentResponseBodyResultCover() = default;
};
class SearchContentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> albumId{};
  shared_ptr<vector<string>> alias{};
  shared_ptr<bool> audition{};
  shared_ptr<vector<SearchContentResponseBodyResultAuthors>> authors{};
  shared_ptr<string> category{};
  shared_ptr<bool> charge{};
  shared_ptr<long> commCateId{};
  shared_ptr<SearchContentResponseBodyResultCover> cover{};
  shared_ptr<string> description{};
  shared_ptr<long> duration{};
  shared_ptr<double> hotScore{};
  shared_ptr<long> id{};
  shared_ptr<string> itemType{};
  shared_ptr<string> lyric{};
  shared_ptr<string> orderIndex{};
  shared_ptr<string> source{};
  shared_ptr<vector<string>> styles{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<string> valid{};

  SearchContentResponseBodyResult() {}

  explicit SearchContentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (albumId) {
      res["AlbumId"] = boost::any(*albumId);
    }
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (audition) {
      res["Audition"] = boost::any(*audition);
    }
    if (authors) {
      vector<boost::any> temp1;
      for(auto item1:*authors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Authors"] = boost::any(temp1);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (charge) {
      res["Charge"] = boost::any(*charge);
    }
    if (commCateId) {
      res["CommCateId"] = boost::any(*commCateId);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (hotScore) {
      res["HotScore"] = boost::any(*hotScore);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (itemType) {
      res["ItemType"] = boost::any(*itemType);
    }
    if (lyric) {
      res["Lyric"] = boost::any(*lyric);
    }
    if (orderIndex) {
      res["OrderIndex"] = boost::any(*orderIndex);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (styles) {
      res["Styles"] = boost::any(*styles);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlbumId") != m.end() && !m["AlbumId"].empty()) {
      albumId = make_shared<string>(boost::any_cast<string>(m["AlbumId"]));
    }
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Alias"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Alias"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alias = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Audition") != m.end() && !m["Audition"].empty()) {
      audition = make_shared<bool>(boost::any_cast<bool>(m["Audition"]));
    }
    if (m.find("Authors") != m.end() && !m["Authors"].empty()) {
      if (typeid(vector<boost::any>) == m["Authors"].type()) {
        vector<SearchContentResponseBodyResultAuthors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Authors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchContentResponseBodyResultAuthors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authors = make_shared<vector<SearchContentResponseBodyResultAuthors>>(expect1);
      }
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Charge") != m.end() && !m["Charge"].empty()) {
      charge = make_shared<bool>(boost::any_cast<bool>(m["Charge"]));
    }
    if (m.find("CommCateId") != m.end() && !m["CommCateId"].empty()) {
      commCateId = make_shared<long>(boost::any_cast<long>(m["CommCateId"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        SearchContentResponseBodyResultCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<SearchContentResponseBodyResultCover>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("HotScore") != m.end() && !m["HotScore"].empty()) {
      hotScore = make_shared<double>(boost::any_cast<double>(m["HotScore"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ItemType") != m.end() && !m["ItemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["ItemType"]));
    }
    if (m.find("Lyric") != m.end() && !m["Lyric"].empty()) {
      lyric = make_shared<string>(boost::any_cast<string>(m["Lyric"]));
    }
    if (m.find("OrderIndex") != m.end() && !m["OrderIndex"].empty()) {
      orderIndex = make_shared<string>(boost::any_cast<string>(m["OrderIndex"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Styles") != m.end() && !m["Styles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Styles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Styles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      styles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<string>(boost::any_cast<string>(m["Valid"]));
    }
  }


  virtual ~SearchContentResponseBodyResult() = default;
};
class SearchContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<SearchContentResponseBodyResult>> result{};

  SearchContentResponseBody() {}

  explicit SearchContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<SearchContentResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchContentResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<SearchContentResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~SearchContentResponseBody() = default;
};
class SearchContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchContentResponseBody> body{};

  SearchContentResponse() {}

  explicit SearchContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchContentResponseBody>(model1);
      }
    }
  }


  virtual ~SearchContentResponse() = default;
};
class SendMessageHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  SendMessageHeaders() {}

  explicit SendMessageHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~SendMessageHeaders() = default;
};
class SendMessageRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  SendMessageRequestUserInfo() {}

  explicit SendMessageRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~SendMessageRequestUserInfo() = default;
};
class SendMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<SendMessageRequestUserInfo> userInfo{};

  SendMessageRequest() {}

  explicit SendMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        SendMessageRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<SendMessageRequestUserInfo>(model1);
      }
    }
  }


  virtual ~SendMessageRequest() = default;
};
class SendMessageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> userInfoShrink{};

  SendMessageShrinkRequest() {}

  explicit SendMessageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~SendMessageShrinkRequest() = default;
};
class SendMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> result{};

  SendMessageResponseBody() {}

  explicit SendMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~SendMessageResponseBody() = default;
};
class SendMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendMessageResponseBody> body{};

  SendMessageResponse() {}

  explicit SendMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendMessageResponse() = default;
};
class SetDeviceSettingHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  SetDeviceSettingHeaders() {}

  explicit SetDeviceSettingHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~SetDeviceSettingHeaders() = default;
};
class SetDeviceSettingRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  SetDeviceSettingRequestDeviceInfo() {}

  explicit SetDeviceSettingRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~SetDeviceSettingRequestDeviceInfo() = default;
};
class SetDeviceSettingRequest : public Darabonba::Model {
public:
  shared_ptr<SetDeviceSettingRequestDeviceInfo> deviceInfo{};
  shared_ptr<string> key{};
  shared_ptr<boost::any> value{};

  SetDeviceSettingRequest() {}

  explicit SetDeviceSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        SetDeviceSettingRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<SetDeviceSettingRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["Value"]));
    }
  }


  virtual ~SetDeviceSettingRequest() = default;
};
class SetDeviceSettingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> key{};
  shared_ptr<boost::any> value{};

  SetDeviceSettingShrinkRequest() {}

  explicit SetDeviceSettingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["Value"]));
    }
  }


  virtual ~SetDeviceSettingShrinkRequest() = default;
};
class SetDeviceSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  SetDeviceSettingResponseBody() {}

  explicit SetDeviceSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~SetDeviceSettingResponseBody() = default;
};
class SetDeviceSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDeviceSettingResponseBody> body{};

  SetDeviceSettingResponse() {}

  explicit SetDeviceSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDeviceSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDeviceSettingResponseBody>(model1);
      }
    }
  }


  virtual ~SetDeviceSettingResponse() = default;
};
class UnbindDeviceHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  UnbindDeviceHeaders() {}

  explicit UnbindDeviceHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~UnbindDeviceHeaders() = default;
};
class UnbindDeviceRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  UnbindDeviceRequestDeviceInfo() {}

  explicit UnbindDeviceRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~UnbindDeviceRequestDeviceInfo() = default;
};
class UnbindDeviceRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  UnbindDeviceRequestUserInfo() {}

  explicit UnbindDeviceRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~UnbindDeviceRequestUserInfo() = default;
};
class UnbindDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<UnbindDeviceRequestDeviceInfo> deviceInfo{};
  shared_ptr<UnbindDeviceRequestUserInfo> userInfo{};

  UnbindDeviceRequest() {}

  explicit UnbindDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        UnbindDeviceRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<UnbindDeviceRequestDeviceInfo>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        UnbindDeviceRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<UnbindDeviceRequestUserInfo>(model1);
      }
    }
  }


  virtual ~UnbindDeviceRequest() = default;
};
class UnbindDeviceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> userInfoShrink{};

  UnbindDeviceShrinkRequest() {}

  explicit UnbindDeviceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~UnbindDeviceShrinkRequest() = default;
};
class UnbindDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  UnbindDeviceResponseBody() {}

  explicit UnbindDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~UnbindDeviceResponseBody() = default;
};
class UnbindDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindDeviceResponseBody> body{};

  UnbindDeviceResponse() {}

  explicit UnbindDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindDeviceResponse() = default;
};
class UpdateAlarmHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  UpdateAlarmHeaders() {}

  explicit UpdateAlarmHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~UpdateAlarmHeaders() = default;
};
class UpdateAlarmRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  UpdateAlarmRequestDeviceInfo() {}

  explicit UpdateAlarmRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~UpdateAlarmRequestDeviceInfo() = default;
};
class UpdateAlarmRequestPayloadMusicInfo : public Darabonba::Model {
public:
  shared_ptr<long> musicId{};
  shared_ptr<string> musicName{};
  shared_ptr<long> musicType{};
  shared_ptr<string> musicTypeName{};
  shared_ptr<string> musicUrl{};

  UpdateAlarmRequestPayloadMusicInfo() {}

  explicit UpdateAlarmRequestPayloadMusicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (musicId) {
      res["MusicId"] = boost::any(*musicId);
    }
    if (musicName) {
      res["MusicName"] = boost::any(*musicName);
    }
    if (musicType) {
      res["MusicType"] = boost::any(*musicType);
    }
    if (musicTypeName) {
      res["MusicTypeName"] = boost::any(*musicTypeName);
    }
    if (musicUrl) {
      res["MusicUrl"] = boost::any(*musicUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MusicId") != m.end() && !m["MusicId"].empty()) {
      musicId = make_shared<long>(boost::any_cast<long>(m["MusicId"]));
    }
    if (m.find("MusicName") != m.end() && !m["MusicName"].empty()) {
      musicName = make_shared<string>(boost::any_cast<string>(m["MusicName"]));
    }
    if (m.find("MusicType") != m.end() && !m["MusicType"].empty()) {
      musicType = make_shared<long>(boost::any_cast<long>(m["MusicType"]));
    }
    if (m.find("MusicTypeName") != m.end() && !m["MusicTypeName"].empty()) {
      musicTypeName = make_shared<string>(boost::any_cast<string>(m["MusicTypeName"]));
    }
    if (m.find("MusicUrl") != m.end() && !m["MusicUrl"].empty()) {
      musicUrl = make_shared<string>(boost::any_cast<string>(m["MusicUrl"]));
    }
  }


  virtual ~UpdateAlarmRequestPayloadMusicInfo() = default;
};
class UpdateAlarmRequestPayloadScheduleInfoOnce : public Darabonba::Model {
public:
  shared_ptr<long> day{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};
  shared_ptr<long> month{};
  shared_ptr<long> year{};

  UpdateAlarmRequestPayloadScheduleInfoOnce() {}

  explicit UpdateAlarmRequestPayloadScheduleInfoOnce(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    if (year) {
      res["Year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<long>(boost::any_cast<long>(m["Day"]));
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["Month"]));
    }
    if (m.find("Year") != m.end() && !m["Year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["Year"]));
    }
  }


  virtual ~UpdateAlarmRequestPayloadScheduleInfoOnce() = default;
};
class UpdateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay : public Darabonba::Model {
public:
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};

  UpdateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay() {}

  explicit UpdateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
  }


  virtual ~UpdateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay() = default;
};
class UpdateAlarmRequestPayloadScheduleInfoWeekly : public Darabonba::Model {
public:
  shared_ptr<vector<long>> daysOfWeek{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};

  UpdateAlarmRequestPayloadScheduleInfoWeekly() {}

  explicit UpdateAlarmRequestPayloadScheduleInfoWeekly(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (daysOfWeek) {
      res["DaysOfWeek"] = boost::any(*daysOfWeek);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DaysOfWeek") != m.end() && !m["DaysOfWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
  }


  virtual ~UpdateAlarmRequestPayloadScheduleInfoWeekly() = default;
};
class UpdateAlarmRequestPayloadScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<UpdateAlarmRequestPayloadScheduleInfoOnce> once{};
  shared_ptr<UpdateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay> statutoryWorkingDay{};
  shared_ptr<string> type{};
  shared_ptr<UpdateAlarmRequestPayloadScheduleInfoWeekly> weekly{};

  UpdateAlarmRequestPayloadScheduleInfo() {}

  explicit UpdateAlarmRequestPayloadScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (once) {
      res["Once"] = once ? boost::any(once->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (statutoryWorkingDay) {
      res["StatutoryWorkingDay"] = statutoryWorkingDay ? boost::any(statutoryWorkingDay->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weekly) {
      res["Weekly"] = weekly ? boost::any(weekly->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Once") != m.end() && !m["Once"].empty()) {
      if (typeid(map<string, boost::any>) == m["Once"].type()) {
        UpdateAlarmRequestPayloadScheduleInfoOnce model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Once"]));
        once = make_shared<UpdateAlarmRequestPayloadScheduleInfoOnce>(model1);
      }
    }
    if (m.find("StatutoryWorkingDay") != m.end() && !m["StatutoryWorkingDay"].empty()) {
      if (typeid(map<string, boost::any>) == m["StatutoryWorkingDay"].type()) {
        UpdateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StatutoryWorkingDay"]));
        statutoryWorkingDay = make_shared<UpdateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Weekly") != m.end() && !m["Weekly"].empty()) {
      if (typeid(map<string, boost::any>) == m["Weekly"].type()) {
        UpdateAlarmRequestPayloadScheduleInfoWeekly model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Weekly"]));
        weekly = make_shared<UpdateAlarmRequestPayloadScheduleInfoWeekly>(model1);
      }
    }
  }


  virtual ~UpdateAlarmRequestPayloadScheduleInfo() = default;
};
class UpdateAlarmRequestPayload : public Darabonba::Model {
public:
  shared_ptr<long> alarmId{};
  shared_ptr<UpdateAlarmRequestPayloadMusicInfo> musicInfo{};
  shared_ptr<UpdateAlarmRequestPayloadScheduleInfo> scheduleInfo{};
  shared_ptr<long> volume{};

  UpdateAlarmRequestPayload() {}

  explicit UpdateAlarmRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    if (musicInfo) {
      res["MusicInfo"] = musicInfo ? boost::any(musicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["ScheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<long>(boost::any_cast<long>(m["AlarmId"]));
    }
    if (m.find("MusicInfo") != m.end() && !m["MusicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MusicInfo"].type()) {
        UpdateAlarmRequestPayloadMusicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MusicInfo"]));
        musicInfo = make_shared<UpdateAlarmRequestPayloadMusicInfo>(model1);
      }
    }
    if (m.find("ScheduleInfo") != m.end() && !m["ScheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScheduleInfo"].type()) {
        UpdateAlarmRequestPayloadScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScheduleInfo"]));
        scheduleInfo = make_shared<UpdateAlarmRequestPayloadScheduleInfo>(model1);
      }
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~UpdateAlarmRequestPayload() = default;
};
class UpdateAlarmRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  UpdateAlarmRequestUserInfo() {}

  explicit UpdateAlarmRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~UpdateAlarmRequestUserInfo() = default;
};
class UpdateAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateAlarmRequestDeviceInfo> deviceInfo{};
  shared_ptr<UpdateAlarmRequestPayload> payload{};
  shared_ptr<UpdateAlarmRequestUserInfo> userInfo{};

  UpdateAlarmRequest() {}

  explicit UpdateAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        UpdateAlarmRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<UpdateAlarmRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        UpdateAlarmRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<UpdateAlarmRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        UpdateAlarmRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<UpdateAlarmRequestUserInfo>(model1);
      }
    }
  }


  virtual ~UpdateAlarmRequest() = default;
};
class UpdateAlarmShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  UpdateAlarmShrinkRequest() {}

  explicit UpdateAlarmShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~UpdateAlarmShrinkRequest() = default;
};
class UpdateAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  UpdateAlarmResponseBody() {}

  explicit UpdateAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~UpdateAlarmResponseBody() = default;
};
class UpdateAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAlarmResponseBody> body{};

  UpdateAlarmResponse() {}

  explicit UpdateAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAlarmResponse() = default;
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
  AddAndRemoveFavoriteContentResponse addAndRemoveFavoriteContent(shared_ptr<AddAndRemoveFavoriteContentRequest> request);
  AddAndRemoveFavoriteContentResponse addAndRemoveFavoriteContentWithOptions(shared_ptr<AddAndRemoveFavoriteContentRequest> tmpReq, shared_ptr<AddAndRemoveFavoriteContentHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddSubResponse addSub(shared_ptr<AddSubRequest> request);
  AddSubResponse addSubWithOptions(shared_ptr<AddSubRequest> tmpReq, shared_ptr<AddSubHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckAuthCodeBindForExtResponse checkAuthCodeBindForExt(shared_ptr<CheckAuthCodeBindForExtRequest> request);
  CheckAuthCodeBindForExtResponse checkAuthCodeBindForExtWithOptions(shared_ptr<CheckAuthCodeBindForExtRequest> tmpReq, shared_ptr<CheckAuthCodeBindForExtHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAlarmResponse createAlarm(shared_ptr<CreateAlarmRequest> request);
  CreateAlarmResponse createAlarmWithOptions(shared_ptr<CreateAlarmRequest> tmpReq, shared_ptr<CreateAlarmHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePlayingListResponse createPlayingList(shared_ptr<CreatePlayingListRequest> request);
  CreatePlayingListResponse createPlayingListWithOptions(shared_ptr<CreatePlayingListRequest> tmpReq, shared_ptr<CreatePlayingListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScheduleTaskResponse createScheduleTask(shared_ptr<CreateScheduleTaskRequest> request);
  CreateScheduleTaskResponse createScheduleTaskWithOptions(shared_ptr<CreateScheduleTaskRequest> tmpReq, shared_ptr<CreateScheduleTaskHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAlarmsResponse deleteAlarms(shared_ptr<DeleteAlarmsRequest> request);
  DeleteAlarmsResponse deleteAlarmsWithOptions(shared_ptr<DeleteAlarmsRequest> tmpReq, shared_ptr<DeleteAlarmsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScheduleTaskResponse deleteScheduleTask(shared_ptr<DeleteScheduleTaskRequest> request);
  DeleteScheduleTaskResponse deleteScheduleTaskWithOptions(shared_ptr<DeleteScheduleTaskRequest> tmpReq, shared_ptr<DeleteScheduleTaskHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSubResponse deleteSub(shared_ptr<DeleteSubRequest> request);
  DeleteSubResponse deleteSubWithOptions(shared_ptr<DeleteSubRequest> request, shared_ptr<DeleteSubHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeviceControlResponse deviceControl(shared_ptr<DeviceControlRequest> request);
  DeviceControlResponse deviceControlWithOptions(shared_ptr<DeviceControlRequest> tmpReq, shared_ptr<DeviceControlHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAlarmResponse getAlarm(shared_ptr<GetAlarmRequest> request);
  GetAlarmResponse getAlarmWithOptions(shared_ptr<GetAlarmRequest> tmpReq, shared_ptr<GetAlarmHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAlbumResponse getAlbum(shared_ptr<GetAlbumRequest> request);
  GetAlbumResponse getAlbumWithOptions(shared_ptr<GetAlbumRequest> request, shared_ptr<GetAlbumHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAlbumDetailByIdResponse getAlbumDetailById(shared_ptr<GetAlbumDetailByIdRequest> request);
  GetAlbumDetailByIdResponse getAlbumDetailByIdWithOptions(shared_ptr<GetAlbumDetailByIdRequest> request, shared_ptr<GetAlbumDetailByIdHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCodeEnhanceResponse getCodeEnhance(shared_ptr<GetCodeEnhanceRequest> request);
  GetCodeEnhanceResponse getCodeEnhanceWithOptions(shared_ptr<GetCodeEnhanceRequest> tmpReq, shared_ptr<GetCodeEnhanceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetContentResponse getContent(shared_ptr<GetContentRequest> request);
  GetContentResponse getContentWithOptions(shared_ptr<GetContentRequest> request, shared_ptr<GetContentHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCurrentPlayingItemResponse getCurrentPlayingItem(shared_ptr<GetCurrentPlayingItemRequest> request);
  GetCurrentPlayingItemResponse getCurrentPlayingItemWithOptions(shared_ptr<GetCurrentPlayingItemRequest> tmpReq, shared_ptr<GetCurrentPlayingItemHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCurrentPlayingListResponse getCurrentPlayingList(shared_ptr<GetCurrentPlayingListRequest> request);
  GetCurrentPlayingListResponse getCurrentPlayingListWithOptions(shared_ptr<GetCurrentPlayingListRequest> tmpReq, shared_ptr<GetCurrentPlayingListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceBasicInfoResponse getDeviceBasicInfo(shared_ptr<GetDeviceBasicInfoRequest> request);
  GetDeviceBasicInfoResponse getDeviceBasicInfoWithOptions(shared_ptr<GetDeviceBasicInfoRequest> tmpReq, shared_ptr<GetDeviceBasicInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceIdByIdentityResponse getDeviceIdByIdentity(shared_ptr<GetDeviceIdByIdentityRequest> request);
  GetDeviceIdByIdentityResponse getDeviceIdByIdentityWithOptions(shared_ptr<GetDeviceIdByIdentityRequest> request, shared_ptr<GetDeviceIdByIdentityHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceSettingResponse getDeviceSetting(shared_ptr<GetDeviceSettingRequest> request);
  GetDeviceSettingResponse getDeviceSettingWithOptions(shared_ptr<GetDeviceSettingRequest> tmpReq, shared_ptr<GetDeviceSettingHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceStatusDetailResponse getDeviceStatusDetail(shared_ptr<GetDeviceStatusDetailRequest> request);
  GetDeviceStatusDetailResponse getDeviceStatusDetailWithOptions(shared_ptr<GetDeviceStatusDetailRequest> tmpReq, shared_ptr<GetDeviceStatusDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceStatusInfoResponse getDeviceStatusInfo(shared_ptr<GetDeviceStatusInfoRequest> request);
  GetDeviceStatusInfoResponse getDeviceStatusInfoWithOptions(shared_ptr<GetDeviceStatusInfoRequest> tmpReq, shared_ptr<GetDeviceStatusInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceTagResponse getDeviceTag(shared_ptr<GetDeviceTagRequest> request);
  GetDeviceTagResponse getDeviceTagWithOptions(shared_ptr<GetDeviceTagRequest> tmpReq, shared_ptr<GetDeviceTagHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetScheduleTaskResponse getScheduleTask(shared_ptr<GetScheduleTaskRequest> request);
  GetScheduleTaskResponse getScheduleTaskWithOptions(shared_ptr<GetScheduleTaskRequest> tmpReq, shared_ptr<GetScheduleTaskHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUnreadMessageCountResponse getUnreadMessageCount(shared_ptr<GetUnreadMessageCountRequest> request);
  GetUnreadMessageCountResponse getUnreadMessageCountWithOptions(shared_ptr<GetUnreadMessageCountRequest> tmpReq, shared_ptr<GetUnreadMessageCountHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserByDeviceIdResponse getUserByDeviceId(shared_ptr<GetUserByDeviceIdRequest> request);
  GetUserByDeviceIdResponse getUserByDeviceIdWithOptions(shared_ptr<GetUserByDeviceIdRequest> tmpReq, shared_ptr<GetUserByDeviceIdHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWeatherResponse getWeather(shared_ptr<GetWeatherRequest> request);
  GetWeatherResponse getWeatherWithOptions(shared_ptr<GetWeatherRequest> tmpReq, shared_ptr<GetWeatherHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IndexControlPlayingListResponse indexControlPlayingList(shared_ptr<IndexControlPlayingListRequest> request);
  IndexControlPlayingListResponse indexControlPlayingListWithOptions(shared_ptr<IndexControlPlayingListRequest> tmpReq, shared_ptr<IndexControlPlayingListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlarmsResponse listAlarms(shared_ptr<ListAlarmsRequest> request);
  ListAlarmsResponse listAlarmsWithOptions(shared_ptr<ListAlarmsRequest> tmpReq, shared_ptr<ListAlarmsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlbumDetailResponse listAlbumDetail(shared_ptr<ListAlbumDetailRequest> request);
  ListAlbumDetailResponse listAlbumDetailWithOptions(shared_ptr<ListAlbumDetailRequest> request, shared_ptr<ListAlbumDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlbumIsAddedResponse listAlbumIsAdded(shared_ptr<ListAlbumIsAddedRequest> request);
  ListAlbumIsAddedResponse listAlbumIsAddedWithOptions(shared_ptr<ListAlbumIsAddedRequest> tmpReq, shared_ptr<ListAlbumIsAddedHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCateContentResponse listCateContent(shared_ptr<ListCateContentRequest> request);
  ListCateContentResponse listCateContentWithOptions(shared_ptr<ListCateContentRequest> tmpReq, shared_ptr<ListCateContentHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCateInfoResponse listCateInfo(shared_ptr<ListCateInfoRequest> request);
  ListCateInfoResponse listCateInfoWithOptions(shared_ptr<ListCateInfoRequest> request, shared_ptr<ListCateInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCommonCateFirstFloorResponse listCommonCateFirstFloor(shared_ptr<ListCommonCateFirstFloorRequest> request);
  ListCommonCateFirstFloorResponse listCommonCateFirstFloorWithOptions(shared_ptr<ListCommonCateFirstFloorRequest> request, shared_ptr<ListCommonCateFirstFloorHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCommonCateSecondFloorResponse listCommonCateSecondFloor(shared_ptr<ListCommonCateSecondFloorRequest> request);
  ListCommonCateSecondFloorResponse listCommonCateSecondFloorWithOptions(shared_ptr<ListCommonCateSecondFloorRequest> request, shared_ptr<ListCommonCateSecondFloorHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceBasicInfoResponse listDeviceBasicInfo(shared_ptr<ListDeviceBasicInfoRequest> request);
  ListDeviceBasicInfoResponse listDeviceBasicInfoWithOptions(shared_ptr<ListDeviceBasicInfoRequest> tmpReq, shared_ptr<ListDeviceBasicInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceByUserIdResponse listDeviceByUserId(shared_ptr<ListDeviceByUserIdRequest> request);
  ListDeviceByUserIdResponse listDeviceByUserIdWithOptions(shared_ptr<ListDeviceByUserIdRequest> tmpReq, shared_ptr<ListDeviceByUserIdHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceByUserIdAndChanelResponse listDeviceByUserIdAndChanel(shared_ptr<ListDeviceByUserIdAndChanelRequest> request);
  ListDeviceByUserIdAndChanelResponse listDeviceByUserIdAndChanelWithOptions(shared_ptr<ListDeviceByUserIdAndChanelRequest> tmpReq, shared_ptr<ListDeviceByUserIdAndChanelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceIdByIdentitiesResponse listDeviceIdByIdentities(shared_ptr<ListDeviceIdByIdentitiesRequest> request);
  ListDeviceIdByIdentitiesResponse listDeviceIdByIdentitiesWithOptions(shared_ptr<ListDeviceIdByIdentitiesRequest> tmpReq, shared_ptr<ListDeviceIdByIdentitiesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMusicResponse listMusic(shared_ptr<ListMusicRequest> request);
  ListMusicResponse listMusicWithOptions(shared_ptr<ListMusicRequest> tmpReq, shared_ptr<ListMusicHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPlayHistoryResponse listPlayHistory(shared_ptr<ListPlayHistoryRequest> request);
  ListPlayHistoryResponse listPlayHistoryWithOptions(shared_ptr<ListPlayHistoryRequest> tmpReq, shared_ptr<ListPlayHistoryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRecommendContentResponse listRecommendContent(shared_ptr<ListRecommendContentRequest> request);
  ListRecommendContentResponse listRecommendContentWithOptions(shared_ptr<ListRecommendContentRequest> tmpReq, shared_ptr<ListRecommendContentHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSubResponse listSub(shared_ptr<ListSubRequest> request);
  ListSubResponse listSubWithOptions(shared_ptr<ListSubRequest> tmpReq, shared_ptr<ListSubHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSubAlbumResponse listSubAlbum(shared_ptr<ListSubAlbumRequest> request);
  ListSubAlbumResponse listSubAlbumWithOptions(shared_ptr<ListSubAlbumRequest> tmpReq, shared_ptr<ListSubAlbumHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSubscriptionAlbumCategoryResponse listSubscriptionAlbumCategory(shared_ptr<ListSubscriptionAlbumCategoryRequest> request);
  ListSubscriptionAlbumCategoryResponse listSubscriptionAlbumCategoryWithOptions(shared_ptr<ListSubscriptionAlbumCategoryRequest> request, shared_ptr<ListSubscriptionAlbumCategoryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserMessageResponse listUserMessage(shared_ptr<ListUserMessageRequest> request);
  ListUserMessageResponse listUserMessageWithOptions(shared_ptr<ListUserMessageRequest> tmpReq, shared_ptr<ListUserMessageHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PlayAndPauseControlResponse playAndPauseControl(shared_ptr<PlayAndPauseControlRequest> request);
  PlayAndPauseControlResponse playAndPauseControlWithOptions(shared_ptr<PlayAndPauseControlRequest> tmpReq, shared_ptr<PlayAndPauseControlHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PlayModeControlResponse playModeControl(shared_ptr<PlayModeControlRequest> request);
  PlayModeControlResponse playModeControlWithOptions(shared_ptr<PlayModeControlRequest> tmpReq, shared_ptr<PlayModeControlHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PreviousAndNextControlResponse previousAndNextControl(shared_ptr<PreviousAndNextControlRequest> request);
  PreviousAndNextControlResponse previousAndNextControlWithOptions(shared_ptr<PreviousAndNextControlRequest> tmpReq, shared_ptr<PreviousAndNextControlHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ProgressControlResponse progressControl(shared_ptr<ProgressControlRequest> request);
  ProgressControlResponse progressControlWithOptions(shared_ptr<ProgressControlRequest> tmpReq, shared_ptr<ProgressControlHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMusicTypeResponse queryMusicType(shared_ptr<QueryMusicTypeRequest> request);
  QueryMusicTypeResponse queryMusicTypeWithOptions(shared_ptr<QueryMusicTypeRequest> tmpReq, shared_ptr<QueryMusicTypeHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReadMessageResponse readMessage(shared_ptr<ReadMessageRequest> request);
  ReadMessageResponse readMessageWithOptions(shared_ptr<ReadMessageRequest> tmpReq, shared_ptr<ReadMessageHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScgSearchResponse scgSearch(shared_ptr<ScgSearchRequest> request);
  ScgSearchResponse scgSearchWithOptions(shared_ptr<ScgSearchRequest> tmpReq, shared_ptr<ScgSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchContentResponse searchContent(shared_ptr<SearchContentRequest> request);
  SearchContentResponse searchContentWithOptions(shared_ptr<SearchContentRequest> tmpReq, shared_ptr<SearchContentHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendMessageResponse sendMessage(shared_ptr<SendMessageRequest> request);
  SendMessageResponse sendMessageWithOptions(shared_ptr<SendMessageRequest> tmpReq, shared_ptr<SendMessageHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDeviceSettingResponse setDeviceSetting(shared_ptr<SetDeviceSettingRequest> request);
  SetDeviceSettingResponse setDeviceSettingWithOptions(shared_ptr<SetDeviceSettingRequest> tmpReq, shared_ptr<SetDeviceSettingHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindDeviceResponse unbindDevice(shared_ptr<UnbindDeviceRequest> request);
  UnbindDeviceResponse unbindDeviceWithOptions(shared_ptr<UnbindDeviceRequest> tmpReq, shared_ptr<UnbindDeviceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAlarmResponse updateAlarm(shared_ptr<UpdateAlarmRequest> request);
  UpdateAlarmResponse updateAlarmWithOptions(shared_ptr<UpdateAlarmRequest> tmpReq, shared_ptr<UpdateAlarmHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AliGeniessp10

#endif
