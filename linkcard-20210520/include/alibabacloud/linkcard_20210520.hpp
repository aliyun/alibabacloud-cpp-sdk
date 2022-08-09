// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_LINKCARD20210520_H_
#define ALIBABACLOUD_LINKCARD20210520_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Linkcard20210520 {
class AddDirectionalCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileUri{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<vector<string>> orderList{};
  shared_ptr<vector<string>> tagList{};
  shared_ptr<string> uploadMethod{};
  shared_ptr<string> uploadType{};

  AddDirectionalCardRequest() {}

  explicit AddDirectionalCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileUri) {
      res["FileUri"] = boost::any(*fileUri);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (orderList) {
      res["OrderList"] = boost::any(*orderList);
    }
    if (tagList) {
      res["TagList"] = boost::any(*tagList);
    }
    if (uploadMethod) {
      res["UploadMethod"] = boost::any(*uploadMethod);
    }
    if (uploadType) {
      res["UploadType"] = boost::any(*uploadType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileUri") != m.end() && !m["FileUri"].empty()) {
      fileUri = make_shared<string>(boost::any_cast<string>(m["FileUri"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("OrderList") != m.end() && !m["OrderList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrderList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrderList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      orderList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UploadMethod") != m.end() && !m["UploadMethod"].empty()) {
      uploadMethod = make_shared<string>(boost::any_cast<string>(m["UploadMethod"]));
    }
    if (m.find("UploadType") != m.end() && !m["UploadType"].empty()) {
      uploadType = make_shared<string>(boost::any_cast<string>(m["UploadType"]));
    }
  }


  virtual ~AddDirectionalCardRequest() = default;
};
class AddDirectionalCardShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileUri{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> orderListShrink{};
  shared_ptr<string> tagListShrink{};
  shared_ptr<string> uploadMethod{};
  shared_ptr<string> uploadType{};

  AddDirectionalCardShrinkRequest() {}

  explicit AddDirectionalCardShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileUri) {
      res["FileUri"] = boost::any(*fileUri);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (orderListShrink) {
      res["OrderList"] = boost::any(*orderListShrink);
    }
    if (tagListShrink) {
      res["TagList"] = boost::any(*tagListShrink);
    }
    if (uploadMethod) {
      res["UploadMethod"] = boost::any(*uploadMethod);
    }
    if (uploadType) {
      res["UploadType"] = boost::any(*uploadType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileUri") != m.end() && !m["FileUri"].empty()) {
      fileUri = make_shared<string>(boost::any_cast<string>(m["FileUri"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("OrderList") != m.end() && !m["OrderList"].empty()) {
      orderListShrink = make_shared<string>(boost::any_cast<string>(m["OrderList"]));
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      tagListShrink = make_shared<string>(boost::any_cast<string>(m["TagList"]));
    }
    if (m.find("UploadMethod") != m.end() && !m["UploadMethod"].empty()) {
      uploadMethod = make_shared<string>(boost::any_cast<string>(m["UploadMethod"]));
    }
    if (m.find("UploadType") != m.end() && !m["UploadType"].empty()) {
      uploadType = make_shared<string>(boost::any_cast<string>(m["UploadType"]));
    }
  }


  virtual ~AddDirectionalCardShrinkRequest() = default;
};
class AddDirectionalCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddDirectionalCardResponseBody() {}

  explicit AddDirectionalCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddDirectionalCardResponseBody() = default;
};
class AddDirectionalCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddDirectionalCardResponseBody> body{};

  AddDirectionalCardResponse() {}

  explicit AddDirectionalCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddDirectionalCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDirectionalCardResponseBody>(model1);
      }
    }
  }


  virtual ~AddDirectionalCardResponse() = default;
};
class AddDirectionalGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};

  AddDirectionalGroupRequest() {}

  explicit AddDirectionalGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~AddDirectionalGroupRequest() = default;
};
class AddDirectionalGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddDirectionalGroupResponseBody() {}

  explicit AddDirectionalGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddDirectionalGroupResponseBody() = default;
};
class AddDirectionalGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddDirectionalGroupResponseBody> body{};

  AddDirectionalGroupResponse() {}

  explicit AddDirectionalGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddDirectionalGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDirectionalGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddDirectionalGroupResponse() = default;
};
class BatchAddDirectionalAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressType{};
  shared_ptr<long> groupId{};
  shared_ptr<vector<string>> listAddress{};
  shared_ptr<string> source{};

  BatchAddDirectionalAddressRequest() {}

  explicit BatchAddDirectionalAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (listAddress) {
      res["ListAddress"] = boost::any(*listAddress);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("ListAddress") != m.end() && !m["ListAddress"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ListAddress"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ListAddress"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      listAddress = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~BatchAddDirectionalAddressRequest() = default;
};
class BatchAddDirectionalAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchAddDirectionalAddressResponseBody() {}

  explicit BatchAddDirectionalAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BatchAddDirectionalAddressResponseBody() = default;
};
class BatchAddDirectionalAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchAddDirectionalAddressResponseBody> body{};

  BatchAddDirectionalAddressResponse() {}

  explicit BatchAddDirectionalAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchAddDirectionalAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchAddDirectionalAddressResponseBody>(model1);
      }
    }
  }


  virtual ~BatchAddDirectionalAddressResponse() = default;
};
class CardStatisticsResponseBodyDataErrorStopStatisticsDTO : public Darabonba::Model {
public:
  shared_ptr<long> poolCount{};
  shared_ptr<long> sameFlowCardCount{};
  shared_ptr<long> singleCardCount{};
  shared_ptr<long> totalCount{};

  CardStatisticsResponseBodyDataErrorStopStatisticsDTO() {}

