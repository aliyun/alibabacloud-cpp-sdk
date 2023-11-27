// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_LIVE-INTERACTION20201214_H_
#define ALIBABACLOUD_LIVE-INTERACTION20201214_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Live-interaction20201214 {
class ResultUserMuteSettingsValue : public Darabonba::Model {
public:
  shared_ptr<bool> mute{};
  shared_ptr<long> expireTime{};

  ResultUserMuteSettingsValue() {}

  explicit ResultUserMuteSettingsValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mute) {
      res["Mute"] = boost::any(*mute);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mute") != m.end() && !m["Mute"].empty()) {
      mute = make_shared<bool>(boost::any_cast<bool>(m["Mute"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
  }


  virtual ~ResultUserMuteSettingsValue() = default;
};
class ResultImportMessageResultValue : public Darabonba::Model {
public:
  shared_ptr<long> result{};
  shared_ptr<string> msgId{};

  ResultImportMessageResultValue() {}

  explicit ResultImportMessageResultValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["result"] = boost::any(*result);
    }
    if (msgId) {
      res["msgId"] = boost::any(*msgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["result"]));
    }
    if (m.find("msgId") != m.end() && !m["msgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["msgId"]));
    }
  }


  virtual ~ResultImportMessageResultValue() = default;
};
class RequestParamsUserConversationsValue : public Darabonba::Model {
public:
  shared_ptr<bool> top{};
  shared_ptr<long> redPoint{};
  shared_ptr<bool> mute{};
  shared_ptr<bool> visible{};
  shared_ptr<long> createTime{};
  shared_ptr<long> modifyTime{};
  shared_ptr<map<string, string>> userExtensions{};

  RequestParamsUserConversationsValue() {}

  explicit RequestParamsUserConversationsValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (redPoint) {
      res["RedPoint"] = boost::any(*redPoint);
    }
    if (mute) {
      res["Mute"] = boost::any(*mute);
    }
    if (visible) {
      res["Visible"] = boost::any(*visible);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (userExtensions) {
      res["UserExtensions"] = boost::any(*userExtensions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<bool>(boost::any_cast<bool>(m["Top"]));
    }
    if (m.find("RedPoint") != m.end() && !m["RedPoint"].empty()) {
      redPoint = make_shared<long>(boost::any_cast<long>(m["RedPoint"]));
    }
    if (m.find("Mute") != m.end() && !m["Mute"].empty()) {
      mute = make_shared<bool>(boost::any_cast<bool>(m["Mute"]));
    }
    if (m.find("Visible") != m.end() && !m["Visible"].empty()) {
      visible = make_shared<bool>(boost::any_cast<bool>(m["Visible"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("UserExtensions") != m.end() && !m["UserExtensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["UserExtensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      userExtensions = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~RequestParamsUserConversationsValue() = default;
};
class RequestParamsOptionsSingleChatCreateRequestUserConversationValue : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> userExtensions{};

  RequestParamsOptionsSingleChatCreateRequestUserConversationValue() {}

  explicit RequestParamsOptionsSingleChatCreateRequestUserConversationValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userExtensions) {
      res["UserExtensions"] = boost::any(*userExtensions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserExtensions") != m.end() && !m["UserExtensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["UserExtensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      userExtensions = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~RequestParamsOptionsSingleChatCreateRequestUserConversationValue() = default;
};
class AddGroupMembersRequestRequestParamsInitMembers : public Darabonba::Model {
public:
  shared_ptr<string> appUid{};
  shared_ptr<map<string, string>> extensions{};
  shared_ptr<long> joinTime{};
  shared_ptr<string> nick{};
  shared_ptr<long> role{};

  AddGroupMembersRequestRequestParamsInitMembers() {}

  explicit AddGroupMembersRequestRequestParamsInitMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (nick) {
      res["Nick"] = boost::any(*nick);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<long>(boost::any_cast<long>(m["JoinTime"]));
    }
    if (m.find("Nick") != m.end() && !m["Nick"].empty()) {
      nick = make_shared<string>(boost::any_cast<string>(m["Nick"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<long>(boost::any_cast<long>(m["Role"]));
    }
  }


  virtual ~AddGroupMembersRequestRequestParamsInitMembers() = default;
};
class AddGroupMembersRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<vector<AddGroupMembersRequestRequestParamsInitMembers>> initMembers{};
  shared_ptr<string> operatorAppUid{};

  AddGroupMembersRequestRequestParams() {}

  explicit AddGroupMembersRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (initMembers) {
      vector<boost::any> temp1;
      for(auto item1:*initMembers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InitMembers"] = boost::any(temp1);
    }
    if (operatorAppUid) {
      res["OperatorAppUid"] = boost::any(*operatorAppUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("InitMembers") != m.end() && !m["InitMembers"].empty()) {
      if (typeid(vector<boost::any>) == m["InitMembers"].type()) {
        vector<AddGroupMembersRequestRequestParamsInitMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InitMembers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddGroupMembersRequestRequestParamsInitMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        initMembers = make_shared<vector<AddGroupMembersRequestRequestParamsInitMembers>>(expect1);
      }
    }
    if (m.find("OperatorAppUid") != m.end() && !m["OperatorAppUid"].empty()) {
      operatorAppUid = make_shared<string>(boost::any_cast<string>(m["OperatorAppUid"]));
    }
  }


  virtual ~AddGroupMembersRequestRequestParams() = default;
};
class AddGroupMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<AddGroupMembersRequestRequestParams> requestParams{};

  AddGroupMembersRequest() {}

  explicit AddGroupMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        AddGroupMembersRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<AddGroupMembersRequestRequestParams>(model1);
      }
    }
  }


  virtual ~AddGroupMembersRequest() = default;
};
class AddGroupMembersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  AddGroupMembersShrinkRequest() {}

  explicit AddGroupMembersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~AddGroupMembersShrinkRequest() = default;
};
class AddGroupMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddGroupMembersResponseBody() {}

  explicit AddGroupMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~AddGroupMembersResponseBody() = default;
};
class AddGroupMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddGroupMembersResponseBody> body{};

  AddGroupMembersResponse() {}

  explicit AddGroupMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddGroupMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddGroupMembersResponseBody>(model1);
      }
    }
  }


  virtual ~AddGroupMembersResponse() = default;
};
class AddGroupSilenceBlacklistRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<vector<string>> members{};
  shared_ptr<string> operatorAppUid{};
  shared_ptr<long> silenceDuration{};

  AddGroupSilenceBlacklistRequestRequestParams() {}

  explicit AddGroupSilenceBlacklistRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (members) {
      res["Members"] = boost::any(*members);
    }
    if (operatorAppUid) {
      res["OperatorAppUid"] = boost::any(*operatorAppUid);
    }
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Members"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      members = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OperatorAppUid") != m.end() && !m["OperatorAppUid"].empty()) {
      operatorAppUid = make_shared<string>(boost::any_cast<string>(m["OperatorAppUid"]));
    }
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<long>(boost::any_cast<long>(m["SilenceDuration"]));
    }
  }


  virtual ~AddGroupSilenceBlacklistRequestRequestParams() = default;
};
class AddGroupSilenceBlacklistRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<AddGroupSilenceBlacklistRequestRequestParams> requestParams{};

  AddGroupSilenceBlacklistRequest() {}

  explicit AddGroupSilenceBlacklistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        AddGroupSilenceBlacklistRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<AddGroupSilenceBlacklistRequestRequestParams>(model1);
      }
    }
  }


  virtual ~AddGroupSilenceBlacklistRequest() = default;
};
class AddGroupSilenceBlacklistShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  AddGroupSilenceBlacklistShrinkRequest() {}

  explicit AddGroupSilenceBlacklistShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~AddGroupSilenceBlacklistShrinkRequest() = default;
};
class AddGroupSilenceBlacklistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddGroupSilenceBlacklistResponseBody() {}

  explicit AddGroupSilenceBlacklistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~AddGroupSilenceBlacklistResponseBody() = default;
};
class AddGroupSilenceBlacklistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddGroupSilenceBlacklistResponseBody> body{};

  AddGroupSilenceBlacklistResponse() {}

  explicit AddGroupSilenceBlacklistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddGroupSilenceBlacklistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddGroupSilenceBlacklistResponseBody>(model1);
      }
    }
  }


  virtual ~AddGroupSilenceBlacklistResponse() = default;
};
class AddGroupSilenceWhitelistRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<vector<string>> members{};
  shared_ptr<string> operatorAppUid{};

  AddGroupSilenceWhitelistRequestRequestParams() {}

  explicit AddGroupSilenceWhitelistRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (members) {
      res["Members"] = boost::any(*members);
    }
    if (operatorAppUid) {
      res["OperatorAppUid"] = boost::any(*operatorAppUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Members"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      members = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OperatorAppUid") != m.end() && !m["OperatorAppUid"].empty()) {
      operatorAppUid = make_shared<string>(boost::any_cast<string>(m["OperatorAppUid"]));
    }
  }


  virtual ~AddGroupSilenceWhitelistRequestRequestParams() = default;
};
class AddGroupSilenceWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<AddGroupSilenceWhitelistRequestRequestParams> requestParams{};

  AddGroupSilenceWhitelistRequest() {}

  explicit AddGroupSilenceWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        AddGroupSilenceWhitelistRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<AddGroupSilenceWhitelistRequestRequestParams>(model1);
      }
    }
  }


  virtual ~AddGroupSilenceWhitelistRequest() = default;
};
class AddGroupSilenceWhitelistShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  AddGroupSilenceWhitelistShrinkRequest() {}

  explicit AddGroupSilenceWhitelistShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~AddGroupSilenceWhitelistShrinkRequest() = default;
};
class AddGroupSilenceWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddGroupSilenceWhitelistResponseBody() {}

  explicit AddGroupSilenceWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~AddGroupSilenceWhitelistResponseBody() = default;
};
class AddGroupSilenceWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddGroupSilenceWhitelistResponseBody> body{};

  AddGroupSilenceWhitelistResponse() {}

  explicit AddGroupSilenceWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddGroupSilenceWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddGroupSilenceWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~AddGroupSilenceWhitelistResponse() = default;
};
class BindInterconnectionCidRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> aimAppCid{};
  shared_ptr<string> dingTalkCid{};

  BindInterconnectionCidRequestRequestParams() {}

  explicit BindInterconnectionCidRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aimAppCid) {
      res["AimAppCid"] = boost::any(*aimAppCid);
    }
    if (dingTalkCid) {
      res["DingTalkCid"] = boost::any(*dingTalkCid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AimAppCid") != m.end() && !m["AimAppCid"].empty()) {
      aimAppCid = make_shared<string>(boost::any_cast<string>(m["AimAppCid"]));
    }
    if (m.find("DingTalkCid") != m.end() && !m["DingTalkCid"].empty()) {
      dingTalkCid = make_shared<string>(boost::any_cast<string>(m["DingTalkCid"]));
    }
  }


  virtual ~BindInterconnectionCidRequestRequestParams() = default;
};
class BindInterconnectionCidRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<BindInterconnectionCidRequestRequestParams> requestParams{};

  BindInterconnectionCidRequest() {}

  explicit BindInterconnectionCidRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        BindInterconnectionCidRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<BindInterconnectionCidRequestRequestParams>(model1);
      }
    }
  }


  virtual ~BindInterconnectionCidRequest() = default;
};
class BindInterconnectionCidShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  BindInterconnectionCidShrinkRequest() {}

  explicit BindInterconnectionCidShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~BindInterconnectionCidShrinkRequest() = default;
};
class BindInterconnectionCidResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  BindInterconnectionCidResponseBody() {}

  explicit BindInterconnectionCidResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~BindInterconnectionCidResponseBody() = default;
};
class BindInterconnectionCidResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindInterconnectionCidResponseBody> body{};

  BindInterconnectionCidResponse() {}

  explicit BindInterconnectionCidResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindInterconnectionCidResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindInterconnectionCidResponseBody>(model1);
      }
    }
  }


  virtual ~BindInterconnectionCidResponse() = default;
};
class BindInterconnectionUidRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appUid{};
  shared_ptr<string> dingTalkUid{};

  BindInterconnectionUidRequestRequestParams() {}

  explicit BindInterconnectionUidRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (dingTalkUid) {
      res["DingTalkUid"] = boost::any(*dingTalkUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
    }
    if (m.find("DingTalkUid") != m.end() && !m["DingTalkUid"].empty()) {
      dingTalkUid = make_shared<string>(boost::any_cast<string>(m["DingTalkUid"]));
    }
  }


  virtual ~BindInterconnectionUidRequestRequestParams() = default;
};
class BindInterconnectionUidRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<BindInterconnectionUidRequestRequestParams> requestParams{};

  BindInterconnectionUidRequest() {}

  explicit BindInterconnectionUidRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        BindInterconnectionUidRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<BindInterconnectionUidRequestRequestParams>(model1);
      }
    }
  }


  virtual ~BindInterconnectionUidRequest() = default;
};
class BindInterconnectionUidShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  BindInterconnectionUidShrinkRequest() {}

  explicit BindInterconnectionUidShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~BindInterconnectionUidShrinkRequest() = default;
};
class BindInterconnectionUidResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  BindInterconnectionUidResponseBody() {}

  explicit BindInterconnectionUidResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~BindInterconnectionUidResponseBody() = default;
};
class BindInterconnectionUidResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindInterconnectionUidResponseBody> body{};

  BindInterconnectionUidResponse() {}

  explicit BindInterconnectionUidResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindInterconnectionUidResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindInterconnectionUidResponseBody>(model1);
      }
    }
  }


  virtual ~BindInterconnectionUidResponse() = default;
};
class CancelSilenceAllGroupMembersRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> operatorAppUid{};

  CancelSilenceAllGroupMembersRequestRequestParams() {}

  explicit CancelSilenceAllGroupMembersRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (operatorAppUid) {
      res["OperatorAppUid"] = boost::any(*operatorAppUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("OperatorAppUid") != m.end() && !m["OperatorAppUid"].empty()) {
      operatorAppUid = make_shared<string>(boost::any_cast<string>(m["OperatorAppUid"]));
    }
  }


  virtual ~CancelSilenceAllGroupMembersRequestRequestParams() = default;
};
class CancelSilenceAllGroupMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<CancelSilenceAllGroupMembersRequestRequestParams> requestParams{};

  CancelSilenceAllGroupMembersRequest() {}

  explicit CancelSilenceAllGroupMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        CancelSilenceAllGroupMembersRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<CancelSilenceAllGroupMembersRequestRequestParams>(model1);
      }
    }
  }


  virtual ~CancelSilenceAllGroupMembersRequest() = default;
};
class CancelSilenceAllGroupMembersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  CancelSilenceAllGroupMembersShrinkRequest() {}

  explicit CancelSilenceAllGroupMembersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~CancelSilenceAllGroupMembersShrinkRequest() = default;
};
class CancelSilenceAllGroupMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CancelSilenceAllGroupMembersResponseBody() {}

  explicit CancelSilenceAllGroupMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~CancelSilenceAllGroupMembersResponseBody() = default;
};
class CancelSilenceAllGroupMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelSilenceAllGroupMembersResponseBody> body{};

  CancelSilenceAllGroupMembersResponse() {}

  explicit CancelSilenceAllGroupMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelSilenceAllGroupMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelSilenceAllGroupMembersResponseBody>(model1);
      }
    }
  }


  virtual ~CancelSilenceAllGroupMembersResponse() = default;
};
class CreateGroupRequestRequestParamsInitMembers : public Darabonba::Model {
public:
  shared_ptr<string> appUid{};
  shared_ptr<map<string, string>> extensions{};
  shared_ptr<long> joinTime{};
  shared_ptr<string> nick{};
  shared_ptr<long> role{};

  CreateGroupRequestRequestParamsInitMembers() {}

  explicit CreateGroupRequestRequestParamsInitMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (nick) {
      res["Nick"] = boost::any(*nick);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<long>(boost::any_cast<long>(m["JoinTime"]));
    }
    if (m.find("Nick") != m.end() && !m["Nick"].empty()) {
      nick = make_shared<string>(boost::any_cast<string>(m["Nick"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<long>(boost::any_cast<long>(m["Role"]));
    }
  }


  virtual ~CreateGroupRequestRequestParamsInitMembers() = default;
};
class CreateGroupRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> creatorAppUid{};
  shared_ptr<string> entranceId{};
  shared_ptr<map<string, string>> extensions{};
  shared_ptr<string> iconMediaId{};
  shared_ptr<vector<CreateGroupRequestRequestParamsInitMembers>> initMembers{};
  shared_ptr<string> title{};
  shared_ptr<string> uuid{};

  CreateGroupRequestRequestParams() {}

  explicit CreateGroupRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorAppUid) {
      res["CreatorAppUid"] = boost::any(*creatorAppUid);
    }
    if (entranceId) {
      res["EntranceId"] = boost::any(*entranceId);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (iconMediaId) {
      res["IconMediaId"] = boost::any(*iconMediaId);
    }
    if (initMembers) {
      vector<boost::any> temp1;
      for(auto item1:*initMembers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InitMembers"] = boost::any(temp1);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatorAppUid") != m.end() && !m["CreatorAppUid"].empty()) {
      creatorAppUid = make_shared<string>(boost::any_cast<string>(m["CreatorAppUid"]));
    }
    if (m.find("EntranceId") != m.end() && !m["EntranceId"].empty()) {
      entranceId = make_shared<string>(boost::any_cast<string>(m["EntranceId"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("IconMediaId") != m.end() && !m["IconMediaId"].empty()) {
      iconMediaId = make_shared<string>(boost::any_cast<string>(m["IconMediaId"]));
    }
    if (m.find("InitMembers") != m.end() && !m["InitMembers"].empty()) {
      if (typeid(vector<boost::any>) == m["InitMembers"].type()) {
        vector<CreateGroupRequestRequestParamsInitMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InitMembers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateGroupRequestRequestParamsInitMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        initMembers = make_shared<vector<CreateGroupRequestRequestParamsInitMembers>>(expect1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~CreateGroupRequestRequestParams() = default;
};
class CreateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<CreateGroupRequestRequestParams> requestParams{};

  CreateGroupRequest() {}

  explicit CreateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        CreateGroupRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<CreateGroupRequestRequestParams>(model1);
      }
    }
  }


  virtual ~CreateGroupRequest() = default;
};
class CreateGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  CreateGroupShrinkRequest() {}

  explicit CreateGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~CreateGroupShrinkRequest() = default;
};
class CreateGroupResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};

  CreateGroupResponseBodyResult() {}

