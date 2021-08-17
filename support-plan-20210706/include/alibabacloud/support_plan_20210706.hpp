// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SUPPORT-PLAN20210706_H_
#define ALIBABACLOUD_SUPPORT-PLAN20210706_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Support-plan20210706 {
class EnterpriseDingtalkGroupMember : public Darabonba::Model {
public:
  shared_ptr<bool> isAdmin{};
  shared_ptr<string> mobile{};
  shared_ptr<string> name{};

  EnterpriseDingtalkGroupMember() {}

  explicit EnterpriseDingtalkGroupMember(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isAdmin) {
      res["IsAdmin"] = boost::any(*isAdmin);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsAdmin") != m.end() && !m["IsAdmin"].empty()) {
      isAdmin = make_shared<bool>(boost::any_cast<bool>(m["IsAdmin"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~EnterpriseDingtalkGroupMember() = default;
};
class ListEnterpriseDingtalkGroupCustomerMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> openGroupId{};

  ListEnterpriseDingtalkGroupCustomerMembersRequest() {}

  explicit ListEnterpriseDingtalkGroupCustomerMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
  }


  virtual ~ListEnterpriseDingtalkGroupCustomerMembersRequest() = default;
};
class ListEnterpriseDingtalkGroupCustomerMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<vector<EnterpriseDingtalkGroupMember>> data{};

  ListEnterpriseDingtalkGroupCustomerMembersResponseBody() {}

  explicit ListEnterpriseDingtalkGroupCustomerMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<EnterpriseDingtalkGroupMember> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseDingtalkGroupMember model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<EnterpriseDingtalkGroupMember>>(expect1);
      }
    }
  }


  virtual ~ListEnterpriseDingtalkGroupCustomerMembersResponseBody() = default;
};
class ListEnterpriseDingtalkGroupCustomerMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListEnterpriseDingtalkGroupCustomerMembersResponseBody> body{};

  ListEnterpriseDingtalkGroupCustomerMembersResponse() {}

  explicit ListEnterpriseDingtalkGroupCustomerMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEnterpriseDingtalkGroupCustomerMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnterpriseDingtalkGroupCustomerMembersResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnterpriseDingtalkGroupCustomerMembersResponse() = default;
};
class ListEnterpriseDingtalkGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> openGroupId{};
  shared_ptr<string> groupName{};

  ListEnterpriseDingtalkGroupsResponseBodyData() {}

  explicit ListEnterpriseDingtalkGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~ListEnterpriseDingtalkGroupsResponseBodyData() = default;
};
class ListEnterpriseDingtalkGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<vector<ListEnterpriseDingtalkGroupsResponseBodyData>> data{};

  ListEnterpriseDingtalkGroupsResponseBody() {}

  explicit ListEnterpriseDingtalkGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListEnterpriseDingtalkGroupsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnterpriseDingtalkGroupsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEnterpriseDingtalkGroupsResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~ListEnterpriseDingtalkGroupsResponseBody() = default;
};
class ListEnterpriseDingtalkGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListEnterpriseDingtalkGroupsResponseBody> body{};

  ListEnterpriseDingtalkGroupsResponse() {}

  explicit ListEnterpriseDingtalkGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEnterpriseDingtalkGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnterpriseDingtalkGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnterpriseDingtalkGroupsResponse() = default;
};
class DeleteEnterpriseDingtalkGroupCustomerMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> openGroupId{};
  shared_ptr<vector<string>> mobiles{};

  DeleteEnterpriseDingtalkGroupCustomerMemberRequest() {}

  explicit DeleteEnterpriseDingtalkGroupCustomerMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    if (mobiles) {
      res["Mobiles"] = boost::any(*mobiles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
    if (m.find("Mobiles") != m.end() && !m["Mobiles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Mobiles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Mobiles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mobiles = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteEnterpriseDingtalkGroupCustomerMemberRequest() = default;
};
class DeleteEnterpriseDingtalkGroupCustomerMemberShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> openGroupId{};
  shared_ptr<string> mobilesShrink{};

  DeleteEnterpriseDingtalkGroupCustomerMemberShrinkRequest() {}

  explicit DeleteEnterpriseDingtalkGroupCustomerMemberShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    if (mobilesShrink) {
      res["Mobiles"] = boost::any(*mobilesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
    if (m.find("Mobiles") != m.end() && !m["Mobiles"].empty()) {
      mobilesShrink = make_shared<string>(boost::any_cast<string>(m["Mobiles"]));
    }
  }


  virtual ~DeleteEnterpriseDingtalkGroupCustomerMemberShrinkRequest() = default;
};
class DeleteEnterpriseDingtalkGroupCustomerMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};

  DeleteEnterpriseDingtalkGroupCustomerMemberResponseBody() {}

  explicit DeleteEnterpriseDingtalkGroupCustomerMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DeleteEnterpriseDingtalkGroupCustomerMemberResponseBody() = default;
};
class DeleteEnterpriseDingtalkGroupCustomerMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteEnterpriseDingtalkGroupCustomerMemberResponseBody> body{};

  DeleteEnterpriseDingtalkGroupCustomerMemberResponse() {}

  explicit DeleteEnterpriseDingtalkGroupCustomerMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEnterpriseDingtalkGroupCustomerMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEnterpriseDingtalkGroupCustomerMemberResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEnterpriseDingtalkGroupCustomerMemberResponse() = default;
};
class GetEnterpriseDingtalkGroupCustomerMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> openGroupId{};
  shared_ptr<string> mobile{};

  GetEnterpriseDingtalkGroupCustomerMemberRequest() {}

  explicit GetEnterpriseDingtalkGroupCustomerMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
  }


  virtual ~GetEnterpriseDingtalkGroupCustomerMemberRequest() = default;
};
class GetEnterpriseDingtalkGroupCustomerMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<EnterpriseDingtalkGroupMember> data{};

  GetEnterpriseDingtalkGroupCustomerMemberResponseBody() {}

  explicit GetEnterpriseDingtalkGroupCustomerMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        EnterpriseDingtalkGroupMember model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EnterpriseDingtalkGroupMember>(model1);
      }
    }
  }


  virtual ~GetEnterpriseDingtalkGroupCustomerMemberResponseBody() = default;
};
class GetEnterpriseDingtalkGroupCustomerMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEnterpriseDingtalkGroupCustomerMemberResponseBody> body{};

  GetEnterpriseDingtalkGroupCustomerMemberResponse() {}

  explicit GetEnterpriseDingtalkGroupCustomerMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEnterpriseDingtalkGroupCustomerMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnterpriseDingtalkGroupCustomerMemberResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnterpriseDingtalkGroupCustomerMemberResponse() = default;
};
class GetEnterpriseDingtalkGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> openGroupId{};

  GetEnterpriseDingtalkGroupRequest() {}

  explicit GetEnterpriseDingtalkGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
  }


  virtual ~GetEnterpriseDingtalkGroupRequest() = default;
};
class GetEnterpriseDingtalkGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> openGroupId{};
  shared_ptr<string> groupName{};

  GetEnterpriseDingtalkGroupResponseBodyData() {}

  explicit GetEnterpriseDingtalkGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~GetEnterpriseDingtalkGroupResponseBodyData() = default;
};
class GetEnterpriseDingtalkGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<GetEnterpriseDingtalkGroupResponseBodyData> data{};
  shared_ptr<string> code{};

  GetEnterpriseDingtalkGroupResponseBody() {}

  explicit GetEnterpriseDingtalkGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetEnterpriseDingtalkGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetEnterpriseDingtalkGroupResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~GetEnterpriseDingtalkGroupResponseBody() = default;
};
class GetEnterpriseDingtalkGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEnterpriseDingtalkGroupResponseBody> body{};

  GetEnterpriseDingtalkGroupResponse() {}

  explicit GetEnterpriseDingtalkGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEnterpriseDingtalkGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnterpriseDingtalkGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnterpriseDingtalkGroupResponse() = default;
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
  ListEnterpriseDingtalkGroupCustomerMembersResponse listEnterpriseDingtalkGroupCustomerMembersWithOptions(shared_ptr<ListEnterpriseDingtalkGroupCustomerMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnterpriseDingtalkGroupCustomerMembersResponse listEnterpriseDingtalkGroupCustomerMembers(shared_ptr<ListEnterpriseDingtalkGroupCustomerMembersRequest> request);
  ListEnterpriseDingtalkGroupsResponse listEnterpriseDingtalkGroupsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnterpriseDingtalkGroupsResponse listEnterpriseDingtalkGroups();
  DeleteEnterpriseDingtalkGroupCustomerMemberResponse deleteEnterpriseDingtalkGroupCustomerMemberWithOptions(shared_ptr<DeleteEnterpriseDingtalkGroupCustomerMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEnterpriseDingtalkGroupCustomerMemberResponse deleteEnterpriseDingtalkGroupCustomerMember(shared_ptr<DeleteEnterpriseDingtalkGroupCustomerMemberRequest> request);
  GetEnterpriseDingtalkGroupCustomerMemberResponse getEnterpriseDingtalkGroupCustomerMemberWithOptions(shared_ptr<GetEnterpriseDingtalkGroupCustomerMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnterpriseDingtalkGroupCustomerMemberResponse getEnterpriseDingtalkGroupCustomerMember(shared_ptr<GetEnterpriseDingtalkGroupCustomerMemberRequest> request);
  GetEnterpriseDingtalkGroupResponse getEnterpriseDingtalkGroupWithOptions(shared_ptr<GetEnterpriseDingtalkGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnterpriseDingtalkGroupResponse getEnterpriseDingtalkGroup(shared_ptr<GetEnterpriseDingtalkGroupRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Support-plan20210706

#endif