  explicit CardStatisticsResponseBodyDataErrorStopStatisticsDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (poolCount) {
      res["PoolCount"] = boost::any(*poolCount);
    }
    if (sameFlowCardCount) {
      res["SameFlowCardCount"] = boost::any(*sameFlowCardCount);
    }
    if (singleCardCount) {
      res["SingleCardCount"] = boost::any(*singleCardCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PoolCount") != m.end() && !m["PoolCount"].empty()) {
      poolCount = make_shared<long>(boost::any_cast<long>(m["PoolCount"]));
    }
    if (m.find("SameFlowCardCount") != m.end() && !m["SameFlowCardCount"].empty()) {
      sameFlowCardCount = make_shared<long>(boost::any_cast<long>(m["SameFlowCardCount"]));
    }
    if (m.find("SingleCardCount") != m.end() && !m["SingleCardCount"].empty()) {
      singleCardCount = make_shared<long>(boost::any_cast<long>(m["SingleCardCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CardStatisticsResponseBodyDataErrorStopStatisticsDTO() = default;
};
class CardStatisticsResponseBodyDataExhaustStopStatisticsDTO : public Darabonba::Model {
public:
  shared_ptr<long> poolCount{};
  shared_ptr<long> sameFlowCardCount{};
  shared_ptr<long> singleCardCount{};
  shared_ptr<long> totalCount{};

  CardStatisticsResponseBodyDataExhaustStopStatisticsDTO() {}

  explicit CardStatisticsResponseBodyDataExhaustStopStatisticsDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (poolCount) {
      res["PoolCount"] = boost::any(*poolCount);
    }
    if (sameFlowCardCount) {
      res["SameFlowCardCount"] = boost::any(*sameFlowCardCount);
    }
    if (singleCardCount) {
      res["SingleCardCount"] = boost::any(*singleCardCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PoolCount") != m.end() && !m["PoolCount"].empty()) {
      poolCount = make_shared<long>(boost::any_cast<long>(m["PoolCount"]));
    }
    if (m.find("SameFlowCardCount") != m.end() && !m["SameFlowCardCount"].empty()) {
      sameFlowCardCount = make_shared<long>(boost::any_cast<long>(m["SameFlowCardCount"]));
    }
    if (m.find("SingleCardCount") != m.end() && !m["SingleCardCount"].empty()) {
      singleCardCount = make_shared<long>(boost::any_cast<long>(m["SingleCardCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CardStatisticsResponseBodyDataExhaustStopStatisticsDTO() = default;
};
class CardStatisticsResponseBodyDataExpireStopStatisticsDTO : public Darabonba::Model {
public:
  shared_ptr<long> poolCount{};
  shared_ptr<long> sameFlowCardCount{};
  shared_ptr<long> singleCardCount{};
  shared_ptr<long> totalCount{};

  CardStatisticsResponseBodyDataExpireStopStatisticsDTO() {}

  explicit CardStatisticsResponseBodyDataExpireStopStatisticsDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (poolCount) {
      res["PoolCount"] = boost::any(*poolCount);
    }
    if (sameFlowCardCount) {
      res["SameFlowCardCount"] = boost::any(*sameFlowCardCount);
    }
    if (singleCardCount) {
      res["SingleCardCount"] = boost::any(*singleCardCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PoolCount") != m.end() && !m["PoolCount"].empty()) {
      poolCount = make_shared<long>(boost::any_cast<long>(m["PoolCount"]));
    }
    if (m.find("SameFlowCardCount") != m.end() && !m["SameFlowCardCount"].empty()) {
      sameFlowCardCount = make_shared<long>(boost::any_cast<long>(m["SameFlowCardCount"]));
    }
    if (m.find("SingleCardCount") != m.end() && !m["SingleCardCount"].empty()) {
      singleCardCount = make_shared<long>(boost::any_cast<long>(m["SingleCardCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CardStatisticsResponseBodyDataExpireStopStatisticsDTO() = default;
};
class CardStatisticsResponseBodyDataFlowOutStatisticsDTO : public Darabonba::Model {
public:
  shared_ptr<long> poolCount{};
  shared_ptr<long> sameFlowCardCount{};
  shared_ptr<long> singleCardCount{};
  shared_ptr<long> totalCount{};

  CardStatisticsResponseBodyDataFlowOutStatisticsDTO() {}

  explicit CardStatisticsResponseBodyDataFlowOutStatisticsDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (poolCount) {
      res["PoolCount"] = boost::any(*poolCount);
    }
    if (sameFlowCardCount) {
      res["SameFlowCardCount"] = boost::any(*sameFlowCardCount);
    }
    if (singleCardCount) {
      res["SingleCardCount"] = boost::any(*singleCardCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PoolCount") != m.end() && !m["PoolCount"].empty()) {
      poolCount = make_shared<long>(boost::any_cast<long>(m["PoolCount"]));
    }
    if (m.find("SameFlowCardCount") != m.end() && !m["SameFlowCardCount"].empty()) {
      sameFlowCardCount = make_shared<long>(boost::any_cast<long>(m["SameFlowCardCount"]));
    }
    if (m.find("SingleCardCount") != m.end() && !m["SingleCardCount"].empty()) {
      singleCardCount = make_shared<long>(boost::any_cast<long>(m["SingleCardCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CardStatisticsResponseBodyDataFlowOutStatisticsDTO() = default;
};
class CardStatisticsResponseBodyDataManageStopStatisticsDTO : public Darabonba::Model {
public:
  shared_ptr<long> poolCount{};
  shared_ptr<long> sameFlowCardCount{};
  shared_ptr<long> singleCardCount{};
  shared_ptr<long> totalCount{};

  CardStatisticsResponseBodyDataManageStopStatisticsDTO() {}

  explicit CardStatisticsResponseBodyDataManageStopStatisticsDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (poolCount) {
      res["PoolCount"] = boost::any(*poolCount);
    }
    if (sameFlowCardCount) {
      res["SameFlowCardCount"] = boost::any(*sameFlowCardCount);
    }
    if (singleCardCount) {
      res["SingleCardCount"] = boost::any(*singleCardCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PoolCount") != m.end() && !m["PoolCount"].empty()) {
      poolCount = make_shared<long>(boost::any_cast<long>(m["PoolCount"]));
    }
    if (m.find("SameFlowCardCount") != m.end() && !m["SameFlowCardCount"].empty()) {
      sameFlowCardCount = make_shared<long>(boost::any_cast<long>(m["SameFlowCardCount"]));
    }
    if (m.find("SingleCardCount") != m.end() && !m["SingleCardCount"].empty()) {
      singleCardCount = make_shared<long>(boost::any_cast<long>(m["SingleCardCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CardStatisticsResponseBodyDataManageStopStatisticsDTO() = default;
};
class CardStatisticsResponseBodyDataRiskWaringStatisticsDTO : public Darabonba::Model {
public:
  shared_ptr<long> stopCount{};
  shared_ptr<long> waringTotalCount{};
  shared_ptr<long> warningCount{};

  CardStatisticsResponseBodyDataRiskWaringStatisticsDTO() {}

  explicit CardStatisticsResponseBodyDataRiskWaringStatisticsDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stopCount) {
      res["StopCount"] = boost::any(*stopCount);
    }
    if (waringTotalCount) {
      res["WaringTotalCount"] = boost::any(*waringTotalCount);
    }
    if (warningCount) {
      res["WarningCount"] = boost::any(*warningCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StopCount") != m.end() && !m["StopCount"].empty()) {
      stopCount = make_shared<long>(boost::any_cast<long>(m["StopCount"]));
    }
    if (m.find("WaringTotalCount") != m.end() && !m["WaringTotalCount"].empty()) {
      waringTotalCount = make_shared<long>(boost::any_cast<long>(m["WaringTotalCount"]));
    }
    if (m.find("WarningCount") != m.end() && !m["WarningCount"].empty()) {
      warningCount = make_shared<long>(boost::any_cast<long>(m["WarningCount"]));
    }
  }


  virtual ~CardStatisticsResponseBodyDataRiskWaringStatisticsDTO() = default;
};
class CardStatisticsResponseBodyDataUnCertifiedStopStatisticsDTO : public Darabonba::Model {
public:
  shared_ptr<long> poolCount{};
  shared_ptr<long> sameFlowCardCount{};
  shared_ptr<long> singleCardCount{};
  shared_ptr<long> totalCount{};

  CardStatisticsResponseBodyDataUnCertifiedStopStatisticsDTO() {}

  explicit CardStatisticsResponseBodyDataUnCertifiedStopStatisticsDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (poolCount) {
      res["PoolCount"] = boost::any(*poolCount);
    }
    if (sameFlowCardCount) {
      res["SameFlowCardCount"] = boost::any(*sameFlowCardCount);
    }
    if (singleCardCount) {
      res["SingleCardCount"] = boost::any(*singleCardCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PoolCount") != m.end() && !m["PoolCount"].empty()) {
      poolCount = make_shared<long>(boost::any_cast<long>(m["PoolCount"]));
    }
    if (m.find("SameFlowCardCount") != m.end() && !m["SameFlowCardCount"].empty()) {
      sameFlowCardCount = make_shared<long>(boost::any_cast<long>(m["SameFlowCardCount"]));
    }
    if (m.find("SingleCardCount") != m.end() && !m["SingleCardCount"].empty()) {
      singleCardCount = make_shared<long>(boost::any_cast<long>(m["SingleCardCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CardStatisticsResponseBodyDataUnCertifiedStopStatisticsDTO() = default;
};
class CardStatisticsResponseBodyDataUnbindResumeStatisticsDTO : public Darabonba::Model {
public:
  shared_ptr<long> poolCount{};
  shared_ptr<long> sameFlowCardCount{};
  shared_ptr<long> singleCardCount{};
  shared_ptr<long> totalCount{};

  CardStatisticsResponseBodyDataUnbindResumeStatisticsDTO() {}

  explicit CardStatisticsResponseBodyDataUnbindResumeStatisticsDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (poolCount) {
      res["PoolCount"] = boost::any(*poolCount);
    }
    if (sameFlowCardCount) {
      res["SameFlowCardCount"] = boost::any(*sameFlowCardCount);
    }
    if (singleCardCount) {
      res["SingleCardCount"] = boost::any(*singleCardCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PoolCount") != m.end() && !m["PoolCount"].empty()) {
      poolCount = make_shared<long>(boost::any_cast<long>(m["PoolCount"]));
    }
    if (m.find("SameFlowCardCount") != m.end() && !m["SameFlowCardCount"].empty()) {
      sameFlowCardCount = make_shared<long>(boost::any_cast<long>(m["SameFlowCardCount"]));
    }
    if (m.find("SingleCardCount") != m.end() && !m["SingleCardCount"].empty()) {
      singleCardCount = make_shared<long>(boost::any_cast<long>(m["SingleCardCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CardStatisticsResponseBodyDataUnbindResumeStatisticsDTO() = default;
};
class CardStatisticsResponseBodyDataWeekWarnStatisticsDTO : public Darabonba::Model {
public:
  shared_ptr<long> poolCount{};
  shared_ptr<long> sameFlowCardCount{};
  shared_ptr<long> singleCardCount{};
  shared_ptr<long> totalCount{};

  CardStatisticsResponseBodyDataWeekWarnStatisticsDTO() {}

  explicit CardStatisticsResponseBodyDataWeekWarnStatisticsDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (poolCount) {
      res["PoolCount"] = boost::any(*poolCount);
    }
    if (sameFlowCardCount) {
      res["SameFlowCardCount"] = boost::any(*sameFlowCardCount);
    }
    if (singleCardCount) {
      res["SingleCardCount"] = boost::any(*singleCardCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PoolCount") != m.end() && !m["PoolCount"].empty()) {
      poolCount = make_shared<long>(boost::any_cast<long>(m["PoolCount"]));
    }
    if (m.find("SameFlowCardCount") != m.end() && !m["SameFlowCardCount"].empty()) {
      sameFlowCardCount = make_shared<long>(boost::any_cast<long>(m["SameFlowCardCount"]));
    }
    if (m.find("SingleCardCount") != m.end() && !m["SingleCardCount"].empty()) {
      singleCardCount = make_shared<long>(boost::any_cast<long>(m["SingleCardCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CardStatisticsResponseBodyDataWeekWarnStatisticsDTO() = default;
};
class CardStatisticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<CardStatisticsResponseBodyDataErrorStopStatisticsDTO> errorStopStatisticsDTO{};
  shared_ptr<CardStatisticsResponseBodyDataExhaustStopStatisticsDTO> exhaustStopStatisticsDTO{};
  shared_ptr<CardStatisticsResponseBodyDataExpireStopStatisticsDTO> expireStopStatisticsDTO{};
  shared_ptr<CardStatisticsResponseBodyDataFlowOutStatisticsDTO> flowOutStatisticsDTO{};
  shared_ptr<CardStatisticsResponseBodyDataManageStopStatisticsDTO> manageStopStatisticsDTO{};
  shared_ptr<CardStatisticsResponseBodyDataRiskWaringStatisticsDTO> riskWaringStatisticsDTO{};
  shared_ptr<CardStatisticsResponseBodyDataUnCertifiedStopStatisticsDTO> unCertifiedStopStatisticsDTO{};
  shared_ptr<CardStatisticsResponseBodyDataUnbindResumeStatisticsDTO> unbindResumeStatisticsDTO{};
  shared_ptr<CardStatisticsResponseBodyDataWeekWarnStatisticsDTO> weekWarnStatisticsDTO{};

  CardStatisticsResponseBodyData() {}

  explicit CardStatisticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorStopStatisticsDTO) {
      res["ErrorStopStatisticsDTO"] = errorStopStatisticsDTO ? boost::any(errorStopStatisticsDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (exhaustStopStatisticsDTO) {
      res["ExhaustStopStatisticsDTO"] = exhaustStopStatisticsDTO ? boost::any(exhaustStopStatisticsDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (expireStopStatisticsDTO) {
      res["ExpireStopStatisticsDTO"] = expireStopStatisticsDTO ? boost::any(expireStopStatisticsDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (flowOutStatisticsDTO) {
      res["FlowOutStatisticsDTO"] = flowOutStatisticsDTO ? boost::any(flowOutStatisticsDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (manageStopStatisticsDTO) {
      res["ManageStopStatisticsDTO"] = manageStopStatisticsDTO ? boost::any(manageStopStatisticsDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (riskWaringStatisticsDTO) {
      res["RiskWaringStatisticsDTO"] = riskWaringStatisticsDTO ? boost::any(riskWaringStatisticsDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (unCertifiedStopStatisticsDTO) {
      res["UnCertifiedStopStatisticsDTO"] = unCertifiedStopStatisticsDTO ? boost::any(unCertifiedStopStatisticsDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (unbindResumeStatisticsDTO) {
      res["UnbindResumeStatisticsDTO"] = unbindResumeStatisticsDTO ? boost::any(unbindResumeStatisticsDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (weekWarnStatisticsDTO) {
      res["WeekWarnStatisticsDTO"] = weekWarnStatisticsDTO ? boost::any(weekWarnStatisticsDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorStopStatisticsDTO") != m.end() && !m["ErrorStopStatisticsDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["ErrorStopStatisticsDTO"].type()) {
        CardStatisticsResponseBodyDataErrorStopStatisticsDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ErrorStopStatisticsDTO"]));
        errorStopStatisticsDTO = make_shared<CardStatisticsResponseBodyDataErrorStopStatisticsDTO>(model1);
      }
    }
    if (m.find("ExhaustStopStatisticsDTO") != m.end() && !m["ExhaustStopStatisticsDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExhaustStopStatisticsDTO"].type()) {
        CardStatisticsResponseBodyDataExhaustStopStatisticsDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExhaustStopStatisticsDTO"]));
        exhaustStopStatisticsDTO = make_shared<CardStatisticsResponseBodyDataExhaustStopStatisticsDTO>(model1);
      }
    }
    if (m.find("ExpireStopStatisticsDTO") != m.end() && !m["ExpireStopStatisticsDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExpireStopStatisticsDTO"].type()) {
        CardStatisticsResponseBodyDataExpireStopStatisticsDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExpireStopStatisticsDTO"]));
        expireStopStatisticsDTO = make_shared<CardStatisticsResponseBodyDataExpireStopStatisticsDTO>(model1);
      }
    }
    if (m.find("FlowOutStatisticsDTO") != m.end() && !m["FlowOutStatisticsDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["FlowOutStatisticsDTO"].type()) {
        CardStatisticsResponseBodyDataFlowOutStatisticsDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FlowOutStatisticsDTO"]));
        flowOutStatisticsDTO = make_shared<CardStatisticsResponseBodyDataFlowOutStatisticsDTO>(model1);
      }
    }
    if (m.find("ManageStopStatisticsDTO") != m.end() && !m["ManageStopStatisticsDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["ManageStopStatisticsDTO"].type()) {
        CardStatisticsResponseBodyDataManageStopStatisticsDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ManageStopStatisticsDTO"]));
        manageStopStatisticsDTO = make_shared<CardStatisticsResponseBodyDataManageStopStatisticsDTO>(model1);
      }
    }
    if (m.find("RiskWaringStatisticsDTO") != m.end() && !m["RiskWaringStatisticsDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["RiskWaringStatisticsDTO"].type()) {
        CardStatisticsResponseBodyDataRiskWaringStatisticsDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RiskWaringStatisticsDTO"]));
        riskWaringStatisticsDTO = make_shared<CardStatisticsResponseBodyDataRiskWaringStatisticsDTO>(model1);
      }
    }
    if (m.find("UnCertifiedStopStatisticsDTO") != m.end() && !m["UnCertifiedStopStatisticsDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["UnCertifiedStopStatisticsDTO"].type()) {
        CardStatisticsResponseBodyDataUnCertifiedStopStatisticsDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UnCertifiedStopStatisticsDTO"]));
        unCertifiedStopStatisticsDTO = make_shared<CardStatisticsResponseBodyDataUnCertifiedStopStatisticsDTO>(model1);
      }
    }
    if (m.find("UnbindResumeStatisticsDTO") != m.end() && !m["UnbindResumeStatisticsDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["UnbindResumeStatisticsDTO"].type()) {
        CardStatisticsResponseBodyDataUnbindResumeStatisticsDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UnbindResumeStatisticsDTO"]));
        unbindResumeStatisticsDTO = make_shared<CardStatisticsResponseBodyDataUnbindResumeStatisticsDTO>(model1);
      }
    }
    if (m.find("WeekWarnStatisticsDTO") != m.end() && !m["WeekWarnStatisticsDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["WeekWarnStatisticsDTO"].type()) {
        CardStatisticsResponseBodyDataWeekWarnStatisticsDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WeekWarnStatisticsDTO"]));
        weekWarnStatisticsDTO = make_shared<CardStatisticsResponseBodyDataWeekWarnStatisticsDTO>(model1);
      }
    }
  }


  virtual ~CardStatisticsResponseBodyData() = default;
};
class CardStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CardStatisticsResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CardStatisticsResponseBody() {}

  explicit CardStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
        CardStatisticsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CardStatisticsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CardStatisticsResponseBody() = default;
};
class CardStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CardStatisticsResponseBody> body{};

  CardStatisticsResponse() {}

  explicit CardStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CardStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CardStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~CardStatisticsResponse() = default;
};
class ForceActivationRequest : public Darabonba::Model {
public:
  shared_ptr<string> dateType{};
  shared_ptr<string> iccid{};

  ForceActivationRequest() {}

  explicit ForceActivationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateType) {
      res["DateType"] = boost::any(*dateType);
    }
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateType") != m.end() && !m["DateType"].empty()) {
      dateType = make_shared<string>(boost::any_cast<string>(m["DateType"]));
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
  }


  virtual ~ForceActivationRequest() = default;
};
class ForceActivationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ForceActivationResponseBody() {}

  explicit ForceActivationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ForceActivationResponseBody() = default;
};
class ForceActivationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ForceActivationResponseBody> body{};

  ForceActivationResponse() {}

  explicit ForceActivationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ForceActivationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ForceActivationResponseBody>(model1);
      }
    }
  }


  virtual ~ForceActivationResponse() = default;
};
class GetCardDetailRequest : public Darabonba::Model {
public:
  shared_ptr<bool> destroyCard{};
  shared_ptr<string> iccid{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> showPsim{};

  GetCardDetailRequest() {}

  explicit GetCardDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destroyCard) {
      res["DestroyCard"] = boost::any(*destroyCard);
    }
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (showPsim) {
      res["ShowPsim"] = boost::any(*showPsim);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestroyCard") != m.end() && !m["DestroyCard"].empty()) {
      destroyCard = make_shared<bool>(boost::any_cast<bool>(m["DestroyCard"]));
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ShowPsim") != m.end() && !m["ShowPsim"].empty()) {
      showPsim = make_shared<bool>(boost::any_cast<bool>(m["ShowPsim"]));
    }
  }


  virtual ~GetCardDetailRequest() = default;
};
class GetCardDetailResponseBodyDataListPsimCards : public Darabonba::Model {
public:
  shared_ptr<string> apnName{};
  shared_ptr<string> certifyStatus{};
  shared_ptr<string> iccid{};
  shared_ptr<vector<string>> imsi{};
  shared_ptr<vector<string>> ip{};
  shared_ptr<vector<string>> msisdn{};
  shared_ptr<bool> openSms{};
  shared_ptr<string> osStatus{};
  shared_ptr<string> periodAddFlow{};
  shared_ptr<string> periodSmsUse{};
  shared_ptr<string> privateNetworkSegment{};
  shared_ptr<string> status{};
  shared_ptr<string> vendor{};

  GetCardDetailResponseBodyDataListPsimCards() {}

  explicit GetCardDetailResponseBodyDataListPsimCards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apnName) {
      res["ApnName"] = boost::any(*apnName);
    }
    if (certifyStatus) {
      res["CertifyStatus"] = boost::any(*certifyStatus);
    }
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (imsi) {
      res["Imsi"] = boost::any(*imsi);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (msisdn) {
      res["Msisdn"] = boost::any(*msisdn);
    }
    if (openSms) {
      res["OpenSms"] = boost::any(*openSms);
    }
    if (osStatus) {
      res["OsStatus"] = boost::any(*osStatus);
    }
    if (periodAddFlow) {
      res["PeriodAddFlow"] = boost::any(*periodAddFlow);
    }
    if (periodSmsUse) {
      res["PeriodSmsUse"] = boost::any(*periodSmsUse);
    }
    if (privateNetworkSegment) {
      res["PrivateNetworkSegment"] = boost::any(*privateNetworkSegment);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApnName") != m.end() && !m["ApnName"].empty()) {
      apnName = make_shared<string>(boost::any_cast<string>(m["ApnName"]));
    }
    if (m.find("CertifyStatus") != m.end() && !m["CertifyStatus"].empty()) {
      certifyStatus = make_shared<string>(boost::any_cast<string>(m["CertifyStatus"]));
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("Imsi") != m.end() && !m["Imsi"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Imsi"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Imsi"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imsi = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ip"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ip"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ip = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Msisdn") != m.end() && !m["Msisdn"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Msisdn"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Msisdn"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      msisdn = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OpenSms") != m.end() && !m["OpenSms"].empty()) {
      openSms = make_shared<bool>(boost::any_cast<bool>(m["OpenSms"]));
    }
    if (m.find("OsStatus") != m.end() && !m["OsStatus"].empty()) {
      osStatus = make_shared<string>(boost::any_cast<string>(m["OsStatus"]));
    }
    if (m.find("PeriodAddFlow") != m.end() && !m["PeriodAddFlow"].empty()) {
      periodAddFlow = make_shared<string>(boost::any_cast<string>(m["PeriodAddFlow"]));
    }
    if (m.find("PeriodSmsUse") != m.end() && !m["PeriodSmsUse"].empty()) {
      periodSmsUse = make_shared<string>(boost::any_cast<string>(m["PeriodSmsUse"]));
    }
    if (m.find("PrivateNetworkSegment") != m.end() && !m["PrivateNetworkSegment"].empty()) {
      privateNetworkSegment = make_shared<string>(boost::any_cast<string>(m["PrivateNetworkSegment"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
  }


  virtual ~GetCardDetailResponseBodyDataListPsimCards() = default;
};
class GetCardDetailResponseBodyDataVsimCardInfoTagList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> tagName{};

  GetCardDetailResponseBodyDataVsimCardInfoTagList() {}

  explicit GetCardDetailResponseBodyDataVsimCardInfoTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~GetCardDetailResponseBodyDataVsimCardInfoTagList() = default;
};
class GetCardDetailResponseBodyDataVsimCardInfo : public Darabonba::Model {
public:
  shared_ptr<string> activeTime{};
  shared_ptr<string> activeType{};
  shared_ptr<string> aliFee{};
  shared_ptr<string> aliyunOrderId{};
  shared_ptr<string> apnName{};
  shared_ptr<bool> autoLimitResume{};
  shared_ptr<bool> autoRebindReuse{};
  shared_ptr<long> cardLimitSpeedThreshold{};
  shared_ptr<long> cardLimitStopThreshold{};
  shared_ptr<string> certifyStatus{};
  shared_ptr<string> certifyType{};
  shared_ptr<string> credentialInstanceId{};
  shared_ptr<long> credentialLimitSpeedThreshold{};
  shared_ptr<long> credentialLimitStopThreshold{};
  shared_ptr<string> credentialNo{};
  shared_ptr<string> credentialType{};
  shared_ptr<string> dataLevel{};
  shared_ptr<string> dataType{};
  shared_ptr<string> deviceImei{};
  shared_ptr<string> directionalGroupId{};
  shared_ptr<string> directionalGroupName{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> flowThresholdUnit{};
  shared_ptr<string> iccid{};
  shared_ptr<vector<string>> imsi{};
  shared_ptr<vector<string>> ip{};
  shared_ptr<bool> isAutoRecharge{};
  shared_ptr<vector<string>> msisdn{};
  shared_ptr<string> notifyId{};
  shared_ptr<string> openAccountTime{};
  shared_ptr<bool> openSms{};
  shared_ptr<string> osStatus{};
  shared_ptr<string> period{};
  shared_ptr<string> periodAddFlow{};
  shared_ptr<string> periodRestFlow{};
  shared_ptr<string> periodSmsUse{};
  shared_ptr<string> privateNetworkSegment{};
  shared_ptr<string> simType{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetCardDetailResponseBodyDataVsimCardInfoTagList>> tagList{};
  shared_ptr<string> vendor{};
  shared_ptr<long> vsimInstanceId{};

  GetCardDetailResponseBodyDataVsimCardInfo() {}

  explicit GetCardDetailResponseBodyDataVsimCardInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeTime) {
      res["ActiveTime"] = boost::any(*activeTime);
    }
    if (activeType) {
      res["ActiveType"] = boost::any(*activeType);
    }
    if (aliFee) {
      res["AliFee"] = boost::any(*aliFee);
    }
    if (aliyunOrderId) {
      res["AliyunOrderId"] = boost::any(*aliyunOrderId);
    }
    if (apnName) {
      res["ApnName"] = boost::any(*apnName);
    }
    if (autoLimitResume) {
      res["AutoLimitResume"] = boost::any(*autoLimitResume);
    }
    if (autoRebindReuse) {
      res["AutoRebindReuse"] = boost::any(*autoRebindReuse);
    }
    if (cardLimitSpeedThreshold) {
      res["CardLimitSpeedThreshold"] = boost::any(*cardLimitSpeedThreshold);
    }
    if (cardLimitStopThreshold) {
      res["CardLimitStopThreshold"] = boost::any(*cardLimitStopThreshold);
    }
    if (certifyStatus) {
      res["CertifyStatus"] = boost::any(*certifyStatus);
    }
    if (certifyType) {
      res["CertifyType"] = boost::any(*certifyType);
    }
    if (credentialInstanceId) {
      res["CredentialInstanceId"] = boost::any(*credentialInstanceId);
    }
    if (credentialLimitSpeedThreshold) {
      res["CredentialLimitSpeedThreshold"] = boost::any(*credentialLimitSpeedThreshold);
    }
    if (credentialLimitStopThreshold) {
      res["CredentialLimitStopThreshold"] = boost::any(*credentialLimitStopThreshold);
    }
    if (credentialNo) {
      res["CredentialNo"] = boost::any(*credentialNo);
    }
    if (credentialType) {
      res["CredentialType"] = boost::any(*credentialType);
    }
    if (dataLevel) {
      res["DataLevel"] = boost::any(*dataLevel);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (deviceImei) {
      res["DeviceImei"] = boost::any(*deviceImei);
    }
    if (directionalGroupId) {
      res["DirectionalGroupId"] = boost::any(*directionalGroupId);
    }
    if (directionalGroupName) {
      res["DirectionalGroupName"] = boost::any(*directionalGroupName);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (flowThresholdUnit) {
      res["FlowThresholdUnit"] = boost::any(*flowThresholdUnit);
    }
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (imsi) {
      res["Imsi"] = boost::any(*imsi);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (isAutoRecharge) {
      res["IsAutoRecharge"] = boost::any(*isAutoRecharge);
    }
    if (msisdn) {
      res["Msisdn"] = boost::any(*msisdn);
    }
    if (notifyId) {
      res["NotifyId"] = boost::any(*notifyId);
    }
    if (openAccountTime) {
      res["OpenAccountTime"] = boost::any(*openAccountTime);
    }
    if (openSms) {
      res["OpenSms"] = boost::any(*openSms);
    }
    if (osStatus) {
      res["OsStatus"] = boost::any(*osStatus);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodAddFlow) {
      res["PeriodAddFlow"] = boost::any(*periodAddFlow);
    }
    if (periodRestFlow) {
      res["PeriodRestFlow"] = boost::any(*periodRestFlow);
    }
    if (periodSmsUse) {
      res["PeriodSmsUse"] = boost::any(*periodSmsUse);
    }
    if (privateNetworkSegment) {
      res["PrivateNetworkSegment"] = boost::any(*privateNetworkSegment);
    }
    if (simType) {
      res["SimType"] = boost::any(*simType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagList) {
      vector<boost::any> temp1;
      for(auto item1:*tagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagList"] = boost::any(temp1);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    if (vsimInstanceId) {
      res["VsimInstanceId"] = boost::any(*vsimInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveTime") != m.end() && !m["ActiveTime"].empty()) {
      activeTime = make_shared<string>(boost::any_cast<string>(m["ActiveTime"]));
    }
    if (m.find("ActiveType") != m.end() && !m["ActiveType"].empty()) {
      activeType = make_shared<string>(boost::any_cast<string>(m["ActiveType"]));
    }
    if (m.find("AliFee") != m.end() && !m["AliFee"].empty()) {
      aliFee = make_shared<string>(boost::any_cast<string>(m["AliFee"]));
    }
    if (m.find("AliyunOrderId") != m.end() && !m["AliyunOrderId"].empty()) {
      aliyunOrderId = make_shared<string>(boost::any_cast<string>(m["AliyunOrderId"]));
    }
    if (m.find("ApnName") != m.end() && !m["ApnName"].empty()) {
      apnName = make_shared<string>(boost::any_cast<string>(m["ApnName"]));
    }
    if (m.find("AutoLimitResume") != m.end() && !m["AutoLimitResume"].empty()) {
      autoLimitResume = make_shared<bool>(boost::any_cast<bool>(m["AutoLimitResume"]));
    }
    if (m.find("AutoRebindReuse") != m.end() && !m["AutoRebindReuse"].empty()) {
      autoRebindReuse = make_shared<bool>(boost::any_cast<bool>(m["AutoRebindReuse"]));
    }
    if (m.find("CardLimitSpeedThreshold") != m.end() && !m["CardLimitSpeedThreshold"].empty()) {
      cardLimitSpeedThreshold = make_shared<long>(boost::any_cast<long>(m["CardLimitSpeedThreshold"]));
    }
    if (m.find("CardLimitStopThreshold") != m.end() && !m["CardLimitStopThreshold"].empty()) {
      cardLimitStopThreshold = make_shared<long>(boost::any_cast<long>(m["CardLimitStopThreshold"]));
    }
    if (m.find("CertifyStatus") != m.end() && !m["CertifyStatus"].empty()) {
      certifyStatus = make_shared<string>(boost::any_cast<string>(m["CertifyStatus"]));
    }
    if (m.find("CertifyType") != m.end() && !m["CertifyType"].empty()) {
      certifyType = make_shared<string>(boost::any_cast<string>(m["CertifyType"]));
    }
    if (m.find("CredentialInstanceId") != m.end() && !m["CredentialInstanceId"].empty()) {
      credentialInstanceId = make_shared<string>(boost::any_cast<string>(m["CredentialInstanceId"]));
    }
    if (m.find("CredentialLimitSpeedThreshold") != m.end() && !m["CredentialLimitSpeedThreshold"].empty()) {
      credentialLimitSpeedThreshold = make_shared<long>(boost::any_cast<long>(m["CredentialLimitSpeedThreshold"]));
    }
    if (m.find("CredentialLimitStopThreshold") != m.end() && !m["CredentialLimitStopThreshold"].empty()) {
      credentialLimitStopThreshold = make_shared<long>(boost::any_cast<long>(m["CredentialLimitStopThreshold"]));
    }
    if (m.find("CredentialNo") != m.end() && !m["CredentialNo"].empty()) {
      credentialNo = make_shared<string>(boost::any_cast<string>(m["CredentialNo"]));
    }
    if (m.find("CredentialType") != m.end() && !m["CredentialType"].empty()) {
      credentialType = make_shared<string>(boost::any_cast<string>(m["CredentialType"]));
    }
    if (m.find("DataLevel") != m.end() && !m["DataLevel"].empty()) {
      dataLevel = make_shared<string>(boost::any_cast<string>(m["DataLevel"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DeviceImei") != m.end() && !m["DeviceImei"].empty()) {
      deviceImei = make_shared<string>(boost::any_cast<string>(m["DeviceImei"]));
    }
    if (m.find("DirectionalGroupId") != m.end() && !m["DirectionalGroupId"].empty()) {
      directionalGroupId = make_shared<string>(boost::any_cast<string>(m["DirectionalGroupId"]));
    }
    if (m.find("DirectionalGroupName") != m.end() && !m["DirectionalGroupName"].empty()) {
      directionalGroupName = make_shared<string>(boost::any_cast<string>(m["DirectionalGroupName"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("FlowThresholdUnit") != m.end() && !m["FlowThresholdUnit"].empty()) {
      flowThresholdUnit = make_shared<string>(boost::any_cast<string>(m["FlowThresholdUnit"]));
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("Imsi") != m.end() && !m["Imsi"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Imsi"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Imsi"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imsi = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ip"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ip"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ip = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IsAutoRecharge") != m.end() && !m["IsAutoRecharge"].empty()) {
      isAutoRecharge = make_shared<bool>(boost::any_cast<bool>(m["IsAutoRecharge"]));
    }
    if (m.find("Msisdn") != m.end() && !m["Msisdn"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Msisdn"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Msisdn"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      msisdn = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NotifyId") != m.end() && !m["NotifyId"].empty()) {
      notifyId = make_shared<string>(boost::any_cast<string>(m["NotifyId"]));
    }
    if (m.find("OpenAccountTime") != m.end() && !m["OpenAccountTime"].empty()) {
      openAccountTime = make_shared<string>(boost::any_cast<string>(m["OpenAccountTime"]));
    }
    if (m.find("OpenSms") != m.end() && !m["OpenSms"].empty()) {
      openSms = make_shared<bool>(boost::any_cast<bool>(m["OpenSms"]));
    }
    if (m.find("OsStatus") != m.end() && !m["OsStatus"].empty()) {
      osStatus = make_shared<string>(boost::any_cast<string>(m["OsStatus"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("PeriodAddFlow") != m.end() && !m["PeriodAddFlow"].empty()) {
      periodAddFlow = make_shared<string>(boost::any_cast<string>(m["PeriodAddFlow"]));
    }
    if (m.find("PeriodRestFlow") != m.end() && !m["PeriodRestFlow"].empty()) {
      periodRestFlow = make_shared<string>(boost::any_cast<string>(m["PeriodRestFlow"]));
    }
    if (m.find("PeriodSmsUse") != m.end() && !m["PeriodSmsUse"].empty()) {
      periodSmsUse = make_shared<string>(boost::any_cast<string>(m["PeriodSmsUse"]));
    }
    if (m.find("PrivateNetworkSegment") != m.end() && !m["PrivateNetworkSegment"].empty()) {
      privateNetworkSegment = make_shared<string>(boost::any_cast<string>(m["PrivateNetworkSegment"]));
    }
    if (m.find("SimType") != m.end() && !m["SimType"].empty()) {
      simType = make_shared<string>(boost::any_cast<string>(m["SimType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagList"].type()) {
        vector<GetCardDetailResponseBodyDataVsimCardInfoTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCardDetailResponseBodyDataVsimCardInfoTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagList = make_shared<vector<GetCardDetailResponseBodyDataVsimCardInfoTagList>>(expect1);
      }
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
    if (m.find("VsimInstanceId") != m.end() && !m["VsimInstanceId"].empty()) {
      vsimInstanceId = make_shared<long>(boost::any_cast<long>(m["VsimInstanceId"]));
    }
  }


  virtual ~GetCardDetailResponseBodyDataVsimCardInfo() = default;
};
class GetCardDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetCardDetailResponseBodyDataListPsimCards>> listPsimCards{};
  shared_ptr<GetCardDetailResponseBodyDataVsimCardInfo> vsimCardInfo{};

  GetCardDetailResponseBodyData() {}

  explicit GetCardDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listPsimCards) {
      vector<boost::any> temp1;
      for(auto item1:*listPsimCards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListPsimCards"] = boost::any(temp1);
    }
    if (vsimCardInfo) {
      res["VsimCardInfo"] = vsimCardInfo ? boost::any(vsimCardInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListPsimCards") != m.end() && !m["ListPsimCards"].empty()) {
      if (typeid(vector<boost::any>) == m["ListPsimCards"].type()) {
        vector<GetCardDetailResponseBodyDataListPsimCards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListPsimCards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCardDetailResponseBodyDataListPsimCards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listPsimCards = make_shared<vector<GetCardDetailResponseBodyDataListPsimCards>>(expect1);
      }
    }
    if (m.find("VsimCardInfo") != m.end() && !m["VsimCardInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VsimCardInfo"].type()) {
        GetCardDetailResponseBodyDataVsimCardInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VsimCardInfo"]));
        vsimCardInfo = make_shared<GetCardDetailResponseBodyDataVsimCardInfo>(model1);
      }
    }
  }


  virtual ~GetCardDetailResponseBodyData() = default;
};
class GetCardDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetCardDetailResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCardDetailResponseBody() {}

  explicit GetCardDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
        GetCardDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCardDetailResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetCardDetailResponseBody() = default;
};
class GetCardDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCardDetailResponseBody> body{};

  GetCardDetailResponse() {}

  explicit GetCardDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCardDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCardDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetCardDetailResponse() = default;
};
class GetCardFlowInfoRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dateList{};
  shared_ptr<string> iccid{};

  GetCardFlowInfoRequest() {}

  explicit GetCardFlowInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateList) {
      res["DateList"] = boost::any(*dateList);
    }
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateList") != m.end() && !m["DateList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DateList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DateList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dateList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
  }


  virtual ~GetCardFlowInfoRequest() = default;
};
class GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow : public Darabonba::Model {
public:
  shared_ptr<string> day{};
  shared_ptr<string> flow{};

  GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow() {}

  explicit GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<string>(boost::any_cast<string>(m["Day"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<string>(boost::any_cast<string>(m["Flow"]));
    }
  }


  virtual ~GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow() = default;
};
class GetCardFlowInfoResponseBodyDataListCardMonthFlow : public Darabonba::Model {
public:
  shared_ptr<string> flowCount{};
  shared_ptr<vector<GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow>> listDayFlow{};
  shared_ptr<string> month{};

  GetCardFlowInfoResponseBodyDataListCardMonthFlow() {}

  explicit GetCardFlowInfoResponseBodyDataListCardMonthFlow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowCount) {
      res["FlowCount"] = boost::any(*flowCount);
    }
    if (listDayFlow) {
      vector<boost::any> temp1;
      for(auto item1:*listDayFlow){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListDayFlow"] = boost::any(temp1);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowCount") != m.end() && !m["FlowCount"].empty()) {
      flowCount = make_shared<string>(boost::any_cast<string>(m["FlowCount"]));
    }
    if (m.find("ListDayFlow") != m.end() && !m["ListDayFlow"].empty()) {
      if (typeid(vector<boost::any>) == m["ListDayFlow"].type()) {
        vector<GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListDayFlow"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listDayFlow = make_shared<vector<GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow>>(expect1);
      }
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<string>(boost::any_cast<string>(m["Month"]));
    }
  }


  virtual ~GetCardFlowInfoResponseBodyDataListCardMonthFlow() = default;
};
class GetCardFlowInfoResponseBodyDataListPackageDTO : public Darabonba::Model {
public:
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> packageName{};
  shared_ptr<string> remark{};

  GetCardFlowInfoResponseBodyDataListPackageDTO() {}

  explicit GetCardFlowInfoResponseBodyDataListPackageDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~GetCardFlowInfoResponseBodyDataListPackageDTO() = default;
};
class GetCardFlowInfoResponseBodyDataListVendorDetail : public Darabonba::Model {
public:
  shared_ptr<string> netWorkDelay{};
  shared_ptr<string> ratio{};
  shared_ptr<string> signalStrength{};
  shared_ptr<string> usedFlow{};
  shared_ptr<string> vendor{};

  GetCardFlowInfoResponseBodyDataListVendorDetail() {}

  explicit GetCardFlowInfoResponseBodyDataListVendorDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (netWorkDelay) {
      res["NetWorkDelay"] = boost::any(*netWorkDelay);
    }
    if (ratio) {
      res["Ratio"] = boost::any(*ratio);
    }
    if (signalStrength) {
      res["SignalStrength"] = boost::any(*signalStrength);
    }
    if (usedFlow) {
      res["UsedFlow"] = boost::any(*usedFlow);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetWorkDelay") != m.end() && !m["NetWorkDelay"].empty()) {
      netWorkDelay = make_shared<string>(boost::any_cast<string>(m["NetWorkDelay"]));
    }
    if (m.find("Ratio") != m.end() && !m["Ratio"].empty()) {
      ratio = make_shared<string>(boost::any_cast<string>(m["Ratio"]));
    }
    if (m.find("SignalStrength") != m.end() && !m["SignalStrength"].empty()) {
      signalStrength = make_shared<string>(boost::any_cast<string>(m["SignalStrength"]));
    }
    if (m.find("UsedFlow") != m.end() && !m["UsedFlow"].empty()) {
      usedFlow = make_shared<string>(boost::any_cast<string>(m["UsedFlow"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
  }


  virtual ~GetCardFlowInfoResponseBodyDataListVendorDetail() = default;
};
class GetCardFlowInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetCardFlowInfoResponseBodyDataListCardMonthFlow>> listCardMonthFlow{};
  shared_ptr<vector<GetCardFlowInfoResponseBodyDataListPackageDTO>> listPackageDTO{};
  shared_ptr<vector<GetCardFlowInfoResponseBodyDataListVendorDetail>> listVendorDetail{};

  GetCardFlowInfoResponseBodyData() {}

  explicit GetCardFlowInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listCardMonthFlow) {
      vector<boost::any> temp1;
      for(auto item1:*listCardMonthFlow){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListCardMonthFlow"] = boost::any(temp1);
    }
    if (listPackageDTO) {
      vector<boost::any> temp1;
      for(auto item1:*listPackageDTO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListPackageDTO"] = boost::any(temp1);
    }
    if (listVendorDetail) {
      vector<boost::any> temp1;
      for(auto item1:*listVendorDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListVendorDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListCardMonthFlow") != m.end() && !m["ListCardMonthFlow"].empty()) {
      if (typeid(vector<boost::any>) == m["ListCardMonthFlow"].type()) {
        vector<GetCardFlowInfoResponseBodyDataListCardMonthFlow> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListCardMonthFlow"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCardFlowInfoResponseBodyDataListCardMonthFlow model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listCardMonthFlow = make_shared<vector<GetCardFlowInfoResponseBodyDataListCardMonthFlow>>(expect1);
      }
    }
    if (m.find("ListPackageDTO") != m.end() && !m["ListPackageDTO"].empty()) {
      if (typeid(vector<boost::any>) == m["ListPackageDTO"].type()) {
        vector<GetCardFlowInfoResponseBodyDataListPackageDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListPackageDTO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCardFlowInfoResponseBodyDataListPackageDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listPackageDTO = make_shared<vector<GetCardFlowInfoResponseBodyDataListPackageDTO>>(expect1);
      }
    }
    if (m.find("ListVendorDetail") != m.end() && !m["ListVendorDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["ListVendorDetail"].type()) {
        vector<GetCardFlowInfoResponseBodyDataListVendorDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListVendorDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCardFlowInfoResponseBodyDataListVendorDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listVendorDetail = make_shared<vector<GetCardFlowInfoResponseBodyDataListVendorDetail>>(expect1);
      }
    }
  }


  virtual ~GetCardFlowInfoResponseBodyData() = default;
};
class GetCardFlowInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetCardFlowInfoResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCardFlowInfoResponseBody() {}

  explicit GetCardFlowInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
        GetCardFlowInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCardFlowInfoResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetCardFlowInfoResponseBody() = default;
};
class GetCardFlowInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCardFlowInfoResponseBody> body{};

  GetCardFlowInfoResponse() {}

  explicit GetCardFlowInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCardFlowInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCardFlowInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetCardFlowInfoResponse() = default;
};
class GetCredentialPoolStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialNO{};
  shared_ptr<string> date{};

  GetCredentialPoolStatisticsRequest() {}

  explicit GetCredentialPoolStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialNO) {
      res["CredentialNO"] = boost::any(*credentialNO);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialNO") != m.end() && !m["CredentialNO"].empty()) {
      credentialNO = make_shared<string>(boost::any_cast<string>(m["CredentialNO"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
  }


  virtual ~GetCredentialPoolStatisticsRequest() = default;
};
class GetCredentialPoolStatisticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> cardActiveNum{};
  shared_ptr<long> cardTotalNum{};
  shared_ptr<string> credentialInstanceId{};
  shared_ptr<string> credentialNO{};
  shared_ptr<string> credentialType{};
  shared_ptr<string> effectiveAvailableFlow{};
  shared_ptr<string> effectiveTotalFlow{};
  shared_ptr<long> monthFeatureFee{};
  shared_ptr<long> monthUsedAmount{};
  shared_ptr<string> poolAvaiable{};
  shared_ptr<string> poolGrandTotal{};
  shared_ptr<string> poolGrandTotalUsed{};
  shared_ptr<string> poolOutUsed{};
  shared_ptr<string> poolUsed{};
  shared_ptr<long> smsUsed{};

  GetCredentialPoolStatisticsResponseBodyData() {}

  explicit GetCredentialPoolStatisticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardActiveNum) {
      res["CardActiveNum"] = boost::any(*cardActiveNum);
    }
    if (cardTotalNum) {
      res["CardTotalNum"] = boost::any(*cardTotalNum);
    }
    if (credentialInstanceId) {
      res["CredentialInstanceId"] = boost::any(*credentialInstanceId);
    }
    if (credentialNO) {
      res["CredentialNO"] = boost::any(*credentialNO);
    }
    if (credentialType) {
      res["CredentialType"] = boost::any(*credentialType);
    }
    if (effectiveAvailableFlow) {
      res["EffectiveAvailableFlow"] = boost::any(*effectiveAvailableFlow);
    }
    if (effectiveTotalFlow) {
      res["EffectiveTotalFlow"] = boost::any(*effectiveTotalFlow);
    }
    if (monthFeatureFee) {
      res["MonthFeatureFee"] = boost::any(*monthFeatureFee);
    }
    if (monthUsedAmount) {
      res["MonthUsedAmount"] = boost::any(*monthUsedAmount);
    }
    if (poolAvaiable) {
      res["PoolAvaiable"] = boost::any(*poolAvaiable);
    }
    if (poolGrandTotal) {
      res["PoolGrandTotal"] = boost::any(*poolGrandTotal);
    }
    if (poolGrandTotalUsed) {
      res["PoolGrandTotalUsed"] = boost::any(*poolGrandTotalUsed);
    }
    if (poolOutUsed) {
      res["PoolOutUsed"] = boost::any(*poolOutUsed);
    }
    if (poolUsed) {
      res["PoolUsed"] = boost::any(*poolUsed);
    }
    if (smsUsed) {
      res["SmsUsed"] = boost::any(*smsUsed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardActiveNum") != m.end() && !m["CardActiveNum"].empty()) {
      cardActiveNum = make_shared<long>(boost::any_cast<long>(m["CardActiveNum"]));
    }
    if (m.find("CardTotalNum") != m.end() && !m["CardTotalNum"].empty()) {
      cardTotalNum = make_shared<long>(boost::any_cast<long>(m["CardTotalNum"]));
    }
    if (m.find("CredentialInstanceId") != m.end() && !m["CredentialInstanceId"].empty()) {
      credentialInstanceId = make_shared<string>(boost::any_cast<string>(m["CredentialInstanceId"]));
    }
    if (m.find("CredentialNO") != m.end() && !m["CredentialNO"].empty()) {
      credentialNO = make_shared<string>(boost::any_cast<string>(m["CredentialNO"]));
    }
    if (m.find("CredentialType") != m.end() && !m["CredentialType"].empty()) {
      credentialType = make_shared<string>(boost::any_cast<string>(m["CredentialType"]));
    }
    if (m.find("EffectiveAvailableFlow") != m.end() && !m["EffectiveAvailableFlow"].empty()) {
      effectiveAvailableFlow = make_shared<string>(boost::any_cast<string>(m["EffectiveAvailableFlow"]));
    }
    if (m.find("EffectiveTotalFlow") != m.end() && !m["EffectiveTotalFlow"].empty()) {
      effectiveTotalFlow = make_shared<string>(boost::any_cast<string>(m["EffectiveTotalFlow"]));
    }
    if (m.find("MonthFeatureFee") != m.end() && !m["MonthFeatureFee"].empty()) {
      monthFeatureFee = make_shared<long>(boost::any_cast<long>(m["MonthFeatureFee"]));
    }
    if (m.find("MonthUsedAmount") != m.end() && !m["MonthUsedAmount"].empty()) {
      monthUsedAmount = make_shared<long>(boost::any_cast<long>(m["MonthUsedAmount"]));
    }
    if (m.find("PoolAvaiable") != m.end() && !m["PoolAvaiable"].empty()) {
      poolAvaiable = make_shared<string>(boost::any_cast<string>(m["PoolAvaiable"]));
    }
    if (m.find("PoolGrandTotal") != m.end() && !m["PoolGrandTotal"].empty()) {
      poolGrandTotal = make_shared<string>(boost::any_cast<string>(m["PoolGrandTotal"]));
    }
    if (m.find("PoolGrandTotalUsed") != m.end() && !m["PoolGrandTotalUsed"].empty()) {
      poolGrandTotalUsed = make_shared<string>(boost::any_cast<string>(m["PoolGrandTotalUsed"]));
    }
    if (m.find("PoolOutUsed") != m.end() && !m["PoolOutUsed"].empty()) {
      poolOutUsed = make_shared<string>(boost::any_cast<string>(m["PoolOutUsed"]));
    }
    if (m.find("PoolUsed") != m.end() && !m["PoolUsed"].empty()) {
      poolUsed = make_shared<string>(boost::any_cast<string>(m["PoolUsed"]));
    }
    if (m.find("SmsUsed") != m.end() && !m["SmsUsed"].empty()) {
      smsUsed = make_shared<long>(boost::any_cast<long>(m["SmsUsed"]));
    }
  }


  virtual ~GetCredentialPoolStatisticsResponseBodyData() = default;
};
class GetCredentialPoolStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetCredentialPoolStatisticsResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCredentialPoolStatisticsResponseBody() {}

  explicit GetCredentialPoolStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
        GetCredentialPoolStatisticsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCredentialPoolStatisticsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetCredentialPoolStatisticsResponseBody() = default;
};
class GetCredentialPoolStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCredentialPoolStatisticsResponseBody> body{};

  GetCredentialPoolStatisticsResponse() {}

  explicit GetCredentialPoolStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCredentialPoolStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCredentialPoolStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetCredentialPoolStatisticsResponse() = default;
};
class ListCardInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> activeTimeEnd{};
  shared_ptr<string> activeTimeStart{};
  shared_ptr<string> aliFee{};
  shared_ptr<string> aliyunOrderId{};
  shared_ptr<string> apnName{};
  shared_ptr<string> certifyType{};
  shared_ptr<string> credentialNo{};
  shared_ptr<string> dataLevel{};
  shared_ptr<string> dataType{};
  shared_ptr<string> directionalGroupId{};
  shared_ptr<string> expireTimeEnd{};
  shared_ptr<string> expireTimeStart{};
  shared_ptr<string> iccid{};
  shared_ptr<string> imsi{};
  shared_ptr<bool> isAutoRecharge{};
  shared_ptr<string> maxFlow{};
  shared_ptr<string> minFlow{};
  shared_ptr<string> msisdn{};
  shared_ptr<string> notifyId{};
  shared_ptr<string> osStatus{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> period{};
  shared_ptr<string> poolId{};
  shared_ptr<string> simType{};
  shared_ptr<string> status{};
  shared_ptr<string> tagName{};
  shared_ptr<string> vendor{};

  ListCardInfoRequest() {}

  explicit ListCardInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeTimeEnd) {
      res["ActiveTimeEnd"] = boost::any(*activeTimeEnd);
    }
    if (activeTimeStart) {
      res["ActiveTimeStart"] = boost::any(*activeTimeStart);
    }
    if (aliFee) {
      res["AliFee"] = boost::any(*aliFee);
    }
    if (aliyunOrderId) {
      res["AliyunOrderId"] = boost::any(*aliyunOrderId);
    }
    if (apnName) {
      res["ApnName"] = boost::any(*apnName);
    }
    if (certifyType) {
      res["CertifyType"] = boost::any(*certifyType);
    }
    if (credentialNo) {
      res["CredentialNo"] = boost::any(*credentialNo);
    }
    if (dataLevel) {
      res["DataLevel"] = boost::any(*dataLevel);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (directionalGroupId) {
      res["DirectionalGroupId"] = boost::any(*directionalGroupId);
    }
    if (expireTimeEnd) {
      res["ExpireTimeEnd"] = boost::any(*expireTimeEnd);
    }
    if (expireTimeStart) {
      res["ExpireTimeStart"] = boost::any(*expireTimeStart);
    }
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (imsi) {
      res["Imsi"] = boost::any(*imsi);
    }
    if (isAutoRecharge) {
      res["IsAutoRecharge"] = boost::any(*isAutoRecharge);
    }
    if (maxFlow) {
      res["MaxFlow"] = boost::any(*maxFlow);
    }
    if (minFlow) {
      res["MinFlow"] = boost::any(*minFlow);
    }
    if (msisdn) {
      res["Msisdn"] = boost::any(*msisdn);
    }
    if (notifyId) {
      res["NotifyId"] = boost::any(*notifyId);
    }
    if (osStatus) {
      res["OsStatus"] = boost::any(*osStatus);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (poolId) {
      res["PoolId"] = boost::any(*poolId);
    }
    if (simType) {
      res["SimType"] = boost::any(*simType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveTimeEnd") != m.end() && !m["ActiveTimeEnd"].empty()) {
      activeTimeEnd = make_shared<string>(boost::any_cast<string>(m["ActiveTimeEnd"]));
    }
    if (m.find("ActiveTimeStart") != m.end() && !m["ActiveTimeStart"].empty()) {
      activeTimeStart = make_shared<string>(boost::any_cast<string>(m["ActiveTimeStart"]));
    }
    if (m.find("AliFee") != m.end() && !m["AliFee"].empty()) {
      aliFee = make_shared<string>(boost::any_cast<string>(m["AliFee"]));
    }
    if (m.find("AliyunOrderId") != m.end() && !m["AliyunOrderId"].empty()) {
      aliyunOrderId = make_shared<string>(boost::any_cast<string>(m["AliyunOrderId"]));
    }
    if (m.find("ApnName") != m.end() && !m["ApnName"].empty()) {
      apnName = make_shared<string>(boost::any_cast<string>(m["ApnName"]));
    }
    if (m.find("CertifyType") != m.end() && !m["CertifyType"].empty()) {
      certifyType = make_shared<string>(boost::any_cast<string>(m["CertifyType"]));
    }
    if (m.find("CredentialNo") != m.end() && !m["CredentialNo"].empty()) {
      credentialNo = make_shared<string>(boost::any_cast<string>(m["CredentialNo"]));
    }
    if (m.find("DataLevel") != m.end() && !m["DataLevel"].empty()) {
      dataLevel = make_shared<string>(boost::any_cast<string>(m["DataLevel"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DirectionalGroupId") != m.end() && !m["DirectionalGroupId"].empty()) {
      directionalGroupId = make_shared<string>(boost::any_cast<string>(m["DirectionalGroupId"]));
    }
    if (m.find("ExpireTimeEnd") != m.end() && !m["ExpireTimeEnd"].empty()) {
      expireTimeEnd = make_shared<string>(boost::any_cast<string>(m["ExpireTimeEnd"]));
    }
    if (m.find("ExpireTimeStart") != m.end() && !m["ExpireTimeStart"].empty()) {
      expireTimeStart = make_shared<string>(boost::any_cast<string>(m["ExpireTimeStart"]));
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("Imsi") != m.end() && !m["Imsi"].empty()) {
      imsi = make_shared<string>(boost::any_cast<string>(m["Imsi"]));
    }
    if (m.find("IsAutoRecharge") != m.end() && !m["IsAutoRecharge"].empty()) {
      isAutoRecharge = make_shared<bool>(boost::any_cast<bool>(m["IsAutoRecharge"]));
    }
    if (m.find("MaxFlow") != m.end() && !m["MaxFlow"].empty()) {
      maxFlow = make_shared<string>(boost::any_cast<string>(m["MaxFlow"]));
    }
    if (m.find("MinFlow") != m.end() && !m["MinFlow"].empty()) {
      minFlow = make_shared<string>(boost::any_cast<string>(m["MinFlow"]));
    }
    if (m.find("Msisdn") != m.end() && !m["Msisdn"].empty()) {
      msisdn = make_shared<string>(boost::any_cast<string>(m["Msisdn"]));
    }
    if (m.find("NotifyId") != m.end() && !m["NotifyId"].empty()) {
      notifyId = make_shared<string>(boost::any_cast<string>(m["NotifyId"]));
    }
    if (m.find("OsStatus") != m.end() && !m["OsStatus"].empty()) {
      osStatus = make_shared<string>(boost::any_cast<string>(m["OsStatus"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("PoolId") != m.end() && !m["PoolId"].empty()) {
      poolId = make_shared<string>(boost::any_cast<string>(m["PoolId"]));
    }
    if (m.find("SimType") != m.end() && !m["SimType"].empty()) {
      simType = make_shared<string>(boost::any_cast<string>(m["SimType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
  }


  virtual ~ListCardInfoRequest() = default;
};
class ListCardInfoResponseBodyDataListTagList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> tagName{};

  ListCardInfoResponseBodyDataListTagList() {}

  explicit ListCardInfoResponseBodyDataListTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~ListCardInfoResponseBodyDataListTagList() = default;
};
class ListCardInfoResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> activeTime{};
  shared_ptr<string> activeType{};
  shared_ptr<string> aliFee{};
  shared_ptr<string> aliyunOrderId{};
  shared_ptr<string> apnName{};
  shared_ptr<string> certifyType{};
  shared_ptr<string> credentialInstanceId{};
  shared_ptr<string> credentialNo{};
  shared_ptr<string> credentialType{};
  shared_ptr<string> dataLevel{};
  shared_ptr<string> dataType{};
  shared_ptr<long> directionalGroupId{};
  shared_ptr<string> directionalGroupName{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> iccid{};
  shared_ptr<vector<string>> imsi{};
  shared_ptr<bool> isAutoRecharge{};
  shared_ptr<vector<string>> msisdn{};
  shared_ptr<string> notifyId{};
  shared_ptr<string> openAccountTime{};
  shared_ptr<string> osStatus{};
  shared_ptr<string> period{};
  shared_ptr<string> periodAddFlow{};
  shared_ptr<string> periodRestFlow{};
  shared_ptr<string> periodSmsUse{};
  shared_ptr<string> privateNetworkSegment{};
  shared_ptr<string> remark{};
  shared_ptr<string> simType{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListCardInfoResponseBodyDataListTagList>> tagList{};
  shared_ptr<string> vendor{};
  shared_ptr<long> vsimInstanceId{};

  ListCardInfoResponseBodyDataList() {}

  explicit ListCardInfoResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeTime) {
      res["ActiveTime"] = boost::any(*activeTime);
    }
    if (activeType) {
      res["ActiveType"] = boost::any(*activeType);
    }
    if (aliFee) {
      res["AliFee"] = boost::any(*aliFee);
    }
    if (aliyunOrderId) {
      res["AliyunOrderId"] = boost::any(*aliyunOrderId);
    }
    if (apnName) {
      res["ApnName"] = boost::any(*apnName);
    }
    if (certifyType) {
      res["CertifyType"] = boost::any(*certifyType);
    }
    if (credentialInstanceId) {
      res["CredentialInstanceId"] = boost::any(*credentialInstanceId);
    }
    if (credentialNo) {
      res["CredentialNo"] = boost::any(*credentialNo);
    }
    if (credentialType) {
      res["CredentialType"] = boost::any(*credentialType);
    }
    if (dataLevel) {
      res["DataLevel"] = boost::any(*dataLevel);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (directionalGroupId) {
      res["DirectionalGroupId"] = boost::any(*directionalGroupId);
    }
    if (directionalGroupName) {
      res["DirectionalGroupName"] = boost::any(*directionalGroupName);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (imsi) {
      res["Imsi"] = boost::any(*imsi);
    }
    if (isAutoRecharge) {
      res["IsAutoRecharge"] = boost::any(*isAutoRecharge);
    }
    if (msisdn) {
      res["Msisdn"] = boost::any(*msisdn);
    }
    if (notifyId) {
      res["NotifyId"] = boost::any(*notifyId);
    }
    if (openAccountTime) {
      res["OpenAccountTime"] = boost::any(*openAccountTime);
    }
    if (osStatus) {
      res["OsStatus"] = boost::any(*osStatus);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodAddFlow) {
      res["PeriodAddFlow"] = boost::any(*periodAddFlow);
    }
    if (periodRestFlow) {
      res["PeriodRestFlow"] = boost::any(*periodRestFlow);
    }
    if (periodSmsUse) {
      res["PeriodSmsUse"] = boost::any(*periodSmsUse);
    }
    if (privateNetworkSegment) {
      res["PrivateNetworkSegment"] = boost::any(*privateNetworkSegment);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (simType) {
      res["SimType"] = boost::any(*simType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagList) {
      vector<boost::any> temp1;
      for(auto item1:*tagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagList"] = boost::any(temp1);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    if (vsimInstanceId) {
      res["VsimInstanceId"] = boost::any(*vsimInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveTime") != m.end() && !m["ActiveTime"].empty()) {
      activeTime = make_shared<string>(boost::any_cast<string>(m["ActiveTime"]));
    }
    if (m.find("ActiveType") != m.end() && !m["ActiveType"].empty()) {
      activeType = make_shared<string>(boost::any_cast<string>(m["ActiveType"]));
    }
    if (m.find("AliFee") != m.end() && !m["AliFee"].empty()) {
      aliFee = make_shared<string>(boost::any_cast<string>(m["AliFee"]));
    }
    if (m.find("AliyunOrderId") != m.end() && !m["AliyunOrderId"].empty()) {
      aliyunOrderId = make_shared<string>(boost::any_cast<string>(m["AliyunOrderId"]));
    }
    if (m.find("ApnName") != m.end() && !m["ApnName"].empty()) {
      apnName = make_shared<string>(boost::any_cast<string>(m["ApnName"]));
    }
    if (m.find("CertifyType") != m.end() && !m["CertifyType"].empty()) {
      certifyType = make_shared<string>(boost::any_cast<string>(m["CertifyType"]));
    }
    if (m.find("CredentialInstanceId") != m.end() && !m["CredentialInstanceId"].empty()) {
      credentialInstanceId = make_shared<string>(boost::any_cast<string>(m["CredentialInstanceId"]));
    }
    if (m.find("CredentialNo") != m.end() && !m["CredentialNo"].empty()) {
      credentialNo = make_shared<string>(boost::any_cast<string>(m["CredentialNo"]));
    }
    if (m.find("CredentialType") != m.end() && !m["CredentialType"].empty()) {
      credentialType = make_shared<string>(boost::any_cast<string>(m["CredentialType"]));
    }
    if (m.find("DataLevel") != m.end() && !m["DataLevel"].empty()) {
      dataLevel = make_shared<string>(boost::any_cast<string>(m["DataLevel"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DirectionalGroupId") != m.end() && !m["DirectionalGroupId"].empty()) {
      directionalGroupId = make_shared<long>(boost::any_cast<long>(m["DirectionalGroupId"]));
    }
    if (m.find("DirectionalGroupName") != m.end() && !m["DirectionalGroupName"].empty()) {
      directionalGroupName = make_shared<string>(boost::any_cast<string>(m["DirectionalGroupName"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("Imsi") != m.end() && !m["Imsi"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Imsi"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Imsi"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imsi = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IsAutoRecharge") != m.end() && !m["IsAutoRecharge"].empty()) {
      isAutoRecharge = make_shared<bool>(boost::any_cast<bool>(m["IsAutoRecharge"]));
    }
    if (m.find("Msisdn") != m.end() && !m["Msisdn"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Msisdn"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Msisdn"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      msisdn = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NotifyId") != m.end() && !m["NotifyId"].empty()) {
      notifyId = make_shared<string>(boost::any_cast<string>(m["NotifyId"]));
    }
    if (m.find("OpenAccountTime") != m.end() && !m["OpenAccountTime"].empty()) {
      openAccountTime = make_shared<string>(boost::any_cast<string>(m["OpenAccountTime"]));
    }
    if (m.find("OsStatus") != m.end() && !m["OsStatus"].empty()) {
      osStatus = make_shared<string>(boost::any_cast<string>(m["OsStatus"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("PeriodAddFlow") != m.end() && !m["PeriodAddFlow"].empty()) {
      periodAddFlow = make_shared<string>(boost::any_cast<string>(m["PeriodAddFlow"]));
    }
    if (m.find("PeriodRestFlow") != m.end() && !m["PeriodRestFlow"].empty()) {
      periodRestFlow = make_shared<string>(boost::any_cast<string>(m["PeriodRestFlow"]));
    }
    if (m.find("PeriodSmsUse") != m.end() && !m["PeriodSmsUse"].empty()) {
      periodSmsUse = make_shared<string>(boost::any_cast<string>(m["PeriodSmsUse"]));
    }
    if (m.find("PrivateNetworkSegment") != m.end() && !m["PrivateNetworkSegment"].empty()) {
      privateNetworkSegment = make_shared<string>(boost::any_cast<string>(m["PrivateNetworkSegment"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("SimType") != m.end() && !m["SimType"].empty()) {
      simType = make_shared<string>(boost::any_cast<string>(m["SimType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagList"].type()) {
        vector<ListCardInfoResponseBodyDataListTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCardInfoResponseBodyDataListTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagList = make_shared<vector<ListCardInfoResponseBodyDataListTagList>>(expect1);
      }
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
    if (m.find("VsimInstanceId") != m.end() && !m["VsimInstanceId"].empty()) {
      vsimInstanceId = make_shared<long>(boost::any_cast<long>(m["VsimInstanceId"]));
    }
  }


  virtual ~ListCardInfoResponseBodyDataList() = default;
};
class ListCardInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListCardInfoResponseBodyDataList>> list{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListCardInfoResponseBodyData() {}

  explicit ListCardInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListCardInfoResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCardInfoResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListCardInfoResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListCardInfoResponseBodyData() = default;
};
class ListCardInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListCardInfoResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListCardInfoResponseBody() {}

  explicit ListCardInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
        ListCardInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListCardInfoResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListCardInfoResponseBody() = default;
};
class ListCardInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCardInfoResponseBody> body{};

  ListCardInfoResponse() {}

  explicit ListCardInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCardInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCardInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ListCardInfoResponse() = default;
};
class ListDirectionalAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  ListDirectionalAddressRequest() {}

  explicit ListDirectionalAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListDirectionalAddressRequest() = default;
};
class ListDirectionalAddressResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> addressType{};
  shared_ptr<string> groupId{};
  shared_ptr<string> source{};
  shared_ptr<long> state{};

  ListDirectionalAddressResponseBodyDataList() {}

  explicit ListDirectionalAddressResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<long>(boost::any_cast<long>(m["State"]));
    }
  }


  virtual ~ListDirectionalAddressResponseBodyDataList() = default;
};
class ListDirectionalAddressResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDirectionalAddressResponseBodyDataList>> list{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListDirectionalAddressResponseBodyData() {}

  explicit ListDirectionalAddressResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListDirectionalAddressResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDirectionalAddressResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListDirectionalAddressResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListDirectionalAddressResponseBodyData() = default;
};
class ListDirectionalAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListDirectionalAddressResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDirectionalAddressResponseBody() {}

  explicit ListDirectionalAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
        ListDirectionalAddressResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDirectionalAddressResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListDirectionalAddressResponseBody() = default;
};
class ListDirectionalAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDirectionalAddressResponseBody> body{};

  ListDirectionalAddressResponse() {}

  explicit ListDirectionalAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDirectionalAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDirectionalAddressResponseBody>(model1);
      }
    }
  }


  virtual ~ListDirectionalAddressResponse() = default;
};
class ListDirectionalDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  ListDirectionalDetailRequest() {}

  explicit ListDirectionalDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListDirectionalDetailRequest() = default;
};
class ListDirectionalDetailResponseBodyDataPaginationResultList : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> addressType{};
  shared_ptr<string> groupId{};
  shared_ptr<string> source{};
  shared_ptr<string> state{};

  ListDirectionalDetailResponseBodyDataPaginationResultList() {}

  explicit ListDirectionalDetailResponseBodyDataPaginationResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~ListDirectionalDetailResponseBodyDataPaginationResultList() = default;
};
class ListDirectionalDetailResponseBodyDataPaginationResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListDirectionalDetailResponseBodyDataPaginationResultList>> list{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListDirectionalDetailResponseBodyDataPaginationResult() {}

  explicit ListDirectionalDetailResponseBodyDataPaginationResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListDirectionalDetailResponseBodyDataPaginationResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDirectionalDetailResponseBodyDataPaginationResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListDirectionalDetailResponseBodyDataPaginationResultList>>(expect1);
      }
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListDirectionalDetailResponseBodyDataPaginationResult() = default;
};
class ListDirectionalDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> directionalGroupId{};
  shared_ptr<string> directionalName{};
  shared_ptr<ListDirectionalDetailResponseBodyDataPaginationResult> paginationResult{};

  ListDirectionalDetailResponseBodyData() {}

  explicit ListDirectionalDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directionalGroupId) {
      res["DirectionalGroupId"] = boost::any(*directionalGroupId);
    }
    if (directionalName) {
      res["DirectionalName"] = boost::any(*directionalName);
    }
    if (paginationResult) {
      res["PaginationResult"] = paginationResult ? boost::any(paginationResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectionalGroupId") != m.end() && !m["DirectionalGroupId"].empty()) {
      directionalGroupId = make_shared<long>(boost::any_cast<long>(m["DirectionalGroupId"]));
    }
    if (m.find("DirectionalName") != m.end() && !m["DirectionalName"].empty()) {
      directionalName = make_shared<string>(boost::any_cast<string>(m["DirectionalName"]));
    }
    if (m.find("PaginationResult") != m.end() && !m["PaginationResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["PaginationResult"].type()) {
        ListDirectionalDetailResponseBodyDataPaginationResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PaginationResult"]));
        paginationResult = make_shared<ListDirectionalDetailResponseBodyDataPaginationResult>(model1);
      }
    }
  }


  virtual ~ListDirectionalDetailResponseBodyData() = default;
};
class ListDirectionalDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListDirectionalDetailResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDirectionalDetailResponseBody() {}

  explicit ListDirectionalDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
        ListDirectionalDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDirectionalDetailResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListDirectionalDetailResponseBody() = default;
};
class ListDirectionalDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDirectionalDetailResponseBody> body{};

  ListDirectionalDetailResponse() {}

  explicit ListDirectionalDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDirectionalDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDirectionalDetailResponseBody>(model1);
      }
    }
  }


  virtual ~ListDirectionalDetailResponse() = default;
};
class ListOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> orderId{};
  shared_ptr<string> orderStatus{};
  shared_ptr<string> orderType{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startDate{};

  ListOrderRequest() {}

  explicit ListOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<string>(boost::any_cast<string>(m["OrderStatus"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~ListOrderRequest() = default;
};
class ListOrderResponseBodyDataListDeliveryInfo : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> buyerMessage{};
  shared_ptr<string> mail{};
  shared_ptr<string> receiver{};
  shared_ptr<string> zipCode{};

  ListOrderResponseBodyDataListDeliveryInfo() {}

  explicit ListOrderResponseBodyDataListDeliveryInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (buyerMessage) {
      res["BuyerMessage"] = boost::any(*buyerMessage);
    }
    if (mail) {
      res["Mail"] = boost::any(*mail);
    }
    if (receiver) {
      res["Receiver"] = boost::any(*receiver);
    }
    if (zipCode) {
      res["ZipCode"] = boost::any(*zipCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("BuyerMessage") != m.end() && !m["BuyerMessage"].empty()) {
      buyerMessage = make_shared<string>(boost::any_cast<string>(m["BuyerMessage"]));
    }
    if (m.find("Mail") != m.end() && !m["Mail"].empty()) {
      mail = make_shared<string>(boost::any_cast<string>(m["Mail"]));
    }
    if (m.find("Receiver") != m.end() && !m["Receiver"].empty()) {
      receiver = make_shared<string>(boost::any_cast<string>(m["Receiver"]));
    }
    if (m.find("ZipCode") != m.end() && !m["ZipCode"].empty()) {
      zipCode = make_shared<string>(boost::any_cast<string>(m["ZipCode"]));
    }
  }


  virtual ~ListOrderResponseBodyDataListDeliveryInfo() = default;
};
class ListOrderResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> aliFee{};
  shared_ptr<string> billingCycle{};
  shared_ptr<long> buyNum{};
  shared_ptr<long> cardPayCount{};
  shared_ptr<string> credentialNo{};
  shared_ptr<string> credentialPackage{};
  shared_ptr<string> dataLevel{};
  shared_ptr<ListOrderResponseBodyDataListDeliveryInfo> deliveryInfo{};
  shared_ptr<vector<string>> expressNoList{};
  shared_ptr<string> flowType{};
  shared_ptr<long> functionFee{};
  shared_ptr<string> orderDetailUrl{};
  shared_ptr<string> orderId{};
  shared_ptr<string> orderInfo{};
  shared_ptr<string> orderStatus{};
  shared_ptr<string> orderType{};
  shared_ptr<string> payDuration{};
  shared_ptr<string> payTime{};
  shared_ptr<string> poolCapacity{};
  shared_ptr<string> poolCapacityUnit{};
  shared_ptr<string> poolNo{};
  shared_ptr<string> vendor{};

  ListOrderResponseBodyDataList() {}

  explicit ListOrderResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliFee) {
      res["AliFee"] = boost::any(*aliFee);
    }
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (buyNum) {
      res["BuyNum"] = boost::any(*buyNum);
    }
    if (cardPayCount) {
      res["CardPayCount"] = boost::any(*cardPayCount);
    }
    if (credentialNo) {
      res["CredentialNo"] = boost::any(*credentialNo);
    }
    if (credentialPackage) {
      res["CredentialPackage"] = boost::any(*credentialPackage);
    }
    if (dataLevel) {
      res["DataLevel"] = boost::any(*dataLevel);
    }
    if (deliveryInfo) {
      res["DeliveryInfo"] = deliveryInfo ? boost::any(deliveryInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (expressNoList) {
      res["ExpressNoList"] = boost::any(*expressNoList);
    }
    if (flowType) {
      res["FlowType"] = boost::any(*flowType);
    }
    if (functionFee) {
      res["FunctionFee"] = boost::any(*functionFee);
    }
    if (orderDetailUrl) {
      res["OrderDetailUrl"] = boost::any(*orderDetailUrl);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderInfo) {
      res["OrderInfo"] = boost::any(*orderInfo);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (payDuration) {
      res["PayDuration"] = boost::any(*payDuration);
    }
    if (payTime) {
      res["PayTime"] = boost::any(*payTime);
    }
    if (poolCapacity) {
      res["PoolCapacity"] = boost::any(*poolCapacity);
    }
    if (poolCapacityUnit) {
      res["PoolCapacityUnit"] = boost::any(*poolCapacityUnit);
    }
    if (poolNo) {
      res["PoolNo"] = boost::any(*poolNo);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliFee") != m.end() && !m["AliFee"].empty()) {
      aliFee = make_shared<string>(boost::any_cast<string>(m["AliFee"]));
    }
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("BuyNum") != m.end() && !m["BuyNum"].empty()) {
      buyNum = make_shared<long>(boost::any_cast<long>(m["BuyNum"]));
    }
    if (m.find("CardPayCount") != m.end() && !m["CardPayCount"].empty()) {
      cardPayCount = make_shared<long>(boost::any_cast<long>(m["CardPayCount"]));
    }
    if (m.find("CredentialNo") != m.end() && !m["CredentialNo"].empty()) {
      credentialNo = make_shared<string>(boost::any_cast<string>(m["CredentialNo"]));
    }
    if (m.find("CredentialPackage") != m.end() && !m["CredentialPackage"].empty()) {
      credentialPackage = make_shared<string>(boost::any_cast<string>(m["CredentialPackage"]));
    }
    if (m.find("DataLevel") != m.end() && !m["DataLevel"].empty()) {
      dataLevel = make_shared<string>(boost::any_cast<string>(m["DataLevel"]));
    }
    if (m.find("DeliveryInfo") != m.end() && !m["DeliveryInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeliveryInfo"].type()) {
        ListOrderResponseBodyDataListDeliveryInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeliveryInfo"]));
        deliveryInfo = make_shared<ListOrderResponseBodyDataListDeliveryInfo>(model1);
      }
    }
    if (m.find("ExpressNoList") != m.end() && !m["ExpressNoList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExpressNoList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExpressNoList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      expressNoList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FlowType") != m.end() && !m["FlowType"].empty()) {
      flowType = make_shared<string>(boost::any_cast<string>(m["FlowType"]));
    }
    if (m.find("FunctionFee") != m.end() && !m["FunctionFee"].empty()) {
      functionFee = make_shared<long>(boost::any_cast<long>(m["FunctionFee"]));
    }
    if (m.find("OrderDetailUrl") != m.end() && !m["OrderDetailUrl"].empty()) {
      orderDetailUrl = make_shared<string>(boost::any_cast<string>(m["OrderDetailUrl"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OrderInfo") != m.end() && !m["OrderInfo"].empty()) {
      orderInfo = make_shared<string>(boost::any_cast<string>(m["OrderInfo"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<string>(boost::any_cast<string>(m["OrderStatus"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PayDuration") != m.end() && !m["PayDuration"].empty()) {
      payDuration = make_shared<string>(boost::any_cast<string>(m["PayDuration"]));
    }
    if (m.find("PayTime") != m.end() && !m["PayTime"].empty()) {
      payTime = make_shared<string>(boost::any_cast<string>(m["PayTime"]));
    }
    if (m.find("PoolCapacity") != m.end() && !m["PoolCapacity"].empty()) {
      poolCapacity = make_shared<string>(boost::any_cast<string>(m["PoolCapacity"]));
    }
    if (m.find("PoolCapacityUnit") != m.end() && !m["PoolCapacityUnit"].empty()) {
      poolCapacityUnit = make_shared<string>(boost::any_cast<string>(m["PoolCapacityUnit"]));
    }
    if (m.find("PoolNo") != m.end() && !m["PoolNo"].empty()) {
      poolNo = make_shared<string>(boost::any_cast<string>(m["PoolNo"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
  }


  virtual ~ListOrderResponseBodyDataList() = default;
};
class ListOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListOrderResponseBodyDataList>> list{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListOrderResponseBodyData() {}

  explicit ListOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListOrderResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOrderResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListOrderResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListOrderResponseBodyData() = default;
};
class ListOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListOrderResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListOrderResponseBody() {}

  explicit ListOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
        ListOrderResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListOrderResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListOrderResponseBody() = default;
};
class ListOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOrderResponseBody> body{};

  ListOrderResponse() {}

  explicit ListOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrderResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrderResponse() = default;
};
class RebindResumeSingleCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};
  shared_ptr<map<string, boost::any>> optMsisdns{};

  RebindResumeSingleCardRequest() {}

  explicit RebindResumeSingleCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (optMsisdns) {
      res["OptMsisdns"] = boost::any(*optMsisdns);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("OptMsisdns") != m.end() && !m["OptMsisdns"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OptMsisdns"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      optMsisdns = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~RebindResumeSingleCardRequest() = default;
};
class RebindResumeSingleCardShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};
  shared_ptr<string> optMsisdnsShrink{};

  RebindResumeSingleCardShrinkRequest() {}

  explicit RebindResumeSingleCardShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (optMsisdnsShrink) {
      res["OptMsisdns"] = boost::any(*optMsisdnsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("OptMsisdns") != m.end() && !m["OptMsisdns"].empty()) {
      optMsisdnsShrink = make_shared<string>(boost::any_cast<string>(m["OptMsisdns"]));
    }
  }


  virtual ~RebindResumeSingleCardShrinkRequest() = default;
};
class RebindResumeSingleCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RebindResumeSingleCardResponseBody() {}

  explicit RebindResumeSingleCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RebindResumeSingleCardResponseBody() = default;
};
class RebindResumeSingleCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RebindResumeSingleCardResponseBody> body{};

  RebindResumeSingleCardResponse() {}

  explicit RebindResumeSingleCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RebindResumeSingleCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RebindResumeSingleCardResponseBody>(model1);
      }
    }
  }


  virtual ~RebindResumeSingleCardResponse() = default;
};
class RenewRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiProduct{};
  shared_ptr<string> apiRevision{};
  shared_ptr<long> buyNum{};
  shared_ptr<string> iccid{};
  shared_ptr<string> offerCode{};
  shared_ptr<string> rechargeType{};
  shared_ptr<string> serialNo{};

  RenewRequest() {}

  explicit RenewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiProduct) {
      res["ApiProduct"] = boost::any(*apiProduct);
    }
    if (apiRevision) {
      res["ApiRevision"] = boost::any(*apiRevision);
    }
    if (buyNum) {
      res["BuyNum"] = boost::any(*buyNum);
    }
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (offerCode) {
      res["OfferCode"] = boost::any(*offerCode);
    }
    if (rechargeType) {
      res["RechargeType"] = boost::any(*rechargeType);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiProduct") != m.end() && !m["ApiProduct"].empty()) {
      apiProduct = make_shared<string>(boost::any_cast<string>(m["ApiProduct"]));
    }
    if (m.find("ApiRevision") != m.end() && !m["ApiRevision"].empty()) {
      apiRevision = make_shared<string>(boost::any_cast<string>(m["ApiRevision"]));
    }
    if (m.find("BuyNum") != m.end() && !m["BuyNum"].empty()) {
      buyNum = make_shared<long>(boost::any_cast<long>(m["BuyNum"]));
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("OfferCode") != m.end() && !m["OfferCode"].empty()) {
      offerCode = make_shared<string>(boost::any_cast<string>(m["OfferCode"]));
    }
    if (m.find("RechargeType") != m.end() && !m["RechargeType"].empty()) {
      rechargeType = make_shared<string>(boost::any_cast<string>(m["RechargeType"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
  }


  virtual ~RenewRequest() = default;
};
class RenewResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> orderNo{};
  shared_ptr<string> serialNo{};

  RenewResponseBodyData() {}

  explicit RenewResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNo) {
      res["OrderNo"] = boost::any(*orderNo);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderNo") != m.end() && !m["OrderNo"].empty()) {
      orderNo = make_shared<string>(boost::any_cast<string>(m["OrderNo"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
  }


  virtual ~RenewResponseBodyData() = default;
};
class RenewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RenewResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RenewResponseBody() {}

  explicit RenewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
        RenewResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RenewResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RenewResponseBody() = default;
};
class RenewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewResponseBody> body{};

  RenewResponse() {}

  explicit RenewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewResponseBody>(model1);
      }
    }
  }


  virtual ~RenewResponse() = default;
};
class ResumeSingleCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};
  shared_ptr<map<string, boost::any>> optMsisdns{};

  ResumeSingleCardRequest() {}

  explicit ResumeSingleCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (optMsisdns) {
      res["OptMsisdns"] = boost::any(*optMsisdns);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("OptMsisdns") != m.end() && !m["OptMsisdns"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OptMsisdns"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      optMsisdns = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ResumeSingleCardRequest() = default;
};
class ResumeSingleCardShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};
  shared_ptr<string> optMsisdnsShrink{};

  ResumeSingleCardShrinkRequest() {}

  explicit ResumeSingleCardShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (optMsisdnsShrink) {
      res["OptMsisdns"] = boost::any(*optMsisdnsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("OptMsisdns") != m.end() && !m["OptMsisdns"].empty()) {
      optMsisdnsShrink = make_shared<string>(boost::any_cast<string>(m["OptMsisdns"]));
    }
  }


  virtual ~ResumeSingleCardShrinkRequest() = default;
};
class ResumeSingleCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ResumeSingleCardResponseBody() {}

  explicit ResumeSingleCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ResumeSingleCardResponseBody() = default;
};
class ResumeSingleCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResumeSingleCardResponseBody> body{};

  ResumeSingleCardResponse() {}

  explicit ResumeSingleCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResumeSingleCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResumeSingleCardResponseBody>(model1);
      }
    }
  }


  virtual ~ResumeSingleCardResponse() = default;
};
class SetCardStopRuleRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoRestore{};
  shared_ptr<long> flowLimit{};
  shared_ptr<string> iccid{};

  SetCardStopRuleRequest() {}

  explicit SetCardStopRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRestore) {
      res["AutoRestore"] = boost::any(*autoRestore);
    }
    if (flowLimit) {
      res["FlowLimit"] = boost::any(*flowLimit);
    }
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRestore") != m.end() && !m["AutoRestore"].empty()) {
      autoRestore = make_shared<bool>(boost::any_cast<bool>(m["AutoRestore"]));
    }
    if (m.find("FlowLimit") != m.end() && !m["FlowLimit"].empty()) {
      flowLimit = make_shared<long>(boost::any_cast<long>(m["FlowLimit"]));
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
  }


  virtual ~SetCardStopRuleRequest() = default;
};
class SetCardStopRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetCardStopRuleResponseBody() {}

  explicit SetCardStopRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetCardStopRuleResponseBody() = default;
};
class SetCardStopRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetCardStopRuleResponseBody> body{};

  SetCardStopRuleResponse() {}

  explicit SetCardStopRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetCardStopRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetCardStopRuleResponseBody>(model1);
      }
    }
  }


  virtual ~SetCardStopRuleResponse() = default;
};
class StopSingleCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};
  shared_ptr<map<string, boost::any>> optMsisdns{};

  StopSingleCardRequest() {}

  explicit StopSingleCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (optMsisdns) {
      res["OptMsisdns"] = boost::any(*optMsisdns);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("OptMsisdns") != m.end() && !m["OptMsisdns"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OptMsisdns"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      optMsisdns = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~StopSingleCardRequest() = default;
};
class StopSingleCardShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};
  shared_ptr<string> optMsisdnsShrink{};

  StopSingleCardShrinkRequest() {}

  explicit StopSingleCardShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (optMsisdnsShrink) {
      res["OptMsisdns"] = boost::any(*optMsisdnsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("OptMsisdns") != m.end() && !m["OptMsisdns"].empty()) {
      optMsisdnsShrink = make_shared<string>(boost::any_cast<string>(m["OptMsisdns"]));
    }
  }


  virtual ~StopSingleCardShrinkRequest() = default;
};
class StopSingleCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopSingleCardResponseBody() {}

  explicit StopSingleCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StopSingleCardResponseBody() = default;
};
class StopSingleCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopSingleCardResponseBody> body{};

  StopSingleCardResponse() {}

  explicit StopSingleCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopSingleCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopSingleCardResponseBody>(model1);
      }
    }
  }


  virtual ~StopSingleCardResponse() = default;
};
class UpdateAutoRechargeSwitchRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};
  shared_ptr<bool> open{};

  UpdateAutoRechargeSwitchRequest() {}

  explicit UpdateAutoRechargeSwitchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (open) {
      res["Open"] = boost::any(*open);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("Open") != m.end() && !m["Open"].empty()) {
      open = make_shared<bool>(boost::any_cast<bool>(m["Open"]));
    }
  }


  virtual ~UpdateAutoRechargeSwitchRequest() = default;
};
class UpdateAutoRechargeSwitchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateAutoRechargeSwitchResponseBody() {}

  explicit UpdateAutoRechargeSwitchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateAutoRechargeSwitchResponseBody() = default;
};
class UpdateAutoRechargeSwitchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAutoRechargeSwitchResponseBody> body{};

  UpdateAutoRechargeSwitchResponse() {}

  explicit UpdateAutoRechargeSwitchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAutoRechargeSwitchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAutoRechargeSwitchResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAutoRechargeSwitchResponse() = default;
};
class VerifyIotCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};

  VerifyIotCardRequest() {}

  explicit VerifyIotCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
  }


  virtual ~VerifyIotCardRequest() = default;
};
class VerifyIotCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  VerifyIotCardResponseBody() {}

  explicit VerifyIotCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~VerifyIotCardResponseBody() = default;
};
class VerifyIotCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyIotCardResponseBody> body{};

  VerifyIotCardResponse() {}

  explicit VerifyIotCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyIotCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyIotCardResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyIotCardResponse() = default;
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
  AddDirectionalCardResponse addDirectionalCardWithOptions(shared_ptr<AddDirectionalCardRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDirectionalCardResponse addDirectionalCard(shared_ptr<AddDirectionalCardRequest> request);
  AddDirectionalGroupResponse addDirectionalGroupWithOptions(shared_ptr<AddDirectionalGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDirectionalGroupResponse addDirectionalGroup(shared_ptr<AddDirectionalGroupRequest> request);
  BatchAddDirectionalAddressResponse batchAddDirectionalAddressWithOptions(shared_ptr<BatchAddDirectionalAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchAddDirectionalAddressResponse batchAddDirectionalAddress(shared_ptr<BatchAddDirectionalAddressRequest> request);
  CardStatisticsResponse cardStatisticsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CardStatisticsResponse cardStatistics();
  ForceActivationResponse forceActivationWithOptions(shared_ptr<ForceActivationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ForceActivationResponse forceActivation(shared_ptr<ForceActivationRequest> request);
  GetCardDetailResponse getCardDetailWithOptions(shared_ptr<GetCardDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCardDetailResponse getCardDetail(shared_ptr<GetCardDetailRequest> request);
  GetCardFlowInfoResponse getCardFlowInfoWithOptions(shared_ptr<GetCardFlowInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCardFlowInfoResponse getCardFlowInfo(shared_ptr<GetCardFlowInfoRequest> request);
  GetCredentialPoolStatisticsResponse getCredentialPoolStatisticsWithOptions(shared_ptr<GetCredentialPoolStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCredentialPoolStatisticsResponse getCredentialPoolStatistics(shared_ptr<GetCredentialPoolStatisticsRequest> request);
  ListCardInfoResponse listCardInfoWithOptions(shared_ptr<ListCardInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCardInfoResponse listCardInfo(shared_ptr<ListCardInfoRequest> request);
  ListDirectionalAddressResponse listDirectionalAddressWithOptions(shared_ptr<ListDirectionalAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDirectionalAddressResponse listDirectionalAddress(shared_ptr<ListDirectionalAddressRequest> request);
  ListDirectionalDetailResponse listDirectionalDetailWithOptions(shared_ptr<ListDirectionalDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDirectionalDetailResponse listDirectionalDetail(shared_ptr<ListDirectionalDetailRequest> request);
  ListOrderResponse listOrderWithOptions(shared_ptr<ListOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrderResponse listOrder(shared_ptr<ListOrderRequest> request);
  RebindResumeSingleCardResponse rebindResumeSingleCardWithOptions(shared_ptr<RebindResumeSingleCardRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebindResumeSingleCardResponse rebindResumeSingleCard(shared_ptr<RebindResumeSingleCardRequest> request);
  RenewResponse renewWithOptions(shared_ptr<RenewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewResponse renew(shared_ptr<RenewRequest> request);
  ResumeSingleCardResponse resumeSingleCardWithOptions(shared_ptr<ResumeSingleCardRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeSingleCardResponse resumeSingleCard(shared_ptr<ResumeSingleCardRequest> request);
  SetCardStopRuleResponse setCardStopRuleWithOptions(shared_ptr<SetCardStopRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetCardStopRuleResponse setCardStopRule(shared_ptr<SetCardStopRuleRequest> request);
  StopSingleCardResponse stopSingleCardWithOptions(shared_ptr<StopSingleCardRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopSingleCardResponse stopSingleCard(shared_ptr<StopSingleCardRequest> request);
  UpdateAutoRechargeSwitchResponse updateAutoRechargeSwitchWithOptions(shared_ptr<UpdateAutoRechargeSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAutoRechargeSwitchResponse updateAutoRechargeSwitch(shared_ptr<UpdateAutoRechargeSwitchRequest> request);
  VerifyIotCardResponse verifyIotCardWithOptions(shared_ptr<VerifyIotCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyIotCardResponse verifyIotCard(shared_ptr<VerifyIotCardRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Linkcard20210520

#endif