  explicit CreateGroupResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
  }


  virtual ~CreateGroupResponseBodyResult() = default;
};
class CreateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateGroupResponseBodyResult> result{};

  CreateGroupResponseBody() {}

  explicit CreateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateGroupResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateGroupResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateGroupResponseBody() = default;
};
class CreateGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGroupResponseBody> body{};

  CreateGroupResponse() {}

  explicit CreateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGroupResponse() = default;
};
class CreateRoomRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerNick{};
  shared_ptr<string> title{};

  CreateRoomRequestRequest() {}

  explicit CreateRoomRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (ownerId) {
      res["ownerId"] = boost::any(*ownerId);
    }
    if (ownerNick) {
      res["ownerNick"] = boost::any(*ownerNick);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("ownerId") != m.end() && !m["ownerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["ownerId"]));
    }
    if (m.find("ownerNick") != m.end() && !m["ownerNick"].empty()) {
      ownerNick = make_shared<string>(boost::any_cast<string>(m["ownerNick"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~CreateRoomRequestRequest() = default;
};
class CreateRoomRequest : public Darabonba::Model {
public:
  shared_ptr<CreateRoomRequestRequest> request{};

  CreateRoomRequest() {}

  explicit CreateRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        CreateRoomRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<CreateRoomRequestRequest>(model1);
      }
    }
  }


  virtual ~CreateRoomRequest() = default;
};
class CreateRoomResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> roomId{};

  CreateRoomResponseBodyResult() {}

  explicit CreateRoomResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roomId) {
      res["roomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("roomId") != m.end() && !m["roomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["roomId"]));
    }
  }


  virtual ~CreateRoomResponseBodyResult() = default;
};
class CreateRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<CreateRoomResponseBodyResult> result{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};

  CreateRoomResponseBody() {}

  explicit CreateRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateRoomResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateRoomResponseBodyResult>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
  }


  virtual ~CreateRoomResponseBody() = default;
};
class CreateRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRoomResponseBody> body{};

  CreateRoomResponse() {}

  explicit CreateRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRoomResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRoomResponse() = default;
};
class DeleteAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  DeleteAppRequest() {}

  explicit DeleteAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~DeleteAppRequest() = default;
};
class DeleteAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAppResponseBody() {}

  explicit DeleteAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteAppResponseBody() = default;
};
class DeleteAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppResponseBody> body{};

  DeleteAppResponse() {}

  explicit DeleteAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppResponse() = default;
};
class DestroyRoomRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> openId{};
  shared_ptr<string> roomId{};

  DestroyRoomRequestRequest() {}

  explicit DestroyRoomRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (openId) {
      res["openId"] = boost::any(*openId);
    }
    if (roomId) {
      res["roomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("openId") != m.end() && !m["openId"].empty()) {
      openId = make_shared<string>(boost::any_cast<string>(m["openId"]));
    }
    if (m.find("roomId") != m.end() && !m["roomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["roomId"]));
    }
  }


  virtual ~DestroyRoomRequestRequest() = default;
};
class DestroyRoomRequest : public Darabonba::Model {
public:
  shared_ptr<DestroyRoomRequestRequest> request{};

  DestroyRoomRequest() {}

  explicit DestroyRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        DestroyRoomRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<DestroyRoomRequestRequest>(model1);
      }
    }
  }


  virtual ~DestroyRoomRequest() = default;
};
class DestroyRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<bool> result{};

  DestroyRoomResponseBody() {}

  explicit DestroyRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~DestroyRoomResponseBody() = default;
};
class DestroyRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DestroyRoomResponseBody> body{};

  DestroyRoomResponse() {}

  explicit DestroyRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DestroyRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DestroyRoomResponseBody>(model1);
      }
    }
  }


  virtual ~DestroyRoomResponse() = default;
};
class DismissGroupRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> operatorAppUid{};

  DismissGroupRequestRequestParams() {}

  explicit DismissGroupRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (operatorAppUid) {
      res["OperatorAppUid"] = boost::any(*operatorAppUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("OperatorAppUid") != m.end() && !m["OperatorAppUid"].empty()) {
      operatorAppUid = make_shared<string>(boost::any_cast<string>(m["OperatorAppUid"]));
    }
  }


  virtual ~DismissGroupRequestRequestParams() = default;
};
class DismissGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<DismissGroupRequestRequestParams> requestParams{};

  DismissGroupRequest() {}

  explicit DismissGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        DismissGroupRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<DismissGroupRequestRequestParams>(model1);
      }
    }
  }


  virtual ~DismissGroupRequest() = default;
};
class DismissGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  DismissGroupShrinkRequest() {}

  explicit DismissGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~DismissGroupShrinkRequest() = default;
};
class DismissGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DismissGroupResponseBody() {}

  explicit DismissGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DismissGroupResponseBody() = default;
};
class DismissGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DismissGroupResponseBody> body{};

  DismissGroupResponse() {}

  explicit DismissGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DismissGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DismissGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DismissGroupResponse() = default;
};
class GetCommonConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  GetCommonConfigRequest() {}

  explicit GetCommonConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~GetCommonConfigRequest() = default;
};
class GetCommonConfigResponseBodyResultCommonConfigAppConfigs : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> platform{};

  GetCommonConfigResponseBodyResultCommonConfigAppConfigs() {}

  explicit GetCommonConfigResponseBodyResultCommonConfigAppConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
  }


  virtual ~GetCommonConfigResponseBodyResultCommonConfigAppConfigs() = default;
};
class GetCommonConfigResponseBodyResultCommonConfigLoginConfig : public Darabonba::Model {
public:
  shared_ptr<long> loginType{};

  GetCommonConfigResponseBodyResultCommonConfigLoginConfig() {}

  explicit GetCommonConfigResponseBodyResultCommonConfigLoginConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginType) {
      res["LoginType"] = boost::any(*loginType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginType") != m.end() && !m["LoginType"].empty()) {
      loginType = make_shared<long>(boost::any_cast<long>(m["LoginType"]));
    }
  }


  virtual ~GetCommonConfigResponseBodyResultCommonConfigLoginConfig() = default;
};
class GetCommonConfigResponseBodyResultCommonConfig : public Darabonba::Model {
public:
  shared_ptr<vector<GetCommonConfigResponseBodyResultCommonConfigAppConfigs>> appConfigs{};
  shared_ptr<GetCommonConfigResponseBodyResultCommonConfigLoginConfig> loginConfig{};

  GetCommonConfigResponseBodyResultCommonConfig() {}

  explicit GetCommonConfigResponseBodyResultCommonConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*appConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppConfigs"] = boost::any(temp1);
    }
    if (loginConfig) {
      res["LoginConfig"] = loginConfig ? boost::any(loginConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppConfigs") != m.end() && !m["AppConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["AppConfigs"].type()) {
        vector<GetCommonConfigResponseBodyResultCommonConfigAppConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCommonConfigResponseBodyResultCommonConfigAppConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appConfigs = make_shared<vector<GetCommonConfigResponseBodyResultCommonConfigAppConfigs>>(expect1);
      }
    }
    if (m.find("LoginConfig") != m.end() && !m["LoginConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoginConfig"].type()) {
        GetCommonConfigResponseBodyResultCommonConfigLoginConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoginConfig"]));
        loginConfig = make_shared<GetCommonConfigResponseBodyResultCommonConfigLoginConfig>(model1);
      }
    }
  }


  virtual ~GetCommonConfigResponseBodyResultCommonConfig() = default;
};
class GetCommonConfigResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<GetCommonConfigResponseBodyResultCommonConfig> commonConfig{};

  GetCommonConfigResponseBodyResult() {}

  explicit GetCommonConfigResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonConfig) {
      res["CommonConfig"] = commonConfig ? boost::any(commonConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommonConfig") != m.end() && !m["CommonConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommonConfig"].type()) {
        GetCommonConfigResponseBodyResultCommonConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommonConfig"]));
        commonConfig = make_shared<GetCommonConfigResponseBodyResultCommonConfig>(model1);
      }
    }
  }


  virtual ~GetCommonConfigResponseBodyResult() = default;
};
class GetCommonConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetCommonConfigResponseBodyResult> result{};
  shared_ptr<bool> success{};

  GetCommonConfigResponseBody() {}

  explicit GetCommonConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetCommonConfigResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetCommonConfigResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetCommonConfigResponseBody() = default;
};
class GetCommonConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCommonConfigResponseBody> body{};

  GetCommonConfigResponse() {}

  explicit GetCommonConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCommonConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCommonConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetCommonConfigResponse() = default;
};
class GetGroupByIdRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};

  GetGroupByIdRequestRequestParams() {}

  explicit GetGroupByIdRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
  }


  virtual ~GetGroupByIdRequestRequestParams() = default;
};
class GetGroupByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<GetGroupByIdRequestRequestParams> requestParams{};

  GetGroupByIdRequest() {}

  explicit GetGroupByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        GetGroupByIdRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<GetGroupByIdRequestRequestParams>(model1);
      }
    }
  }


  virtual ~GetGroupByIdRequest() = default;
};
class GetGroupByIdShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  GetGroupByIdShrinkRequest() {}

  explicit GetGroupByIdShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~GetGroupByIdShrinkRequest() = default;
};
class GetGroupByIdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<long> ceateTime{};
  shared_ptr<map<string, string>> extensions{};
  shared_ptr<string> iconMediaId{};
  shared_ptr<long> memberCount{};
  shared_ptr<long> memberLimit{};
  shared_ptr<string> ownerAppUid{};
  shared_ptr<string> title{};

  GetGroupByIdResponseBodyResult() {}

  explicit GetGroupByIdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (ceateTime) {
      res["CeateTime"] = boost::any(*ceateTime);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (iconMediaId) {
      res["IconMediaId"] = boost::any(*iconMediaId);
    }
    if (memberCount) {
      res["MemberCount"] = boost::any(*memberCount);
    }
    if (memberLimit) {
      res["MemberLimit"] = boost::any(*memberLimit);
    }
    if (ownerAppUid) {
      res["OwnerAppUid"] = boost::any(*ownerAppUid);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("CeateTime") != m.end() && !m["CeateTime"].empty()) {
      ceateTime = make_shared<long>(boost::any_cast<long>(m["CeateTime"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("IconMediaId") != m.end() && !m["IconMediaId"].empty()) {
      iconMediaId = make_shared<string>(boost::any_cast<string>(m["IconMediaId"]));
    }
    if (m.find("MemberCount") != m.end() && !m["MemberCount"].empty()) {
      memberCount = make_shared<long>(boost::any_cast<long>(m["MemberCount"]));
    }
    if (m.find("MemberLimit") != m.end() && !m["MemberLimit"].empty()) {
      memberLimit = make_shared<long>(boost::any_cast<long>(m["MemberLimit"]));
    }
    if (m.find("OwnerAppUid") != m.end() && !m["OwnerAppUid"].empty()) {
      ownerAppUid = make_shared<string>(boost::any_cast<string>(m["OwnerAppUid"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetGroupByIdResponseBodyResult() = default;
};
class GetGroupByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetGroupByIdResponseBodyResult> result{};

  GetGroupByIdResponseBody() {}

  explicit GetGroupByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetGroupByIdResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetGroupByIdResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetGroupByIdResponseBody() = default;
};
class GetGroupByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGroupByIdResponseBody> body{};

  GetGroupByIdResponse() {}

  explicit GetGroupByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGroupByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGroupByIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetGroupByIdResponse() = default;
};
class GetGroupMemberByIdsRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<vector<string>> appUids{};

  GetGroupMemberByIdsRequestRequestParams() {}

  explicit GetGroupMemberByIdsRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (appUids) {
      res["AppUids"] = boost::any(*appUids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("AppUids") != m.end() && !m["AppUids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppUids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppUids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appUids = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetGroupMemberByIdsRequestRequestParams() = default;
};
class GetGroupMemberByIdsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<GetGroupMemberByIdsRequestRequestParams> requestParams{};

  GetGroupMemberByIdsRequest() {}

  explicit GetGroupMemberByIdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        GetGroupMemberByIdsRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<GetGroupMemberByIdsRequestRequestParams>(model1);
      }
    }
  }


  virtual ~GetGroupMemberByIdsRequest() = default;
};
class GetGroupMemberByIdsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  GetGroupMemberByIdsShrinkRequest() {}

  explicit GetGroupMemberByIdsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~GetGroupMemberByIdsShrinkRequest() = default;
};
class GetGroupMemberByIdsResponseBodyResultMembers : public Darabonba::Model {
public:
  shared_ptr<string> appUid{};
  shared_ptr<map<string, string>> extensions{};
  shared_ptr<long> joinTime{};
  shared_ptr<string> nick{};
  shared_ptr<long> role{};

  GetGroupMemberByIdsResponseBodyResultMembers() {}

  explicit GetGroupMemberByIdsResponseBodyResultMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (nick) {
      res["Nick"] = boost::any(*nick);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<long>(boost::any_cast<long>(m["JoinTime"]));
    }
    if (m.find("Nick") != m.end() && !m["Nick"].empty()) {
      nick = make_shared<string>(boost::any_cast<string>(m["Nick"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<long>(boost::any_cast<long>(m["Role"]));
    }
  }


  virtual ~GetGroupMemberByIdsResponseBodyResultMembers() = default;
};
class GetGroupMemberByIdsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<GetGroupMemberByIdsResponseBodyResultMembers>> members{};

  GetGroupMemberByIdsResponseBodyResult() {}

  explicit GetGroupMemberByIdsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<GetGroupMemberByIdsResponseBodyResultMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGroupMemberByIdsResponseBodyResultMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<GetGroupMemberByIdsResponseBodyResultMembers>>(expect1);
      }
    }
  }


  virtual ~GetGroupMemberByIdsResponseBodyResult() = default;
};
class GetGroupMemberByIdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetGroupMemberByIdsResponseBodyResult> result{};

  GetGroupMemberByIdsResponseBody() {}

  explicit GetGroupMemberByIdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetGroupMemberByIdsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetGroupMemberByIdsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetGroupMemberByIdsResponseBody() = default;
};
class GetGroupMemberByIdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGroupMemberByIdsResponseBody> body{};

  GetGroupMemberByIdsResponse() {}

  explicit GetGroupMemberByIdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGroupMemberByIdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGroupMemberByIdsResponseBody>(model1);
      }
    }
  }


  virtual ~GetGroupMemberByIdsResponse() = default;
};
class GetIMConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  GetIMConfigRequest() {}

  explicit GetIMConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~GetIMConfigRequest() = default;
};
class GetIMConfigResponseBodyResultImConfigCallbackConfig : public Darabonba::Model {
public:
  shared_ptr<map<string, bool>> apis{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<map<string, bool>> events{};
  shared_ptr<string> signatureKey{};
  shared_ptr<string> signatureValue{};
  shared_ptr<map<string, bool>> spis{};

  GetIMConfigResponseBodyResultImConfigCallbackConfig() {}

  explicit GetIMConfigResponseBodyResultImConfigCallbackConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apis) {
      res["Apis"] = boost::any(*apis);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (events) {
      res["Events"] = boost::any(*events);
    }
    if (signatureKey) {
      res["SignatureKey"] = boost::any(*signatureKey);
    }
    if (signatureValue) {
      res["SignatureValue"] = boost::any(*signatureValue);
    }
    if (spis) {
      res["Spis"] = boost::any(*spis);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Apis") != m.end() && !m["Apis"].empty()) {
      map<string, bool> map1 = boost::any_cast<map<string, bool>>(m["Apis"]);
      map<string, bool> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      apis = make_shared<map<string, bool>>(toMap1);
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      map<string, bool> map1 = boost::any_cast<map<string, bool>>(m["Events"]);
      map<string, bool> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      events = make_shared<map<string, bool>>(toMap1);
    }
    if (m.find("SignatureKey") != m.end() && !m["SignatureKey"].empty()) {
      signatureKey = make_shared<string>(boost::any_cast<string>(m["SignatureKey"]));
    }
    if (m.find("SignatureValue") != m.end() && !m["SignatureValue"].empty()) {
      signatureValue = make_shared<string>(boost::any_cast<string>(m["SignatureValue"]));
    }
    if (m.find("Spis") != m.end() && !m["Spis"].empty()) {
      map<string, bool> map1 = boost::any_cast<map<string, bool>>(m["Spis"]);
      map<string, bool> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      spis = make_shared<map<string, bool>>(toMap1);
    }
  }


  virtual ~GetIMConfigResponseBodyResultImConfigCallbackConfig() = default;
};
class GetIMConfigResponseBodyResultImConfigMsgConfig : public Darabonba::Model {
public:
  shared_ptr<long> clientMsgRecallTimeIntervalMinute{};

  GetIMConfigResponseBodyResultImConfigMsgConfig() {}

  explicit GetIMConfigResponseBodyResultImConfigMsgConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientMsgRecallTimeIntervalMinute) {
      res["ClientMsgRecallTimeIntervalMinute"] = boost::any(*clientMsgRecallTimeIntervalMinute);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientMsgRecallTimeIntervalMinute") != m.end() && !m["ClientMsgRecallTimeIntervalMinute"].empty()) {
      clientMsgRecallTimeIntervalMinute = make_shared<long>(boost::any_cast<long>(m["ClientMsgRecallTimeIntervalMinute"]));
    }
  }


  virtual ~GetIMConfigResponseBodyResultImConfigMsgConfig() = default;
};
class GetIMConfigResponseBodyResultImConfig : public Darabonba::Model {
public:
  shared_ptr<GetIMConfigResponseBodyResultImConfigCallbackConfig> callbackConfig{};
  shared_ptr<GetIMConfigResponseBodyResultImConfigMsgConfig> msgConfig{};

  GetIMConfigResponseBodyResultImConfig() {}

  explicit GetIMConfigResponseBodyResultImConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackConfig) {
      res["CallbackConfig"] = callbackConfig ? boost::any(callbackConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msgConfig) {
      res["MsgConfig"] = msgConfig ? boost::any(msgConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackConfig") != m.end() && !m["CallbackConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallbackConfig"].type()) {
        GetIMConfigResponseBodyResultImConfigCallbackConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallbackConfig"]));
        callbackConfig = make_shared<GetIMConfigResponseBodyResultImConfigCallbackConfig>(model1);
      }
    }
    if (m.find("MsgConfig") != m.end() && !m["MsgConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MsgConfig"].type()) {
        GetIMConfigResponseBodyResultImConfigMsgConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MsgConfig"]));
        msgConfig = make_shared<GetIMConfigResponseBodyResultImConfigMsgConfig>(model1);
      }
    }
  }


  virtual ~GetIMConfigResponseBodyResultImConfig() = default;
};
class GetIMConfigResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<GetIMConfigResponseBodyResultImConfig> imConfig{};

  GetIMConfigResponseBodyResult() {}

  explicit GetIMConfigResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imConfig) {
      res["ImConfig"] = imConfig ? boost::any(imConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImConfig") != m.end() && !m["ImConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImConfig"].type()) {
        GetIMConfigResponseBodyResultImConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImConfig"]));
        imConfig = make_shared<GetIMConfigResponseBodyResultImConfig>(model1);
      }
    }
  }


  virtual ~GetIMConfigResponseBodyResult() = default;
};
class GetIMConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> messaage{};
  shared_ptr<string> requestId{};
  shared_ptr<GetIMConfigResponseBodyResult> result{};
  shared_ptr<bool> success{};

  GetIMConfigResponseBody() {}

  explicit GetIMConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (messaage) {
      res["Messaage"] = boost::any(*messaage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Messaage") != m.end() && !m["Messaage"].empty()) {
      messaage = make_shared<string>(boost::any_cast<string>(m["Messaage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetIMConfigResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetIMConfigResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetIMConfigResponseBody() = default;
};
class GetIMConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetIMConfigResponseBody> body{};

  GetIMConfigResponse() {}

  explicit GetIMConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetIMConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIMConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetIMConfigResponse() = default;
};
class GetLoginTokenRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> appUid{};
  shared_ptr<string> deviceId{};

  GetLoginTokenRequestRequestParams() {}

  explicit GetLoginTokenRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~GetLoginTokenRequestRequestParams() = default;
};
class GetLoginTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<GetLoginTokenRequestRequestParams> requestParams{};

  GetLoginTokenRequest() {}

  explicit GetLoginTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        GetLoginTokenRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<GetLoginTokenRequestRequestParams>(model1);
      }
    }
  }


  virtual ~GetLoginTokenRequest() = default;
};
class GetLoginTokenShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  GetLoginTokenShrinkRequest() {}

  explicit GetLoginTokenShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~GetLoginTokenShrinkRequest() = default;
};
class GetLoginTokenResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<long> accessTokenExpiredTime{};
  shared_ptr<string> refreshToken{};

  GetLoginTokenResponseBodyResult() {}

  explicit GetLoginTokenResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (accessTokenExpiredTime) {
      res["AccessTokenExpiredTime"] = boost::any(*accessTokenExpiredTime);
    }
    if (refreshToken) {
      res["RefreshToken"] = boost::any(*refreshToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AccessTokenExpiredTime") != m.end() && !m["AccessTokenExpiredTime"].empty()) {
      accessTokenExpiredTime = make_shared<long>(boost::any_cast<long>(m["AccessTokenExpiredTime"]));
    }
    if (m.find("RefreshToken") != m.end() && !m["RefreshToken"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["RefreshToken"]));
    }
  }


  virtual ~GetLoginTokenResponseBodyResult() = default;
};
class GetLoginTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetLoginTokenResponseBodyResult> result{};

  GetLoginTokenResponseBody() {}

  explicit GetLoginTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetLoginTokenResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetLoginTokenResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetLoginTokenResponseBody() = default;
};
class GetLoginTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLoginTokenResponseBody> body{};

  GetLoginTokenResponse() {}

  explicit GetLoginTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLoginTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLoginTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetLoginTokenResponse() = default;
};
class GetMediaUploadUrlRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> mimeType{};

  GetMediaUploadUrlRequestRequestParams() {}

  explicit GetMediaUploadUrlRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mimeType) {
      res["MimeType"] = boost::any(*mimeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MimeType") != m.end() && !m["MimeType"].empty()) {
      mimeType = make_shared<string>(boost::any_cast<string>(m["MimeType"]));
    }
  }


  virtual ~GetMediaUploadUrlRequestRequestParams() = default;
};
class GetMediaUploadUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<GetMediaUploadUrlRequestRequestParams> requestParams{};

  GetMediaUploadUrlRequest() {}

  explicit GetMediaUploadUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        GetMediaUploadUrlRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<GetMediaUploadUrlRequestRequestParams>(model1);
      }
    }
  }


  virtual ~GetMediaUploadUrlRequest() = default;
};
class GetMediaUploadUrlShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  GetMediaUploadUrlShrinkRequest() {}

  explicit GetMediaUploadUrlShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~GetMediaUploadUrlShrinkRequest() = default;
};
class GetMediaUploadUrlResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<string> uploadUrl{};

  GetMediaUploadUrlResponseBodyResult() {}

  explicit GetMediaUploadUrlResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (uploadUrl) {
      res["UploadUrl"] = boost::any(*uploadUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("UploadUrl") != m.end() && !m["UploadUrl"].empty()) {
      uploadUrl = make_shared<string>(boost::any_cast<string>(m["UploadUrl"]));
    }
  }


  virtual ~GetMediaUploadUrlResponseBodyResult() = default;
};
class GetMediaUploadUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetMediaUploadUrlResponseBodyResult> result{};

  GetMediaUploadUrlResponseBody() {}

  explicit GetMediaUploadUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetMediaUploadUrlResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetMediaUploadUrlResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetMediaUploadUrlResponseBody() = default;
};
class GetMediaUploadUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMediaUploadUrlResponseBody> body{};

  GetMediaUploadUrlResponse() {}

  explicit GetMediaUploadUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMediaUploadUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMediaUploadUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetMediaUploadUrlResponse() = default;
};
class GetMediaUrlRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<long> urlExpireTime{};

  GetMediaUrlRequestRequestParams() {}

  explicit GetMediaUrlRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (urlExpireTime) {
      res["UrlExpireTime"] = boost::any(*urlExpireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("UrlExpireTime") != m.end() && !m["UrlExpireTime"].empty()) {
      urlExpireTime = make_shared<long>(boost::any_cast<long>(m["UrlExpireTime"]));
    }
  }


  virtual ~GetMediaUrlRequestRequestParams() = default;
};
class GetMediaUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<GetMediaUrlRequestRequestParams> requestParams{};

  GetMediaUrlRequest() {}

  explicit GetMediaUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        GetMediaUrlRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<GetMediaUrlRequestRequestParams>(model1);
      }
    }
  }


  virtual ~GetMediaUrlRequest() = default;
};
class GetMediaUrlShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  GetMediaUrlShrinkRequest() {}

  explicit GetMediaUrlShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~GetMediaUrlShrinkRequest() = default;
};
class GetMediaUrlResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  GetMediaUrlResponseBodyResult() {}

  explicit GetMediaUrlResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetMediaUrlResponseBodyResult() = default;
};
class GetMediaUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetMediaUrlResponseBodyResult> result{};

  GetMediaUrlResponseBody() {}

  explicit GetMediaUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetMediaUrlResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetMediaUrlResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetMediaUrlResponseBody() = default;
};
class GetMediaUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMediaUrlResponseBody> body{};

  GetMediaUrlResponse() {}

  explicit GetMediaUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMediaUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMediaUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetMediaUrlResponse() = default;
};
class GetMessageByIdRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> msgId{};

  GetMessageByIdRequestRequestParams() {}

  explicit GetMessageByIdRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetMessageByIdRequestRequestParams() = default;
};
class GetMessageByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<GetMessageByIdRequestRequestParams> requestParams{};

  GetMessageByIdRequest() {}

  explicit GetMessageByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        GetMessageByIdRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<GetMessageByIdRequestRequestParams>(model1);
      }
    }
  }


  virtual ~GetMessageByIdRequest() = default;
};
class GetMessageByIdShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  GetMessageByIdShrinkRequest() {}

  explicit GetMessageByIdShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~GetMessageByIdShrinkRequest() = default;
};
class GetMessageByIdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> content{};
  shared_ptr<long> contentType{};
  shared_ptr<long> conversationType{};
  shared_ptr<long> createTime{};
  shared_ptr<map<string, string>> extensions{};
  shared_ptr<string> msgId{};
  shared_ptr<string> senderId{};

  GetMessageByIdResponseBodyResult() {}

  explicit GetMessageByIdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (conversationType) {
      res["ConversationType"] = boost::any(*conversationType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<long>(boost::any_cast<long>(m["ContentType"]));
    }
    if (m.find("ConversationType") != m.end() && !m["ConversationType"].empty()) {
      conversationType = make_shared<long>(boost::any_cast<long>(m["ConversationType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
  }


  virtual ~GetMessageByIdResponseBodyResult() = default;
};
class GetMessageByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetMessageByIdResponseBodyResult> result{};

  GetMessageByIdResponseBody() {}

  explicit GetMessageByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetMessageByIdResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetMessageByIdResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetMessageByIdResponseBody() = default;
};
class GetMessageByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMessageByIdResponseBody> body{};

  GetMessageByIdResponse() {}

  explicit GetMessageByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMessageByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMessageByIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetMessageByIdResponse() = default;
};
class GetRoomStatisticsRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> roomId{};

  GetRoomStatisticsRequestRequest() {}

  explicit GetRoomStatisticsRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~GetRoomStatisticsRequestRequest() = default;
};
class GetRoomStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<GetRoomStatisticsRequestRequest> request{};

  GetRoomStatisticsRequest() {}

  explicit GetRoomStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        GetRoomStatisticsRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<GetRoomStatisticsRequestRequest>(model1);
      }
    }
  }


  virtual ~GetRoomStatisticsRequest() = default;
};
class GetRoomStatisticsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> onlineCount{};
  shared_ptr<long> PV{};
  shared_ptr<long> UV{};

  GetRoomStatisticsResponseBodyResult() {}

  explicit GetRoomStatisticsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onlineCount) {
      res["OnlineCount"] = boost::any(*onlineCount);
    }
    if (PV) {
      res["PV"] = boost::any(*PV);
    }
    if (UV) {
      res["UV"] = boost::any(*UV);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnlineCount") != m.end() && !m["OnlineCount"].empty()) {
      onlineCount = make_shared<long>(boost::any_cast<long>(m["OnlineCount"]));
    }
    if (m.find("PV") != m.end() && !m["PV"].empty()) {
      PV = make_shared<long>(boost::any_cast<long>(m["PV"]));
    }
    if (m.find("UV") != m.end() && !m["UV"].empty()) {
      UV = make_shared<long>(boost::any_cast<long>(m["UV"]));
    }
  }


  virtual ~GetRoomStatisticsResponseBodyResult() = default;
};
class GetRoomStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<GetRoomStatisticsResponseBodyResult> result{};

  GetRoomStatisticsResponseBody() {}

  explicit GetRoomStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetRoomStatisticsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetRoomStatisticsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetRoomStatisticsResponseBody() = default;
};
class GetRoomStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRoomStatisticsResponseBody> body{};

  GetRoomStatisticsResponse() {}

  explicit GetRoomStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRoomStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRoomStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetRoomStatisticsResponse() = default;
};
class GetUserMuteSettingRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<vector<string>> appUids{};

  GetUserMuteSettingRequestRequestParams() {}

  explicit GetUserMuteSettingRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appUids) {
      res["AppUids"] = boost::any(*appUids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppUids") != m.end() && !m["AppUids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppUids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppUids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appUids = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetUserMuteSettingRequestRequestParams() = default;
};
class GetUserMuteSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<GetUserMuteSettingRequestRequestParams> requestParams{};

  GetUserMuteSettingRequest() {}

  explicit GetUserMuteSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        GetUserMuteSettingRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<GetUserMuteSettingRequestRequestParams>(model1);
      }
    }
  }


  virtual ~GetUserMuteSettingRequest() = default;
};
class GetUserMuteSettingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  GetUserMuteSettingShrinkRequest() {}

  explicit GetUserMuteSettingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~GetUserMuteSettingShrinkRequest() = default;
};
class GetUserMuteSettingResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<map<string, ResultUserMuteSettingsValue>> userMuteSettings{};

  GetUserMuteSettingResponseBodyResult() {}

  explicit GetUserMuteSettingResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userMuteSettings) {
      map<string, boost::any> temp1;
      for(auto item1:*userMuteSettings){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["UserMuteSettings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserMuteSettings") != m.end() && !m["UserMuteSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserMuteSettings"].type()) {
        map<string, ResultUserMuteSettingsValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["UserMuteSettings"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            ResultUserMuteSettingsValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        userMuteSettings = make_shared<map<string, ResultUserMuteSettingsValue>>(expect1);
      }
    }
  }


  virtual ~GetUserMuteSettingResponseBodyResult() = default;
};
class GetUserMuteSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetUserMuteSettingResponseBodyResult> result{};

  GetUserMuteSettingResponseBody() {}

  explicit GetUserMuteSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetUserMuteSettingResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetUserMuteSettingResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetUserMuteSettingResponseBody() = default;
};
class GetUserMuteSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserMuteSettingResponseBody> body{};

  GetUserMuteSettingResponse() {}

  explicit GetUserMuteSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserMuteSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserMuteSettingResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserMuteSettingResponse() = default;
};
class ImportGroupChatConversationRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<map<string, string>> extensions{};
  shared_ptr<string> iconMediaId{};
  shared_ptr<long> memberLimit{};
  shared_ptr<string> ownerAppUid{};
  shared_ptr<bool> silenceAll{};
  shared_ptr<string> title{};
  shared_ptr<string> uuid{};

  ImportGroupChatConversationRequestRequestParams() {}

  explicit ImportGroupChatConversationRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (iconMediaId) {
      res["IconMediaId"] = boost::any(*iconMediaId);
    }
    if (memberLimit) {
      res["MemberLimit"] = boost::any(*memberLimit);
    }
    if (ownerAppUid) {
      res["OwnerAppUid"] = boost::any(*ownerAppUid);
    }
    if (silenceAll) {
      res["SilenceAll"] = boost::any(*silenceAll);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("IconMediaId") != m.end() && !m["IconMediaId"].empty()) {
      iconMediaId = make_shared<string>(boost::any_cast<string>(m["IconMediaId"]));
    }
    if (m.find("MemberLimit") != m.end() && !m["MemberLimit"].empty()) {
      memberLimit = make_shared<long>(boost::any_cast<long>(m["MemberLimit"]));
    }
    if (m.find("OwnerAppUid") != m.end() && !m["OwnerAppUid"].empty()) {
      ownerAppUid = make_shared<string>(boost::any_cast<string>(m["OwnerAppUid"]));
    }
    if (m.find("SilenceAll") != m.end() && !m["SilenceAll"].empty()) {
      silenceAll = make_shared<bool>(boost::any_cast<bool>(m["SilenceAll"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ImportGroupChatConversationRequestRequestParams() = default;
};
class ImportGroupChatConversationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<ImportGroupChatConversationRequestRequestParams> requestParams{};

  ImportGroupChatConversationRequest() {}

  explicit ImportGroupChatConversationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        ImportGroupChatConversationRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<ImportGroupChatConversationRequestRequestParams>(model1);
      }
    }
  }


  virtual ~ImportGroupChatConversationRequest() = default;
};
class ImportGroupChatConversationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  ImportGroupChatConversationShrinkRequest() {}

  explicit ImportGroupChatConversationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~ImportGroupChatConversationShrinkRequest() = default;
};
class ImportGroupChatConversationResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};

  ImportGroupChatConversationResponseBodyResult() {}

  explicit ImportGroupChatConversationResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
  }


  virtual ~ImportGroupChatConversationResponseBodyResult() = default;
};
class ImportGroupChatConversationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ImportGroupChatConversationResponseBodyResult> result{};

  ImportGroupChatConversationResponseBody() {}

  explicit ImportGroupChatConversationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ImportGroupChatConversationResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ImportGroupChatConversationResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ImportGroupChatConversationResponseBody() = default;
};
class ImportGroupChatConversationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportGroupChatConversationResponseBody> body{};

  ImportGroupChatConversationResponse() {}

  explicit ImportGroupChatConversationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportGroupChatConversationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportGroupChatConversationResponseBody>(model1);
      }
    }
  }


  virtual ~ImportGroupChatConversationResponse() = default;
};
class ImportGroupChatMemberRequestRequestParamsGroupChatMembers : public Darabonba::Model {
public:
  shared_ptr<string> appUid{};
  shared_ptr<map<string, string>> extensions{};
  shared_ptr<long> joinTime{};
  shared_ptr<long> modifyTime{};
  shared_ptr<bool> mute{};
  shared_ptr<string> nick{};
  shared_ptr<long> redPoint{};
  shared_ptr<long> role{};
  shared_ptr<bool> top{};
  shared_ptr<bool> visible{};

  ImportGroupChatMemberRequestRequestParamsGroupChatMembers() {}

