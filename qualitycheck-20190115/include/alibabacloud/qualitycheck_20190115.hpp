// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_QUALITYCHECK20190115_H_
#define ALIBABACLOUD_QUALITYCHECK20190115_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Qualitycheck20190115 {
class AddBusinessCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  AddBusinessCategoryRequest() {}

  explicit AddBusinessCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~AddBusinessCategoryRequest() = default;
};
class AddBusinessCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  AddBusinessCategoryResponseBody() {}

  explicit AddBusinessCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddBusinessCategoryResponseBody() = default;
};
class AddBusinessCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddBusinessCategoryResponseBody> body{};

  AddBusinessCategoryResponse() {}

  explicit AddBusinessCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddBusinessCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddBusinessCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~AddBusinessCategoryResponse() = default;
};
class AddRuleCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  AddRuleCategoryRequest() {}

  explicit AddRuleCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~AddRuleCategoryRequest() = default;
};
class AddRuleCategoryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> select{};

  AddRuleCategoryResponseBodyData() {}

  explicit AddRuleCategoryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (select) {
      res["Select"] = boost::any(*select);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Select") != m.end() && !m["Select"].empty()) {
      select = make_shared<bool>(boost::any_cast<bool>(m["Select"]));
    }
  }


  virtual ~AddRuleCategoryResponseBodyData() = default;
};
class AddRuleCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<AddRuleCategoryResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  AddRuleCategoryResponseBody() {}

  explicit AddRuleCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddRuleCategoryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddRuleCategoryResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddRuleCategoryResponseBody() = default;
};
class AddRuleCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddRuleCategoryResponseBody> body{};

  AddRuleCategoryResponse() {}

  explicit AddRuleCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddRuleCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddRuleCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~AddRuleCategoryResponse() = default;
};
class AddThesaurusForApiRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  AddThesaurusForApiRequest() {}

  explicit AddThesaurusForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~AddThesaurusForApiRequest() = default;
};
class AddThesaurusForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  AddThesaurusForApiResponseBody() {}

  explicit AddThesaurusForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddThesaurusForApiResponseBody() = default;
};
class AddThesaurusForApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddThesaurusForApiResponseBody> body{};

  AddThesaurusForApiResponse() {}

  explicit AddThesaurusForApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddThesaurusForApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddThesaurusForApiResponseBody>(model1);
      }
    }
  }


  virtual ~AddThesaurusForApiResponse() = default;
};
class AddUploadDataSetRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  AddUploadDataSetRequest() {}

  explicit AddUploadDataSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~AddUploadDataSetRequest() = default;
};
class AddUploadDataSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  AddUploadDataSetResponseBody() {}

  explicit AddUploadDataSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddUploadDataSetResponseBody() = default;
};
class AddUploadDataSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddUploadDataSetResponseBody> body{};

  AddUploadDataSetResponse() {}

  explicit AddUploadDataSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUploadDataSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUploadDataSetResponseBody>(model1);
      }
    }
  }


  virtual ~AddUploadDataSetResponse() = default;
};
class AssignReviewerRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  AssignReviewerRequest() {}

  explicit AssignReviewerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~AssignReviewerRequest() = default;
};
class AssignReviewerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  AssignReviewerResponseBody() {}

  explicit AssignReviewerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AssignReviewerResponseBody() = default;
};
class AssignReviewerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssignReviewerResponseBody> body{};

  AssignReviewerResponse() {}

  explicit AssignReviewerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssignReviewerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssignReviewerResponseBody>(model1);
      }
    }
  }


  virtual ~AssignReviewerResponse() = default;
};
class ConfigDataSetRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  ConfigDataSetRequest() {}

  explicit ConfigDataSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~ConfigDataSetRequest() = default;
};
class ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRangeRange : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<long> to{};

  ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRangeRange() {}

  explicit ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRangeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRangeRange() = default;
};
class ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRangeAnchor : public Darabonba::Model {
public:
  shared_ptr<string> cid{};
  shared_ptr<long> hitTime{};
  shared_ptr<string> location{};

  ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRangeAnchor() {}

  explicit ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRangeAnchor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    if (hitTime) {
      res["HitTime"] = boost::any(*hitTime);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      cid = make_shared<string>(boost::any_cast<string>(m["Cid"]));
    }
    if (m.find("HitTime") != m.end() && !m["HitTime"].empty()) {
      hitTime = make_shared<long>(boost::any_cast<long>(m["HitTime"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
  }


  virtual ~ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRangeAnchor() = default;
};
class ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRange : public Darabonba::Model {
public:
  shared_ptr<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRangeRange> range{};
  shared_ptr<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRangeAnchor> anchor{};
  shared_ptr<string> role{};
  shared_ptr<long> roleId{};

  ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRange() {}

  explicit ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (range) {
      res["Range"] = range ? boost::any(range->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (anchor) {
      res["Anchor"] = anchor ? boost::any(anchor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Range") != m.end() && !m["Range"].empty()) {
      if (typeid(map<string, boost::any>) == m["Range"].type()) {
        ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRangeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Range"]));
        range = make_shared<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRangeRange>(model1);
      }
    }
    if (m.find("Anchor") != m.end() && !m["Anchor"].empty()) {
      if (typeid(map<string, boost::any>) == m["Anchor"].type()) {
        ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRangeAnchor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Anchor"]));
        anchor = make_shared<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRangeAnchor>(model1);
      }
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
  }


  virtual ~ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRange() = default;
};
class ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamKeywords : public Darabonba::Model {
public:
  shared_ptr<vector<string>> keywords{};

  ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamKeywords() {}

  explicit ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamKeywords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Keywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Keywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keywords = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamKeywords() = default;
};
class ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam : public Darabonba::Model {
public:
  shared_ptr<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamKeywords> keywords{};
  shared_ptr<bool> inSentence{};

  ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam() {}

  explicit ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keywords) {
      res["Keywords"] = keywords ? boost::any(keywords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (inSentence) {
      res["InSentence"] = boost::any(*inSentence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      if (typeid(map<string, boost::any>) == m["Keywords"].type()) {
        ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamKeywords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Keywords"]));
        keywords = make_shared<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamKeywords>(model1);
      }
    }
    if (m.find("InSentence") != m.end() && !m["InSentence"].empty()) {
      inSentence = make_shared<bool>(boost::any_cast<bool>(m["InSentence"]));
    }
  }


  virtual ~ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam() = default;
};
class ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> oid{};
  shared_ptr<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam> param{};

  ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfo() {}

  explicit ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (oid) {
      res["Oid"] = boost::any(*oid);
    }
    if (param) {
      res["Param"] = param ? boost::any(param->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Oid") != m.end() && !m["Oid"].empty()) {
      oid = make_shared<string>(boost::any_cast<string>(m["Oid"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      if (typeid(map<string, boost::any>) == m["Param"].type()) {
        ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Param"]));
        param = make_shared<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam>(model1);
      }
    }
  }


  virtual ~ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfo() = default;
};
class ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperators : public Darabonba::Model {
public:
  shared_ptr<vector<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfo>> operatorBasicInfo{};

  ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperators() {}

  explicit ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperators(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operatorBasicInfo) {
      vector<boost::any> temp1;
      for(auto item1:*operatorBasicInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperatorBasicInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperatorBasicInfo") != m.end() && !m["OperatorBasicInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["OperatorBasicInfo"].type()) {
        vector<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperatorBasicInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operatorBasicInfo = make_shared<vector<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperatorsOperatorBasicInfo>>(expect1);
      }
    }
  }


  virtual ~ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperators() = default;
};
class ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfo : public Darabonba::Model {
public:
  shared_ptr<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRange> checkRange{};
  shared_ptr<string> cid{};
  shared_ptr<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperators> operators{};
  shared_ptr<string> lambda{};

  ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfo() {}

  explicit ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkRange) {
      res["CheckRange"] = checkRange ? boost::any(checkRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    if (operators) {
      res["Operators"] = operators ? boost::any(operators->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (lambda) {
      res["Lambda"] = boost::any(*lambda);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckRange") != m.end() && !m["CheckRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["CheckRange"].type()) {
        ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CheckRange"]));
        checkRange = make_shared<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoCheckRange>(model1);
      }
    }
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      cid = make_shared<string>(boost::any_cast<string>(m["Cid"]));
    }
    if (m.find("Operators") != m.end() && !m["Operators"].empty()) {
      if (typeid(map<string, boost::any>) == m["Operators"].type()) {
        ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperators model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Operators"]));
        operators = make_shared<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfoOperators>(model1);
      }
    }
    if (m.find("Lambda") != m.end() && !m["Lambda"].empty()) {
      lambda = make_shared<string>(boost::any_cast<string>(m["Lambda"]));
    }
  }


  virtual ~ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfo() = default;
};
class ConfigDataSetResponseBodyDataRuleInfoConditions : public Darabonba::Model {
public:
  shared_ptr<vector<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfo>> conditionBasicInfo{};

  ConfigDataSetResponseBodyDataRuleInfoConditions() {}

  explicit ConfigDataSetResponseBodyDataRuleInfoConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionBasicInfo) {
      vector<boost::any> temp1;
      for(auto item1:*conditionBasicInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConditionBasicInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionBasicInfo") != m.end() && !m["ConditionBasicInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ConditionBasicInfo"].type()) {
        vector<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConditionBasicInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditionBasicInfo = make_shared<vector<ConfigDataSetResponseBodyDataRuleInfoConditionsConditionBasicInfo>>(expect1);
      }
    }
  }


  virtual ~ConfigDataSetResponseBodyDataRuleInfoConditions() = default;
};
class ConfigDataSetResponseBodyDataRuleInfoRulesRuleBasicInfo : public Darabonba::Model {
public:
  shared_ptr<long> externalProperty{};
  shared_ptr<string> lambda{};
  shared_ptr<string> rid{};

  ConfigDataSetResponseBodyDataRuleInfoRulesRuleBasicInfo() {}

  explicit ConfigDataSetResponseBodyDataRuleInfoRulesRuleBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalProperty) {
      res["ExternalProperty"] = boost::any(*externalProperty);
    }
    if (lambda) {
      res["Lambda"] = boost::any(*lambda);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalProperty") != m.end() && !m["ExternalProperty"].empty()) {
      externalProperty = make_shared<long>(boost::any_cast<long>(m["ExternalProperty"]));
    }
    if (m.find("Lambda") != m.end() && !m["Lambda"].empty()) {
      lambda = make_shared<string>(boost::any_cast<string>(m["Lambda"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
  }


  virtual ~ConfigDataSetResponseBodyDataRuleInfoRulesRuleBasicInfo() = default;
};
class ConfigDataSetResponseBodyDataRuleInfoRules : public Darabonba::Model {
public:
  shared_ptr<vector<ConfigDataSetResponseBodyDataRuleInfoRulesRuleBasicInfo>> ruleBasicInfo{};

  ConfigDataSetResponseBodyDataRuleInfoRules() {}

  explicit ConfigDataSetResponseBodyDataRuleInfoRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleBasicInfo) {
      vector<boost::any> temp1;
      for(auto item1:*ruleBasicInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleBasicInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleBasicInfo") != m.end() && !m["RuleBasicInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleBasicInfo"].type()) {
        vector<ConfigDataSetResponseBodyDataRuleInfoRulesRuleBasicInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleBasicInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConfigDataSetResponseBodyDataRuleInfoRulesRuleBasicInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleBasicInfo = make_shared<vector<ConfigDataSetResponseBodyDataRuleInfoRulesRuleBasicInfo>>(expect1);
      }
    }
  }


  virtual ~ConfigDataSetResponseBodyDataRuleInfoRules() = default;
};
class ConfigDataSetResponseBodyDataRuleInfo : public Darabonba::Model {
public:
  shared_ptr<ConfigDataSetResponseBodyDataRuleInfoConditions> conditions{};
  shared_ptr<ConfigDataSetResponseBodyDataRuleInfoRules> rules{};

  ConfigDataSetResponseBodyDataRuleInfo() {}

  explicit ConfigDataSetResponseBodyDataRuleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditions) {
      res["Conditions"] = conditions ? boost::any(conditions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Conditions") != m.end() && !m["Conditions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Conditions"].type()) {
        ConfigDataSetResponseBodyDataRuleInfoConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Conditions"]));
        conditions = make_shared<ConfigDataSetResponseBodyDataRuleInfoConditions>(model1);
      }
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        ConfigDataSetResponseBodyDataRuleInfoRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<ConfigDataSetResponseBodyDataRuleInfoRules>(model1);
      }
    }
  }


  virtual ~ConfigDataSetResponseBodyDataRuleInfo() = default;
};
class ConfigDataSetResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ConfigDataSetResponseBodyDataRuleInfo> ruleInfo{};
  shared_ptr<long> channelType{};
  shared_ptr<long> setId{};
  shared_ptr<long> roleConfigStatus{};
  shared_ptr<long> judgeType{};

  ConfigDataSetResponseBodyData() {}

  explicit ConfigDataSetResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleInfo) {
      res["RuleInfo"] = ruleInfo ? boost::any(ruleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (roleConfigStatus) {
      res["RoleConfigStatus"] = boost::any(*roleConfigStatus);
    }
    if (judgeType) {
      res["JudgeType"] = boost::any(*judgeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleInfo") != m.end() && !m["RuleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleInfo"].type()) {
        ConfigDataSetResponseBodyDataRuleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleInfo"]));
        ruleInfo = make_shared<ConfigDataSetResponseBodyDataRuleInfo>(model1);
      }
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<long>(boost::any_cast<long>(m["SetId"]));
    }
    if (m.find("RoleConfigStatus") != m.end() && !m["RoleConfigStatus"].empty()) {
      roleConfigStatus = make_shared<long>(boost::any_cast<long>(m["RoleConfigStatus"]));
    }
    if (m.find("JudgeType") != m.end() && !m["JudgeType"].empty()) {
      judgeType = make_shared<long>(boost::any_cast<long>(m["JudgeType"]));
    }
  }


  virtual ~ConfigDataSetResponseBodyData() = default;
};
class ConfigDataSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ConfigDataSetResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ConfigDataSetResponseBody() {}

  explicit ConfigDataSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ConfigDataSetResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ConfigDataSetResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ConfigDataSetResponseBody() = default;
};
class ConfigDataSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ConfigDataSetResponseBody> body{};

  ConfigDataSetResponse() {}

  explicit ConfigDataSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigDataSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigDataSetResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigDataSetResponse() = default;
};
class CreateAsrVocabRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  CreateAsrVocabRequest() {}

  explicit CreateAsrVocabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~CreateAsrVocabRequest() = default;
};
class CreateAsrVocabResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateAsrVocabResponseBody() {}

  explicit CreateAsrVocabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateAsrVocabResponseBody() = default;
};
class CreateAsrVocabResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAsrVocabResponseBody> body{};

  CreateAsrVocabResponse() {}

  explicit CreateAsrVocabResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAsrVocabResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAsrVocabResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAsrVocabResponse() = default;
};
class CreateRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  CreateRuleRequest() {}

  explicit CreateRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~CreateRuleRequest() = default;
};
class CreateRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateRuleResponseBody() {}

  explicit CreateRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateRuleResponseBody() = default;
};
class CreateRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRuleResponseBody> body{};

  CreateRuleResponse() {}

  explicit CreateRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRuleResponse() = default;
};
class CreateSkillGroupConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  CreateSkillGroupConfigRequest() {}

  explicit CreateSkillGroupConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~CreateSkillGroupConfigRequest() = default;
};
class CreateSkillGroupConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateSkillGroupConfigResponseBody() {}

  explicit CreateSkillGroupConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateSkillGroupConfigResponseBody() = default;
};
class CreateSkillGroupConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSkillGroupConfigResponseBody> body{};

  CreateSkillGroupConfigResponse() {}

  explicit CreateSkillGroupConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSkillGroupConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSkillGroupConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSkillGroupConfigResponse() = default;
};
class CreateTaskAssignRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  CreateTaskAssignRuleRequest() {}

  explicit CreateTaskAssignRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~CreateTaskAssignRuleRequest() = default;
};
class CreateTaskAssignRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateTaskAssignRuleResponseBody() {}

  explicit CreateTaskAssignRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateTaskAssignRuleResponseBody() = default;
};
class CreateTaskAssignRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTaskAssignRuleResponseBody> body{};

  CreateTaskAssignRuleResponse() {}

  explicit CreateTaskAssignRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTaskAssignRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTaskAssignRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTaskAssignRuleResponse() = default;
};
class CreateUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  CreateUserRequest() {}

  explicit CreateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~CreateUserRequest() = default;
};
class CreateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateUserResponseBody() {}

  explicit CreateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateUserResponseBody() = default;
};
class CreateUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateUserResponseBody> body{};

  CreateUserResponse() {}

  explicit CreateUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserResponse() = default;
};
class CreateWarningConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  CreateWarningConfigRequest() {}

  explicit CreateWarningConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~CreateWarningConfigRequest() = default;
};
class CreateWarningConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateWarningConfigResponseBody() {}

  explicit CreateWarningConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateWarningConfigResponseBody() = default;
};
class CreateWarningConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateWarningConfigResponseBody> body{};

  CreateWarningConfigResponse() {}

  explicit CreateWarningConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWarningConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWarningConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWarningConfigResponse() = default;
};
class DeleteAsrVocabRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  DeleteAsrVocabRequest() {}

  explicit DeleteAsrVocabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~DeleteAsrVocabRequest() = default;
};
class DeleteAsrVocabResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteAsrVocabResponseBody() {}

  explicit DeleteAsrVocabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteAsrVocabResponseBody() = default;
};
class DeleteAsrVocabResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAsrVocabResponseBody> body{};

  DeleteAsrVocabResponse() {}

  explicit DeleteAsrVocabResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAsrVocabResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAsrVocabResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAsrVocabResponse() = default;
};
class DeleteBusinessCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  DeleteBusinessCategoryRequest() {}

  explicit DeleteBusinessCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~DeleteBusinessCategoryRequest() = default;
};
class DeleteBusinessCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteBusinessCategoryResponseBody() {}

  explicit DeleteBusinessCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteBusinessCategoryResponseBody() = default;
};
class DeleteBusinessCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteBusinessCategoryResponseBody> body{};

  DeleteBusinessCategoryResponse() {}

  explicit DeleteBusinessCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBusinessCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBusinessCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBusinessCategoryResponse() = default;
};
class DeleteCustomizationConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  DeleteCustomizationConfigRequest() {}

  explicit DeleteCustomizationConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~DeleteCustomizationConfigRequest() = default;
};
class DeleteCustomizationConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteCustomizationConfigResponseBody() {}

  explicit DeleteCustomizationConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteCustomizationConfigResponseBody() = default;
};
class DeleteCustomizationConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCustomizationConfigResponseBody> body{};

  DeleteCustomizationConfigResponse() {}

  explicit DeleteCustomizationConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCustomizationConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCustomizationConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCustomizationConfigResponse() = default;
};
class DeleteDataSetRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  DeleteDataSetRequest() {}

  explicit DeleteDataSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~DeleteDataSetRequest() = default;
};
class DeleteDataSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteDataSetResponseBody() {}

  explicit DeleteDataSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteDataSetResponseBody() = default;
};
class DeleteDataSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDataSetResponseBody> body{};

  DeleteDataSetResponse() {}

  explicit DeleteDataSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDataSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDataSetResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDataSetResponse() = default;
};
class DeletePrecisionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  DeletePrecisionTaskRequest() {}

  explicit DeletePrecisionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~DeletePrecisionTaskRequest() = default;
};
class DeletePrecisionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeletePrecisionTaskResponseBody() {}

  explicit DeletePrecisionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeletePrecisionTaskResponseBody() = default;
};
class DeletePrecisionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeletePrecisionTaskResponseBody> body{};

  DeletePrecisionTaskResponse() {}

  explicit DeletePrecisionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePrecisionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePrecisionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePrecisionTaskResponse() = default;
};
class DeleteScoreForApiRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  DeleteScoreForApiRequest() {}

  explicit DeleteScoreForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~DeleteScoreForApiRequest() = default;
};
class DeleteScoreForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteScoreForApiResponseBody() {}

  explicit DeleteScoreForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteScoreForApiResponseBody() = default;
};
class DeleteScoreForApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteScoreForApiResponseBody> body{};

  DeleteScoreForApiResponse() {}

  explicit DeleteScoreForApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScoreForApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScoreForApiResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScoreForApiResponse() = default;
};
class DeleteSkillGroupConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  DeleteSkillGroupConfigRequest() {}

  explicit DeleteSkillGroupConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~DeleteSkillGroupConfigRequest() = default;
};
class DeleteSkillGroupConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteSkillGroupConfigResponseBody() {}

  explicit DeleteSkillGroupConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteSkillGroupConfigResponseBody() = default;
};
class DeleteSkillGroupConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteSkillGroupConfigResponseBody> body{};

  DeleteSkillGroupConfigResponse() {}

  explicit DeleteSkillGroupConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSkillGroupConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSkillGroupConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSkillGroupConfigResponse() = default;
};
class DeleteSubScoreForApiRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  DeleteSubScoreForApiRequest() {}

  explicit DeleteSubScoreForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~DeleteSubScoreForApiRequest() = default;
};
class DeleteSubScoreForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteSubScoreForApiResponseBody() {}

  explicit DeleteSubScoreForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteSubScoreForApiResponseBody() = default;
};
class DeleteSubScoreForApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteSubScoreForApiResponseBody> body{};

  DeleteSubScoreForApiResponse() {}

  explicit DeleteSubScoreForApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSubScoreForApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSubScoreForApiResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSubScoreForApiResponse() = default;
};
class DeleteTaskAssignRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  DeleteTaskAssignRuleRequest() {}

  explicit DeleteTaskAssignRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~DeleteTaskAssignRuleRequest() = default;
};
class DeleteTaskAssignRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteTaskAssignRuleResponseBody() {}

  explicit DeleteTaskAssignRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteTaskAssignRuleResponseBody() = default;
};
class DeleteTaskAssignRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteTaskAssignRuleResponseBody> body{};

  DeleteTaskAssignRuleResponse() {}

  explicit DeleteTaskAssignRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTaskAssignRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTaskAssignRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTaskAssignRuleResponse() = default;
};
class DeleteUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  DeleteUserRequest() {}

  explicit DeleteUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~DeleteUserRequest() = default;
};
class DeleteUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteUserResponseBody() {}

  explicit DeleteUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteUserResponseBody() = default;
};
class DeleteUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteUserResponseBody> body{};

  DeleteUserResponse() {}

  explicit DeleteUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserResponse() = default;
};
class DeleteWarningConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  DeleteWarningConfigRequest() {}

  explicit DeleteWarningConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~DeleteWarningConfigRequest() = default;
};
class DeleteWarningConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteWarningConfigResponseBody() {}

  explicit DeleteWarningConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteWarningConfigResponseBody() = default;
};
class DeleteWarningConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteWarningConfigResponseBody> body{};

  DeleteWarningConfigResponse() {}

  explicit DeleteWarningConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteWarningConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWarningConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWarningConfigResponse() = default;
};
class DelRuleCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  DelRuleCategoryRequest() {}

  explicit DelRuleCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~DelRuleCategoryRequest() = default;
};
class DelRuleCategoryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> select{};

  DelRuleCategoryResponseBodyData() {}

  explicit DelRuleCategoryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (select) {
      res["Select"] = boost::any(*select);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Select") != m.end() && !m["Select"].empty()) {
      select = make_shared<bool>(boost::any_cast<bool>(m["Select"]));
    }
  }


  virtual ~DelRuleCategoryResponseBodyData() = default;
};
class DelRuleCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DelRuleCategoryResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DelRuleCategoryResponseBody() {}

  explicit DelRuleCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DelRuleCategoryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DelRuleCategoryResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DelRuleCategoryResponseBody() = default;
};
class DelRuleCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DelRuleCategoryResponseBody> body{};

  DelRuleCategoryResponse() {}

  explicit DelRuleCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DelRuleCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DelRuleCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~DelRuleCategoryResponse() = default;
};
class DelThesaurusForApiRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  DelThesaurusForApiRequest() {}

  explicit DelThesaurusForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~DelThesaurusForApiRequest() = default;
};
class DelThesaurusForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DelThesaurusForApiResponseBody() {}

  explicit DelThesaurusForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DelThesaurusForApiResponseBody() = default;
};
class DelThesaurusForApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DelThesaurusForApiResponseBody> body{};

  DelThesaurusForApiResponse() {}

  explicit DelThesaurusForApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DelThesaurusForApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DelThesaurusForApiResponseBody>(model1);
      }
    }
  }


  virtual ~DelThesaurusForApiResponse() = default;
};
class EditThesaurusForApiRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  EditThesaurusForApiRequest() {}

  explicit EditThesaurusForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~EditThesaurusForApiRequest() = default;
};
class EditThesaurusForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  EditThesaurusForApiResponseBody() {}

  explicit EditThesaurusForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EditThesaurusForApiResponseBody() = default;
};
class EditThesaurusForApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EditThesaurusForApiResponseBody> body{};

  EditThesaurusForApiResponse() {}

  explicit EditThesaurusForApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EditThesaurusForApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EditThesaurusForApiResponseBody>(model1);
      }
    }
  }


  virtual ~EditThesaurusForApiResponse() = default;
};
class GetAsrVocabRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetAsrVocabRequest() {}

  explicit GetAsrVocabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetAsrVocabRequest() = default;
};
class GetAsrVocabResponseBodyDataWordsWord : public Darabonba::Model {
public:
  shared_ptr<long> weight{};
  shared_ptr<string> word{};

  GetAsrVocabResponseBodyDataWordsWord() {}

  explicit GetAsrVocabResponseBodyDataWordsWord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (word) {
      res["Word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
  }


  virtual ~GetAsrVocabResponseBodyDataWordsWord() = default;
};
class GetAsrVocabResponseBodyDataWords : public Darabonba::Model {
public:
  shared_ptr<vector<GetAsrVocabResponseBodyDataWordsWord>> word{};

  GetAsrVocabResponseBodyDataWords() {}

  explicit GetAsrVocabResponseBodyDataWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (word) {
      vector<boost::any> temp1;
      for(auto item1:*word){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Word"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      if (typeid(vector<boost::any>) == m["Word"].type()) {
        vector<GetAsrVocabResponseBodyDataWordsWord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Word"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAsrVocabResponseBodyDataWordsWord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        word = make_shared<vector<GetAsrVocabResponseBodyDataWordsWord>>(expect1);
      }
    }
  }


  virtual ~GetAsrVocabResponseBodyDataWords() = default;
};
class GetAsrVocabResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetAsrVocabResponseBodyDataWords> words{};
  shared_ptr<string> name{};

  GetAsrVocabResponseBodyData() {}

  explicit GetAsrVocabResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      res["Words"] = words ? boost::any(words->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      if (typeid(map<string, boost::any>) == m["Words"].type()) {
        GetAsrVocabResponseBodyDataWords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Words"]));
        words = make_shared<GetAsrVocabResponseBodyDataWords>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetAsrVocabResponseBodyData() = default;
};
class GetAsrVocabResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetAsrVocabResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetAsrVocabResponseBody() {}

  explicit GetAsrVocabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAsrVocabResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAsrVocabResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetAsrVocabResponseBody() = default;
};
class GetAsrVocabResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAsrVocabResponseBody> body{};

  GetAsrVocabResponse() {}

  explicit GetAsrVocabResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsrVocabResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAsrVocabResponseBody>(model1);
      }
    }
  }


  virtual ~GetAsrVocabResponse() = default;
};
class GetBusinessCategoryListRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetBusinessCategoryListRequest() {}

  explicit GetBusinessCategoryListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetBusinessCategoryListRequest() = default;
};
class GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> businessName{};
  shared_ptr<long> serviceType{};
  shared_ptr<long> bid{};

  GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo() {}

  explicit GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessName) {
      res["BusinessName"] = boost::any(*businessName);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessName") != m.end() && !m["BusinessName"].empty()) {
      businessName = make_shared<string>(boost::any_cast<string>(m["BusinessName"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<long>(boost::any_cast<long>(m["ServiceType"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<long>(boost::any_cast<long>(m["Bid"]));
    }
  }


  virtual ~GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo() = default;
};
class GetBusinessCategoryListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo>> businessCategoryBasicInfo{};

  GetBusinessCategoryListResponseBodyData() {}

  explicit GetBusinessCategoryListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessCategoryBasicInfo) {
      vector<boost::any> temp1;
      for(auto item1:*businessCategoryBasicInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BusinessCategoryBasicInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessCategoryBasicInfo") != m.end() && !m["BusinessCategoryBasicInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["BusinessCategoryBasicInfo"].type()) {
        vector<GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BusinessCategoryBasicInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        businessCategoryBasicInfo = make_shared<vector<GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo>>(expect1);
      }
    }
  }


  virtual ~GetBusinessCategoryListResponseBodyData() = default;
};
class GetBusinessCategoryListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetBusinessCategoryListResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetBusinessCategoryListResponseBody() {}

  explicit GetBusinessCategoryListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetBusinessCategoryListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetBusinessCategoryListResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetBusinessCategoryListResponseBody() = default;
};
class GetBusinessCategoryListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetBusinessCategoryListResponseBody> body{};

  GetBusinessCategoryListResponse() {}

  explicit GetBusinessCategoryListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBusinessCategoryListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBusinessCategoryListResponseBody>(model1);
      }
    }
  }


  virtual ~GetBusinessCategoryListResponse() = default;
};
class GetCustomizationConfigListRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetCustomizationConfigListRequest() {}

  explicit GetCustomizationConfigListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetCustomizationConfigListRequest() = default;
};
class GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo : public Darabonba::Model {
public:
  shared_ptr<long> taskType{};
  shared_ptr<string> createTime{};
  shared_ptr<long> modelStatus{};
  shared_ptr<string> modelName{};
  shared_ptr<long> modelId{};
  shared_ptr<string> modeCustomizationId{};

  GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo() {}

  explicit GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modeCustomizationId) {
      res["ModeCustomizationId"] = boost::any(*modeCustomizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<long>(boost::any_cast<long>(m["TaskType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<long>(boost::any_cast<long>(m["ModelStatus"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
    if (m.find("ModeCustomizationId") != m.end() && !m["ModeCustomizationId"].empty()) {
      modeCustomizationId = make_shared<string>(boost::any_cast<string>(m["ModeCustomizationId"]));
    }
  }


  virtual ~GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo() = default;
};
class GetCustomizationConfigListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo>> modelCustomizationDataSetPo{};

  GetCustomizationConfigListResponseBodyData() {}

  explicit GetCustomizationConfigListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelCustomizationDataSetPo) {
      vector<boost::any> temp1;
      for(auto item1:*modelCustomizationDataSetPo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModelCustomizationDataSetPo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelCustomizationDataSetPo") != m.end() && !m["ModelCustomizationDataSetPo"].empty()) {
      if (typeid(vector<boost::any>) == m["ModelCustomizationDataSetPo"].type()) {
        vector<GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModelCustomizationDataSetPo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modelCustomizationDataSetPo = make_shared<vector<GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo>>(expect1);
      }
    }
  }


  virtual ~GetCustomizationConfigListResponseBodyData() = default;
};
class GetCustomizationConfigListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetCustomizationConfigListResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetCustomizationConfigListResponseBody() {}

  explicit GetCustomizationConfigListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCustomizationConfigListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCustomizationConfigListResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetCustomizationConfigListResponseBody() = default;
};
class GetCustomizationConfigListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCustomizationConfigListResponseBody> body{};

  GetCustomizationConfigListResponse() {}

  explicit GetCustomizationConfigListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCustomizationConfigListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCustomizationConfigListResponseBody>(model1);
      }
    }
  }


  virtual ~GetCustomizationConfigListResponse() = default;
};
class GetHitResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetHitResultRequest() {}

  explicit GetHitResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetHitResultRequest() = default;
};
class GetHitResultResponseBodyDataResultInfo : public Darabonba::Model {
public:
  shared_ptr<string> ruleName{};
  shared_ptr<long> rid{};

  GetHitResultResponseBodyDataResultInfo() {}

  explicit GetHitResultResponseBodyDataResultInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
  }


  virtual ~GetHitResultResponseBodyDataResultInfo() = default;
};
class GetHitResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetHitResultResponseBodyDataResultInfo>> resultInfo{};

  GetHitResultResponseBodyData() {}

  explicit GetHitResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultInfo) {
      vector<boost::any> temp1;
      for(auto item1:*resultInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultInfo") != m.end() && !m["ResultInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultInfo"].type()) {
        vector<GetHitResultResponseBodyDataResultInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHitResultResponseBodyDataResultInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultInfo = make_shared<vector<GetHitResultResponseBodyDataResultInfo>>(expect1);
      }
    }
  }


  virtual ~GetHitResultResponseBodyData() = default;
};
class GetHitResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<GetHitResultResponseBodyData> data{};
  shared_ptr<long> count{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetHitResultResponseBody() {}

  explicit GetHitResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetHitResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHitResultResponseBodyData>(model1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetHitResultResponseBody() = default;
};
class GetHitResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHitResultResponseBody> body{};

  GetHitResultResponse() {}

  explicit GetHitResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHitResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHitResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetHitResultResponse() = default;
};
class GetNextResultToVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetNextResultToVerifyRequest() {}

  explicit GetNextResultToVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetNextResultToVerifyRequest() = default;
};
class GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSourceLine : public Darabonba::Model {
public:
  shared_ptr<vector<string>> line{};

  GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSourceLine() {}

  explicit GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSourceLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (line) {
      res["Line"] = boost::any(*line);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Line"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Line"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      line = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSourceLine() = default;
};
class GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource : public Darabonba::Model {
public:
  shared_ptr<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSourceLine> line{};
  shared_ptr<long> position{};

  GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource() {}

  explicit GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (line) {
      res["Line"] = line ? boost::any(line->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      if (typeid(map<string, boost::any>) == m["Line"].type()) {
        GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSourceLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Line"]));
        line = make_shared<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSourceLine>(model1);
      }
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<long>(boost::any_cast<long>(m["Position"]));
    }
  }


  virtual ~GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource() = default;
};
class GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTargetLine : public Darabonba::Model {
public:
  shared_ptr<vector<string>> line{};

  GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTargetLine() {}

  explicit GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTargetLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (line) {
      res["Line"] = boost::any(*line);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Line"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Line"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      line = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTargetLine() = default;
};
class GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget : public Darabonba::Model {
public:
  shared_ptr<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTargetLine> line{};
  shared_ptr<long> position{};

  GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget() {}

  explicit GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (line) {
      res["Line"] = line ? boost::any(line->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      if (typeid(map<string, boost::any>) == m["Line"].type()) {
        GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTargetLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Line"]));
        line = make_shared<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTargetLine>(model1);
      }
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<long>(boost::any_cast<long>(m["Position"]));
    }
  }


  virtual ~GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget() = default;
};
class GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource> source{};
  shared_ptr<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget> target{};

  GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta() {}

  explicit GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (target) {
      res["Target"] = target ? boost::any(target->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource>(model1);
      }
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      if (typeid(map<string, boost::any>) == m["Target"].type()) {
        GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Target"]));
        target = make_shared<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget>(model1);
      }
    }
  }


  virtual ~GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta() = default;
};
class GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas : public Darabonba::Model {
public:
  shared_ptr<vector<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta>> delta{};

  GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas() {}

