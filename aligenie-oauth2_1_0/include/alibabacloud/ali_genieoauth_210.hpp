// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALIGENIEOAUTH210_H_
#define ALIBABACLOUD_ALIGENIEOAUTH210_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_AliGenieoauth210 {
class ExecuteSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  ExecuteSceneRequest() {}

  explicit ExecuteSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~ExecuteSceneRequest() = default;
};
class ExecuteSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ExecuteSceneResponseBody() {}

  explicit ExecuteSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExecuteSceneResponseBody() = default;
};
class ExecuteSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteSceneResponseBody> body{};

  ExecuteSceneResponse() {}

  explicit ExecuteSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteSceneResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteSceneResponse() = default;
};
class GetSceneListResponseBodySceneList : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};
  shared_ptr<string> sceneName{};

  GetSceneListResponseBodySceneList() {}

  explicit GetSceneListResponseBodySceneList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
  }


  virtual ~GetSceneListResponseBodySceneList() = default;
};
class GetSceneListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetSceneListResponseBodySceneList>> sceneList{};

  GetSceneListResponseBody() {}

  explicit GetSceneListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sceneList) {
      vector<boost::any> temp1;
      for(auto item1:*sceneList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SceneList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SceneList") != m.end() && !m["SceneList"].empty()) {
      if (typeid(vector<boost::any>) == m["SceneList"].type()) {
        vector<GetSceneListResponseBodySceneList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SceneList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSceneListResponseBodySceneList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sceneList = make_shared<vector<GetSceneListResponseBodySceneList>>(expect1);
      }
    }
  }


  virtual ~GetSceneListResponseBody() = default;
};
class GetSceneListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSceneListResponseBody> body{};

  GetSceneListResponse() {}

  explicit GetSceneListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSceneListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSceneListResponseBody>(model1);
      }
    }
  }


  virtual ~GetSceneListResponse() = default;
};
class GetUserBasicInfoResponseBodyUnionIds : public Darabonba::Model {
public:
  shared_ptr<string> organizationId{};
  shared_ptr<string> unionId{};

  GetUserBasicInfoResponseBodyUnionIds() {}

  explicit GetUserBasicInfoResponseBodyUnionIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (unionId) {
      res["UnionId"] = boost::any(*unionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("UnionId") != m.end() && !m["UnionId"].empty()) {
      unionId = make_shared<string>(boost::any_cast<string>(m["UnionId"]));
    }
  }