  explicit ImportGroupChatMemberRequestRequestParamsGroupChatMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (mute) {
      res["Mute"] = boost::any(*mute);
    }
    if (nick) {
      res["Nick"] = boost::any(*nick);
    }
    if (redPoint) {
      res["RedPoint"] = boost::any(*redPoint);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (visible) {
      res["Visible"] = boost::any(*visible);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<long>(boost::any_cast<long>(m["JoinTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Mute") != m.end() && !m["Mute"].empty()) {
      mute = make_shared<bool>(boost::any_cast<bool>(m["Mute"]));
    }
    if (m.find("Nick") != m.end() && !m["Nick"].empty()) {
      nick = make_shared<string>(boost::any_cast<string>(m["Nick"]));
    }
    if (m.find("RedPoint") != m.end() && !m["RedPoint"].empty()) {
      redPoint = make_shared<long>(boost::any_cast<long>(m["RedPoint"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<long>(boost::any_cast<long>(m["Role"]));
    }
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<bool>(boost::any_cast<bool>(m["Top"]));
    }
    if (m.find("Visible") != m.end() && !m["Visible"].empty()) {
      visible = make_shared<bool>(boost::any_cast<bool>(m["Visible"]));
    }
  }


  virtual ~ImportGroupChatMemberRequestRequestParamsGroupChatMembers() = default;
};
class ImportGroupChatMemberRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<vector<ImportGroupChatMemberRequestRequestParamsGroupChatMembers>> groupChatMembers{};

  ImportGroupChatMemberRequestRequestParams() {}

  explicit ImportGroupChatMemberRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (groupChatMembers) {
      vector<boost::any> temp1;
      for(auto item1:*groupChatMembers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupChatMembers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("GroupChatMembers") != m.end() && !m["GroupChatMembers"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupChatMembers"].type()) {
        vector<ImportGroupChatMemberRequestRequestParamsGroupChatMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupChatMembers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportGroupChatMemberRequestRequestParamsGroupChatMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupChatMembers = make_shared<vector<ImportGroupChatMemberRequestRequestParamsGroupChatMembers>>(expect1);
      }
    }
  }


  virtual ~ImportGroupChatMemberRequestRequestParams() = default;
};
class ImportGroupChatMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<ImportGroupChatMemberRequestRequestParams> requestParams{};

  ImportGroupChatMemberRequest() {}

  explicit ImportGroupChatMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        ImportGroupChatMemberRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<ImportGroupChatMemberRequestRequestParams>(model1);
      }
    }
  }


  virtual ~ImportGroupChatMemberRequest() = default;
};
class ImportGroupChatMemberShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  ImportGroupChatMemberShrinkRequest() {}

  explicit ImportGroupChatMemberShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~ImportGroupChatMemberShrinkRequest() = default;
};
class ImportGroupChatMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ImportGroupChatMemberResponseBody() {}

  explicit ImportGroupChatMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~ImportGroupChatMemberResponseBody() = default;
};
class ImportGroupChatMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportGroupChatMemberResponseBody> body{};

  ImportGroupChatMemberResponse() {}

  explicit ImportGroupChatMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportGroupChatMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportGroupChatMemberResponseBody>(model1);
      }
    }
  }


  virtual ~ImportGroupChatMemberResponse() = default;
};
class ImportMessageRequestRequestParamsMessages : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> content{};
  shared_ptr<long> contentType{};
  shared_ptr<long> conversationType{};
  shared_ptr<long> createTime{};
  shared_ptr<map<string, string>> extensions{};
  shared_ptr<vector<string>> receiverIds{};
  shared_ptr<string> senderId{};
  shared_ptr<string> uuid{};

  ImportMessageRequestRequestParamsMessages() {}

  explicit ImportMessageRequestRequestParamsMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (conversationType) {
      res["ConversationType"] = boost::any(*conversationType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (receiverIds) {
      res["ReceiverIds"] = boost::any(*receiverIds);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<long>(boost::any_cast<long>(m["ContentType"]));
    }
    if (m.find("ConversationType") != m.end() && !m["ConversationType"].empty()) {
      conversationType = make_shared<long>(boost::any_cast<long>(m["ConversationType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ReceiverIds") != m.end() && !m["ReceiverIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReceiverIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReceiverIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      receiverIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ImportMessageRequestRequestParamsMessages() = default;
};
class ImportMessageRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<vector<ImportMessageRequestRequestParamsMessages>> messages{};

  ImportMessageRequestRequestParams() {}

  explicit ImportMessageRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messages) {
      vector<boost::any> temp1;
      for(auto item1:*messages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Messages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Messages") != m.end() && !m["Messages"].empty()) {
      if (typeid(vector<boost::any>) == m["Messages"].type()) {
        vector<ImportMessageRequestRequestParamsMessages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Messages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportMessageRequestRequestParamsMessages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messages = make_shared<vector<ImportMessageRequestRequestParamsMessages>>(expect1);
      }
    }
  }


  virtual ~ImportMessageRequestRequestParams() = default;
};
class ImportMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<ImportMessageRequestRequestParams> requestParams{};

  ImportMessageRequest() {}

  explicit ImportMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        ImportMessageRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<ImportMessageRequestRequestParams>(model1);
      }
    }
  }


  virtual ~ImportMessageRequest() = default;
};
class ImportMessageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  ImportMessageShrinkRequest() {}

  explicit ImportMessageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~ImportMessageShrinkRequest() = default;
};
class ImportMessageResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<map<string, ResultImportMessageResultValue>> importMessageResult{};

  ImportMessageResponseBodyResult() {}

  explicit ImportMessageResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (importMessageResult) {
      map<string, boost::any> temp1;
      for(auto item1:*importMessageResult){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["ImportMessageResult"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImportMessageResult") != m.end() && !m["ImportMessageResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImportMessageResult"].type()) {
        map<string, ResultImportMessageResultValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["ImportMessageResult"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            ResultImportMessageResultValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        importMessageResult = make_shared<map<string, ResultImportMessageResultValue>>(expect1);
      }
    }
  }


  virtual ~ImportMessageResponseBodyResult() = default;
};
class ImportMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ImportMessageResponseBodyResult> result{};

  ImportMessageResponseBody() {}

  explicit ImportMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ImportMessageResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ImportMessageResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ImportMessageResponseBody() = default;
};
class ImportMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportMessageResponseBody> body{};

  ImportMessageResponse() {}

  explicit ImportMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportMessageResponseBody>(model1);
      }
    }
  }


  virtual ~ImportMessageResponse() = default;
};
class ImportSingleConversationRequestRequestParamsConversation : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<vector<string>> appUids{};
  shared_ptr<long> createTime{};
  shared_ptr<map<string, string>> extensions{};

  ImportSingleConversationRequestRequestParamsConversation() {}

  explicit ImportSingleConversationRequestRequestParamsConversation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (appUids) {
      res["AppUids"] = boost::any(*appUids);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("AppUids") != m.end() && !m["AppUids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppUids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppUids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appUids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~ImportSingleConversationRequestRequestParamsConversation() = default;
};
class ImportSingleConversationRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<ImportSingleConversationRequestRequestParamsConversation> conversation{};
  shared_ptr<map<string, RequestParamsUserConversationsValue>> userConversations{};

  ImportSingleConversationRequestRequestParams() {}

  explicit ImportSingleConversationRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversation) {
      res["Conversation"] = conversation ? boost::any(conversation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userConversations) {
      map<string, boost::any> temp1;
      for(auto item1:*userConversations){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["UserConversations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Conversation") != m.end() && !m["Conversation"].empty()) {
      if (typeid(map<string, boost::any>) == m["Conversation"].type()) {
        ImportSingleConversationRequestRequestParamsConversation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Conversation"]));
        conversation = make_shared<ImportSingleConversationRequestRequestParamsConversation>(model1);
      }
    }
    if (m.find("UserConversations") != m.end() && !m["UserConversations"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserConversations"].type()) {
        map<string, RequestParamsUserConversationsValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["UserConversations"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            RequestParamsUserConversationsValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        userConversations = make_shared<map<string, RequestParamsUserConversationsValue>>(expect1);
      }
    }
  }


  virtual ~ImportSingleConversationRequestRequestParams() = default;
};
class ImportSingleConversationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<ImportSingleConversationRequestRequestParams> requestParams{};

  ImportSingleConversationRequest() {}

  explicit ImportSingleConversationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        ImportSingleConversationRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<ImportSingleConversationRequestRequestParams>(model1);
      }
    }
  }


  virtual ~ImportSingleConversationRequest() = default;
};
class ImportSingleConversationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  ImportSingleConversationShrinkRequest() {}

  explicit ImportSingleConversationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~ImportSingleConversationShrinkRequest() = default;
};
class ImportSingleConversationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ImportSingleConversationResponseBody() {}

  explicit ImportSingleConversationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~ImportSingleConversationResponseBody() = default;
};
class ImportSingleConversationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportSingleConversationResponseBody> body{};

  ImportSingleConversationResponse() {}

  explicit ImportSingleConversationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportSingleConversationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportSingleConversationResponseBody>(model1);
      }
    }
  }


  virtual ~ImportSingleConversationResponse() = default;
};
class InitTenantRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};

  InitTenantRequestRequest() {}

  explicit InitTenantRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
  }


  virtual ~InitTenantRequestRequest() = default;
};
class InitTenantRequest : public Darabonba::Model {
public:
  shared_ptr<InitTenantRequestRequest> request{};

  InitTenantRequest() {}

  explicit InitTenantRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        InitTenantRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<InitTenantRequestRequest>(model1);
      }
    }
  }


  virtual ~InitTenantRequest() = default;
};
class InitTenantResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<bool> result{};

  InitTenantResponseBody() {}

  explicit InitTenantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~InitTenantResponseBody() = default;
};
class InitTenantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitTenantResponseBody> body{};

  InitTenantResponse() {}

  explicit InitTenantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitTenantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitTenantResponseBody>(model1);
      }
    }
  }


  virtual ~InitTenantResponse() = default;
};
class KickOffRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<vector<string>> appKeys{};
  shared_ptr<string> appUid{};
  shared_ptr<string> information{};

  KickOffRequestRequestParams() {}

  explicit KickOffRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKeys) {
      res["AppKeys"] = boost::any(*appKeys);
    }
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (information) {
      res["Information"] = boost::any(*information);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKeys") != m.end() && !m["AppKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
    }
    if (m.find("Information") != m.end() && !m["Information"].empty()) {
      information = make_shared<string>(boost::any_cast<string>(m["Information"]));
    }
  }


  virtual ~KickOffRequestRequestParams() = default;
};
class KickOffRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<KickOffRequestRequestParams> requestParams{};

  KickOffRequest() {}

  explicit KickOffRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        KickOffRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<KickOffRequestRequestParams>(model1);
      }
    }
  }


  virtual ~KickOffRequest() = default;
};
class KickOffShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  KickOffShrinkRequest() {}

  explicit KickOffShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~KickOffShrinkRequest() = default;
};
class KickOffResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  KickOffResponseBody() {}

  explicit KickOffResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~KickOffResponseBody() = default;
};
class KickOffResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<KickOffResponseBody> body{};

  KickOffResponse() {}

  explicit KickOffResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        KickOffResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<KickOffResponseBody>(model1);
      }
    }
  }


  virtual ~KickOffResponse() = default;
};
class ListAppInfosRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> type{};

  ListAppInfosRequestRequestParams() {}

  explicit ListAppInfosRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListAppInfosRequestRequestParams() = default;
};
class ListAppInfosRequest : public Darabonba::Model {
public:
  shared_ptr<ListAppInfosRequestRequestParams> requestParams{};

  ListAppInfosRequest() {}

  explicit ListAppInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        ListAppInfosRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<ListAppInfosRequestRequestParams>(model1);
      }
    }
  }


  virtual ~ListAppInfosRequest() = default;
};
class ListAppInfosShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestParamsShrink{};

  ListAppInfosShrinkRequest() {}

  explicit ListAppInfosShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~ListAppInfosShrinkRequest() = default;
};
class ListAppInfosResponseBodyResultAppInfos : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<long> appStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> prodVersion{};

  ListAppInfosResponseBodyResultAppInfos() {}

  explicit ListAppInfosResponseBodyResultAppInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (prodVersion) {
      res["ProdVersion"] = boost::any(*prodVersion);
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
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<long>(boost::any_cast<long>(m["AppStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ProdVersion") != m.end() && !m["ProdVersion"].empty()) {
      prodVersion = make_shared<string>(boost::any_cast<string>(m["ProdVersion"]));
    }
  }


  virtual ~ListAppInfosResponseBodyResultAppInfos() = default;
};
class ListAppInfosResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppInfosResponseBodyResultAppInfos>> appInfos{};
  shared_ptr<long> totalCount{};

  ListAppInfosResponseBodyResult() {}

  explicit ListAppInfosResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInfos) {
      vector<boost::any> temp1;
      for(auto item1:*appInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppInfos"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInfos") != m.end() && !m["AppInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["AppInfos"].type()) {
        vector<ListAppInfosResponseBodyResultAppInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppInfosResponseBodyResultAppInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appInfos = make_shared<vector<ListAppInfosResponseBodyResultAppInfos>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAppInfosResponseBodyResult() = default;
};
class ListAppInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListAppInfosResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ListAppInfosResponseBody() {}

  explicit ListAppInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListAppInfosResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListAppInfosResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAppInfosResponseBody() = default;
};
class ListAppInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppInfosResponseBody> body{};

  ListAppInfosResponse() {}

  explicit ListAppInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppInfosResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppInfosResponse() = default;
};
class ListCallbackApiIdsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<map<string, bool>> events{};
  shared_ptr<map<string, bool>> spis{};

  ListCallbackApiIdsResponseBodyResult() {}

  explicit ListCallbackApiIdsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (events) {
      res["Events"] = boost::any(*events);
    }
    if (spis) {
      res["Spis"] = boost::any(*spis);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      map<string, bool> map1 = boost::any_cast<map<string, bool>>(m["Events"]);
      map<string, bool> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      events = make_shared<map<string, bool>>(toMap1);
    }
    if (m.find("Spis") != m.end() && !m["Spis"].empty()) {
      map<string, bool> map1 = boost::any_cast<map<string, bool>>(m["Spis"]);
      map<string, bool> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      spis = make_shared<map<string, bool>>(toMap1);
    }
  }


  virtual ~ListCallbackApiIdsResponseBodyResult() = default;
};
class ListCallbackApiIdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListCallbackApiIdsResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ListCallbackApiIdsResponseBody() {}

  explicit ListCallbackApiIdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListCallbackApiIdsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListCallbackApiIdsResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListCallbackApiIdsResponseBody() = default;
};
class ListCallbackApiIdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCallbackApiIdsResponseBody> body{};

  ListCallbackApiIdsResponse() {}

  explicit ListCallbackApiIdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCallbackApiIdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCallbackApiIdsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCallbackApiIdsResponse() = default;
};
class ListDetailReportStatisticsRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> reportStatisticsType{};
  shared_ptr<string> startTime{};

  ListDetailReportStatisticsRequestRequestParams() {}

  explicit ListDetailReportStatisticsRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (reportStatisticsType) {
      res["ReportStatisticsType"] = boost::any(*reportStatisticsType);
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
    if (m.find("ReportStatisticsType") != m.end() && !m["ReportStatisticsType"].empty()) {
      reportStatisticsType = make_shared<string>(boost::any_cast<string>(m["ReportStatisticsType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListDetailReportStatisticsRequestRequestParams() = default;
};
class ListDetailReportStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<ListDetailReportStatisticsRequestRequestParams> requestParams{};

  ListDetailReportStatisticsRequest() {}

  explicit ListDetailReportStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        ListDetailReportStatisticsRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<ListDetailReportStatisticsRequestRequestParams>(model1);
      }
    }
  }


  virtual ~ListDetailReportStatisticsRequest() = default;
};
class ListDetailReportStatisticsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  ListDetailReportStatisticsShrinkRequest() {}

  explicit ListDetailReportStatisticsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~ListDetailReportStatisticsShrinkRequest() = default;
};
class ListDetailReportStatisticsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> data{};

  ListDetailReportStatisticsResponseBodyResult() {}

  explicit ListDetailReportStatisticsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ListDetailReportStatisticsResponseBodyResult() = default;
};
class ListDetailReportStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListDetailReportStatisticsResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ListDetailReportStatisticsResponseBody() {}

  explicit ListDetailReportStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListDetailReportStatisticsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListDetailReportStatisticsResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListDetailReportStatisticsResponseBody() = default;
};
class ListDetailReportStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDetailReportStatisticsResponseBody> body{};

  ListDetailReportStatisticsResponse() {}

  explicit ListDetailReportStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDetailReportStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDetailReportStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDetailReportStatisticsResponse() = default;
};
class ListGroupAllMembersRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};

  ListGroupAllMembersRequestRequestParams() {}

  explicit ListGroupAllMembersRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
  }


  virtual ~ListGroupAllMembersRequestRequestParams() = default;
};
class ListGroupAllMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<ListGroupAllMembersRequestRequestParams> requestParams{};

  ListGroupAllMembersRequest() {}

  explicit ListGroupAllMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        ListGroupAllMembersRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<ListGroupAllMembersRequestRequestParams>(model1);
      }
    }
  }


  virtual ~ListGroupAllMembersRequest() = default;
};
class ListGroupAllMembersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  ListGroupAllMembersShrinkRequest() {}

  explicit ListGroupAllMembersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~ListGroupAllMembersShrinkRequest() = default;
};
class ListGroupAllMembersResponseBodyResultMembers : public Darabonba::Model {
public:
  shared_ptr<string> appUid{};
  shared_ptr<map<string, string>> extensions{};
  shared_ptr<long> joinTime{};
  shared_ptr<string> nick{};
  shared_ptr<long> role{};

  ListGroupAllMembersResponseBodyResultMembers() {}

  explicit ListGroupAllMembersResponseBodyResultMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (nick) {
      res["Nick"] = boost::any(*nick);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<long>(boost::any_cast<long>(m["JoinTime"]));
    }
    if (m.find("Nick") != m.end() && !m["Nick"].empty()) {
      nick = make_shared<string>(boost::any_cast<string>(m["Nick"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<long>(boost::any_cast<long>(m["Role"]));
    }
  }


  virtual ~ListGroupAllMembersResponseBodyResultMembers() = default;
};
class ListGroupAllMembersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListGroupAllMembersResponseBodyResultMembers>> members{};

  ListGroupAllMembersResponseBodyResult() {}

  explicit ListGroupAllMembersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<ListGroupAllMembersResponseBodyResultMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupAllMembersResponseBodyResultMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<ListGroupAllMembersResponseBodyResultMembers>>(expect1);
      }
    }
  }


  virtual ~ListGroupAllMembersResponseBodyResult() = default;
};
class ListGroupAllMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListGroupAllMembersResponseBodyResult> result{};

  ListGroupAllMembersResponseBody() {}

  explicit ListGroupAllMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListGroupAllMembersResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListGroupAllMembersResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListGroupAllMembersResponseBody() = default;
};
class ListGroupAllMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGroupAllMembersResponseBody> body{};

  ListGroupAllMembersResponse() {}

  explicit ListGroupAllMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupAllMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupAllMembersResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupAllMembersResponse() = default;
};
class ListGroupSilenceMembersRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> operatorAppUid{};

  ListGroupSilenceMembersRequestRequestParams() {}

  explicit ListGroupSilenceMembersRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (operatorAppUid) {
      res["OperatorAppUid"] = boost::any(*operatorAppUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("OperatorAppUid") != m.end() && !m["OperatorAppUid"].empty()) {
      operatorAppUid = make_shared<string>(boost::any_cast<string>(m["OperatorAppUid"]));
    }
  }


  virtual ~ListGroupSilenceMembersRequestRequestParams() = default;
};
class ListGroupSilenceMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<ListGroupSilenceMembersRequestRequestParams> requestParams{};

  ListGroupSilenceMembersRequest() {}

  explicit ListGroupSilenceMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        ListGroupSilenceMembersRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<ListGroupSilenceMembersRequestRequestParams>(model1);
      }
    }
  }


  virtual ~ListGroupSilenceMembersRequest() = default;
};
class ListGroupSilenceMembersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  ListGroupSilenceMembersShrinkRequest() {}

  explicit ListGroupSilenceMembersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~ListGroupSilenceMembersShrinkRequest() = default;
};
class ListGroupSilenceMembersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<map<string, long>> blacklist{};
  shared_ptr<vector<string>> whitelist{};

  ListGroupSilenceMembersResponseBodyResult() {}

  explicit ListGroupSilenceMembersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (blacklist) {
      res["Blacklist"] = boost::any(*blacklist);
    }
    if (whitelist) {
      res["Whitelist"] = boost::any(*whitelist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("Blacklist") != m.end() && !m["Blacklist"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["Blacklist"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      blacklist = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("Whitelist") != m.end() && !m["Whitelist"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Whitelist"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Whitelist"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whitelist = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListGroupSilenceMembersResponseBodyResult() = default;
};
class ListGroupSilenceMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListGroupSilenceMembersResponseBodyResult> result{};

  ListGroupSilenceMembersResponseBody() {}

  explicit ListGroupSilenceMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListGroupSilenceMembersResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListGroupSilenceMembersResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListGroupSilenceMembersResponseBody() = default;
};
class ListGroupSilenceMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGroupSilenceMembersResponseBody> body{};

  ListGroupSilenceMembersResponse() {}

  explicit ListGroupSilenceMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupSilenceMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupSilenceMembersResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupSilenceMembersResponse() = default;
};
class ListRoomMessagesRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> roomId{};
  shared_ptr<long> subType{};

  ListRoomMessagesRequestRequest() {}

  explicit ListRoomMessagesRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<long>(boost::any_cast<long>(m["SubType"]));
    }
  }


  virtual ~ListRoomMessagesRequestRequest() = default;
};
class ListRoomMessagesRequest : public Darabonba::Model {
public:
  shared_ptr<ListRoomMessagesRequestRequest> request{};

  ListRoomMessagesRequest() {}

  explicit ListRoomMessagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        ListRoomMessagesRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<ListRoomMessagesRequestRequest>(model1);
      }
    }
  }


  virtual ~ListRoomMessagesRequest() = default;
};
class ListRoomMessagesResponseBodyResultRoomMessageList : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> messageId{};
  shared_ptr<string> roomId{};
  shared_ptr<long> sendTimeMillis{};
  shared_ptr<string> senderId{};
  shared_ptr<long> subType{};

  ListRoomMessagesResponseBodyResultRoomMessageList() {}

  explicit ListRoomMessagesResponseBodyResultRoomMessageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (sendTimeMillis) {
      res["SendTimeMillis"] = boost::any(*sendTimeMillis);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("SendTimeMillis") != m.end() && !m["SendTimeMillis"].empty()) {
      sendTimeMillis = make_shared<long>(boost::any_cast<long>(m["SendTimeMillis"]));
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<long>(boost::any_cast<long>(m["SubType"]));
    }
  }


  virtual ~ListRoomMessagesResponseBodyResultRoomMessageList() = default;
};
class ListRoomMessagesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> hasMore{};
  shared_ptr<vector<ListRoomMessagesResponseBodyResultRoomMessageList>> roomMessageList{};
  shared_ptr<long> totalCount{};

  ListRoomMessagesResponseBodyResult() {}

  explicit ListRoomMessagesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (roomMessageList) {
      vector<boost::any> temp1;
      for(auto item1:*roomMessageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoomMessageList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("RoomMessageList") != m.end() && !m["RoomMessageList"].empty()) {
      if (typeid(vector<boost::any>) == m["RoomMessageList"].type()) {
        vector<ListRoomMessagesResponseBodyResultRoomMessageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoomMessageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRoomMessagesResponseBodyResultRoomMessageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roomMessageList = make_shared<vector<ListRoomMessagesResponseBodyResultRoomMessageList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListRoomMessagesResponseBodyResult() = default;
};
class ListRoomMessagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<ListRoomMessagesResponseBodyResult> result{};

  ListRoomMessagesResponseBody() {}

  explicit ListRoomMessagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListRoomMessagesResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListRoomMessagesResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListRoomMessagesResponseBody() = default;
};
class ListRoomMessagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRoomMessagesResponseBody> body{};

  ListRoomMessagesResponse() {}

  explicit ListRoomMessagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRoomMessagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRoomMessagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRoomMessagesResponse() = default;
};
class ListRoomUsersRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> roomId{};

  ListRoomUsersRequestRequest() {}

  explicit ListRoomUsersRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~ListRoomUsersRequestRequest() = default;
};
class ListRoomUsersRequest : public Darabonba::Model {
public:
  shared_ptr<ListRoomUsersRequestRequest> request{};