  explicit GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delta) {
      vector<boost::any> temp1;
      for(auto item1:*delta){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Delta"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Delta") != m.end() && !m["Delta"].empty()) {
      if (typeid(vector<boost::any>) == m["Delta"].type()) {
        vector<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Delta"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        delta = make_shared<vector<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta>>(expect1);
      }
    }
  }


  virtual ~GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas() = default;
};
class GetNextResultToVerifyResponseBodyDataDialoguesDialogue : public Darabonba::Model {
public:
  shared_ptr<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas> deltas{};
  shared_ptr<string> words{};
  shared_ptr<string> identity{};
  shared_ptr<long> incorrectWords{};
  shared_ptr<string> beginTime{};
  shared_ptr<string> sourceWords{};
  shared_ptr<long> end{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> sourceRole{};
  shared_ptr<string> hourMinSec{};
  shared_ptr<long> begin{};
  shared_ptr<long> emotionValue{};
  shared_ptr<string> role{};
  shared_ptr<long> silenceDuration{};

  GetNextResultToVerifyResponseBodyDataDialoguesDialogue() {}

  explicit GetNextResultToVerifyResponseBodyDataDialoguesDialogue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deltas) {
      res["Deltas"] = deltas ? boost::any(deltas->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (words) {
      res["Words"] = boost::any(*words);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (incorrectWords) {
      res["IncorrectWords"] = boost::any(*incorrectWords);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (sourceWords) {
      res["SourceWords"] = boost::any(*sourceWords);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (sourceRole) {
      res["SourceRole"] = boost::any(*sourceRole);
    }
    if (hourMinSec) {
      res["HourMinSec"] = boost::any(*hourMinSec);
    }
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Deltas") != m.end() && !m["Deltas"].empty()) {
      if (typeid(map<string, boost::any>) == m["Deltas"].type()) {
        GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Deltas"]));
        deltas = make_shared<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas>(model1);
      }
    }
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("IncorrectWords") != m.end() && !m["IncorrectWords"].empty()) {
      incorrectWords = make_shared<long>(boost::any_cast<long>(m["IncorrectWords"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("SourceWords") != m.end() && !m["SourceWords"].empty()) {
      sourceWords = make_shared<string>(boost::any_cast<string>(m["SourceWords"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("SourceRole") != m.end() && !m["SourceRole"].empty()) {
      sourceRole = make_shared<string>(boost::any_cast<string>(m["SourceRole"]));
    }
    if (m.find("HourMinSec") != m.end() && !m["HourMinSec"].empty()) {
      hourMinSec = make_shared<string>(boost::any_cast<string>(m["HourMinSec"]));
    }
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<long>(boost::any_cast<long>(m["SilenceDuration"]));
    }
  }


  virtual ~GetNextResultToVerifyResponseBodyDataDialoguesDialogue() = default;
};
class GetNextResultToVerifyResponseBodyDataDialogues : public Darabonba::Model {
public:
  shared_ptr<vector<GetNextResultToVerifyResponseBodyDataDialoguesDialogue>> dialogue{};

  GetNextResultToVerifyResponseBodyDataDialogues() {}

  explicit GetNextResultToVerifyResponseBodyDataDialogues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogue) {
      vector<boost::any> temp1;
      for(auto item1:*dialogue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dialogue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dialogue") != m.end() && !m["Dialogue"].empty()) {
      if (typeid(vector<boost::any>) == m["Dialogue"].type()) {
        vector<GetNextResultToVerifyResponseBodyDataDialoguesDialogue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dialogue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNextResultToVerifyResponseBodyDataDialoguesDialogue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogue = make_shared<vector<GetNextResultToVerifyResponseBodyDataDialoguesDialogue>>(expect1);
      }
    }
  }


  virtual ~GetNextResultToVerifyResponseBodyDataDialogues() = default;
};
class GetNextResultToVerifyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> audioScheme{};
  shared_ptr<long> status{};
  shared_ptr<long> index{};
  shared_ptr<string> audioURL{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> incorrectWords{};
  shared_ptr<long> verifiedCount{};
  shared_ptr<bool> verified{};
  shared_ptr<string> fileName{};
  shared_ptr<long> totalCount{};
  shared_ptr<double> precision{};
  shared_ptr<string> fileId{};
  shared_ptr<GetNextResultToVerifyResponseBodyDataDialogues> dialogues{};
  shared_ptr<long> duration{};

  GetNextResultToVerifyResponseBodyData() {}

  explicit GetNextResultToVerifyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioScheme) {
      res["AudioScheme"] = boost::any(*audioScheme);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (audioURL) {
      res["AudioURL"] = boost::any(*audioURL);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (incorrectWords) {
      res["IncorrectWords"] = boost::any(*incorrectWords);
    }
    if (verifiedCount) {
      res["VerifiedCount"] = boost::any(*verifiedCount);
    }
    if (verified) {
      res["Verified"] = boost::any(*verified);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (precision) {
      res["Precision"] = boost::any(*precision);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (dialogues) {
      res["Dialogues"] = dialogues ? boost::any(dialogues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioScheme") != m.end() && !m["AudioScheme"].empty()) {
      audioScheme = make_shared<string>(boost::any_cast<string>(m["AudioScheme"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("AudioURL") != m.end() && !m["AudioURL"].empty()) {
      audioURL = make_shared<string>(boost::any_cast<string>(m["AudioURL"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("IncorrectWords") != m.end() && !m["IncorrectWords"].empty()) {
      incorrectWords = make_shared<long>(boost::any_cast<long>(m["IncorrectWords"]));
    }
    if (m.find("VerifiedCount") != m.end() && !m["VerifiedCount"].empty()) {
      verifiedCount = make_shared<long>(boost::any_cast<long>(m["VerifiedCount"]));
    }
    if (m.find("Verified") != m.end() && !m["Verified"].empty()) {
      verified = make_shared<bool>(boost::any_cast<bool>(m["Verified"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Precision") != m.end() && !m["Precision"].empty()) {
      precision = make_shared<double>(boost::any_cast<double>(m["Precision"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("Dialogues") != m.end() && !m["Dialogues"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dialogues"].type()) {
        GetNextResultToVerifyResponseBodyDataDialogues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dialogues"]));
        dialogues = make_shared<GetNextResultToVerifyResponseBodyDataDialogues>(model1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
  }


  virtual ~GetNextResultToVerifyResponseBodyData() = default;
};
class GetNextResultToVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetNextResultToVerifyResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetNextResultToVerifyResponseBody() {}

  explicit GetNextResultToVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetNextResultToVerifyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetNextResultToVerifyResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetNextResultToVerifyResponseBody() = default;
};
class GetNextResultToVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetNextResultToVerifyResponseBody> body{};

  GetNextResultToVerifyResponse() {}

  explicit GetNextResultToVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNextResultToVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNextResultToVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~GetNextResultToVerifyResponse() = default;
};
class GetPrecisionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetPrecisionTaskRequest() {}

  explicit GetPrecisionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetPrecisionTaskRequest() = default;
};
class GetPrecisionTaskResponseBodyDataPrecisionsPrecision : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> modelName{};
  shared_ptr<string> taskId{};
  shared_ptr<double> precision{};
  shared_ptr<long> modelId{};

  GetPrecisionTaskResponseBodyDataPrecisionsPrecision() {}

  explicit GetPrecisionTaskResponseBodyDataPrecisionsPrecision(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (precision) {
      res["Precision"] = boost::any(*precision);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Precision") != m.end() && !m["Precision"].empty()) {
      precision = make_shared<double>(boost::any_cast<double>(m["Precision"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
  }


  virtual ~GetPrecisionTaskResponseBodyDataPrecisionsPrecision() = default;
};
class GetPrecisionTaskResponseBodyDataPrecisions : public Darabonba::Model {
public:
  shared_ptr<vector<GetPrecisionTaskResponseBodyDataPrecisionsPrecision>> precision{};

  GetPrecisionTaskResponseBodyDataPrecisions() {}

  explicit GetPrecisionTaskResponseBodyDataPrecisions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (precision) {
      vector<boost::any> temp1;
      for(auto item1:*precision){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Precision"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Precision") != m.end() && !m["Precision"].empty()) {
      if (typeid(vector<boost::any>) == m["Precision"].type()) {
        vector<GetPrecisionTaskResponseBodyDataPrecisionsPrecision> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Precision"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPrecisionTaskResponseBodyDataPrecisionsPrecision model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        precision = make_shared<vector<GetPrecisionTaskResponseBodyDataPrecisionsPrecision>>(expect1);
      }
    }
  }


  virtual ~GetPrecisionTaskResponseBodyDataPrecisions() = default;
};
class GetPrecisionTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> incorrectWords{};
  shared_ptr<long> dataSetId{};
  shared_ptr<long> verifiedCount{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> source{};
  shared_ptr<GetPrecisionTaskResponseBodyDataPrecisions> precisions{};
  shared_ptr<long> duration{};
  shared_ptr<string> dataSetName{};
  shared_ptr<string> name{};
  shared_ptr<string> taskId{};

  GetPrecisionTaskResponseBodyData() {}

  explicit GetPrecisionTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (incorrectWords) {
      res["IncorrectWords"] = boost::any(*incorrectWords);
    }
    if (dataSetId) {
      res["DataSetId"] = boost::any(*dataSetId);
    }
    if (verifiedCount) {
      res["VerifiedCount"] = boost::any(*verifiedCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (precisions) {
      res["Precisions"] = precisions ? boost::any(precisions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (dataSetName) {
      res["DataSetName"] = boost::any(*dataSetName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("IncorrectWords") != m.end() && !m["IncorrectWords"].empty()) {
      incorrectWords = make_shared<long>(boost::any_cast<long>(m["IncorrectWords"]));
    }
    if (m.find("DataSetId") != m.end() && !m["DataSetId"].empty()) {
      dataSetId = make_shared<long>(boost::any_cast<long>(m["DataSetId"]));
    }
    if (m.find("VerifiedCount") != m.end() && !m["VerifiedCount"].empty()) {
      verifiedCount = make_shared<long>(boost::any_cast<long>(m["VerifiedCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<long>(boost::any_cast<long>(m["Source"]));
    }
    if (m.find("Precisions") != m.end() && !m["Precisions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Precisions"].type()) {
        GetPrecisionTaskResponseBodyDataPrecisions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Precisions"]));
        precisions = make_shared<GetPrecisionTaskResponseBodyDataPrecisions>(model1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("DataSetName") != m.end() && !m["DataSetName"].empty()) {
      dataSetName = make_shared<string>(boost::any_cast<string>(m["DataSetName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetPrecisionTaskResponseBodyData() = default;
};
class GetPrecisionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetPrecisionTaskResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetPrecisionTaskResponseBody() {}

  explicit GetPrecisionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetPrecisionTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPrecisionTaskResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetPrecisionTaskResponseBody() = default;
};
class GetPrecisionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPrecisionTaskResponseBody> body{};

  GetPrecisionTaskResponse() {}

  explicit GetPrecisionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPrecisionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPrecisionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetPrecisionTaskResponse() = default;
};
class GetResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetResultRequest() {}

  explicit GetResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetResultRequest() = default;
};
class GetResultResponseBodyDataResultInfoAgent : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> skillGroup{};
  shared_ptr<string> id{};

  GetResultResponseBodyDataResultInfoAgent() {}

  explicit GetResultResponseBodyDataResultInfoAgent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (skillGroup) {
      res["SkillGroup"] = boost::any(*skillGroup);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SkillGroup") != m.end() && !m["SkillGroup"].empty()) {
      skillGroup = make_shared<string>(boost::any_cast<string>(m["SkillGroup"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoAgent() = default;
};
class GetResultResponseBodyDataResultInfoAsrResultAsrResult : public Darabonba::Model {
public:
  shared_ptr<string> words{};
  shared_ptr<long> begin{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> role{};

  GetResultResponseBodyDataResultInfoAsrResultAsrResult() {}

  explicit GetResultResponseBodyDataResultInfoAsrResultAsrResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      res["Words"] = boost::any(*words);
    }
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoAsrResultAsrResult() = default;
};
class GetResultResponseBodyDataResultInfoAsrResult : public Darabonba::Model {
public:
  shared_ptr<vector<GetResultResponseBodyDataResultInfoAsrResultAsrResult>> asrResult{};

  GetResultResponseBodyDataResultInfoAsrResult() {}

  explicit GetResultResponseBodyDataResultInfoAsrResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asrResult) {
      vector<boost::any> temp1;
      for(auto item1:*asrResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AsrResult"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsrResult") != m.end() && !m["AsrResult"].empty()) {
      if (typeid(vector<boost::any>) == m["AsrResult"].type()) {
        vector<GetResultResponseBodyDataResultInfoAsrResultAsrResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AsrResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResultResponseBodyDataResultInfoAsrResultAsrResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        asrResult = make_shared<vector<GetResultResponseBodyDataResultInfoAsrResultAsrResult>>(expect1);
      }
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoAsrResult() = default;
};
class GetResultResponseBodyDataResultInfoHitScoreHitScore : public Darabonba::Model {
public:
  shared_ptr<string> scoreName{};
  shared_ptr<string> scoreNumber{};
  shared_ptr<string> scoreId{};
  shared_ptr<string> ruleId{};

  GetResultResponseBodyDataResultInfoHitScoreHitScore() {}

  explicit GetResultResponseBodyDataResultInfoHitScoreHitScore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreName) {
      res["ScoreName"] = boost::any(*scoreName);
    }
    if (scoreNumber) {
      res["ScoreNumber"] = boost::any(*scoreNumber);
    }
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreName") != m.end() && !m["ScoreName"].empty()) {
      scoreName = make_shared<string>(boost::any_cast<string>(m["ScoreName"]));
    }
    if (m.find("ScoreNumber") != m.end() && !m["ScoreNumber"].empty()) {
      scoreNumber = make_shared<string>(boost::any_cast<string>(m["ScoreNumber"]));
    }
    if (m.find("ScoreId") != m.end() && !m["ScoreId"].empty()) {
      scoreId = make_shared<string>(boost::any_cast<string>(m["ScoreId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoHitScoreHitScore() = default;
};
class GetResultResponseBodyDataResultInfoHitScore : public Darabonba::Model {
public:
  shared_ptr<vector<GetResultResponseBodyDataResultInfoHitScoreHitScore>> hitScore{};

  GetResultResponseBodyDataResultInfoHitScore() {}

  explicit GetResultResponseBodyDataResultInfoHitScore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitScore) {
      vector<boost::any> temp1;
      for(auto item1:*hitScore){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitScore"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitScore") != m.end() && !m["HitScore"].empty()) {
      if (typeid(vector<boost::any>) == m["HitScore"].type()) {
        vector<GetResultResponseBodyDataResultInfoHitScoreHitScore> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HitScore"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResultResponseBodyDataResultInfoHitScoreHitScore model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hitScore = make_shared<vector<GetResultResponseBodyDataResultInfoHitScoreHitScore>>(expect1);
      }
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoHitScore() = default;
};
class GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase : public Darabonba::Model {
public:
  shared_ptr<string> words{};
  shared_ptr<long> begin{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<string> role{};

  GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase() {}

  explicit GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      res["Words"] = boost::any(*words);
    }
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase() = default;
};
class GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<string> val{};
  shared_ptr<string> cid{};
  shared_ptr<long> to{};

  GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord() {}

  explicit GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (val) {
      res["Val"] = boost::any(*val);
    }
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("Val") != m.end() && !m["Val"].empty()) {
      val = make_shared<string>(boost::any_cast<string>(m["Val"]));
    }
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      cid = make_shared<string>(boost::any_cast<string>(m["Cid"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord() = default;
};
class GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords : public Darabonba::Model {
public:
  shared_ptr<vector<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord>> keyWord{};

  GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords() {}

  explicit GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyWord) {
      vector<boost::any> temp1;
      for(auto item1:*keyWord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyWord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyWord"].type()) {
        vector<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyWord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyWord = make_shared<vector<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord>>(expect1);
      }
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords() = default;
};
class GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cid{};

  GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid() {}

  explicit GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Cid"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Cid"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cid = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid() = default;
};
class GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit : public Darabonba::Model {
public:
  shared_ptr<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase> phrase{};
  shared_ptr<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords> keyWords{};
  shared_ptr<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid> cid{};

  GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit() {}

  explicit GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phrase) {
      res["Phrase"] = phrase ? boost::any(phrase->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keyWords) {
      res["KeyWords"] = keyWords ? boost::any(keyWords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cid) {
      res["Cid"] = cid ? boost::any(cid->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Phrase") != m.end() && !m["Phrase"].empty()) {
      if (typeid(map<string, boost::any>) == m["Phrase"].type()) {
        GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Phrase"]));
        phrase = make_shared<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase>(model1);
      }
    }
    if (m.find("KeyWords") != m.end() && !m["KeyWords"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyWords"].type()) {
        GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyWords"]));
        keyWords = make_shared<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords>(model1);
      }
    }
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cid"].type()) {
        GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cid"]));
        cid = make_shared<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid>(model1);
      }
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit() = default;
};
class GetResultResponseBodyDataResultInfoHitResultHitResultHits : public Darabonba::Model {
public:
  shared_ptr<vector<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit>> hit{};

  GetResultResponseBodyDataResultInfoHitResultHitResultHits() {}

  explicit GetResultResponseBodyDataResultInfoHitResultHitResultHits(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hit) {
      vector<boost::any> temp1;
      for(auto item1:*hit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hit"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hit") != m.end() && !m["Hit"].empty()) {
      if (typeid(vector<boost::any>) == m["Hit"].type()) {
        vector<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hit = make_shared<vector<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit>>(expect1);
      }
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultHits() = default;
};
class GetResultResponseBodyDataResultInfoHitResultHitResult : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<GetResultResponseBodyDataResultInfoHitResultHitResultHits> hits{};
  shared_ptr<long> reviewResult{};
  shared_ptr<string> name{};
  shared_ptr<string> rid{};

  GetResultResponseBodyDataResultInfoHitResultHitResult() {}

  explicit GetResultResponseBodyDataResultInfoHitResultHitResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (hits) {
      res["Hits"] = hits ? boost::any(hits->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reviewResult) {
      res["ReviewResult"] = boost::any(*reviewResult);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Hits") != m.end() && !m["Hits"].empty()) {
      if (typeid(map<string, boost::any>) == m["Hits"].type()) {
        GetResultResponseBodyDataResultInfoHitResultHitResultHits model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Hits"]));
        hits = make_shared<GetResultResponseBodyDataResultInfoHitResultHitResultHits>(model1);
      }
    }
    if (m.find("ReviewResult") != m.end() && !m["ReviewResult"].empty()) {
      reviewResult = make_shared<long>(boost::any_cast<long>(m["ReviewResult"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoHitResultHitResult() = default;
};
class GetResultResponseBodyDataResultInfoHitResult : public Darabonba::Model {
public:
  shared_ptr<vector<GetResultResponseBodyDataResultInfoHitResultHitResult>> hitResult{};

  GetResultResponseBodyDataResultInfoHitResult() {}

  explicit GetResultResponseBodyDataResultInfoHitResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitResult) {
      vector<boost::any> temp1;
      for(auto item1:*hitResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitResult"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitResult") != m.end() && !m["HitResult"].empty()) {
      if (typeid(vector<boost::any>) == m["HitResult"].type()) {
        vector<GetResultResponseBodyDataResultInfoHitResultHitResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HitResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResultResponseBodyDataResultInfoHitResultHitResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hitResult = make_shared<vector<GetResultResponseBodyDataResultInfoHitResultHitResult>>(expect1);
      }
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoHitResult() = default;
};
class GetResultResponseBodyDataResultInfoRecording : public Darabonba::Model {
public:
  shared_ptr<string> remark13{};
  shared_ptr<string> callee{};
  shared_ptr<string> primaryId{};
  shared_ptr<string> remark12{};
  shared_ptr<string> remark1{};
  shared_ptr<string> remark7{};
  shared_ptr<string> remark8{};
  shared_ptr<string> remark2{};
  shared_ptr<string> callId{};
  shared_ptr<string> remark9{};
  shared_ptr<string> name{};
  shared_ptr<string> remark6{};
  shared_ptr<string> remark10{};
  shared_ptr<string> remark3{};
  shared_ptr<string> business{};
  shared_ptr<string> url{};
  shared_ptr<string> remark11{};
  shared_ptr<string> remark4{};
  shared_ptr<long> callType{};
  shared_ptr<string> caller{};
  shared_ptr<long> duration{};
  shared_ptr<string> dataSetName{};
  shared_ptr<long> remark5{};
  shared_ptr<string> id{};
  shared_ptr<string> callTime{};

  GetResultResponseBodyDataResultInfoRecording() {}

  explicit GetResultResponseBodyDataResultInfoRecording(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (remark13) {
      res["Remark13"] = boost::any(*remark13);
    }
    if (callee) {
      res["Callee"] = boost::any(*callee);
    }
    if (primaryId) {
      res["PrimaryId"] = boost::any(*primaryId);
    }
    if (remark12) {
      res["Remark12"] = boost::any(*remark12);
    }
    if (remark1) {
      res["Remark1"] = boost::any(*remark1);
    }
    if (remark7) {
      res["Remark7"] = boost::any(*remark7);
    }
    if (remark8) {
      res["Remark8"] = boost::any(*remark8);
    }
    if (remark2) {
      res["Remark2"] = boost::any(*remark2);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (remark9) {
      res["Remark9"] = boost::any(*remark9);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark6) {
      res["Remark6"] = boost::any(*remark6);
    }
    if (remark10) {
      res["Remark10"] = boost::any(*remark10);
    }
    if (remark3) {
      res["Remark3"] = boost::any(*remark3);
    }
    if (business) {
      res["Business"] = boost::any(*business);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (remark11) {
      res["Remark11"] = boost::any(*remark11);
    }
    if (remark4) {
      res["Remark4"] = boost::any(*remark4);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (dataSetName) {
      res["DataSetName"] = boost::any(*dataSetName);
    }
    if (remark5) {
      res["Remark5"] = boost::any(*remark5);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (callTime) {
      res["CallTime"] = boost::any(*callTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Remark13") != m.end() && !m["Remark13"].empty()) {
      remark13 = make_shared<string>(boost::any_cast<string>(m["Remark13"]));
    }
    if (m.find("Callee") != m.end() && !m["Callee"].empty()) {
      callee = make_shared<string>(boost::any_cast<string>(m["Callee"]));
    }
    if (m.find("PrimaryId") != m.end() && !m["PrimaryId"].empty()) {
      primaryId = make_shared<string>(boost::any_cast<string>(m["PrimaryId"]));
    }
    if (m.find("Remark12") != m.end() && !m["Remark12"].empty()) {
      remark12 = make_shared<string>(boost::any_cast<string>(m["Remark12"]));
    }
    if (m.find("Remark1") != m.end() && !m["Remark1"].empty()) {
      remark1 = make_shared<string>(boost::any_cast<string>(m["Remark1"]));
    }
    if (m.find("Remark7") != m.end() && !m["Remark7"].empty()) {
      remark7 = make_shared<string>(boost::any_cast<string>(m["Remark7"]));
    }
    if (m.find("Remark8") != m.end() && !m["Remark8"].empty()) {
      remark8 = make_shared<string>(boost::any_cast<string>(m["Remark8"]));
    }
    if (m.find("Remark2") != m.end() && !m["Remark2"].empty()) {
      remark2 = make_shared<string>(boost::any_cast<string>(m["Remark2"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("Remark9") != m.end() && !m["Remark9"].empty()) {
      remark9 = make_shared<string>(boost::any_cast<string>(m["Remark9"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark6") != m.end() && !m["Remark6"].empty()) {
      remark6 = make_shared<string>(boost::any_cast<string>(m["Remark6"]));
    }
    if (m.find("Remark10") != m.end() && !m["Remark10"].empty()) {
      remark10 = make_shared<string>(boost::any_cast<string>(m["Remark10"]));
    }
    if (m.find("Remark3") != m.end() && !m["Remark3"].empty()) {
      remark3 = make_shared<string>(boost::any_cast<string>(m["Remark3"]));
    }
    if (m.find("Business") != m.end() && !m["Business"].empty()) {
      business = make_shared<string>(boost::any_cast<string>(m["Business"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Remark11") != m.end() && !m["Remark11"].empty()) {
      remark11 = make_shared<string>(boost::any_cast<string>(m["Remark11"]));
    }
    if (m.find("Remark4") != m.end() && !m["Remark4"].empty()) {
      remark4 = make_shared<string>(boost::any_cast<string>(m["Remark4"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<long>(boost::any_cast<long>(m["CallType"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("DataSetName") != m.end() && !m["DataSetName"].empty()) {
      dataSetName = make_shared<string>(boost::any_cast<string>(m["DataSetName"]));
    }
    if (m.find("Remark5") != m.end() && !m["Remark5"].empty()) {
      remark5 = make_shared<long>(boost::any_cast<long>(m["Remark5"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("CallTime") != m.end() && !m["CallTime"].empty()) {
      callTime = make_shared<string>(boost::any_cast<string>(m["CallTime"]));
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoRecording() = default;
};
class GetResultResponseBodyDataResultInfo : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> assignmentTime{};
  shared_ptr<string> lastDataId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> reviewStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> reviewer{};
  shared_ptr<string> taskName{};
  shared_ptr<string> reviewTimeLong{};
  shared_ptr<long> score{};
  shared_ptr<long> reviewResult{};
  shared_ptr<GetResultResponseBodyDataResultInfoAgent> agent{};
  shared_ptr<string> createTimeLong{};
  shared_ptr<GetResultResponseBodyDataResultInfoAsrResult> asrResult{};
  shared_ptr<string> reviewTime{};
  shared_ptr<GetResultResponseBodyDataResultInfoHitScore> hitScore{};
  shared_ptr<string> comments{};
  shared_ptr<GetResultResponseBodyDataResultInfoHitResult> hitResult{};
  shared_ptr<GetResultResponseBodyDataResultInfoRecording> recording{};
  shared_ptr<string> taskId{};
  shared_ptr<long> reviewType{};
  shared_ptr<string> resolver{};

  GetResultResponseBodyDataResultInfo() {}

  explicit GetResultResponseBodyDataResultInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (assignmentTime) {
      res["AssignmentTime"] = boost::any(*assignmentTime);
    }
    if (lastDataId) {
      res["LastDataId"] = boost::any(*lastDataId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (reviewStatus) {
      res["ReviewStatus"] = boost::any(*reviewStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (reviewer) {
      res["Reviewer"] = boost::any(*reviewer);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (reviewTimeLong) {
      res["ReviewTimeLong"] = boost::any(*reviewTimeLong);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (reviewResult) {
      res["ReviewResult"] = boost::any(*reviewResult);
    }
    if (agent) {
      res["Agent"] = agent ? boost::any(agent->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTimeLong) {
      res["CreateTimeLong"] = boost::any(*createTimeLong);
    }
    if (asrResult) {
      res["AsrResult"] = asrResult ? boost::any(asrResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reviewTime) {
      res["ReviewTime"] = boost::any(*reviewTime);
    }
    if (hitScore) {
      res["HitScore"] = hitScore ? boost::any(hitScore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (hitResult) {
      res["HitResult"] = hitResult ? boost::any(hitResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (recording) {
      res["Recording"] = recording ? boost::any(recording->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (reviewType) {
      res["ReviewType"] = boost::any(*reviewType);
    }
    if (resolver) {
      res["Resolver"] = boost::any(*resolver);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("AssignmentTime") != m.end() && !m["AssignmentTime"].empty()) {
      assignmentTime = make_shared<string>(boost::any_cast<string>(m["AssignmentTime"]));
    }
    if (m.find("LastDataId") != m.end() && !m["LastDataId"].empty()) {
      lastDataId = make_shared<string>(boost::any_cast<string>(m["LastDataId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ReviewStatus") != m.end() && !m["ReviewStatus"].empty()) {
      reviewStatus = make_shared<long>(boost::any_cast<long>(m["ReviewStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Reviewer") != m.end() && !m["Reviewer"].empty()) {
      reviewer = make_shared<string>(boost::any_cast<string>(m["Reviewer"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("ReviewTimeLong") != m.end() && !m["ReviewTimeLong"].empty()) {
      reviewTimeLong = make_shared<string>(boost::any_cast<string>(m["ReviewTimeLong"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
    if (m.find("ReviewResult") != m.end() && !m["ReviewResult"].empty()) {
      reviewResult = make_shared<long>(boost::any_cast<long>(m["ReviewResult"]));
    }
    if (m.find("Agent") != m.end() && !m["Agent"].empty()) {
      if (typeid(map<string, boost::any>) == m["Agent"].type()) {
        GetResultResponseBodyDataResultInfoAgent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Agent"]));
        agent = make_shared<GetResultResponseBodyDataResultInfoAgent>(model1);
      }
    }
    if (m.find("CreateTimeLong") != m.end() && !m["CreateTimeLong"].empty()) {
      createTimeLong = make_shared<string>(boost::any_cast<string>(m["CreateTimeLong"]));
    }
    if (m.find("AsrResult") != m.end() && !m["AsrResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["AsrResult"].type()) {
        GetResultResponseBodyDataResultInfoAsrResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AsrResult"]));
        asrResult = make_shared<GetResultResponseBodyDataResultInfoAsrResult>(model1);
      }
    }
    if (m.find("ReviewTime") != m.end() && !m["ReviewTime"].empty()) {
      reviewTime = make_shared<string>(boost::any_cast<string>(m["ReviewTime"]));
    }
    if (m.find("HitScore") != m.end() && !m["HitScore"].empty()) {
      if (typeid(map<string, boost::any>) == m["HitScore"].type()) {
        GetResultResponseBodyDataResultInfoHitScore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HitScore"]));
        hitScore = make_shared<GetResultResponseBodyDataResultInfoHitScore>(model1);
      }
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("HitResult") != m.end() && !m["HitResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["HitResult"].type()) {
        GetResultResponseBodyDataResultInfoHitResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HitResult"]));
        hitResult = make_shared<GetResultResponseBodyDataResultInfoHitResult>(model1);
      }
    }
    if (m.find("Recording") != m.end() && !m["Recording"].empty()) {
      if (typeid(map<string, boost::any>) == m["Recording"].type()) {
        GetResultResponseBodyDataResultInfoRecording model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Recording"]));
        recording = make_shared<GetResultResponseBodyDataResultInfoRecording>(model1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("ReviewType") != m.end() && !m["ReviewType"].empty()) {
      reviewType = make_shared<long>(boost::any_cast<long>(m["ReviewType"]));
    }
    if (m.find("Resolver") != m.end() && !m["Resolver"].empty()) {
      resolver = make_shared<string>(boost::any_cast<string>(m["Resolver"]));
    }
  }


  virtual ~GetResultResponseBodyDataResultInfo() = default;
};
class GetResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetResultResponseBodyDataResultInfo>> resultInfo{};

  GetResultResponseBodyData() {}

  explicit GetResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultInfo) {
      vector<boost::any> temp1;
      for(auto item1:*resultInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultInfo") != m.end() && !m["ResultInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultInfo"].type()) {
        vector<GetResultResponseBodyDataResultInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResultResponseBodyDataResultInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultInfo = make_shared<vector<GetResultResponseBodyDataResultInfo>>(expect1);
      }
    }
  }


  virtual ~GetResultResponseBodyData() = default;
};
class GetResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<GetResultResponseBodyData> data{};
  shared_ptr<long> count{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> resultCountId{};

  GetResultResponseBody() {}

  explicit GetResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (resultCountId) {
      res["ResultCountId"] = boost::any(*resultCountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetResultResponseBodyData>(model1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ResultCountId") != m.end() && !m["ResultCountId"].empty()) {
      resultCountId = make_shared<string>(boost::any_cast<string>(m["ResultCountId"]));
    }
  }


  virtual ~GetResultResponseBody() = default;
};
class GetResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetResultResponseBody> body{};

  GetResultResponse() {}

  explicit GetResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetResultResponse() = default;
};
class GetResultCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetResultCallbackRequest() {}

  explicit GetResultCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetResultCallbackRequest() = default;
};
class GetResultCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetResultCallbackResponseBody() {}

  explicit GetResultCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetResultCallbackResponseBody() = default;
};
class GetResultCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetResultCallbackResponseBody> body{};

  GetResultCallbackResponse() {}

  explicit GetResultCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResultCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResultCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~GetResultCallbackResponse() = default;
};
class GetResultToReviewRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetResultToReviewRequest() {}

  explicit GetResultToReviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetResultToReviewRequest() = default;
};
class GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timeStr{};
  shared_ptr<long> score{};
  shared_ptr<long> reviewResult{};
  shared_ptr<long> complainResult{};
  shared_ptr<long> oldScore{};

  GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory() {}

  explicit GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    if (timeStr) {
      res["TimeStr"] = boost::any(*timeStr);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (reviewResult) {
      res["ReviewResult"] = boost::any(*reviewResult);
    }
    if (complainResult) {
      res["ComplainResult"] = boost::any(*complainResult);
    }
    if (oldScore) {
      res["OldScore"] = boost::any(*oldScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
    if (m.find("TimeStr") != m.end() && !m["TimeStr"].empty()) {
      timeStr = make_shared<string>(boost::any_cast<string>(m["TimeStr"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
    if (m.find("ReviewResult") != m.end() && !m["ReviewResult"].empty()) {
      reviewResult = make_shared<long>(boost::any_cast<long>(m["ReviewResult"]));
    }
    if (m.find("ComplainResult") != m.end() && !m["ComplainResult"].empty()) {
      complainResult = make_shared<long>(boost::any_cast<long>(m["ComplainResult"]));
    }
    if (m.find("OldScore") != m.end() && !m["OldScore"].empty()) {
      oldScore = make_shared<long>(boost::any_cast<long>(m["OldScore"]));
    }
  }


  virtual ~GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory() = default;
};
class GetResultToReviewResponseBodyDataReviewHistoryList : public Darabonba::Model {
public:
  shared_ptr<vector<GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory>> reviewHistory{};

  GetResultToReviewResponseBodyDataReviewHistoryList() {}

  explicit GetResultToReviewResponseBodyDataReviewHistoryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reviewHistory) {
      vector<boost::any> temp1;
      for(auto item1:*reviewHistory){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReviewHistory"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReviewHistory") != m.end() && !m["ReviewHistory"].empty()) {
      if (typeid(vector<boost::any>) == m["ReviewHistory"].type()) {
        vector<GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReviewHistory"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        reviewHistory = make_shared<vector<GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory>>(expect1);
      }
    }
  }


  virtual ~GetResultToReviewResponseBodyDataReviewHistoryList() = default;
};
class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase : public Darabonba::Model {
public:
  shared_ptr<string> words{};
  shared_ptr<long> begin{};
  shared_ptr<string> identity{};
  shared_ptr<long> pid{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<string> role{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      res["Words"] = boost::any(*words);
    }
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase() = default;
};
class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<string> val{};
  shared_ptr<long> pid{};
  shared_ptr<string> tid{};
  shared_ptr<string> cid{};
  shared_ptr<long> to{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (val) {
      res["Val"] = boost::any(*val);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("Val") != m.end() && !m["Val"].empty()) {
      val = make_shared<string>(boost::any_cast<string>(m["Val"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
    }
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      cid = make_shared<string>(boost::any_cast<string>(m["Cid"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord() = default;
};
class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords : public Darabonba::Model {
public:
  shared_ptr<vector<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord>> keyWord{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyWord) {
      vector<boost::any> temp1;
      for(auto item1:*keyWord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyWord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyWord"].type()) {
        vector<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyWord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyWord = make_shared<vector<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord>>(expect1);
      }
    }
  }


  virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords() = default;
};
class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cid{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Cid"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Cid"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cid = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid() = default;
};
class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo : public Darabonba::Model {
public:
  shared_ptr<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase> phrase{};
  shared_ptr<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords> keyWords{};
  shared_ptr<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid> cid{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phrase) {
      res["Phrase"] = phrase ? boost::any(phrase->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keyWords) {
      res["KeyWords"] = keyWords ? boost::any(keyWords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cid) {
      res["Cid"] = cid ? boost::any(cid->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Phrase") != m.end() && !m["Phrase"].empty()) {
      if (typeid(map<string, boost::any>) == m["Phrase"].type()) {
        GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Phrase"]));
        phrase = make_shared<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase>(model1);
      }
    }
    if (m.find("KeyWords") != m.end() && !m["KeyWords"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyWords"].type()) {
        GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyWords"]));
        keyWords = make_shared<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords>(model1);
      }
    }
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cid"].type()) {
        GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cid"]));
        cid = make_shared<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid>(model1);
      }
    }
  }


  virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo() = default;
};
class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo>> conditionHitInfo{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionHitInfo) {
      vector<boost::any> temp1;
      for(auto item1:*conditionHitInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConditionHitInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionHitInfo") != m.end() && !m["ConditionHitInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ConditionHitInfo"].type()) {
        vector<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConditionHitInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditionHitInfo = make_shared<vector<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo>>(expect1);
      }
    }
  }


  virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList() = default;
};
class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo : public Darabonba::Model {
public:
  shared_ptr<string> reviewTime{};
  shared_ptr<string> reviewer{};
  shared_ptr<long> reviewResult{};
  shared_ptr<string> hitId{};
  shared_ptr<long> rid{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reviewTime) {
      res["ReviewTime"] = boost::any(*reviewTime);
    }
    if (reviewer) {
      res["Reviewer"] = boost::any(*reviewer);
    }
    if (reviewResult) {
      res["ReviewResult"] = boost::any(*reviewResult);
    }
    if (hitId) {
      res["HitId"] = boost::any(*hitId);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReviewTime") != m.end() && !m["ReviewTime"].empty()) {
      reviewTime = make_shared<string>(boost::any_cast<string>(m["ReviewTime"]));
    }
    if (m.find("Reviewer") != m.end() && !m["Reviewer"].empty()) {
      reviewer = make_shared<string>(boost::any_cast<string>(m["Reviewer"]));
    }
    if (m.find("ReviewResult") != m.end() && !m["ReviewResult"].empty()) {
      reviewResult = make_shared<long>(boost::any_cast<long>(m["ReviewResult"]));
    }
    if (m.find("HitId") != m.end() && !m["HitId"].empty()) {
      hitId = make_shared<string>(boost::any_cast<string>(m["HitId"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
  }


  virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo() = default;
};
class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories : public Darabonba::Model {
public:
  shared_ptr<string> operatorName{};
  shared_ptr<string> comments{};
  shared_ptr<long> operator_{};
  shared_ptr<string> operationTime{};
  shared_ptr<long> operationType{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (operationTime) {
      res["OperationTime"] = boost::any(*operationTime);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<long>(boost::any_cast<long>(m["Operator"]));
    }
    if (m.find("OperationTime") != m.end() && !m["OperationTime"].empty()) {
      operationTime = make_shared<string>(boost::any_cast<string>(m["OperationTime"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<long>(boost::any_cast<long>(m["OperationType"]));
    }
  }


  virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories() = default;
};
class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories : public Darabonba::Model {
public:
  shared_ptr<vector<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories>> complainHistories{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complainHistories) {
      vector<boost::any> temp1;
      for(auto item1:*complainHistories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComplainHistories"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplainHistories") != m.end() && !m["ComplainHistories"].empty()) {
      if (typeid(vector<boost::any>) == m["ComplainHistories"].type()) {
        vector<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComplainHistories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        complainHistories = make_shared<vector<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories>>(expect1);
      }
    }
  }


  virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories() = default;
};
class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo : public Darabonba::Model {
public:
  shared_ptr<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList> conditionHitInfoList{};
  shared_ptr<long> scoreSubId{};
  shared_ptr<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo> reviewInfo{};
  shared_ptr<string> ruleName{};
  shared_ptr<long> rid{};
  shared_ptr<string> scoreSubName{};
  shared_ptr<long> scoreNum{};
  shared_ptr<long> autoReview{};
  shared_ptr<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories> complainHistories{};
  shared_ptr<bool> complainable{};
  shared_ptr<long> scoreId{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionHitInfoList) {
      res["ConditionHitInfoList"] = conditionHitInfoList ? boost::any(conditionHitInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scoreSubId) {
      res["ScoreSubId"] = boost::any(*scoreSubId);
    }
    if (reviewInfo) {
      res["ReviewInfo"] = reviewInfo ? boost::any(reviewInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (scoreSubName) {
      res["ScoreSubName"] = boost::any(*scoreSubName);
    }
    if (scoreNum) {
      res["ScoreNum"] = boost::any(*scoreNum);
    }
    if (autoReview) {
      res["AutoReview"] = boost::any(*autoReview);
    }
    if (complainHistories) {
      res["ComplainHistories"] = complainHistories ? boost::any(complainHistories->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (complainable) {
      res["Complainable"] = boost::any(*complainable);
    }
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionHitInfoList") != m.end() && !m["ConditionHitInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConditionHitInfoList"].type()) {
        GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConditionHitInfoList"]));
        conditionHitInfoList = make_shared<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList>(model1);
      }
    }
    if (m.find("ScoreSubId") != m.end() && !m["ScoreSubId"].empty()) {
      scoreSubId = make_shared<long>(boost::any_cast<long>(m["ScoreSubId"]));
    }
    if (m.find("ReviewInfo") != m.end() && !m["ReviewInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReviewInfo"].type()) {
        GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReviewInfo"]));
        reviewInfo = make_shared<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo>(model1);
      }
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
    if (m.find("ScoreSubName") != m.end() && !m["ScoreSubName"].empty()) {
      scoreSubName = make_shared<string>(boost::any_cast<string>(m["ScoreSubName"]));
    }
    if (m.find("ScoreNum") != m.end() && !m["ScoreNum"].empty()) {
      scoreNum = make_shared<long>(boost::any_cast<long>(m["ScoreNum"]));
    }
    if (m.find("AutoReview") != m.end() && !m["AutoReview"].empty()) {
      autoReview = make_shared<long>(boost::any_cast<long>(m["AutoReview"]));
    }
    if (m.find("ComplainHistories") != m.end() && !m["ComplainHistories"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComplainHistories"].type()) {
        GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComplainHistories"]));
        complainHistories = make_shared<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories>(model1);
      }
    }
    if (m.find("Complainable") != m.end() && !m["Complainable"].empty()) {
      complainable = make_shared<bool>(boost::any_cast<bool>(m["Complainable"]));
    }
    if (m.find("ScoreId") != m.end() && !m["ScoreId"].empty()) {
      scoreId = make_shared<long>(boost::any_cast<long>(m["ScoreId"]));
    }
  }


  virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo() = default;
};
class GetResultToReviewResponseBodyDataHitRuleReviewInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo>> hitRuleReviewInfo{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoList() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitRuleReviewInfo) {
      vector<boost::any> temp1;
      for(auto item1:*hitRuleReviewInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitRuleReviewInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitRuleReviewInfo") != m.end() && !m["HitRuleReviewInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["HitRuleReviewInfo"].type()) {
        vector<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HitRuleReviewInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hitRuleReviewInfo = make_shared<vector<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo>>(expect1);
      }
    }
  }


  virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoList() = default;
};
class GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories : public Darabonba::Model {
public:
  shared_ptr<string> operatorName{};
  shared_ptr<string> comments{};
  shared_ptr<long> operator_{};
  shared_ptr<string> operationTime{};
  shared_ptr<long> operationType{};

  GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories() {}

  explicit GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (operationTime) {
      res["OperationTime"] = boost::any(*operationTime);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<long>(boost::any_cast<long>(m["Operator"]));
    }
    if (m.find("OperationTime") != m.end() && !m["OperationTime"].empty()) {
      operationTime = make_shared<string>(boost::any_cast<string>(m["OperationTime"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<long>(boost::any_cast<long>(m["OperationType"]));
    }
  }


  virtual ~GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories() = default;
};
class GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories : public Darabonba::Model {
public:
  shared_ptr<vector<GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories>> complainHistories{};

  GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories() {}

  explicit GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complainHistories) {
      vector<boost::any> temp1;
      for(auto item1:*complainHistories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComplainHistories"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplainHistories") != m.end() && !m["ComplainHistories"].empty()) {
      if (typeid(vector<boost::any>) == m["ComplainHistories"].type()) {
        vector<GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComplainHistories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        complainHistories = make_shared<vector<GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories>>(expect1);
      }
    }
  }


  virtual ~GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories() = default;
};
class GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo : public Darabonba::Model {
public:
  shared_ptr<string> scoreSubName{};
  shared_ptr<long> scoreNum{};
  shared_ptr<long> scoreSubId{};
  shared_ptr<GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories> complainHistories{};
  shared_ptr<bool> complainable{};
  shared_ptr<long> scoreId{};

  GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo() {}

  explicit GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreSubName) {
      res["ScoreSubName"] = boost::any(*scoreSubName);
    }
    if (scoreNum) {
      res["ScoreNum"] = boost::any(*scoreNum);
    }
    if (scoreSubId) {
      res["ScoreSubId"] = boost::any(*scoreSubId);
    }
    if (complainHistories) {
      res["ComplainHistories"] = complainHistories ? boost::any(complainHistories->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (complainable) {
      res["Complainable"] = boost::any(*complainable);
    }
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreSubName") != m.end() && !m["ScoreSubName"].empty()) {
      scoreSubName = make_shared<string>(boost::any_cast<string>(m["ScoreSubName"]));
    }
    if (m.find("ScoreNum") != m.end() && !m["ScoreNum"].empty()) {
      scoreNum = make_shared<long>(boost::any_cast<long>(m["ScoreNum"]));
    }
    if (m.find("ScoreSubId") != m.end() && !m["ScoreSubId"].empty()) {
      scoreSubId = make_shared<long>(boost::any_cast<long>(m["ScoreSubId"]));
    }
    if (m.find("ComplainHistories") != m.end() && !m["ComplainHistories"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComplainHistories"].type()) {
        GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComplainHistories"]));
        complainHistories = make_shared<GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories>(model1);
      }
    }
    if (m.find("Complainable") != m.end() && !m["Complainable"].empty()) {
      complainable = make_shared<bool>(boost::any_cast<bool>(m["Complainable"]));
    }
    if (m.find("ScoreId") != m.end() && !m["ScoreId"].empty()) {
      scoreId = make_shared<long>(boost::any_cast<long>(m["ScoreId"]));
    }
  }


  virtual ~GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo() = default;
};
class GetResultToReviewResponseBodyDataManualScoreInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo>> manualScoreInfo{};

  GetResultToReviewResponseBodyDataManualScoreInfoList() {}

  explicit GetResultToReviewResponseBodyDataManualScoreInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (manualScoreInfo) {
      vector<boost::any> temp1;
      for(auto item1:*manualScoreInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ManualScoreInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ManualScoreInfo") != m.end() && !m["ManualScoreInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ManualScoreInfo"].type()) {
        vector<GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ManualScoreInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        manualScoreInfo = make_shared<vector<GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo>>(expect1);
      }
    }
  }


  virtual ~GetResultToReviewResponseBodyDataManualScoreInfoList() = default;
};
class GetResultToReviewResponseBodyDataDialoguesDialogue : public Darabonba::Model {
public:
  shared_ptr<string> words{};
  shared_ptr<string> identity{};
  shared_ptr<long> begin{};
  shared_ptr<string> beginTime{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> role{};
  shared_ptr<long> silenceDuration{};
  shared_ptr<string> hourMinSec{};

  GetResultToReviewResponseBodyDataDialoguesDialogue() {}

  explicit GetResultToReviewResponseBodyDataDialoguesDialogue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      res["Words"] = boost::any(*words);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    if (hourMinSec) {
      res["HourMinSec"] = boost::any(*hourMinSec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<long>(boost::any_cast<long>(m["SilenceDuration"]));
    }
    if (m.find("HourMinSec") != m.end() && !m["HourMinSec"].empty()) {
      hourMinSec = make_shared<string>(boost::any_cast<string>(m["HourMinSec"]));
    }
  }


  virtual ~GetResultToReviewResponseBodyDataDialoguesDialogue() = default;
};
class GetResultToReviewResponseBodyDataDialogues : public Darabonba::Model {
public:
  shared_ptr<vector<GetResultToReviewResponseBodyDataDialoguesDialogue>> dialogue{};

  GetResultToReviewResponseBodyDataDialogues() {}

  explicit GetResultToReviewResponseBodyDataDialogues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogue) {
      vector<boost::any> temp1;
      for(auto item1:*dialogue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dialogue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dialogue") != m.end() && !m["Dialogue"].empty()) {
      if (typeid(vector<boost::any>) == m["Dialogue"].type()) {
        vector<GetResultToReviewResponseBodyDataDialoguesDialogue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dialogue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResultToReviewResponseBodyDataDialoguesDialogue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogue = make_shared<vector<GetResultToReviewResponseBodyDataDialoguesDialogue>>(expect1);
      }
    }
  }


  virtual ~GetResultToReviewResponseBodyDataDialogues() = default;
};
class GetResultToReviewResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> audioScheme{};
  shared_ptr<string> audioURL{};
  shared_ptr<GetResultToReviewResponseBodyDataReviewHistoryList> reviewHistoryList{};
  shared_ptr<GetResultToReviewResponseBodyDataHitRuleReviewInfoList> hitRuleReviewInfoList{};
  shared_ptr<long> totalScore{};
  shared_ptr<string> fileId{};
  shared_ptr<GetResultToReviewResponseBodyDataManualScoreInfoList> manualScoreInfoList{};
  shared_ptr<string> fileMergeName{};
  shared_ptr<string> comments{};
  shared_ptr<GetResultToReviewResponseBodyDataDialogues> dialogues{};
  shared_ptr<string> vid{};

  GetResultToReviewResponseBodyData() {}

  explicit GetResultToReviewResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioScheme) {
      res["AudioScheme"] = boost::any(*audioScheme);
    }
    if (audioURL) {
      res["AudioURL"] = boost::any(*audioURL);
    }
    if (reviewHistoryList) {
      res["ReviewHistoryList"] = reviewHistoryList ? boost::any(reviewHistoryList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hitRuleReviewInfoList) {
      res["HitRuleReviewInfoList"] = hitRuleReviewInfoList ? boost::any(hitRuleReviewInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalScore) {
      res["TotalScore"] = boost::any(*totalScore);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (manualScoreInfoList) {
      res["ManualScoreInfoList"] = manualScoreInfoList ? boost::any(manualScoreInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileMergeName) {
      res["FileMergeName"] = boost::any(*fileMergeName);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (dialogues) {
      res["Dialogues"] = dialogues ? boost::any(dialogues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vid) {
      res["Vid"] = boost::any(*vid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioScheme") != m.end() && !m["AudioScheme"].empty()) {
      audioScheme = make_shared<string>(boost::any_cast<string>(m["AudioScheme"]));
    }
    if (m.find("AudioURL") != m.end() && !m["AudioURL"].empty()) {
      audioURL = make_shared<string>(boost::any_cast<string>(m["AudioURL"]));
    }
    if (m.find("ReviewHistoryList") != m.end() && !m["ReviewHistoryList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReviewHistoryList"].type()) {
        GetResultToReviewResponseBodyDataReviewHistoryList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReviewHistoryList"]));
        reviewHistoryList = make_shared<GetResultToReviewResponseBodyDataReviewHistoryList>(model1);
      }
    }
    if (m.find("HitRuleReviewInfoList") != m.end() && !m["HitRuleReviewInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["HitRuleReviewInfoList"].type()) {
        GetResultToReviewResponseBodyDataHitRuleReviewInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HitRuleReviewInfoList"]));
        hitRuleReviewInfoList = make_shared<GetResultToReviewResponseBodyDataHitRuleReviewInfoList>(model1);
      }
    }
    if (m.find("TotalScore") != m.end() && !m["TotalScore"].empty()) {
      totalScore = make_shared<long>(boost::any_cast<long>(m["TotalScore"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("ManualScoreInfoList") != m.end() && !m["ManualScoreInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ManualScoreInfoList"].type()) {
        GetResultToReviewResponseBodyDataManualScoreInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ManualScoreInfoList"]));
        manualScoreInfoList = make_shared<GetResultToReviewResponseBodyDataManualScoreInfoList>(model1);
      }
    }
    if (m.find("FileMergeName") != m.end() && !m["FileMergeName"].empty()) {
      fileMergeName = make_shared<string>(boost::any_cast<string>(m["FileMergeName"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("Dialogues") != m.end() && !m["Dialogues"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dialogues"].type()) {
        GetResultToReviewResponseBodyDataDialogues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dialogues"]));
        dialogues = make_shared<GetResultToReviewResponseBodyDataDialogues>(model1);
      }
    }
    if (m.find("Vid") != m.end() && !m["Vid"].empty()) {
      vid = make_shared<string>(boost::any_cast<string>(m["Vid"]));
    }
  }


  virtual ~GetResultToReviewResponseBodyData() = default;
};
class GetResultToReviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetResultToReviewResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetResultToReviewResponseBody() {}

  explicit GetResultToReviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetResultToReviewResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetResultToReviewResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetResultToReviewResponseBody() = default;
};
class GetResultToReviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetResultToReviewResponseBody> body{};

  GetResultToReviewResponse() {}

  explicit GetResultToReviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResultToReviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResultToReviewResponseBody>(model1);
      }
    }
  }


  virtual ~GetResultToReviewResponse() = default;
};
class GetReviewInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetReviewInfoRequest() {}

  explicit GetReviewInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetReviewInfoRequest() = default;
};
class GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase : public Darabonba::Model {
public:
  shared_ptr<string> words{};
  shared_ptr<long> begin{};
  shared_ptr<string> identity{};
  shared_ptr<long> pid{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<string> role{};

  GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase() {}

  explicit GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      res["Words"] = boost::any(*words);
    }
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase() = default;
};
class GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<string> val{};
  shared_ptr<string> tid{};
  shared_ptr<long> pid{};
  shared_ptr<long> to{};

  GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord() {}

  explicit GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (val) {
      res["Val"] = boost::any(*val);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("Val") != m.end() && !m["Val"].empty()) {
      val = make_shared<string>(boost::any_cast<string>(m["Val"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord() = default;
};
class GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords : public Darabonba::Model {
public:
  shared_ptr<vector<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord>> keyWord{};

  GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords() {}

  explicit GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyWord) {
      vector<boost::any> temp1;
      for(auto item1:*keyWord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyWord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyWord"].type()) {
        vector<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyWord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyWord = make_shared<vector<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord>>(expect1);
      }
    }
  }


  virtual ~GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords() = default;
};
class GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cid{};

  GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid() {}

  explicit GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Cid"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Cid"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cid = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid() = default;
};
class GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo : public Darabonba::Model {
public:
  shared_ptr<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase> phrase{};
  shared_ptr<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords> keyWords{};
  shared_ptr<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid> cid{};

  GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo() {}

  explicit GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phrase) {
      res["Phrase"] = phrase ? boost::any(phrase->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keyWords) {
      res["KeyWords"] = keyWords ? boost::any(keyWords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cid) {
      res["Cid"] = cid ? boost::any(cid->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Phrase") != m.end() && !m["Phrase"].empty()) {
      if (typeid(map<string, boost::any>) == m["Phrase"].type()) {
        GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Phrase"]));
        phrase = make_shared<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase>(model1);
      }
    }
    if (m.find("KeyWords") != m.end() && !m["KeyWords"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyWords"].type()) {
        GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyWords"]));
        keyWords = make_shared<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords>(model1);
      }
    }
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cid"].type()) {
        GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cid"]));
        cid = make_shared<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid>(model1);
      }
    }
  }


  virtual ~GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo() = default;
};
class GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo>> conditionHitInfo{};

  GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList() {}

  explicit GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionHitInfo) {
      vector<boost::any> temp1;
      for(auto item1:*conditionHitInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConditionHitInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionHitInfo") != m.end() && !m["ConditionHitInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ConditionHitInfo"].type()) {
        vector<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConditionHitInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditionHitInfo = make_shared<vector<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo>>(expect1);
      }
    }
  }


  virtual ~GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList() = default;
};
class GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo : public Darabonba::Model {
public:
  shared_ptr<string> hitId{};
  shared_ptr<long> rid{};

  GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo() {}

  explicit GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitId) {
      res["HitId"] = boost::any(*hitId);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitId") != m.end() && !m["HitId"].empty()) {
      hitId = make_shared<string>(boost::any_cast<string>(m["HitId"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
  }


  virtual ~GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo() = default;
};
class GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo : public Darabonba::Model {
public:
  shared_ptr<long> ruleScoreType{};
  shared_ptr<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList> conditionHitInfoList{};
  shared_ptr<long> ruleType{};
  shared_ptr<long> autoReview{};
  shared_ptr<long> scoreSubId{};
  shared_ptr<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo> reviewInfo{};
  shared_ptr<long> totalNumber{};
  shared_ptr<long> scoreId{};
  shared_ptr<long> rid{};
  shared_ptr<string> ruleName{};

  GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo() {}

  explicit GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleScoreType) {
      res["RuleScoreType"] = boost::any(*ruleScoreType);
    }
    if (conditionHitInfoList) {
      res["ConditionHitInfoList"] = conditionHitInfoList ? boost::any(conditionHitInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (autoReview) {
      res["AutoReview"] = boost::any(*autoReview);
    }
    if (scoreSubId) {
      res["ScoreSubId"] = boost::any(*scoreSubId);
    }
    if (reviewInfo) {
      res["ReviewInfo"] = reviewInfo ? boost::any(reviewInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalNumber) {
      res["TotalNumber"] = boost::any(*totalNumber);
    }
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleScoreType") != m.end() && !m["RuleScoreType"].empty()) {
      ruleScoreType = make_shared<long>(boost::any_cast<long>(m["RuleScoreType"]));
    }
    if (m.find("ConditionHitInfoList") != m.end() && !m["ConditionHitInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConditionHitInfoList"].type()) {
        GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConditionHitInfoList"]));
        conditionHitInfoList = make_shared<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList>(model1);
      }
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<long>(boost::any_cast<long>(m["RuleType"]));
    }
    if (m.find("AutoReview") != m.end() && !m["AutoReview"].empty()) {
      autoReview = make_shared<long>(boost::any_cast<long>(m["AutoReview"]));
    }
    if (m.find("ScoreSubId") != m.end() && !m["ScoreSubId"].empty()) {
      scoreSubId = make_shared<long>(boost::any_cast<long>(m["ScoreSubId"]));
    }
    if (m.find("ReviewInfo") != m.end() && !m["ReviewInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReviewInfo"].type()) {
        GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReviewInfo"]));
        reviewInfo = make_shared<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo>(model1);
      }
    }
    if (m.find("TotalNumber") != m.end() && !m["TotalNumber"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["TotalNumber"]));
    }
    if (m.find("ScoreId") != m.end() && !m["ScoreId"].empty()) {
      scoreId = make_shared<long>(boost::any_cast<long>(m["ScoreId"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo() = default;
};
class GetReviewInfoResponseBodyDataHitRuleReviewInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo>> hitRuleReviewInfo{};

  GetReviewInfoResponseBodyDataHitRuleReviewInfoList() {}

  explicit GetReviewInfoResponseBodyDataHitRuleReviewInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitRuleReviewInfo) {
      vector<boost::any> temp1;
      for(auto item1:*hitRuleReviewInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitRuleReviewInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitRuleReviewInfo") != m.end() && !m["HitRuleReviewInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["HitRuleReviewInfo"].type()) {
        vector<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HitRuleReviewInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hitRuleReviewInfo = make_shared<vector<GetReviewInfoResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo>>(expect1);
      }
    }
  }


  virtual ~GetReviewInfoResponseBodyDataHitRuleReviewInfoList() = default;
};
class GetReviewInfoResponseBodyDataManualScoreMappingList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> manualScoreMappingList{};

  GetReviewInfoResponseBodyDataManualScoreMappingList() {}

  explicit GetReviewInfoResponseBodyDataManualScoreMappingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (manualScoreMappingList) {
      res["ManualScoreMappingList"] = boost::any(*manualScoreMappingList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ManualScoreMappingList") != m.end() && !m["ManualScoreMappingList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ManualScoreMappingList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ManualScoreMappingList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      manualScoreMappingList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetReviewInfoResponseBodyDataManualScoreMappingList() = default;
};
class GetReviewInfoResponseBodyDataDialoguesDialogue : public Darabonba::Model {
public:
  shared_ptr<string> words{};
  shared_ptr<string> identity{};
  shared_ptr<long> begin{};
  shared_ptr<string> beginTime{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> role{};
  shared_ptr<long> silenceDuration{};
  shared_ptr<string> hourMinSec{};

  GetReviewInfoResponseBodyDataDialoguesDialogue() {}

  explicit GetReviewInfoResponseBodyDataDialoguesDialogue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      res["Words"] = boost::any(*words);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    if (hourMinSec) {
      res["HourMinSec"] = boost::any(*hourMinSec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<long>(boost::any_cast<long>(m["SilenceDuration"]));
    }
    if (m.find("HourMinSec") != m.end() && !m["HourMinSec"].empty()) {
      hourMinSec = make_shared<string>(boost::any_cast<string>(m["HourMinSec"]));
    }
  }


  virtual ~GetReviewInfoResponseBodyDataDialoguesDialogue() = default;
};
class GetReviewInfoResponseBodyDataDialogues : public Darabonba::Model {
public:
  shared_ptr<vector<GetReviewInfoResponseBodyDataDialoguesDialogue>> dialogue{};

  GetReviewInfoResponseBodyDataDialogues() {}

  explicit GetReviewInfoResponseBodyDataDialogues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogue) {
      vector<boost::any> temp1;
      for(auto item1:*dialogue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dialogue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dialogue") != m.end() && !m["Dialogue"].empty()) {
      if (typeid(vector<boost::any>) == m["Dialogue"].type()) {
        vector<GetReviewInfoResponseBodyDataDialoguesDialogue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dialogue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetReviewInfoResponseBodyDataDialoguesDialogue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogue = make_shared<vector<GetReviewInfoResponseBodyDataDialoguesDialogue>>(expect1);
      }
    }
  }


  virtual ~GetReviewInfoResponseBodyDataDialogues() = default;
};
class GetReviewInfoResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam : public Darabonba::Model {
public:
  shared_ptr<string> scoreSubName{};
  shared_ptr<long> scoreNum{};
  shared_ptr<long> scoreSubId{};
  shared_ptr<long> scoreType{};
  shared_ptr<long> hit{};

  GetReviewInfoResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam() {}

  explicit GetReviewInfoResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreSubName) {
      res["ScoreSubName"] = boost::any(*scoreSubName);
    }
    if (scoreNum) {
      res["ScoreNum"] = boost::any(*scoreNum);
    }
    if (scoreSubId) {
      res["ScoreSubId"] = boost::any(*scoreSubId);
    }
    if (scoreType) {
      res["ScoreType"] = boost::any(*scoreType);
    }
    if (hit) {
      res["Hit"] = boost::any(*hit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreSubName") != m.end() && !m["ScoreSubName"].empty()) {
      scoreSubName = make_shared<string>(boost::any_cast<string>(m["ScoreSubName"]));
    }
    if (m.find("ScoreNum") != m.end() && !m["ScoreNum"].empty()) {
      scoreNum = make_shared<long>(boost::any_cast<long>(m["ScoreNum"]));
    }
    if (m.find("ScoreSubId") != m.end() && !m["ScoreSubId"].empty()) {
      scoreSubId = make_shared<long>(boost::any_cast<long>(m["ScoreSubId"]));
    }
    if (m.find("ScoreType") != m.end() && !m["ScoreType"].empty()) {
      scoreType = make_shared<long>(boost::any_cast<long>(m["ScoreType"]));
    }
    if (m.find("Hit") != m.end() && !m["Hit"].empty()) {
      hit = make_shared<long>(boost::any_cast<long>(m["Hit"]));
    }
  }


  virtual ~GetReviewInfoResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam() = default;
};
class GetReviewInfoResponseBodyDataHandScoreInfoListScorePoScoreInfos : public Darabonba::Model {
public:
  shared_ptr<vector<GetReviewInfoResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam>> scoreParam{};

  GetReviewInfoResponseBodyDataHandScoreInfoListScorePoScoreInfos() {}

  explicit GetReviewInfoResponseBodyDataHandScoreInfoListScorePoScoreInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreParam) {
      vector<boost::any> temp1;
      for(auto item1:*scoreParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScoreParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreParam") != m.end() && !m["ScoreParam"].empty()) {
      if (typeid(vector<boost::any>) == m["ScoreParam"].type()) {
        vector<GetReviewInfoResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScoreParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetReviewInfoResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scoreParam = make_shared<vector<GetReviewInfoResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam>>(expect1);
      }
    }
  }


  virtual ~GetReviewInfoResponseBodyDataHandScoreInfoListScorePoScoreInfos() = default;
};
class GetReviewInfoResponseBodyDataHandScoreInfoListScorePo : public Darabonba::Model {
public:
  shared_ptr<GetReviewInfoResponseBodyDataHandScoreInfoListScorePoScoreInfos> scoreInfos{};
  shared_ptr<string> scoreName{};
  shared_ptr<long> scoreId{};

  GetReviewInfoResponseBodyDataHandScoreInfoListScorePo() {}

  explicit GetReviewInfoResponseBodyDataHandScoreInfoListScorePo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreInfos) {
      res["ScoreInfos"] = scoreInfos ? boost::any(scoreInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scoreName) {
      res["ScoreName"] = boost::any(*scoreName);
    }
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreInfos") != m.end() && !m["ScoreInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScoreInfos"].type()) {
        GetReviewInfoResponseBodyDataHandScoreInfoListScorePoScoreInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScoreInfos"]));
        scoreInfos = make_shared<GetReviewInfoResponseBodyDataHandScoreInfoListScorePoScoreInfos>(model1);
      }
    }
    if (m.find("ScoreName") != m.end() && !m["ScoreName"].empty()) {
      scoreName = make_shared<string>(boost::any_cast<string>(m["ScoreName"]));
    }
    if (m.find("ScoreId") != m.end() && !m["ScoreId"].empty()) {
      scoreId = make_shared<long>(boost::any_cast<long>(m["ScoreId"]));
    }
  }


  virtual ~GetReviewInfoResponseBodyDataHandScoreInfoListScorePo() = default;
};
class GetReviewInfoResponseBodyDataHandScoreInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<GetReviewInfoResponseBodyDataHandScoreInfoListScorePo>> scorePo{};

  GetReviewInfoResponseBodyDataHandScoreInfoList() {}

  explicit GetReviewInfoResponseBodyDataHandScoreInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scorePo) {
      vector<boost::any> temp1;
      for(auto item1:*scorePo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScorePo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScorePo") != m.end() && !m["ScorePo"].empty()) {
      if (typeid(vector<boost::any>) == m["ScorePo"].type()) {
        vector<GetReviewInfoResponseBodyDataHandScoreInfoListScorePo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScorePo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetReviewInfoResponseBodyDataHandScoreInfoListScorePo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scorePo = make_shared<vector<GetReviewInfoResponseBodyDataHandScoreInfoListScorePo>>(expect1);
      }
    }
  }


  virtual ~GetReviewInfoResponseBodyDataHandScoreInfoList() = default;
};
class GetReviewInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> audioURL{};
  shared_ptr<long> hitNumber{};
  shared_ptr<string> nextVid{};
  shared_ptr<string> preVid{};
  shared_ptr<bool> isAudio{};
  shared_ptr<GetReviewInfoResponseBodyDataHitRuleReviewInfoList> hitRuleReviewInfoList{};
  shared_ptr<bool> audio{};
  shared_ptr<long> asrWordsCount{};
  shared_ptr<long> totalScore{};
  shared_ptr<long> businessType{};
  shared_ptr<GetReviewInfoResponseBodyDataManualScoreMappingList> manualScoreMappingList{};
  shared_ptr<string> fileMergeName{};
  shared_ptr<bool> isDeleted{};
  shared_ptr<GetReviewInfoResponseBodyDataDialogues> dialogues{};
  shared_ptr<bool> deleted{};
  shared_ptr<GetReviewInfoResponseBodyDataHandScoreInfoList> handScoreInfoList{};
  shared_ptr<string> vid{};
  shared_ptr<long> reviewNumber{};

  GetReviewInfoResponseBodyData() {}

  explicit GetReviewInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioURL) {
      res["AudioURL"] = boost::any(*audioURL);
    }
    if (hitNumber) {
      res["HitNumber"] = boost::any(*hitNumber);
    }
    if (nextVid) {
      res["NextVid"] = boost::any(*nextVid);
    }
    if (preVid) {
      res["PreVid"] = boost::any(*preVid);
    }
    if (isAudio) {
      res["IsAudio"] = boost::any(*isAudio);
    }
    if (hitRuleReviewInfoList) {
      res["HitRuleReviewInfoList"] = hitRuleReviewInfoList ? boost::any(hitRuleReviewInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (audio) {
      res["Audio"] = boost::any(*audio);
    }
    if (asrWordsCount) {
      res["AsrWordsCount"] = boost::any(*asrWordsCount);
    }
    if (totalScore) {
      res["TotalScore"] = boost::any(*totalScore);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (manualScoreMappingList) {
      res["ManualScoreMappingList"] = manualScoreMappingList ? boost::any(manualScoreMappingList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileMergeName) {
      res["FileMergeName"] = boost::any(*fileMergeName);
    }
    if (isDeleted) {
      res["IsDeleted"] = boost::any(*isDeleted);
    }
    if (dialogues) {
      res["Dialogues"] = dialogues ? boost::any(dialogues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (handScoreInfoList) {
      res["HandScoreInfoList"] = handScoreInfoList ? boost::any(handScoreInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vid) {
      res["Vid"] = boost::any(*vid);
    }
    if (reviewNumber) {
      res["ReviewNumber"] = boost::any(*reviewNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioURL") != m.end() && !m["AudioURL"].empty()) {
      audioURL = make_shared<string>(boost::any_cast<string>(m["AudioURL"]));
    }
    if (m.find("HitNumber") != m.end() && !m["HitNumber"].empty()) {
      hitNumber = make_shared<long>(boost::any_cast<long>(m["HitNumber"]));
    }
    if (m.find("NextVid") != m.end() && !m["NextVid"].empty()) {
      nextVid = make_shared<string>(boost::any_cast<string>(m["NextVid"]));
    }
    if (m.find("PreVid") != m.end() && !m["PreVid"].empty()) {
      preVid = make_shared<string>(boost::any_cast<string>(m["PreVid"]));
    }
    if (m.find("IsAudio") != m.end() && !m["IsAudio"].empty()) {
      isAudio = make_shared<bool>(boost::any_cast<bool>(m["IsAudio"]));
    }
    if (m.find("HitRuleReviewInfoList") != m.end() && !m["HitRuleReviewInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["HitRuleReviewInfoList"].type()) {
        GetReviewInfoResponseBodyDataHitRuleReviewInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HitRuleReviewInfoList"]));
        hitRuleReviewInfoList = make_shared<GetReviewInfoResponseBodyDataHitRuleReviewInfoList>(model1);
      }
    }
    if (m.find("Audio") != m.end() && !m["Audio"].empty()) {
      audio = make_shared<bool>(boost::any_cast<bool>(m["Audio"]));
    }
    if (m.find("AsrWordsCount") != m.end() && !m["AsrWordsCount"].empty()) {
      asrWordsCount = make_shared<long>(boost::any_cast<long>(m["AsrWordsCount"]));
    }
    if (m.find("TotalScore") != m.end() && !m["TotalScore"].empty()) {
      totalScore = make_shared<long>(boost::any_cast<long>(m["TotalScore"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<long>(boost::any_cast<long>(m["BusinessType"]));
    }
    if (m.find("ManualScoreMappingList") != m.end() && !m["ManualScoreMappingList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ManualScoreMappingList"].type()) {
        GetReviewInfoResponseBodyDataManualScoreMappingList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ManualScoreMappingList"]));
        manualScoreMappingList = make_shared<GetReviewInfoResponseBodyDataManualScoreMappingList>(model1);
      }
    }
    if (m.find("FileMergeName") != m.end() && !m["FileMergeName"].empty()) {
      fileMergeName = make_shared<string>(boost::any_cast<string>(m["FileMergeName"]));
    }
    if (m.find("IsDeleted") != m.end() && !m["IsDeleted"].empty()) {
      isDeleted = make_shared<bool>(boost::any_cast<bool>(m["IsDeleted"]));
    }
    if (m.find("Dialogues") != m.end() && !m["Dialogues"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dialogues"].type()) {
        GetReviewInfoResponseBodyDataDialogues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dialogues"]));
        dialogues = make_shared<GetReviewInfoResponseBodyDataDialogues>(model1);
      }
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("HandScoreInfoList") != m.end() && !m["HandScoreInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["HandScoreInfoList"].type()) {
        GetReviewInfoResponseBodyDataHandScoreInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HandScoreInfoList"]));
        handScoreInfoList = make_shared<GetReviewInfoResponseBodyDataHandScoreInfoList>(model1);
      }
    }
    if (m.find("Vid") != m.end() && !m["Vid"].empty()) {
      vid = make_shared<string>(boost::any_cast<string>(m["Vid"]));
    }
    if (m.find("ReviewNumber") != m.end() && !m["ReviewNumber"].empty()) {
      reviewNumber = make_shared<long>(boost::any_cast<long>(m["ReviewNumber"]));
    }
  }


  virtual ~GetReviewInfoResponseBodyData() = default;
};
class GetReviewInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetReviewInfoResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetReviewInfoResponseBody() {}

  explicit GetReviewInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetReviewInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetReviewInfoResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetReviewInfoResponseBody() = default;
};
class GetReviewInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetReviewInfoResponseBody> body{};

  GetReviewInfoResponse() {}

  explicit GetReviewInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetReviewInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetReviewInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetReviewInfoResponse() = default;
};
class GetRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetRuleRequest() {}

  explicit GetRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetRuleRequest() = default;
};
class GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> businessCategoryNameList{};

  GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList() {}

  explicit GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessCategoryNameList) {
      res["BusinessCategoryNameList"] = boost::any(*businessCategoryNameList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessCategoryNameList") != m.end() && !m["BusinessCategoryNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BusinessCategoryNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BusinessCategoryNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      businessCategoryNameList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList() = default;
};
class GetRuleResponseBodyDataRulesRuleInfo : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<long> status{};
  shared_ptr<GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList> businessCategoryNameList{};
  shared_ptr<long> isOnline{};
  shared_ptr<long> scoreSubId{};
  shared_ptr<string> createEmpid{};
  shared_ptr<string> createTime{};
  shared_ptr<string> lastUpdateEmpid{};
  shared_ptr<long> isDelete{};
  shared_ptr<string> rid{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ruleScoreType{};
  shared_ptr<string> weight{};
  shared_ptr<string> startTime{};
  shared_ptr<string> ruleLambda{};
  shared_ptr<string> scoreSubName{};
  shared_ptr<long> autoReview{};
  shared_ptr<string> comments{};
  shared_ptr<string> lastUpdateTime{};
  shared_ptr<string> scoreName{};
  shared_ptr<string> name{};
  shared_ptr<long> scoreId{};

  GetRuleResponseBodyDataRulesRuleInfo() {}

  explicit GetRuleResponseBodyDataRulesRuleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (businessCategoryNameList) {
      res["BusinessCategoryNameList"] = businessCategoryNameList ? boost::any(businessCategoryNameList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isOnline) {
      res["IsOnline"] = boost::any(*isOnline);
    }
    if (scoreSubId) {
      res["ScoreSubId"] = boost::any(*scoreSubId);
    }
    if (createEmpid) {
      res["CreateEmpid"] = boost::any(*createEmpid);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (lastUpdateEmpid) {
      res["LastUpdateEmpid"] = boost::any(*lastUpdateEmpid);
    }
    if (isDelete) {
      res["IsDelete"] = boost::any(*isDelete);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ruleScoreType) {
      res["RuleScoreType"] = boost::any(*ruleScoreType);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (ruleLambda) {
      res["RuleLambda"] = boost::any(*ruleLambda);
    }
    if (scoreSubName) {
      res["ScoreSubName"] = boost::any(*scoreSubName);
    }
    if (autoReview) {
      res["AutoReview"] = boost::any(*autoReview);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (lastUpdateTime) {
      res["LastUpdateTime"] = boost::any(*lastUpdateTime);
    }
    if (scoreName) {
      res["ScoreName"] = boost::any(*scoreName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("BusinessCategoryNameList") != m.end() && !m["BusinessCategoryNameList"].empty()) {
      if (typeid(map<string, boost::any>) == m["BusinessCategoryNameList"].type()) {
        GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BusinessCategoryNameList"]));
        businessCategoryNameList = make_shared<GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList>(model1);
      }
    }
    if (m.find("IsOnline") != m.end() && !m["IsOnline"].empty()) {
      isOnline = make_shared<long>(boost::any_cast<long>(m["IsOnline"]));
    }
    if (m.find("ScoreSubId") != m.end() && !m["ScoreSubId"].empty()) {
      scoreSubId = make_shared<long>(boost::any_cast<long>(m["ScoreSubId"]));
    }
    if (m.find("CreateEmpid") != m.end() && !m["CreateEmpid"].empty()) {
      createEmpid = make_shared<string>(boost::any_cast<string>(m["CreateEmpid"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("LastUpdateEmpid") != m.end() && !m["LastUpdateEmpid"].empty()) {
      lastUpdateEmpid = make_shared<string>(boost::any_cast<string>(m["LastUpdateEmpid"]));
    }
    if (m.find("IsDelete") != m.end() && !m["IsDelete"].empty()) {
      isDelete = make_shared<long>(boost::any_cast<long>(m["IsDelete"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RuleScoreType") != m.end() && !m["RuleScoreType"].empty()) {
      ruleScoreType = make_shared<long>(boost::any_cast<long>(m["RuleScoreType"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<string>(boost::any_cast<string>(m["Weight"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("RuleLambda") != m.end() && !m["RuleLambda"].empty()) {
      ruleLambda = make_shared<string>(boost::any_cast<string>(m["RuleLambda"]));
    }
    if (m.find("ScoreSubName") != m.end() && !m["ScoreSubName"].empty()) {
      scoreSubName = make_shared<string>(boost::any_cast<string>(m["ScoreSubName"]));
    }
    if (m.find("AutoReview") != m.end() && !m["AutoReview"].empty()) {
      autoReview = make_shared<long>(boost::any_cast<long>(m["AutoReview"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("LastUpdateTime") != m.end() && !m["LastUpdateTime"].empty()) {
      lastUpdateTime = make_shared<string>(boost::any_cast<string>(m["LastUpdateTime"]));
    }
    if (m.find("ScoreName") != m.end() && !m["ScoreName"].empty()) {
      scoreName = make_shared<string>(boost::any_cast<string>(m["ScoreName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ScoreId") != m.end() && !m["ScoreId"].empty()) {
      scoreId = make_shared<long>(boost::any_cast<long>(m["ScoreId"]));
    }
  }


  virtual ~GetRuleResponseBodyDataRulesRuleInfo() = default;
};
class GetRuleResponseBodyDataRules : public Darabonba::Model {
public:
  shared_ptr<vector<GetRuleResponseBodyDataRulesRuleInfo>> ruleInfo{};

  GetRuleResponseBodyDataRules() {}

  explicit GetRuleResponseBodyDataRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleInfo) {
      vector<boost::any> temp1;
      for(auto item1:*ruleInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleInfo") != m.end() && !m["RuleInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleInfo"].type()) {
        vector<GetRuleResponseBodyDataRulesRuleInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRuleResponseBodyDataRulesRuleInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleInfo = make_shared<vector<GetRuleResponseBodyDataRulesRuleInfo>>(expect1);
      }
    }
  }


  virtual ~GetRuleResponseBodyDataRules() = default;
};
class GetRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetRuleResponseBodyDataRules> rules{};

  GetRuleResponseBodyData() {}

  explicit GetRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        GetRuleResponseBodyDataRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<GetRuleResponseBodyDataRules>(model1);
      }
    }
  }


  virtual ~GetRuleResponseBodyData() = default;
};
class GetRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetRuleResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetRuleResponseBody() {}

  explicit GetRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRuleResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetRuleResponseBody() = default;
};
class GetRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRuleResponseBody> body{};

  GetRuleResponse() {}

  explicit GetRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetRuleResponse() = default;
};
class GetRuleCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetRuleCategoryRequest() {}

  explicit GetRuleCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetRuleCategoryRequest() = default;
};
class GetRuleCategoryResponseBodyDataRuleCountInfo : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<bool> select{};
  shared_ptr<string> typeName_{};

  GetRuleCategoryResponseBodyDataRuleCountInfo() {}

  explicit GetRuleCategoryResponseBodyDataRuleCountInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (select) {
      res["Select"] = boost::any(*select);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Select") != m.end() && !m["Select"].empty()) {
      select = make_shared<bool>(boost::any_cast<bool>(m["Select"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
  }


  virtual ~GetRuleCategoryResponseBodyDataRuleCountInfo() = default;
};
class GetRuleCategoryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetRuleCategoryResponseBodyDataRuleCountInfo>> ruleCountInfo{};

  GetRuleCategoryResponseBodyData() {}

  explicit GetRuleCategoryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleCountInfo) {
      vector<boost::any> temp1;
      for(auto item1:*ruleCountInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleCountInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleCountInfo") != m.end() && !m["RuleCountInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleCountInfo"].type()) {
        vector<GetRuleCategoryResponseBodyDataRuleCountInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleCountInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRuleCategoryResponseBodyDataRuleCountInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleCountInfo = make_shared<vector<GetRuleCategoryResponseBodyDataRuleCountInfo>>(expect1);
      }
    }
  }


  virtual ~GetRuleCategoryResponseBodyData() = default;
};
class GetRuleCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetRuleCategoryResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetRuleCategoryResponseBody() {}

  explicit GetRuleCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetRuleCategoryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRuleCategoryResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetRuleCategoryResponseBody() = default;
};
class GetRuleCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRuleCategoryResponseBody> body{};

  GetRuleCategoryResponse() {}

  explicit GetRuleCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRuleCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRuleCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetRuleCategoryResponse() = default;
};
class GetRuleDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetRuleDetailRequest() {}

  explicit GetRuleDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetRuleDetailRequest() = default;
};
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords : public Darabonba::Model {
public:
  shared_ptr<vector<string>> operKeyWord{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operKeyWord) {
      res["OperKeyWord"] = boost::any(*operKeyWord);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperKeyWord") != m.end() && !m["OperKeyWord"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OperKeyWord"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OperKeyWord"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      operKeyWord = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords() = default;
};
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences : public Darabonba::Model {
public:
  shared_ptr<vector<string>> reference{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reference) {
      res["Reference"] = boost::any(*reference);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Reference") != m.end() && !m["Reference"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Reference"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Reference"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      reference = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences() = default;
};
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences : public Darabonba::Model {
public:
  shared_ptr<vector<string>> similarlySentence{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (similarlySentence) {
      res["SimilarlySentence"] = boost::any(*similarlySentence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SimilarlySentence") != m.end() && !m["SimilarlySentence"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SimilarlySentence"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SimilarlySentence"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      similarlySentence = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences() = default;
};
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> excludes{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludes) {
      res["Excludes"] = boost::any(*excludes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Excludes") != m.end() && !m["Excludes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Excludes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Excludes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes() = default;
};
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam : public Darabonba::Model {
public:
  shared_ptr<string> regex{};
  shared_ptr<string> phrase{};
  shared_ptr<long> interval{};
  shared_ptr<double> threshold{};
  shared_ptr<bool> inSentence{};
  shared_ptr<long> target{};
  shared_ptr<bool> fromEnd{};
  shared_ptr<bool> differentRole{};
  shared_ptr<string> targetRole{};
  shared_ptr<long> score{};
  shared_ptr<bool> contextChatMatch{};
  shared_ptr<long> keywordMatchSize{};
  shared_ptr<bool> average{};
  shared_ptr<long> velocityInMint{};
  shared_ptr<long> minWordSize{};
  shared_ptr<bool> keywordExtension{};
  shared_ptr<long> hitTime{};
  shared_ptr<long> from{};
  shared_ptr<string> beginType{};
  shared_ptr<string> compareOperator{};
  shared_ptr<long> checkType{};
  shared_ptr<long> maxEmotionChangeValue{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords> operKeyWords{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences> references{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences> similarlySentences{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes> excludes{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regex) {
      res["Regex"] = boost::any(*regex);
    }
    if (phrase) {
      res["Phrase"] = boost::any(*phrase);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (inSentence) {
      res["InSentence"] = boost::any(*inSentence);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (fromEnd) {
      res["FromEnd"] = boost::any(*fromEnd);
    }
    if (differentRole) {
      res["DifferentRole"] = boost::any(*differentRole);
    }
    if (targetRole) {
      res["TargetRole"] = boost::any(*targetRole);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (contextChatMatch) {
      res["ContextChatMatch"] = boost::any(*contextChatMatch);
    }
    if (keywordMatchSize) {
      res["KeywordMatchSize"] = boost::any(*keywordMatchSize);
    }
    if (average) {
      res["Average"] = boost::any(*average);
    }
    if (velocityInMint) {
      res["VelocityInMint"] = boost::any(*velocityInMint);
    }
    if (minWordSize) {
      res["MinWordSize"] = boost::any(*minWordSize);
    }
    if (keywordExtension) {
      res["KeywordExtension"] = boost::any(*keywordExtension);
    }
    if (hitTime) {
      res["HitTime"] = boost::any(*hitTime);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (beginType) {
      res["BeginType"] = boost::any(*beginType);
    }
    if (compareOperator) {
      res["CompareOperator"] = boost::any(*compareOperator);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (maxEmotionChangeValue) {
      res["MaxEmotionChangeValue"] = boost::any(*maxEmotionChangeValue);
    }
    if (operKeyWords) {
      res["OperKeyWords"] = operKeyWords ? boost::any(operKeyWords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (references) {
      res["References"] = references ? boost::any(references->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (similarlySentences) {
      res["SimilarlySentences"] = similarlySentences ? boost::any(similarlySentences->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (excludes) {
      res["Excludes"] = excludes ? boost::any(excludes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regex") != m.end() && !m["Regex"].empty()) {
      regex = make_shared<string>(boost::any_cast<string>(m["Regex"]));
    }
    if (m.find("Phrase") != m.end() && !m["Phrase"].empty()) {
      phrase = make_shared<string>(boost::any_cast<string>(m["Phrase"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("InSentence") != m.end() && !m["InSentence"].empty()) {
      inSentence = make_shared<bool>(boost::any_cast<bool>(m["InSentence"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["Target"]));
    }
    if (m.find("FromEnd") != m.end() && !m["FromEnd"].empty()) {
      fromEnd = make_shared<bool>(boost::any_cast<bool>(m["FromEnd"]));
    }
    if (m.find("DifferentRole") != m.end() && !m["DifferentRole"].empty()) {
      differentRole = make_shared<bool>(boost::any_cast<bool>(m["DifferentRole"]));
    }
    if (m.find("TargetRole") != m.end() && !m["TargetRole"].empty()) {
      targetRole = make_shared<string>(boost::any_cast<string>(m["TargetRole"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
    if (m.find("ContextChatMatch") != m.end() && !m["ContextChatMatch"].empty()) {
      contextChatMatch = make_shared<bool>(boost::any_cast<bool>(m["ContextChatMatch"]));
    }
    if (m.find("KeywordMatchSize") != m.end() && !m["KeywordMatchSize"].empty()) {
      keywordMatchSize = make_shared<long>(boost::any_cast<long>(m["KeywordMatchSize"]));
    }
    if (m.find("Average") != m.end() && !m["Average"].empty()) {
      average = make_shared<bool>(boost::any_cast<bool>(m["Average"]));
    }
    if (m.find("VelocityInMint") != m.end() && !m["VelocityInMint"].empty()) {
      velocityInMint = make_shared<long>(boost::any_cast<long>(m["VelocityInMint"]));
    }
    if (m.find("MinWordSize") != m.end() && !m["MinWordSize"].empty()) {
      minWordSize = make_shared<long>(boost::any_cast<long>(m["MinWordSize"]));
    }
    if (m.find("KeywordExtension") != m.end() && !m["KeywordExtension"].empty()) {
      keywordExtension = make_shared<bool>(boost::any_cast<bool>(m["KeywordExtension"]));
    }
    if (m.find("HitTime") != m.end() && !m["HitTime"].empty()) {
      hitTime = make_shared<long>(boost::any_cast<long>(m["HitTime"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("BeginType") != m.end() && !m["BeginType"].empty()) {
      beginType = make_shared<string>(boost::any_cast<string>(m["BeginType"]));
    }
    if (m.find("CompareOperator") != m.end() && !m["CompareOperator"].empty()) {
      compareOperator = make_shared<string>(boost::any_cast<string>(m["CompareOperator"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<long>(boost::any_cast<long>(m["CheckType"]));
    }
    if (m.find("MaxEmotionChangeValue") != m.end() && !m["MaxEmotionChangeValue"].empty()) {
      maxEmotionChangeValue = make_shared<long>(boost::any_cast<long>(m["MaxEmotionChangeValue"]));
    }
    if (m.find("OperKeyWords") != m.end() && !m["OperKeyWords"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperKeyWords"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperKeyWords"]));
        operKeyWords = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords>(model1);
      }
    }
    if (m.find("References") != m.end() && !m["References"].empty()) {
      if (typeid(map<string, boost::any>) == m["References"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["References"]));
        references = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences>(model1);
      }
    }
    if (m.find("SimilarlySentences") != m.end() && !m["SimilarlySentences"].empty()) {
      if (typeid(map<string, boost::any>) == m["SimilarlySentences"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SimilarlySentences"]));
        similarlySentences = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences>(model1);
      }
    }
    if (m.find("Excludes") != m.end() && !m["Excludes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Excludes"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Excludes"]));
        excludes = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes>(model1);
      }
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam() = default;
};
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> oid{};
  shared_ptr<string> type{};
  shared_ptr<string> operName{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam> param{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oid) {
      res["Oid"] = boost::any(*oid);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (operName) {
      res["OperName"] = boost::any(*operName);
    }
    if (param) {
      res["Param"] = param ? boost::any(param->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Oid") != m.end() && !m["Oid"].empty()) {
      oid = make_shared<string>(boost::any_cast<string>(m["Oid"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("OperName") != m.end() && !m["OperName"].empty()) {
      operName = make_shared<string>(boost::any_cast<string>(m["OperName"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      if (typeid(map<string, boost::any>) == m["Param"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Param"]));
        param = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam>(model1);
      }
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo() = default;
};
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators : public Darabonba::Model {
public:
  shared_ptr<vector<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo>> operatorBasicInfo{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operatorBasicInfo) {
      vector<boost::any> temp1;
      for(auto item1:*operatorBasicInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperatorBasicInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperatorBasicInfo") != m.end() && !m["OperatorBasicInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["OperatorBasicInfo"].type()) {
        vector<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperatorBasicInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operatorBasicInfo = make_shared<vector<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo>>(expect1);
      }
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators() = default;
};
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor : public Darabonba::Model {
public:
  shared_ptr<string> anchorCid{};
  shared_ptr<string> location{};
  shared_ptr<long> hitTime{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorCid) {
      res["AnchorCid"] = boost::any(*anchorCid);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (hitTime) {
      res["HitTime"] = boost::any(*hitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorCid") != m.end() && !m["AnchorCid"].empty()) {
      anchorCid = make_shared<string>(boost::any_cast<string>(m["AnchorCid"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("HitTime") != m.end() && !m["HitTime"].empty()) {
      hitTime = make_shared<long>(boost::any_cast<long>(m["HitTime"]));
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor() = default;
};
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<long> to{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange() = default;
};
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange : public Darabonba::Model {
public:
  shared_ptr<string> role{};
  shared_ptr<bool> absolute{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor> anchor{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange> range{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (absolute) {
      res["Absolute"] = boost::any(*absolute);
    }
    if (anchor) {
      res["Anchor"] = anchor ? boost::any(anchor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (range) {
      res["Range"] = range ? boost::any(range->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Absolute") != m.end() && !m["Absolute"].empty()) {
      absolute = make_shared<bool>(boost::any_cast<bool>(m["Absolute"]));
    }
    if (m.find("Anchor") != m.end() && !m["Anchor"].empty()) {
      if (typeid(map<string, boost::any>) == m["Anchor"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Anchor"]));
        anchor = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor>(model1);
      }
    }
    if (m.find("Range") != m.end() && !m["Range"].empty()) {
      if (typeid(map<string, boost::any>) == m["Range"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Range"]));
        range = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange>(model1);
      }
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange() = default;
};
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> conditionInfoCid{};
  shared_ptr<string> operLambda{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators> operators{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange> checkRange{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfo() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionInfoCid) {
      res["ConditionInfoCid"] = boost::any(*conditionInfoCid);
    }
    if (operLambda) {
      res["OperLambda"] = boost::any(*operLambda);
    }
    if (operators) {
      res["Operators"] = operators ? boost::any(operators->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkRange) {
      res["CheckRange"] = checkRange ? boost::any(checkRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionInfoCid") != m.end() && !m["ConditionInfoCid"].empty()) {
      conditionInfoCid = make_shared<string>(boost::any_cast<string>(m["ConditionInfoCid"]));
    }
    if (m.find("OperLambda") != m.end() && !m["OperLambda"].empty()) {
      operLambda = make_shared<string>(boost::any_cast<string>(m["OperLambda"]));
    }
    if (m.find("Operators") != m.end() && !m["Operators"].empty()) {
      if (typeid(map<string, boost::any>) == m["Operators"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Operators"]));
        operators = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators>(model1);
      }
    }
    if (m.find("CheckRange") != m.end() && !m["CheckRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["CheckRange"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CheckRange"]));
        checkRange = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange>(model1);
      }
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfo() = default;
};
class GetRuleDetailResponseBodyDataConditions : public Darabonba::Model {
public:
  shared_ptr<vector<GetRuleDetailResponseBodyDataConditionsConditionBasicInfo>> conditionBasicInfo{};

  GetRuleDetailResponseBodyDataConditions() {}

  explicit GetRuleDetailResponseBodyDataConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionBasicInfo) {
      vector<boost::any> temp1;
      for(auto item1:*conditionBasicInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConditionBasicInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionBasicInfo") != m.end() && !m["ConditionBasicInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ConditionBasicInfo"].type()) {
        vector<GetRuleDetailResponseBodyDataConditionsConditionBasicInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConditionBasicInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRuleDetailResponseBodyDataConditionsConditionBasicInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditionBasicInfo = make_shared<vector<GetRuleDetailResponseBodyDataConditionsConditionBasicInfo>>(expect1);
      }
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditions() = default;
};
class GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers : public Darabonba::Model {
public:
  shared_ptr<vector<string>> trigger{};

  GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers() {}

  explicit GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trigger) {
      res["Trigger"] = boost::any(*trigger);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Trigger") != m.end() && !m["Trigger"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Trigger"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Trigger"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      trigger = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers() = default;
};
class GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo : public Darabonba::Model {
public:
  shared_ptr<long> bid{};
  shared_ptr<long> serviceType{};
  shared_ptr<string> businessName{};

  GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo() {}

  explicit GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (businessName) {
      res["BusinessName"] = boost::any(*businessName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<long>(boost::any_cast<long>(m["Bid"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<long>(boost::any_cast<long>(m["ServiceType"]));
    }
    if (m.find("BusinessName") != m.end() && !m["BusinessName"].empty()) {
      businessName = make_shared<string>(boost::any_cast<string>(m["BusinessName"]));
    }
  }


  virtual ~GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo() = default;
};
class GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories : public Darabonba::Model {
public:
  shared_ptr<vector<GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo>> businessCategoryBasicInfo{};

  GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories() {}

  explicit GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessCategoryBasicInfo) {
      vector<boost::any> temp1;
      for(auto item1:*businessCategoryBasicInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BusinessCategoryBasicInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessCategoryBasicInfo") != m.end() && !m["BusinessCategoryBasicInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["BusinessCategoryBasicInfo"].type()) {
        vector<GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BusinessCategoryBasicInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        businessCategoryBasicInfo = make_shared<vector<GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo>>(expect1);
      }
    }
  }


  virtual ~GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories() = default;
};
class GetRuleDetailResponseBodyDataRulesRuleBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> rid{};
  shared_ptr<string> ruleLambda{};
  shared_ptr<GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers> triggers{};
  shared_ptr<GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories> businessCategories{};

  GetRuleDetailResponseBodyDataRulesRuleBasicInfo() {}

  explicit GetRuleDetailResponseBodyDataRulesRuleBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (ruleLambda) {
      res["RuleLambda"] = boost::any(*ruleLambda);
    }
    if (triggers) {
      res["Triggers"] = triggers ? boost::any(triggers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (businessCategories) {
      res["BusinessCategories"] = businessCategories ? boost::any(businessCategories->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
    if (m.find("RuleLambda") != m.end() && !m["RuleLambda"].empty()) {
      ruleLambda = make_shared<string>(boost::any_cast<string>(m["RuleLambda"]));
    }
    if (m.find("Triggers") != m.end() && !m["Triggers"].empty()) {
      if (typeid(map<string, boost::any>) == m["Triggers"].type()) {
        GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Triggers"]));
        triggers = make_shared<GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers>(model1);
      }
    }
    if (m.find("BusinessCategories") != m.end() && !m["BusinessCategories"].empty()) {
      if (typeid(map<string, boost::any>) == m["BusinessCategories"].type()) {
        GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BusinessCategories"]));
        businessCategories = make_shared<GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories>(model1);
      }
    }
  }


  virtual ~GetRuleDetailResponseBodyDataRulesRuleBasicInfo() = default;
};
class GetRuleDetailResponseBodyDataRules : public Darabonba::Model {
public:
  shared_ptr<vector<GetRuleDetailResponseBodyDataRulesRuleBasicInfo>> ruleBasicInfo{};

  GetRuleDetailResponseBodyDataRules() {}

  explicit GetRuleDetailResponseBodyDataRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleBasicInfo) {
      vector<boost::any> temp1;
      for(auto item1:*ruleBasicInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleBasicInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleBasicInfo") != m.end() && !m["RuleBasicInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleBasicInfo"].type()) {
        vector<GetRuleDetailResponseBodyDataRulesRuleBasicInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleBasicInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRuleDetailResponseBodyDataRulesRuleBasicInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleBasicInfo = make_shared<vector<GetRuleDetailResponseBodyDataRulesRuleBasicInfo>>(expect1);
      }
    }
  }


  virtual ~GetRuleDetailResponseBodyDataRules() = default;
};
class GetRuleDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetRuleDetailResponseBodyDataConditions> conditions{};
  shared_ptr<GetRuleDetailResponseBodyDataRules> rules{};

  GetRuleDetailResponseBodyData() {}

  explicit GetRuleDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditions) {
      res["Conditions"] = conditions ? boost::any(conditions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Conditions") != m.end() && !m["Conditions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Conditions"].type()) {
        GetRuleDetailResponseBodyDataConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Conditions"]));
        conditions = make_shared<GetRuleDetailResponseBodyDataConditions>(model1);
      }
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        GetRuleDetailResponseBodyDataRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<GetRuleDetailResponseBodyDataRules>(model1);
      }
    }
  }


  virtual ~GetRuleDetailResponseBodyData() = default;
};
class GetRuleDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<GetRuleDetailResponseBodyData> data{};

  GetRuleDetailResponseBody() {}

  explicit GetRuleDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetRuleDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRuleDetailResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetRuleDetailResponseBody() = default;
};
class GetRuleDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRuleDetailResponseBody> body{};

  GetRuleDetailResponse() {}

  explicit GetRuleDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRuleDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRuleDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetRuleDetailResponse() = default;
};
class GetRuleDimensionRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetRuleDimensionRequest() {}

  explicit GetRuleDimensionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetRuleDimensionRequest() = default;
};
class GetRuleDimensionResponseBodyDataRuleCountInfo : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<long> type{};
  shared_ptr<long> preReviewNumber{};
  shared_ptr<long> hitNumber{};
  shared_ptr<bool> select{};
  shared_ptr<string> createEmpid{};
  shared_ptr<string> createTime{};
  shared_ptr<string> lastUpdateEmpid{};
  shared_ptr<long> realViolationNumber{};
  shared_ptr<long> isDelete{};
  shared_ptr<double> hitRate{};
  shared_ptr<string> rid{};
  shared_ptr<long> checkNumber{};
  shared_ptr<string> typeName_{};
  shared_ptr<string> lastUpdateTime{};
  shared_ptr<string> name{};
  shared_ptr<double> hitRealViolationRate{};
  shared_ptr<long> reviewNumber{};

  GetRuleDimensionResponseBodyDataRuleCountInfo() {}

  explicit GetRuleDimensionResponseBodyDataRuleCountInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (preReviewNumber) {
      res["PreReviewNumber"] = boost::any(*preReviewNumber);
    }
    if (hitNumber) {
      res["HitNumber"] = boost::any(*hitNumber);
    }
    if (select) {
      res["Select"] = boost::any(*select);
    }
    if (createEmpid) {
      res["CreateEmpid"] = boost::any(*createEmpid);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (lastUpdateEmpid) {
      res["LastUpdateEmpid"] = boost::any(*lastUpdateEmpid);
    }
    if (realViolationNumber) {
      res["RealViolationNumber"] = boost::any(*realViolationNumber);
    }
    if (isDelete) {
      res["IsDelete"] = boost::any(*isDelete);
    }
    if (hitRate) {
      res["HitRate"] = boost::any(*hitRate);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (checkNumber) {
      res["CheckNumber"] = boost::any(*checkNumber);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    if (lastUpdateTime) {
      res["LastUpdateTime"] = boost::any(*lastUpdateTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (hitRealViolationRate) {
      res["HitRealViolationRate"] = boost::any(*hitRealViolationRate);
    }
    if (reviewNumber) {
      res["ReviewNumber"] = boost::any(*reviewNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("PreReviewNumber") != m.end() && !m["PreReviewNumber"].empty()) {
      preReviewNumber = make_shared<long>(boost::any_cast<long>(m["PreReviewNumber"]));
    }
    if (m.find("HitNumber") != m.end() && !m["HitNumber"].empty()) {
      hitNumber = make_shared<long>(boost::any_cast<long>(m["HitNumber"]));
    }
    if (m.find("Select") != m.end() && !m["Select"].empty()) {
      select = make_shared<bool>(boost::any_cast<bool>(m["Select"]));
    }
    if (m.find("CreateEmpid") != m.end() && !m["CreateEmpid"].empty()) {
      createEmpid = make_shared<string>(boost::any_cast<string>(m["CreateEmpid"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("LastUpdateEmpid") != m.end() && !m["LastUpdateEmpid"].empty()) {
      lastUpdateEmpid = make_shared<string>(boost::any_cast<string>(m["LastUpdateEmpid"]));
    }
    if (m.find("RealViolationNumber") != m.end() && !m["RealViolationNumber"].empty()) {
      realViolationNumber = make_shared<long>(boost::any_cast<long>(m["RealViolationNumber"]));
    }
    if (m.find("IsDelete") != m.end() && !m["IsDelete"].empty()) {
      isDelete = make_shared<long>(boost::any_cast<long>(m["IsDelete"]));
    }
    if (m.find("HitRate") != m.end() && !m["HitRate"].empty()) {
      hitRate = make_shared<double>(boost::any_cast<double>(m["HitRate"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
    if (m.find("CheckNumber") != m.end() && !m["CheckNumber"].empty()) {
      checkNumber = make_shared<long>(boost::any_cast<long>(m["CheckNumber"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
    if (m.find("LastUpdateTime") != m.end() && !m["LastUpdateTime"].empty()) {
      lastUpdateTime = make_shared<string>(boost::any_cast<string>(m["LastUpdateTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("HitRealViolationRate") != m.end() && !m["HitRealViolationRate"].empty()) {
      hitRealViolationRate = make_shared<double>(boost::any_cast<double>(m["HitRealViolationRate"]));
    }
    if (m.find("ReviewNumber") != m.end() && !m["ReviewNumber"].empty()) {
      reviewNumber = make_shared<long>(boost::any_cast<long>(m["ReviewNumber"]));
    }
  }


  virtual ~GetRuleDimensionResponseBodyDataRuleCountInfo() = default;
};
class GetRuleDimensionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetRuleDimensionResponseBodyDataRuleCountInfo>> ruleCountInfo{};

  GetRuleDimensionResponseBodyData() {}

  explicit GetRuleDimensionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleCountInfo) {
      vector<boost::any> temp1;
      for(auto item1:*ruleCountInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleCountInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleCountInfo") != m.end() && !m["RuleCountInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleCountInfo"].type()) {
        vector<GetRuleDimensionResponseBodyDataRuleCountInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleCountInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRuleDimensionResponseBodyDataRuleCountInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleCountInfo = make_shared<vector<GetRuleDimensionResponseBodyDataRuleCountInfo>>(expect1);
      }
    }
  }


  virtual ~GetRuleDimensionResponseBodyData() = default;
};
class GetRuleDimensionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> compSubTaskCount{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> reviewStatus{};
  shared_ptr<long> dataSize{};
  shared_ptr<GetRuleDimensionResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalSubTaskCount{};

  GetRuleDimensionResponseBody() {}

  explicit GetRuleDimensionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compSubTaskCount) {
      res["CompSubTaskCount"] = boost::any(*compSubTaskCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (reviewStatus) {
      res["ReviewStatus"] = boost::any(*reviewStatus);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalSubTaskCount) {
      res["TotalSubTaskCount"] = boost::any(*totalSubTaskCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompSubTaskCount") != m.end() && !m["CompSubTaskCount"].empty()) {
      compSubTaskCount = make_shared<long>(boost::any_cast<long>(m["CompSubTaskCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("ReviewStatus") != m.end() && !m["ReviewStatus"].empty()) {
      reviewStatus = make_shared<long>(boost::any_cast<long>(m["ReviewStatus"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetRuleDimensionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRuleDimensionResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalSubTaskCount") != m.end() && !m["TotalSubTaskCount"].empty()) {
      totalSubTaskCount = make_shared<long>(boost::any_cast<long>(m["TotalSubTaskCount"]));
    }
  }


  virtual ~GetRuleDimensionResponseBody() = default;
};
class GetRuleDimensionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRuleDimensionResponseBody> body{};

  GetRuleDimensionResponse() {}

  explicit GetRuleDimensionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRuleDimensionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRuleDimensionResponseBody>(model1);
      }
    }
  }


  virtual ~GetRuleDimensionResponse() = default;
};
class GetScoreInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetScoreInfoRequest() {}

  explicit GetScoreInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetScoreInfoRequest() = default;
};
class GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam : public Darabonba::Model {
public:
  shared_ptr<string> scoreSubName{};
  shared_ptr<long> scoreNum{};
  shared_ptr<long> scoreSubId{};
  shared_ptr<long> scoreType{};

  GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam() {}

  explicit GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreSubName) {
      res["ScoreSubName"] = boost::any(*scoreSubName);
    }
    if (scoreNum) {
      res["ScoreNum"] = boost::any(*scoreNum);
    }
    if (scoreSubId) {
      res["ScoreSubId"] = boost::any(*scoreSubId);
    }
    if (scoreType) {
      res["ScoreType"] = boost::any(*scoreType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreSubName") != m.end() && !m["ScoreSubName"].empty()) {
      scoreSubName = make_shared<string>(boost::any_cast<string>(m["ScoreSubName"]));
    }
    if (m.find("ScoreNum") != m.end() && !m["ScoreNum"].empty()) {
      scoreNum = make_shared<long>(boost::any_cast<long>(m["ScoreNum"]));
    }
    if (m.find("ScoreSubId") != m.end() && !m["ScoreSubId"].empty()) {
      scoreSubId = make_shared<long>(boost::any_cast<long>(m["ScoreSubId"]));
    }
    if (m.find("ScoreType") != m.end() && !m["ScoreType"].empty()) {
      scoreType = make_shared<long>(boost::any_cast<long>(m["ScoreType"]));
    }
  }


  virtual ~GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam() = default;
};
class GetScoreInfoResponseBodyDataScorePoScoreInfos : public Darabonba::Model {
public:
  shared_ptr<vector<GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam>> scoreParam{};

  GetScoreInfoResponseBodyDataScorePoScoreInfos() {}

  explicit GetScoreInfoResponseBodyDataScorePoScoreInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreParam) {
      vector<boost::any> temp1;
      for(auto item1:*scoreParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScoreParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreParam") != m.end() && !m["ScoreParam"].empty()) {
      if (typeid(vector<boost::any>) == m["ScoreParam"].type()) {
        vector<GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScoreParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scoreParam = make_shared<vector<GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam>>(expect1);
      }
    }
  }


  virtual ~GetScoreInfoResponseBodyDataScorePoScoreInfos() = default;
};
class GetScoreInfoResponseBodyDataScorePo : public Darabonba::Model {
public:
  shared_ptr<GetScoreInfoResponseBodyDataScorePoScoreInfos> scoreInfos{};
  shared_ptr<string> scoreName{};
  shared_ptr<long> scoreId{};

  GetScoreInfoResponseBodyDataScorePo() {}

  explicit GetScoreInfoResponseBodyDataScorePo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreInfos) {
      res["ScoreInfos"] = scoreInfos ? boost::any(scoreInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scoreName) {
      res["ScoreName"] = boost::any(*scoreName);
    }
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreInfos") != m.end() && !m["ScoreInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScoreInfos"].type()) {
        GetScoreInfoResponseBodyDataScorePoScoreInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScoreInfos"]));
        scoreInfos = make_shared<GetScoreInfoResponseBodyDataScorePoScoreInfos>(model1);
      }
    }
    if (m.find("ScoreName") != m.end() && !m["ScoreName"].empty()) {
      scoreName = make_shared<string>(boost::any_cast<string>(m["ScoreName"]));
    }
    if (m.find("ScoreId") != m.end() && !m["ScoreId"].empty()) {
      scoreId = make_shared<long>(boost::any_cast<long>(m["ScoreId"]));
    }
  }


  virtual ~GetScoreInfoResponseBodyDataScorePo() = default;
};
class GetScoreInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetScoreInfoResponseBodyDataScorePo>> scorePo{};

  GetScoreInfoResponseBodyData() {}

  explicit GetScoreInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scorePo) {
      vector<boost::any> temp1;
      for(auto item1:*scorePo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScorePo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScorePo") != m.end() && !m["ScorePo"].empty()) {
      if (typeid(vector<boost::any>) == m["ScorePo"].type()) {
        vector<GetScoreInfoResponseBodyDataScorePo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScorePo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetScoreInfoResponseBodyDataScorePo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scorePo = make_shared<vector<GetScoreInfoResponseBodyDataScorePo>>(expect1);
      }
    }
  }


  virtual ~GetScoreInfoResponseBodyData() = default;
};
class GetScoreInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetScoreInfoResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetScoreInfoResponseBody() {}

  explicit GetScoreInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetScoreInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetScoreInfoResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetScoreInfoResponseBody() = default;
};
class GetScoreInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetScoreInfoResponseBody> body{};

  GetScoreInfoResponse() {}

  explicit GetScoreInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetScoreInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetScoreInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetScoreInfoResponse() = default;
};
class GetSkillGroupConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetSkillGroupConfigRequest() {}

  explicit GetSkillGroupConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetSkillGroupConfigRequest() = default;
};
class GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo : public Darabonba::Model {
public:
  shared_ptr<string> ruleName{};
  shared_ptr<long> rid{};

  GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo() {}

  explicit GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
  }


  virtual ~GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo() = default;
};
class GetSkillGroupConfigResponseBodyDataAllRuleList : public Darabonba::Model {
public:
  shared_ptr<vector<GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo>> ruleNameInfo{};

  GetSkillGroupConfigResponseBodyDataAllRuleList() {}

  explicit GetSkillGroupConfigResponseBodyDataAllRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleNameInfo) {
      vector<boost::any> temp1;
      for(auto item1:*ruleNameInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleNameInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleNameInfo") != m.end() && !m["RuleNameInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleNameInfo"].type()) {
        vector<GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleNameInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleNameInfo = make_shared<vector<GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo>>(expect1);
      }
    }
  }


  virtual ~GetSkillGroupConfigResponseBodyDataAllRuleList() = default;
};
class GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo : public Darabonba::Model {
public:
  shared_ptr<string> ruleName{};
  shared_ptr<long> rid{};

  GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo() {}

  explicit GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
  }


  virtual ~GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo() = default;
};
class GetSkillGroupConfigResponseBodyDataRuleList : public Darabonba::Model {
public:
  shared_ptr<vector<GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo>> ruleNameInfo{};

  GetSkillGroupConfigResponseBodyDataRuleList() {}

  explicit GetSkillGroupConfigResponseBodyDataRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleNameInfo) {
      vector<boost::any> temp1;
      for(auto item1:*ruleNameInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleNameInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleNameInfo") != m.end() && !m["RuleNameInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleNameInfo"].type()) {
        vector<GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleNameInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleNameInfo = make_shared<vector<GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo>>(expect1);
      }
    }
  }


  virtual ~GetSkillGroupConfigResponseBodyDataRuleList() = default;
};
class GetSkillGroupConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<long> type{};
  shared_ptr<GetSkillGroupConfigResponseBodyDataAllRuleList> allRuleList{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> allContentQualityCheck{};
  shared_ptr<string> createTime{};
  shared_ptr<string> skillGroupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> vocabId{};
  shared_ptr<long> skillGroupFrom{};
  shared_ptr<string> rid{};
  shared_ptr<string> skillGroupName{};
  shared_ptr<GetSkillGroupConfigResponseBodyDataRuleList> ruleList{};
  shared_ptr<string> modelName{};
  shared_ptr<string> allRids{};
  shared_ptr<string> name{};
  shared_ptr<long> modelId{};
  shared_ptr<long> id{};
  shared_ptr<long> qualityCheckType{};
  shared_ptr<string> vocabName{};

  GetSkillGroupConfigResponseBodyData() {}

  explicit GetSkillGroupConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (allRuleList) {
      res["AllRuleList"] = allRuleList ? boost::any(allRuleList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (allContentQualityCheck) {
      res["AllContentQualityCheck"] = boost::any(*allContentQualityCheck);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (vocabId) {
      res["VocabId"] = boost::any(*vocabId);
    }
    if (skillGroupFrom) {
      res["SkillGroupFrom"] = boost::any(*skillGroupFrom);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (skillGroupName) {
      res["SkillGroupName"] = boost::any(*skillGroupName);
    }
    if (ruleList) {
      res["RuleList"] = ruleList ? boost::any(ruleList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (allRids) {
      res["AllRids"] = boost::any(*allRids);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (qualityCheckType) {
      res["QualityCheckType"] = boost::any(*qualityCheckType);
    }
    if (vocabName) {
      res["VocabName"] = boost::any(*vocabName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("AllRuleList") != m.end() && !m["AllRuleList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AllRuleList"].type()) {
        GetSkillGroupConfigResponseBodyDataAllRuleList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AllRuleList"]));
        allRuleList = make_shared<GetSkillGroupConfigResponseBodyDataAllRuleList>(model1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("AllContentQualityCheck") != m.end() && !m["AllContentQualityCheck"].empty()) {
      allContentQualityCheck = make_shared<long>(boost::any_cast<long>(m["AllContentQualityCheck"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<string>(boost::any_cast<string>(m["SkillGroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("VocabId") != m.end() && !m["VocabId"].empty()) {
      vocabId = make_shared<long>(boost::any_cast<long>(m["VocabId"]));
    }
    if (m.find("SkillGroupFrom") != m.end() && !m["SkillGroupFrom"].empty()) {
      skillGroupFrom = make_shared<long>(boost::any_cast<long>(m["SkillGroupFrom"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
    if (m.find("SkillGroupName") != m.end() && !m["SkillGroupName"].empty()) {
      skillGroupName = make_shared<string>(boost::any_cast<string>(m["SkillGroupName"]));
    }
    if (m.find("RuleList") != m.end() && !m["RuleList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleList"].type()) {
        GetSkillGroupConfigResponseBodyDataRuleList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleList"]));
        ruleList = make_shared<GetSkillGroupConfigResponseBodyDataRuleList>(model1);
      }
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("AllRids") != m.end() && !m["AllRids"].empty()) {
      allRids = make_shared<string>(boost::any_cast<string>(m["AllRids"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("QualityCheckType") != m.end() && !m["QualityCheckType"].empty()) {
      qualityCheckType = make_shared<long>(boost::any_cast<long>(m["QualityCheckType"]));
    }
    if (m.find("VocabName") != m.end() && !m["VocabName"].empty()) {
      vocabName = make_shared<string>(boost::any_cast<string>(m["VocabName"]));
    }
  }


  virtual ~GetSkillGroupConfigResponseBodyData() = default;
};
class GetSkillGroupConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetSkillGroupConfigResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetSkillGroupConfigResponseBody() {}

  explicit GetSkillGroupConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSkillGroupConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSkillGroupConfigResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetSkillGroupConfigResponseBody() = default;
};
class GetSkillGroupConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSkillGroupConfigResponseBody> body{};

  GetSkillGroupConfigResponse() {}

  explicit GetSkillGroupConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSkillGroupConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSkillGroupConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetSkillGroupConfigResponse() = default;
};
class GetSyncResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  GetSyncResultRequest() {}

  explicit GetSyncResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetSyncResultRequest() = default;
};
class GetSyncResultResponseBodyDataAgent : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> skillGroup{};
  shared_ptr<string> id{};

  GetSyncResultResponseBodyDataAgent() {}

  explicit GetSyncResultResponseBodyDataAgent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (skillGroup) {
      res["SkillGroup"] = boost::any(*skillGroup);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SkillGroup") != m.end() && !m["SkillGroup"].empty()) {
      skillGroup = make_shared<string>(boost::any_cast<string>(m["SkillGroup"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetSyncResultResponseBodyDataAgent() = default;
};
class GetSyncResultResponseBodyDataAsrResult : public Darabonba::Model {
public:
  shared_ptr<string> words{};
  shared_ptr<long> begin{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> role{};
  shared_ptr<long> silenceDuration{};

  GetSyncResultResponseBodyDataAsrResult() {}

  explicit GetSyncResultResponseBodyDataAsrResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      res["Words"] = boost::any(*words);
    }
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<long>(boost::any_cast<long>(m["SilenceDuration"]));
    }
  }


  virtual ~GetSyncResultResponseBodyDataAsrResult() = default;
};
class GetSyncResultResponseBodyDataHitResultHitsPhrase : public Darabonba::Model {
public:
  shared_ptr<string> words{};
  shared_ptr<long> begin{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> role{};
  shared_ptr<long> silenceDuration{};

  GetSyncResultResponseBodyDataHitResultHitsPhrase() {}

  explicit GetSyncResultResponseBodyDataHitResultHitsPhrase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      res["Words"] = boost::any(*words);
    }
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<long>(boost::any_cast<long>(m["SilenceDuration"]));
    }
  }


  virtual ~GetSyncResultResponseBodyDataHitResultHitsPhrase() = default;
};
class GetSyncResultResponseBodyDataHitResultHitsKeyWords : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<string> val{};
  shared_ptr<string> cid{};
  shared_ptr<long> to{};

  GetSyncResultResponseBodyDataHitResultHitsKeyWords() {}

  explicit GetSyncResultResponseBodyDataHitResultHitsKeyWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (val) {
      res["Val"] = boost::any(*val);
    }
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("Val") != m.end() && !m["Val"].empty()) {
      val = make_shared<string>(boost::any_cast<string>(m["Val"]));
    }
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      cid = make_shared<string>(boost::any_cast<string>(m["Cid"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~GetSyncResultResponseBodyDataHitResultHitsKeyWords() = default;
};
class GetSyncResultResponseBodyDataHitResultHits : public Darabonba::Model {
public:
  shared_ptr<GetSyncResultResponseBodyDataHitResultHitsPhrase> phrase{};
  shared_ptr<vector<GetSyncResultResponseBodyDataHitResultHitsKeyWords>> keyWords{};
  shared_ptr<vector<string>> cid{};

  GetSyncResultResponseBodyDataHitResultHits() {}

  explicit GetSyncResultResponseBodyDataHitResultHits(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phrase) {
      res["Phrase"] = phrase ? boost::any(phrase->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keyWords) {
      vector<boost::any> temp1;
      for(auto item1:*keyWords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyWords"] = boost::any(temp1);
    }
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Phrase") != m.end() && !m["Phrase"].empty()) {
      if (typeid(map<string, boost::any>) == m["Phrase"].type()) {
        GetSyncResultResponseBodyDataHitResultHitsPhrase model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Phrase"]));
        phrase = make_shared<GetSyncResultResponseBodyDataHitResultHitsPhrase>(model1);
      }
    }
    if (m.find("KeyWords") != m.end() && !m["KeyWords"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyWords"].type()) {
        vector<GetSyncResultResponseBodyDataHitResultHitsKeyWords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyWords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSyncResultResponseBodyDataHitResultHitsKeyWords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyWords = make_shared<vector<GetSyncResultResponseBodyDataHitResultHitsKeyWords>>(expect1);
      }
    }
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Cid"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Cid"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cid = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetSyncResultResponseBodyDataHitResultHits() = default;
};
class GetSyncResultResponseBodyDataHitResult : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<vector<GetSyncResultResponseBodyDataHitResultHits>> hits{};
  shared_ptr<long> reviewResult{};
  shared_ptr<string> name{};
  shared_ptr<string> rid{};

  GetSyncResultResponseBodyDataHitResult() {}

  explicit GetSyncResultResponseBodyDataHitResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (hits) {
      vector<boost::any> temp1;
      for(auto item1:*hits){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hits"] = boost::any(temp1);
    }
    if (reviewResult) {
      res["ReviewResult"] = boost::any(*reviewResult);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Hits") != m.end() && !m["Hits"].empty()) {
      if (typeid(vector<boost::any>) == m["Hits"].type()) {
        vector<GetSyncResultResponseBodyDataHitResultHits> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hits"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSyncResultResponseBodyDataHitResultHits model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hits = make_shared<vector<GetSyncResultResponseBodyDataHitResultHits>>(expect1);
      }
    }
    if (m.find("ReviewResult") != m.end() && !m["ReviewResult"].empty()) {
      reviewResult = make_shared<long>(boost::any_cast<long>(m["ReviewResult"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
  }


  virtual ~GetSyncResultResponseBodyDataHitResult() = default;
};
class GetSyncResultResponseBodyDataRecording : public Darabonba::Model {
public:
  shared_ptr<string> callee{};
  shared_ptr<string> business{};
  shared_ptr<string> remark3{};
  shared_ptr<string> url{};
  shared_ptr<string> primaryId{};
  shared_ptr<string> remark1{};
  shared_ptr<long> callType{};
  shared_ptr<string> remark2{};
  shared_ptr<string> caller{};
  shared_ptr<string> callId{};
  shared_ptr<long> duration{};
  shared_ptr<string> dataSetName{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};
  shared_ptr<string> callTime{};

  GetSyncResultResponseBodyDataRecording() {}

  explicit GetSyncResultResponseBodyDataRecording(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callee) {
      res["Callee"] = boost::any(*callee);
    }
    if (business) {
      res["Business"] = boost::any(*business);
    }
    if (remark3) {
      res["Remark3"] = boost::any(*remark3);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (primaryId) {
      res["PrimaryId"] = boost::any(*primaryId);
    }
    if (remark1) {
      res["Remark1"] = boost::any(*remark1);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (remark2) {
      res["Remark2"] = boost::any(*remark2);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (dataSetName) {
      res["DataSetName"] = boost::any(*dataSetName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (callTime) {
      res["CallTime"] = boost::any(*callTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Callee") != m.end() && !m["Callee"].empty()) {
      callee = make_shared<string>(boost::any_cast<string>(m["Callee"]));
    }
    if (m.find("Business") != m.end() && !m["Business"].empty()) {
      business = make_shared<string>(boost::any_cast<string>(m["Business"]));
    }
    if (m.find("Remark3") != m.end() && !m["Remark3"].empty()) {
      remark3 = make_shared<string>(boost::any_cast<string>(m["Remark3"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("PrimaryId") != m.end() && !m["PrimaryId"].empty()) {
      primaryId = make_shared<string>(boost::any_cast<string>(m["PrimaryId"]));
    }
    if (m.find("Remark1") != m.end() && !m["Remark1"].empty()) {
      remark1 = make_shared<string>(boost::any_cast<string>(m["Remark1"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<long>(boost::any_cast<long>(m["CallType"]));
    }
    if (m.find("Remark2") != m.end() && !m["Remark2"].empty()) {
      remark2 = make_shared<string>(boost::any_cast<string>(m["Remark2"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("DataSetName") != m.end() && !m["DataSetName"].empty()) {
      dataSetName = make_shared<string>(boost::any_cast<string>(m["DataSetName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("CallTime") != m.end() && !m["CallTime"].empty()) {
      callTime = make_shared<string>(boost::any_cast<string>(m["CallTime"]));
    }
  }


  virtual ~GetSyncResultResponseBodyDataRecording() = default;
};
class GetSyncResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> reviewer{};
  shared_ptr<string> createTime{};
  shared_ptr<long> reviewStatus{};
  shared_ptr<string> taskName{};
  shared_ptr<long> reviewResult{};
  shared_ptr<long> score{};
  shared_ptr<GetSyncResultResponseBodyDataAgent> agent{};
  shared_ptr<vector<GetSyncResultResponseBodyDataAsrResult>> asrResult{};
  shared_ptr<vector<GetSyncResultResponseBodyDataHitResult>> hitResult{};
  shared_ptr<string> comments{};
  shared_ptr<GetSyncResultResponseBodyDataRecording> recording{};
  shared_ptr<string> taskId{};
  shared_ptr<string> resolver{};

  GetSyncResultResponseBodyData() {}

  explicit GetSyncResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (reviewer) {
      res["Reviewer"] = boost::any(*reviewer);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (reviewStatus) {
      res["ReviewStatus"] = boost::any(*reviewStatus);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (reviewResult) {
      res["ReviewResult"] = boost::any(*reviewResult);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (agent) {
      res["Agent"] = agent ? boost::any(agent->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (asrResult) {
      vector<boost::any> temp1;
      for(auto item1:*asrResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AsrResult"] = boost::any(temp1);
    }
    if (hitResult) {
      vector<boost::any> temp1;
      for(auto item1:*hitResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitResult"] = boost::any(temp1);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (recording) {
      res["Recording"] = recording ? boost::any(recording->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (resolver) {
      res["Resolver"] = boost::any(*resolver);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Reviewer") != m.end() && !m["Reviewer"].empty()) {
      reviewer = make_shared<string>(boost::any_cast<string>(m["Reviewer"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ReviewStatus") != m.end() && !m["ReviewStatus"].empty()) {
      reviewStatus = make_shared<long>(boost::any_cast<long>(m["ReviewStatus"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("ReviewResult") != m.end() && !m["ReviewResult"].empty()) {
      reviewResult = make_shared<long>(boost::any_cast<long>(m["ReviewResult"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
    if (m.find("Agent") != m.end() && !m["Agent"].empty()) {
      if (typeid(map<string, boost::any>) == m["Agent"].type()) {
        GetSyncResultResponseBodyDataAgent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Agent"]));
        agent = make_shared<GetSyncResultResponseBodyDataAgent>(model1);
      }
    }
    if (m.find("AsrResult") != m.end() && !m["AsrResult"].empty()) {
      if (typeid(vector<boost::any>) == m["AsrResult"].type()) {
        vector<GetSyncResultResponseBodyDataAsrResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AsrResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSyncResultResponseBodyDataAsrResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        asrResult = make_shared<vector<GetSyncResultResponseBodyDataAsrResult>>(expect1);
      }
    }
    if (m.find("HitResult") != m.end() && !m["HitResult"].empty()) {
      if (typeid(vector<boost::any>) == m["HitResult"].type()) {
        vector<GetSyncResultResponseBodyDataHitResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HitResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSyncResultResponseBodyDataHitResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hitResult = make_shared<vector<GetSyncResultResponseBodyDataHitResult>>(expect1);
      }
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("Recording") != m.end() && !m["Recording"].empty()) {
      if (typeid(map<string, boost::any>) == m["Recording"].type()) {
        GetSyncResultResponseBodyDataRecording model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Recording"]));
        recording = make_shared<GetSyncResultResponseBodyDataRecording>(model1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Resolver") != m.end() && !m["Resolver"].empty()) {
      resolver = make_shared<string>(boost::any_cast<string>(m["Resolver"]));
    }
  }


  virtual ~GetSyncResultResponseBodyData() = default;
};
class GetSyncResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<GetSyncResultResponseBodyData>> data{};
  shared_ptr<long> count{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> resultCountId{};

  GetSyncResultResponseBody() {}

  explicit GetSyncResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (resultCountId) {
      res["ResultCountId"] = boost::any(*resultCountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetSyncResultResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSyncResultResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetSyncResultResponseBodyData>>(expect1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ResultCountId") != m.end() && !m["ResultCountId"].empty()) {
      resultCountId = make_shared<string>(boost::any_cast<string>(m["ResultCountId"]));
    }
  }


  virtual ~GetSyncResultResponseBody() = default;
};
class GetSyncResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSyncResultResponseBody> body{};

  GetSyncResultResponse() {}

  explicit GetSyncResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSyncResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSyncResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetSyncResultResponse() = default;
};
class GetTaskFileResultListRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetTaskFileResultListRequest() {}

  explicit GetTaskFileResultListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetTaskFileResultListRequest() = default;
};
class GetTaskFileResultListResponseBodyDataTaskResultReviewInfoHitRuleSet : public Darabonba::Model {
public:
  shared_ptr<vector<string>> hitRuleSet{};

  GetTaskFileResultListResponseBodyDataTaskResultReviewInfoHitRuleSet() {}

  explicit GetTaskFileResultListResponseBodyDataTaskResultReviewInfoHitRuleSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitRuleSet) {
      res["HitRuleSet"] = boost::any(*hitRuleSet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitRuleSet") != m.end() && !m["HitRuleSet"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HitRuleSet"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HitRuleSet"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hitRuleSet = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetTaskFileResultListResponseBodyDataTaskResultReviewInfoHitRuleSet() = default;
};
class GetTaskFileResultListResponseBodyDataTaskResultReviewInfo : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<long> hitNumber{};
  shared_ptr<long> dataType{};
  shared_ptr<string> nextVid{};
  shared_ptr<bool> hitRule{};
  shared_ptr<string> preVid{};
  shared_ptr<bool> isHitRule{};
  shared_ptr<long> realViolationNumber{};
  shared_ptr<double> reviewAccuracyRate{};
  shared_ptr<string> fileName{};
  shared_ptr<long> totalScore{};
  shared_ptr<long> checkNumber{};
  shared_ptr<string> fileMergeName{};
  shared_ptr<string> bucketName{};
  shared_ptr<bool> handTaskFile{};
  shared_ptr<GetTaskFileResultListResponseBodyDataTaskResultReviewInfoHitRuleSet> hitRuleSet{};
  shared_ptr<string> taskId{};
  shared_ptr<string> vid{};

  GetTaskFileResultListResponseBodyDataTaskResultReviewInfo() {}

  explicit GetTaskFileResultListResponseBodyDataTaskResultReviewInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (hitNumber) {
      res["HitNumber"] = boost::any(*hitNumber);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (nextVid) {
      res["NextVid"] = boost::any(*nextVid);
    }
    if (hitRule) {
      res["HitRule"] = boost::any(*hitRule);
    }
    if (preVid) {
      res["PreVid"] = boost::any(*preVid);
    }
    if (isHitRule) {
      res["IsHitRule"] = boost::any(*isHitRule);
    }
    if (realViolationNumber) {
      res["RealViolationNumber"] = boost::any(*realViolationNumber);
    }
    if (reviewAccuracyRate) {
      res["ReviewAccuracyRate"] = boost::any(*reviewAccuracyRate);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (totalScore) {
      res["TotalScore"] = boost::any(*totalScore);
    }
    if (checkNumber) {
      res["CheckNumber"] = boost::any(*checkNumber);
    }
    if (fileMergeName) {
      res["FileMergeName"] = boost::any(*fileMergeName);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (handTaskFile) {
      res["HandTaskFile"] = boost::any(*handTaskFile);
    }
    if (hitRuleSet) {
      res["HitRuleSet"] = hitRuleSet ? boost::any(hitRuleSet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (vid) {
      res["Vid"] = boost::any(*vid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("HitNumber") != m.end() && !m["HitNumber"].empty()) {
      hitNumber = make_shared<long>(boost::any_cast<long>(m["HitNumber"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<long>(boost::any_cast<long>(m["DataType"]));
    }
    if (m.find("NextVid") != m.end() && !m["NextVid"].empty()) {
      nextVid = make_shared<string>(boost::any_cast<string>(m["NextVid"]));
    }
    if (m.find("HitRule") != m.end() && !m["HitRule"].empty()) {
      hitRule = make_shared<bool>(boost::any_cast<bool>(m["HitRule"]));
    }
    if (m.find("PreVid") != m.end() && !m["PreVid"].empty()) {
      preVid = make_shared<string>(boost::any_cast<string>(m["PreVid"]));
    }
    if (m.find("IsHitRule") != m.end() && !m["IsHitRule"].empty()) {
      isHitRule = make_shared<bool>(boost::any_cast<bool>(m["IsHitRule"]));
    }
    if (m.find("RealViolationNumber") != m.end() && !m["RealViolationNumber"].empty()) {
      realViolationNumber = make_shared<long>(boost::any_cast<long>(m["RealViolationNumber"]));
    }
    if (m.find("ReviewAccuracyRate") != m.end() && !m["ReviewAccuracyRate"].empty()) {
      reviewAccuracyRate = make_shared<double>(boost::any_cast<double>(m["ReviewAccuracyRate"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("TotalScore") != m.end() && !m["TotalScore"].empty()) {
      totalScore = make_shared<long>(boost::any_cast<long>(m["TotalScore"]));
    }
    if (m.find("CheckNumber") != m.end() && !m["CheckNumber"].empty()) {
      checkNumber = make_shared<long>(boost::any_cast<long>(m["CheckNumber"]));
    }
    if (m.find("FileMergeName") != m.end() && !m["FileMergeName"].empty()) {
      fileMergeName = make_shared<string>(boost::any_cast<string>(m["FileMergeName"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("HandTaskFile") != m.end() && !m["HandTaskFile"].empty()) {
      handTaskFile = make_shared<bool>(boost::any_cast<bool>(m["HandTaskFile"]));
    }
    if (m.find("HitRuleSet") != m.end() && !m["HitRuleSet"].empty()) {
      if (typeid(map<string, boost::any>) == m["HitRuleSet"].type()) {
        GetTaskFileResultListResponseBodyDataTaskResultReviewInfoHitRuleSet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HitRuleSet"]));
        hitRuleSet = make_shared<GetTaskFileResultListResponseBodyDataTaskResultReviewInfoHitRuleSet>(model1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Vid") != m.end() && !m["Vid"].empty()) {
      vid = make_shared<string>(boost::any_cast<string>(m["Vid"]));
    }
  }


  virtual ~GetTaskFileResultListResponseBodyDataTaskResultReviewInfo() = default;
};
class GetTaskFileResultListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetTaskFileResultListResponseBodyDataTaskResultReviewInfo>> taskResultReviewInfo{};

  GetTaskFileResultListResponseBodyData() {}

  explicit GetTaskFileResultListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskResultReviewInfo) {
      vector<boost::any> temp1;
      for(auto item1:*taskResultReviewInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskResultReviewInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskResultReviewInfo") != m.end() && !m["TaskResultReviewInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskResultReviewInfo"].type()) {
        vector<GetTaskFileResultListResponseBodyDataTaskResultReviewInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskResultReviewInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskFileResultListResponseBodyDataTaskResultReviewInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskResultReviewInfo = make_shared<vector<GetTaskFileResultListResponseBodyDataTaskResultReviewInfo>>(expect1);
      }
    }
  }


  virtual ~GetTaskFileResultListResponseBodyData() = default;
};
class GetTaskFileResultListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> dataSize{};
  shared_ptr<GetTaskFileResultListResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetTaskFileResultListResponseBody() {}

  explicit GetTaskFileResultListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTaskFileResultListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTaskFileResultListResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetTaskFileResultListResponseBody() = default;
};
class GetTaskFileResultListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTaskFileResultListResponseBody> body{};

  GetTaskFileResultListResponse() {}

  explicit GetTaskFileResultListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskFileResultListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskFileResultListResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskFileResultListResponse() = default;
};
class GetTaskRuleListRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetTaskRuleListRequest() {}

  explicit GetTaskRuleListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetTaskRuleListRequest() = default;
};
class GetTaskRuleListResponseBodyDataRuleCountInfo : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<long> type{};
  shared_ptr<long> preReviewNumber{};
  shared_ptr<long> hitNumber{};
  shared_ptr<bool> select{};
  shared_ptr<string> createEmpid{};
  shared_ptr<long> createTime{};
  shared_ptr<string> lastUpdateEmpid{};
  shared_ptr<long> realViolationNumber{};
  shared_ptr<long> isDelete{};
  shared_ptr<double> hitRate{};
  shared_ptr<string> rid{};
  shared_ptr<long> checkNumber{};
  shared_ptr<string> typeName_{};
  shared_ptr<long> lastUpdateTime{};
  shared_ptr<string> name{};
  shared_ptr<double> hitRealViolationRate{};
  shared_ptr<long> reviewNumber{};

  GetTaskRuleListResponseBodyDataRuleCountInfo() {}

  explicit GetTaskRuleListResponseBodyDataRuleCountInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (preReviewNumber) {
      res["PreReviewNumber"] = boost::any(*preReviewNumber);
    }
    if (hitNumber) {
      res["HitNumber"] = boost::any(*hitNumber);
    }
    if (select) {
      res["Select"] = boost::any(*select);
    }
    if (createEmpid) {
      res["CreateEmpid"] = boost::any(*createEmpid);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (lastUpdateEmpid) {
      res["LastUpdateEmpid"] = boost::any(*lastUpdateEmpid);
    }
    if (realViolationNumber) {
      res["RealViolationNumber"] = boost::any(*realViolationNumber);
    }
    if (isDelete) {
      res["IsDelete"] = boost::any(*isDelete);
    }
    if (hitRate) {
      res["HitRate"] = boost::any(*hitRate);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (checkNumber) {
      res["CheckNumber"] = boost::any(*checkNumber);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    if (lastUpdateTime) {
      res["LastUpdateTime"] = boost::any(*lastUpdateTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (hitRealViolationRate) {
      res["HitRealViolationRate"] = boost::any(*hitRealViolationRate);
    }
    if (reviewNumber) {
      res["ReviewNumber"] = boost::any(*reviewNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("PreReviewNumber") != m.end() && !m["PreReviewNumber"].empty()) {
      preReviewNumber = make_shared<long>(boost::any_cast<long>(m["PreReviewNumber"]));
    }
    if (m.find("HitNumber") != m.end() && !m["HitNumber"].empty()) {
      hitNumber = make_shared<long>(boost::any_cast<long>(m["HitNumber"]));
    }
    if (m.find("Select") != m.end() && !m["Select"].empty()) {
      select = make_shared<bool>(boost::any_cast<bool>(m["Select"]));
    }
    if (m.find("CreateEmpid") != m.end() && !m["CreateEmpid"].empty()) {
      createEmpid = make_shared<string>(boost::any_cast<string>(m["CreateEmpid"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("LastUpdateEmpid") != m.end() && !m["LastUpdateEmpid"].empty()) {
      lastUpdateEmpid = make_shared<string>(boost::any_cast<string>(m["LastUpdateEmpid"]));
    }
    if (m.find("RealViolationNumber") != m.end() && !m["RealViolationNumber"].empty()) {
      realViolationNumber = make_shared<long>(boost::any_cast<long>(m["RealViolationNumber"]));
    }
    if (m.find("IsDelete") != m.end() && !m["IsDelete"].empty()) {
      isDelete = make_shared<long>(boost::any_cast<long>(m["IsDelete"]));
    }
    if (m.find("HitRate") != m.end() && !m["HitRate"].empty()) {
      hitRate = make_shared<double>(boost::any_cast<double>(m["HitRate"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
    if (m.find("CheckNumber") != m.end() && !m["CheckNumber"].empty()) {
      checkNumber = make_shared<long>(boost::any_cast<long>(m["CheckNumber"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
    if (m.find("LastUpdateTime") != m.end() && !m["LastUpdateTime"].empty()) {
      lastUpdateTime = make_shared<long>(boost::any_cast<long>(m["LastUpdateTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("HitRealViolationRate") != m.end() && !m["HitRealViolationRate"].empty()) {
      hitRealViolationRate = make_shared<double>(boost::any_cast<double>(m["HitRealViolationRate"]));
    }
    if (m.find("ReviewNumber") != m.end() && !m["ReviewNumber"].empty()) {
      reviewNumber = make_shared<long>(boost::any_cast<long>(m["ReviewNumber"]));
    }
  }


  virtual ~GetTaskRuleListResponseBodyDataRuleCountInfo() = default;
};
class GetTaskRuleListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetTaskRuleListResponseBodyDataRuleCountInfo>> ruleCountInfo{};

  GetTaskRuleListResponseBodyData() {}

  explicit GetTaskRuleListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleCountInfo) {
      vector<boost::any> temp1;
      for(auto item1:*ruleCountInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleCountInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleCountInfo") != m.end() && !m["RuleCountInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleCountInfo"].type()) {
        vector<GetTaskRuleListResponseBodyDataRuleCountInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleCountInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskRuleListResponseBodyDataRuleCountInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleCountInfo = make_shared<vector<GetTaskRuleListResponseBodyDataRuleCountInfo>>(expect1);
      }
    }
  }


  virtual ~GetTaskRuleListResponseBodyData() = default;
};
class GetTaskRuleListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> compSubTaskCount{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> reviewStatus{};
  shared_ptr<long> dataSize{};
  shared_ptr<GetTaskRuleListResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalSubTaskCount{};

  GetTaskRuleListResponseBody() {}

  explicit GetTaskRuleListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compSubTaskCount) {
      res["CompSubTaskCount"] = boost::any(*compSubTaskCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (reviewStatus) {
      res["ReviewStatus"] = boost::any(*reviewStatus);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalSubTaskCount) {
      res["TotalSubTaskCount"] = boost::any(*totalSubTaskCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompSubTaskCount") != m.end() && !m["CompSubTaskCount"].empty()) {
      compSubTaskCount = make_shared<long>(boost::any_cast<long>(m["CompSubTaskCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("ReviewStatus") != m.end() && !m["ReviewStatus"].empty()) {
      reviewStatus = make_shared<long>(boost::any_cast<long>(m["ReviewStatus"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTaskRuleListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTaskRuleListResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalSubTaskCount") != m.end() && !m["TotalSubTaskCount"].empty()) {
      totalSubTaskCount = make_shared<long>(boost::any_cast<long>(m["TotalSubTaskCount"]));
    }
  }


  virtual ~GetTaskRuleListResponseBody() = default;
};
class GetTaskRuleListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTaskRuleListResponseBody> body{};

  GetTaskRuleListResponse() {}

  explicit GetTaskRuleListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskRuleListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskRuleListResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskRuleListResponse() = default;
};
class GetThesaurusBySynonymForApiRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  GetThesaurusBySynonymForApiRequest() {}

  explicit GetThesaurusBySynonymForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~GetThesaurusBySynonymForApiRequest() = default;
};
class GetThesaurusBySynonymForApiResponseBodyDataThesaurusPoSynonymList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> synonymList{};

  GetThesaurusBySynonymForApiResponseBodyDataThesaurusPoSynonymList() {}

  explicit GetThesaurusBySynonymForApiResponseBodyDataThesaurusPoSynonymList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (synonymList) {
      res["SynonymList"] = boost::any(*synonymList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SynonymList") != m.end() && !m["SynonymList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SynonymList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SynonymList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      synonymList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetThesaurusBySynonymForApiResponseBodyDataThesaurusPoSynonymList() = default;
};
class GetThesaurusBySynonymForApiResponseBodyDataThesaurusPo : public Darabonba::Model {
public:
  shared_ptr<string> business{};
  shared_ptr<GetThesaurusBySynonymForApiResponseBodyDataThesaurusPoSynonymList> synonymList{};
  shared_ptr<long> id{};

  GetThesaurusBySynonymForApiResponseBodyDataThesaurusPo() {}

  explicit GetThesaurusBySynonymForApiResponseBodyDataThesaurusPo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (business) {
      res["Business"] = boost::any(*business);
    }
    if (synonymList) {
      res["SynonymList"] = synonymList ? boost::any(synonymList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Business") != m.end() && !m["Business"].empty()) {
      business = make_shared<string>(boost::any_cast<string>(m["Business"]));
    }
    if (m.find("SynonymList") != m.end() && !m["SynonymList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SynonymList"].type()) {
        GetThesaurusBySynonymForApiResponseBodyDataThesaurusPoSynonymList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SynonymList"]));
        synonymList = make_shared<GetThesaurusBySynonymForApiResponseBodyDataThesaurusPoSynonymList>(model1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetThesaurusBySynonymForApiResponseBodyDataThesaurusPo() = default;
};
class GetThesaurusBySynonymForApiResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetThesaurusBySynonymForApiResponseBodyDataThesaurusPo>> thesaurusPo{};

  GetThesaurusBySynonymForApiResponseBodyData() {}

  explicit GetThesaurusBySynonymForApiResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (thesaurusPo) {
      vector<boost::any> temp1;
      for(auto item1:*thesaurusPo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ThesaurusPo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ThesaurusPo") != m.end() && !m["ThesaurusPo"].empty()) {
      if (typeid(vector<boost::any>) == m["ThesaurusPo"].type()) {
        vector<GetThesaurusBySynonymForApiResponseBodyDataThesaurusPo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ThesaurusPo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetThesaurusBySynonymForApiResponseBodyDataThesaurusPo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        thesaurusPo = make_shared<vector<GetThesaurusBySynonymForApiResponseBodyDataThesaurusPo>>(expect1);
      }
    }
  }


  virtual ~GetThesaurusBySynonymForApiResponseBodyData() = default;
};
class GetThesaurusBySynonymForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetThesaurusBySynonymForApiResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetThesaurusBySynonymForApiResponseBody() {}

  explicit GetThesaurusBySynonymForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetThesaurusBySynonymForApiResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetThesaurusBySynonymForApiResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetThesaurusBySynonymForApiResponseBody() = default;
};
class GetThesaurusBySynonymForApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetThesaurusBySynonymForApiResponseBody> body{};

  GetThesaurusBySynonymForApiResponse() {}

  explicit GetThesaurusBySynonymForApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetThesaurusBySynonymForApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetThesaurusBySynonymForApiResponseBody>(model1);
      }
    }
  }


  virtual ~GetThesaurusBySynonymForApiResponse() = default;
};
class HandleComplaintRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  HandleComplaintRequest() {}

  explicit HandleComplaintRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~HandleComplaintRequest() = default;
};
class HandleComplaintResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  HandleComplaintResponseBody() {}

  explicit HandleComplaintResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~HandleComplaintResponseBody() = default;
};
class HandleComplaintResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<HandleComplaintResponseBody> body{};

  HandleComplaintResponse() {}

  explicit HandleComplaintResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HandleComplaintResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HandleComplaintResponseBody>(model1);
      }
    }
  }


  virtual ~HandleComplaintResponse() = default;
};
class InsertScoreForApiRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  InsertScoreForApiRequest() {}

  explicit InsertScoreForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~InsertScoreForApiRequest() = default;
};
class InsertScoreForApiResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> scoreName{};
  shared_ptr<long> scoreId{};

  InsertScoreForApiResponseBodyData() {}

  explicit InsertScoreForApiResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreName) {
      res["ScoreName"] = boost::any(*scoreName);
    }
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreName") != m.end() && !m["ScoreName"].empty()) {
      scoreName = make_shared<string>(boost::any_cast<string>(m["ScoreName"]));
    }
    if (m.find("ScoreId") != m.end() && !m["ScoreId"].empty()) {
      scoreId = make_shared<long>(boost::any_cast<long>(m["ScoreId"]));
    }
  }


  virtual ~InsertScoreForApiResponseBodyData() = default;
};
class InsertScoreForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<InsertScoreForApiResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  InsertScoreForApiResponseBody() {}

  explicit InsertScoreForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        InsertScoreForApiResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<InsertScoreForApiResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~InsertScoreForApiResponseBody() = default;
};
class InsertScoreForApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InsertScoreForApiResponseBody> body{};

  InsertScoreForApiResponse() {}

  explicit InsertScoreForApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InsertScoreForApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InsertScoreForApiResponseBody>(model1);
      }
    }
  }


  virtual ~InsertScoreForApiResponse() = default;
};
class InsertSubScoreForApiRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  InsertSubScoreForApiRequest() {}

  explicit InsertSubScoreForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~InsertSubScoreForApiRequest() = default;
};
class InsertSubScoreForApiResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> scoreSubName{};
  shared_ptr<long> scoreSubId{};

  InsertSubScoreForApiResponseBodyData() {}

  explicit InsertSubScoreForApiResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreSubName) {
      res["ScoreSubName"] = boost::any(*scoreSubName);
    }
    if (scoreSubId) {
      res["ScoreSubId"] = boost::any(*scoreSubId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreSubName") != m.end() && !m["ScoreSubName"].empty()) {
      scoreSubName = make_shared<string>(boost::any_cast<string>(m["ScoreSubName"]));
    }
    if (m.find("ScoreSubId") != m.end() && !m["ScoreSubId"].empty()) {
      scoreSubId = make_shared<long>(boost::any_cast<long>(m["ScoreSubId"]));
    }
  }


  virtual ~InsertSubScoreForApiResponseBodyData() = default;
};
class InsertSubScoreForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<InsertSubScoreForApiResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  InsertSubScoreForApiResponseBody() {}

  explicit InsertSubScoreForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        InsertSubScoreForApiResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<InsertSubScoreForApiResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~InsertSubScoreForApiResponseBody() = default;
};
class InsertSubScoreForApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InsertSubScoreForApiResponseBody> body{};

  InsertSubScoreForApiResponse() {}

  explicit InsertSubScoreForApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InsertSubScoreForApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InsertSubScoreForApiResponseBody>(model1);
      }
    }
  }


  virtual ~InsertSubScoreForApiResponse() = default;
};
class InvalidRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  InvalidRuleRequest() {}

  explicit InvalidRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~InvalidRuleRequest() = default;
};
class InvalidRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  InvalidRuleResponseBody() {}

  explicit InvalidRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~InvalidRuleResponseBody() = default;
};
class InvalidRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InvalidRuleResponseBody> body{};

  InvalidRuleResponse() {}

  explicit InvalidRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InvalidRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InvalidRuleResponseBody>(model1);
      }
    }
  }


  virtual ~InvalidRuleResponse() = default;
};
class ListAsrVocabRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  ListAsrVocabRequest() {}

  explicit ListAsrVocabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~ListAsrVocabRequest() = default;
};
class ListAsrVocabResponseBodyDataAsrVocab : public Darabonba::Model {
public:
  shared_ptr<string> vocabularyId{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  ListAsrVocabResponseBodyDataAsrVocab() {}

  explicit ListAsrVocabResponseBodyDataAsrVocab(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vocabularyId) {
      res["VocabularyId"] = boost::any(*vocabularyId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VocabularyId") != m.end() && !m["VocabularyId"].empty()) {
      vocabularyId = make_shared<string>(boost::any_cast<string>(m["VocabularyId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListAsrVocabResponseBodyDataAsrVocab() = default;
};
class ListAsrVocabResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListAsrVocabResponseBodyDataAsrVocab>> asrVocab{};

  ListAsrVocabResponseBodyData() {}

  explicit ListAsrVocabResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asrVocab) {
      vector<boost::any> temp1;
      for(auto item1:*asrVocab){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AsrVocab"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsrVocab") != m.end() && !m["AsrVocab"].empty()) {
      if (typeid(vector<boost::any>) == m["AsrVocab"].type()) {
        vector<ListAsrVocabResponseBodyDataAsrVocab> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AsrVocab"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAsrVocabResponseBodyDataAsrVocab model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        asrVocab = make_shared<vector<ListAsrVocabResponseBodyDataAsrVocab>>(expect1);
      }
    }
  }


  virtual ~ListAsrVocabResponseBodyData() = default;
};
class ListAsrVocabResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListAsrVocabResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListAsrVocabResponseBody() {}

  explicit ListAsrVocabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListAsrVocabResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAsrVocabResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAsrVocabResponseBody() = default;
};
class ListAsrVocabResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAsrVocabResponseBody> body{};

  ListAsrVocabResponse() {}

  explicit ListAsrVocabResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAsrVocabResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAsrVocabResponseBody>(model1);
      }
    }
  }


  virtual ~ListAsrVocabResponse() = default;
};
class ListDataSetTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  ListDataSetTaskRequest() {}

  explicit ListDataSetTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~ListDataSetTaskRequest() = default;
};
class ListDataSetTaskResponseBodyDataPageTaskInfoRuleNameInfoListRuleNameInfo : public Darabonba::Model {
public:
  shared_ptr<string> ruleName{};
  shared_ptr<long> rid{};

  ListDataSetTaskResponseBodyDataPageTaskInfoRuleNameInfoListRuleNameInfo() {}

  explicit ListDataSetTaskResponseBodyDataPageTaskInfoRuleNameInfoListRuleNameInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
  }


  virtual ~ListDataSetTaskResponseBodyDataPageTaskInfoRuleNameInfoListRuleNameInfo() = default;
};
class ListDataSetTaskResponseBodyDataPageTaskInfoRuleNameInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<ListDataSetTaskResponseBodyDataPageTaskInfoRuleNameInfoListRuleNameInfo>> ruleNameInfo{};

  ListDataSetTaskResponseBodyDataPageTaskInfoRuleNameInfoList() {}

  explicit ListDataSetTaskResponseBodyDataPageTaskInfoRuleNameInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleNameInfo) {
      vector<boost::any> temp1;
      for(auto item1:*ruleNameInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleNameInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleNameInfo") != m.end() && !m["RuleNameInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleNameInfo"].type()) {
        vector<ListDataSetTaskResponseBodyDataPageTaskInfoRuleNameInfoListRuleNameInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleNameInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSetTaskResponseBodyDataPageTaskInfoRuleNameInfoListRuleNameInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleNameInfo = make_shared<vector<ListDataSetTaskResponseBodyDataPageTaskInfoRuleNameInfoListRuleNameInfo>>(expect1);
      }
    }
  }


  virtual ~ListDataSetTaskResponseBodyDataPageTaskInfoRuleNameInfoList() = default;
};
class ListDataSetTaskResponseBodyDataPageTaskInfoDataSets : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dataSets{};

  ListDataSetTaskResponseBodyDataPageTaskInfoDataSets() {}

  explicit ListDataSetTaskResponseBodyDataPageTaskInfoDataSets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSets) {
      res["dataSets"] = boost::any(*dataSets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataSets") != m.end() && !m["dataSets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dataSets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dataSets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dataSets = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListDataSetTaskResponseBodyDataPageTaskInfoDataSets() = default;
};
class ListDataSetTaskResponseBodyDataPageTaskInfo : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<bool> isTaskComplete{};
  shared_ptr<ListDataSetTaskResponseBodyDataPageTaskInfoRuleNameInfoList> ruleNameInfoList{};
  shared_ptr<double> scheduleRatio{};
  shared_ptr<bool> taskComplete{};
  shared_ptr<ListDataSetTaskResponseBodyDataPageTaskInfoDataSets> dataSets{};
  shared_ptr<long> dataSetSize{};
  shared_ptr<long> ruleSize{};
  shared_ptr<string> jobName{};
  shared_ptr<string> taskId{};

  ListDataSetTaskResponseBodyDataPageTaskInfo() {}

  explicit ListDataSetTaskResponseBodyDataPageTaskInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (isTaskComplete) {
      res["IsTaskComplete"] = boost::any(*isTaskComplete);
    }
    if (ruleNameInfoList) {
      res["RuleNameInfoList"] = ruleNameInfoList ? boost::any(ruleNameInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleRatio) {
      res["ScheduleRatio"] = boost::any(*scheduleRatio);
    }
    if (taskComplete) {
      res["TaskComplete"] = boost::any(*taskComplete);
    }
    if (dataSets) {
      res["DataSets"] = dataSets ? boost::any(dataSets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataSetSize) {
      res["DataSetSize"] = boost::any(*dataSetSize);
    }
    if (ruleSize) {
      res["RuleSize"] = boost::any(*ruleSize);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("IsTaskComplete") != m.end() && !m["IsTaskComplete"].empty()) {
      isTaskComplete = make_shared<bool>(boost::any_cast<bool>(m["IsTaskComplete"]));
    }
    if (m.find("RuleNameInfoList") != m.end() && !m["RuleNameInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleNameInfoList"].type()) {
        ListDataSetTaskResponseBodyDataPageTaskInfoRuleNameInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleNameInfoList"]));
        ruleNameInfoList = make_shared<ListDataSetTaskResponseBodyDataPageTaskInfoRuleNameInfoList>(model1);
      }
    }
    if (m.find("ScheduleRatio") != m.end() && !m["ScheduleRatio"].empty()) {
      scheduleRatio = make_shared<double>(boost::any_cast<double>(m["ScheduleRatio"]));
    }
    if (m.find("TaskComplete") != m.end() && !m["TaskComplete"].empty()) {
      taskComplete = make_shared<bool>(boost::any_cast<bool>(m["TaskComplete"]));
    }
    if (m.find("DataSets") != m.end() && !m["DataSets"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSets"].type()) {
        ListDataSetTaskResponseBodyDataPageTaskInfoDataSets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSets"]));
        dataSets = make_shared<ListDataSetTaskResponseBodyDataPageTaskInfoDataSets>(model1);
      }
    }
    if (m.find("DataSetSize") != m.end() && !m["DataSetSize"].empty()) {
      dataSetSize = make_shared<long>(boost::any_cast<long>(m["DataSetSize"]));
    }
    if (m.find("RuleSize") != m.end() && !m["RuleSize"].empty()) {
      ruleSize = make_shared<long>(boost::any_cast<long>(m["RuleSize"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ListDataSetTaskResponseBodyDataPageTaskInfo() = default;
};
class ListDataSetTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDataSetTaskResponseBodyDataPageTaskInfo>> pageTaskInfo{};

  ListDataSetTaskResponseBodyData() {}

  explicit ListDataSetTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageTaskInfo) {
      vector<boost::any> temp1;
      for(auto item1:*pageTaskInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageTaskInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageTaskInfo") != m.end() && !m["PageTaskInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["PageTaskInfo"].type()) {
        vector<ListDataSetTaskResponseBodyDataPageTaskInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageTaskInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSetTaskResponseBodyDataPageTaskInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageTaskInfo = make_shared<vector<ListDataSetTaskResponseBodyDataPageTaskInfo>>(expect1);
      }
    }
  }


  virtual ~ListDataSetTaskResponseBodyData() = default;
};
class ListDataSetTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> dataSize{};
  shared_ptr<ListDataSetTaskResponseBodyData> data{};
  shared_ptr<long> isAllcomplete{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListDataSetTaskResponseBody() {}

  explicit ListDataSetTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isAllcomplete) {
      res["IsAllcomplete"] = boost::any(*isAllcomplete);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListDataSetTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDataSetTaskResponseBodyData>(model1);
      }
    }
    if (m.find("IsAllcomplete") != m.end() && !m["IsAllcomplete"].empty()) {
      isAllcomplete = make_shared<long>(boost::any_cast<long>(m["IsAllcomplete"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListDataSetTaskResponseBody() = default;
};
class ListDataSetTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDataSetTaskResponseBody> body{};

  ListDataSetTaskResponse() {}

  explicit ListDataSetTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDataSetTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSetTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSetTaskResponse() = default;
};
class ListHotWordsTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  ListHotWordsTasksRequest() {}

  explicit ListHotWordsTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~ListHotWordsTasksRequest() = default;
};
class ListHotWordsTasksResponseBodyDataHotWordsTaskPoWordsParam : public Darabonba::Model {
public:
  shared_ptr<string> excludes{};
  shared_ptr<string> includes{};
  shared_ptr<long> extraConfigId{};

  ListHotWordsTasksResponseBodyDataHotWordsTaskPoWordsParam() {}

  explicit ListHotWordsTasksResponseBodyDataHotWordsTaskPoWordsParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludes) {
      res["Excludes"] = boost::any(*excludes);
    }
    if (includes) {
      res["Includes"] = boost::any(*includes);
    }
    if (extraConfigId) {
      res["ExtraConfigId"] = boost::any(*extraConfigId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Excludes") != m.end() && !m["Excludes"].empty()) {
      excludes = make_shared<string>(boost::any_cast<string>(m["Excludes"]));
    }
    if (m.find("Includes") != m.end() && !m["Includes"].empty()) {
      includes = make_shared<string>(boost::any_cast<string>(m["Includes"]));
    }
    if (m.find("ExtraConfigId") != m.end() && !m["ExtraConfigId"].empty()) {
      extraConfigId = make_shared<long>(boost::any_cast<long>(m["ExtraConfigId"]));
    }
  }


  virtual ~ListHotWordsTasksResponseBodyDataHotWordsTaskPoWordsParam() = default;
};
class ListHotWordsTasksResponseBodyDataHotWordsTaskPoDialogueParam : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> dialogueId{};
  shared_ptr<long> endIndex{};
  shared_ptr<string> startTime{};
  shared_ptr<long> sourceType{};
  shared_ptr<long> startIndex{};
  shared_ptr<long> role{};
  shared_ptr<string> dataSetIds{};

  ListHotWordsTasksResponseBodyDataHotWordsTaskPoDialogueParam() {}

  explicit ListHotWordsTasksResponseBodyDataHotWordsTaskPoDialogueParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (dialogueId) {
      res["DialogueId"] = boost::any(*dialogueId);
    }
    if (endIndex) {
      res["EndIndex"] = boost::any(*endIndex);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (startIndex) {
      res["StartIndex"] = boost::any(*startIndex);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (dataSetIds) {
      res["DataSetIds"] = boost::any(*dataSetIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("DialogueId") != m.end() && !m["DialogueId"].empty()) {
      dialogueId = make_shared<long>(boost::any_cast<long>(m["DialogueId"]));
    }
    if (m.find("EndIndex") != m.end() && !m["EndIndex"].empty()) {
      endIndex = make_shared<long>(boost::any_cast<long>(m["EndIndex"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<long>(boost::any_cast<long>(m["SourceType"]));
    }
    if (m.find("StartIndex") != m.end() && !m["StartIndex"].empty()) {
      startIndex = make_shared<long>(boost::any_cast<long>(m["StartIndex"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<long>(boost::any_cast<long>(m["Role"]));
    }
    if (m.find("DataSetIds") != m.end() && !m["DataSetIds"].empty()) {
      dataSetIds = make_shared<string>(boost::any_cast<string>(m["DataSetIds"]));
    }
  }


  virtual ~ListHotWordsTasksResponseBodyDataHotWordsTaskPoDialogueParam() = default;
};
class ListHotWordsTasksResponseBodyDataHotWordsTaskPo : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<long> status{};
  shared_ptr<long> taskConfigId{};
  shared_ptr<string> message{};
  shared_ptr<string> lastExecutionTime{};
  shared_ptr<long> timeUnit{};
  shared_ptr<ListHotWordsTasksResponseBodyDataHotWordsTaskPoWordsParam> wordsParam{};
  shared_ptr<string> endTime{};
  shared_ptr<long> timeInterval{};
  shared_ptr<string> startTime{};
  shared_ptr<long> instanceStatus{};
  shared_ptr<string> name{};
  shared_ptr<ListHotWordsTasksResponseBodyDataHotWordsTaskPoDialogueParam> dialogueParam{};

  ListHotWordsTasksResponseBodyDataHotWordsTaskPo() {}

  explicit ListHotWordsTasksResponseBodyDataHotWordsTaskPo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskConfigId) {
      res["TaskConfigId"] = boost::any(*taskConfigId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (lastExecutionTime) {
      res["LastExecutionTime"] = boost::any(*lastExecutionTime);
    }
    if (timeUnit) {
      res["TimeUnit"] = boost::any(*timeUnit);
    }
    if (wordsParam) {
      res["WordsParam"] = wordsParam ? boost::any(wordsParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (timeInterval) {
      res["TimeInterval"] = boost::any(*timeInterval);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (dialogueParam) {
      res["DialogueParam"] = dialogueParam ? boost::any(dialogueParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskConfigId") != m.end() && !m["TaskConfigId"].empty()) {
      taskConfigId = make_shared<long>(boost::any_cast<long>(m["TaskConfigId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("LastExecutionTime") != m.end() && !m["LastExecutionTime"].empty()) {
      lastExecutionTime = make_shared<string>(boost::any_cast<string>(m["LastExecutionTime"]));
    }
    if (m.find("TimeUnit") != m.end() && !m["TimeUnit"].empty()) {
      timeUnit = make_shared<long>(boost::any_cast<long>(m["TimeUnit"]));
    }
    if (m.find("WordsParam") != m.end() && !m["WordsParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["WordsParam"].type()) {
        ListHotWordsTasksResponseBodyDataHotWordsTaskPoWordsParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WordsParam"]));
        wordsParam = make_shared<ListHotWordsTasksResponseBodyDataHotWordsTaskPoWordsParam>(model1);
      }
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("TimeInterval") != m.end() && !m["TimeInterval"].empty()) {
      timeInterval = make_shared<long>(boost::any_cast<long>(m["TimeInterval"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<long>(boost::any_cast<long>(m["InstanceStatus"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("DialogueParam") != m.end() && !m["DialogueParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["DialogueParam"].type()) {
        ListHotWordsTasksResponseBodyDataHotWordsTaskPoDialogueParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DialogueParam"]));
        dialogueParam = make_shared<ListHotWordsTasksResponseBodyDataHotWordsTaskPoDialogueParam>(model1);
      }
    }
  }


  virtual ~ListHotWordsTasksResponseBodyDataHotWordsTaskPo() = default;
};
class ListHotWordsTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListHotWordsTasksResponseBodyDataHotWordsTaskPo>> hotWordsTaskPo{};

  ListHotWordsTasksResponseBodyData() {}

  explicit ListHotWordsTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hotWordsTaskPo) {
      vector<boost::any> temp1;
      for(auto item1:*hotWordsTaskPo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HotWordsTaskPo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HotWordsTaskPo") != m.end() && !m["HotWordsTaskPo"].empty()) {
      if (typeid(vector<boost::any>) == m["HotWordsTaskPo"].type()) {
        vector<ListHotWordsTasksResponseBodyDataHotWordsTaskPo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HotWordsTaskPo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotWordsTasksResponseBodyDataHotWordsTaskPo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hotWordsTaskPo = make_shared<vector<ListHotWordsTasksResponseBodyDataHotWordsTaskPo>>(expect1);
      }
    }
  }


  virtual ~ListHotWordsTasksResponseBodyData() = default;
};
class ListHotWordsTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListHotWordsTasksResponseBodyData> data{};
  shared_ptr<long> count{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListHotWordsTasksResponseBody() {}

  explicit ListHotWordsTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListHotWordsTasksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListHotWordsTasksResponseBodyData>(model1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListHotWordsTasksResponseBody() = default;
};
class ListHotWordsTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHotWordsTasksResponseBody> body{};

  ListHotWordsTasksResponse() {}

  explicit ListHotWordsTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListHotWordsTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHotWordsTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListHotWordsTasksResponse() = default;
};
class ListPrecisionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  ListPrecisionTaskRequest() {}

  explicit ListPrecisionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~ListPrecisionTaskRequest() = default;
};
class ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modelName{};
  shared_ptr<string> taskId{};
  shared_ptr<long> modelId{};
  shared_ptr<double> precision{};

  ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision() {}

  explicit ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (precision) {
      res["Precision"] = boost::any(*precision);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
    if (m.find("Precision") != m.end() && !m["Precision"].empty()) {
      precision = make_shared<double>(boost::any_cast<double>(m["Precision"]));
    }
  }


  virtual ~ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision() = default;
};
class ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions : public Darabonba::Model {
public:
  shared_ptr<vector<ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision>> precision{};

  ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions() {}

  explicit ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (precision) {
      vector<boost::any> temp1;
      for(auto item1:*precision){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Precision"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Precision") != m.end() && !m["Precision"].empty()) {
      if (typeid(vector<boost::any>) == m["Precision"].type()) {
        vector<ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Precision"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        precision = make_shared<vector<ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision>>(expect1);
      }
    }
  }


  virtual ~ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions() = default;
};
class ListPrecisionTaskResponseBodyDataPrecisionTask : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> createTime{};
  shared_ptr<long> incorrectWords{};
  shared_ptr<long> dataSetId{};
  shared_ptr<long> verifiedCount{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> source{};
  shared_ptr<ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions> precisions{};
  shared_ptr<long> duration{};
  shared_ptr<string> dataSetName{};
  shared_ptr<string> name{};
  shared_ptr<string> taskId{};

  ListPrecisionTaskResponseBodyDataPrecisionTask() {}

  explicit ListPrecisionTaskResponseBodyDataPrecisionTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (incorrectWords) {
      res["IncorrectWords"] = boost::any(*incorrectWords);
    }
    if (dataSetId) {
      res["DataSetId"] = boost::any(*dataSetId);
    }
    if (verifiedCount) {
      res["VerifiedCount"] = boost::any(*verifiedCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (precisions) {
      res["Precisions"] = precisions ? boost::any(precisions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (dataSetName) {
      res["DataSetName"] = boost::any(*dataSetName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("IncorrectWords") != m.end() && !m["IncorrectWords"].empty()) {
      incorrectWords = make_shared<long>(boost::any_cast<long>(m["IncorrectWords"]));
    }
    if (m.find("DataSetId") != m.end() && !m["DataSetId"].empty()) {
      dataSetId = make_shared<long>(boost::any_cast<long>(m["DataSetId"]));
    }
    if (m.find("VerifiedCount") != m.end() && !m["VerifiedCount"].empty()) {
      verifiedCount = make_shared<long>(boost::any_cast<long>(m["VerifiedCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<long>(boost::any_cast<long>(m["Source"]));
    }
    if (m.find("Precisions") != m.end() && !m["Precisions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Precisions"].type()) {
        ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Precisions"]));
        precisions = make_shared<ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions>(model1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("DataSetName") != m.end() && !m["DataSetName"].empty()) {
      dataSetName = make_shared<string>(boost::any_cast<string>(m["DataSetName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ListPrecisionTaskResponseBodyDataPrecisionTask() = default;
};
class ListPrecisionTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListPrecisionTaskResponseBodyDataPrecisionTask>> precisionTask{};

  ListPrecisionTaskResponseBodyData() {}

  explicit ListPrecisionTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (precisionTask) {
      vector<boost::any> temp1;
      for(auto item1:*precisionTask){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PrecisionTask"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrecisionTask") != m.end() && !m["PrecisionTask"].empty()) {
      if (typeid(vector<boost::any>) == m["PrecisionTask"].type()) {
        vector<ListPrecisionTaskResponseBodyDataPrecisionTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PrecisionTask"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrecisionTaskResponseBodyDataPrecisionTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        precisionTask = make_shared<vector<ListPrecisionTaskResponseBodyDataPrecisionTask>>(expect1);
      }
    }
  }


  virtual ~ListPrecisionTaskResponseBodyData() = default;
};
class ListPrecisionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListPrecisionTaskResponseBodyData> data{};
  shared_ptr<long> count{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListPrecisionTaskResponseBody() {}

  explicit ListPrecisionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListPrecisionTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListPrecisionTaskResponseBodyData>(model1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListPrecisionTaskResponseBody() = default;
};
class ListPrecisionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPrecisionTaskResponseBody> body{};

  ListPrecisionTaskResponse() {}

  explicit ListPrecisionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPrecisionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPrecisionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ListPrecisionTaskResponse() = default;
};
class ListRolesRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  ListRolesRequest() {}

  explicit ListRolesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~ListRolesRequest() = default;
};
class ListRolesResponseBodyDataRole : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};
  shared_ptr<long> level{};

  ListRolesResponseBodyDataRole() {}

  explicit ListRolesResponseBodyDataRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
  }


  virtual ~ListRolesResponseBodyDataRole() = default;
};
class ListRolesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListRolesResponseBodyDataRole>> role{};

  ListRolesResponseBodyData() {}

  explicit ListRolesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      vector<boost::any> temp1;
      for(auto item1:*role){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Role"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(vector<boost::any>) == m["Role"].type()) {
        vector<ListRolesResponseBodyDataRole> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Role"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyDataRole model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        role = make_shared<vector<ListRolesResponseBodyDataRole>>(expect1);
      }
    }
  }


  virtual ~ListRolesResponseBodyData() = default;
};
class ListRolesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListRolesResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListRolesResponseBody() {}

  explicit ListRolesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListRolesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListRolesResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListRolesResponseBody() = default;
};
class ListRolesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRolesResponseBody> body{};

  ListRolesResponse() {}

  explicit ListRolesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRolesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRolesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRolesResponse() = default;
};
class ListRulesRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  ListRulesRequest() {}

  explicit ListRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~ListRulesRequest() = default;
};
class ListRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<long> ruleType{};
  shared_ptr<vector<string>> businessCategoryNameList{};
  shared_ptr<string> createTime{};
  shared_ptr<string> comments{};
  shared_ptr<string> typeName_{};
  shared_ptr<string> name{};
  shared_ptr<long> rid{};

  ListRulesResponseBodyData() {}

  explicit ListRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (businessCategoryNameList) {
      res["BusinessCategoryNameList"] = boost::any(*businessCategoryNameList);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<long>(boost::any_cast<long>(m["RuleType"]));
    }
    if (m.find("BusinessCategoryNameList") != m.end() && !m["BusinessCategoryNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BusinessCategoryNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BusinessCategoryNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      businessCategoryNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
  }


  virtual ~ListRulesResponseBodyData() = default;
};
class ListRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListRulesResponseBodyData>> data{};
  shared_ptr<long> count{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListRulesResponseBody() {}

  explicit ListRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListRulesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRulesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListRulesResponseBodyData>>(expect1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListRulesResponseBody() = default;
};
class ListRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRulesResponseBody> body{};

  ListRulesResponse() {}

  explicit ListRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRulesResponse() = default;
};
class ListSkillGroupConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  ListSkillGroupConfigRequest() {}

  explicit ListSkillGroupConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~ListSkillGroupConfigRequest() = default;
};
class ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo : public Darabonba::Model {
public:
  shared_ptr<string> ruleName{};
  shared_ptr<long> rid{};

  ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo() {}

  explicit ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
  }


  virtual ~ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo() = default;
};
class ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList : public Darabonba::Model {
public:
  shared_ptr<vector<ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo>> ruleNameInfo{};

  ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList() {}

  explicit ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleNameInfo) {
      vector<boost::any> temp1;
      for(auto item1:*ruleNameInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleNameInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleNameInfo") != m.end() && !m["RuleNameInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleNameInfo"].type()) {
        vector<ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleNameInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleNameInfo = make_shared<vector<ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo>>(expect1);
      }
    }
  }


  virtual ~ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList() = default;
};
class ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo : public Darabonba::Model {
public:
  shared_ptr<string> ruleName{};
  shared_ptr<long> rid{};

  ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo() {}

  explicit ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
  }


  virtual ~ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo() = default;
};
class ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList : public Darabonba::Model {
public:
  shared_ptr<vector<ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo>> ruleNameInfo{};

  ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList() {}

  explicit ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleNameInfo) {
      vector<boost::any> temp1;
      for(auto item1:*ruleNameInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleNameInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleNameInfo") != m.end() && !m["RuleNameInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleNameInfo"].type()) {
        vector<ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleNameInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleNameInfo = make_shared<vector<ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo>>(expect1);
      }
    }
  }


  virtual ~ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList() = default;
};
class ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<long> dataType{};
  shared_ptr<long> symbol{};
  shared_ptr<string> name{};

  ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen() {}

  explicit ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (symbol) {
      res["Symbol"] = boost::any(*symbol);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<long>(boost::any_cast<long>(m["DataType"]));
    }
    if (m.find("Symbol") != m.end() && !m["Symbol"].empty()) {
      symbol = make_shared<long>(boost::any_cast<long>(m["Symbol"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen() = default;
};
class ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens : public Darabonba::Model {
public:
  shared_ptr<vector<ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen>> skillGroupScreen{};

  ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens() {}

  explicit ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (skillGroupScreen) {
      vector<boost::any> temp1;
      for(auto item1:*skillGroupScreen){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkillGroupScreen"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SkillGroupScreen") != m.end() && !m["SkillGroupScreen"].empty()) {
      if (typeid(vector<boost::any>) == m["SkillGroupScreen"].type()) {
        vector<ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkillGroupScreen"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skillGroupScreen = make_shared<vector<ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen>>(expect1);
      }
    }
  }


  virtual ~ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens() = default;
};
class ListSkillGroupConfigResponseBodyDataSkillGroupConfig : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<long> type{};
  shared_ptr<ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList> allRuleList{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> allContentQualityCheck{};
  shared_ptr<string> createTime{};
  shared_ptr<string> skillGroupId{};
  shared_ptr<bool> screenSwitch{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> vocabId{};
  shared_ptr<long> skillGroupFrom{};
  shared_ptr<string> rid{};
  shared_ptr<string> skillGroupName{};
  shared_ptr<ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList> ruleList{};
  shared_ptr<string> modelName{};
  shared_ptr<string> allRids{};
  shared_ptr<string> name{};
  shared_ptr<long> modelId{};
  shared_ptr<long> id{};
  shared_ptr<ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens> skillGroupScreens{};
  shared_ptr<long> qualityCheckType{};
  shared_ptr<string> vocabName{};

  ListSkillGroupConfigResponseBodyDataSkillGroupConfig() {}

  explicit ListSkillGroupConfigResponseBodyDataSkillGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (allRuleList) {
      res["AllRuleList"] = allRuleList ? boost::any(allRuleList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (allContentQualityCheck) {
      res["AllContentQualityCheck"] = boost::any(*allContentQualityCheck);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (screenSwitch) {
      res["ScreenSwitch"] = boost::any(*screenSwitch);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (vocabId) {
      res["VocabId"] = boost::any(*vocabId);
    }
    if (skillGroupFrom) {
      res["SkillGroupFrom"] = boost::any(*skillGroupFrom);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (skillGroupName) {
      res["SkillGroupName"] = boost::any(*skillGroupName);
    }
    if (ruleList) {
      res["RuleList"] = ruleList ? boost::any(ruleList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (allRids) {
      res["AllRids"] = boost::any(*allRids);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (skillGroupScreens) {
      res["SkillGroupScreens"] = skillGroupScreens ? boost::any(skillGroupScreens->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (qualityCheckType) {
      res["QualityCheckType"] = boost::any(*qualityCheckType);
    }
    if (vocabName) {
      res["VocabName"] = boost::any(*vocabName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("AllRuleList") != m.end() && !m["AllRuleList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AllRuleList"].type()) {
        ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AllRuleList"]));
        allRuleList = make_shared<ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList>(model1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("AllContentQualityCheck") != m.end() && !m["AllContentQualityCheck"].empty()) {
      allContentQualityCheck = make_shared<long>(boost::any_cast<long>(m["AllContentQualityCheck"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<string>(boost::any_cast<string>(m["SkillGroupId"]));
    }
    if (m.find("ScreenSwitch") != m.end() && !m["ScreenSwitch"].empty()) {
      screenSwitch = make_shared<bool>(boost::any_cast<bool>(m["ScreenSwitch"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("VocabId") != m.end() && !m["VocabId"].empty()) {
      vocabId = make_shared<long>(boost::any_cast<long>(m["VocabId"]));
    }
    if (m.find("SkillGroupFrom") != m.end() && !m["SkillGroupFrom"].empty()) {
      skillGroupFrom = make_shared<long>(boost::any_cast<long>(m["SkillGroupFrom"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
    if (m.find("SkillGroupName") != m.end() && !m["SkillGroupName"].empty()) {
      skillGroupName = make_shared<string>(boost::any_cast<string>(m["SkillGroupName"]));
    }
    if (m.find("RuleList") != m.end() && !m["RuleList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleList"].type()) {
        ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleList"]));
        ruleList = make_shared<ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList>(model1);
      }
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("AllRids") != m.end() && !m["AllRids"].empty()) {
      allRids = make_shared<string>(boost::any_cast<string>(m["AllRids"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("SkillGroupScreens") != m.end() && !m["SkillGroupScreens"].empty()) {
      if (typeid(map<string, boost::any>) == m["SkillGroupScreens"].type()) {
        ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SkillGroupScreens"]));
        skillGroupScreens = make_shared<ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens>(model1);
      }
    }
    if (m.find("QualityCheckType") != m.end() && !m["QualityCheckType"].empty()) {
      qualityCheckType = make_shared<long>(boost::any_cast<long>(m["QualityCheckType"]));
    }
    if (m.find("VocabName") != m.end() && !m["VocabName"].empty()) {
      vocabName = make_shared<string>(boost::any_cast<string>(m["VocabName"]));
    }
  }


  virtual ~ListSkillGroupConfigResponseBodyDataSkillGroupConfig() = default;
};
class ListSkillGroupConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListSkillGroupConfigResponseBodyDataSkillGroupConfig>> skillGroupConfig{};

  ListSkillGroupConfigResponseBodyData() {}

  explicit ListSkillGroupConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (skillGroupConfig) {
      vector<boost::any> temp1;
      for(auto item1:*skillGroupConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkillGroupConfig"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SkillGroupConfig") != m.end() && !m["SkillGroupConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["SkillGroupConfig"].type()) {
        vector<ListSkillGroupConfigResponseBodyDataSkillGroupConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkillGroupConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSkillGroupConfigResponseBodyDataSkillGroupConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skillGroupConfig = make_shared<vector<ListSkillGroupConfigResponseBodyDataSkillGroupConfig>>(expect1);
      }
    }
  }


  virtual ~ListSkillGroupConfigResponseBodyData() = default;
};
class ListSkillGroupConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListSkillGroupConfigResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListSkillGroupConfigResponseBody() {}

  explicit ListSkillGroupConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListSkillGroupConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListSkillGroupConfigResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListSkillGroupConfigResponseBody() = default;
};
class ListSkillGroupConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSkillGroupConfigResponseBody> body{};

  ListSkillGroupConfigResponse() {}

  explicit ListSkillGroupConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSkillGroupConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSkillGroupConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ListSkillGroupConfigResponse() = default;
};
class ListTaskAssignRulesRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  ListTaskAssignRulesRequest() {}

  explicit ListTaskAssignRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~ListTaskAssignRulesRequest() = default;
};
class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> rid{};

  ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo() {}

  explicit ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
  }


  virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo() = default;
};
class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules : public Darabonba::Model {
public:
  shared_ptr<vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo>> ruleBasicInfo{};

  ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules() {}

  explicit ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleBasicInfo) {
      vector<boost::any> temp1;
      for(auto item1:*ruleBasicInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleBasicInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleBasicInfo") != m.end() && !m["RuleBasicInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleBasicInfo"].type()) {
        vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleBasicInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleBasicInfo = make_shared<vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo>>(expect1);
      }
    }
  }


  virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules() = default;
};
class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup : public Darabonba::Model {
public:
  shared_ptr<string> skillId{};
  shared_ptr<string> skillName{};

  ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup() {}

  explicit ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (skillId) {
      res["SkillId"] = boost::any(*skillId);
    }
    if (skillName) {
      res["SkillName"] = boost::any(*skillName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SkillId") != m.end() && !m["SkillId"].empty()) {
      skillId = make_shared<string>(boost::any_cast<string>(m["SkillId"]));
    }
    if (m.find("SkillName") != m.end() && !m["SkillName"].empty()) {
      skillName = make_shared<string>(boost::any_cast<string>(m["SkillName"]));
    }
  }


  virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup() = default;
};
class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups : public Darabonba::Model {
public:
  shared_ptr<vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup>> skillGroup{};

  ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups() {}

  explicit ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (skillGroup) {
      vector<boost::any> temp1;
      for(auto item1:*skillGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkillGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SkillGroup") != m.end() && !m["SkillGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["SkillGroup"].type()) {
        vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkillGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skillGroup = make_shared<vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup>>(expect1);
      }
    }
  }


  virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups() = default;
};
class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> agentName{};

  ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent() {}

  explicit ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (agentName) {
      res["AgentName"] = boost::any(*agentName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["AgentId"]));
    }
    if (m.find("AgentName") != m.end() && !m["AgentName"].empty()) {
      agentName = make_shared<string>(boost::any_cast<string>(m["AgentName"]));
    }
  }


  virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent() = default;
};
class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents : public Darabonba::Model {
public:
  shared_ptr<vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent>> agent{};

  ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents() {}

  explicit ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agent) {
      vector<boost::any> temp1;
      for(auto item1:*agent){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Agent"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Agent") != m.end() && !m["Agent"].empty()) {
      if (typeid(vector<boost::any>) == m["Agent"].type()) {
        vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Agent"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        agent = make_shared<vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent>>(expect1);
      }
    }
  }


  virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents() = default;
};
class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer : public Darabonba::Model {
public:
  shared_ptr<string> reviewerName{};
  shared_ptr<string> reviewerId{};

  ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer() {}

  explicit ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reviewerName) {
      res["ReviewerName"] = boost::any(*reviewerName);
    }
    if (reviewerId) {
      res["ReviewerId"] = boost::any(*reviewerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReviewerName") != m.end() && !m["ReviewerName"].empty()) {
      reviewerName = make_shared<string>(boost::any_cast<string>(m["ReviewerName"]));
    }
    if (m.find("ReviewerId") != m.end() && !m["ReviewerId"].empty()) {
      reviewerId = make_shared<string>(boost::any_cast<string>(m["ReviewerId"]));
    }
  }


  virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer() = default;
};
class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers : public Darabonba::Model {
public:
  shared_ptr<vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer>> reviewer{};

  ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers() {}

  explicit ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reviewer) {
      vector<boost::any> temp1;
      for(auto item1:*reviewer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Reviewer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Reviewer") != m.end() && !m["Reviewer"].empty()) {
      if (typeid(vector<boost::any>) == m["Reviewer"].type()) {
        vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Reviewer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        reviewer = make_shared<vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer>>(expect1);
      }
    }
  }


  virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers() = default;
};
class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo : public Darabonba::Model {
public:
  shared_ptr<string> skillGroupsStr{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> durationMax{};
  shared_ptr<string> createTime{};
  shared_ptr<long> priority{};
  shared_ptr<string> agentsStr{};
  shared_ptr<long> durationMin{};
  shared_ptr<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules> rules{};
  shared_ptr<long> ruleId{};
  shared_ptr<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups> skillGroups{};
  shared_ptr<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents> agents{};
  shared_ptr<long> callType{};
  shared_ptr<long> enabled{};
  shared_ptr<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers> reviewers{};

  ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo() {}

  explicit ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (skillGroupsStr) {
      res["SkillGroupsStr"] = boost::any(*skillGroupsStr);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (durationMax) {
      res["DurationMax"] = boost::any(*durationMax);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (agentsStr) {
      res["AgentsStr"] = boost::any(*agentsStr);
    }
    if (durationMin) {
      res["DurationMin"] = boost::any(*durationMin);
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (skillGroups) {
      res["SkillGroups"] = skillGroups ? boost::any(skillGroups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (agents) {
      res["Agents"] = agents ? boost::any(agents->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (reviewers) {
      res["Reviewers"] = reviewers ? boost::any(reviewers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SkillGroupsStr") != m.end() && !m["SkillGroupsStr"].empty()) {
      skillGroupsStr = make_shared<string>(boost::any_cast<string>(m["SkillGroupsStr"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("DurationMax") != m.end() && !m["DurationMax"].empty()) {
      durationMax = make_shared<long>(boost::any_cast<long>(m["DurationMax"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("AgentsStr") != m.end() && !m["AgentsStr"].empty()) {
      agentsStr = make_shared<string>(boost::any_cast<string>(m["AgentsStr"]));
    }
    if (m.find("DurationMin") != m.end() && !m["DurationMin"].empty()) {
      durationMin = make_shared<long>(boost::any_cast<long>(m["DurationMin"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules>(model1);
      }
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("SkillGroups") != m.end() && !m["SkillGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["SkillGroups"].type()) {
        ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SkillGroups"]));
        skillGroups = make_shared<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups>(model1);
      }
    }
    if (m.find("Agents") != m.end() && !m["Agents"].empty()) {
      if (typeid(map<string, boost::any>) == m["Agents"].type()) {
        ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Agents"]));
        agents = make_shared<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents>(model1);
      }
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<long>(boost::any_cast<long>(m["CallType"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<long>(boost::any_cast<long>(m["Enabled"]));
    }
    if (m.find("Reviewers") != m.end() && !m["Reviewers"].empty()) {
      if (typeid(map<string, boost::any>) == m["Reviewers"].type()) {
        ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Reviewers"]));
        reviewers = make_shared<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers>(model1);
      }
    }
  }


  virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo() = default;
};
class ListTaskAssignRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo>> taskAssignRuleInfo{};

  ListTaskAssignRulesResponseBodyData() {}

  explicit ListTaskAssignRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskAssignRuleInfo) {
      vector<boost::any> temp1;
      for(auto item1:*taskAssignRuleInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskAssignRuleInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskAssignRuleInfo") != m.end() && !m["TaskAssignRuleInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskAssignRuleInfo"].type()) {
        vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskAssignRuleInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskAssignRuleInfo = make_shared<vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo>>(expect1);
      }
    }
  }


  virtual ~ListTaskAssignRulesResponseBodyData() = default;
};
class ListTaskAssignRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListTaskAssignRulesResponseBodyData> data{};
  shared_ptr<long> count{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListTaskAssignRulesResponseBody() {}

  explicit ListTaskAssignRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListTaskAssignRulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListTaskAssignRulesResponseBodyData>(model1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListTaskAssignRulesResponseBody() = default;
};
class ListTaskAssignRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTaskAssignRulesResponseBody> body{};

  ListTaskAssignRulesResponse() {}

  explicit ListTaskAssignRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTaskAssignRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTaskAssignRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTaskAssignRulesResponse() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyDataUser : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> description{};
  shared_ptr<string> createTime{};
  shared_ptr<long> loginUserType{};
  shared_ptr<string> aliUid{};
  shared_ptr<string> roleName{};
  shared_ptr<string> userName{};
  shared_ptr<long> id{};

  ListUsersResponseBodyDataUser() {}

  explicit ListUsersResponseBodyDataUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (loginUserType) {
      res["LoginUserType"] = boost::any(*loginUserType);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("LoginUserType") != m.end() && !m["LoginUserType"].empty()) {
      loginUserType = make_shared<long>(boost::any_cast<long>(m["LoginUserType"]));
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ListUsersResponseBodyDataUser() = default;
};
class ListUsersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListUsersResponseBodyDataUser>> user{};

  ListUsersResponseBodyData() {}

  explicit ListUsersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (user) {
      vector<boost::any> temp1;
      for(auto item1:*user){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["User"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(vector<boost::any>) == m["User"].type()) {
        vector<ListUsersResponseBodyDataUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyDataUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<ListUsersResponseBodyDataUser>>(expect1);
      }
    }
  }


  virtual ~ListUsersResponseBodyData() = default;
};
class ListUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListUsersResponseBodyData> data{};
  shared_ptr<long> count{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListUsersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListUsersResponseBodyData>(model1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListUsersResponseBody() = default;
};
class ListUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListUsersResponseBody> body{};

  ListUsersResponse() {}

  explicit ListUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersResponse() = default;
};
class ListWarningConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  ListWarningConfigRequest() {}

  explicit ListWarningConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~ListWarningConfigRequest() = default;
};
class ListWarningConfigResponseBodyDataWarningConfigInfoRidList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ridList{};

  ListWarningConfigResponseBodyDataWarningConfigInfoRidList() {}

  explicit ListWarningConfigResponseBodyDataWarningConfigInfoRidList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ridList) {
      res["RidList"] = boost::any(*ridList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RidList") != m.end() && !m["RidList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RidList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RidList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ridList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListWarningConfigResponseBodyDataWarningConfigInfoRidList() = default;
};
class ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> url{};

  ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel() {}

  explicit ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel() = default;
};
class ListWarningConfigResponseBodyDataWarningConfigInfoChannels : public Darabonba::Model {
public:
  shared_ptr<vector<ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel>> channel{};

  ListWarningConfigResponseBodyDataWarningConfigInfoChannels() {}

  explicit ListWarningConfigResponseBodyDataWarningConfigInfoChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      vector<boost::any> temp1;
      for(auto item1:*channel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Channel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      if (typeid(vector<boost::any>) == m["Channel"].type()) {
        vector<ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Channel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        channel = make_shared<vector<ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel>>(expect1);
      }
    }
  }


  virtual ~ListWarningConfigResponseBodyDataWarningConfigInfoChannels() = default;
};
class ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule : public Darabonba::Model {
public:
  shared_ptr<string> ruleName{};
  shared_ptr<long> rid{};

  ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule() {}

  explicit ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
  }


  virtual ~ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule() = default;
};
class ListWarningConfigResponseBodyDataWarningConfigInfoRuleList : public Darabonba::Model {
public:
  shared_ptr<vector<ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule>> warningRule{};

  ListWarningConfigResponseBodyDataWarningConfigInfoRuleList() {}

  explicit ListWarningConfigResponseBodyDataWarningConfigInfoRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (warningRule) {
      vector<boost::any> temp1;
      for(auto item1:*warningRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WarningRule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WarningRule") != m.end() && !m["WarningRule"].empty()) {
      if (typeid(vector<boost::any>) == m["WarningRule"].type()) {
        vector<ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WarningRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        warningRule = make_shared<vector<ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule>>(expect1);
      }
    }
  }


  virtual ~ListWarningConfigResponseBodyDataWarningConfigInfoRuleList() = default;
};
class ListWarningConfigResponseBodyDataWarningConfigInfo : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> configName{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> configId{};
  shared_ptr<ListWarningConfigResponseBodyDataWarningConfigInfoRidList> ridList{};
  shared_ptr<string> createTime{};
  shared_ptr<ListWarningConfigResponseBodyDataWarningConfigInfoChannels> channels{};
  shared_ptr<ListWarningConfigResponseBodyDataWarningConfigInfoRuleList> ruleList{};

  ListWarningConfigResponseBodyDataWarningConfigInfo() {}

  explicit ListWarningConfigResponseBodyDataWarningConfigInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (configName) {
      res["ConfigName"] = boost::any(*configName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (ridList) {
      res["RidList"] = ridList ? boost::any(ridList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (channels) {
      res["Channels"] = channels ? boost::any(channels->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ruleList) {
      res["RuleList"] = ruleList ? boost::any(ruleList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ConfigName") != m.end() && !m["ConfigName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["ConfigName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<long>(boost::any_cast<long>(m["ConfigId"]));
    }
    if (m.find("RidList") != m.end() && !m["RidList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RidList"].type()) {
        ListWarningConfigResponseBodyDataWarningConfigInfoRidList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RidList"]));
        ridList = make_shared<ListWarningConfigResponseBodyDataWarningConfigInfoRidList>(model1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Channels") != m.end() && !m["Channels"].empty()) {
      if (typeid(map<string, boost::any>) == m["Channels"].type()) {
        ListWarningConfigResponseBodyDataWarningConfigInfoChannels model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Channels"]));
        channels = make_shared<ListWarningConfigResponseBodyDataWarningConfigInfoChannels>(model1);
      }
    }
    if (m.find("RuleList") != m.end() && !m["RuleList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleList"].type()) {
        ListWarningConfigResponseBodyDataWarningConfigInfoRuleList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleList"]));
        ruleList = make_shared<ListWarningConfigResponseBodyDataWarningConfigInfoRuleList>(model1);
      }
    }
  }


  virtual ~ListWarningConfigResponseBodyDataWarningConfigInfo() = default;
};
class ListWarningConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListWarningConfigResponseBodyDataWarningConfigInfo>> warningConfigInfo{};

  ListWarningConfigResponseBodyData() {}

  explicit ListWarningConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (warningConfigInfo) {
      vector<boost::any> temp1;
      for(auto item1:*warningConfigInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WarningConfigInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WarningConfigInfo") != m.end() && !m["WarningConfigInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["WarningConfigInfo"].type()) {
        vector<ListWarningConfigResponseBodyDataWarningConfigInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WarningConfigInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWarningConfigResponseBodyDataWarningConfigInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        warningConfigInfo = make_shared<vector<ListWarningConfigResponseBodyDataWarningConfigInfo>>(expect1);
      }
    }
  }


  virtual ~ListWarningConfigResponseBodyData() = default;
};
class ListWarningConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListWarningConfigResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListWarningConfigResponseBody() {}

  explicit ListWarningConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListWarningConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListWarningConfigResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListWarningConfigResponseBody() = default;
};
class ListWarningConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListWarningConfigResponseBody> body{};

  ListWarningConfigResponse() {}

  explicit ListWarningConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWarningConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWarningConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ListWarningConfigResponse() = default;
};
class RemoveAndGetTaskRulesRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  RemoveAndGetTaskRulesRequest() {}

  explicit RemoveAndGetTaskRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~RemoveAndGetTaskRulesRequest() = default;
};
class RemoveAndGetTaskRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  RemoveAndGetTaskRulesResponseBody() {}

  explicit RemoveAndGetTaskRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RemoveAndGetTaskRulesResponseBody() = default;
};
class RemoveAndGetTaskRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveAndGetTaskRulesResponseBody> body{};

  RemoveAndGetTaskRulesResponse() {}

  explicit RemoveAndGetTaskRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveAndGetTaskRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveAndGetTaskRulesResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveAndGetTaskRulesResponse() = default;
};
class RestartAsrTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  RestartAsrTaskRequest() {}

  explicit RestartAsrTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~RestartAsrTaskRequest() = default;
};
class RestartAsrTaskResponseBodyDataRestartResult : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};

  RestartAsrTaskResponseBodyDataRestartResult() {}

  explicit RestartAsrTaskResponseBodyDataRestartResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~RestartAsrTaskResponseBodyDataRestartResult() = default;
};
class RestartAsrTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RestartAsrTaskResponseBodyDataRestartResult>> restartResult{};

  RestartAsrTaskResponseBodyData() {}

  explicit RestartAsrTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (restartResult) {
      vector<boost::any> temp1;
      for(auto item1:*restartResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RestartResult"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RestartResult") != m.end() && !m["RestartResult"].empty()) {
      if (typeid(vector<boost::any>) == m["RestartResult"].type()) {
        vector<RestartAsrTaskResponseBodyDataRestartResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RestartResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RestartAsrTaskResponseBodyDataRestartResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        restartResult = make_shared<vector<RestartAsrTaskResponseBodyDataRestartResult>>(expect1);
      }
    }
  }


  virtual ~RestartAsrTaskResponseBodyData() = default;
};
class RestartAsrTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<RestartAsrTaskResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  RestartAsrTaskResponseBody() {}

  explicit RestartAsrTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RestartAsrTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RestartAsrTaskResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RestartAsrTaskResponseBody() = default;
};
class RestartAsrTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RestartAsrTaskResponseBody> body{};

  RestartAsrTaskResponse() {}

  explicit RestartAsrTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartAsrTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartAsrTaskResponseBody>(model1);
      }
    }
  }


  virtual ~RestartAsrTaskResponse() = default;
};
class ReviewSingleResultByIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  ReviewSingleResultByIdRequest() {}

  explicit ReviewSingleResultByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~ReviewSingleResultByIdRequest() = default;
};
class ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase : public Darabonba::Model {
public:
  shared_ptr<string> words{};
  shared_ptr<long> begin{};
  shared_ptr<string> identity{};
  shared_ptr<long> pid{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<string> role{};

  ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase() {}

  explicit ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      res["Words"] = boost::any(*words);
    }
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase() = default;
};
class ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<string> val{};
  shared_ptr<string> tid{};
  shared_ptr<long> pid{};
  shared_ptr<long> to{};

  ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord() {}

  explicit ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (val) {
      res["Val"] = boost::any(*val);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("Val") != m.end() && !m["Val"].empty()) {
      val = make_shared<string>(boost::any_cast<string>(m["Val"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord() = default;
};
class ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords : public Darabonba::Model {
public:
  shared_ptr<vector<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord>> keyWord{};

  ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords() {}

  explicit ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyWord) {
      vector<boost::any> temp1;
      for(auto item1:*keyWord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyWord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyWord"].type()) {
        vector<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyWord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyWord = make_shared<vector<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord>>(expect1);
      }
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords() = default;
};
class ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cid{};

  ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid() {}

  explicit ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Cid"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Cid"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cid = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid() = default;
};
class ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo : public Darabonba::Model {
public:
  shared_ptr<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase> phrase{};
  shared_ptr<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords> keyWords{};
  shared_ptr<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid> cid{};

  ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo() {}

  explicit ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phrase) {
      res["Phrase"] = phrase ? boost::any(phrase->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keyWords) {
      res["KeyWords"] = keyWords ? boost::any(keyWords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cid) {
      res["Cid"] = cid ? boost::any(cid->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Phrase") != m.end() && !m["Phrase"].empty()) {
      if (typeid(map<string, boost::any>) == m["Phrase"].type()) {
        ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Phrase"]));
        phrase = make_shared<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase>(model1);
      }
    }
    if (m.find("KeyWords") != m.end() && !m["KeyWords"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyWords"].type()) {
        ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyWords"]));
        keyWords = make_shared<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords>(model1);
      }
    }
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cid"].type()) {
        ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cid"]));
        cid = make_shared<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid>(model1);
      }
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo() = default;
};
class ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo>> conditionHitInfo{};

  ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList() {}

  explicit ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionHitInfo) {
      vector<boost::any> temp1;
      for(auto item1:*conditionHitInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConditionHitInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionHitInfo") != m.end() && !m["ConditionHitInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ConditionHitInfo"].type()) {
        vector<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConditionHitInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditionHitInfo = make_shared<vector<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo>>(expect1);
      }
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList() = default;
};
class ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo : public Darabonba::Model {
public:
  shared_ptr<string> hitId{};
  shared_ptr<long> rid{};

  ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo() {}

  explicit ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitId) {
      res["HitId"] = boost::any(*hitId);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitId") != m.end() && !m["HitId"].empty()) {
      hitId = make_shared<string>(boost::any_cast<string>(m["HitId"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo() = default;
};
class ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo : public Darabonba::Model {
public:
  shared_ptr<long> ruleScoreType{};
  shared_ptr<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList> conditionHitInfoList{};
  shared_ptr<long> ruleType{};
  shared_ptr<long> autoReview{};
  shared_ptr<long> scoreSubId{};
  shared_ptr<string> comments{};
  shared_ptr<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo> reviewInfo{};
  shared_ptr<long> totalNumber{};
  shared_ptr<long> scoreId{};
  shared_ptr<string> ruleName{};
  shared_ptr<long> rid{};

  ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo() {}

  explicit ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleScoreType) {
      res["RuleScoreType"] = boost::any(*ruleScoreType);
    }
    if (conditionHitInfoList) {
      res["ConditionHitInfoList"] = conditionHitInfoList ? boost::any(conditionHitInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (autoReview) {
      res["AutoReview"] = boost::any(*autoReview);
    }
    if (scoreSubId) {
      res["ScoreSubId"] = boost::any(*scoreSubId);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (reviewInfo) {
      res["ReviewInfo"] = reviewInfo ? boost::any(reviewInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalNumber) {
      res["TotalNumber"] = boost::any(*totalNumber);
    }
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleScoreType") != m.end() && !m["RuleScoreType"].empty()) {
      ruleScoreType = make_shared<long>(boost::any_cast<long>(m["RuleScoreType"]));
    }
    if (m.find("ConditionHitInfoList") != m.end() && !m["ConditionHitInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConditionHitInfoList"].type()) {
        ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConditionHitInfoList"]));
        conditionHitInfoList = make_shared<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList>(model1);
      }
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<long>(boost::any_cast<long>(m["RuleType"]));
    }
    if (m.find("AutoReview") != m.end() && !m["AutoReview"].empty()) {
      autoReview = make_shared<long>(boost::any_cast<long>(m["AutoReview"]));
    }
    if (m.find("ScoreSubId") != m.end() && !m["ScoreSubId"].empty()) {
      scoreSubId = make_shared<long>(boost::any_cast<long>(m["ScoreSubId"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("ReviewInfo") != m.end() && !m["ReviewInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReviewInfo"].type()) {
        ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReviewInfo"]));
        reviewInfo = make_shared<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo>(model1);
      }
    }
    if (m.find("TotalNumber") != m.end() && !m["TotalNumber"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["TotalNumber"]));
    }
    if (m.find("ScoreId") != m.end() && !m["ScoreId"].empty()) {
      scoreId = make_shared<long>(boost::any_cast<long>(m["ScoreId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo() = default;
};
class ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo>> hitRuleReviewInfo{};

  ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoList() {}

  explicit ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitRuleReviewInfo) {
      vector<boost::any> temp1;
      for(auto item1:*hitRuleReviewInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitRuleReviewInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitRuleReviewInfo") != m.end() && !m["HitRuleReviewInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["HitRuleReviewInfo"].type()) {
        vector<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HitRuleReviewInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hitRuleReviewInfo = make_shared<vector<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo>>(expect1);
      }
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoList() = default;
};
class ReviewSingleResultByIdResponseBodyDataManualScoreMappingList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> manualScoreMappingList{};

  ReviewSingleResultByIdResponseBodyDataManualScoreMappingList() {}

  explicit ReviewSingleResultByIdResponseBodyDataManualScoreMappingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (manualScoreMappingList) {
      res["ManualScoreMappingList"] = boost::any(*manualScoreMappingList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ManualScoreMappingList") != m.end() && !m["ManualScoreMappingList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ManualScoreMappingList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ManualScoreMappingList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      manualScoreMappingList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataManualScoreMappingList() = default;
};
class ReviewSingleResultByIdResponseBodyDataDialoguesDialogue : public Darabonba::Model {
public:
  shared_ptr<string> words{};
  shared_ptr<string> identity{};
  shared_ptr<long> begin{};
  shared_ptr<long> beginTime{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> role{};
  shared_ptr<long> silenceDuration{};
  shared_ptr<string> hourMinSec{};

  ReviewSingleResultByIdResponseBodyDataDialoguesDialogue() {}

  explicit ReviewSingleResultByIdResponseBodyDataDialoguesDialogue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      res["Words"] = boost::any(*words);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    if (hourMinSec) {
      res["HourMinSec"] = boost::any(*hourMinSec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<long>(boost::any_cast<long>(m["SilenceDuration"]));
    }
    if (m.find("HourMinSec") != m.end() && !m["HourMinSec"].empty()) {
      hourMinSec = make_shared<string>(boost::any_cast<string>(m["HourMinSec"]));
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataDialoguesDialogue() = default;
};
class ReviewSingleResultByIdResponseBodyDataDialogues : public Darabonba::Model {
public:
  shared_ptr<vector<ReviewSingleResultByIdResponseBodyDataDialoguesDialogue>> dialogue{};

  ReviewSingleResultByIdResponseBodyDataDialogues() {}

  explicit ReviewSingleResultByIdResponseBodyDataDialogues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogue) {
      vector<boost::any> temp1;
      for(auto item1:*dialogue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dialogue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dialogue") != m.end() && !m["Dialogue"].empty()) {
      if (typeid(vector<boost::any>) == m["Dialogue"].type()) {
        vector<ReviewSingleResultByIdResponseBodyDataDialoguesDialogue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dialogue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReviewSingleResultByIdResponseBodyDataDialoguesDialogue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogue = make_shared<vector<ReviewSingleResultByIdResponseBodyDataDialoguesDialogue>>(expect1);
      }
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataDialogues() = default;
};
class ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam : public Darabonba::Model {
public:
  shared_ptr<string> scoreSubName{};
  shared_ptr<long> scoreNum{};
  shared_ptr<long> scoreSubId{};
  shared_ptr<long> scoreType{};
  shared_ptr<long> hit{};

  ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam() {}

  explicit ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreSubName) {
      res["ScoreSubName"] = boost::any(*scoreSubName);
    }
    if (scoreNum) {
      res["ScoreNum"] = boost::any(*scoreNum);
    }
    if (scoreSubId) {
      res["ScoreSubId"] = boost::any(*scoreSubId);
    }
    if (scoreType) {
      res["ScoreType"] = boost::any(*scoreType);
    }
    if (hit) {
      res["Hit"] = boost::any(*hit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreSubName") != m.end() && !m["ScoreSubName"].empty()) {
      scoreSubName = make_shared<string>(boost::any_cast<string>(m["ScoreSubName"]));
    }
    if (m.find("ScoreNum") != m.end() && !m["ScoreNum"].empty()) {
      scoreNum = make_shared<long>(boost::any_cast<long>(m["ScoreNum"]));
    }
    if (m.find("ScoreSubId") != m.end() && !m["ScoreSubId"].empty()) {
      scoreSubId = make_shared<long>(boost::any_cast<long>(m["ScoreSubId"]));
    }
    if (m.find("ScoreType") != m.end() && !m["ScoreType"].empty()) {
      scoreType = make_shared<long>(boost::any_cast<long>(m["ScoreType"]));
    }
    if (m.find("Hit") != m.end() && !m["Hit"].empty()) {
      hit = make_shared<long>(boost::any_cast<long>(m["Hit"]));
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam() = default;
};
class ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePoScoreInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam>> scoreParam{};

  ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePoScoreInfos() {}

  explicit ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePoScoreInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreParam) {
      vector<boost::any> temp1;
      for(auto item1:*scoreParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScoreParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreParam") != m.end() && !m["ScoreParam"].empty()) {
      if (typeid(vector<boost::any>) == m["ScoreParam"].type()) {
        vector<ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScoreParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scoreParam = make_shared<vector<ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePoScoreInfosScoreParam>>(expect1);
      }
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePoScoreInfos() = default;
};
class ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePo : public Darabonba::Model {
public:
  shared_ptr<ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePoScoreInfos> scoreInfos{};
  shared_ptr<string> scoreName{};
  shared_ptr<long> scoreId{};

  ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePo() {}

  explicit ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreInfos) {
      res["ScoreInfos"] = scoreInfos ? boost::any(scoreInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scoreName) {
      res["ScoreName"] = boost::any(*scoreName);
    }
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreInfos") != m.end() && !m["ScoreInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScoreInfos"].type()) {
        ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePoScoreInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScoreInfos"]));
        scoreInfos = make_shared<ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePoScoreInfos>(model1);
      }
    }
    if (m.find("ScoreName") != m.end() && !m["ScoreName"].empty()) {
      scoreName = make_shared<string>(boost::any_cast<string>(m["ScoreName"]));
    }
    if (m.find("ScoreId") != m.end() && !m["ScoreId"].empty()) {
      scoreId = make_shared<long>(boost::any_cast<long>(m["ScoreId"]));
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePo() = default;
};
class ReviewSingleResultByIdResponseBodyDataHandScoreInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePo>> scorePo{};

  ReviewSingleResultByIdResponseBodyDataHandScoreInfoList() {}

  explicit ReviewSingleResultByIdResponseBodyDataHandScoreInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scorePo) {
      vector<boost::any> temp1;
      for(auto item1:*scorePo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScorePo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScorePo") != m.end() && !m["ScorePo"].empty()) {
      if (typeid(vector<boost::any>) == m["ScorePo"].type()) {
        vector<ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScorePo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scorePo = make_shared<vector<ReviewSingleResultByIdResponseBodyDataHandScoreInfoListScorePo>>(expect1);
      }
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyDataHandScoreInfoList() = default;
};
class ReviewSingleResultByIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> audioURL{};
  shared_ptr<long> hitNumber{};
  shared_ptr<string> nextVid{};
  shared_ptr<string> preVid{};
  shared_ptr<bool> isAudio{};
  shared_ptr<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoList> hitRuleReviewInfoList{};
  shared_ptr<bool> audio{};
  shared_ptr<long> asrWordsCount{};
  shared_ptr<long> totalScore{};
  shared_ptr<long> businessType{};
  shared_ptr<ReviewSingleResultByIdResponseBodyDataManualScoreMappingList> manualScoreMappingList{};
  shared_ptr<string> fileMergeName{};
  shared_ptr<bool> isDeleted{};
  shared_ptr<ReviewSingleResultByIdResponseBodyDataDialogues> dialogues{};
  shared_ptr<bool> deleted{};
  shared_ptr<ReviewSingleResultByIdResponseBodyDataHandScoreInfoList> handScoreInfoList{};
  shared_ptr<long> vid{};
  shared_ptr<long> reviewNumber{};

  ReviewSingleResultByIdResponseBodyData() {}

  explicit ReviewSingleResultByIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioURL) {
      res["AudioURL"] = boost::any(*audioURL);
    }
    if (hitNumber) {
      res["HitNumber"] = boost::any(*hitNumber);
    }
    if (nextVid) {
      res["NextVid"] = boost::any(*nextVid);
    }
    if (preVid) {
      res["PreVid"] = boost::any(*preVid);
    }
    if (isAudio) {
      res["IsAudio"] = boost::any(*isAudio);
    }
    if (hitRuleReviewInfoList) {
      res["HitRuleReviewInfoList"] = hitRuleReviewInfoList ? boost::any(hitRuleReviewInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (audio) {
      res["Audio"] = boost::any(*audio);
    }
    if (asrWordsCount) {
      res["AsrWordsCount"] = boost::any(*asrWordsCount);
    }
    if (totalScore) {
      res["TotalScore"] = boost::any(*totalScore);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (manualScoreMappingList) {
      res["ManualScoreMappingList"] = manualScoreMappingList ? boost::any(manualScoreMappingList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileMergeName) {
      res["FileMergeName"] = boost::any(*fileMergeName);
    }
    if (isDeleted) {
      res["IsDeleted"] = boost::any(*isDeleted);
    }
    if (dialogues) {
      res["Dialogues"] = dialogues ? boost::any(dialogues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (handScoreInfoList) {
      res["HandScoreInfoList"] = handScoreInfoList ? boost::any(handScoreInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vid) {
      res["Vid"] = boost::any(*vid);
    }
    if (reviewNumber) {
      res["ReviewNumber"] = boost::any(*reviewNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioURL") != m.end() && !m["AudioURL"].empty()) {
      audioURL = make_shared<string>(boost::any_cast<string>(m["AudioURL"]));
    }
    if (m.find("HitNumber") != m.end() && !m["HitNumber"].empty()) {
      hitNumber = make_shared<long>(boost::any_cast<long>(m["HitNumber"]));
    }
    if (m.find("NextVid") != m.end() && !m["NextVid"].empty()) {
      nextVid = make_shared<string>(boost::any_cast<string>(m["NextVid"]));
    }
    if (m.find("PreVid") != m.end() && !m["PreVid"].empty()) {
      preVid = make_shared<string>(boost::any_cast<string>(m["PreVid"]));
    }
    if (m.find("IsAudio") != m.end() && !m["IsAudio"].empty()) {
      isAudio = make_shared<bool>(boost::any_cast<bool>(m["IsAudio"]));
    }
    if (m.find("HitRuleReviewInfoList") != m.end() && !m["HitRuleReviewInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["HitRuleReviewInfoList"].type()) {
        ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HitRuleReviewInfoList"]));
        hitRuleReviewInfoList = make_shared<ReviewSingleResultByIdResponseBodyDataHitRuleReviewInfoList>(model1);
      }
    }
    if (m.find("Audio") != m.end() && !m["Audio"].empty()) {
      audio = make_shared<bool>(boost::any_cast<bool>(m["Audio"]));
    }
    if (m.find("AsrWordsCount") != m.end() && !m["AsrWordsCount"].empty()) {
      asrWordsCount = make_shared<long>(boost::any_cast<long>(m["AsrWordsCount"]));
    }
    if (m.find("TotalScore") != m.end() && !m["TotalScore"].empty()) {
      totalScore = make_shared<long>(boost::any_cast<long>(m["TotalScore"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<long>(boost::any_cast<long>(m["BusinessType"]));
    }
    if (m.find("ManualScoreMappingList") != m.end() && !m["ManualScoreMappingList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ManualScoreMappingList"].type()) {
        ReviewSingleResultByIdResponseBodyDataManualScoreMappingList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ManualScoreMappingList"]));
        manualScoreMappingList = make_shared<ReviewSingleResultByIdResponseBodyDataManualScoreMappingList>(model1);
      }
    }
    if (m.find("FileMergeName") != m.end() && !m["FileMergeName"].empty()) {
      fileMergeName = make_shared<string>(boost::any_cast<string>(m["FileMergeName"]));
    }
    if (m.find("IsDeleted") != m.end() && !m["IsDeleted"].empty()) {
      isDeleted = make_shared<bool>(boost::any_cast<bool>(m["IsDeleted"]));
    }
    if (m.find("Dialogues") != m.end() && !m["Dialogues"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dialogues"].type()) {
        ReviewSingleResultByIdResponseBodyDataDialogues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dialogues"]));
        dialogues = make_shared<ReviewSingleResultByIdResponseBodyDataDialogues>(model1);
      }
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("HandScoreInfoList") != m.end() && !m["HandScoreInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["HandScoreInfoList"].type()) {
        ReviewSingleResultByIdResponseBodyDataHandScoreInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HandScoreInfoList"]));
        handScoreInfoList = make_shared<ReviewSingleResultByIdResponseBodyDataHandScoreInfoList>(model1);
      }
    }
    if (m.find("Vid") != m.end() && !m["Vid"].empty()) {
      vid = make_shared<long>(boost::any_cast<long>(m["Vid"]));
    }
    if (m.find("ReviewNumber") != m.end() && !m["ReviewNumber"].empty()) {
      reviewNumber = make_shared<long>(boost::any_cast<long>(m["ReviewNumber"]));
    }
  }


  virtual ~ReviewSingleResultByIdResponseBodyData() = default;
};
class ReviewSingleResultByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ReviewSingleResultByIdResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ReviewSingleResultByIdResponseBody() {}

  explicit ReviewSingleResultByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ReviewSingleResultByIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ReviewSingleResultByIdResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReviewSingleResultByIdResponseBody() = default;
};
class ReviewSingleResultByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReviewSingleResultByIdResponseBody> body{};

  ReviewSingleResultByIdResponse() {}

  explicit ReviewSingleResultByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReviewSingleResultByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReviewSingleResultByIdResponseBody>(model1);
      }
    }
  }


  virtual ~ReviewSingleResultByIdResponse() = default;
};
class SaveConfigDataSetRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  SaveConfigDataSetRequest() {}

  explicit SaveConfigDataSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~SaveConfigDataSetRequest() = default;
};
class SaveConfigDataSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SaveConfigDataSetResponseBody() {}

  explicit SaveConfigDataSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SaveConfigDataSetResponseBody() = default;
};
class SaveConfigDataSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SaveConfigDataSetResponseBody> body{};

  SaveConfigDataSetResponse() {}

  explicit SaveConfigDataSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveConfigDataSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveConfigDataSetResponseBody>(model1);
      }
    }
  }


  virtual ~SaveConfigDataSetResponse() = default;
};
class SubmitComplaintRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  SubmitComplaintRequest() {}

  explicit SubmitComplaintRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~SubmitComplaintRequest() = default;
};
class SubmitComplaintResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SubmitComplaintResponseBody() {}

  explicit SubmitComplaintResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SubmitComplaintResponseBody() = default;
};
class SubmitComplaintResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitComplaintResponseBody> body{};

  SubmitComplaintResponse() {}

  explicit SubmitComplaintResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitComplaintResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitComplaintResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitComplaintResponse() = default;
};
class SubmitCustomizationConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  SubmitCustomizationConfigRequest() {}

  explicit SubmitCustomizationConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~SubmitCustomizationConfigRequest() = default;
};
class SubmitCustomizationConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> modelStatus{};
  shared_ptr<string> modelName{};
  shared_ptr<long> modelId{};
  shared_ptr<string> modeCustomizationId{};

  SubmitCustomizationConfigResponseBodyData() {}

  explicit SubmitCustomizationConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modeCustomizationId) {
      res["ModeCustomizationId"] = boost::any(*modeCustomizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<long>(boost::any_cast<long>(m["ModelStatus"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
    if (m.find("ModeCustomizationId") != m.end() && !m["ModeCustomizationId"].empty()) {
      modeCustomizationId = make_shared<string>(boost::any_cast<string>(m["ModeCustomizationId"]));
    }
  }


  virtual ~SubmitCustomizationConfigResponseBodyData() = default;
};
class SubmitCustomizationConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<SubmitCustomizationConfigResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SubmitCustomizationConfigResponseBody() {}

  explicit SubmitCustomizationConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitCustomizationConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitCustomizationConfigResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SubmitCustomizationConfigResponseBody() = default;
};
class SubmitCustomizationConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitCustomizationConfigResponseBody> body{};

  SubmitCustomizationConfigResponse() {}

  explicit SubmitCustomizationConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitCustomizationConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitCustomizationConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitCustomizationConfigResponse() = default;
};
class SubmitPrecisionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  SubmitPrecisionTaskRequest() {}

  explicit SubmitPrecisionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~SubmitPrecisionTaskRequest() = default;
};
class SubmitPrecisionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SubmitPrecisionTaskResponseBody() {}

  explicit SubmitPrecisionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SubmitPrecisionTaskResponseBody() = default;
};
class SubmitPrecisionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitPrecisionTaskResponseBody> body{};

  SubmitPrecisionTaskResponse() {}

  explicit SubmitPrecisionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitPrecisionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitPrecisionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitPrecisionTaskResponse() = default;
};
class SubmitQualityCheckTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  SubmitQualityCheckTaskRequest() {}

  explicit SubmitQualityCheckTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~SubmitQualityCheckTaskRequest() = default;
};
class SubmitQualityCheckTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SubmitQualityCheckTaskResponseBody() {}

  explicit SubmitQualityCheckTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SubmitQualityCheckTaskResponseBody() = default;
};
class SubmitQualityCheckTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitQualityCheckTaskResponseBody> body{};

  SubmitQualityCheckTaskResponse() {}

  explicit SubmitQualityCheckTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitQualityCheckTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitQualityCheckTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitQualityCheckTaskResponse() = default;
};
class SubmitReviewInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  SubmitReviewInfoRequest() {}

  explicit SubmitReviewInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~SubmitReviewInfoRequest() = default;
};
class SubmitReviewInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SubmitReviewInfoResponseBody() {}

  explicit SubmitReviewInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SubmitReviewInfoResponseBody() = default;
};
class SubmitReviewInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitReviewInfoResponseBody> body{};

  SubmitReviewInfoResponse() {}

  explicit SubmitReviewInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitReviewInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitReviewInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitReviewInfoResponse() = default;
};
class SyncQualityCheckRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  SyncQualityCheckRequest() {}

  explicit SyncQualityCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~SyncQualityCheckRequest() = default;
};
class SyncQualityCheckResponseBodyDataRulesHitPhrase : public Darabonba::Model {
public:
  shared_ptr<string> words{};
  shared_ptr<string> identity{};
  shared_ptr<long> begin{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> role{};
  shared_ptr<long> silenceDuration{};

  SyncQualityCheckResponseBodyDataRulesHitPhrase() {}

  explicit SyncQualityCheckResponseBodyDataRulesHitPhrase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      res["Words"] = boost::any(*words);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<long>(boost::any_cast<long>(m["SilenceDuration"]));
    }
  }


  virtual ~SyncQualityCheckResponseBodyDataRulesHitPhrase() = default;
};
class SyncQualityCheckResponseBodyDataRulesHitHitKeyWords : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<string> val{};
  shared_ptr<long> cid{};
  shared_ptr<long> pid{};
  shared_ptr<long> to{};

  SyncQualityCheckResponseBodyDataRulesHitHitKeyWords() {}

  explicit SyncQualityCheckResponseBodyDataRulesHitHitKeyWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (val) {
      res["Val"] = boost::any(*val);
    }
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("Val") != m.end() && !m["Val"].empty()) {
      val = make_shared<string>(boost::any_cast<string>(m["Val"]));
    }
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      cid = make_shared<long>(boost::any_cast<long>(m["Cid"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~SyncQualityCheckResponseBodyDataRulesHitHitKeyWords() = default;
};
class SyncQualityCheckResponseBodyDataRulesHit : public Darabonba::Model {
public:
  shared_ptr<SyncQualityCheckResponseBodyDataRulesHitPhrase> phrase{};
  shared_ptr<vector<SyncQualityCheckResponseBodyDataRulesHitHitKeyWords>> hitKeyWords{};

  SyncQualityCheckResponseBodyDataRulesHit() {}

  explicit SyncQualityCheckResponseBodyDataRulesHit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phrase) {
      res["Phrase"] = phrase ? boost::any(phrase->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hitKeyWords) {
      vector<boost::any> temp1;
      for(auto item1:*hitKeyWords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitKeyWords"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Phrase") != m.end() && !m["Phrase"].empty()) {
      if (typeid(map<string, boost::any>) == m["Phrase"].type()) {
        SyncQualityCheckResponseBodyDataRulesHitPhrase model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Phrase"]));
        phrase = make_shared<SyncQualityCheckResponseBodyDataRulesHitPhrase>(model1);
      }
    }
    if (m.find("HitKeyWords") != m.end() && !m["HitKeyWords"].empty()) {
      if (typeid(vector<boost::any>) == m["HitKeyWords"].type()) {
        vector<SyncQualityCheckResponseBodyDataRulesHitHitKeyWords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HitKeyWords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SyncQualityCheckResponseBodyDataRulesHitHitKeyWords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hitKeyWords = make_shared<vector<SyncQualityCheckResponseBodyDataRulesHitHitKeyWords>>(expect1);
      }
    }
  }


  virtual ~SyncQualityCheckResponseBodyDataRulesHit() = default;
};
class SyncQualityCheckResponseBodyDataRules : public Darabonba::Model {
public:
  shared_ptr<vector<SyncQualityCheckResponseBodyDataRulesHit>> hit{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> rid{};

  SyncQualityCheckResponseBodyDataRules() {}

  explicit SyncQualityCheckResponseBodyDataRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hit) {
      vector<boost::any> temp1;
      for(auto item1:*hit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hit"] = boost::any(temp1);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hit") != m.end() && !m["Hit"].empty()) {
      if (typeid(vector<boost::any>) == m["Hit"].type()) {
        vector<SyncQualityCheckResponseBodyDataRulesHit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SyncQualityCheckResponseBodyDataRulesHit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hit = make_shared<vector<SyncQualityCheckResponseBodyDataRulesHit>>(expect1);
      }
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
  }


  virtual ~SyncQualityCheckResponseBodyDataRules() = default;
};
class SyncQualityCheckResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> tid{};
  shared_ptr<long> beginTime{};
  shared_ptr<long> score{};
  shared_ptr<string> taskId{};
  shared_ptr<vector<SyncQualityCheckResponseBodyDataRules>> rules{};

  SyncQualityCheckResponseBodyData() {}

  explicit SyncQualityCheckResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<SyncQualityCheckResponseBodyDataRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SyncQualityCheckResponseBodyDataRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<SyncQualityCheckResponseBodyDataRules>>(expect1);
      }
    }
  }


  virtual ~SyncQualityCheckResponseBodyData() = default;
};
class SyncQualityCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<SyncQualityCheckResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SyncQualityCheckResponseBody() {}

  explicit SyncQualityCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SyncQualityCheckResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SyncQualityCheckResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SyncQualityCheckResponseBody() = default;
};
class SyncQualityCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SyncQualityCheckResponseBody> body{};

  SyncQualityCheckResponse() {}

  explicit SyncQualityCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncQualityCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncQualityCheckResponseBody>(model1);
      }
    }
  }


  virtual ~SyncQualityCheckResponse() = default;
};
class TestRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  TestRuleRequest() {}

  explicit TestRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~TestRuleRequest() = default;
};
class TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase : public Darabonba::Model {
public:
  shared_ptr<string> words{};
  shared_ptr<long> begin{};
  shared_ptr<string> identity{};
  shared_ptr<long> pid{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<string> role{};

  TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase() {}

  explicit TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      res["Words"] = boost::any(*words);
    }
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase() = default;
};
class TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<string> val{};
  shared_ptr<string> tid{};
  shared_ptr<long> pid{};
  shared_ptr<long> to{};

  TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord() {}

  explicit TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (val) {
      res["Val"] = boost::any(*val);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("Val") != m.end() && !m["Val"].empty()) {
      val = make_shared<string>(boost::any_cast<string>(m["Val"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord() = default;
};
class TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords : public Darabonba::Model {
public:
  shared_ptr<vector<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord>> keyWord{};

  TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords() {}

  explicit TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyWord) {
      vector<boost::any> temp1;
      for(auto item1:*keyWord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyWord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyWord"].type()) {
        vector<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyWord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyWord = make_shared<vector<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord>>(expect1);
      }
    }
  }


  virtual ~TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords() = default;
};
class TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cid{};

  TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid() {}

  explicit TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cid) {
      res["cid"] = boost::any(*cid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cid") != m.end() && !m["cid"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["cid"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["cid"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cid = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid() = default;
};
class TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo : public Darabonba::Model {
public:
  shared_ptr<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase> phrase{};
  shared_ptr<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords> keyWords{};
  shared_ptr<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid> cid{};

  TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo() {}

  explicit TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phrase) {
      res["Phrase"] = phrase ? boost::any(phrase->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keyWords) {
      res["KeyWords"] = keyWords ? boost::any(keyWords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cid) {
      res["Cid"] = cid ? boost::any(cid->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Phrase") != m.end() && !m["Phrase"].empty()) {
      if (typeid(map<string, boost::any>) == m["Phrase"].type()) {
        TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Phrase"]));
        phrase = make_shared<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase>(model1);
      }
    }
    if (m.find("KeyWords") != m.end() && !m["KeyWords"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyWords"].type()) {
        TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyWords"]));
        keyWords = make_shared<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords>(model1);
      }
    }
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cid"].type()) {
        TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cid"]));
        cid = make_shared<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid>(model1);
      }
    }
  }


  virtual ~TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo() = default;
};
class TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo>> conditionHitInfo{};

  TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList() {}

  explicit TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionHitInfo) {
      vector<boost::any> temp1;
      for(auto item1:*conditionHitInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConditionHitInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionHitInfo") != m.end() && !m["ConditionHitInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ConditionHitInfo"].type()) {
        vector<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConditionHitInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditionHitInfo = make_shared<vector<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo>>(expect1);
      }
    }
  }


  virtual ~TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList() = default;
};
class TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo : public Darabonba::Model {
public:
  shared_ptr<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList> conditionHitInfoList{};
  shared_ptr<long> rid{};

  TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo() {}

  explicit TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionHitInfoList) {
      res["ConditionHitInfoList"] = conditionHitInfoList ? boost::any(conditionHitInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionHitInfoList") != m.end() && !m["ConditionHitInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConditionHitInfoList"].type()) {
        TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConditionHitInfoList"]));
        conditionHitInfoList = make_shared<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList>(model1);
      }
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
  }


  virtual ~TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo() = default;
};
class TestRuleResponseBodyDataHitRuleReviewInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo>> hitRuleReviewInfo{};

  TestRuleResponseBodyDataHitRuleReviewInfoList() {}

  explicit TestRuleResponseBodyDataHitRuleReviewInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitRuleReviewInfo) {
      vector<boost::any> temp1;
      for(auto item1:*hitRuleReviewInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitRuleReviewInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitRuleReviewInfo") != m.end() && !m["HitRuleReviewInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["HitRuleReviewInfo"].type()) {
        vector<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HitRuleReviewInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hitRuleReviewInfo = make_shared<vector<TestRuleResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo>>(expect1);
      }
    }
  }


  virtual ~TestRuleResponseBodyDataHitRuleReviewInfoList() = default;
};
class TestRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<TestRuleResponseBodyDataHitRuleReviewInfoList> hitRuleReviewInfoList{};
  shared_ptr<bool> poc{};

  TestRuleResponseBodyData() {}

  explicit TestRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitRuleReviewInfoList) {
      res["HitRuleReviewInfoList"] = hitRuleReviewInfoList ? boost::any(hitRuleReviewInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (poc) {
      res["Poc"] = boost::any(*poc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitRuleReviewInfoList") != m.end() && !m["HitRuleReviewInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["HitRuleReviewInfoList"].type()) {
        TestRuleResponseBodyDataHitRuleReviewInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HitRuleReviewInfoList"]));
        hitRuleReviewInfoList = make_shared<TestRuleResponseBodyDataHitRuleReviewInfoList>(model1);
      }
    }
    if (m.find("Poc") != m.end() && !m["Poc"].empty()) {
      poc = make_shared<bool>(boost::any_cast<bool>(m["Poc"]));
    }
  }


  virtual ~TestRuleResponseBodyData() = default;
};
class TestRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<TestRuleResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  TestRuleResponseBody() {}

  explicit TestRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        TestRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TestRuleResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~TestRuleResponseBody() = default;
};
class TestRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TestRuleResponseBody> body{};

  TestRuleResponse() {}

  explicit TestRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TestRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TestRuleResponseBody>(model1);
      }
    }
  }


  virtual ~TestRuleResponse() = default;
};
class UpdateAsrVocabRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  UpdateAsrVocabRequest() {}

  explicit UpdateAsrVocabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~UpdateAsrVocabRequest() = default;
};
class UpdateAsrVocabResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateAsrVocabResponseBody() {}

  explicit UpdateAsrVocabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateAsrVocabResponseBody() = default;
};
class UpdateAsrVocabResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAsrVocabResponseBody> body{};

  UpdateAsrVocabResponse() {}

  explicit UpdateAsrVocabResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAsrVocabResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAsrVocabResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAsrVocabResponse() = default;
};
class UpdateOnPurchaseSuccessRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  UpdateOnPurchaseSuccessRequest() {}

  explicit UpdateOnPurchaseSuccessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~UpdateOnPurchaseSuccessRequest() = default;
};
class UpdateOnPurchaseSuccessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateOnPurchaseSuccessResponseBody() {}

  explicit UpdateOnPurchaseSuccessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateOnPurchaseSuccessResponseBody() = default;
};
class UpdateOnPurchaseSuccessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateOnPurchaseSuccessResponseBody> body{};

  UpdateOnPurchaseSuccessResponse() {}

  explicit UpdateOnPurchaseSuccessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateOnPurchaseSuccessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateOnPurchaseSuccessResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateOnPurchaseSuccessResponse() = default;
};
class UpdateRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  UpdateRuleRequest() {}

  explicit UpdateRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~UpdateRuleRequest() = default;
};
class UpdateRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateRuleResponseBody() {}

  explicit UpdateRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateRuleResponseBody() = default;
};
class UpdateRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateRuleResponseBody> body{};

  UpdateRuleResponse() {}

  explicit UpdateRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRuleResponse() = default;
};
class UpdateScoreForApiRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  UpdateScoreForApiRequest() {}

  explicit UpdateScoreForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~UpdateScoreForApiRequest() = default;
};
class UpdateScoreForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateScoreForApiResponseBody() {}

  explicit UpdateScoreForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateScoreForApiResponseBody() = default;
};
class UpdateScoreForApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateScoreForApiResponseBody> body{};

  UpdateScoreForApiResponse() {}

  explicit UpdateScoreForApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateScoreForApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateScoreForApiResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateScoreForApiResponse() = default;
};
class UpdateSkillGroupConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  UpdateSkillGroupConfigRequest() {}

  explicit UpdateSkillGroupConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~UpdateSkillGroupConfigRequest() = default;
};
class UpdateSkillGroupConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateSkillGroupConfigResponseBody() {}

  explicit UpdateSkillGroupConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateSkillGroupConfigResponseBody() = default;
};
class UpdateSkillGroupConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSkillGroupConfigResponseBody> body{};

  UpdateSkillGroupConfigResponse() {}

  explicit UpdateSkillGroupConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSkillGroupConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSkillGroupConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSkillGroupConfigResponse() = default;
};
class UpdateSubScoreForApiRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  UpdateSubScoreForApiRequest() {}

  explicit UpdateSubScoreForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~UpdateSubScoreForApiRequest() = default;
};
class UpdateSubScoreForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateSubScoreForApiResponseBody() {}

  explicit UpdateSubScoreForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateSubScoreForApiResponseBody() = default;
};
class UpdateSubScoreForApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSubScoreForApiResponseBody> body{};

  UpdateSubScoreForApiResponse() {}

  explicit UpdateSubScoreForApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSubScoreForApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSubScoreForApiResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSubScoreForApiResponse() = default;
};
class UpdateSyncQualityCheckDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  UpdateSyncQualityCheckDataRequest() {}

  explicit UpdateSyncQualityCheckDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~UpdateSyncQualityCheckDataRequest() = default;
};
class UpdateSyncQualityCheckDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> tid{};
  shared_ptr<string> taskId{};

  UpdateSyncQualityCheckDataResponseBodyData() {}

  explicit UpdateSyncQualityCheckDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpdateSyncQualityCheckDataResponseBodyData() = default;
};
class UpdateSyncQualityCheckDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<UpdateSyncQualityCheckDataResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateSyncQualityCheckDataResponseBody() {}

  explicit UpdateSyncQualityCheckDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateSyncQualityCheckDataResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateSyncQualityCheckDataResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateSyncQualityCheckDataResponseBody() = default;
};
class UpdateSyncQualityCheckDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSyncQualityCheckDataResponseBody> body{};

  UpdateSyncQualityCheckDataResponse() {}

  explicit UpdateSyncQualityCheckDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSyncQualityCheckDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSyncQualityCheckDataResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSyncQualityCheckDataResponse() = default;
};
class UpdateTaskAssignRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  UpdateTaskAssignRuleRequest() {}

  explicit UpdateTaskAssignRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~UpdateTaskAssignRuleRequest() = default;
};
class UpdateTaskAssignRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateTaskAssignRuleResponseBody() {}

  explicit UpdateTaskAssignRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateTaskAssignRuleResponseBody() = default;
};
class UpdateTaskAssignRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateTaskAssignRuleResponseBody> body{};

  UpdateTaskAssignRuleResponse() {}

  explicit UpdateTaskAssignRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTaskAssignRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTaskAssignRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTaskAssignRuleResponse() = default;
};
class UpdateUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  UpdateUserRequest() {}

  explicit UpdateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~UpdateUserRequest() = default;
};
class UpdateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateUserResponseBody() {}

  explicit UpdateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateUserResponseBody() = default;
};
class UpdateUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateUserResponseBody> body{};

  UpdateUserResponse() {}

  explicit UpdateUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserResponse() = default;
};
class UpdateUserConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  UpdateUserConfigRequest() {}

  explicit UpdateUserConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~UpdateUserConfigRequest() = default;
};
class UpdateUserConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateUserConfigResponseBody() {}

  explicit UpdateUserConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateUserConfigResponseBody() = default;
};
class UpdateUserConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateUserConfigResponseBody> body{};

  UpdateUserConfigResponse() {}

  explicit UpdateUserConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserConfigResponse() = default;
};
class UpdateWarningConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  UpdateWarningConfigRequest() {}

  explicit UpdateWarningConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~UpdateWarningConfigRequest() = default;
};
class UpdateWarningConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateWarningConfigResponseBody() {}

  explicit UpdateWarningConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateWarningConfigResponseBody() = default;
};
class UpdateWarningConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateWarningConfigResponseBody> body{};

  UpdateWarningConfigResponse() {}

  explicit UpdateWarningConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWarningConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWarningConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWarningConfigResponse() = default;
};
class UploadAudioDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  UploadAudioDataRequest() {}

  explicit UploadAudioDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~UploadAudioDataRequest() = default;
};
class UploadAudioDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UploadAudioDataResponseBody() {}

  explicit UploadAudioDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UploadAudioDataResponseBody() = default;
};
class UploadAudioDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UploadAudioDataResponseBody> body{};

  UploadAudioDataResponse() {}

  explicit UploadAudioDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadAudioDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadAudioDataResponseBody>(model1);
      }
    }
  }


  virtual ~UploadAudioDataResponse() = default;
};
class UploadDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  UploadDataRequest() {}

  explicit UploadDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~UploadDataRequest() = default;
};
class UploadDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UploadDataResponseBody() {}

  explicit UploadDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UploadDataResponseBody() = default;
};
class UploadDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UploadDataResponseBody> body{};

  UploadDataResponse() {}

  explicit UploadDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadDataResponseBody>(model1);
      }
    }
  }


  virtual ~UploadDataResponse() = default;
};
class UploadDataSyncRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  UploadDataSyncRequest() {}

  explicit UploadDataSyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~UploadDataSyncRequest() = default;
};
class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase : public Darabonba::Model {
public:
  shared_ptr<string> words{};
  shared_ptr<string> identity{};
  shared_ptr<long> begin{};
  shared_ptr<string> beginTime{};
  shared_ptr<long> end{};
  shared_ptr<string> role{};

  UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase() {}

  explicit UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      res["Words"] = boost::any(*words);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase() = default;
};
class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cidItem{};

  UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids() {}

  explicit UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidItem) {
      res["CidItem"] = boost::any(*cidItem);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CidItem") != m.end() && !m["CidItem"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CidItem"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CidItem"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cidItem = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids() = default;
};
class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<string> val{};
  shared_ptr<string> tid{};
  shared_ptr<long> pid{};
  shared_ptr<long> to{};

  UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord() {}

  explicit UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (val) {
      res["Val"] = boost::any(*val);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("Val") != m.end() && !m["Val"].empty()) {
      val = make_shared<string>(boost::any_cast<string>(m["Val"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord() = default;
};
class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords : public Darabonba::Model {
public:
  shared_ptr<vector<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord>> hitKeyWord{};

  UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords() {}

  explicit UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitKeyWord) {
      vector<boost::any> temp1;
      for(auto item1:*hitKeyWord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitKeyWord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitKeyWord") != m.end() && !m["HitKeyWord"].empty()) {
      if (typeid(vector<boost::any>) == m["HitKeyWord"].type()) {
        vector<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HitKeyWord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hitKeyWord = make_shared<vector<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord>>(expect1);
      }
    }
  }


  virtual ~UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords() = default;
};
class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo : public Darabonba::Model {
public:
  shared_ptr<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase> phrase{};
  shared_ptr<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids> hitCids{};
  shared_ptr<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords> hitKeyWords{};

  UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo() {}

  explicit UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phrase) {
      res["Phrase"] = phrase ? boost::any(phrase->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hitCids) {
      res["HitCids"] = hitCids ? boost::any(hitCids->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hitKeyWords) {
      res["HitKeyWords"] = hitKeyWords ? boost::any(hitKeyWords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Phrase") != m.end() && !m["Phrase"].empty()) {
      if (typeid(map<string, boost::any>) == m["Phrase"].type()) {
        UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Phrase"]));
        phrase = make_shared<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase>(model1);
      }
    }
    if (m.find("HitCids") != m.end() && !m["HitCids"].empty()) {
      if (typeid(map<string, boost::any>) == m["HitCids"].type()) {
        UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HitCids"]));
        hitCids = make_shared<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids>(model1);
      }
    }
    if (m.find("HitKeyWords") != m.end() && !m["HitKeyWords"].empty()) {
      if (typeid(map<string, boost::any>) == m["HitKeyWords"].type()) {
        UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HitKeyWords"]));
        hitKeyWords = make_shared<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords>(model1);
      }
    }
  }


  virtual ~UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo() = default;
};
class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit : public Darabonba::Model {
public:
  shared_ptr<vector<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo>> conditionHitInfo{};

  UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit() {}

  explicit UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionHitInfo) {
      vector<boost::any> temp1;
      for(auto item1:*conditionHitInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConditionHitInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionHitInfo") != m.end() && !m["ConditionHitInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ConditionHitInfo"].type()) {
        vector<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConditionHitInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditionHitInfo = make_shared<vector<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo>>(expect1);
      }
    }
  }


  virtual ~UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit() = default;
};
class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> conditionInfoCid{};

  UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo() {}

  explicit UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionInfoCid) {
      res["ConditionInfoCid"] = boost::any(*conditionInfoCid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionInfoCid") != m.end() && !m["ConditionInfoCid"].empty()) {
      conditionInfoCid = make_shared<string>(boost::any_cast<string>(m["ConditionInfoCid"]));
    }
  }


  virtual ~UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo() = default;
};
class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo : public Darabonba::Model {
public:
  shared_ptr<vector<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo>> conditionBasicInfo{};

  UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo() {}

  explicit UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionBasicInfo) {
      vector<boost::any> temp1;
      for(auto item1:*conditionBasicInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConditionBasicInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionBasicInfo") != m.end() && !m["ConditionBasicInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ConditionBasicInfo"].type()) {
        vector<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConditionBasicInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditionBasicInfo = make_shared<vector<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo>>(expect1);
      }
    }
  }


  virtual ~UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo() = default;
};
class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo : public Darabonba::Model {
public:
  shared_ptr<string> tid{};
  shared_ptr<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit> hit{};
  shared_ptr<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo> conditionInfo{};
  shared_ptr<string> rid{};

  UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo() {}

  explicit UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (hit) {
      res["Hit"] = hit ? boost::any(hit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (conditionInfo) {
      res["ConditionInfo"] = conditionInfo ? boost::any(conditionInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
    }
    if (m.find("Hit") != m.end() && !m["Hit"].empty()) {
      if (typeid(map<string, boost::any>) == m["Hit"].type()) {
        UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Hit"]));
        hit = make_shared<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit>(model1);
      }
    }
    if (m.find("ConditionInfo") != m.end() && !m["ConditionInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConditionInfo"].type()) {
        UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConditionInfo"]));
        conditionInfo = make_shared<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo>(model1);
      }
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
  }


  virtual ~UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo() = default;
};
class UploadDataSyncResponseBodyDataResultInfoRules : public Darabonba::Model {
public:
  shared_ptr<vector<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo>> ruleHitInfo{};

  UploadDataSyncResponseBodyDataResultInfoRules() {}

  explicit UploadDataSyncResponseBodyDataResultInfoRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleHitInfo) {
      vector<boost::any> temp1;
      for(auto item1:*ruleHitInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleHitInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleHitInfo") != m.end() && !m["RuleHitInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleHitInfo"].type()) {
        vector<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleHitInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleHitInfo = make_shared<vector<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo>>(expect1);
      }
    }
  }


  virtual ~UploadDataSyncResponseBodyDataResultInfoRules() = default;
};
class UploadDataSyncResponseBodyDataResultInfoHandScoreIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> handScoreIdList{};

  UploadDataSyncResponseBodyDataResultInfoHandScoreIdList() {}

  explicit UploadDataSyncResponseBodyDataResultInfoHandScoreIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handScoreIdList) {
      res["HandScoreIdList"] = boost::any(*handScoreIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HandScoreIdList") != m.end() && !m["HandScoreIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HandScoreIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HandScoreIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      handScoreIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UploadDataSyncResponseBodyDataResultInfoHandScoreIdList() = default;
};
class UploadDataSyncResponseBodyDataResultInfo : public Darabonba::Model {
public:
  shared_ptr<long> score{};
  shared_ptr<UploadDataSyncResponseBodyDataResultInfoRules> rules{};
  shared_ptr<UploadDataSyncResponseBodyDataResultInfoHandScoreIdList> handScoreIdList{};

  UploadDataSyncResponseBodyDataResultInfo() {}

  explicit UploadDataSyncResponseBodyDataResultInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (handScoreIdList) {
      res["HandScoreIdList"] = handScoreIdList ? boost::any(handScoreIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        UploadDataSyncResponseBodyDataResultInfoRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<UploadDataSyncResponseBodyDataResultInfoRules>(model1);
      }
    }
    if (m.find("HandScoreIdList") != m.end() && !m["HandScoreIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["HandScoreIdList"].type()) {
        UploadDataSyncResponseBodyDataResultInfoHandScoreIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HandScoreIdList"]));
        handScoreIdList = make_shared<UploadDataSyncResponseBodyDataResultInfoHandScoreIdList>(model1);
      }
    }
  }


  virtual ~UploadDataSyncResponseBodyDataResultInfo() = default;
};
class UploadDataSyncResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<UploadDataSyncResponseBodyDataResultInfo>> resultInfo{};

  UploadDataSyncResponseBodyData() {}

  explicit UploadDataSyncResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultInfo) {
      vector<boost::any> temp1;
      for(auto item1:*resultInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultInfo") != m.end() && !m["ResultInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultInfo"].type()) {
        vector<UploadDataSyncResponseBodyDataResultInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UploadDataSyncResponseBodyDataResultInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultInfo = make_shared<vector<UploadDataSyncResponseBodyDataResultInfo>>(expect1);
      }
    }
  }


  virtual ~UploadDataSyncResponseBodyData() = default;
};
class UploadDataSyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<UploadDataSyncResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UploadDataSyncResponseBody() {}

  explicit UploadDataSyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UploadDataSyncResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UploadDataSyncResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UploadDataSyncResponseBody() = default;
};
class UploadDataSyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UploadDataSyncResponseBody> body{};

  UploadDataSyncResponse() {}

  explicit UploadDataSyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadDataSyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadDataSyncResponseBody>(model1);
      }
    }
  }


  virtual ~UploadDataSyncResponse() = default;
};
class UploadRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  UploadRuleRequest() {}

  explicit UploadRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~UploadRuleRequest() = default;
};
class UploadRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ridInfo{};

  UploadRuleResponseBodyData() {}

  explicit UploadRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ridInfo) {
      res["RidInfo"] = boost::any(*ridInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RidInfo") != m.end() && !m["RidInfo"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RidInfo"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RidInfo"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ridInfo = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UploadRuleResponseBodyData() = default;
};
class UploadRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<UploadRuleResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UploadRuleResponseBody() {}

  explicit UploadRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UploadRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UploadRuleResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UploadRuleResponseBody() = default;
};
class UploadRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UploadRuleResponseBody> body{};

  UploadRuleResponse() {}

  explicit UploadRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UploadRuleResponse() = default;
};
class VerifyFileRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  VerifyFileRequest() {}

  explicit VerifyFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~VerifyFileRequest() = default;
};
class VerifyFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<double> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  VerifyFileResponseBody() {}

  explicit VerifyFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<double>(boost::any_cast<double>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~VerifyFileResponseBody() = default;
};
class VerifyFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<VerifyFileResponseBody> body{};

  VerifyFileResponse() {}

  explicit VerifyFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyFileResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyFileResponse() = default;
};
class VerifySentenceRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> jsonStr{};

  VerifySentenceRequest() {}

  explicit VerifySentenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (jsonStr) {
      res["JsonStr"] = boost::any(*jsonStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("JsonStr") != m.end() && !m["JsonStr"].empty()) {
      jsonStr = make_shared<string>(boost::any_cast<string>(m["JsonStr"]));
    }
  }


  virtual ~VerifySentenceRequest() = default;
};
class VerifySentenceResponseBodyDataDeltaSourceLine : public Darabonba::Model {
public:
  shared_ptr<vector<string>> line{};

  VerifySentenceResponseBodyDataDeltaSourceLine() {}

  explicit VerifySentenceResponseBodyDataDeltaSourceLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (line) {
      res["Line"] = boost::any(*line);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Line"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Line"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      line = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~VerifySentenceResponseBodyDataDeltaSourceLine() = default;
};
class VerifySentenceResponseBodyDataDeltaSource : public Darabonba::Model {
public:
  shared_ptr<VerifySentenceResponseBodyDataDeltaSourceLine> line{};
  shared_ptr<long> position{};

  VerifySentenceResponseBodyDataDeltaSource() {}

  explicit VerifySentenceResponseBodyDataDeltaSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (line) {
      res["Line"] = line ? boost::any(line->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      if (typeid(map<string, boost::any>) == m["Line"].type()) {
        VerifySentenceResponseBodyDataDeltaSourceLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Line"]));
        line = make_shared<VerifySentenceResponseBodyDataDeltaSourceLine>(model1);
      }
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<long>(boost::any_cast<long>(m["Position"]));
    }
  }


  virtual ~VerifySentenceResponseBodyDataDeltaSource() = default;
};
class VerifySentenceResponseBodyDataDeltaTargetLine : public Darabonba::Model {
public:
  shared_ptr<vector<string>> line{};

  VerifySentenceResponseBodyDataDeltaTargetLine() {}

  explicit VerifySentenceResponseBodyDataDeltaTargetLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (line) {
      res["Line"] = boost::any(*line);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Line"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Line"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      line = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~VerifySentenceResponseBodyDataDeltaTargetLine() = default;
};
class VerifySentenceResponseBodyDataDeltaTarget : public Darabonba::Model {
public:
  shared_ptr<VerifySentenceResponseBodyDataDeltaTargetLine> line{};
  shared_ptr<long> position{};

  VerifySentenceResponseBodyDataDeltaTarget() {}

  explicit VerifySentenceResponseBodyDataDeltaTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (line) {
      res["Line"] = line ? boost::any(line->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      if (typeid(map<string, boost::any>) == m["Line"].type()) {
        VerifySentenceResponseBodyDataDeltaTargetLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Line"]));
        line = make_shared<VerifySentenceResponseBodyDataDeltaTargetLine>(model1);
      }
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<long>(boost::any_cast<long>(m["Position"]));
    }
  }


  virtual ~VerifySentenceResponseBodyDataDeltaTarget() = default;
};
class VerifySentenceResponseBodyDataDelta : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<VerifySentenceResponseBodyDataDeltaSource> source{};
  shared_ptr<VerifySentenceResponseBodyDataDeltaTarget> target{};

  VerifySentenceResponseBodyDataDelta() {}

  explicit VerifySentenceResponseBodyDataDelta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (target) {
      res["Target"] = target ? boost::any(target->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        VerifySentenceResponseBodyDataDeltaSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<VerifySentenceResponseBodyDataDeltaSource>(model1);
      }
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      if (typeid(map<string, boost::any>) == m["Target"].type()) {
        VerifySentenceResponseBodyDataDeltaTarget model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Target"]));
        target = make_shared<VerifySentenceResponseBodyDataDeltaTarget>(model1);
      }
    }
  }


  virtual ~VerifySentenceResponseBodyDataDelta() = default;
};
class VerifySentenceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<VerifySentenceResponseBodyDataDelta>> delta{};

  VerifySentenceResponseBodyData() {}

  explicit VerifySentenceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delta) {
      vector<boost::any> temp1;
      for(auto item1:*delta){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Delta"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Delta") != m.end() && !m["Delta"].empty()) {
      if (typeid(vector<boost::any>) == m["Delta"].type()) {
        vector<VerifySentenceResponseBodyDataDelta> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Delta"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VerifySentenceResponseBodyDataDelta model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        delta = make_shared<vector<VerifySentenceResponseBodyDataDelta>>(expect1);
      }
    }
  }


  virtual ~VerifySentenceResponseBodyData() = default;
};
class VerifySentenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> sourceRole{};
  shared_ptr<long> incorrectWords{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> targetRole{};
  shared_ptr<VerifySentenceResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  VerifySentenceResponseBody() {}

  explicit VerifySentenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceRole) {
      res["SourceRole"] = boost::any(*sourceRole);
    }
    if (incorrectWords) {
      res["IncorrectWords"] = boost::any(*incorrectWords);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (targetRole) {
      res["TargetRole"] = boost::any(*targetRole);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceRole") != m.end() && !m["SourceRole"].empty()) {
      sourceRole = make_shared<long>(boost::any_cast<long>(m["SourceRole"]));
    }
    if (m.find("IncorrectWords") != m.end() && !m["IncorrectWords"].empty()) {
      incorrectWords = make_shared<long>(boost::any_cast<long>(m["IncorrectWords"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TargetRole") != m.end() && !m["TargetRole"].empty()) {
      targetRole = make_shared<long>(boost::any_cast<long>(m["TargetRole"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        VerifySentenceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<VerifySentenceResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~VerifySentenceResponseBody() = default;
};
class VerifySentenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<VerifySentenceResponseBody> body{};

  VerifySentenceResponse() {}

  explicit VerifySentenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifySentenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifySentenceResponseBody>(model1);
      }
    }
  }


  virtual ~VerifySentenceResponse() = default;
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
  AddBusinessCategoryResponse addBusinessCategoryWithOptions(shared_ptr<AddBusinessCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddBusinessCategoryResponse addBusinessCategory(shared_ptr<AddBusinessCategoryRequest> request);
  AddRuleCategoryResponse addRuleCategoryWithOptions(shared_ptr<AddRuleCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddRuleCategoryResponse addRuleCategory(shared_ptr<AddRuleCategoryRequest> request);
  AddThesaurusForApiResponse addThesaurusForApiWithOptions(shared_ptr<AddThesaurusForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddThesaurusForApiResponse addThesaurusForApi(shared_ptr<AddThesaurusForApiRequest> request);
  AddUploadDataSetResponse addUploadDataSetWithOptions(shared_ptr<AddUploadDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUploadDataSetResponse addUploadDataSet(shared_ptr<AddUploadDataSetRequest> request);
  AssignReviewerResponse assignReviewerWithOptions(shared_ptr<AssignReviewerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssignReviewerResponse assignReviewer(shared_ptr<AssignReviewerRequest> request);
  ConfigDataSetResponse configDataSetWithOptions(shared_ptr<ConfigDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigDataSetResponse configDataSet(shared_ptr<ConfigDataSetRequest> request);
  CreateAsrVocabResponse createAsrVocabWithOptions(shared_ptr<CreateAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAsrVocabResponse createAsrVocab(shared_ptr<CreateAsrVocabRequest> request);
  CreateRuleResponse createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRuleResponse createRule(shared_ptr<CreateRuleRequest> request);
  CreateSkillGroupConfigResponse createSkillGroupConfigWithOptions(shared_ptr<CreateSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSkillGroupConfigResponse createSkillGroupConfig(shared_ptr<CreateSkillGroupConfigRequest> request);
  CreateTaskAssignRuleResponse createTaskAssignRuleWithOptions(shared_ptr<CreateTaskAssignRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskAssignRuleResponse createTaskAssignRule(shared_ptr<CreateTaskAssignRuleRequest> request);
  CreateUserResponse createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserResponse createUser(shared_ptr<CreateUserRequest> request);
  CreateWarningConfigResponse createWarningConfigWithOptions(shared_ptr<CreateWarningConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWarningConfigResponse createWarningConfig(shared_ptr<CreateWarningConfigRequest> request);
  DeleteAsrVocabResponse deleteAsrVocabWithOptions(shared_ptr<DeleteAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAsrVocabResponse deleteAsrVocab(shared_ptr<DeleteAsrVocabRequest> request);
  DeleteBusinessCategoryResponse deleteBusinessCategoryWithOptions(shared_ptr<DeleteBusinessCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBusinessCategoryResponse deleteBusinessCategory(shared_ptr<DeleteBusinessCategoryRequest> request);
  DeleteCustomizationConfigResponse deleteCustomizationConfigWithOptions(shared_ptr<DeleteCustomizationConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCustomizationConfigResponse deleteCustomizationConfig(shared_ptr<DeleteCustomizationConfigRequest> request);
  DeleteDataSetResponse deleteDataSetWithOptions(shared_ptr<DeleteDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataSetResponse deleteDataSet(shared_ptr<DeleteDataSetRequest> request);
  DeletePrecisionTaskResponse deletePrecisionTaskWithOptions(shared_ptr<DeletePrecisionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePrecisionTaskResponse deletePrecisionTask(shared_ptr<DeletePrecisionTaskRequest> request);
  DeleteScoreForApiResponse deleteScoreForApiWithOptions(shared_ptr<DeleteScoreForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScoreForApiResponse deleteScoreForApi(shared_ptr<DeleteScoreForApiRequest> request);
  DeleteSkillGroupConfigResponse deleteSkillGroupConfigWithOptions(shared_ptr<DeleteSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSkillGroupConfigResponse deleteSkillGroupConfig(shared_ptr<DeleteSkillGroupConfigRequest> request);
  DeleteSubScoreForApiResponse deleteSubScoreForApiWithOptions(shared_ptr<DeleteSubScoreForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSubScoreForApiResponse deleteSubScoreForApi(shared_ptr<DeleteSubScoreForApiRequest> request);
  DeleteTaskAssignRuleResponse deleteTaskAssignRuleWithOptions(shared_ptr<DeleteTaskAssignRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTaskAssignRuleResponse deleteTaskAssignRule(shared_ptr<DeleteTaskAssignRuleRequest> request);
  DeleteUserResponse deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserResponse deleteUser(shared_ptr<DeleteUserRequest> request);
  DeleteWarningConfigResponse deleteWarningConfigWithOptions(shared_ptr<DeleteWarningConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWarningConfigResponse deleteWarningConfig(shared_ptr<DeleteWarningConfigRequest> request);
  DelRuleCategoryResponse delRuleCategoryWithOptions(shared_ptr<DelRuleCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DelRuleCategoryResponse delRuleCategory(shared_ptr<DelRuleCategoryRequest> request);
  DelThesaurusForApiResponse delThesaurusForApiWithOptions(shared_ptr<DelThesaurusForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DelThesaurusForApiResponse delThesaurusForApi(shared_ptr<DelThesaurusForApiRequest> request);
  EditThesaurusForApiResponse editThesaurusForApiWithOptions(shared_ptr<EditThesaurusForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EditThesaurusForApiResponse editThesaurusForApi(shared_ptr<EditThesaurusForApiRequest> request);
  GetAsrVocabResponse getAsrVocabWithOptions(shared_ptr<GetAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsrVocabResponse getAsrVocab(shared_ptr<GetAsrVocabRequest> request);
  GetBusinessCategoryListResponse getBusinessCategoryListWithOptions(shared_ptr<GetBusinessCategoryListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBusinessCategoryListResponse getBusinessCategoryList(shared_ptr<GetBusinessCategoryListRequest> request);
  GetCustomizationConfigListResponse getCustomizationConfigListWithOptions(shared_ptr<GetCustomizationConfigListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCustomizationConfigListResponse getCustomizationConfigList(shared_ptr<GetCustomizationConfigListRequest> request);
  GetHitResultResponse getHitResultWithOptions(shared_ptr<GetHitResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHitResultResponse getHitResult(shared_ptr<GetHitResultRequest> request);
  GetNextResultToVerifyResponse getNextResultToVerifyWithOptions(shared_ptr<GetNextResultToVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNextResultToVerifyResponse getNextResultToVerify(shared_ptr<GetNextResultToVerifyRequest> request);
  GetPrecisionTaskResponse getPrecisionTaskWithOptions(shared_ptr<GetPrecisionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPrecisionTaskResponse getPrecisionTask(shared_ptr<GetPrecisionTaskRequest> request);
  GetResultResponse getResultWithOptions(shared_ptr<GetResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResultResponse getResult(shared_ptr<GetResultRequest> request);
  GetResultCallbackResponse getResultCallbackWithOptions(shared_ptr<GetResultCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResultCallbackResponse getResultCallback(shared_ptr<GetResultCallbackRequest> request);
  GetResultToReviewResponse getResultToReviewWithOptions(shared_ptr<GetResultToReviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResultToReviewResponse getResultToReview(shared_ptr<GetResultToReviewRequest> request);
  GetReviewInfoResponse getReviewInfoWithOptions(shared_ptr<GetReviewInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetReviewInfoResponse getReviewInfo(shared_ptr<GetReviewInfoRequest> request);
  GetRuleResponse getRuleWithOptions(shared_ptr<GetRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRuleResponse getRule(shared_ptr<GetRuleRequest> request);
  GetRuleCategoryResponse getRuleCategoryWithOptions(shared_ptr<GetRuleCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRuleCategoryResponse getRuleCategory(shared_ptr<GetRuleCategoryRequest> request);
  GetRuleDetailResponse getRuleDetailWithOptions(shared_ptr<GetRuleDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRuleDetailResponse getRuleDetail(shared_ptr<GetRuleDetailRequest> request);
  GetRuleDimensionResponse getRuleDimensionWithOptions(shared_ptr<GetRuleDimensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRuleDimensionResponse getRuleDimension(shared_ptr<GetRuleDimensionRequest> request);
  GetScoreInfoResponse getScoreInfoWithOptions(shared_ptr<GetScoreInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetScoreInfoResponse getScoreInfo(shared_ptr<GetScoreInfoRequest> request);
  GetSkillGroupConfigResponse getSkillGroupConfigWithOptions(shared_ptr<GetSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSkillGroupConfigResponse getSkillGroupConfig(shared_ptr<GetSkillGroupConfigRequest> request);
  GetSyncResultResponse getSyncResultWithOptions(shared_ptr<GetSyncResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSyncResultResponse getSyncResult(shared_ptr<GetSyncResultRequest> request);
  GetTaskFileResultListResponse getTaskFileResultListWithOptions(shared_ptr<GetTaskFileResultListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskFileResultListResponse getTaskFileResultList(shared_ptr<GetTaskFileResultListRequest> request);
  GetTaskRuleListResponse getTaskRuleListWithOptions(shared_ptr<GetTaskRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskRuleListResponse getTaskRuleList(shared_ptr<GetTaskRuleListRequest> request);
  GetThesaurusBySynonymForApiResponse getThesaurusBySynonymForApiWithOptions(shared_ptr<GetThesaurusBySynonymForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetThesaurusBySynonymForApiResponse getThesaurusBySynonymForApi(shared_ptr<GetThesaurusBySynonymForApiRequest> request);
  HandleComplaintResponse handleComplaintWithOptions(shared_ptr<HandleComplaintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HandleComplaintResponse handleComplaint(shared_ptr<HandleComplaintRequest> request);
  InsertScoreForApiResponse insertScoreForApiWithOptions(shared_ptr<InsertScoreForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InsertScoreForApiResponse insertScoreForApi(shared_ptr<InsertScoreForApiRequest> request);
  InsertSubScoreForApiResponse insertSubScoreForApiWithOptions(shared_ptr<InsertSubScoreForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InsertSubScoreForApiResponse insertSubScoreForApi(shared_ptr<InsertSubScoreForApiRequest> request);
  InvalidRuleResponse invalidRuleWithOptions(shared_ptr<InvalidRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvalidRuleResponse invalidRule(shared_ptr<InvalidRuleRequest> request);
  ListAsrVocabResponse listAsrVocabWithOptions(shared_ptr<ListAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAsrVocabResponse listAsrVocab(shared_ptr<ListAsrVocabRequest> request);
  ListDataSetTaskResponse listDataSetTaskWithOptions(shared_ptr<ListDataSetTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSetTaskResponse listDataSetTask(shared_ptr<ListDataSetTaskRequest> request);
  ListHotWordsTasksResponse listHotWordsTasksWithOptions(shared_ptr<ListHotWordsTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHotWordsTasksResponse listHotWordsTasks(shared_ptr<ListHotWordsTasksRequest> request);
  ListPrecisionTaskResponse listPrecisionTaskWithOptions(shared_ptr<ListPrecisionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPrecisionTaskResponse listPrecisionTask(shared_ptr<ListPrecisionTaskRequest> request);
  ListRolesResponse listRolesWithOptions(shared_ptr<ListRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRolesResponse listRoles(shared_ptr<ListRolesRequest> request);
  ListRulesResponse listRulesWithOptions(shared_ptr<ListRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRulesResponse listRules(shared_ptr<ListRulesRequest> request);
  ListSkillGroupConfigResponse listSkillGroupConfigWithOptions(shared_ptr<ListSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSkillGroupConfigResponse listSkillGroupConfig(shared_ptr<ListSkillGroupConfigRequest> request);
  ListTaskAssignRulesResponse listTaskAssignRulesWithOptions(shared_ptr<ListTaskAssignRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTaskAssignRulesResponse listTaskAssignRules(shared_ptr<ListTaskAssignRulesRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  ListWarningConfigResponse listWarningConfigWithOptions(shared_ptr<ListWarningConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWarningConfigResponse listWarningConfig(shared_ptr<ListWarningConfigRequest> request);
  RemoveAndGetTaskRulesResponse removeAndGetTaskRulesWithOptions(shared_ptr<RemoveAndGetTaskRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveAndGetTaskRulesResponse removeAndGetTaskRules(shared_ptr<RemoveAndGetTaskRulesRequest> request);
  RestartAsrTaskResponse restartAsrTaskWithOptions(shared_ptr<RestartAsrTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartAsrTaskResponse restartAsrTask(shared_ptr<RestartAsrTaskRequest> request);
  ReviewSingleResultByIdResponse reviewSingleResultByIdWithOptions(shared_ptr<ReviewSingleResultByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReviewSingleResultByIdResponse reviewSingleResultById(shared_ptr<ReviewSingleResultByIdRequest> request);
  SaveConfigDataSetResponse saveConfigDataSetWithOptions(shared_ptr<SaveConfigDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveConfigDataSetResponse saveConfigDataSet(shared_ptr<SaveConfigDataSetRequest> request);
  SubmitComplaintResponse submitComplaintWithOptions(shared_ptr<SubmitComplaintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitComplaintResponse submitComplaint(shared_ptr<SubmitComplaintRequest> request);
  SubmitCustomizationConfigResponse submitCustomizationConfigWithOptions(shared_ptr<SubmitCustomizationConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitCustomizationConfigResponse submitCustomizationConfig(shared_ptr<SubmitCustomizationConfigRequest> request);
  SubmitPrecisionTaskResponse submitPrecisionTaskWithOptions(shared_ptr<SubmitPrecisionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitPrecisionTaskResponse submitPrecisionTask(shared_ptr<SubmitPrecisionTaskRequest> request);
  SubmitQualityCheckTaskResponse submitQualityCheckTaskWithOptions(shared_ptr<SubmitQualityCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitQualityCheckTaskResponse submitQualityCheckTask(shared_ptr<SubmitQualityCheckTaskRequest> request);
  SubmitReviewInfoResponse submitReviewInfoWithOptions(shared_ptr<SubmitReviewInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitReviewInfoResponse submitReviewInfo(shared_ptr<SubmitReviewInfoRequest> request);
  SyncQualityCheckResponse syncQualityCheckWithOptions(shared_ptr<SyncQualityCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncQualityCheckResponse syncQualityCheck(shared_ptr<SyncQualityCheckRequest> request);
  TestRuleResponse testRuleWithOptions(shared_ptr<TestRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TestRuleResponse testRule(shared_ptr<TestRuleRequest> request);
  UpdateAsrVocabResponse updateAsrVocabWithOptions(shared_ptr<UpdateAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAsrVocabResponse updateAsrVocab(shared_ptr<UpdateAsrVocabRequest> request);
  UpdateOnPurchaseSuccessResponse updateOnPurchaseSuccessWithOptions(shared_ptr<UpdateOnPurchaseSuccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOnPurchaseSuccessResponse updateOnPurchaseSuccess(shared_ptr<UpdateOnPurchaseSuccessRequest> request);
  UpdateRuleResponse updateRuleWithOptions(shared_ptr<UpdateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRuleResponse updateRule(shared_ptr<UpdateRuleRequest> request);
  UpdateScoreForApiResponse updateScoreForApiWithOptions(shared_ptr<UpdateScoreForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateScoreForApiResponse updateScoreForApi(shared_ptr<UpdateScoreForApiRequest> request);
  UpdateSkillGroupConfigResponse updateSkillGroupConfigWithOptions(shared_ptr<UpdateSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSkillGroupConfigResponse updateSkillGroupConfig(shared_ptr<UpdateSkillGroupConfigRequest> request);
  UpdateSubScoreForApiResponse updateSubScoreForApiWithOptions(shared_ptr<UpdateSubScoreForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSubScoreForApiResponse updateSubScoreForApi(shared_ptr<UpdateSubScoreForApiRequest> request);
  UpdateSyncQualityCheckDataResponse updateSyncQualityCheckDataWithOptions(shared_ptr<UpdateSyncQualityCheckDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSyncQualityCheckDataResponse updateSyncQualityCheckData(shared_ptr<UpdateSyncQualityCheckDataRequest> request);
  UpdateTaskAssignRuleResponse updateTaskAssignRuleWithOptions(shared_ptr<UpdateTaskAssignRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTaskAssignRuleResponse updateTaskAssignRule(shared_ptr<UpdateTaskAssignRuleRequest> request);
  UpdateUserResponse updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserResponse updateUser(shared_ptr<UpdateUserRequest> request);
  UpdateUserConfigResponse updateUserConfigWithOptions(shared_ptr<UpdateUserConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserConfigResponse updateUserConfig(shared_ptr<UpdateUserConfigRequest> request);
  UpdateWarningConfigResponse updateWarningConfigWithOptions(shared_ptr<UpdateWarningConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWarningConfigResponse updateWarningConfig(shared_ptr<UpdateWarningConfigRequest> request);
  UploadAudioDataResponse uploadAudioDataWithOptions(shared_ptr<UploadAudioDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadAudioDataResponse uploadAudioData(shared_ptr<UploadAudioDataRequest> request);
  UploadDataResponse uploadDataWithOptions(shared_ptr<UploadDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadDataResponse uploadData(shared_ptr<UploadDataRequest> request);
  UploadDataSyncResponse uploadDataSyncWithOptions(shared_ptr<UploadDataSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadDataSyncResponse uploadDataSync(shared_ptr<UploadDataSyncRequest> request);
  UploadRuleResponse uploadRuleWithOptions(shared_ptr<UploadRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadRuleResponse uploadRule(shared_ptr<UploadRuleRequest> request);
  VerifyFileResponse verifyFileWithOptions(shared_ptr<VerifyFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyFileResponse verifyFile(shared_ptr<VerifyFileRequest> request);
  VerifySentenceResponse verifySentenceWithOptions(shared_ptr<VerifySentenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifySentenceResponse verifySentence(shared_ptr<VerifySentenceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Qualitycheck20190115

#endif