  virtual ~GetUserBasicInfoResponseBodyUnionIds() = default;
};
class GetUserBasicInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> nickname{};
  shared_ptr<string> openId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetUserBasicInfoResponseBodyUnionIds>> unionIds{};

  GetUserBasicInfoResponseBody() {}

  explicit GetUserBasicInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (nickname) {
      res["Nickname"] = boost::any(*nickname);
    }
    if (openId) {
      res["OpenId"] = boost::any(*openId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (unionIds) {
      vector<boost::any> temp1;
      for(auto item1:*unionIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UnionIds"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Nickname") != m.end() && !m["Nickname"].empty()) {
      nickname = make_shared<string>(boost::any_cast<string>(m["Nickname"]));
    }
    if (m.find("OpenId") != m.end() && !m["OpenId"].empty()) {
      openId = make_shared<string>(boost::any_cast<string>(m["OpenId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UnionIds") != m.end() && !m["UnionIds"].empty()) {
      if (typeid(vector<boost::any>) == m["UnionIds"].type()) {
        vector<GetUserBasicInfoResponseBodyUnionIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UnionIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserBasicInfoResponseBodyUnionIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        unionIds = make_shared<vector<GetUserBasicInfoResponseBodyUnionIds>>(expect1);
      }
    }
  }


  virtual ~GetUserBasicInfoResponseBody() = default;
};
class GetUserBasicInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserBasicInfoResponseBody> body{};

  GetUserBasicInfoResponse() {}

  explicit GetUserBasicInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserBasicInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserBasicInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserBasicInfoResponse() = default;
};
class GetUserPhoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> phone{};
  shared_ptr<string> requestId{};

  GetUserPhoneResponseBody() {}

  explicit GetUserPhoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetUserPhoneResponseBody() = default;
};
class GetUserPhoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserPhoneResponseBody> body{};

  GetUserPhoneResponse() {}

  explicit GetUserPhoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserPhoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserPhoneResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserPhoneResponse() = default;
};
class OAuth2RevocationEndpointHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  OAuth2RevocationEndpointHeaders() {}

  explicit OAuth2RevocationEndpointHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OAuth2RevocationEndpointHeaders() = default;
};
class OAuth2RevocationEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> token{};
  shared_ptr<string> tokenTypeHint{};

  OAuth2RevocationEndpointRequest() {}

  explicit OAuth2RevocationEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (tokenTypeHint) {
      res["TokenTypeHint"] = boost::any(*tokenTypeHint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("TokenTypeHint") != m.end() && !m["TokenTypeHint"].empty()) {
      tokenTypeHint = make_shared<string>(boost::any_cast<string>(m["TokenTypeHint"]));
    }
  }


  virtual ~OAuth2RevocationEndpointRequest() = default;
};
class OAuth2RevocationEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OAuth2RevocationEndpointResponseBody() {}

  explicit OAuth2RevocationEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OAuth2RevocationEndpointResponseBody() = default;
};
class OAuth2RevocationEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OAuth2RevocationEndpointResponseBody> body{};

  OAuth2RevocationEndpointResponse() {}

  explicit OAuth2RevocationEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OAuth2RevocationEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OAuth2RevocationEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~OAuth2RevocationEndpointResponse() = default;
};
class OAuth2TokenEndpointHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  OAuth2TokenEndpointHeaders() {}

  explicit OAuth2TokenEndpointHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OAuth2TokenEndpointHeaders() = default;
};
class OAuth2TokenEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> grantType{};
  shared_ptr<string> redirectUri{};
  shared_ptr<string> refreshToken{};

  OAuth2TokenEndpointRequest() {}

  explicit OAuth2TokenEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (grantType) {
      res["GrantType"] = boost::any(*grantType);
    }
    if (redirectUri) {
      res["RedirectUri"] = boost::any(*redirectUri);
    }
    if (refreshToken) {
      res["RefreshToken"] = boost::any(*refreshToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("GrantType") != m.end() && !m["GrantType"].empty()) {
      grantType = make_shared<string>(boost::any_cast<string>(m["GrantType"]));
    }
    if (m.find("RedirectUri") != m.end() && !m["RedirectUri"].empty()) {
      redirectUri = make_shared<string>(boost::any_cast<string>(m["RedirectUri"]));
    }
    if (m.find("RefreshToken") != m.end() && !m["RefreshToken"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["RefreshToken"]));
    }
  }


  virtual ~OAuth2TokenEndpointRequest() = default;
};
class OAuth2TokenEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<long> expiresIn{};
  shared_ptr<string> refreshToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scope{};
  shared_ptr<string> tokenType{};

  OAuth2TokenEndpointResponseBody() {}

  explicit OAuth2TokenEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (expiresIn) {
      res["ExpiresIn"] = boost::any(*expiresIn);
    }
    if (refreshToken) {
      res["RefreshToken"] = boost::any(*refreshToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (tokenType) {
      res["TokenType"] = boost::any(*tokenType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("ExpiresIn") != m.end() && !m["ExpiresIn"].empty()) {
      expiresIn = make_shared<long>(boost::any_cast<long>(m["ExpiresIn"]));
    }
    if (m.find("RefreshToken") != m.end() && !m["RefreshToken"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["RefreshToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("TokenType") != m.end() && !m["TokenType"].empty()) {
      tokenType = make_shared<string>(boost::any_cast<string>(m["TokenType"]));
    }
  }


  virtual ~OAuth2TokenEndpointResponseBody() = default;
};
class OAuth2TokenEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OAuth2TokenEndpointResponseBody> body{};

  OAuth2TokenEndpointResponse() {}

  explicit OAuth2TokenEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OAuth2TokenEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OAuth2TokenEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~OAuth2TokenEndpointResponse() = default;
};
class PushDeviceNotificationRequestTenantInfo : public Darabonba::Model {
public:
  shared_ptr<string> subjectId{};

  PushDeviceNotificationRequestTenantInfo() {}

  explicit PushDeviceNotificationRequestTenantInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subjectId) {
      res["SubjectId"] = boost::any(*subjectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubjectId") != m.end() && !m["SubjectId"].empty()) {
      subjectId = make_shared<string>(boost::any_cast<string>(m["SubjectId"]));
    }
  }


  virtual ~PushDeviceNotificationRequestTenantInfo() = default;
};
class PushDeviceNotificationRequestBodySendTarget : public Darabonba::Model {
public:
  shared_ptr<string> targetIdentity{};
  shared_ptr<string> targetType{};

  PushDeviceNotificationRequestBodySendTarget() {}

  explicit PushDeviceNotificationRequestBodySendTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetIdentity) {
      res["TargetIdentity"] = boost::any(*targetIdentity);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetIdentity") != m.end() && !m["TargetIdentity"].empty()) {
      targetIdentity = make_shared<string>(boost::any_cast<string>(m["TargetIdentity"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~PushDeviceNotificationRequestBodySendTarget() = default;
};
class PushDeviceNotificationRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<bool> isDebug{};
  shared_ptr<string> messageTemplateId{};
  shared_ptr<string> organizationId{};
  shared_ptr<map<string, string>> placeHolder{};
  shared_ptr<PushDeviceNotificationRequestBodySendTarget> sendTarget{};

  PushDeviceNotificationRequestBody() {}

  explicit PushDeviceNotificationRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (isDebug) {
      res["IsDebug"] = boost::any(*isDebug);
    }
    if (messageTemplateId) {
      res["MessageTemplateId"] = boost::any(*messageTemplateId);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (placeHolder) {
      res["PlaceHolder"] = boost::any(*placeHolder);
    }
    if (sendTarget) {
      res["SendTarget"] = sendTarget ? boost::any(sendTarget->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("IsDebug") != m.end() && !m["IsDebug"].empty()) {
      isDebug = make_shared<bool>(boost::any_cast<bool>(m["IsDebug"]));
    }
    if (m.find("MessageTemplateId") != m.end() && !m["MessageTemplateId"].empty()) {
      messageTemplateId = make_shared<string>(boost::any_cast<string>(m["MessageTemplateId"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("PlaceHolder") != m.end() && !m["PlaceHolder"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["PlaceHolder"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      placeHolder = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("SendTarget") != m.end() && !m["SendTarget"].empty()) {
      if (typeid(map<string, boost::any>) == m["SendTarget"].type()) {
        PushDeviceNotificationRequestBodySendTarget model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SendTarget"]));
        sendTarget = make_shared<PushDeviceNotificationRequestBodySendTarget>(model1);
      }
    }
  }


  virtual ~PushDeviceNotificationRequestBody() = default;
};
class PushDeviceNotificationRequest : public Darabonba::Model {
public:
  shared_ptr<PushDeviceNotificationRequestTenantInfo> tenantInfo{};
  shared_ptr<PushDeviceNotificationRequestBody> body{};

  PushDeviceNotificationRequest() {}

  explicit PushDeviceNotificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantInfo) {
      res["TenantInfo"] = tenantInfo ? boost::any(tenantInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TenantInfo") != m.end() && !m["TenantInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantInfo"].type()) {
        PushDeviceNotificationRequestTenantInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantInfo"]));
        tenantInfo = make_shared<PushDeviceNotificationRequestTenantInfo>(model1);
      }
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PushDeviceNotificationRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushDeviceNotificationRequestBody>(model1);
      }
    }
  }


  virtual ~PushDeviceNotificationRequest() = default;
};
class PushDeviceNotificationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> tenantInfoShrink{};
  shared_ptr<string> bodyShrink{};

  PushDeviceNotificationShrinkRequest() {}

  explicit PushDeviceNotificationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantInfoShrink) {
      res["TenantInfo"] = boost::any(*tenantInfoShrink);
    }
    if (bodyShrink) {
      res["body"] = boost::any(*bodyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TenantInfo") != m.end() && !m["TenantInfo"].empty()) {
      tenantInfoShrink = make_shared<string>(boost::any_cast<string>(m["TenantInfo"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      bodyShrink = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~PushDeviceNotificationShrinkRequest() = default;
};
class PushDeviceNotificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PushDeviceNotificationResponseBody() {}

  explicit PushDeviceNotificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~PushDeviceNotificationResponseBody() = default;
};
class PushDeviceNotificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushDeviceNotificationResponseBody> body{};

  PushDeviceNotificationResponse() {}

  explicit PushDeviceNotificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushDeviceNotificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushDeviceNotificationResponseBody>(model1);
      }
    }
  }


  virtual ~PushDeviceNotificationResponse() = default;
};
class QueryDeviceListResponseBodyDeviceListDeviceUnionIds : public Darabonba::Model {
public:
  shared_ptr<string> organizationId{};
  shared_ptr<string> unionId{};

  QueryDeviceListResponseBodyDeviceListDeviceUnionIds() {}

  explicit QueryDeviceListResponseBodyDeviceListDeviceUnionIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (unionId) {
      res["UnionId"] = boost::any(*unionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("UnionId") != m.end() && !m["UnionId"].empty()) {
      unionId = make_shared<string>(boost::any_cast<string>(m["UnionId"]));
    }
  }


  virtual ~QueryDeviceListResponseBodyDeviceListDeviceUnionIds() = default;
};
class QueryDeviceListResponseBodyDeviceList : public Darabonba::Model {
public:
  shared_ptr<string> deviceIconUrl{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> deviceOpenId{};
  shared_ptr<vector<QueryDeviceListResponseBodyDeviceListDeviceUnionIds>> deviceUnionIds{};
  shared_ptr<string> online{};

  QueryDeviceListResponseBodyDeviceList() {}

  explicit QueryDeviceListResponseBodyDeviceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceIconUrl) {
      res["DeviceIconUrl"] = boost::any(*deviceIconUrl);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
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
    if (online) {
      res["Online"] = boost::any(*online);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceIconUrl") != m.end() && !m["DeviceIconUrl"].empty()) {
      deviceIconUrl = make_shared<string>(boost::any_cast<string>(m["DeviceIconUrl"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("DeviceOpenId") != m.end() && !m["DeviceOpenId"].empty()) {
      deviceOpenId = make_shared<string>(boost::any_cast<string>(m["DeviceOpenId"]));
    }
    if (m.find("DeviceUnionIds") != m.end() && !m["DeviceUnionIds"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceUnionIds"].type()) {
        vector<QueryDeviceListResponseBodyDeviceListDeviceUnionIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceUnionIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDeviceListResponseBodyDeviceListDeviceUnionIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceUnionIds = make_shared<vector<QueryDeviceListResponseBodyDeviceListDeviceUnionIds>>(expect1);
      }
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<string>(boost::any_cast<string>(m["Online"]));
    }
  }


  virtual ~QueryDeviceListResponseBodyDeviceList() = default;
};
class QueryDeviceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDeviceListResponseBodyDeviceList>> deviceList{};
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> requestId{};

  QueryDeviceListResponseBody() {}

  explicit QueryDeviceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceList) {
      vector<boost::any> temp1;
      for(auto item1:*deviceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceList"] = boost::any(temp1);
    }
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceList") != m.end() && !m["DeviceList"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceList"].type()) {
        vector<QueryDeviceListResponseBodyDeviceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDeviceListResponseBodyDeviceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceList = make_shared<vector<QueryDeviceListResponseBodyDeviceList>>(expect1);
      }
    }
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryDeviceListResponseBody() = default;
};
class QueryDeviceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDeviceListResponseBody> body{};

  QueryDeviceListResponse() {}

  explicit QueryDeviceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDeviceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDeviceListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDeviceListResponse() = default;
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
  ExecuteSceneResponse executeSceneWithOptions(shared_ptr<ExecuteSceneRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteSceneResponse executeScene(shared_ptr<ExecuteSceneRequest> request);
  GetSceneListResponse getSceneListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSceneListResponse getSceneList();
  GetUserBasicInfoResponse getUserBasicInfoWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserBasicInfoResponse getUserBasicInfo();
  GetUserPhoneResponse getUserPhoneWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserPhoneResponse getUserPhone();
  OAuth2RevocationEndpointResponse oAuth2RevocationEndpointWithOptions(shared_ptr<OAuth2RevocationEndpointRequest> request, shared_ptr<OAuth2RevocationEndpointHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OAuth2RevocationEndpointResponse oAuth2RevocationEndpoint(shared_ptr<OAuth2RevocationEndpointRequest> request);
  OAuth2TokenEndpointResponse oAuth2TokenEndpointWithOptions(shared_ptr<OAuth2TokenEndpointRequest> request, shared_ptr<OAuth2TokenEndpointHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OAuth2TokenEndpointResponse oAuth2TokenEndpoint(shared_ptr<OAuth2TokenEndpointRequest> request);
  PushDeviceNotificationResponse pushDeviceNotificationWithOptions(shared_ptr<PushDeviceNotificationRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushDeviceNotificationResponse pushDeviceNotification(shared_ptr<PushDeviceNotificationRequest> request);
  QueryDeviceListResponse queryDeviceListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDeviceListResponse queryDeviceList();

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AliGenieoauth210

#endif