  ListRoomUsersRequest() {}

  explicit ListRoomUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        ListRoomUsersRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<ListRoomUsersRequestRequest>(model1);
      }
    }
  }


  virtual ~ListRoomUsersRequest() = default;
};
class ListRoomUsersResponseBodyResultRoomUserVOList : public Darabonba::Model {
public:
  shared_ptr<string> nick{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  ListRoomUsersResponseBodyResultRoomUserVOList() {}

  explicit ListRoomUsersResponseBodyResultRoomUserVOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nick) {
      res["Nick"] = boost::any(*nick);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nick") != m.end() && !m["Nick"].empty()) {
      nick = make_shared<string>(boost::any_cast<string>(m["Nick"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListRoomUsersResponseBodyResultRoomUserVOList() = default;
};
class ListRoomUsersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> hasMore{};
  shared_ptr<vector<ListRoomUsersResponseBodyResultRoomUserVOList>> roomUserVOList{};
  shared_ptr<long> totalCount{};

  ListRoomUsersResponseBodyResult() {}

  explicit ListRoomUsersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (roomUserVOList) {
      vector<boost::any> temp1;
      for(auto item1:*roomUserVOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoomUserVOList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("RoomUserVOList") != m.end() && !m["RoomUserVOList"].empty()) {
      if (typeid(vector<boost::any>) == m["RoomUserVOList"].type()) {
        vector<ListRoomUsersResponseBodyResultRoomUserVOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoomUserVOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRoomUsersResponseBodyResultRoomUserVOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roomUserVOList = make_shared<vector<ListRoomUsersResponseBodyResultRoomUserVOList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListRoomUsersResponseBodyResult() = default;
};
class ListRoomUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<ListRoomUsersResponseBodyResult> result{};

  ListRoomUsersResponseBody() {}

  explicit ListRoomUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListRoomUsersResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListRoomUsersResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListRoomUsersResponseBody() = default;
};
class ListRoomUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRoomUsersResponseBody> body{};

  ListRoomUsersResponse() {}

  explicit ListRoomUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRoomUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRoomUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListRoomUsersResponse() = default;
};
class MuteUsersRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<vector<string>> appUids{};
  shared_ptr<bool> mute{};
  shared_ptr<long> muteDuration{};

  MuteUsersRequestRequestParams() {}

  explicit MuteUsersRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appUids) {
      res["AppUids"] = boost::any(*appUids);
    }
    if (mute) {
      res["Mute"] = boost::any(*mute);
    }
    if (muteDuration) {
      res["MuteDuration"] = boost::any(*muteDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppUids") != m.end() && !m["AppUids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppUids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppUids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appUids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Mute") != m.end() && !m["Mute"].empty()) {
      mute = make_shared<bool>(boost::any_cast<bool>(m["Mute"]));
    }
    if (m.find("MuteDuration") != m.end() && !m["MuteDuration"].empty()) {
      muteDuration = make_shared<long>(boost::any_cast<long>(m["MuteDuration"]));
    }
  }


  virtual ~MuteUsersRequestRequestParams() = default;
};
class MuteUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<MuteUsersRequestRequestParams> requestParams{};

  MuteUsersRequest() {}

  explicit MuteUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        MuteUsersRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<MuteUsersRequestRequestParams>(model1);
      }
    }
  }


  virtual ~MuteUsersRequest() = default;
};
class MuteUsersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  MuteUsersShrinkRequest() {}

  explicit MuteUsersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~MuteUsersShrinkRequest() = default;
};
class MuteUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  MuteUsersResponseBody() {}

  explicit MuteUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~MuteUsersResponseBody() = default;
};
class MuteUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MuteUsersResponseBody> body{};

  MuteUsersResponse() {}

  explicit MuteUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MuteUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MuteUsersResponseBody>(model1);
      }
    }
  }


  virtual ~MuteUsersResponse() = default;
};
class QueryInterconnectionCidMappingRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> srcCid{};
  shared_ptr<long> type{};

  QueryInterconnectionCidMappingRequestRequestParams() {}

  explicit QueryInterconnectionCidMappingRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (srcCid) {
      res["SrcCid"] = boost::any(*srcCid);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SrcCid") != m.end() && !m["SrcCid"].empty()) {
      srcCid = make_shared<string>(boost::any_cast<string>(m["SrcCid"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~QueryInterconnectionCidMappingRequestRequestParams() = default;
};
class QueryInterconnectionCidMappingRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<QueryInterconnectionCidMappingRequestRequestParams> requestParams{};

  QueryInterconnectionCidMappingRequest() {}

  explicit QueryInterconnectionCidMappingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        QueryInterconnectionCidMappingRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<QueryInterconnectionCidMappingRequestRequestParams>(model1);
      }
    }
  }


  virtual ~QueryInterconnectionCidMappingRequest() = default;
};
class QueryInterconnectionCidMappingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  QueryInterconnectionCidMappingShrinkRequest() {}

  explicit QueryInterconnectionCidMappingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~QueryInterconnectionCidMappingShrinkRequest() = default;
};
class QueryInterconnectionCidMappingResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> dstCid{};

  QueryInterconnectionCidMappingResponseBodyResult() {}

  explicit QueryInterconnectionCidMappingResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstCid) {
      res["DstCid"] = boost::any(*dstCid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DstCid") != m.end() && !m["DstCid"].empty()) {
      dstCid = make_shared<string>(boost::any_cast<string>(m["DstCid"]));
    }
  }


  virtual ~QueryInterconnectionCidMappingResponseBodyResult() = default;
};
class QueryInterconnectionCidMappingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<QueryInterconnectionCidMappingResponseBodyResult> result{};

  QueryInterconnectionCidMappingResponseBody() {}

  explicit QueryInterconnectionCidMappingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryInterconnectionCidMappingResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryInterconnectionCidMappingResponseBodyResult>(model1);
      }
    }
  }


  virtual ~QueryInterconnectionCidMappingResponseBody() = default;
};
class QueryInterconnectionCidMappingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryInterconnectionCidMappingResponseBody> body{};

  QueryInterconnectionCidMappingResponse() {}

  explicit QueryInterconnectionCidMappingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryInterconnectionCidMappingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryInterconnectionCidMappingResponseBody>(model1);
      }
    }
  }


  virtual ~QueryInterconnectionCidMappingResponse() = default;
};
class RecallMessageRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> appUid{};
  shared_ptr<map<string, string>> extensions{};
  shared_ptr<string> msgId{};
  shared_ptr<long> operatorType{};
  shared_ptr<long> type{};

  RecallMessageRequestRequestParams() {}

  explicit RecallMessageRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (operatorType) {
      res["OperatorType"] = boost::any(*operatorType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("OperatorType") != m.end() && !m["OperatorType"].empty()) {
      operatorType = make_shared<long>(boost::any_cast<long>(m["OperatorType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~RecallMessageRequestRequestParams() = default;
};
class RecallMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<RecallMessageRequestRequestParams> requestParams{};

  RecallMessageRequest() {}

  explicit RecallMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        RecallMessageRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<RecallMessageRequestRequestParams>(model1);
      }
    }
  }


  virtual ~RecallMessageRequest() = default;
};
class RecallMessageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  RecallMessageShrinkRequest() {}

  explicit RecallMessageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~RecallMessageShrinkRequest() = default;
};
class RecallMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecallMessageResponseBody() {}

  explicit RecallMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~RecallMessageResponseBody() = default;
};
class RecallMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecallMessageResponseBody> body{};

  RecallMessageResponse() {}

  explicit RecallMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecallMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecallMessageResponseBody>(model1);
      }
    }
  }


  virtual ~RecallMessageResponse() = default;
};
class RemoveGroupExtensionByKeysRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<vector<string>> keys{};

  RemoveGroupExtensionByKeysRequestRequestParams() {}

  explicit RemoveGroupExtensionByKeysRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
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


  virtual ~RemoveGroupExtensionByKeysRequestRequestParams() = default;
};
class RemoveGroupExtensionByKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<RemoveGroupExtensionByKeysRequestRequestParams> requestParams{};

  RemoveGroupExtensionByKeysRequest() {}

  explicit RemoveGroupExtensionByKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        RemoveGroupExtensionByKeysRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<RemoveGroupExtensionByKeysRequestRequestParams>(model1);
      }
    }
  }


  virtual ~RemoveGroupExtensionByKeysRequest() = default;
};
class RemoveGroupExtensionByKeysShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  RemoveGroupExtensionByKeysShrinkRequest() {}

  explicit RemoveGroupExtensionByKeysShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~RemoveGroupExtensionByKeysShrinkRequest() = default;
};
class RemoveGroupExtensionByKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RemoveGroupExtensionByKeysResponseBody() {}

  explicit RemoveGroupExtensionByKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~RemoveGroupExtensionByKeysResponseBody() = default;
};
class RemoveGroupExtensionByKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveGroupExtensionByKeysResponseBody> body{};

  RemoveGroupExtensionByKeysResponse() {}

  explicit RemoveGroupExtensionByKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveGroupExtensionByKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveGroupExtensionByKeysResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveGroupExtensionByKeysResponse() = default;
};
class RemoveGroupMemberExtensionByKeysRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> appUid{};
  shared_ptr<vector<string>> keys{};

  RemoveGroupMemberExtensionByKeysRequestRequestParams() {}

  explicit RemoveGroupMemberExtensionByKeysRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
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


  virtual ~RemoveGroupMemberExtensionByKeysRequestRequestParams() = default;
};
class RemoveGroupMemberExtensionByKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<RemoveGroupMemberExtensionByKeysRequestRequestParams> requestParams{};

  RemoveGroupMemberExtensionByKeysRequest() {}

  explicit RemoveGroupMemberExtensionByKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        RemoveGroupMemberExtensionByKeysRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<RemoveGroupMemberExtensionByKeysRequestRequestParams>(model1);
      }
    }
  }


  virtual ~RemoveGroupMemberExtensionByKeysRequest() = default;
};
class RemoveGroupMemberExtensionByKeysShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  RemoveGroupMemberExtensionByKeysShrinkRequest() {}

  explicit RemoveGroupMemberExtensionByKeysShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~RemoveGroupMemberExtensionByKeysShrinkRequest() = default;
};
class RemoveGroupMemberExtensionByKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RemoveGroupMemberExtensionByKeysResponseBody() {}

  explicit RemoveGroupMemberExtensionByKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~RemoveGroupMemberExtensionByKeysResponseBody() = default;
};
class RemoveGroupMemberExtensionByKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveGroupMemberExtensionByKeysResponseBody> body{};

  RemoveGroupMemberExtensionByKeysResponse() {}

  explicit RemoveGroupMemberExtensionByKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveGroupMemberExtensionByKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveGroupMemberExtensionByKeysResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveGroupMemberExtensionByKeysResponse() = default;
};
class RemoveGroupMembersRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<vector<string>> appUidsRemoved{};
  shared_ptr<string> operatorAppUid{};

  RemoveGroupMembersRequestRequestParams() {}

  explicit RemoveGroupMembersRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (appUidsRemoved) {
      res["AppUidsRemoved"] = boost::any(*appUidsRemoved);
    }
    if (operatorAppUid) {
      res["OperatorAppUid"] = boost::any(*operatorAppUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("AppUidsRemoved") != m.end() && !m["AppUidsRemoved"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppUidsRemoved"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppUidsRemoved"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appUidsRemoved = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OperatorAppUid") != m.end() && !m["OperatorAppUid"].empty()) {
      operatorAppUid = make_shared<string>(boost::any_cast<string>(m["OperatorAppUid"]));
    }
  }


  virtual ~RemoveGroupMembersRequestRequestParams() = default;
};
class RemoveGroupMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<RemoveGroupMembersRequestRequestParams> requestParams{};

  RemoveGroupMembersRequest() {}

  explicit RemoveGroupMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        RemoveGroupMembersRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<RemoveGroupMembersRequestRequestParams>(model1);
      }
    }
  }


  virtual ~RemoveGroupMembersRequest() = default;
};
class RemoveGroupMembersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  RemoveGroupMembersShrinkRequest() {}

  explicit RemoveGroupMembersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~RemoveGroupMembersShrinkRequest() = default;
};
class RemoveGroupMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RemoveGroupMembersResponseBody() {}

  explicit RemoveGroupMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~RemoveGroupMembersResponseBody() = default;
};
class RemoveGroupMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveGroupMembersResponseBody> body{};

  RemoveGroupMembersResponse() {}

  explicit RemoveGroupMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveGroupMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveGroupMembersResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveGroupMembersResponse() = default;
};
class RemoveGroupSilenceBlacklistRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<vector<string>> members{};
  shared_ptr<string> operatorAppUid{};

  RemoveGroupSilenceBlacklistRequestRequestParams() {}

  explicit RemoveGroupSilenceBlacklistRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (members) {
      res["Members"] = boost::any(*members);
    }
    if (operatorAppUid) {
      res["OperatorAppUid"] = boost::any(*operatorAppUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Members"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      members = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OperatorAppUid") != m.end() && !m["OperatorAppUid"].empty()) {
      operatorAppUid = make_shared<string>(boost::any_cast<string>(m["OperatorAppUid"]));
    }
  }


  virtual ~RemoveGroupSilenceBlacklistRequestRequestParams() = default;
};
class RemoveGroupSilenceBlacklistRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<RemoveGroupSilenceBlacklistRequestRequestParams> requestParams{};

  RemoveGroupSilenceBlacklistRequest() {}

  explicit RemoveGroupSilenceBlacklistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        RemoveGroupSilenceBlacklistRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<RemoveGroupSilenceBlacklistRequestRequestParams>(model1);
      }
    }
  }


  virtual ~RemoveGroupSilenceBlacklistRequest() = default;
};
class RemoveGroupSilenceBlacklistShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  RemoveGroupSilenceBlacklistShrinkRequest() {}

  explicit RemoveGroupSilenceBlacklistShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~RemoveGroupSilenceBlacklistShrinkRequest() = default;
};
class RemoveGroupSilenceBlacklistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RemoveGroupSilenceBlacklistResponseBody() {}

  explicit RemoveGroupSilenceBlacklistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~RemoveGroupSilenceBlacklistResponseBody() = default;
};
class RemoveGroupSilenceBlacklistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveGroupSilenceBlacklistResponseBody> body{};

  RemoveGroupSilenceBlacklistResponse() {}

  explicit RemoveGroupSilenceBlacklistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveGroupSilenceBlacklistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveGroupSilenceBlacklistResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveGroupSilenceBlacklistResponse() = default;
};
class RemoveGroupSilenceWhitelistRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<vector<string>> members{};
  shared_ptr<string> operatorAppUid{};

  RemoveGroupSilenceWhitelistRequestRequestParams() {}

  explicit RemoveGroupSilenceWhitelistRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (members) {
      res["Members"] = boost::any(*members);
    }
    if (operatorAppUid) {
      res["OperatorAppUid"] = boost::any(*operatorAppUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Members"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      members = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OperatorAppUid") != m.end() && !m["OperatorAppUid"].empty()) {
      operatorAppUid = make_shared<string>(boost::any_cast<string>(m["OperatorAppUid"]));
    }
  }


  virtual ~RemoveGroupSilenceWhitelistRequestRequestParams() = default;
};
class RemoveGroupSilenceWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<RemoveGroupSilenceWhitelistRequestRequestParams> requestParams{};

  RemoveGroupSilenceWhitelistRequest() {}

  explicit RemoveGroupSilenceWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        RemoveGroupSilenceWhitelistRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<RemoveGroupSilenceWhitelistRequestRequestParams>(model1);
      }
    }
  }


  virtual ~RemoveGroupSilenceWhitelistRequest() = default;
};
class RemoveGroupSilenceWhitelistShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  RemoveGroupSilenceWhitelistShrinkRequest() {}

  explicit RemoveGroupSilenceWhitelistShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~RemoveGroupSilenceWhitelistShrinkRequest() = default;
};
class RemoveGroupSilenceWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RemoveGroupSilenceWhitelistResponseBody() {}

  explicit RemoveGroupSilenceWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~RemoveGroupSilenceWhitelistResponseBody() = default;
};
class RemoveGroupSilenceWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveGroupSilenceWhitelistResponseBody> body{};

  RemoveGroupSilenceWhitelistResponse() {}

  explicit RemoveGroupSilenceWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveGroupSilenceWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveGroupSilenceWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveGroupSilenceWhitelistResponse() = default;
};
class RemoveMessageExtensionByKeysRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<vector<string>> keys{};
  shared_ptr<string> msgId{};

  RemoveMessageExtensionByKeysRequestRequestParams() {}

  explicit RemoveMessageExtensionByKeysRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
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
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
  }


  virtual ~RemoveMessageExtensionByKeysRequestRequestParams() = default;
};
class RemoveMessageExtensionByKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<RemoveMessageExtensionByKeysRequestRequestParams> requestParams{};

  RemoveMessageExtensionByKeysRequest() {}

  explicit RemoveMessageExtensionByKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        RemoveMessageExtensionByKeysRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<RemoveMessageExtensionByKeysRequestRequestParams>(model1);
      }
    }
  }


  virtual ~RemoveMessageExtensionByKeysRequest() = default;
};
class RemoveMessageExtensionByKeysShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  RemoveMessageExtensionByKeysShrinkRequest() {}

  explicit RemoveMessageExtensionByKeysShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~RemoveMessageExtensionByKeysShrinkRequest() = default;
};
class RemoveMessageExtensionByKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RemoveMessageExtensionByKeysResponseBody() {}

  explicit RemoveMessageExtensionByKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~RemoveMessageExtensionByKeysResponseBody() = default;
};
class RemoveMessageExtensionByKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveMessageExtensionByKeysResponseBody> body{};

  RemoveMessageExtensionByKeysResponse() {}

  explicit RemoveMessageExtensionByKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveMessageExtensionByKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveMessageExtensionByKeysResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveMessageExtensionByKeysResponse() = default;
};
class RemoveSingleChatExtensionByKeysRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> appUid{};
  shared_ptr<vector<string>> keys{};

  RemoveSingleChatExtensionByKeysRequestRequestParams() {}

  explicit RemoveSingleChatExtensionByKeysRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
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


  virtual ~RemoveSingleChatExtensionByKeysRequestRequestParams() = default;
};
class RemoveSingleChatExtensionByKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<RemoveSingleChatExtensionByKeysRequestRequestParams> requestParams{};

  RemoveSingleChatExtensionByKeysRequest() {}

  explicit RemoveSingleChatExtensionByKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        RemoveSingleChatExtensionByKeysRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<RemoveSingleChatExtensionByKeysRequestRequestParams>(model1);
      }
    }
  }


  virtual ~RemoveSingleChatExtensionByKeysRequest() = default;
};
class RemoveSingleChatExtensionByKeysShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  RemoveSingleChatExtensionByKeysShrinkRequest() {}

  explicit RemoveSingleChatExtensionByKeysShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~RemoveSingleChatExtensionByKeysShrinkRequest() = default;
};
class RemoveSingleChatExtensionByKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RemoveSingleChatExtensionByKeysResponseBody() {}

  explicit RemoveSingleChatExtensionByKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~RemoveSingleChatExtensionByKeysResponseBody() = default;
};
class RemoveSingleChatExtensionByKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveSingleChatExtensionByKeysResponseBody> body{};

  RemoveSingleChatExtensionByKeysResponse() {}

  explicit RemoveSingleChatExtensionByKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveSingleChatExtensionByKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveSingleChatExtensionByKeysResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveSingleChatExtensionByKeysResponse() = default;
};
class RemoveUserConversationExtensionByKeysRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> appUid{};
  shared_ptr<vector<string>> keys{};

  RemoveUserConversationExtensionByKeysRequestRequestParams() {}

  explicit RemoveUserConversationExtensionByKeysRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
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


  virtual ~RemoveUserConversationExtensionByKeysRequestRequestParams() = default;
};
class RemoveUserConversationExtensionByKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<RemoveUserConversationExtensionByKeysRequestRequestParams> requestParams{};

  RemoveUserConversationExtensionByKeysRequest() {}

  explicit RemoveUserConversationExtensionByKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        RemoveUserConversationExtensionByKeysRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<RemoveUserConversationExtensionByKeysRequestRequestParams>(model1);
      }
    }
  }


  virtual ~RemoveUserConversationExtensionByKeysRequest() = default;
};
class RemoveUserConversationExtensionByKeysShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  RemoveUserConversationExtensionByKeysShrinkRequest() {}

  explicit RemoveUserConversationExtensionByKeysShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~RemoveUserConversationExtensionByKeysShrinkRequest() = default;
};
class RemoveUserConversationExtensionByKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RemoveUserConversationExtensionByKeysResponseBody() {}

  explicit RemoveUserConversationExtensionByKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~RemoveUserConversationExtensionByKeysResponseBody() = default;
};
class RemoveUserConversationExtensionByKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveUserConversationExtensionByKeysResponseBody> body{};

  RemoveUserConversationExtensionByKeysResponse() {}

  explicit RemoveUserConversationExtensionByKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveUserConversationExtensionByKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveUserConversationExtensionByKeysResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveUserConversationExtensionByKeysResponse() = default;
};
class SendCustomMessageRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> domain{};
  shared_ptr<string> roomId{};
  shared_ptr<string> senderId{};
  shared_ptr<long> subType{};

  SendCustomMessageRequestRequest() {}

  explicit SendCustomMessageRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<long>(boost::any_cast<long>(m["SubType"]));
    }
  }


  virtual ~SendCustomMessageRequestRequest() = default;
};
class SendCustomMessageRequest : public Darabonba::Model {
public:
  shared_ptr<SendCustomMessageRequestRequest> request{};

  SendCustomMessageRequest() {}

  explicit SendCustomMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        SendCustomMessageRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<SendCustomMessageRequestRequest>(model1);
      }
    }
  }


  virtual ~SendCustomMessageRequest() = default;
};
class SendCustomMessageResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};

  SendCustomMessageResponseBodyResult() {}

  explicit SendCustomMessageResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
  }


  virtual ~SendCustomMessageResponseBodyResult() = default;
};
class SendCustomMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<SendCustomMessageResponseBodyResult> result{};

  SendCustomMessageResponseBody() {}

  explicit SendCustomMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        SendCustomMessageResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<SendCustomMessageResponseBodyResult>(model1);
      }
    }
  }


  virtual ~SendCustomMessageResponseBody() = default;
};
class SendCustomMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendCustomMessageResponseBody> body{};

  SendCustomMessageResponse() {}

  explicit SendCustomMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendCustomMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendCustomMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendCustomMessageResponse() = default;
};
class SendCustomMessageToRoomUsersRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> domain{};
  shared_ptr<string> roomId{};
  shared_ptr<string> senderId{};
  shared_ptr<long> subType{};

  SendCustomMessageToRoomUsersRequestRequest() {}

  explicit SendCustomMessageToRoomUsersRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<long>(boost::any_cast<long>(m["SubType"]));
    }
  }


  virtual ~SendCustomMessageToRoomUsersRequestRequest() = default;
};
class SendCustomMessageToRoomUsersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> receivers{};
  shared_ptr<SendCustomMessageToRoomUsersRequestRequest> request{};

  SendCustomMessageToRoomUsersRequest() {}

  explicit SendCustomMessageToRoomUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (receivers) {
      res["Receivers"] = boost::any(*receivers);
    }
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Receivers") != m.end() && !m["Receivers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Receivers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Receivers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      receivers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        SendCustomMessageToRoomUsersRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<SendCustomMessageToRoomUsersRequestRequest>(model1);
      }
    }
  }


  virtual ~SendCustomMessageToRoomUsersRequest() = default;
};
class SendCustomMessageToRoomUsersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};

  SendCustomMessageToRoomUsersResponseBodyResult() {}

  explicit SendCustomMessageToRoomUsersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
  }


  virtual ~SendCustomMessageToRoomUsersResponseBodyResult() = default;
};
class SendCustomMessageToRoomUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<SendCustomMessageToRoomUsersResponseBodyResult> result{};

  SendCustomMessageToRoomUsersResponseBody() {}

  explicit SendCustomMessageToRoomUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        SendCustomMessageToRoomUsersResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<SendCustomMessageToRoomUsersResponseBodyResult>(model1);
      }
    }
  }


  virtual ~SendCustomMessageToRoomUsersResponseBody() = default;
};
class SendCustomMessageToRoomUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendCustomMessageToRoomUsersResponseBody> body{};

  SendCustomMessageToRoomUsersResponse() {}

  explicit SendCustomMessageToRoomUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendCustomMessageToRoomUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendCustomMessageToRoomUsersResponseBody>(model1);
      }
    }
  }


  virtual ~SendCustomMessageToRoomUsersResponse() = default;
};
class SendMessageRequestRequestParamsOptionsReceiveScopeOption : public Darabonba::Model {
public:
  shared_ptr<vector<string>> excludeReceiverIds{};
  shared_ptr<long> receiveScope{};
  shared_ptr<vector<string>> receiverIds{};

  SendMessageRequestRequestParamsOptionsReceiveScopeOption() {}

  explicit SendMessageRequestRequestParamsOptionsReceiveScopeOption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeReceiverIds) {
      res["ExcludeReceiverIds"] = boost::any(*excludeReceiverIds);
    }
    if (receiveScope) {
      res["ReceiveScope"] = boost::any(*receiveScope);
    }
    if (receiverIds) {
      res["ReceiverIds"] = boost::any(*receiverIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludeReceiverIds") != m.end() && !m["ExcludeReceiverIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExcludeReceiverIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExcludeReceiverIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeReceiverIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ReceiveScope") != m.end() && !m["ReceiveScope"].empty()) {
      receiveScope = make_shared<long>(boost::any_cast<long>(m["ReceiveScope"]));
    }
    if (m.find("ReceiverIds") != m.end() && !m["ReceiverIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReceiverIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReceiverIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      receiverIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SendMessageRequestRequestParamsOptionsReceiveScopeOption() = default;
};
class SendMessageRequestRequestParamsOptionsSingleChatCreateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<vector<string>> appUids{};
  shared_ptr<map<string, string>> extensions{};
  shared_ptr<map<string, RequestParamsOptionsSingleChatCreateRequestUserConversationValue>> userConversation{};

  SendMessageRequestRequestParamsOptionsSingleChatCreateRequest() {}

  explicit SendMessageRequestRequestParamsOptionsSingleChatCreateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (appUids) {
      res["AppUids"] = boost::any(*appUids);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (userConversation) {
      map<string, boost::any> temp1;
      for(auto item1:*userConversation){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["UserConversation"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("AppUids") != m.end() && !m["AppUids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppUids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppUids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appUids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("UserConversation") != m.end() && !m["UserConversation"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserConversation"].type()) {
        map<string, RequestParamsOptionsSingleChatCreateRequestUserConversationValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["UserConversation"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            RequestParamsOptionsSingleChatCreateRequestUserConversationValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        userConversation = make_shared<map<string, RequestParamsOptionsSingleChatCreateRequestUserConversationValue>>(expect1);
      }
    }
  }


  virtual ~SendMessageRequestRequestParamsOptionsSingleChatCreateRequest() = default;
};
class SendMessageRequestRequestParamsOptions : public Darabonba::Model {
public:
  shared_ptr<SendMessageRequestRequestParamsOptionsReceiveScopeOption> receiveScopeOption{};
  shared_ptr<long> redPointPolicy{};
  shared_ptr<SendMessageRequestRequestParamsOptionsSingleChatCreateRequest> singleChatCreateRequest{};

  SendMessageRequestRequestParamsOptions() {}

  explicit SendMessageRequestRequestParamsOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (receiveScopeOption) {
      res["ReceiveScopeOption"] = receiveScopeOption ? boost::any(receiveScopeOption->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (redPointPolicy) {
      res["RedPointPolicy"] = boost::any(*redPointPolicy);
    }
    if (singleChatCreateRequest) {
      res["SingleChatCreateRequest"] = singleChatCreateRequest ? boost::any(singleChatCreateRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReceiveScopeOption") != m.end() && !m["ReceiveScopeOption"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReceiveScopeOption"].type()) {
        SendMessageRequestRequestParamsOptionsReceiveScopeOption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReceiveScopeOption"]));
        receiveScopeOption = make_shared<SendMessageRequestRequestParamsOptionsReceiveScopeOption>(model1);
      }
    }
    if (m.find("RedPointPolicy") != m.end() && !m["RedPointPolicy"].empty()) {
      redPointPolicy = make_shared<long>(boost::any_cast<long>(m["RedPointPolicy"]));
    }
    if (m.find("SingleChatCreateRequest") != m.end() && !m["SingleChatCreateRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["SingleChatCreateRequest"].type()) {
        SendMessageRequestRequestParamsOptionsSingleChatCreateRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SingleChatCreateRequest"]));
        singleChatCreateRequest = make_shared<SendMessageRequestRequestParamsOptionsSingleChatCreateRequest>(model1);
      }
    }
  }


  virtual ~SendMessageRequestRequestParamsOptions() = default;
};
class SendMessageRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> content{};
  shared_ptr<long> contentType{};
  shared_ptr<long> conversationType{};
  shared_ptr<map<string, string>> extensions{};
  shared_ptr<SendMessageRequestRequestParamsOptions> options{};
  shared_ptr<string> senderId{};
  shared_ptr<string> uuid{};

  SendMessageRequestRequestParams() {}

  explicit SendMessageRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (conversationType) {
      res["ConversationType"] = boost::any(*conversationType);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (options) {
      res["Options"] = options ? boost::any(options->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<long>(boost::any_cast<long>(m["ContentType"]));
    }
    if (m.find("ConversationType") != m.end() && !m["ConversationType"].empty()) {
      conversationType = make_shared<long>(boost::any_cast<long>(m["ConversationType"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      if (typeid(map<string, boost::any>) == m["Options"].type()) {
        SendMessageRequestRequestParamsOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Options"]));
        options = make_shared<SendMessageRequestRequestParamsOptions>(model1);
      }
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~SendMessageRequestRequestParams() = default;
};
class SendMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<SendMessageRequestRequestParams> requestParams{};

  SendMessageRequest() {}

  explicit SendMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        SendMessageRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<SendMessageRequestRequestParams>(model1);
      }
    }
  }


  virtual ~SendMessageRequest() = default;
};
class SendMessageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  SendMessageShrinkRequest() {}

  explicit SendMessageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~SendMessageShrinkRequest() = default;
};
class SendMessageResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> msgId{};

  SendMessageResponseBodyResult() {}

  explicit SendMessageResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
  }


  virtual ~SendMessageResponseBodyResult() = default;
};
class SendMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<SendMessageResponseBodyResult> result{};

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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        SendMessageResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<SendMessageResponseBodyResult>(model1);
      }
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
class SetGroupExtensionByKeysRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<map<string, string>> extensions{};

  SetGroupExtensionByKeysRequestRequestParams() {}

  explicit SetGroupExtensionByKeysRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~SetGroupExtensionByKeysRequestRequestParams() = default;
};
class SetGroupExtensionByKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<SetGroupExtensionByKeysRequestRequestParams> requestParams{};

  SetGroupExtensionByKeysRequest() {}

  explicit SetGroupExtensionByKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        SetGroupExtensionByKeysRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<SetGroupExtensionByKeysRequestRequestParams>(model1);
      }
    }
  }


  virtual ~SetGroupExtensionByKeysRequest() = default;
};
class SetGroupExtensionByKeysShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  SetGroupExtensionByKeysShrinkRequest() {}

  explicit SetGroupExtensionByKeysShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~SetGroupExtensionByKeysShrinkRequest() = default;
};
class SetGroupExtensionByKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SetGroupExtensionByKeysResponseBody() {}

  explicit SetGroupExtensionByKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~SetGroupExtensionByKeysResponseBody() = default;
};
class SetGroupExtensionByKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetGroupExtensionByKeysResponseBody> body{};

  SetGroupExtensionByKeysResponse() {}

  explicit SetGroupExtensionByKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetGroupExtensionByKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetGroupExtensionByKeysResponseBody>(model1);
      }
    }
  }


  virtual ~SetGroupExtensionByKeysResponse() = default;
};
class SetGroupMemberExtensionByKeysRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> appUid{};
  shared_ptr<map<string, string>> extensions{};

  SetGroupMemberExtensionByKeysRequestRequestParams() {}

  explicit SetGroupMemberExtensionByKeysRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~SetGroupMemberExtensionByKeysRequestRequestParams() = default;
};
class SetGroupMemberExtensionByKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<SetGroupMemberExtensionByKeysRequestRequestParams> requestParams{};

  SetGroupMemberExtensionByKeysRequest() {}

  explicit SetGroupMemberExtensionByKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        SetGroupMemberExtensionByKeysRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<SetGroupMemberExtensionByKeysRequestRequestParams>(model1);
      }
    }
  }


  virtual ~SetGroupMemberExtensionByKeysRequest() = default;
};
class SetGroupMemberExtensionByKeysShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  SetGroupMemberExtensionByKeysShrinkRequest() {}

  explicit SetGroupMemberExtensionByKeysShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~SetGroupMemberExtensionByKeysShrinkRequest() = default;
};
class SetGroupMemberExtensionByKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SetGroupMemberExtensionByKeysResponseBody() {}

  explicit SetGroupMemberExtensionByKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~SetGroupMemberExtensionByKeysResponseBody() = default;
};
class SetGroupMemberExtensionByKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetGroupMemberExtensionByKeysResponseBody> body{};

  SetGroupMemberExtensionByKeysResponse() {}

  explicit SetGroupMemberExtensionByKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetGroupMemberExtensionByKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetGroupMemberExtensionByKeysResponseBody>(model1);
      }
    }
  }


  virtual ~SetGroupMemberExtensionByKeysResponse() = default;
};
class SetGroupOwnerRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> newOwnerAppUid{};

  SetGroupOwnerRequestRequestParams() {}

  explicit SetGroupOwnerRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (newOwnerAppUid) {
      res["NewOwnerAppUid"] = boost::any(*newOwnerAppUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("NewOwnerAppUid") != m.end() && !m["NewOwnerAppUid"].empty()) {
      newOwnerAppUid = make_shared<string>(boost::any_cast<string>(m["NewOwnerAppUid"]));
    }
  }


  virtual ~SetGroupOwnerRequestRequestParams() = default;
};
class SetGroupOwnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<SetGroupOwnerRequestRequestParams> requestParams{};

  SetGroupOwnerRequest() {}

  explicit SetGroupOwnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        SetGroupOwnerRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<SetGroupOwnerRequestRequestParams>(model1);
      }
    }
  }


  virtual ~SetGroupOwnerRequest() = default;
};
class SetGroupOwnerShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  SetGroupOwnerShrinkRequest() {}

  explicit SetGroupOwnerShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~SetGroupOwnerShrinkRequest() = default;
};
class SetGroupOwnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SetGroupOwnerResponseBody() {}

  explicit SetGroupOwnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~SetGroupOwnerResponseBody() = default;
};
class SetGroupOwnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetGroupOwnerResponseBody> body{};

  SetGroupOwnerResponse() {}

  explicit SetGroupOwnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetGroupOwnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetGroupOwnerResponseBody>(model1);
      }
    }
  }


  virtual ~SetGroupOwnerResponse() = default;
};
class SetMessageExtensionByKeysRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<map<string, string>> extensions{};
  shared_ptr<string> msgId{};

  SetMessageExtensionByKeysRequestRequestParams() {}

  explicit SetMessageExtensionByKeysRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
  }


  virtual ~SetMessageExtensionByKeysRequestRequestParams() = default;
};
class SetMessageExtensionByKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<SetMessageExtensionByKeysRequestRequestParams> requestParams{};

  SetMessageExtensionByKeysRequest() {}

  explicit SetMessageExtensionByKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        SetMessageExtensionByKeysRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<SetMessageExtensionByKeysRequestRequestParams>(model1);
      }
    }
  }


  virtual ~SetMessageExtensionByKeysRequest() = default;
};
class SetMessageExtensionByKeysShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  SetMessageExtensionByKeysShrinkRequest() {}

  explicit SetMessageExtensionByKeysShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~SetMessageExtensionByKeysShrinkRequest() = default;
};
class SetMessageExtensionByKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SetMessageExtensionByKeysResponseBody() {}

  explicit SetMessageExtensionByKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~SetMessageExtensionByKeysResponseBody() = default;
};
class SetMessageExtensionByKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetMessageExtensionByKeysResponseBody> body{};

  SetMessageExtensionByKeysResponse() {}

  explicit SetMessageExtensionByKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetMessageExtensionByKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetMessageExtensionByKeysResponseBody>(model1);
      }
    }
  }


  virtual ~SetMessageExtensionByKeysResponse() = default;
};
class SetMessageReadRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appUid{};
  shared_ptr<string> msgId{};

  SetMessageReadRequestRequestParams() {}

  explicit SetMessageReadRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
  }


  virtual ~SetMessageReadRequestRequestParams() = default;
};
class SetMessageReadRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<SetMessageReadRequestRequestParams> requestParams{};

  SetMessageReadRequest() {}

  explicit SetMessageReadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        SetMessageReadRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<SetMessageReadRequestRequestParams>(model1);
      }
    }
  }


  virtual ~SetMessageReadRequest() = default;
};
class SetMessageReadShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  SetMessageReadShrinkRequest() {}

  explicit SetMessageReadShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~SetMessageReadShrinkRequest() = default;
};
class SetMessageReadResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SetMessageReadResponseBody() {}

  explicit SetMessageReadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~SetMessageReadResponseBody() = default;
};
class SetMessageReadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetMessageReadResponseBody> body{};

  SetMessageReadResponse() {}

  explicit SetMessageReadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetMessageReadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetMessageReadResponseBody>(model1);
      }
    }
  }


  virtual ~SetMessageReadResponse() = default;
};
class SetSingleChatExtensionByKeysRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> appUid{};
  shared_ptr<map<string, string>> extensions{};

  SetSingleChatExtensionByKeysRequestRequestParams() {}

  explicit SetSingleChatExtensionByKeysRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~SetSingleChatExtensionByKeysRequestRequestParams() = default;
};
class SetSingleChatExtensionByKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<SetSingleChatExtensionByKeysRequestRequestParams> requestParams{};

  SetSingleChatExtensionByKeysRequest() {}

  explicit SetSingleChatExtensionByKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        SetSingleChatExtensionByKeysRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<SetSingleChatExtensionByKeysRequestRequestParams>(model1);
      }
    }
  }


  virtual ~SetSingleChatExtensionByKeysRequest() = default;
};
class SetSingleChatExtensionByKeysShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  SetSingleChatExtensionByKeysShrinkRequest() {}

  explicit SetSingleChatExtensionByKeysShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~SetSingleChatExtensionByKeysShrinkRequest() = default;
};
class SetSingleChatExtensionByKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SetSingleChatExtensionByKeysResponseBody() {}

  explicit SetSingleChatExtensionByKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~SetSingleChatExtensionByKeysResponseBody() = default;
};
class SetSingleChatExtensionByKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetSingleChatExtensionByKeysResponseBody> body{};

  SetSingleChatExtensionByKeysResponse() {}

  explicit SetSingleChatExtensionByKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetSingleChatExtensionByKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetSingleChatExtensionByKeysResponseBody>(model1);
      }
    }
  }


  virtual ~SetSingleChatExtensionByKeysResponse() = default;
};
class SetUserConversationExtensionByKeysRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> appUid{};
  shared_ptr<map<string, string>> extensions{};

  SetUserConversationExtensionByKeysRequestRequestParams() {}

  explicit SetUserConversationExtensionByKeysRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~SetUserConversationExtensionByKeysRequestRequestParams() = default;
};
class SetUserConversationExtensionByKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<SetUserConversationExtensionByKeysRequestRequestParams> requestParams{};

  SetUserConversationExtensionByKeysRequest() {}

  explicit SetUserConversationExtensionByKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        SetUserConversationExtensionByKeysRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<SetUserConversationExtensionByKeysRequestRequestParams>(model1);
      }
    }
  }


  virtual ~SetUserConversationExtensionByKeysRequest() = default;
};
class SetUserConversationExtensionByKeysShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  SetUserConversationExtensionByKeysShrinkRequest() {}

  explicit SetUserConversationExtensionByKeysShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~SetUserConversationExtensionByKeysShrinkRequest() = default;
};
class SetUserConversationExtensionByKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SetUserConversationExtensionByKeysResponseBody() {}

  explicit SetUserConversationExtensionByKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~SetUserConversationExtensionByKeysResponseBody() = default;
};
class SetUserConversationExtensionByKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetUserConversationExtensionByKeysResponseBody> body{};

  SetUserConversationExtensionByKeysResponse() {}

  explicit SetUserConversationExtensionByKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetUserConversationExtensionByKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetUserConversationExtensionByKeysResponseBody>(model1);
      }
    }
  }


  virtual ~SetUserConversationExtensionByKeysResponse() = default;
};
class SilenceAllGroupMembersRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> operatorAppUid{};

  SilenceAllGroupMembersRequestRequestParams() {}

  explicit SilenceAllGroupMembersRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (operatorAppUid) {
      res["OperatorAppUid"] = boost::any(*operatorAppUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("OperatorAppUid") != m.end() && !m["OperatorAppUid"].empty()) {
      operatorAppUid = make_shared<string>(boost::any_cast<string>(m["OperatorAppUid"]));
    }
  }


  virtual ~SilenceAllGroupMembersRequestRequestParams() = default;
};
class SilenceAllGroupMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<SilenceAllGroupMembersRequestRequestParams> requestParams{};

  SilenceAllGroupMembersRequest() {}

  explicit SilenceAllGroupMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        SilenceAllGroupMembersRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<SilenceAllGroupMembersRequestRequestParams>(model1);
      }
    }
  }


  virtual ~SilenceAllGroupMembersRequest() = default;
};
class SilenceAllGroupMembersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  SilenceAllGroupMembersShrinkRequest() {}

  explicit SilenceAllGroupMembersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~SilenceAllGroupMembersShrinkRequest() = default;
};
class SilenceAllGroupMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SilenceAllGroupMembersResponseBody() {}

  explicit SilenceAllGroupMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~SilenceAllGroupMembersResponseBody() = default;
};
class SilenceAllGroupMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SilenceAllGroupMembersResponseBody> body{};

  SilenceAllGroupMembersResponse() {}

  explicit SilenceAllGroupMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SilenceAllGroupMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SilenceAllGroupMembersResponseBody>(model1);
      }
    }
  }


  virtual ~SilenceAllGroupMembersResponse() = default;
};
class UnbindInterconnectionUidRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appUid{};
  shared_ptr<string> dingTalkUid{};

  UnbindInterconnectionUidRequestRequestParams() {}

  explicit UnbindInterconnectionUidRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (dingTalkUid) {
      res["DingTalkUid"] = boost::any(*dingTalkUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
    }
    if (m.find("DingTalkUid") != m.end() && !m["DingTalkUid"].empty()) {
      dingTalkUid = make_shared<string>(boost::any_cast<string>(m["DingTalkUid"]));
    }
  }


  virtual ~UnbindInterconnectionUidRequestRequestParams() = default;
};
class UnbindInterconnectionUidRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<UnbindInterconnectionUidRequestRequestParams> requestParams{};

  UnbindInterconnectionUidRequest() {}

  explicit UnbindInterconnectionUidRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        UnbindInterconnectionUidRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<UnbindInterconnectionUidRequestRequestParams>(model1);
      }
    }
  }


  virtual ~UnbindInterconnectionUidRequest() = default;
};
class UnbindInterconnectionUidShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  UnbindInterconnectionUidShrinkRequest() {}

  explicit UnbindInterconnectionUidShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~UnbindInterconnectionUidShrinkRequest() = default;
};
class UnbindInterconnectionUidResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UnbindInterconnectionUidResponseBody() {}

  explicit UnbindInterconnectionUidResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UnbindInterconnectionUidResponseBody() = default;
};
class UnbindInterconnectionUidResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindInterconnectionUidResponseBody> body{};

  UnbindInterconnectionUidResponse() {}

  explicit UnbindInterconnectionUidResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindInterconnectionUidResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindInterconnectionUidResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindInterconnectionUidResponse() = default;
};
class UpdateAppNameRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appName{};

  UpdateAppNameRequestRequestParams() {}

  explicit UpdateAppNameRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
  }


  virtual ~UpdateAppNameRequestRequestParams() = default;
};
class UpdateAppNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<UpdateAppNameRequestRequestParams> requestParams{};

  UpdateAppNameRequest() {}

  explicit UpdateAppNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        UpdateAppNameRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<UpdateAppNameRequestRequestParams>(model1);
      }
    }
  }


  virtual ~UpdateAppNameRequest() = default;
};
class UpdateAppNameShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  UpdateAppNameShrinkRequest() {}

  explicit UpdateAppNameShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~UpdateAppNameShrinkRequest() = default;
};
class UpdateAppNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateAppNameResponseBody() {}

  explicit UpdateAppNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~UpdateAppNameResponseBody() = default;
};
class UpdateAppNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAppNameResponseBody> body{};

  UpdateAppNameResponse() {}

  explicit UpdateAppNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppNameResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppNameResponse() = default;
};
class UpdateAppStatusRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};

  UpdateAppStatusRequestRequestParams() {}

  explicit UpdateAppStatusRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
  }


  virtual ~UpdateAppStatusRequestRequestParams() = default;
};
class UpdateAppStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<UpdateAppStatusRequestRequestParams> requestParams{};

  UpdateAppStatusRequest() {}

  explicit UpdateAppStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        UpdateAppStatusRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<UpdateAppStatusRequestRequestParams>(model1);
      }
    }
  }


  virtual ~UpdateAppStatusRequest() = default;
};
class UpdateAppStatusShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  UpdateAppStatusShrinkRequest() {}

  explicit UpdateAppStatusShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~UpdateAppStatusShrinkRequest() = default;
};
class UpdateAppStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateAppStatusResponseBody() {}

  explicit UpdateAppStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateAppStatusResponseBody() = default;
};
class UpdateAppStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAppStatusResponseBody> body{};

  UpdateAppStatusResponse() {}

  explicit UpdateAppStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppStatusResponse() = default;
};
class UpdateCallbackConfigRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<map<string, bool>> apis{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<map<string, bool>> events{};
  shared_ptr<string> signatureKey{};
  shared_ptr<string> signatureValue{};
  shared_ptr<map<string, bool>> spis{};

  UpdateCallbackConfigRequestRequestParams() {}

  explicit UpdateCallbackConfigRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apis) {
      res["Apis"] = boost::any(*apis);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (events) {
      res["Events"] = boost::any(*events);
    }
    if (signatureKey) {
      res["SignatureKey"] = boost::any(*signatureKey);
    }
    if (signatureValue) {
      res["SignatureValue"] = boost::any(*signatureValue);
    }
    if (spis) {
      res["Spis"] = boost::any(*spis);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Apis") != m.end() && !m["Apis"].empty()) {
      map<string, bool> map1 = boost::any_cast<map<string, bool>>(m["Apis"]);
      map<string, bool> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      apis = make_shared<map<string, bool>>(toMap1);
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      map<string, bool> map1 = boost::any_cast<map<string, bool>>(m["Events"]);
      map<string, bool> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      events = make_shared<map<string, bool>>(toMap1);
    }
    if (m.find("SignatureKey") != m.end() && !m["SignatureKey"].empty()) {
      signatureKey = make_shared<string>(boost::any_cast<string>(m["SignatureKey"]));
    }
    if (m.find("SignatureValue") != m.end() && !m["SignatureValue"].empty()) {
      signatureValue = make_shared<string>(boost::any_cast<string>(m["SignatureValue"]));
    }
    if (m.find("Spis") != m.end() && !m["Spis"].empty()) {
      map<string, bool> map1 = boost::any_cast<map<string, bool>>(m["Spis"]);
      map<string, bool> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      spis = make_shared<map<string, bool>>(toMap1);
    }
  }


  virtual ~UpdateCallbackConfigRequestRequestParams() = default;
};
class UpdateCallbackConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<UpdateCallbackConfigRequestRequestParams> requestParams{};

  UpdateCallbackConfigRequest() {}

  explicit UpdateCallbackConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        UpdateCallbackConfigRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<UpdateCallbackConfigRequestRequestParams>(model1);
      }
    }
  }


  virtual ~UpdateCallbackConfigRequest() = default;
};
class UpdateCallbackConfigShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  UpdateCallbackConfigShrinkRequest() {}

  explicit UpdateCallbackConfigShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~UpdateCallbackConfigShrinkRequest() = default;
};
class UpdateCallbackConfigResponseBodyResultImConfigCallbackConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> apiIds{};
  shared_ptr<string> backendUrl{};
  shared_ptr<string> signatureKey{};
  shared_ptr<string> signatureValue{};

  UpdateCallbackConfigResponseBodyResultImConfigCallbackConfig() {}

  explicit UpdateCallbackConfigResponseBodyResultImConfigCallbackConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiIds) {
      res["ApiIds"] = boost::any(*apiIds);
    }
    if (backendUrl) {
      res["BackendUrl"] = boost::any(*backendUrl);
    }
    if (signatureKey) {
      res["SignatureKey"] = boost::any(*signatureKey);
    }
    if (signatureValue) {
      res["SignatureValue"] = boost::any(*signatureValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiIds") != m.end() && !m["ApiIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApiIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApiIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      apiIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BackendUrl") != m.end() && !m["BackendUrl"].empty()) {
      backendUrl = make_shared<string>(boost::any_cast<string>(m["BackendUrl"]));
    }
    if (m.find("SignatureKey") != m.end() && !m["SignatureKey"].empty()) {
      signatureKey = make_shared<string>(boost::any_cast<string>(m["SignatureKey"]));
    }
    if (m.find("SignatureValue") != m.end() && !m["SignatureValue"].empty()) {
      signatureValue = make_shared<string>(boost::any_cast<string>(m["SignatureValue"]));
    }
  }


  virtual ~UpdateCallbackConfigResponseBodyResultImConfigCallbackConfig() = default;
};
class UpdateCallbackConfigResponseBodyResultImConfigMsgConfig : public Darabonba::Model {
public:
  shared_ptr<long> msgRecallTimeInterval{};

  UpdateCallbackConfigResponseBodyResultImConfigMsgConfig() {}

  explicit UpdateCallbackConfigResponseBodyResultImConfigMsgConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msgRecallTimeInterval) {
      res["MsgRecallTimeInterval"] = boost::any(*msgRecallTimeInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MsgRecallTimeInterval") != m.end() && !m["MsgRecallTimeInterval"].empty()) {
      msgRecallTimeInterval = make_shared<long>(boost::any_cast<long>(m["MsgRecallTimeInterval"]));
    }
  }


  virtual ~UpdateCallbackConfigResponseBodyResultImConfigMsgConfig() = default;
};
class UpdateCallbackConfigResponseBodyResultImConfig : public Darabonba::Model {
public:
  shared_ptr<UpdateCallbackConfigResponseBodyResultImConfigCallbackConfig> callbackConfig{};
  shared_ptr<UpdateCallbackConfigResponseBodyResultImConfigMsgConfig> msgConfig{};

  UpdateCallbackConfigResponseBodyResultImConfig() {}

  explicit UpdateCallbackConfigResponseBodyResultImConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackConfig) {
      res["CallbackConfig"] = callbackConfig ? boost::any(callbackConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msgConfig) {
      res["MsgConfig"] = msgConfig ? boost::any(msgConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackConfig") != m.end() && !m["CallbackConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallbackConfig"].type()) {
        UpdateCallbackConfigResponseBodyResultImConfigCallbackConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallbackConfig"]));
        callbackConfig = make_shared<UpdateCallbackConfigResponseBodyResultImConfigCallbackConfig>(model1);
      }
    }
    if (m.find("MsgConfig") != m.end() && !m["MsgConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MsgConfig"].type()) {
        UpdateCallbackConfigResponseBodyResultImConfigMsgConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MsgConfig"]));
        msgConfig = make_shared<UpdateCallbackConfigResponseBodyResultImConfigMsgConfig>(model1);
      }
    }
  }


  virtual ~UpdateCallbackConfigResponseBodyResultImConfig() = default;
};
class UpdateCallbackConfigResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<UpdateCallbackConfigResponseBodyResultImConfig> imConfig{};

  UpdateCallbackConfigResponseBodyResult() {}

  explicit UpdateCallbackConfigResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imConfig) {
      res["ImConfig"] = imConfig ? boost::any(imConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImConfig") != m.end() && !m["ImConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImConfig"].type()) {
        UpdateCallbackConfigResponseBodyResultImConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImConfig"]));
        imConfig = make_shared<UpdateCallbackConfigResponseBodyResultImConfig>(model1);
      }
    }
  }


  virtual ~UpdateCallbackConfigResponseBodyResult() = default;
};
class UpdateCallbackConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<UpdateCallbackConfigResponseBodyResult> result{};
  shared_ptr<bool> success{};

  UpdateCallbackConfigResponseBody() {}

  explicit UpdateCallbackConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        UpdateCallbackConfigResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<UpdateCallbackConfigResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateCallbackConfigResponseBody() = default;
};
class UpdateCallbackConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCallbackConfigResponseBody> body{};

  UpdateCallbackConfigResponse() {}

  explicit UpdateCallbackConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCallbackConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCallbackConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCallbackConfigResponse() = default;
};
class UpdateGroupIconRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> iconMediaId{};
  shared_ptr<string> operatorAppUid{};

  UpdateGroupIconRequestRequestParams() {}

  explicit UpdateGroupIconRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (iconMediaId) {
      res["IconMediaId"] = boost::any(*iconMediaId);
    }
    if (operatorAppUid) {
      res["OperatorAppUid"] = boost::any(*operatorAppUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("IconMediaId") != m.end() && !m["IconMediaId"].empty()) {
      iconMediaId = make_shared<string>(boost::any_cast<string>(m["IconMediaId"]));
    }
    if (m.find("OperatorAppUid") != m.end() && !m["OperatorAppUid"].empty()) {
      operatorAppUid = make_shared<string>(boost::any_cast<string>(m["OperatorAppUid"]));
    }
  }


  virtual ~UpdateGroupIconRequestRequestParams() = default;
};
class UpdateGroupIconRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<UpdateGroupIconRequestRequestParams> requestParams{};

  UpdateGroupIconRequest() {}

  explicit UpdateGroupIconRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        UpdateGroupIconRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<UpdateGroupIconRequestRequestParams>(model1);
      }
    }
  }


  virtual ~UpdateGroupIconRequest() = default;
};
class UpdateGroupIconShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  UpdateGroupIconShrinkRequest() {}

  explicit UpdateGroupIconShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~UpdateGroupIconShrinkRequest() = default;
};
class UpdateGroupIconResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateGroupIconResponseBody() {}

  explicit UpdateGroupIconResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UpdateGroupIconResponseBody() = default;
};
class UpdateGroupIconResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGroupIconResponseBody> body{};

  UpdateGroupIconResponse() {}

  explicit UpdateGroupIconResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateGroupIconResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGroupIconResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGroupIconResponse() = default;
};
class UpdateGroupMembersRoleRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<vector<string>> appUids{};
  shared_ptr<string> operatorAppUid{};
  shared_ptr<long> role{};

  UpdateGroupMembersRoleRequestRequestParams() {}

  explicit UpdateGroupMembersRoleRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (appUids) {
      res["AppUids"] = boost::any(*appUids);
    }
    if (operatorAppUid) {
      res["OperatorAppUid"] = boost::any(*operatorAppUid);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("AppUids") != m.end() && !m["AppUids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppUids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppUids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appUids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OperatorAppUid") != m.end() && !m["OperatorAppUid"].empty()) {
      operatorAppUid = make_shared<string>(boost::any_cast<string>(m["OperatorAppUid"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<long>(boost::any_cast<long>(m["Role"]));
    }
  }


  virtual ~UpdateGroupMembersRoleRequestRequestParams() = default;
};
class UpdateGroupMembersRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<UpdateGroupMembersRoleRequestRequestParams> requestParams{};

  UpdateGroupMembersRoleRequest() {}

  explicit UpdateGroupMembersRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        UpdateGroupMembersRoleRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<UpdateGroupMembersRoleRequestRequestParams>(model1);
      }
    }
  }


  virtual ~UpdateGroupMembersRoleRequest() = default;
};
class UpdateGroupMembersRoleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  UpdateGroupMembersRoleShrinkRequest() {}

  explicit UpdateGroupMembersRoleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~UpdateGroupMembersRoleShrinkRequest() = default;
};
class UpdateGroupMembersRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateGroupMembersRoleResponseBody() {}

  explicit UpdateGroupMembersRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UpdateGroupMembersRoleResponseBody() = default;
};
class UpdateGroupMembersRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGroupMembersRoleResponseBody> body{};

  UpdateGroupMembersRoleResponse() {}

  explicit UpdateGroupMembersRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateGroupMembersRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGroupMembersRoleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGroupMembersRoleResponse() = default;
};
class UpdateGroupTitleRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appCid{};
  shared_ptr<string> operatorAppUid{};
  shared_ptr<string> title{};

  UpdateGroupTitleRequestRequestParams() {}

  explicit UpdateGroupTitleRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCid) {
      res["AppCid"] = boost::any(*appCid);
    }
    if (operatorAppUid) {
      res["OperatorAppUid"] = boost::any(*operatorAppUid);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCid") != m.end() && !m["AppCid"].empty()) {
      appCid = make_shared<string>(boost::any_cast<string>(m["AppCid"]));
    }
    if (m.find("OperatorAppUid") != m.end() && !m["OperatorAppUid"].empty()) {
      operatorAppUid = make_shared<string>(boost::any_cast<string>(m["OperatorAppUid"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateGroupTitleRequestRequestParams() = default;
};
class UpdateGroupTitleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<UpdateGroupTitleRequestRequestParams> requestParams{};

  UpdateGroupTitleRequest() {}

  explicit UpdateGroupTitleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        UpdateGroupTitleRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<UpdateGroupTitleRequestRequestParams>(model1);
      }
    }
  }


  virtual ~UpdateGroupTitleRequest() = default;
};
class UpdateGroupTitleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  UpdateGroupTitleShrinkRequest() {}

  explicit UpdateGroupTitleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~UpdateGroupTitleShrinkRequest() = default;
};
class UpdateGroupTitleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateGroupTitleResponseBody() {}

  explicit UpdateGroupTitleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UpdateGroupTitleResponseBody() = default;
};
class UpdateGroupTitleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGroupTitleResponseBody> body{};

  UpdateGroupTitleResponse() {}

  explicit UpdateGroupTitleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateGroupTitleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGroupTitleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGroupTitleResponse() = default;
};
class UpdateMsgRecallIntervalRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<long> clientMsgRecallIntervalMinute{};

  UpdateMsgRecallIntervalRequestRequestParams() {}

  explicit UpdateMsgRecallIntervalRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientMsgRecallIntervalMinute) {
      res["ClientMsgRecallIntervalMinute"] = boost::any(*clientMsgRecallIntervalMinute);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientMsgRecallIntervalMinute") != m.end() && !m["ClientMsgRecallIntervalMinute"].empty()) {
      clientMsgRecallIntervalMinute = make_shared<long>(boost::any_cast<long>(m["ClientMsgRecallIntervalMinute"]));
    }
  }


  virtual ~UpdateMsgRecallIntervalRequestRequestParams() = default;
};
class UpdateMsgRecallIntervalRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<UpdateMsgRecallIntervalRequestRequestParams> requestParams{};

  UpdateMsgRecallIntervalRequest() {}

  explicit UpdateMsgRecallIntervalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        UpdateMsgRecallIntervalRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<UpdateMsgRecallIntervalRequestRequestParams>(model1);
      }
    }
  }


  virtual ~UpdateMsgRecallIntervalRequest() = default;
};
class UpdateMsgRecallIntervalShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  UpdateMsgRecallIntervalShrinkRequest() {}

  explicit UpdateMsgRecallIntervalShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~UpdateMsgRecallIntervalShrinkRequest() = default;
};
class UpdateMsgRecallIntervalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  UpdateMsgRecallIntervalResponseBody() {}

  explicit UpdateMsgRecallIntervalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateMsgRecallIntervalResponseBody() = default;
};
class UpdateMsgRecallIntervalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateMsgRecallIntervalResponseBody> body{};

  UpdateMsgRecallIntervalResponse() {}

  explicit UpdateMsgRecallIntervalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMsgRecallIntervalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMsgRecallIntervalResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMsgRecallIntervalResponse() = default;
};
class UpdateTenantStatusRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> status{};

  UpdateTenantStatusRequestRequest() {}

  explicit UpdateTenantStatusRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~UpdateTenantStatusRequestRequest() = default;
};
class UpdateTenantStatusRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateTenantStatusRequestRequest> request{};

  UpdateTenantStatusRequest() {}

  explicit UpdateTenantStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        UpdateTenantStatusRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<UpdateTenantStatusRequestRequest>(model1);
      }
    }
  }


  virtual ~UpdateTenantStatusRequest() = default;
};
class UpdateTenantStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<bool> result{};

  UpdateTenantStatusResponseBody() {}

  explicit UpdateTenantStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~UpdateTenantStatusResponseBody() = default;
};
class UpdateTenantStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTenantStatusResponseBody> body{};

  UpdateTenantStatusResponse() {}

  explicit UpdateTenantStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTenantStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTenantStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTenantStatusResponse() = default;
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
  AddGroupMembersResponse addGroupMembersWithOptions(shared_ptr<AddGroupMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddGroupMembersResponse addGroupMembers(shared_ptr<AddGroupMembersRequest> request);
  AddGroupSilenceBlacklistResponse addGroupSilenceBlacklistWithOptions(shared_ptr<AddGroupSilenceBlacklistRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddGroupSilenceBlacklistResponse addGroupSilenceBlacklist(shared_ptr<AddGroupSilenceBlacklistRequest> request);
  AddGroupSilenceWhitelistResponse addGroupSilenceWhitelistWithOptions(shared_ptr<AddGroupSilenceWhitelistRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddGroupSilenceWhitelistResponse addGroupSilenceWhitelist(shared_ptr<AddGroupSilenceWhitelistRequest> request);
  BindInterconnectionCidResponse bindInterconnectionCidWithOptions(shared_ptr<BindInterconnectionCidRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindInterconnectionCidResponse bindInterconnectionCid(shared_ptr<BindInterconnectionCidRequest> request);
  BindInterconnectionUidResponse bindInterconnectionUidWithOptions(shared_ptr<BindInterconnectionUidRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindInterconnectionUidResponse bindInterconnectionUid(shared_ptr<BindInterconnectionUidRequest> request);
  CancelSilenceAllGroupMembersResponse cancelSilenceAllGroupMembersWithOptions(shared_ptr<CancelSilenceAllGroupMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelSilenceAllGroupMembersResponse cancelSilenceAllGroupMembers(shared_ptr<CancelSilenceAllGroupMembersRequest> request);
  CreateGroupResponse createGroupWithOptions(shared_ptr<CreateGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupResponse createGroup(shared_ptr<CreateGroupRequest> request);
  CreateRoomResponse createRoomWithOptions(shared_ptr<CreateRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRoomResponse createRoom(shared_ptr<CreateRoomRequest> request);
  DeleteAppResponse deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppResponse deleteApp(shared_ptr<DeleteAppRequest> request);
  DestroyRoomResponse destroyRoomWithOptions(shared_ptr<DestroyRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DestroyRoomResponse destroyRoom(shared_ptr<DestroyRoomRequest> request);
  DismissGroupResponse dismissGroupWithOptions(shared_ptr<DismissGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DismissGroupResponse dismissGroup(shared_ptr<DismissGroupRequest> request);
  GetCommonConfigResponse getCommonConfigWithOptions(shared_ptr<GetCommonConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCommonConfigResponse getCommonConfig(shared_ptr<GetCommonConfigRequest> request);
  GetGroupByIdResponse getGroupByIdWithOptions(shared_ptr<GetGroupByIdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGroupByIdResponse getGroupById(shared_ptr<GetGroupByIdRequest> request);
  GetGroupMemberByIdsResponse getGroupMemberByIdsWithOptions(shared_ptr<GetGroupMemberByIdsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGroupMemberByIdsResponse getGroupMemberByIds(shared_ptr<GetGroupMemberByIdsRequest> request);
  GetIMConfigResponse getIMConfigWithOptions(shared_ptr<GetIMConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIMConfigResponse getIMConfig(shared_ptr<GetIMConfigRequest> request);
  GetLoginTokenResponse getLoginTokenWithOptions(shared_ptr<GetLoginTokenRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLoginTokenResponse getLoginToken(shared_ptr<GetLoginTokenRequest> request);
  GetMediaUploadUrlResponse getMediaUploadUrlWithOptions(shared_ptr<GetMediaUploadUrlRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMediaUploadUrlResponse getMediaUploadUrl(shared_ptr<GetMediaUploadUrlRequest> request);
  GetMediaUrlResponse getMediaUrlWithOptions(shared_ptr<GetMediaUrlRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMediaUrlResponse getMediaUrl(shared_ptr<GetMediaUrlRequest> request);
  GetMessageByIdResponse getMessageByIdWithOptions(shared_ptr<GetMessageByIdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMessageByIdResponse getMessageById(shared_ptr<GetMessageByIdRequest> request);
  GetRoomStatisticsResponse getRoomStatisticsWithOptions(shared_ptr<GetRoomStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRoomStatisticsResponse getRoomStatistics(shared_ptr<GetRoomStatisticsRequest> request);
  GetUserMuteSettingResponse getUserMuteSettingWithOptions(shared_ptr<GetUserMuteSettingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserMuteSettingResponse getUserMuteSetting(shared_ptr<GetUserMuteSettingRequest> request);
  ImportGroupChatConversationResponse importGroupChatConversationWithOptions(shared_ptr<ImportGroupChatConversationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportGroupChatConversationResponse importGroupChatConversation(shared_ptr<ImportGroupChatConversationRequest> request);
  ImportGroupChatMemberResponse importGroupChatMemberWithOptions(shared_ptr<ImportGroupChatMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportGroupChatMemberResponse importGroupChatMember(shared_ptr<ImportGroupChatMemberRequest> request);
  ImportMessageResponse importMessageWithOptions(shared_ptr<ImportMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportMessageResponse importMessage(shared_ptr<ImportMessageRequest> request);
  ImportSingleConversationResponse importSingleConversationWithOptions(shared_ptr<ImportSingleConversationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportSingleConversationResponse importSingleConversation(shared_ptr<ImportSingleConversationRequest> request);
  InitTenantResponse initTenantWithOptions(shared_ptr<InitTenantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitTenantResponse initTenant(shared_ptr<InitTenantRequest> request);
  KickOffResponse kickOffWithOptions(shared_ptr<KickOffRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  KickOffResponse kickOff(shared_ptr<KickOffRequest> request);
  ListAppInfosResponse listAppInfosWithOptions(shared_ptr<ListAppInfosRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppInfosResponse listAppInfos(shared_ptr<ListAppInfosRequest> request);
  ListCallbackApiIdsResponse listCallbackApiIdsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCallbackApiIdsResponse listCallbackApiIds();
  ListDetailReportStatisticsResponse listDetailReportStatisticsWithOptions(shared_ptr<ListDetailReportStatisticsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDetailReportStatisticsResponse listDetailReportStatistics(shared_ptr<ListDetailReportStatisticsRequest> request);
  ListGroupAllMembersResponse listGroupAllMembersWithOptions(shared_ptr<ListGroupAllMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupAllMembersResponse listGroupAllMembers(shared_ptr<ListGroupAllMembersRequest> request);
  ListGroupSilenceMembersResponse listGroupSilenceMembersWithOptions(shared_ptr<ListGroupSilenceMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupSilenceMembersResponse listGroupSilenceMembers(shared_ptr<ListGroupSilenceMembersRequest> request);
  ListRoomMessagesResponse listRoomMessagesWithOptions(shared_ptr<ListRoomMessagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRoomMessagesResponse listRoomMessages(shared_ptr<ListRoomMessagesRequest> request);
  ListRoomUsersResponse listRoomUsersWithOptions(shared_ptr<ListRoomUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRoomUsersResponse listRoomUsers(shared_ptr<ListRoomUsersRequest> request);
  MuteUsersResponse muteUsersWithOptions(shared_ptr<MuteUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MuteUsersResponse muteUsers(shared_ptr<MuteUsersRequest> request);
  QueryInterconnectionCidMappingResponse queryInterconnectionCidMappingWithOptions(shared_ptr<QueryInterconnectionCidMappingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryInterconnectionCidMappingResponse queryInterconnectionCidMapping(shared_ptr<QueryInterconnectionCidMappingRequest> request);
  RecallMessageResponse recallMessageWithOptions(shared_ptr<RecallMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecallMessageResponse recallMessage(shared_ptr<RecallMessageRequest> request);
  RemoveGroupExtensionByKeysResponse removeGroupExtensionByKeysWithOptions(shared_ptr<RemoveGroupExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveGroupExtensionByKeysResponse removeGroupExtensionByKeys(shared_ptr<RemoveGroupExtensionByKeysRequest> request);
  RemoveGroupMemberExtensionByKeysResponse removeGroupMemberExtensionByKeysWithOptions(shared_ptr<RemoveGroupMemberExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveGroupMemberExtensionByKeysResponse removeGroupMemberExtensionByKeys(shared_ptr<RemoveGroupMemberExtensionByKeysRequest> request);
  RemoveGroupMembersResponse removeGroupMembersWithOptions(shared_ptr<RemoveGroupMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveGroupMembersResponse removeGroupMembers(shared_ptr<RemoveGroupMembersRequest> request);
  RemoveGroupSilenceBlacklistResponse removeGroupSilenceBlacklistWithOptions(shared_ptr<RemoveGroupSilenceBlacklistRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveGroupSilenceBlacklistResponse removeGroupSilenceBlacklist(shared_ptr<RemoveGroupSilenceBlacklistRequest> request);
  RemoveGroupSilenceWhitelistResponse removeGroupSilenceWhitelistWithOptions(shared_ptr<RemoveGroupSilenceWhitelistRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveGroupSilenceWhitelistResponse removeGroupSilenceWhitelist(shared_ptr<RemoveGroupSilenceWhitelistRequest> request);
  RemoveMessageExtensionByKeysResponse removeMessageExtensionByKeysWithOptions(shared_ptr<RemoveMessageExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveMessageExtensionByKeysResponse removeMessageExtensionByKeys(shared_ptr<RemoveMessageExtensionByKeysRequest> request);
  RemoveSingleChatExtensionByKeysResponse removeSingleChatExtensionByKeysWithOptions(shared_ptr<RemoveSingleChatExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveSingleChatExtensionByKeysResponse removeSingleChatExtensionByKeys(shared_ptr<RemoveSingleChatExtensionByKeysRequest> request);
  RemoveUserConversationExtensionByKeysResponse removeUserConversationExtensionByKeysWithOptions(shared_ptr<RemoveUserConversationExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveUserConversationExtensionByKeysResponse removeUserConversationExtensionByKeys(shared_ptr<RemoveUserConversationExtensionByKeysRequest> request);
  SendCustomMessageResponse sendCustomMessageWithOptions(shared_ptr<SendCustomMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendCustomMessageResponse sendCustomMessage(shared_ptr<SendCustomMessageRequest> request);
  SendCustomMessageToRoomUsersResponse sendCustomMessageToRoomUsersWithOptions(shared_ptr<SendCustomMessageToRoomUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendCustomMessageToRoomUsersResponse sendCustomMessageToRoomUsers(shared_ptr<SendCustomMessageToRoomUsersRequest> request);
  SendMessageResponse sendMessageWithOptions(shared_ptr<SendMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendMessageResponse sendMessage(shared_ptr<SendMessageRequest> request);
  SetGroupExtensionByKeysResponse setGroupExtensionByKeysWithOptions(shared_ptr<SetGroupExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetGroupExtensionByKeysResponse setGroupExtensionByKeys(shared_ptr<SetGroupExtensionByKeysRequest> request);
  SetGroupMemberExtensionByKeysResponse setGroupMemberExtensionByKeysWithOptions(shared_ptr<SetGroupMemberExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetGroupMemberExtensionByKeysResponse setGroupMemberExtensionByKeys(shared_ptr<SetGroupMemberExtensionByKeysRequest> request);
  SetGroupOwnerResponse setGroupOwnerWithOptions(shared_ptr<SetGroupOwnerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetGroupOwnerResponse setGroupOwner(shared_ptr<SetGroupOwnerRequest> request);
  SetMessageExtensionByKeysResponse setMessageExtensionByKeysWithOptions(shared_ptr<SetMessageExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetMessageExtensionByKeysResponse setMessageExtensionByKeys(shared_ptr<SetMessageExtensionByKeysRequest> request);
  SetMessageReadResponse setMessageReadWithOptions(shared_ptr<SetMessageReadRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetMessageReadResponse setMessageRead(shared_ptr<SetMessageReadRequest> request);
  SetSingleChatExtensionByKeysResponse setSingleChatExtensionByKeysWithOptions(shared_ptr<SetSingleChatExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetSingleChatExtensionByKeysResponse setSingleChatExtensionByKeys(shared_ptr<SetSingleChatExtensionByKeysRequest> request);
  SetUserConversationExtensionByKeysResponse setUserConversationExtensionByKeysWithOptions(shared_ptr<SetUserConversationExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetUserConversationExtensionByKeysResponse setUserConversationExtensionByKeys(shared_ptr<SetUserConversationExtensionByKeysRequest> request);
  SilenceAllGroupMembersResponse silenceAllGroupMembersWithOptions(shared_ptr<SilenceAllGroupMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SilenceAllGroupMembersResponse silenceAllGroupMembers(shared_ptr<SilenceAllGroupMembersRequest> request);
  UnbindInterconnectionUidResponse unbindInterconnectionUidWithOptions(shared_ptr<UnbindInterconnectionUidRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindInterconnectionUidResponse unbindInterconnectionUid(shared_ptr<UnbindInterconnectionUidRequest> request);
  UpdateAppNameResponse updateAppNameWithOptions(shared_ptr<UpdateAppNameRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppNameResponse updateAppName(shared_ptr<UpdateAppNameRequest> request);
  UpdateAppStatusResponse updateAppStatusWithOptions(shared_ptr<UpdateAppStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppStatusResponse updateAppStatus(shared_ptr<UpdateAppStatusRequest> request);
  UpdateCallbackConfigResponse updateCallbackConfigWithOptions(shared_ptr<UpdateCallbackConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCallbackConfigResponse updateCallbackConfig(shared_ptr<UpdateCallbackConfigRequest> request);
  UpdateGroupIconResponse updateGroupIconWithOptions(shared_ptr<UpdateGroupIconRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupIconResponse updateGroupIcon(shared_ptr<UpdateGroupIconRequest> request);
  UpdateGroupMembersRoleResponse updateGroupMembersRoleWithOptions(shared_ptr<UpdateGroupMembersRoleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupMembersRoleResponse updateGroupMembersRole(shared_ptr<UpdateGroupMembersRoleRequest> request);
  UpdateGroupTitleResponse updateGroupTitleWithOptions(shared_ptr<UpdateGroupTitleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupTitleResponse updateGroupTitle(shared_ptr<UpdateGroupTitleRequest> request);
  UpdateMsgRecallIntervalResponse updateMsgRecallIntervalWithOptions(shared_ptr<UpdateMsgRecallIntervalRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMsgRecallIntervalResponse updateMsgRecallInterval(shared_ptr<UpdateMsgRecallIntervalRequest> request);
  UpdateTenantStatusResponse updateTenantStatusWithOptions(shared_ptr<UpdateTenantStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTenantStatusResponse updateTenantStatus(shared_ptr<UpdateTenantStatusRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Live-interaction20201214

#endif
