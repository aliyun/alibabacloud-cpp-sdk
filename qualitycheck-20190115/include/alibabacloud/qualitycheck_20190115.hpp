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
  shared_ptr<string> jsonStr{};

  AddBusinessCategoryRequest() {}

  explicit AddBusinessCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddBusinessCategoryRequest() = default;
};
class AddBusinessCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddBusinessCategoryResponseBody() {}

  explicit AddBusinessCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  AddRuleCategoryRequest() {}

  explicit AddRuleCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> code{};
  shared_ptr<AddRuleCategoryResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddRuleCategoryResponseBody() {}

  explicit AddRuleCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddRuleCategoryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddRuleCategoryResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  AddThesaurusForApiRequest() {}

  explicit AddThesaurusForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddThesaurusForApiRequest() = default;
};
class AddThesaurusForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddThesaurusForApiResponseBody() {}

  explicit AddThesaurusForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
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
class AssignReviewerRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  AssignReviewerRequest() {}

  explicit AssignReviewerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AssignReviewerRequest() = default;
};
class AssignReviewerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AssignReviewerResponseBody() {}

  explicit AssignReviewerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class CreateAsrVocabRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  CreateAsrVocabRequest() {}

  explicit CreateAsrVocabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateAsrVocabRequest() = default;
};
class CreateAsrVocabResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAsrVocabResponseBody() {}

  explicit CreateAsrVocabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
class CreateSkillGroupConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  CreateSkillGroupConfigRequest() {}

  explicit CreateSkillGroupConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateSkillGroupConfigRequest() = default;
};
class CreateSkillGroupConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateSkillGroupConfigResponseBody() {}

  explicit CreateSkillGroupConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  CreateTaskAssignRuleRequest() {}

  explicit CreateTaskAssignRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateTaskAssignRuleRequest() = default;
};
class CreateTaskAssignRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateTaskAssignRuleResponseBody() {}

  explicit CreateTaskAssignRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  CreateUserRequest() {}

  explicit CreateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateUserRequest() = default;
};
class CreateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateUserResponseBody() {}

  explicit CreateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  CreateWarningConfigRequest() {}

  explicit CreateWarningConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateWarningConfigRequest() = default;
};
class CreateWarningConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateWarningConfigResponseBody() {}

  explicit CreateWarningConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
class DelRuleCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  DelRuleCategoryRequest() {}

  explicit DelRuleCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> code{};
  shared_ptr<DelRuleCategoryResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DelRuleCategoryResponseBody() {}

  explicit DelRuleCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DelRuleCategoryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DelRuleCategoryResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  DelThesaurusForApiRequest() {}

  explicit DelThesaurusForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DelThesaurusForApiRequest() = default;
};
class DelThesaurusForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DelThesaurusForApiResponseBody() {}

  explicit DelThesaurusForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class DeleteAsrVocabRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  DeleteAsrVocabRequest() {}

  explicit DeleteAsrVocabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAsrVocabRequest() = default;
};
class DeleteAsrVocabResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAsrVocabResponseBody() {}

  explicit DeleteAsrVocabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  DeleteBusinessCategoryRequest() {}

  explicit DeleteBusinessCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteBusinessCategoryRequest() = default;
};
class DeleteBusinessCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteBusinessCategoryResponseBody() {}

  explicit DeleteBusinessCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  DeleteCustomizationConfigRequest() {}

  explicit DeleteCustomizationConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteCustomizationConfigRequest() = default;
};
class DeleteCustomizationConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteCustomizationConfigResponseBody() {}

  explicit DeleteCustomizationConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  DeleteDataSetRequest() {}

  explicit DeleteDataSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDataSetRequest() = default;
};
class DeleteDataSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDataSetResponseBody() {}

  explicit DeleteDataSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  DeletePrecisionTaskRequest() {}

  explicit DeletePrecisionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePrecisionTaskRequest() = default;
};
class DeletePrecisionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeletePrecisionTaskResponseBody() {}

  explicit DeletePrecisionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  DeleteScoreForApiRequest() {}

  explicit DeleteScoreForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteScoreForApiRequest() = default;
};
class DeleteScoreForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteScoreForApiResponseBody() {}

  explicit DeleteScoreForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  DeleteSkillGroupConfigRequest() {}

  explicit DeleteSkillGroupConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSkillGroupConfigRequest() = default;
};
class DeleteSkillGroupConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteSkillGroupConfigResponseBody() {}

  explicit DeleteSkillGroupConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  DeleteSubScoreForApiRequest() {}

  explicit DeleteSubScoreForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSubScoreForApiRequest() = default;
};
class DeleteSubScoreForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteSubScoreForApiResponseBody() {}

  explicit DeleteSubScoreForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  DeleteTaskAssignRuleRequest() {}

  explicit DeleteTaskAssignRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTaskAssignRuleRequest() = default;
};
class DeleteTaskAssignRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteTaskAssignRuleResponseBody() {}

  explicit DeleteTaskAssignRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  DeleteUserRequest() {}

  explicit DeleteUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserRequest() = default;
};
class DeleteUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteUserResponseBody() {}

  explicit DeleteUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  DeleteWarningConfigRequest() {}

  explicit DeleteWarningConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteWarningConfigRequest() = default;
};
class DeleteWarningConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteWarningConfigResponseBody() {}

  explicit DeleteWarningConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class EditThesaurusForApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  EditThesaurusForApiRequest() {}

  explicit EditThesaurusForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EditThesaurusForApiRequest() = default;
};
class EditThesaurusForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EditThesaurusForApiResponseBody() {}

  explicit EditThesaurusForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  GetAsrVocabRequest() {}

  explicit GetAsrVocabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> name{};
  shared_ptr<GetAsrVocabResponseBodyDataWords> words{};

  GetAsrVocabResponseBodyData() {}

  explicit GetAsrVocabResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (words) {
      res["Words"] = words ? boost::any(words->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      if (typeid(map<string, boost::any>) == m["Words"].type()) {
        GetAsrVocabResponseBodyDataWords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Words"]));
        words = make_shared<GetAsrVocabResponseBodyDataWords>(model1);
      }
    }
  }


  virtual ~GetAsrVocabResponseBodyData() = default;
};
class GetAsrVocabResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetAsrVocabResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAsrVocabResponseBody() {}

  explicit GetAsrVocabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsrVocabResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAsrVocabResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  GetBusinessCategoryListRequest() {}

  explicit GetBusinessCategoryListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetBusinessCategoryListRequest() = default;
};
class GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo : public Darabonba::Model {
public:
  shared_ptr<long> bid{};
  shared_ptr<string> businessName{};
  shared_ptr<long> serviceType{};

  GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo() {}

  explicit GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (businessName) {
      res["BusinessName"] = boost::any(*businessName);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<long>(boost::any_cast<long>(m["Bid"]));
    }
    if (m.find("BusinessName") != m.end() && !m["BusinessName"].empty()) {
      businessName = make_shared<string>(boost::any_cast<string>(m["BusinessName"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<long>(boost::any_cast<long>(m["ServiceType"]));
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
  shared_ptr<string> code{};
  shared_ptr<GetBusinessCategoryListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetBusinessCategoryListResponseBody() {}

  explicit GetBusinessCategoryListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBusinessCategoryListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetBusinessCategoryListResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  GetCustomizationConfigListRequest() {}

  explicit GetCustomizationConfigListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetCustomizationConfigListRequest() = default;
};
class GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> modeCustomizationId{};
  shared_ptr<long> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<long> modelStatus{};
  shared_ptr<long> taskType{};

  GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo() {}

  explicit GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modeCustomizationId) {
      res["ModeCustomizationId"] = boost::any(*modeCustomizationId);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModeCustomizationId") != m.end() && !m["ModeCustomizationId"].empty()) {
      modeCustomizationId = make_shared<string>(boost::any_cast<string>(m["ModeCustomizationId"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<long>(boost::any_cast<long>(m["ModelStatus"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<long>(boost::any_cast<long>(m["TaskType"]));
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
  shared_ptr<string> code{};
  shared_ptr<GetCustomizationConfigListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCustomizationConfigListResponseBody() {}

  explicit GetCustomizationConfigListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCustomizationConfigListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCustomizationConfigListResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  GetHitResultRequest() {}

  explicit GetHitResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetHitResultRequest() = default;
};
class GetHitResultResponseBodyDataResultInfo : public Darabonba::Model {
public:
  shared_ptr<long> rid{};
  shared_ptr<string> ruleName{};

  GetHitResultResponseBodyDataResultInfo() {}

  explicit GetHitResultResponseBodyDataResultInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
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
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<GetHitResultResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetHitResultResponseBody() {}

  explicit GetHitResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetHitResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHitResultResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<string> jsonStr{};

  GetNextResultToVerifyRequest() {}

  explicit GetNextResultToVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource> source{};
  shared_ptr<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget> target{};
  shared_ptr<string> type{};

  GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta() {}

  explicit GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (target) {
      res["Target"] = target ? boost::any(target->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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
  shared_ptr<long> begin{};
  shared_ptr<string> beginTime{};
  shared_ptr<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas> deltas{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<string> hourMinSec{};
  shared_ptr<string> identity{};
  shared_ptr<long> incorrectWords{};
  shared_ptr<string> role{};
  shared_ptr<long> silenceDuration{};
  shared_ptr<string> sourceRole{};
  shared_ptr<string> sourceWords{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> words{};

  GetNextResultToVerifyResponseBodyDataDialoguesDialogue() {}

  explicit GetNextResultToVerifyResponseBodyDataDialoguesDialogue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (deltas) {
      res["Deltas"] = deltas ? boost::any(deltas->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (hourMinSec) {
      res["HourMinSec"] = boost::any(*hourMinSec);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (incorrectWords) {
      res["IncorrectWords"] = boost::any(*incorrectWords);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    if (sourceRole) {
      res["SourceRole"] = boost::any(*sourceRole);
    }
    if (sourceWords) {
      res["SourceWords"] = boost::any(*sourceWords);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (words) {
      res["Words"] = boost::any(*words);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("Deltas") != m.end() && !m["Deltas"].empty()) {
      if (typeid(map<string, boost::any>) == m["Deltas"].type()) {
        GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Deltas"]));
        deltas = make_shared<GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas>(model1);
      }
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("HourMinSec") != m.end() && !m["HourMinSec"].empty()) {
      hourMinSec = make_shared<string>(boost::any_cast<string>(m["HourMinSec"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("IncorrectWords") != m.end() && !m["IncorrectWords"].empty()) {
      incorrectWords = make_shared<long>(boost::any_cast<long>(m["IncorrectWords"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<long>(boost::any_cast<long>(m["SilenceDuration"]));
    }
    if (m.find("SourceRole") != m.end() && !m["SourceRole"].empty()) {
      sourceRole = make_shared<string>(boost::any_cast<string>(m["SourceRole"]));
    }
    if (m.find("SourceWords") != m.end() && !m["SourceWords"].empty()) {
      sourceWords = make_shared<string>(boost::any_cast<string>(m["SourceWords"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
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
  shared_ptr<string> audioURL{};
  shared_ptr<GetNextResultToVerifyResponseBodyDataDialogues> dialogues{};
  shared_ptr<long> duration{};
  shared_ptr<string> fileId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> incorrectWords{};
  shared_ptr<long> index{};
  shared_ptr<double> precision{};
  shared_ptr<long> status{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> updateTime{};
  shared_ptr<bool> verified{};
  shared_ptr<long> verifiedCount{};

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
    if (audioURL) {
      res["AudioURL"] = boost::any(*audioURL);
    }
    if (dialogues) {
      res["Dialogues"] = dialogues ? boost::any(dialogues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (incorrectWords) {
      res["IncorrectWords"] = boost::any(*incorrectWords);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (precision) {
      res["Precision"] = boost::any(*precision);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (verified) {
      res["Verified"] = boost::any(*verified);
    }
    if (verifiedCount) {
      res["VerifiedCount"] = boost::any(*verifiedCount);
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
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("IncorrectWords") != m.end() && !m["IncorrectWords"].empty()) {
      incorrectWords = make_shared<long>(boost::any_cast<long>(m["IncorrectWords"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Precision") != m.end() && !m["Precision"].empty()) {
      precision = make_shared<double>(boost::any_cast<double>(m["Precision"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Verified") != m.end() && !m["Verified"].empty()) {
      verified = make_shared<bool>(boost::any_cast<bool>(m["Verified"]));
    }
    if (m.find("VerifiedCount") != m.end() && !m["VerifiedCount"].empty()) {
      verifiedCount = make_shared<long>(boost::any_cast<long>(m["VerifiedCount"]));
    }
  }


  virtual ~GetNextResultToVerifyResponseBodyData() = default;
};
class GetNextResultToVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetNextResultToVerifyResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetNextResultToVerifyResponseBody() {}

  explicit GetNextResultToVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNextResultToVerifyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetNextResultToVerifyResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  GetPrecisionTaskRequest() {}

  explicit GetPrecisionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetPrecisionTaskRequest() = default;
};
class GetPrecisionTaskResponseBodyDataPrecisionsPrecision : public Darabonba::Model {
public:
  shared_ptr<long> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<double> precision{};
  shared_ptr<long> status{};
  shared_ptr<string> taskId{};

  GetPrecisionTaskResponseBodyDataPrecisionsPrecision() {}

  explicit GetPrecisionTaskResponseBodyDataPrecisionsPrecision(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (precision) {
      res["Precision"] = boost::any(*precision);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("Precision") != m.end() && !m["Precision"].empty()) {
      precision = make_shared<double>(boost::any_cast<double>(m["Precision"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
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
  shared_ptr<long> dataSetId{};
  shared_ptr<string> dataSetName{};
  shared_ptr<long> duration{};
  shared_ptr<long> incorrectWords{};
  shared_ptr<string> name{};
  shared_ptr<GetPrecisionTaskResponseBodyDataPrecisions> precisions{};
  shared_ptr<long> source{};
  shared_ptr<long> status{};
  shared_ptr<string> taskId{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> verifiedCount{};

  GetPrecisionTaskResponseBodyData() {}

  explicit GetPrecisionTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSetId) {
      res["DataSetId"] = boost::any(*dataSetId);
    }
    if (dataSetName) {
      res["DataSetName"] = boost::any(*dataSetName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (incorrectWords) {
      res["IncorrectWords"] = boost::any(*incorrectWords);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (precisions) {
      res["Precisions"] = precisions ? boost::any(precisions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (verifiedCount) {
      res["VerifiedCount"] = boost::any(*verifiedCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSetId") != m.end() && !m["DataSetId"].empty()) {
      dataSetId = make_shared<long>(boost::any_cast<long>(m["DataSetId"]));
    }
    if (m.find("DataSetName") != m.end() && !m["DataSetName"].empty()) {
      dataSetName = make_shared<string>(boost::any_cast<string>(m["DataSetName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("IncorrectWords") != m.end() && !m["IncorrectWords"].empty()) {
      incorrectWords = make_shared<long>(boost::any_cast<long>(m["IncorrectWords"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Precisions") != m.end() && !m["Precisions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Precisions"].type()) {
        GetPrecisionTaskResponseBodyDataPrecisions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Precisions"]));
        precisions = make_shared<GetPrecisionTaskResponseBodyDataPrecisions>(model1);
      }
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<long>(boost::any_cast<long>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VerifiedCount") != m.end() && !m["VerifiedCount"].empty()) {
      verifiedCount = make_shared<long>(boost::any_cast<long>(m["VerifiedCount"]));
    }
  }


  virtual ~GetPrecisionTaskResponseBodyData() = default;
};
class GetPrecisionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetPrecisionTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPrecisionTaskResponseBody() {}

  explicit GetPrecisionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPrecisionTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPrecisionTaskResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  GetResultRequest() {}

  explicit GetResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetResultRequest() = default;
};
class GetResultResponseBodyDataResultInfoAgent : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> skillGroup{};

  GetResultResponseBodyDataResultInfoAgent() {}

  explicit GetResultResponseBodyDataResultInfoAgent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (skillGroup) {
      res["SkillGroup"] = boost::any(*skillGroup);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SkillGroup") != m.end() && !m["SkillGroup"].empty()) {
      skillGroup = make_shared<string>(boost::any_cast<string>(m["SkillGroup"]));
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoAgent() = default;
};
class GetResultResponseBodyDataResultInfoAsrResultAsrResult : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<string> role{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> words{};

  GetResultResponseBodyDataResultInfoAsrResultAsrResult() {}

  explicit GetResultResponseBodyDataResultInfoAsrResultAsrResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (words) {
      res["Words"] = boost::any(*words);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
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
class GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord : public Darabonba::Model {
public:
  shared_ptr<string> cid{};
  shared_ptr<long> from{};
  shared_ptr<long> to{};
  shared_ptr<string> val{};

  GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord() {}

  explicit GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (val) {
      res["Val"] = boost::any(*val);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      cid = make_shared<string>(boost::any_cast<string>(m["Cid"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
    if (m.find("Val") != m.end() && !m["Val"].empty()) {
      val = make_shared<string>(boost::any_cast<string>(m["Val"]));
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
class GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<string> role{};
  shared_ptr<string> words{};

  GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase() {}

  explicit GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (words) {
      res["Words"] = boost::any(*words);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase() = default;
};
class GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit : public Darabonba::Model {
public:
  shared_ptr<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid> cid{};
  shared_ptr<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords> keyWords{};
  shared_ptr<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase> phrase{};

  GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit() {}

  explicit GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cid) {
      res["Cid"] = cid ? boost::any(cid->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keyWords) {
      res["KeyWords"] = keyWords ? boost::any(keyWords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (phrase) {
      res["Phrase"] = phrase ? boost::any(phrase->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cid"].type()) {
        GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cid"]));
        cid = make_shared<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid>(model1);
      }
    }
    if (m.find("KeyWords") != m.end() && !m["KeyWords"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyWords"].type()) {
        GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyWords"]));
        keyWords = make_shared<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords>(model1);
      }
    }
    if (m.find("Phrase") != m.end() && !m["Phrase"].empty()) {
      if (typeid(map<string, boost::any>) == m["Phrase"].type()) {
        GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Phrase"]));
        phrase = make_shared<GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase>(model1);
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
  shared_ptr<GetResultResponseBodyDataResultInfoHitResultHitResultHits> hits{};
  shared_ptr<string> name{};
  shared_ptr<long> reviewResult{};
  shared_ptr<string> rid{};
  shared_ptr<string> type{};

  GetResultResponseBodyDataResultInfoHitResultHitResult() {}

  explicit GetResultResponseBodyDataResultInfoHitResultHitResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hits) {
      res["Hits"] = hits ? boost::any(hits->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (reviewResult) {
      res["ReviewResult"] = boost::any(*reviewResult);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hits") != m.end() && !m["Hits"].empty()) {
      if (typeid(map<string, boost::any>) == m["Hits"].type()) {
        GetResultResponseBodyDataResultInfoHitResultHitResultHits model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Hits"]));
        hits = make_shared<GetResultResponseBodyDataResultInfoHitResultHitResultHits>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ReviewResult") != m.end() && !m["ReviewResult"].empty()) {
      reviewResult = make_shared<long>(boost::any_cast<long>(m["ReviewResult"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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
class GetResultResponseBodyDataResultInfoHitScoreHitScore : public Darabonba::Model {
public:
  shared_ptr<string> ruleId{};
  shared_ptr<string> scoreId{};
  shared_ptr<string> scoreName{};
  shared_ptr<string> scoreNumber{};

  GetResultResponseBodyDataResultInfoHitScoreHitScore() {}

  explicit GetResultResponseBodyDataResultInfoHitScoreHitScore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    if (scoreName) {
      res["ScoreName"] = boost::any(*scoreName);
    }
    if (scoreNumber) {
      res["ScoreNumber"] = boost::any(*scoreNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("ScoreId") != m.end() && !m["ScoreId"].empty()) {
      scoreId = make_shared<string>(boost::any_cast<string>(m["ScoreId"]));
    }
    if (m.find("ScoreName") != m.end() && !m["ScoreName"].empty()) {
      scoreName = make_shared<string>(boost::any_cast<string>(m["ScoreName"]));
    }
    if (m.find("ScoreNumber") != m.end() && !m["ScoreNumber"].empty()) {
      scoreNumber = make_shared<string>(boost::any_cast<string>(m["ScoreNumber"]));
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
class GetResultResponseBodyDataResultInfoRecording : public Darabonba::Model {
public:
  shared_ptr<string> business{};
  shared_ptr<string> callId{};
  shared_ptr<string> callTime{};
  shared_ptr<long> callType{};
  shared_ptr<string> callee{};
  shared_ptr<string> caller{};
  shared_ptr<string> dataSetName{};
  shared_ptr<long> dialogueSize{};
  shared_ptr<long> duration{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> primaryId{};
  shared_ptr<string> remark1{};
  shared_ptr<string> remark10{};
  shared_ptr<string> remark11{};
  shared_ptr<string> remark12{};
  shared_ptr<string> remark13{};
  shared_ptr<string> remark2{};
  shared_ptr<string> remark3{};
  shared_ptr<string> remark4{};
  shared_ptr<long> remark5{};
  shared_ptr<string> remark6{};
  shared_ptr<string> remark7{};
  shared_ptr<string> remark8{};
  shared_ptr<string> remark9{};
  shared_ptr<string> url{};

  GetResultResponseBodyDataResultInfoRecording() {}

  explicit GetResultResponseBodyDataResultInfoRecording(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (business) {
      res["Business"] = boost::any(*business);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (callTime) {
      res["CallTime"] = boost::any(*callTime);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (callee) {
      res["Callee"] = boost::any(*callee);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (dataSetName) {
      res["DataSetName"] = boost::any(*dataSetName);
    }
    if (dialogueSize) {
      res["DialogueSize"] = boost::any(*dialogueSize);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (primaryId) {
      res["PrimaryId"] = boost::any(*primaryId);
    }
    if (remark1) {
      res["Remark1"] = boost::any(*remark1);
    }
    if (remark10) {
      res["Remark10"] = boost::any(*remark10);
    }
    if (remark11) {
      res["Remark11"] = boost::any(*remark11);
    }
    if (remark12) {
      res["Remark12"] = boost::any(*remark12);
    }
    if (remark13) {
      res["Remark13"] = boost::any(*remark13);
    }
    if (remark2) {
      res["Remark2"] = boost::any(*remark2);
    }
    if (remark3) {
      res["Remark3"] = boost::any(*remark3);
    }
    if (remark4) {
      res["Remark4"] = boost::any(*remark4);
    }
    if (remark5) {
      res["Remark5"] = boost::any(*remark5);
    }
    if (remark6) {
      res["Remark6"] = boost::any(*remark6);
    }
    if (remark7) {
      res["Remark7"] = boost::any(*remark7);
    }
    if (remark8) {
      res["Remark8"] = boost::any(*remark8);
    }
    if (remark9) {
      res["Remark9"] = boost::any(*remark9);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Business") != m.end() && !m["Business"].empty()) {
      business = make_shared<string>(boost::any_cast<string>(m["Business"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("CallTime") != m.end() && !m["CallTime"].empty()) {
      callTime = make_shared<string>(boost::any_cast<string>(m["CallTime"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<long>(boost::any_cast<long>(m["CallType"]));
    }
    if (m.find("Callee") != m.end() && !m["Callee"].empty()) {
      callee = make_shared<string>(boost::any_cast<string>(m["Callee"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("DataSetName") != m.end() && !m["DataSetName"].empty()) {
      dataSetName = make_shared<string>(boost::any_cast<string>(m["DataSetName"]));
    }
    if (m.find("DialogueSize") != m.end() && !m["DialogueSize"].empty()) {
      dialogueSize = make_shared<long>(boost::any_cast<long>(m["DialogueSize"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PrimaryId") != m.end() && !m["PrimaryId"].empty()) {
      primaryId = make_shared<string>(boost::any_cast<string>(m["PrimaryId"]));
    }
    if (m.find("Remark1") != m.end() && !m["Remark1"].empty()) {
      remark1 = make_shared<string>(boost::any_cast<string>(m["Remark1"]));
    }
    if (m.find("Remark10") != m.end() && !m["Remark10"].empty()) {
      remark10 = make_shared<string>(boost::any_cast<string>(m["Remark10"]));
    }
    if (m.find("Remark11") != m.end() && !m["Remark11"].empty()) {
      remark11 = make_shared<string>(boost::any_cast<string>(m["Remark11"]));
    }
    if (m.find("Remark12") != m.end() && !m["Remark12"].empty()) {
      remark12 = make_shared<string>(boost::any_cast<string>(m["Remark12"]));
    }
    if (m.find("Remark13") != m.end() && !m["Remark13"].empty()) {
      remark13 = make_shared<string>(boost::any_cast<string>(m["Remark13"]));
    }
    if (m.find("Remark2") != m.end() && !m["Remark2"].empty()) {
      remark2 = make_shared<string>(boost::any_cast<string>(m["Remark2"]));
    }
    if (m.find("Remark3") != m.end() && !m["Remark3"].empty()) {
      remark3 = make_shared<string>(boost::any_cast<string>(m["Remark3"]));
    }
    if (m.find("Remark4") != m.end() && !m["Remark4"].empty()) {
      remark4 = make_shared<string>(boost::any_cast<string>(m["Remark4"]));
    }
    if (m.find("Remark5") != m.end() && !m["Remark5"].empty()) {
      remark5 = make_shared<long>(boost::any_cast<long>(m["Remark5"]));
    }
    if (m.find("Remark6") != m.end() && !m["Remark6"].empty()) {
      remark6 = make_shared<string>(boost::any_cast<string>(m["Remark6"]));
    }
    if (m.find("Remark7") != m.end() && !m["Remark7"].empty()) {
      remark7 = make_shared<string>(boost::any_cast<string>(m["Remark7"]));
    }
    if (m.find("Remark8") != m.end() && !m["Remark8"].empty()) {
      remark8 = make_shared<string>(boost::any_cast<string>(m["Remark8"]));
    }
    if (m.find("Remark9") != m.end() && !m["Remark9"].empty()) {
      remark9 = make_shared<string>(boost::any_cast<string>(m["Remark9"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetResultResponseBodyDataResultInfoRecording() = default;
};
class GetResultResponseBodyDataResultInfo : public Darabonba::Model {
public:
  shared_ptr<GetResultResponseBodyDataResultInfoAgent> agent{};
  shared_ptr<GetResultResponseBodyDataResultInfoAsrResult> asrResult{};
  shared_ptr<string> assignmentTime{};
  shared_ptr<string> comments{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createTimeLong{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetResultResponseBodyDataResultInfoHitResult> hitResult{};
  shared_ptr<GetResultResponseBodyDataResultInfoHitScore> hitScore{};
  shared_ptr<string> lastDataId{};
  shared_ptr<GetResultResponseBodyDataResultInfoRecording> recording{};
  shared_ptr<string> resolver{};
  shared_ptr<long> reviewResult{};
  shared_ptr<long> reviewStatus{};
  shared_ptr<string> reviewTime{};
  shared_ptr<string> reviewTimeLong{};
  shared_ptr<long> reviewType{};
  shared_ptr<string> reviewer{};
  shared_ptr<long> score{};
  shared_ptr<long> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};

  GetResultResponseBodyDataResultInfo() {}

  explicit GetResultResponseBodyDataResultInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agent) {
      res["Agent"] = agent ? boost::any(agent->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (asrResult) {
      res["AsrResult"] = asrResult ? boost::any(asrResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (assignmentTime) {
      res["AssignmentTime"] = boost::any(*assignmentTime);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimeLong) {
      res["CreateTimeLong"] = boost::any(*createTimeLong);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (hitResult) {
      res["HitResult"] = hitResult ? boost::any(hitResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hitScore) {
      res["HitScore"] = hitScore ? boost::any(hitScore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (lastDataId) {
      res["LastDataId"] = boost::any(*lastDataId);
    }
    if (recording) {
      res["Recording"] = recording ? boost::any(recording->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resolver) {
      res["Resolver"] = boost::any(*resolver);
    }
    if (reviewResult) {
      res["ReviewResult"] = boost::any(*reviewResult);
    }
    if (reviewStatus) {
      res["ReviewStatus"] = boost::any(*reviewStatus);
    }
    if (reviewTime) {
      res["ReviewTime"] = boost::any(*reviewTime);
    }
    if (reviewTimeLong) {
      res["ReviewTimeLong"] = boost::any(*reviewTimeLong);
    }
    if (reviewType) {
      res["ReviewType"] = boost::any(*reviewType);
    }
    if (reviewer) {
      res["Reviewer"] = boost::any(*reviewer);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Agent") != m.end() && !m["Agent"].empty()) {
      if (typeid(map<string, boost::any>) == m["Agent"].type()) {
        GetResultResponseBodyDataResultInfoAgent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Agent"]));
        agent = make_shared<GetResultResponseBodyDataResultInfoAgent>(model1);
      }
    }
    if (m.find("AsrResult") != m.end() && !m["AsrResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["AsrResult"].type()) {
        GetResultResponseBodyDataResultInfoAsrResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AsrResult"]));
        asrResult = make_shared<GetResultResponseBodyDataResultInfoAsrResult>(model1);
      }
    }
    if (m.find("AssignmentTime") != m.end() && !m["AssignmentTime"].empty()) {
      assignmentTime = make_shared<string>(boost::any_cast<string>(m["AssignmentTime"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimeLong") != m.end() && !m["CreateTimeLong"].empty()) {
      createTimeLong = make_shared<string>(boost::any_cast<string>(m["CreateTimeLong"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("HitResult") != m.end() && !m["HitResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["HitResult"].type()) {
        GetResultResponseBodyDataResultInfoHitResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HitResult"]));
        hitResult = make_shared<GetResultResponseBodyDataResultInfoHitResult>(model1);
      }
    }
    if (m.find("HitScore") != m.end() && !m["HitScore"].empty()) {
      if (typeid(map<string, boost::any>) == m["HitScore"].type()) {
        GetResultResponseBodyDataResultInfoHitScore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HitScore"]));
        hitScore = make_shared<GetResultResponseBodyDataResultInfoHitScore>(model1);
      }
    }
    if (m.find("LastDataId") != m.end() && !m["LastDataId"].empty()) {
      lastDataId = make_shared<string>(boost::any_cast<string>(m["LastDataId"]));
    }
    if (m.find("Recording") != m.end() && !m["Recording"].empty()) {
      if (typeid(map<string, boost::any>) == m["Recording"].type()) {
        GetResultResponseBodyDataResultInfoRecording model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Recording"]));
        recording = make_shared<GetResultResponseBodyDataResultInfoRecording>(model1);
      }
    }
    if (m.find("Resolver") != m.end() && !m["Resolver"].empty()) {
      resolver = make_shared<string>(boost::any_cast<string>(m["Resolver"]));
    }
    if (m.find("ReviewResult") != m.end() && !m["ReviewResult"].empty()) {
      reviewResult = make_shared<long>(boost::any_cast<long>(m["ReviewResult"]));
    }
    if (m.find("ReviewStatus") != m.end() && !m["ReviewStatus"].empty()) {
      reviewStatus = make_shared<long>(boost::any_cast<long>(m["ReviewStatus"]));
    }
    if (m.find("ReviewTime") != m.end() && !m["ReviewTime"].empty()) {
      reviewTime = make_shared<string>(boost::any_cast<string>(m["ReviewTime"]));
    }
    if (m.find("ReviewTimeLong") != m.end() && !m["ReviewTimeLong"].empty()) {
      reviewTimeLong = make_shared<string>(boost::any_cast<string>(m["ReviewTimeLong"]));
    }
    if (m.find("ReviewType") != m.end() && !m["ReviewType"].empty()) {
      reviewType = make_shared<long>(boost::any_cast<long>(m["ReviewType"]));
    }
    if (m.find("Reviewer") != m.end() && !m["Reviewer"].empty()) {
      reviewer = make_shared<string>(boost::any_cast<string>(m["Reviewer"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
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
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<GetResultResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resultCountId{};
  shared_ptr<bool> success{};

  GetResultResponseBody() {}

  explicit GetResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultCountId) {
      res["ResultCountId"] = boost::any(*resultCountId);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetResultResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultCountId") != m.end() && !m["ResultCountId"].empty()) {
      resultCountId = make_shared<string>(boost::any_cast<string>(m["ResultCountId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
  shared_ptr<string> jsonStr{};

  GetResultCallbackRequest() {}

  explicit GetResultCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetResultCallbackRequest() = default;
};
class GetResultCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetResultCallbackResponseBody() {}

  explicit GetResultCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  GetResultToReviewRequest() {}

  explicit GetResultToReviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetResultToReviewRequest() = default;
};
class GetResultToReviewResponseBodyDataDialoguesDialogue : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<string> beginTime{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<string> hourMinSec{};
  shared_ptr<string> identity{};
  shared_ptr<string> role{};
  shared_ptr<long> silenceDuration{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> words{};

  GetResultToReviewResponseBodyDataDialoguesDialogue() {}

  explicit GetResultToReviewResponseBodyDataDialoguesDialogue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (hourMinSec) {
      res["HourMinSec"] = boost::any(*hourMinSec);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (words) {
      res["Words"] = boost::any(*words);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("HourMinSec") != m.end() && !m["HourMinSec"].empty()) {
      hourMinSec = make_shared<string>(boost::any_cast<string>(m["HourMinSec"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<long>(boost::any_cast<long>(m["SilenceDuration"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
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
class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> operationTime{};
  shared_ptr<long> operationType{};
  shared_ptr<long> operator_{};
  shared_ptr<string> operatorName{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (operationTime) {
      res["OperationTime"] = boost::any(*operationTime);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("OperationTime") != m.end() && !m["OperationTime"].empty()) {
      operationTime = make_shared<string>(boost::any_cast<string>(m["OperationTime"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<long>(boost::any_cast<long>(m["OperationType"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<long>(boost::any_cast<long>(m["Operator"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
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
class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord : public Darabonba::Model {
public:
  shared_ptr<string> cid{};
  shared_ptr<long> from{};
  shared_ptr<long> pid{};
  shared_ptr<string> tid{};
  shared_ptr<long> to{};
  shared_ptr<string> val{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (val) {
      res["Val"] = boost::any(*val);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      cid = make_shared<string>(boost::any_cast<string>(m["Cid"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
    if (m.find("Val") != m.end() && !m["Val"].empty()) {
      val = make_shared<string>(boost::any_cast<string>(m["Val"]));
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
class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<string> identity{};
  shared_ptr<long> pid{};
  shared_ptr<string> role{};
  shared_ptr<string> words{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (words) {
      res["Words"] = boost::any(*words);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
  }


  virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase() = default;
};
class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo : public Darabonba::Model {
public:
  shared_ptr<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid> cid{};
  shared_ptr<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords> keyWords{};
  shared_ptr<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase> phrase{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cid) {
      res["Cid"] = cid ? boost::any(cid->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keyWords) {
      res["KeyWords"] = keyWords ? boost::any(keyWords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (phrase) {
      res["Phrase"] = phrase ? boost::any(phrase->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cid"].type()) {
        GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cid"]));
        cid = make_shared<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoCid>(model1);
      }
    }
    if (m.find("KeyWords") != m.end() && !m["KeyWords"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyWords"].type()) {
        GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyWords"]));
        keyWords = make_shared<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWords>(model1);
      }
    }
    if (m.find("Phrase") != m.end() && !m["Phrase"].empty()) {
      if (typeid(map<string, boost::any>) == m["Phrase"].type()) {
        GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Phrase"]));
        phrase = make_shared<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoPhrase>(model1);
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
  shared_ptr<string> hitId{};
  shared_ptr<long> reviewResult{};
  shared_ptr<string> reviewTime{};
  shared_ptr<string> reviewer{};
  shared_ptr<long> rid{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitId) {
      res["HitId"] = boost::any(*hitId);
    }
    if (reviewResult) {
      res["ReviewResult"] = boost::any(*reviewResult);
    }
    if (reviewTime) {
      res["ReviewTime"] = boost::any(*reviewTime);
    }
    if (reviewer) {
      res["Reviewer"] = boost::any(*reviewer);
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
    if (m.find("ReviewResult") != m.end() && !m["ReviewResult"].empty()) {
      reviewResult = make_shared<long>(boost::any_cast<long>(m["ReviewResult"]));
    }
    if (m.find("ReviewTime") != m.end() && !m["ReviewTime"].empty()) {
      reviewTime = make_shared<string>(boost::any_cast<string>(m["ReviewTime"]));
    }
    if (m.find("Reviewer") != m.end() && !m["Reviewer"].empty()) {
      reviewer = make_shared<string>(boost::any_cast<string>(m["Reviewer"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
  }


  virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo() = default;
};
class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo : public Darabonba::Model {
public:
  shared_ptr<long> autoReview{};
  shared_ptr<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories> complainHistories{};
  shared_ptr<bool> complainable{};
  shared_ptr<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList> conditionHitInfoList{};
  shared_ptr<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo> reviewInfo{};
  shared_ptr<long> rid{};
  shared_ptr<string> ruleName{};
  shared_ptr<long> scoreId{};
  shared_ptr<long> scoreNum{};
  shared_ptr<long> scoreSubId{};
  shared_ptr<string> scoreSubName{};

  GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo() {}

  explicit GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoReview) {
      res["AutoReview"] = boost::any(*autoReview);
    }
    if (complainHistories) {
      res["ComplainHistories"] = complainHistories ? boost::any(complainHistories->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (complainable) {
      res["Complainable"] = boost::any(*complainable);
    }
    if (conditionHitInfoList) {
      res["ConditionHitInfoList"] = conditionHitInfoList ? boost::any(conditionHitInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reviewInfo) {
      res["ReviewInfo"] = reviewInfo ? boost::any(reviewInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    if (scoreNum) {
      res["ScoreNum"] = boost::any(*scoreNum);
    }
    if (scoreSubId) {
      res["ScoreSubId"] = boost::any(*scoreSubId);
    }
    if (scoreSubName) {
      res["ScoreSubName"] = boost::any(*scoreSubName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("ConditionHitInfoList") != m.end() && !m["ConditionHitInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConditionHitInfoList"].type()) {
        GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConditionHitInfoList"]));
        conditionHitInfoList = make_shared<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList>(model1);
      }
    }
    if (m.find("ReviewInfo") != m.end() && !m["ReviewInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReviewInfo"].type()) {
        GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReviewInfo"]));
        reviewInfo = make_shared<GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo>(model1);
      }
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("ScoreId") != m.end() && !m["ScoreId"].empty()) {
      scoreId = make_shared<long>(boost::any_cast<long>(m["ScoreId"]));
    }
    if (m.find("ScoreNum") != m.end() && !m["ScoreNum"].empty()) {
      scoreNum = make_shared<long>(boost::any_cast<long>(m["ScoreNum"]));
    }
    if (m.find("ScoreSubId") != m.end() && !m["ScoreSubId"].empty()) {
      scoreSubId = make_shared<long>(boost::any_cast<long>(m["ScoreSubId"]));
    }
    if (m.find("ScoreSubName") != m.end() && !m["ScoreSubName"].empty()) {
      scoreSubName = make_shared<string>(boost::any_cast<string>(m["ScoreSubName"]));
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
  shared_ptr<string> comments{};
  shared_ptr<string> operationTime{};
  shared_ptr<long> operationType{};
  shared_ptr<long> operator_{};
  shared_ptr<string> operatorName{};

  GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories() {}

  explicit GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (operationTime) {
      res["OperationTime"] = boost::any(*operationTime);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("OperationTime") != m.end() && !m["OperationTime"].empty()) {
      operationTime = make_shared<string>(boost::any_cast<string>(m["OperationTime"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<long>(boost::any_cast<long>(m["OperationType"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<long>(boost::any_cast<long>(m["Operator"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
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
  shared_ptr<GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories> complainHistories{};
  shared_ptr<bool> complainable{};
  shared_ptr<long> scoreId{};
  shared_ptr<long> scoreNum{};
  shared_ptr<long> scoreSubId{};
  shared_ptr<string> scoreSubName{};

  GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo() {}

  explicit GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complainHistories) {
      res["ComplainHistories"] = complainHistories ? boost::any(complainHistories->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (complainable) {
      res["Complainable"] = boost::any(*complainable);
    }
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    if (scoreNum) {
      res["ScoreNum"] = boost::any(*scoreNum);
    }
    if (scoreSubId) {
      res["ScoreSubId"] = boost::any(*scoreSubId);
    }
    if (scoreSubName) {
      res["ScoreSubName"] = boost::any(*scoreSubName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("ScoreNum") != m.end() && !m["ScoreNum"].empty()) {
      scoreNum = make_shared<long>(boost::any_cast<long>(m["ScoreNum"]));
    }
    if (m.find("ScoreSubId") != m.end() && !m["ScoreSubId"].empty()) {
      scoreSubId = make_shared<long>(boost::any_cast<long>(m["ScoreSubId"]));
    }
    if (m.find("ScoreSubName") != m.end() && !m["ScoreSubName"].empty()) {
      scoreSubName = make_shared<string>(boost::any_cast<string>(m["ScoreSubName"]));
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
class GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory : public Darabonba::Model {
public:
  shared_ptr<long> complainResult{};
  shared_ptr<long> oldScore{};
  shared_ptr<string> operatorName{};
  shared_ptr<long> reviewResult{};
  shared_ptr<long> score{};
  shared_ptr<string> timeStr{};
  shared_ptr<long> type{};

  GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory() {}

  explicit GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complainResult) {
      res["ComplainResult"] = boost::any(*complainResult);
    }
    if (oldScore) {
      res["OldScore"] = boost::any(*oldScore);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    if (reviewResult) {
      res["ReviewResult"] = boost::any(*reviewResult);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (timeStr) {
      res["TimeStr"] = boost::any(*timeStr);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplainResult") != m.end() && !m["ComplainResult"].empty()) {
      complainResult = make_shared<long>(boost::any_cast<long>(m["ComplainResult"]));
    }
    if (m.find("OldScore") != m.end() && !m["OldScore"].empty()) {
      oldScore = make_shared<long>(boost::any_cast<long>(m["OldScore"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
    if (m.find("ReviewResult") != m.end() && !m["ReviewResult"].empty()) {
      reviewResult = make_shared<long>(boost::any_cast<long>(m["ReviewResult"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
    if (m.find("TimeStr") != m.end() && !m["TimeStr"].empty()) {
      timeStr = make_shared<string>(boost::any_cast<string>(m["TimeStr"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
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
class GetResultToReviewResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> audioScheme{};
  shared_ptr<string> audioURL{};
  shared_ptr<string> comments{};
  shared_ptr<GetResultToReviewResponseBodyDataDialogues> dialogues{};
  shared_ptr<string> fileId{};
  shared_ptr<string> fileMergeName{};
  shared_ptr<GetResultToReviewResponseBodyDataHitRuleReviewInfoList> hitRuleReviewInfoList{};
  shared_ptr<GetResultToReviewResponseBodyDataManualScoreInfoList> manualScoreInfoList{};
  shared_ptr<GetResultToReviewResponseBodyDataReviewHistoryList> reviewHistoryList{};
  shared_ptr<long> status{};
  shared_ptr<long> totalScore{};
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
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (dialogues) {
      res["Dialogues"] = dialogues ? boost::any(dialogues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (fileMergeName) {
      res["FileMergeName"] = boost::any(*fileMergeName);
    }
    if (hitRuleReviewInfoList) {
      res["HitRuleReviewInfoList"] = hitRuleReviewInfoList ? boost::any(hitRuleReviewInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (manualScoreInfoList) {
      res["ManualScoreInfoList"] = manualScoreInfoList ? boost::any(manualScoreInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reviewHistoryList) {
      res["ReviewHistoryList"] = reviewHistoryList ? boost::any(reviewHistoryList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalScore) {
      res["TotalScore"] = boost::any(*totalScore);
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
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("FileMergeName") != m.end() && !m["FileMergeName"].empty()) {
      fileMergeName = make_shared<string>(boost::any_cast<string>(m["FileMergeName"]));
    }
    if (m.find("HitRuleReviewInfoList") != m.end() && !m["HitRuleReviewInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["HitRuleReviewInfoList"].type()) {
        GetResultToReviewResponseBodyDataHitRuleReviewInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HitRuleReviewInfoList"]));
        hitRuleReviewInfoList = make_shared<GetResultToReviewResponseBodyDataHitRuleReviewInfoList>(model1);
      }
    }
    if (m.find("ManualScoreInfoList") != m.end() && !m["ManualScoreInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ManualScoreInfoList"].type()) {
        GetResultToReviewResponseBodyDataManualScoreInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ManualScoreInfoList"]));
        manualScoreInfoList = make_shared<GetResultToReviewResponseBodyDataManualScoreInfoList>(model1);
      }
    }
    if (m.find("ReviewHistoryList") != m.end() && !m["ReviewHistoryList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReviewHistoryList"].type()) {
        GetResultToReviewResponseBodyDataReviewHistoryList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReviewHistoryList"]));
        reviewHistoryList = make_shared<GetResultToReviewResponseBodyDataReviewHistoryList>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TotalScore") != m.end() && !m["TotalScore"].empty()) {
      totalScore = make_shared<long>(boost::any_cast<long>(m["TotalScore"]));
    }
    if (m.find("Vid") != m.end() && !m["Vid"].empty()) {
      vid = make_shared<string>(boost::any_cast<string>(m["Vid"]));
    }
  }


  virtual ~GetResultToReviewResponseBodyData() = default;
};
class GetResultToReviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetResultToReviewResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetResultToReviewResponseBody() {}

  explicit GetResultToReviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResultToReviewResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetResultToReviewResponseBodyData>(model1);
      }
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
class GetRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  GetRuleRequest() {}

  explicit GetRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> autoReview{};
  shared_ptr<GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList> businessCategoryNameList{};
  shared_ptr<string> comments{};
  shared_ptr<string> createEmpid{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> isDelete{};
  shared_ptr<long> isOnline{};
  shared_ptr<string> lastUpdateEmpid{};
  shared_ptr<string> lastUpdateTime{};
  shared_ptr<string> name{};
  shared_ptr<string> rid{};
  shared_ptr<string> ruleLambda{};
  shared_ptr<long> ruleScoreType{};
  shared_ptr<long> scoreId{};
  shared_ptr<string> scoreName{};
  shared_ptr<long> scoreSubId{};
  shared_ptr<string> scoreSubName{};
  shared_ptr<string> startTime{};
  shared_ptr<long> status{};
  shared_ptr<long> type{};
  shared_ptr<string> weight{};

  GetRuleResponseBodyDataRulesRuleInfo() {}

  explicit GetRuleResponseBodyDataRulesRuleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoReview) {
      res["AutoReview"] = boost::any(*autoReview);
    }
    if (businessCategoryNameList) {
      res["BusinessCategoryNameList"] = businessCategoryNameList ? boost::any(businessCategoryNameList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createEmpid) {
      res["CreateEmpid"] = boost::any(*createEmpid);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (isDelete) {
      res["IsDelete"] = boost::any(*isDelete);
    }
    if (isOnline) {
      res["IsOnline"] = boost::any(*isOnline);
    }
    if (lastUpdateEmpid) {
      res["LastUpdateEmpid"] = boost::any(*lastUpdateEmpid);
    }
    if (lastUpdateTime) {
      res["LastUpdateTime"] = boost::any(*lastUpdateTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (ruleLambda) {
      res["RuleLambda"] = boost::any(*ruleLambda);
    }
    if (ruleScoreType) {
      res["RuleScoreType"] = boost::any(*ruleScoreType);
    }
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    if (scoreName) {
      res["ScoreName"] = boost::any(*scoreName);
    }
    if (scoreSubId) {
      res["ScoreSubId"] = boost::any(*scoreSubId);
    }
    if (scoreSubName) {
      res["ScoreSubName"] = boost::any(*scoreSubName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoReview") != m.end() && !m["AutoReview"].empty()) {
      autoReview = make_shared<long>(boost::any_cast<long>(m["AutoReview"]));
    }
    if (m.find("BusinessCategoryNameList") != m.end() && !m["BusinessCategoryNameList"].empty()) {
      if (typeid(map<string, boost::any>) == m["BusinessCategoryNameList"].type()) {
        GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BusinessCategoryNameList"]));
        businessCategoryNameList = make_shared<GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList>(model1);
      }
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateEmpid") != m.end() && !m["CreateEmpid"].empty()) {
      createEmpid = make_shared<string>(boost::any_cast<string>(m["CreateEmpid"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IsDelete") != m.end() && !m["IsDelete"].empty()) {
      isDelete = make_shared<long>(boost::any_cast<long>(m["IsDelete"]));
    }
    if (m.find("IsOnline") != m.end() && !m["IsOnline"].empty()) {
      isOnline = make_shared<long>(boost::any_cast<long>(m["IsOnline"]));
    }
    if (m.find("LastUpdateEmpid") != m.end() && !m["LastUpdateEmpid"].empty()) {
      lastUpdateEmpid = make_shared<string>(boost::any_cast<string>(m["LastUpdateEmpid"]));
    }
    if (m.find("LastUpdateTime") != m.end() && !m["LastUpdateTime"].empty()) {
      lastUpdateTime = make_shared<string>(boost::any_cast<string>(m["LastUpdateTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
    if (m.find("RuleLambda") != m.end() && !m["RuleLambda"].empty()) {
      ruleLambda = make_shared<string>(boost::any_cast<string>(m["RuleLambda"]));
    }
    if (m.find("RuleScoreType") != m.end() && !m["RuleScoreType"].empty()) {
      ruleScoreType = make_shared<long>(boost::any_cast<long>(m["RuleScoreType"]));
    }
    if (m.find("ScoreId") != m.end() && !m["ScoreId"].empty()) {
      scoreId = make_shared<long>(boost::any_cast<long>(m["ScoreId"]));
    }
    if (m.find("ScoreName") != m.end() && !m["ScoreName"].empty()) {
      scoreName = make_shared<string>(boost::any_cast<string>(m["ScoreName"]));
    }
    if (m.find("ScoreSubId") != m.end() && !m["ScoreSubId"].empty()) {
      scoreSubId = make_shared<long>(boost::any_cast<long>(m["ScoreSubId"]));
    }
    if (m.find("ScoreSubName") != m.end() && !m["ScoreSubName"].empty()) {
      scoreSubName = make_shared<string>(boost::any_cast<string>(m["ScoreSubName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<string>(boost::any_cast<string>(m["Weight"]));
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
  shared_ptr<string> code{};
  shared_ptr<GetRuleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRuleResponseBody() {}

  explicit GetRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRuleResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  GetRuleCategoryRequest() {}

  explicit GetRuleCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetRuleCategoryRequest() = default;
};
class GetRuleCategoryResponseBodyDataRuleCountInfo : public Darabonba::Model {
public:
  shared_ptr<bool> select{};
  shared_ptr<long> type{};
  shared_ptr<string> typeName_{};

  GetRuleCategoryResponseBodyDataRuleCountInfo() {}

  explicit GetRuleCategoryResponseBodyDataRuleCountInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (select) {
      res["Select"] = boost::any(*select);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Select") != m.end() && !m["Select"].empty()) {
      select = make_shared<bool>(boost::any_cast<bool>(m["Select"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
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
  shared_ptr<string> code{};
  shared_ptr<GetRuleCategoryResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRuleCategoryResponseBody() {}

  explicit GetRuleCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRuleCategoryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRuleCategoryResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  GetRuleDetailRequest() {}

  explicit GetRuleDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetRuleDetailRequest() = default;
};
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor : public Darabonba::Model {
public:
  shared_ptr<string> anchorCid{};
  shared_ptr<long> hitTime{};
  shared_ptr<string> location{};

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
    if (hitTime) {
      res["HitTime"] = boost::any(*hitTime);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorCid") != m.end() && !m["AnchorCid"].empty()) {
      anchorCid = make_shared<string>(boost::any_cast<string>(m["AnchorCid"]));
    }
    if (m.find("HitTime") != m.end() && !m["HitTime"].empty()) {
      hitTime = make_shared<long>(boost::any_cast<long>(m["HitTime"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
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
  shared_ptr<bool> absolute{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor> anchor{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange> range{};
  shared_ptr<string> role{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (absolute) {
      res["Absolute"] = boost::any(*absolute);
    }
    if (anchor) {
      res["Anchor"] = anchor ? boost::any(anchor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (range) {
      res["Range"] = range ? boost::any(range->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange() = default;
};
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo : public Darabonba::Model {
public:
  shared_ptr<vector<string>> antModelInfo{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (antModelInfo) {
      res["AntModelInfo"] = boost::any(*antModelInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AntModelInfo") != m.end() && !m["AntModelInfo"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AntModelInfo"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AntModelInfo"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      antModelInfo = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo() = default;
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
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues : public Darabonba::Model {
public:
  shared_ptr<vector<string>> pvalues{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pvalues) {
      res["Pvalues"] = boost::any(*pvalues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pvalues") != m.end() && !m["Pvalues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Pvalues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Pvalues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      pvalues = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues() = default;
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
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam : public Darabonba::Model {
public:
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo> antModelInfo{};
  shared_ptr<bool> average{};
  shared_ptr<string> beginType{};
  shared_ptr<long> checkType{};
  shared_ptr<string> compareOperator{};
  shared_ptr<bool> contextChatMatch{};
  shared_ptr<long> delayTime{};
  shared_ptr<bool> differentRole{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes> excludes{};
  shared_ptr<long> from{};
  shared_ptr<bool> fromEnd{};
  shared_ptr<long> hitTime{};
  shared_ptr<bool> inSentence{};
  shared_ptr<long> interval{};
  shared_ptr<bool> keywordExtension{};
  shared_ptr<long> keywordMatchSize{};
  shared_ptr<long> maxEmotionChangeValue{};
  shared_ptr<long> minWordSize{};
  shared_ptr<string> notRegex{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords> operKeyWords{};
  shared_ptr<string> phrase{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues> pvalues{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences> references{};
  shared_ptr<string> regex{};
  shared_ptr<long> score{};
  shared_ptr<double> similarityThreshold{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences> similarlySentences{};
  shared_ptr<long> target{};
  shared_ptr<string> targetRole{};
  shared_ptr<double> threshold{};
  shared_ptr<long> velocityInMint{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (antModelInfo) {
      res["AntModelInfo"] = antModelInfo ? boost::any(antModelInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (average) {
      res["Average"] = boost::any(*average);
    }
    if (beginType) {
      res["BeginType"] = boost::any(*beginType);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (compareOperator) {
      res["CompareOperator"] = boost::any(*compareOperator);
    }
    if (contextChatMatch) {
      res["ContextChatMatch"] = boost::any(*contextChatMatch);
    }
    if (delayTime) {
      res["DelayTime"] = boost::any(*delayTime);
    }
    if (differentRole) {
      res["DifferentRole"] = boost::any(*differentRole);
    }
    if (excludes) {
      res["Excludes"] = excludes ? boost::any(excludes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (fromEnd) {
      res["FromEnd"] = boost::any(*fromEnd);
    }
    if (hitTime) {
      res["HitTime"] = boost::any(*hitTime);
    }
    if (inSentence) {
      res["InSentence"] = boost::any(*inSentence);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (keywordExtension) {
      res["KeywordExtension"] = boost::any(*keywordExtension);
    }
    if (keywordMatchSize) {
      res["KeywordMatchSize"] = boost::any(*keywordMatchSize);
    }
    if (maxEmotionChangeValue) {
      res["MaxEmotionChangeValue"] = boost::any(*maxEmotionChangeValue);
    }
    if (minWordSize) {
      res["MinWordSize"] = boost::any(*minWordSize);
    }
    if (notRegex) {
      res["NotRegex"] = boost::any(*notRegex);
    }
    if (operKeyWords) {
      res["OperKeyWords"] = operKeyWords ? boost::any(operKeyWords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (phrase) {
      res["Phrase"] = boost::any(*phrase);
    }
    if (pvalues) {
      res["Pvalues"] = pvalues ? boost::any(pvalues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (references) {
      res["References"] = references ? boost::any(references->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regex) {
      res["Regex"] = boost::any(*regex);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (similarityThreshold) {
      res["Similarity_threshold"] = boost::any(*similarityThreshold);
    }
    if (similarlySentences) {
      res["SimilarlySentences"] = similarlySentences ? boost::any(similarlySentences->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (targetRole) {
      res["TargetRole"] = boost::any(*targetRole);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (velocityInMint) {
      res["VelocityInMint"] = boost::any(*velocityInMint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AntModelInfo") != m.end() && !m["AntModelInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AntModelInfo"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AntModelInfo"]));
        antModelInfo = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo>(model1);
      }
    }
    if (m.find("Average") != m.end() && !m["Average"].empty()) {
      average = make_shared<bool>(boost::any_cast<bool>(m["Average"]));
    }
    if (m.find("BeginType") != m.end() && !m["BeginType"].empty()) {
      beginType = make_shared<string>(boost::any_cast<string>(m["BeginType"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<long>(boost::any_cast<long>(m["CheckType"]));
    }
    if (m.find("CompareOperator") != m.end() && !m["CompareOperator"].empty()) {
      compareOperator = make_shared<string>(boost::any_cast<string>(m["CompareOperator"]));
    }
    if (m.find("ContextChatMatch") != m.end() && !m["ContextChatMatch"].empty()) {
      contextChatMatch = make_shared<bool>(boost::any_cast<bool>(m["ContextChatMatch"]));
    }
    if (m.find("DelayTime") != m.end() && !m["DelayTime"].empty()) {
      delayTime = make_shared<long>(boost::any_cast<long>(m["DelayTime"]));
    }
    if (m.find("DifferentRole") != m.end() && !m["DifferentRole"].empty()) {
      differentRole = make_shared<bool>(boost::any_cast<bool>(m["DifferentRole"]));
    }
    if (m.find("Excludes") != m.end() && !m["Excludes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Excludes"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Excludes"]));
        excludes = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes>(model1);
      }
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("FromEnd") != m.end() && !m["FromEnd"].empty()) {
      fromEnd = make_shared<bool>(boost::any_cast<bool>(m["FromEnd"]));
    }
    if (m.find("HitTime") != m.end() && !m["HitTime"].empty()) {
      hitTime = make_shared<long>(boost::any_cast<long>(m["HitTime"]));
    }
    if (m.find("InSentence") != m.end() && !m["InSentence"].empty()) {
      inSentence = make_shared<bool>(boost::any_cast<bool>(m["InSentence"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("KeywordExtension") != m.end() && !m["KeywordExtension"].empty()) {
      keywordExtension = make_shared<bool>(boost::any_cast<bool>(m["KeywordExtension"]));
    }
    if (m.find("KeywordMatchSize") != m.end() && !m["KeywordMatchSize"].empty()) {
      keywordMatchSize = make_shared<long>(boost::any_cast<long>(m["KeywordMatchSize"]));
    }
    if (m.find("MaxEmotionChangeValue") != m.end() && !m["MaxEmotionChangeValue"].empty()) {
      maxEmotionChangeValue = make_shared<long>(boost::any_cast<long>(m["MaxEmotionChangeValue"]));
    }
    if (m.find("MinWordSize") != m.end() && !m["MinWordSize"].empty()) {
      minWordSize = make_shared<long>(boost::any_cast<long>(m["MinWordSize"]));
    }
    if (m.find("NotRegex") != m.end() && !m["NotRegex"].empty()) {
      notRegex = make_shared<string>(boost::any_cast<string>(m["NotRegex"]));
    }
    if (m.find("OperKeyWords") != m.end() && !m["OperKeyWords"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperKeyWords"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperKeyWords"]));
        operKeyWords = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamOperKeyWords>(model1);
      }
    }
    if (m.find("Phrase") != m.end() && !m["Phrase"].empty()) {
      phrase = make_shared<string>(boost::any_cast<string>(m["Phrase"]));
    }
    if (m.find("Pvalues") != m.end() && !m["Pvalues"].empty()) {
      if (typeid(map<string, boost::any>) == m["Pvalues"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Pvalues"]));
        pvalues = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues>(model1);
      }
    }
    if (m.find("References") != m.end() && !m["References"].empty()) {
      if (typeid(map<string, boost::any>) == m["References"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["References"]));
        references = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamReferences>(model1);
      }
    }
    if (m.find("Regex") != m.end() && !m["Regex"].empty()) {
      regex = make_shared<string>(boost::any_cast<string>(m["Regex"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
    if (m.find("Similarity_threshold") != m.end() && !m["Similarity_threshold"].empty()) {
      similarityThreshold = make_shared<double>(boost::any_cast<double>(m["Similarity_threshold"]));
    }
    if (m.find("SimilarlySentences") != m.end() && !m["SimilarlySentences"].empty()) {
      if (typeid(map<string, boost::any>) == m["SimilarlySentences"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SimilarlySentences"]));
        similarlySentences = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamSimilarlySentences>(model1);
      }
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["Target"]));
    }
    if (m.find("TargetRole") != m.end() && !m["TargetRole"].empty()) {
      targetRole = make_shared<string>(boost::any_cast<string>(m["TargetRole"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("VelocityInMint") != m.end() && !m["VelocityInMint"].empty()) {
      velocityInMint = make_shared<long>(boost::any_cast<long>(m["VelocityInMint"]));
    }
  }


  virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam() = default;
};
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> oid{};
  shared_ptr<string> operName{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam> param{};
  shared_ptr<string> type{};

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
    if (operName) {
      res["OperName"] = boost::any(*operName);
    }
    if (param) {
      res["Param"] = param ? boost::any(param->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Oid") != m.end() && !m["Oid"].empty()) {
      oid = make_shared<string>(boost::any_cast<string>(m["Oid"]));
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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
class GetRuleDetailResponseBodyDataConditionsConditionBasicInfo : public Darabonba::Model {
public:
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange> checkRange{};
  shared_ptr<string> conditionInfoCid{};
  shared_ptr<string> operLambda{};
  shared_ptr<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators> operators{};

  GetRuleDetailResponseBodyDataConditionsConditionBasicInfo() {}

  explicit GetRuleDetailResponseBodyDataConditionsConditionBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkRange) {
      res["CheckRange"] = checkRange ? boost::any(checkRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (conditionInfoCid) {
      res["ConditionInfoCid"] = boost::any(*conditionInfoCid);
    }
    if (operLambda) {
      res["OperLambda"] = boost::any(*operLambda);
    }
    if (operators) {
      res["Operators"] = operators ? boost::any(operators->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckRange") != m.end() && !m["CheckRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["CheckRange"].type()) {
        GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CheckRange"]));
        checkRange = make_shared<GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange>(model1);
      }
    }
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
class GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo : public Darabonba::Model {
public:
  shared_ptr<long> bid{};
  shared_ptr<string> businessName{};
  shared_ptr<long> serviceType{};

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
    if (businessName) {
      res["BusinessName"] = boost::any(*businessName);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<long>(boost::any_cast<long>(m["Bid"]));
    }
    if (m.find("BusinessName") != m.end() && !m["BusinessName"].empty()) {
      businessName = make_shared<string>(boost::any_cast<string>(m["BusinessName"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<long>(boost::any_cast<long>(m["ServiceType"]));
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
class GetRuleDetailResponseBodyDataRulesRuleBasicInfo : public Darabonba::Model {
public:
  shared_ptr<GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories> businessCategories{};
  shared_ptr<string> rid{};
  shared_ptr<string> ruleLambda{};
  shared_ptr<GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers> triggers{};

  GetRuleDetailResponseBodyDataRulesRuleBasicInfo() {}

  explicit GetRuleDetailResponseBodyDataRulesRuleBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessCategories) {
      res["BusinessCategories"] = businessCategories ? boost::any(businessCategories->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (ruleLambda) {
      res["RuleLambda"] = boost::any(*ruleLambda);
    }
    if (triggers) {
      res["Triggers"] = triggers ? boost::any(triggers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessCategories") != m.end() && !m["BusinessCategories"].empty()) {
      if (typeid(map<string, boost::any>) == m["BusinessCategories"].type()) {
        GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BusinessCategories"]));
        businessCategories = make_shared<GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories>(model1);
      }
    }
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
  shared_ptr<long> count{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
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
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
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
  shared_ptr<string> code{};
  shared_ptr<GetRuleDetailResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRuleDetailResponseBody() {}

  explicit GetRuleDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRuleDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRuleDetailResponseBodyData>(model1);
      }
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
class GetScoreInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  GetScoreInfoRequest() {}

  explicit GetScoreInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetScoreInfoRequest() = default;
};
class GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam : public Darabonba::Model {
public:
  shared_ptr<long> scoreNum{};
  shared_ptr<long> scoreSubId{};
  shared_ptr<string> scoreSubName{};
  shared_ptr<long> scoreType{};

  GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam() {}

  explicit GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreNum) {
      res["ScoreNum"] = boost::any(*scoreNum);
    }
    if (scoreSubId) {
      res["ScoreSubId"] = boost::any(*scoreSubId);
    }
    if (scoreSubName) {
      res["ScoreSubName"] = boost::any(*scoreSubName);
    }
    if (scoreType) {
      res["ScoreType"] = boost::any(*scoreType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreNum") != m.end() && !m["ScoreNum"].empty()) {
      scoreNum = make_shared<long>(boost::any_cast<long>(m["ScoreNum"]));
    }
    if (m.find("ScoreSubId") != m.end() && !m["ScoreSubId"].empty()) {
      scoreSubId = make_shared<long>(boost::any_cast<long>(m["ScoreSubId"]));
    }
    if (m.find("ScoreSubName") != m.end() && !m["ScoreSubName"].empty()) {
      scoreSubName = make_shared<string>(boost::any_cast<string>(m["ScoreSubName"]));
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
  shared_ptr<long> scoreId{};
  shared_ptr<GetScoreInfoResponseBodyDataScorePoScoreInfos> scoreInfos{};
  shared_ptr<string> scoreName{};

  GetScoreInfoResponseBodyDataScorePo() {}

  explicit GetScoreInfoResponseBodyDataScorePo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    if (scoreInfos) {
      res["ScoreInfos"] = scoreInfos ? boost::any(scoreInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scoreName) {
      res["ScoreName"] = boost::any(*scoreName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreId") != m.end() && !m["ScoreId"].empty()) {
      scoreId = make_shared<long>(boost::any_cast<long>(m["ScoreId"]));
    }
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
  shared_ptr<string> code{};
  shared_ptr<GetScoreInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetScoreInfoResponseBody() {}

  explicit GetScoreInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetScoreInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetScoreInfoResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  GetSkillGroupConfigRequest() {}

  explicit GetSkillGroupConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetSkillGroupConfigRequest() = default;
};
class GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo : public Darabonba::Model {
public:
  shared_ptr<long> rid{};
  shared_ptr<string> ruleName{};

  GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo() {}

  explicit GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
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
  shared_ptr<long> rid{};
  shared_ptr<string> ruleName{};

  GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo() {}

  explicit GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
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
  shared_ptr<long> allContentQualityCheck{};
  shared_ptr<string> allRids{};
  shared_ptr<GetSkillGroupConfigResponseBodyDataAllRuleList> allRuleList{};
  shared_ptr<string> createTime{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> name{};
  shared_ptr<long> qualityCheckType{};
  shared_ptr<string> rid{};
  shared_ptr<GetSkillGroupConfigResponseBodyDataRuleList> ruleList{};
  shared_ptr<long> skillGroupFrom{};
  shared_ptr<string> skillGroupId{};
  shared_ptr<string> skillGroupName{};
  shared_ptr<long> status{};
  shared_ptr<long> type{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> vocabId{};
  shared_ptr<string> vocabName{};

  GetSkillGroupConfigResponseBodyData() {}

  explicit GetSkillGroupConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allContentQualityCheck) {
      res["AllContentQualityCheck"] = boost::any(*allContentQualityCheck);
    }
    if (allRids) {
      res["AllRids"] = boost::any(*allRids);
    }
    if (allRuleList) {
      res["AllRuleList"] = allRuleList ? boost::any(allRuleList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (qualityCheckType) {
      res["QualityCheckType"] = boost::any(*qualityCheckType);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (ruleList) {
      res["RuleList"] = ruleList ? boost::any(ruleList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (skillGroupFrom) {
      res["SkillGroupFrom"] = boost::any(*skillGroupFrom);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (skillGroupName) {
      res["SkillGroupName"] = boost::any(*skillGroupName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (vocabId) {
      res["VocabId"] = boost::any(*vocabId);
    }
    if (vocabName) {
      res["VocabName"] = boost::any(*vocabName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllContentQualityCheck") != m.end() && !m["AllContentQualityCheck"].empty()) {
      allContentQualityCheck = make_shared<long>(boost::any_cast<long>(m["AllContentQualityCheck"]));
    }
    if (m.find("AllRids") != m.end() && !m["AllRids"].empty()) {
      allRids = make_shared<string>(boost::any_cast<string>(m["AllRids"]));
    }
    if (m.find("AllRuleList") != m.end() && !m["AllRuleList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AllRuleList"].type()) {
        GetSkillGroupConfigResponseBodyDataAllRuleList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AllRuleList"]));
        allRuleList = make_shared<GetSkillGroupConfigResponseBodyDataAllRuleList>(model1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("QualityCheckType") != m.end() && !m["QualityCheckType"].empty()) {
      qualityCheckType = make_shared<long>(boost::any_cast<long>(m["QualityCheckType"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
    if (m.find("RuleList") != m.end() && !m["RuleList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleList"].type()) {
        GetSkillGroupConfigResponseBodyDataRuleList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleList"]));
        ruleList = make_shared<GetSkillGroupConfigResponseBodyDataRuleList>(model1);
      }
    }
    if (m.find("SkillGroupFrom") != m.end() && !m["SkillGroupFrom"].empty()) {
      skillGroupFrom = make_shared<long>(boost::any_cast<long>(m["SkillGroupFrom"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<string>(boost::any_cast<string>(m["SkillGroupId"]));
    }
    if (m.find("SkillGroupName") != m.end() && !m["SkillGroupName"].empty()) {
      skillGroupName = make_shared<string>(boost::any_cast<string>(m["SkillGroupName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VocabId") != m.end() && !m["VocabId"].empty()) {
      vocabId = make_shared<long>(boost::any_cast<long>(m["VocabId"]));
    }
    if (m.find("VocabName") != m.end() && !m["VocabName"].empty()) {
      vocabName = make_shared<string>(boost::any_cast<string>(m["VocabName"]));
    }
  }


  virtual ~GetSkillGroupConfigResponseBodyData() = default;
};
class GetSkillGroupConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetSkillGroupConfigResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetSkillGroupConfigResponseBody() {}

  explicit GetSkillGroupConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSkillGroupConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSkillGroupConfigResponseBodyData>(model1);
      }
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
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> skillGroup{};

  GetSyncResultResponseBodyDataAgent() {}

  explicit GetSyncResultResponseBodyDataAgent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (skillGroup) {
      res["SkillGroup"] = boost::any(*skillGroup);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SkillGroup") != m.end() && !m["SkillGroup"].empty()) {
      skillGroup = make_shared<string>(boost::any_cast<string>(m["SkillGroup"]));
    }
  }


  virtual ~GetSyncResultResponseBodyDataAgent() = default;
};
class GetSyncResultResponseBodyDataAsrResult : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<string> role{};
  shared_ptr<long> silenceDuration{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> words{};

  GetSyncResultResponseBodyDataAsrResult() {}

  explicit GetSyncResultResponseBodyDataAsrResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (words) {
      res["Words"] = boost::any(*words);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<long>(boost::any_cast<long>(m["SilenceDuration"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
  }


  virtual ~GetSyncResultResponseBodyDataAsrResult() = default;
};
class GetSyncResultResponseBodyDataHitResultHitsKeyWords : public Darabonba::Model {
public:
  shared_ptr<string> cid{};
  shared_ptr<long> from{};
  shared_ptr<long> to{};
  shared_ptr<string> val{};

  GetSyncResultResponseBodyDataHitResultHitsKeyWords() {}

  explicit GetSyncResultResponseBodyDataHitResultHitsKeyWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (val) {
      res["Val"] = boost::any(*val);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      cid = make_shared<string>(boost::any_cast<string>(m["Cid"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
    if (m.find("Val") != m.end() && !m["Val"].empty()) {
      val = make_shared<string>(boost::any_cast<string>(m["Val"]));
    }
  }


  virtual ~GetSyncResultResponseBodyDataHitResultHitsKeyWords() = default;
};
class GetSyncResultResponseBodyDataHitResultHitsPhrase : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<string> role{};
  shared_ptr<long> silenceDuration{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> words{};

  GetSyncResultResponseBodyDataHitResultHitsPhrase() {}

  explicit GetSyncResultResponseBodyDataHitResultHitsPhrase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (words) {
      res["Words"] = boost::any(*words);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<long>(boost::any_cast<long>(m["SilenceDuration"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
  }


  virtual ~GetSyncResultResponseBodyDataHitResultHitsPhrase() = default;
};
class GetSyncResultResponseBodyDataHitResultHits : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cid{};
  shared_ptr<vector<GetSyncResultResponseBodyDataHitResultHitsKeyWords>> keyWords{};
  shared_ptr<GetSyncResultResponseBodyDataHitResultHitsPhrase> phrase{};

  GetSyncResultResponseBodyDataHitResultHits() {}

  explicit GetSyncResultResponseBodyDataHitResultHits(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    if (keyWords) {
      vector<boost::any> temp1;
      for(auto item1:*keyWords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyWords"] = boost::any(temp1);
    }
    if (phrase) {
      res["Phrase"] = phrase ? boost::any(phrase->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Phrase") != m.end() && !m["Phrase"].empty()) {
      if (typeid(map<string, boost::any>) == m["Phrase"].type()) {
        GetSyncResultResponseBodyDataHitResultHitsPhrase model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Phrase"]));
        phrase = make_shared<GetSyncResultResponseBodyDataHitResultHitsPhrase>(model1);
      }
    }
  }


  virtual ~GetSyncResultResponseBodyDataHitResultHits() = default;
};
class GetSyncResultResponseBodyDataHitResult : public Darabonba::Model {
public:
  shared_ptr<vector<GetSyncResultResponseBodyDataHitResultHits>> hits{};
  shared_ptr<string> name{};
  shared_ptr<long> reviewResult{};
  shared_ptr<string> rid{};
  shared_ptr<string> type{};

  GetSyncResultResponseBodyDataHitResult() {}

  explicit GetSyncResultResponseBodyDataHitResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hits) {
      vector<boost::any> temp1;
      for(auto item1:*hits){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hits"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (reviewResult) {
      res["ReviewResult"] = boost::any(*reviewResult);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ReviewResult") != m.end() && !m["ReviewResult"].empty()) {
      reviewResult = make_shared<long>(boost::any_cast<long>(m["ReviewResult"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetSyncResultResponseBodyDataHitResult() = default;
};
class GetSyncResultResponseBodyDataRecording : public Darabonba::Model {
public:
  shared_ptr<string> business{};
  shared_ptr<string> callId{};
  shared_ptr<string> callTime{};
  shared_ptr<long> callType{};
  shared_ptr<string> callee{};
  shared_ptr<string> caller{};
  shared_ptr<string> dataSetName{};
  shared_ptr<long> duration{};
  shared_ptr<long> durationAudio{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> primaryId{};
  shared_ptr<string> remark1{};
  shared_ptr<string> remark2{};
  shared_ptr<string> remark3{};
  shared_ptr<string> url{};

  GetSyncResultResponseBodyDataRecording() {}

  explicit GetSyncResultResponseBodyDataRecording(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (business) {
      res["Business"] = boost::any(*business);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (callTime) {
      res["CallTime"] = boost::any(*callTime);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (callee) {
      res["Callee"] = boost::any(*callee);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (dataSetName) {
      res["DataSetName"] = boost::any(*dataSetName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (durationAudio) {
      res["DurationAudio"] = boost::any(*durationAudio);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (primaryId) {
      res["PrimaryId"] = boost::any(*primaryId);
    }
    if (remark1) {
      res["Remark1"] = boost::any(*remark1);
    }
    if (remark2) {
      res["Remark2"] = boost::any(*remark2);
    }
    if (remark3) {
      res["Remark3"] = boost::any(*remark3);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Business") != m.end() && !m["Business"].empty()) {
      business = make_shared<string>(boost::any_cast<string>(m["Business"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("CallTime") != m.end() && !m["CallTime"].empty()) {
      callTime = make_shared<string>(boost::any_cast<string>(m["CallTime"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<long>(boost::any_cast<long>(m["CallType"]));
    }
    if (m.find("Callee") != m.end() && !m["Callee"].empty()) {
      callee = make_shared<string>(boost::any_cast<string>(m["Callee"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("DataSetName") != m.end() && !m["DataSetName"].empty()) {
      dataSetName = make_shared<string>(boost::any_cast<string>(m["DataSetName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("DurationAudio") != m.end() && !m["DurationAudio"].empty()) {
      durationAudio = make_shared<long>(boost::any_cast<long>(m["DurationAudio"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PrimaryId") != m.end() && !m["PrimaryId"].empty()) {
      primaryId = make_shared<string>(boost::any_cast<string>(m["PrimaryId"]));
    }
    if (m.find("Remark1") != m.end() && !m["Remark1"].empty()) {
      remark1 = make_shared<string>(boost::any_cast<string>(m["Remark1"]));
    }
    if (m.find("Remark2") != m.end() && !m["Remark2"].empty()) {
      remark2 = make_shared<string>(boost::any_cast<string>(m["Remark2"]));
    }
    if (m.find("Remark3") != m.end() && !m["Remark3"].empty()) {
      remark3 = make_shared<string>(boost::any_cast<string>(m["Remark3"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetSyncResultResponseBodyDataRecording() = default;
};
class GetSyncResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetSyncResultResponseBodyDataAgent> agent{};
  shared_ptr<vector<GetSyncResultResponseBodyDataAsrResult>> asrResult{};
  shared_ptr<string> comments{};
  shared_ptr<string> createTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<GetSyncResultResponseBodyDataHitResult>> hitResult{};
  shared_ptr<GetSyncResultResponseBodyDataRecording> recording{};
  shared_ptr<string> resolver{};
  shared_ptr<long> reviewResult{};
  shared_ptr<long> reviewStatus{};
  shared_ptr<string> reviewer{};
  shared_ptr<long> score{};
  shared_ptr<long> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};

  GetSyncResultResponseBodyData() {}

  explicit GetSyncResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (hitResult) {
      vector<boost::any> temp1;
      for(auto item1:*hitResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitResult"] = boost::any(temp1);
    }
    if (recording) {
      res["Recording"] = recording ? boost::any(recording->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resolver) {
      res["Resolver"] = boost::any(*resolver);
    }
    if (reviewResult) {
      res["ReviewResult"] = boost::any(*reviewResult);
    }
    if (reviewStatus) {
      res["ReviewStatus"] = boost::any(*reviewStatus);
    }
    if (reviewer) {
      res["Reviewer"] = boost::any(*reviewer);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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
    if (m.find("Recording") != m.end() && !m["Recording"].empty()) {
      if (typeid(map<string, boost::any>) == m["Recording"].type()) {
        GetSyncResultResponseBodyDataRecording model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Recording"]));
        recording = make_shared<GetSyncResultResponseBodyDataRecording>(model1);
      }
    }
    if (m.find("Resolver") != m.end() && !m["Resolver"].empty()) {
      resolver = make_shared<string>(boost::any_cast<string>(m["Resolver"]));
    }
    if (m.find("ReviewResult") != m.end() && !m["ReviewResult"].empty()) {
      reviewResult = make_shared<long>(boost::any_cast<long>(m["ReviewResult"]));
    }
    if (m.find("ReviewStatus") != m.end() && !m["ReviewStatus"].empty()) {
      reviewStatus = make_shared<long>(boost::any_cast<long>(m["ReviewStatus"]));
    }
    if (m.find("Reviewer") != m.end() && !m["Reviewer"].empty()) {
      reviewer = make_shared<string>(boost::any_cast<string>(m["Reviewer"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~GetSyncResultResponseBodyData() = default;
};
class GetSyncResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<vector<GetSyncResultResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resultCountId{};
  shared_ptr<bool> success{};

  GetSyncResultResponseBody() {}

  explicit GetSyncResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultCountId) {
      res["ResultCountId"] = boost::any(*resultCountId);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultCountId") != m.end() && !m["ResultCountId"].empty()) {
      resultCountId = make_shared<string>(boost::any_cast<string>(m["ResultCountId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class GetThesaurusBySynonymForApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  GetThesaurusBySynonymForApiRequest() {}

  explicit GetThesaurusBySynonymForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> id{};
  shared_ptr<GetThesaurusBySynonymForApiResponseBodyDataThesaurusPoSynonymList> synonymList{};

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
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (synonymList) {
      res["SynonymList"] = synonymList ? boost::any(synonymList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Business") != m.end() && !m["Business"].empty()) {
      business = make_shared<string>(boost::any_cast<string>(m["Business"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("SynonymList") != m.end() && !m["SynonymList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SynonymList"].type()) {
        GetThesaurusBySynonymForApiResponseBodyDataThesaurusPoSynonymList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SynonymList"]));
        synonymList = make_shared<GetThesaurusBySynonymForApiResponseBodyDataThesaurusPoSynonymList>(model1);
      }
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
  shared_ptr<string> code{};
  shared_ptr<GetThesaurusBySynonymForApiResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetThesaurusBySynonymForApiResponseBody() {}

  explicit GetThesaurusBySynonymForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetThesaurusBySynonymForApiResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetThesaurusBySynonymForApiResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  HandleComplaintRequest() {}

  explicit HandleComplaintRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~HandleComplaintRequest() = default;
};
class HandleComplaintResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  HandleComplaintResponseBody() {}

  explicit HandleComplaintResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  InsertScoreForApiRequest() {}

  explicit InsertScoreForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InsertScoreForApiRequest() = default;
};
class InsertScoreForApiResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> scoreId{};
  shared_ptr<string> scoreName{};

  InsertScoreForApiResponseBodyData() {}

  explicit InsertScoreForApiResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreId) {
      res["ScoreId"] = boost::any(*scoreId);
    }
    if (scoreName) {
      res["ScoreName"] = boost::any(*scoreName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreId") != m.end() && !m["ScoreId"].empty()) {
      scoreId = make_shared<long>(boost::any_cast<long>(m["ScoreId"]));
    }
    if (m.find("ScoreName") != m.end() && !m["ScoreName"].empty()) {
      scoreName = make_shared<string>(boost::any_cast<string>(m["ScoreName"]));
    }
  }


  virtual ~InsertScoreForApiResponseBodyData() = default;
};
class InsertScoreForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<InsertScoreForApiResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  InsertScoreForApiResponseBody() {}

  explicit InsertScoreForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InsertScoreForApiResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<InsertScoreForApiResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  InsertSubScoreForApiRequest() {}

  explicit InsertSubScoreForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InsertSubScoreForApiRequest() = default;
};
class InsertSubScoreForApiResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> scoreSubId{};
  shared_ptr<string> scoreSubName{};

  InsertSubScoreForApiResponseBodyData() {}

  explicit InsertSubScoreForApiResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scoreSubId) {
      res["ScoreSubId"] = boost::any(*scoreSubId);
    }
    if (scoreSubName) {
      res["ScoreSubName"] = boost::any(*scoreSubName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScoreSubId") != m.end() && !m["ScoreSubId"].empty()) {
      scoreSubId = make_shared<long>(boost::any_cast<long>(m["ScoreSubId"]));
    }
    if (m.find("ScoreSubName") != m.end() && !m["ScoreSubName"].empty()) {
      scoreSubName = make_shared<string>(boost::any_cast<string>(m["ScoreSubName"]));
    }
  }


  virtual ~InsertSubScoreForApiResponseBodyData() = default;
};
class InsertSubScoreForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<InsertSubScoreForApiResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  InsertSubScoreForApiResponseBody() {}

  explicit InsertSubScoreForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InsertSubScoreForApiResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<InsertSubScoreForApiResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  InvalidRuleRequest() {}

  explicit InvalidRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InvalidRuleRequest() = default;
};
class InvalidRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  InvalidRuleResponseBody() {}

  explicit InvalidRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  ListAsrVocabRequest() {}

  explicit ListAsrVocabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAsrVocabRequest() = default;
};
class ListAsrVocabResponseBodyDataAsrVocab : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> vocabularyId{};

  ListAsrVocabResponseBodyDataAsrVocab() {}

  explicit ListAsrVocabResponseBodyDataAsrVocab(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (vocabularyId) {
      res["VocabularyId"] = boost::any(*vocabularyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VocabularyId") != m.end() && !m["VocabularyId"].empty()) {
      vocabularyId = make_shared<string>(boost::any_cast<string>(m["VocabularyId"]));
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
  shared_ptr<string> code{};
  shared_ptr<ListAsrVocabResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAsrVocabResponseBody() {}

  explicit ListAsrVocabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAsrVocabResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAsrVocabResponseBodyData>(model1);
      }
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
class ListHotWordsTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  ListHotWordsTasksRequest() {}

  explicit ListHotWordsTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListHotWordsTasksRequest() = default;
};
class ListHotWordsTasksResponseBodyDataHotWordsTaskPoDialogueParam : public Darabonba::Model {
public:
  shared_ptr<string> dataSetIds{};
  shared_ptr<long> dialogueId{};
  shared_ptr<long> endIndex{};
  shared_ptr<string> endTime{};
  shared_ptr<long> role{};
  shared_ptr<long> sourceType{};
  shared_ptr<long> startIndex{};
  shared_ptr<string> startTime{};

  ListHotWordsTasksResponseBodyDataHotWordsTaskPoDialogueParam() {}

  explicit ListHotWordsTasksResponseBodyDataHotWordsTaskPoDialogueParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSetIds) {
      res["DataSetIds"] = boost::any(*dataSetIds);
    }
    if (dialogueId) {
      res["DialogueId"] = boost::any(*dialogueId);
    }
    if (endIndex) {
      res["EndIndex"] = boost::any(*endIndex);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (startIndex) {
      res["StartIndex"] = boost::any(*startIndex);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSetIds") != m.end() && !m["DataSetIds"].empty()) {
      dataSetIds = make_shared<string>(boost::any_cast<string>(m["DataSetIds"]));
    }
    if (m.find("DialogueId") != m.end() && !m["DialogueId"].empty()) {
      dialogueId = make_shared<long>(boost::any_cast<long>(m["DialogueId"]));
    }
    if (m.find("EndIndex") != m.end() && !m["EndIndex"].empty()) {
      endIndex = make_shared<long>(boost::any_cast<long>(m["EndIndex"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<long>(boost::any_cast<long>(m["Role"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<long>(boost::any_cast<long>(m["SourceType"]));
    }
    if (m.find("StartIndex") != m.end() && !m["StartIndex"].empty()) {
      startIndex = make_shared<long>(boost::any_cast<long>(m["StartIndex"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListHotWordsTasksResponseBodyDataHotWordsTaskPoDialogueParam() = default;
};
class ListHotWordsTasksResponseBodyDataHotWordsTaskPoWordsParam : public Darabonba::Model {
public:
  shared_ptr<string> excludes{};
  shared_ptr<long> extraConfigId{};
  shared_ptr<string> includes{};

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
    if (extraConfigId) {
      res["ExtraConfigId"] = boost::any(*extraConfigId);
    }
    if (includes) {
      res["Includes"] = boost::any(*includes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Excludes") != m.end() && !m["Excludes"].empty()) {
      excludes = make_shared<string>(boost::any_cast<string>(m["Excludes"]));
    }
    if (m.find("ExtraConfigId") != m.end() && !m["ExtraConfigId"].empty()) {
      extraConfigId = make_shared<long>(boost::any_cast<long>(m["ExtraConfigId"]));
    }
    if (m.find("Includes") != m.end() && !m["Includes"].empty()) {
      includes = make_shared<string>(boost::any_cast<string>(m["Includes"]));
    }
  }


  virtual ~ListHotWordsTasksResponseBodyDataHotWordsTaskPoWordsParam() = default;
};
class ListHotWordsTasksResponseBodyDataHotWordsTaskPo : public Darabonba::Model {
public:
  shared_ptr<ListHotWordsTasksResponseBodyDataHotWordsTaskPoDialogueParam> dialogueParam{};
  shared_ptr<string> endTime{};
  shared_ptr<long> instanceStatus{};
  shared_ptr<string> lastExecutionTime{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> startTime{};
  shared_ptr<long> status{};
  shared_ptr<long> taskConfigId{};
  shared_ptr<long> timeInterval{};
  shared_ptr<long> timeUnit{};
  shared_ptr<long> type{};
  shared_ptr<ListHotWordsTasksResponseBodyDataHotWordsTaskPoWordsParam> wordsParam{};

  ListHotWordsTasksResponseBodyDataHotWordsTaskPo() {}

  explicit ListHotWordsTasksResponseBodyDataHotWordsTaskPo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogueParam) {
      res["DialogueParam"] = dialogueParam ? boost::any(dialogueParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (lastExecutionTime) {
      res["LastExecutionTime"] = boost::any(*lastExecutionTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskConfigId) {
      res["TaskConfigId"] = boost::any(*taskConfigId);
    }
    if (timeInterval) {
      res["TimeInterval"] = boost::any(*timeInterval);
    }
    if (timeUnit) {
      res["TimeUnit"] = boost::any(*timeUnit);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (wordsParam) {
      res["WordsParam"] = wordsParam ? boost::any(wordsParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DialogueParam") != m.end() && !m["DialogueParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["DialogueParam"].type()) {
        ListHotWordsTasksResponseBodyDataHotWordsTaskPoDialogueParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DialogueParam"]));
        dialogueParam = make_shared<ListHotWordsTasksResponseBodyDataHotWordsTaskPoDialogueParam>(model1);
      }
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<long>(boost::any_cast<long>(m["InstanceStatus"]));
    }
    if (m.find("LastExecutionTime") != m.end() && !m["LastExecutionTime"].empty()) {
      lastExecutionTime = make_shared<string>(boost::any_cast<string>(m["LastExecutionTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskConfigId") != m.end() && !m["TaskConfigId"].empty()) {
      taskConfigId = make_shared<long>(boost::any_cast<long>(m["TaskConfigId"]));
    }
    if (m.find("TimeInterval") != m.end() && !m["TimeInterval"].empty()) {
      timeInterval = make_shared<long>(boost::any_cast<long>(m["TimeInterval"]));
    }
    if (m.find("TimeUnit") != m.end() && !m["TimeUnit"].empty()) {
      timeUnit = make_shared<long>(boost::any_cast<long>(m["TimeUnit"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("WordsParam") != m.end() && !m["WordsParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["WordsParam"].type()) {
        ListHotWordsTasksResponseBodyDataHotWordsTaskPoWordsParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WordsParam"]));
        wordsParam = make_shared<ListHotWordsTasksResponseBodyDataHotWordsTaskPoWordsParam>(model1);
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
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<ListHotWordsTasksResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListHotWordsTasksResponseBody() {}

  explicit ListHotWordsTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListHotWordsTasksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListHotWordsTasksResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<string> jsonStr{};

  ListPrecisionTaskRequest() {}

  explicit ListPrecisionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListPrecisionTaskRequest() = default;
};
class ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<double> precision{};
  shared_ptr<long> status{};
  shared_ptr<string> taskId{};

  ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision() {}

  explicit ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (precision) {
      res["Precision"] = boost::any(*precision);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("Precision") != m.end() && !m["Precision"].empty()) {
      precision = make_shared<double>(boost::any_cast<double>(m["Precision"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
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
  shared_ptr<string> createTime{};
  shared_ptr<long> dataSetId{};
  shared_ptr<string> dataSetName{};
  shared_ptr<long> duration{};
  shared_ptr<long> incorrectWords{};
  shared_ptr<string> name{};
  shared_ptr<ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions> precisions{};
  shared_ptr<long> source{};
  shared_ptr<long> status{};
  shared_ptr<string> taskId{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> verifiedCount{};

  ListPrecisionTaskResponseBodyDataPrecisionTask() {}

  explicit ListPrecisionTaskResponseBodyDataPrecisionTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataSetId) {
      res["DataSetId"] = boost::any(*dataSetId);
    }
    if (dataSetName) {
      res["DataSetName"] = boost::any(*dataSetName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (incorrectWords) {
      res["IncorrectWords"] = boost::any(*incorrectWords);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (precisions) {
      res["Precisions"] = precisions ? boost::any(precisions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (verifiedCount) {
      res["VerifiedCount"] = boost::any(*verifiedCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DataSetId") != m.end() && !m["DataSetId"].empty()) {
      dataSetId = make_shared<long>(boost::any_cast<long>(m["DataSetId"]));
    }
    if (m.find("DataSetName") != m.end() && !m["DataSetName"].empty()) {
      dataSetName = make_shared<string>(boost::any_cast<string>(m["DataSetName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("IncorrectWords") != m.end() && !m["IncorrectWords"].empty()) {
      incorrectWords = make_shared<long>(boost::any_cast<long>(m["IncorrectWords"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Precisions") != m.end() && !m["Precisions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Precisions"].type()) {
        ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Precisions"]));
        precisions = make_shared<ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions>(model1);
      }
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<long>(boost::any_cast<long>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VerifiedCount") != m.end() && !m["VerifiedCount"].empty()) {
      verifiedCount = make_shared<long>(boost::any_cast<long>(m["VerifiedCount"]));
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
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<ListPrecisionTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListPrecisionTaskResponseBody() {}

  explicit ListPrecisionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListPrecisionTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListPrecisionTaskResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<string> jsonStr{};

  ListRolesRequest() {}

  explicit ListRolesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListRolesRequest() = default;
};
class ListRolesResponseBodyDataRole : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> displayName{};
  shared_ptr<long> id{};
  shared_ptr<long> level{};
  shared_ptr<string> name{};
  shared_ptr<string> updateTime{};

  ListRolesResponseBodyDataRole() {}

  explicit ListRolesResponseBodyDataRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
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
  shared_ptr<string> code{};
  shared_ptr<ListRolesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListRolesResponseBody() {}

  explicit ListRolesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRolesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListRolesResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  ListRulesRequest() {}

  explicit ListRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListRulesRequest() = default;
};
class ListRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> businessCategoryNameList{};
  shared_ptr<string> comments{};
  shared_ptr<string> createTime{};
  shared_ptr<string> name{};
  shared_ptr<long> rid{};
  shared_ptr<long> ruleType{};
  shared_ptr<long> type{};
  shared_ptr<string> typeName_{};

  ListRulesResponseBodyData() {}

  explicit ListRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessCategoryNameList) {
      res["BusinessCategoryNameList"] = boost::any(*businessCategoryNameList);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
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
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<long>(boost::any_cast<long>(m["RuleType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
  }


  virtual ~ListRulesResponseBodyData() = default;
};
class ListRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<vector<ListRulesResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListRulesResponseBody() {}

  explicit ListRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<string> jsonStr{};

  ListSkillGroupConfigRequest() {}

  explicit ListSkillGroupConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListSkillGroupConfigRequest() = default;
};
class ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo : public Darabonba::Model {
public:
  shared_ptr<long> rid{};
  shared_ptr<string> ruleName{};

  ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo() {}

  explicit ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
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
  shared_ptr<long> rid{};
  shared_ptr<string> ruleName{};

  ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo() {}

  explicit ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
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
  shared_ptr<long> dataType{};
  shared_ptr<string> name{};
  shared_ptr<long> symbol{};
  shared_ptr<string> value{};

  ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen() {}

  explicit ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (symbol) {
      res["Symbol"] = boost::any(*symbol);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<long>(boost::any_cast<long>(m["DataType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Symbol") != m.end() && !m["Symbol"].empty()) {
      symbol = make_shared<long>(boost::any_cast<long>(m["Symbol"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
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
  shared_ptr<long> allContentQualityCheck{};
  shared_ptr<string> allRids{};
  shared_ptr<ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList> allRuleList{};
  shared_ptr<string> createTime{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> name{};
  shared_ptr<long> qualityCheckType{};
  shared_ptr<string> rid{};
  shared_ptr<ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList> ruleList{};
  shared_ptr<bool> screenSwitch{};
  shared_ptr<long> skillGroupFrom{};
  shared_ptr<string> skillGroupId{};
  shared_ptr<string> skillGroupName{};
  shared_ptr<ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens> skillGroupScreens{};
  shared_ptr<long> status{};
  shared_ptr<long> type{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> vocabId{};
  shared_ptr<string> vocabName{};

  ListSkillGroupConfigResponseBodyDataSkillGroupConfig() {}

  explicit ListSkillGroupConfigResponseBodyDataSkillGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allContentQualityCheck) {
      res["AllContentQualityCheck"] = boost::any(*allContentQualityCheck);
    }
    if (allRids) {
      res["AllRids"] = boost::any(*allRids);
    }
    if (allRuleList) {
      res["AllRuleList"] = allRuleList ? boost::any(allRuleList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (qualityCheckType) {
      res["QualityCheckType"] = boost::any(*qualityCheckType);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (ruleList) {
      res["RuleList"] = ruleList ? boost::any(ruleList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (screenSwitch) {
      res["ScreenSwitch"] = boost::any(*screenSwitch);
    }
    if (skillGroupFrom) {
      res["SkillGroupFrom"] = boost::any(*skillGroupFrom);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (skillGroupName) {
      res["SkillGroupName"] = boost::any(*skillGroupName);
    }
    if (skillGroupScreens) {
      res["SkillGroupScreens"] = skillGroupScreens ? boost::any(skillGroupScreens->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (vocabId) {
      res["VocabId"] = boost::any(*vocabId);
    }
    if (vocabName) {
      res["VocabName"] = boost::any(*vocabName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllContentQualityCheck") != m.end() && !m["AllContentQualityCheck"].empty()) {
      allContentQualityCheck = make_shared<long>(boost::any_cast<long>(m["AllContentQualityCheck"]));
    }
    if (m.find("AllRids") != m.end() && !m["AllRids"].empty()) {
      allRids = make_shared<string>(boost::any_cast<string>(m["AllRids"]));
    }
    if (m.find("AllRuleList") != m.end() && !m["AllRuleList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AllRuleList"].type()) {
        ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AllRuleList"]));
        allRuleList = make_shared<ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList>(model1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("QualityCheckType") != m.end() && !m["QualityCheckType"].empty()) {
      qualityCheckType = make_shared<long>(boost::any_cast<long>(m["QualityCheckType"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
    if (m.find("RuleList") != m.end() && !m["RuleList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleList"].type()) {
        ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleList"]));
        ruleList = make_shared<ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList>(model1);
      }
    }
    if (m.find("ScreenSwitch") != m.end() && !m["ScreenSwitch"].empty()) {
      screenSwitch = make_shared<bool>(boost::any_cast<bool>(m["ScreenSwitch"]));
    }
    if (m.find("SkillGroupFrom") != m.end() && !m["SkillGroupFrom"].empty()) {
      skillGroupFrom = make_shared<long>(boost::any_cast<long>(m["SkillGroupFrom"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<string>(boost::any_cast<string>(m["SkillGroupId"]));
    }
    if (m.find("SkillGroupName") != m.end() && !m["SkillGroupName"].empty()) {
      skillGroupName = make_shared<string>(boost::any_cast<string>(m["SkillGroupName"]));
    }
    if (m.find("SkillGroupScreens") != m.end() && !m["SkillGroupScreens"].empty()) {
      if (typeid(map<string, boost::any>) == m["SkillGroupScreens"].type()) {
        ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SkillGroupScreens"]));
        skillGroupScreens = make_shared<ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VocabId") != m.end() && !m["VocabId"].empty()) {
      vocabId = make_shared<long>(boost::any_cast<long>(m["VocabId"]));
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
  shared_ptr<string> code{};
  shared_ptr<ListSkillGroupConfigResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListSkillGroupConfigResponseBody() {}

  explicit ListSkillGroupConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSkillGroupConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListSkillGroupConfigResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  ListTaskAssignRulesRequest() {}

  explicit ListTaskAssignRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTaskAssignRulesRequest() = default;
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
  shared_ptr<string> reviewerId{};
  shared_ptr<string> reviewerName{};

  ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer() {}

  explicit ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reviewerId) {
      res["ReviewerId"] = boost::any(*reviewerId);
    }
    if (reviewerName) {
      res["ReviewerName"] = boost::any(*reviewerName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReviewerId") != m.end() && !m["ReviewerId"].empty()) {
      reviewerId = make_shared<string>(boost::any_cast<string>(m["ReviewerId"]));
    }
    if (m.find("ReviewerName") != m.end() && !m["ReviewerName"].empty()) {
      reviewerName = make_shared<string>(boost::any_cast<string>(m["ReviewerName"]));
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
class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgentsSamplingModeAgent : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> agentName{};

  ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgentsSamplingModeAgent() {}

  explicit ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgentsSamplingModeAgent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgentsSamplingModeAgent() = default;
};
class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgents : public Darabonba::Model {
public:
  shared_ptr<vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgentsSamplingModeAgent>> samplingModeAgent{};

  ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgents() {}

  explicit ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (samplingModeAgent) {
      vector<boost::any> temp1;
      for(auto item1:*samplingModeAgent){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SamplingModeAgent"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SamplingModeAgent") != m.end() && !m["SamplingModeAgent"].empty()) {
      if (typeid(vector<boost::any>) == m["SamplingModeAgent"].type()) {
        vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgentsSamplingModeAgent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SamplingModeAgent"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgentsSamplingModeAgent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        samplingModeAgent = make_shared<vector<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgentsSamplingModeAgent>>(expect1);
      }
    }
  }


  virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgents() = default;
};
class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode : public Darabonba::Model {
public:
  shared_ptr<long> anyNumberOfDraws{};
  shared_ptr<bool> designated{};
  shared_ptr<long> dimension{};
  shared_ptr<long> limit{};
  shared_ptr<long> numberOfDraws{};
  shared_ptr<double> proportion{};
  shared_ptr<long> randomInspectionNumber{};
  shared_ptr<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgents> samplingModeAgents{};

  ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode() {}

  explicit ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anyNumberOfDraws) {
      res["AnyNumberOfDraws"] = boost::any(*anyNumberOfDraws);
    }
    if (designated) {
      res["Designated"] = boost::any(*designated);
    }
    if (dimension) {
      res["Dimension"] = boost::any(*dimension);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (numberOfDraws) {
      res["NumberOfDraws"] = boost::any(*numberOfDraws);
    }
    if (proportion) {
      res["Proportion"] = boost::any(*proportion);
    }
    if (randomInspectionNumber) {
      res["RandomInspectionNumber"] = boost::any(*randomInspectionNumber);
    }
    if (samplingModeAgents) {
      res["SamplingModeAgents"] = samplingModeAgents ? boost::any(samplingModeAgents->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnyNumberOfDraws") != m.end() && !m["AnyNumberOfDraws"].empty()) {
      anyNumberOfDraws = make_shared<long>(boost::any_cast<long>(m["AnyNumberOfDraws"]));
    }
    if (m.find("Designated") != m.end() && !m["Designated"].empty()) {
      designated = make_shared<bool>(boost::any_cast<bool>(m["Designated"]));
    }
    if (m.find("Dimension") != m.end() && !m["Dimension"].empty()) {
      dimension = make_shared<long>(boost::any_cast<long>(m["Dimension"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NumberOfDraws") != m.end() && !m["NumberOfDraws"].empty()) {
      numberOfDraws = make_shared<long>(boost::any_cast<long>(m["NumberOfDraws"]));
    }
    if (m.find("Proportion") != m.end() && !m["Proportion"].empty()) {
      proportion = make_shared<double>(boost::any_cast<double>(m["Proportion"]));
    }
    if (m.find("RandomInspectionNumber") != m.end() && !m["RandomInspectionNumber"].empty()) {
      randomInspectionNumber = make_shared<long>(boost::any_cast<long>(m["RandomInspectionNumber"]));
    }
    if (m.find("SamplingModeAgents") != m.end() && !m["SamplingModeAgents"].empty()) {
      if (typeid(map<string, boost::any>) == m["SamplingModeAgents"].type()) {
        ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgents model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SamplingModeAgents"]));
        samplingModeAgents = make_shared<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingModeSamplingModeAgents>(model1);
      }
    }
  }


  virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode() = default;
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
class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo : public Darabonba::Model {
public:
  shared_ptr<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents> agents{};
  shared_ptr<string> agentsStr{};
  shared_ptr<long> assignmentType{};
  shared_ptr<long> callTimeEnd{};
  shared_ptr<long> callTimeStart{};
  shared_ptr<long> callType{};
  shared_ptr<string> createTime{};
  shared_ptr<long> durationMax{};
  shared_ptr<long> durationMin{};
  shared_ptr<long> enabled{};
  shared_ptr<long> priority{};
  shared_ptr<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers> reviewers{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules> rules{};
  shared_ptr<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode> samplingMode{};
  shared_ptr<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups> skillGroups{};
  shared_ptr<string> skillGroupsStr{};
  shared_ptr<string> updateTime{};

  ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo() {}

  explicit ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agents) {
      res["Agents"] = agents ? boost::any(agents->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (agentsStr) {
      res["AgentsStr"] = boost::any(*agentsStr);
    }
    if (assignmentType) {
      res["AssignmentType"] = boost::any(*assignmentType);
    }
    if (callTimeEnd) {
      res["CallTimeEnd"] = boost::any(*callTimeEnd);
    }
    if (callTimeStart) {
      res["CallTimeStart"] = boost::any(*callTimeStart);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (durationMax) {
      res["DurationMax"] = boost::any(*durationMax);
    }
    if (durationMin) {
      res["DurationMin"] = boost::any(*durationMin);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (reviewers) {
      res["Reviewers"] = reviewers ? boost::any(reviewers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (samplingMode) {
      res["SamplingMode"] = samplingMode ? boost::any(samplingMode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (skillGroups) {
      res["SkillGroups"] = skillGroups ? boost::any(skillGroups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (skillGroupsStr) {
      res["SkillGroupsStr"] = boost::any(*skillGroupsStr);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Agents") != m.end() && !m["Agents"].empty()) {
      if (typeid(map<string, boost::any>) == m["Agents"].type()) {
        ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Agents"]));
        agents = make_shared<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents>(model1);
      }
    }
    if (m.find("AgentsStr") != m.end() && !m["AgentsStr"].empty()) {
      agentsStr = make_shared<string>(boost::any_cast<string>(m["AgentsStr"]));
    }
    if (m.find("AssignmentType") != m.end() && !m["AssignmentType"].empty()) {
      assignmentType = make_shared<long>(boost::any_cast<long>(m["AssignmentType"]));
    }
    if (m.find("CallTimeEnd") != m.end() && !m["CallTimeEnd"].empty()) {
      callTimeEnd = make_shared<long>(boost::any_cast<long>(m["CallTimeEnd"]));
    }
    if (m.find("CallTimeStart") != m.end() && !m["CallTimeStart"].empty()) {
      callTimeStart = make_shared<long>(boost::any_cast<long>(m["CallTimeStart"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<long>(boost::any_cast<long>(m["CallType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DurationMax") != m.end() && !m["DurationMax"].empty()) {
      durationMax = make_shared<long>(boost::any_cast<long>(m["DurationMax"]));
    }
    if (m.find("DurationMin") != m.end() && !m["DurationMin"].empty()) {
      durationMin = make_shared<long>(boost::any_cast<long>(m["DurationMin"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<long>(boost::any_cast<long>(m["Enabled"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Reviewers") != m.end() && !m["Reviewers"].empty()) {
      if (typeid(map<string, boost::any>) == m["Reviewers"].type()) {
        ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Reviewers"]));
        reviewers = make_shared<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers>(model1);
      }
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules>(model1);
      }
    }
    if (m.find("SamplingMode") != m.end() && !m["SamplingMode"].empty()) {
      if (typeid(map<string, boost::any>) == m["SamplingMode"].type()) {
        ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SamplingMode"]));
        samplingMode = make_shared<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode>(model1);
      }
    }
    if (m.find("SkillGroups") != m.end() && !m["SkillGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["SkillGroups"].type()) {
        ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SkillGroups"]));
        skillGroups = make_shared<ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups>(model1);
      }
    }
    if (m.find("SkillGroupsStr") != m.end() && !m["SkillGroupsStr"].empty()) {
      skillGroupsStr = make_shared<string>(boost::any_cast<string>(m["SkillGroupsStr"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
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
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<ListTaskAssignRulesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListTaskAssignRulesResponseBody() {}

  explicit ListTaskAssignRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListTaskAssignRulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListTaskAssignRulesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<string> jsonStr{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyDataUser : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<long> id{};
  shared_ptr<long> loginUserType{};
  shared_ptr<string> roleName{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userName{};

  ListUsersResponseBodyDataUser() {}

  explicit ListUsersResponseBodyDataUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (loginUserType) {
      res["LoginUserType"] = boost::any(*loginUserType);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LoginUserType") != m.end() && !m["LoginUserType"].empty()) {
      loginUserType = make_shared<long>(boost::any_cast<long>(m["LoginUserType"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
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
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<ListUsersResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListUsersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListUsersResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<string> jsonStr{};

  ListWarningConfigRequest() {}

  explicit ListWarningConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListWarningConfigRequest() = default;
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
class ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule : public Darabonba::Model {
public:
  shared_ptr<long> rid{};
  shared_ptr<string> ruleName{};

  ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule() {}

  explicit ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<long>(boost::any_cast<long>(m["Rid"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
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
  shared_ptr<ListWarningConfigResponseBodyDataWarningConfigInfoChannels> channels{};
  shared_ptr<long> configId{};
  shared_ptr<string> configName{};
  shared_ptr<string> createTime{};
  shared_ptr<ListWarningConfigResponseBodyDataWarningConfigInfoRidList> ridList{};
  shared_ptr<ListWarningConfigResponseBodyDataWarningConfigInfoRuleList> ruleList{};
  shared_ptr<long> status{};
  shared_ptr<string> updateTime{};

  ListWarningConfigResponseBodyDataWarningConfigInfo() {}

  explicit ListWarningConfigResponseBodyDataWarningConfigInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channels) {
      res["Channels"] = channels ? boost::any(channels->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (configName) {
      res["ConfigName"] = boost::any(*configName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (ridList) {
      res["RidList"] = ridList ? boost::any(ridList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ruleList) {
      res["RuleList"] = ruleList ? boost::any(ruleList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channels") != m.end() && !m["Channels"].empty()) {
      if (typeid(map<string, boost::any>) == m["Channels"].type()) {
        ListWarningConfigResponseBodyDataWarningConfigInfoChannels model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Channels"]));
        channels = make_shared<ListWarningConfigResponseBodyDataWarningConfigInfoChannels>(model1);
      }
    }
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<long>(boost::any_cast<long>(m["ConfigId"]));
    }
    if (m.find("ConfigName") != m.end() && !m["ConfigName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["ConfigName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("RidList") != m.end() && !m["RidList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RidList"].type()) {
        ListWarningConfigResponseBodyDataWarningConfigInfoRidList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RidList"]));
        ridList = make_shared<ListWarningConfigResponseBodyDataWarningConfigInfoRidList>(model1);
      }
    }
    if (m.find("RuleList") != m.end() && !m["RuleList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleList"].type()) {
        ListWarningConfigResponseBodyDataWarningConfigInfoRuleList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleList"]));
        ruleList = make_shared<ListWarningConfigResponseBodyDataWarningConfigInfoRuleList>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
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
  shared_ptr<string> code{};
  shared_ptr<ListWarningConfigResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListWarningConfigResponseBody() {}

  explicit ListWarningConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWarningConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListWarningConfigResponseBodyData>(model1);
      }
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
class RestartAsrTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  RestartAsrTaskRequest() {}

  explicit RestartAsrTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RestartAsrTaskRequest() = default;
};
class RestartAsrTaskResponseBodyDataRestartResult : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
  shared_ptr<string> code{};
  shared_ptr<RestartAsrTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RestartAsrTaskResponseBody() {}

  explicit RestartAsrTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartAsrTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RestartAsrTaskResponseBodyData>(model1);
      }
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
class SaveConfigDataSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  SaveConfigDataSetRequest() {}

  explicit SaveConfigDataSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SaveConfigDataSetRequest() = default;
};
class SaveConfigDataSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SaveConfigDataSetResponseBody() {}

  explicit SaveConfigDataSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  SubmitComplaintRequest() {}

  explicit SubmitComplaintRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitComplaintRequest() = default;
};
class SubmitComplaintResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitComplaintResponseBody() {}

  explicit SubmitComplaintResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
class SubmitPrecisionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  SubmitPrecisionTaskRequest() {}

  explicit SubmitPrecisionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitPrecisionTaskRequest() = default;
};
class SubmitPrecisionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitPrecisionTaskResponseBody() {}

  explicit SubmitPrecisionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  SubmitQualityCheckTaskRequest() {}

  explicit SubmitQualityCheckTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitQualityCheckTaskRequest() = default;
};
class SubmitQualityCheckTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitQualityCheckTaskResponseBody() {}

  explicit SubmitQualityCheckTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  SubmitReviewInfoRequest() {}

  explicit SubmitReviewInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitReviewInfoRequest() = default;
};
class SubmitReviewInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitReviewInfoResponseBody() {}

  explicit SubmitReviewInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  SyncQualityCheckRequest() {}

  explicit SyncQualityCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SyncQualityCheckRequest() = default;
};
class SyncQualityCheckResponseBodyDataRulesHitHitKeyWords : public Darabonba::Model {
public:
  shared_ptr<long> cid{};
  shared_ptr<long> from{};
  shared_ptr<long> pid{};
  shared_ptr<long> to{};
  shared_ptr<string> val{};

  SyncQualityCheckResponseBodyDataRulesHitHitKeyWords() {}

  explicit SyncQualityCheckResponseBodyDataRulesHitHitKeyWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (val) {
      res["Val"] = boost::any(*val);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      cid = make_shared<long>(boost::any_cast<long>(m["Cid"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
    if (m.find("Val") != m.end() && !m["Val"].empty()) {
      val = make_shared<string>(boost::any_cast<string>(m["Val"]));
    }
  }


  virtual ~SyncQualityCheckResponseBodyDataRulesHitHitKeyWords() = default;
};
class SyncQualityCheckResponseBodyDataRulesHitPhrase : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<string> identity{};
  shared_ptr<string> role{};
  shared_ptr<long> silenceDuration{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> words{};

  SyncQualityCheckResponseBodyDataRulesHitPhrase() {}

  explicit SyncQualityCheckResponseBodyDataRulesHitPhrase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (words) {
      res["Words"] = boost::any(*words);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["EmotionValue"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<long>(boost::any_cast<long>(m["SilenceDuration"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
  }


  virtual ~SyncQualityCheckResponseBodyDataRulesHitPhrase() = default;
};
class SyncQualityCheckResponseBodyDataRulesHit : public Darabonba::Model {
public:
  shared_ptr<vector<SyncQualityCheckResponseBodyDataRulesHitHitKeyWords>> hitKeyWords{};
  shared_ptr<SyncQualityCheckResponseBodyDataRulesHitPhrase> phrase{};

  SyncQualityCheckResponseBodyDataRulesHit() {}

  explicit SyncQualityCheckResponseBodyDataRulesHit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitKeyWords) {
      vector<boost::any> temp1;
      for(auto item1:*hitKeyWords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitKeyWords"] = boost::any(temp1);
    }
    if (phrase) {
      res["Phrase"] = phrase ? boost::any(phrase->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Phrase") != m.end() && !m["Phrase"].empty()) {
      if (typeid(map<string, boost::any>) == m["Phrase"].type()) {
        SyncQualityCheckResponseBodyDataRulesHitPhrase model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Phrase"]));
        phrase = make_shared<SyncQualityCheckResponseBodyDataRulesHitPhrase>(model1);
      }
    }
  }


  virtual ~SyncQualityCheckResponseBodyDataRulesHit() = default;
};
class SyncQualityCheckResponseBodyDataRules : public Darabonba::Model {
public:
  shared_ptr<vector<SyncQualityCheckResponseBodyDataRulesHit>> hit{};
  shared_ptr<string> rid{};
  shared_ptr<string> ruleName{};

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
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
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
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~SyncQualityCheckResponseBodyDataRules() = default;
};
class SyncQualityCheckResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<vector<SyncQualityCheckResponseBodyDataRules>> rules{};
  shared_ptr<long> score{};
  shared_ptr<string> taskId{};
  shared_ptr<string> tid{};

  SyncQualityCheckResponseBodyData() {}

  explicit SyncQualityCheckResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
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
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
    }
  }


  virtual ~SyncQualityCheckResponseBodyData() = default;
};
class SyncQualityCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SyncQualityCheckResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SyncQualityCheckResponseBody() {}

  explicit SyncQualityCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncQualityCheckResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SyncQualityCheckResponseBodyData>(model1);
      }
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
class UpdateAsrVocabRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  UpdateAsrVocabRequest() {}

  explicit UpdateAsrVocabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAsrVocabRequest() = default;
};
class UpdateAsrVocabResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateAsrVocabResponseBody() {}

  explicit UpdateAsrVocabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
class UpdateRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> jsonStr{};

  UpdateRuleRequest() {}

  explicit UpdateRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateRuleRequest() = default;
};
class UpdateRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateRuleResponseBody() {}

  explicit UpdateRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  UpdateScoreForApiRequest() {}

  explicit UpdateScoreForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateScoreForApiRequest() = default;
};
class UpdateScoreForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateScoreForApiResponseBody() {}

  explicit UpdateScoreForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  UpdateSkillGroupConfigRequest() {}

  explicit UpdateSkillGroupConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateSkillGroupConfigRequest() = default;
};
class UpdateSkillGroupConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateSkillGroupConfigResponseBody() {}

  explicit UpdateSkillGroupConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  UpdateSubScoreForApiRequest() {}

  explicit UpdateSubScoreForApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateSubScoreForApiRequest() = default;
};
class UpdateSubScoreForApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateSubScoreForApiResponseBody() {}

  explicit UpdateSubScoreForApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  UpdateSyncQualityCheckDataRequest() {}

  explicit UpdateSyncQualityCheckDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateSyncQualityCheckDataRequest() = default;
};
class UpdateSyncQualityCheckDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> tid{};

  UpdateSyncQualityCheckDataResponseBodyData() {}

  explicit UpdateSyncQualityCheckDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
    }
  }


  virtual ~UpdateSyncQualityCheckDataResponseBodyData() = default;
};
class UpdateSyncQualityCheckDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateSyncQualityCheckDataResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateSyncQualityCheckDataResponseBody() {}

  explicit UpdateSyncQualityCheckDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSyncQualityCheckDataResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateSyncQualityCheckDataResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  UpdateTaskAssignRuleRequest() {}

  explicit UpdateTaskAssignRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateTaskAssignRuleRequest() = default;
};
class UpdateTaskAssignRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateTaskAssignRuleResponseBody() {}

  explicit UpdateTaskAssignRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  UpdateUserRequest() {}

  explicit UpdateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateUserRequest() = default;
};
class UpdateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateUserResponseBody() {}

  explicit UpdateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  UpdateUserConfigRequest() {}

  explicit UpdateUserConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateUserConfigRequest() = default;
};
class UpdateUserConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateUserConfigResponseBody() {}

  explicit UpdateUserConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  UpdateWarningConfigRequest() {}

  explicit UpdateWarningConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateWarningConfigRequest() = default;
};
class UpdateWarningConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateWarningConfigResponseBody() {}

  explicit UpdateWarningConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> jsonStr{};

  UploadAudioDataRequest() {}

  explicit UploadAudioDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UploadAudioDataRequest() = default;
};
class UploadAudioDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UploadAudioDataResponseBody() {}

  explicit UploadAudioDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  UploadDataRequest() {}

  explicit UploadDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UploadDataRequest() = default;
};
class UploadDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UploadDataResponseBody() {}

  explicit UploadDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  UploadDataSyncRequest() {}

  explicit UploadDataSyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UploadDataSyncRequest() = default;
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
  shared_ptr<long> pid{};
  shared_ptr<string> tid{};
  shared_ptr<long> to{};
  shared_ptr<string> val{};

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
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (val) {
      res["Val"] = boost::any(*val);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
    if (m.find("Val") != m.end() && !m["Val"].empty()) {
      val = make_shared<string>(boost::any_cast<string>(m["Val"]));
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
class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<string> beginTime{};
  shared_ptr<long> end{};
  shared_ptr<string> identity{};
  shared_ptr<string> role{};
  shared_ptr<string> words{};

  UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase() {}

  explicit UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (words) {
      res["Words"] = boost::any(*words);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["Words"]));
    }
  }


  virtual ~UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase() = default;
};
class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo : public Darabonba::Model {
public:
  shared_ptr<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids> hitCids{};
  shared_ptr<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWords> hitKeyWords{};
  shared_ptr<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase> phrase{};

  UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo() {}

  explicit UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitCids) {
      res["HitCids"] = hitCids ? boost::any(hitCids->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hitKeyWords) {
      res["HitKeyWords"] = hitKeyWords ? boost::any(hitKeyWords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (phrase) {
      res["Phrase"] = phrase ? boost::any(phrase->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Phrase") != m.end() && !m["Phrase"].empty()) {
      if (typeid(map<string, boost::any>) == m["Phrase"].type()) {
        UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Phrase"]));
        phrase = make_shared<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoPhrase>(model1);
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
class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo : public Darabonba::Model {
public:
  shared_ptr<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo> conditionInfo{};
  shared_ptr<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit> hit{};
  shared_ptr<string> rid{};
  shared_ptr<string> tid{};

  UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo() {}

  explicit UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionInfo) {
      res["ConditionInfo"] = conditionInfo ? boost::any(conditionInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hit) {
      res["Hit"] = hit ? boost::any(hit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionInfo") != m.end() && !m["ConditionInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConditionInfo"].type()) {
        UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConditionInfo"]));
        conditionInfo = make_shared<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo>(model1);
      }
    }
    if (m.find("Hit") != m.end() && !m["Hit"].empty()) {
      if (typeid(map<string, boost::any>) == m["Hit"].type()) {
        UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Hit"]));
        hit = make_shared<UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit>(model1);
      }
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
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
class UploadDataSyncResponseBodyDataResultInfo : public Darabonba::Model {
public:
  shared_ptr<UploadDataSyncResponseBodyDataResultInfoHandScoreIdList> handScoreIdList{};
  shared_ptr<UploadDataSyncResponseBodyDataResultInfoRules> rules{};
  shared_ptr<long> score{};

  UploadDataSyncResponseBodyDataResultInfo() {}

  explicit UploadDataSyncResponseBodyDataResultInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handScoreIdList) {
      res["HandScoreIdList"] = handScoreIdList ? boost::any(handScoreIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HandScoreIdList") != m.end() && !m["HandScoreIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["HandScoreIdList"].type()) {
        UploadDataSyncResponseBodyDataResultInfoHandScoreIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HandScoreIdList"]));
        handScoreIdList = make_shared<UploadDataSyncResponseBodyDataResultInfoHandScoreIdList>(model1);
      }
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        UploadDataSyncResponseBodyDataResultInfoRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<UploadDataSyncResponseBodyDataResultInfoRules>(model1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
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
  shared_ptr<string> code{};
  shared_ptr<UploadDataSyncResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UploadDataSyncResponseBody() {}

  explicit UploadDataSyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadDataSyncResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UploadDataSyncResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  UploadRuleRequest() {}

  explicit UploadRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> code{};
  shared_ptr<UploadRuleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UploadRuleResponseBody() {}

  explicit UploadRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UploadRuleResponseBodyData>(model1);
      }
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
  shared_ptr<string> jsonStr{};

  VerifyFileRequest() {}

  explicit VerifyFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VerifyFileRequest() = default;
};
class VerifyFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<double> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  VerifyFileResponseBody() {}

  explicit VerifyFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<double>(boost::any_cast<double>(m["Data"]));
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
  shared_ptr<string> jsonStr{};

  VerifySentenceRequest() {}

  explicit VerifySentenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<VerifySentenceResponseBodyDataDeltaSource> source{};
  shared_ptr<VerifySentenceResponseBodyDataDeltaTarget> target{};
  shared_ptr<string> type{};

  VerifySentenceResponseBodyDataDelta() {}

  explicit VerifySentenceResponseBodyDataDelta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (target) {
      res["Target"] = target ? boost::any(target->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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
  shared_ptr<string> code{};
  shared_ptr<VerifySentenceResponseBodyData> data{};
  shared_ptr<long> incorrectWords{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> sourceRole{};
  shared_ptr<bool> success{};
  shared_ptr<long> targetRole{};

  VerifySentenceResponseBody() {}

  explicit VerifySentenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (incorrectWords) {
      res["IncorrectWords"] = boost::any(*incorrectWords);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceRole) {
      res["SourceRole"] = boost::any(*sourceRole);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (targetRole) {
      res["TargetRole"] = boost::any(*targetRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        VerifySentenceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<VerifySentenceResponseBodyData>(model1);
      }
    }
    if (m.find("IncorrectWords") != m.end() && !m["IncorrectWords"].empty()) {
      incorrectWords = make_shared<long>(boost::any_cast<long>(m["IncorrectWords"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceRole") != m.end() && !m["SourceRole"].empty()) {
      sourceRole = make_shared<long>(boost::any_cast<long>(m["SourceRole"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TargetRole") != m.end() && !m["TargetRole"].empty()) {
      targetRole = make_shared<long>(boost::any_cast<long>(m["TargetRole"]));
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
  AssignReviewerResponse assignReviewerWithOptions(shared_ptr<AssignReviewerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssignReviewerResponse assignReviewer(shared_ptr<AssignReviewerRequest> request);
  CreateAsrVocabResponse createAsrVocabWithOptions(shared_ptr<CreateAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAsrVocabResponse createAsrVocab(shared_ptr<CreateAsrVocabRequest> request);
  CreateSkillGroupConfigResponse createSkillGroupConfigWithOptions(shared_ptr<CreateSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSkillGroupConfigResponse createSkillGroupConfig(shared_ptr<CreateSkillGroupConfigRequest> request);
  CreateTaskAssignRuleResponse createTaskAssignRuleWithOptions(shared_ptr<CreateTaskAssignRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskAssignRuleResponse createTaskAssignRule(shared_ptr<CreateTaskAssignRuleRequest> request);
  CreateUserResponse createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserResponse createUser(shared_ptr<CreateUserRequest> request);
  CreateWarningConfigResponse createWarningConfigWithOptions(shared_ptr<CreateWarningConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWarningConfigResponse createWarningConfig(shared_ptr<CreateWarningConfigRequest> request);
  DelRuleCategoryResponse delRuleCategoryWithOptions(shared_ptr<DelRuleCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DelRuleCategoryResponse delRuleCategory(shared_ptr<DelRuleCategoryRequest> request);
  DelThesaurusForApiResponse delThesaurusForApiWithOptions(shared_ptr<DelThesaurusForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DelThesaurusForApiResponse delThesaurusForApi(shared_ptr<DelThesaurusForApiRequest> request);
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
  GetRuleResponse getRuleWithOptions(shared_ptr<GetRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRuleResponse getRule(shared_ptr<GetRuleRequest> request);
  GetRuleCategoryResponse getRuleCategoryWithOptions(shared_ptr<GetRuleCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRuleCategoryResponse getRuleCategory(shared_ptr<GetRuleCategoryRequest> request);
  GetRuleDetailResponse getRuleDetailWithOptions(shared_ptr<GetRuleDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRuleDetailResponse getRuleDetail(shared_ptr<GetRuleDetailRequest> request);
  GetScoreInfoResponse getScoreInfoWithOptions(shared_ptr<GetScoreInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetScoreInfoResponse getScoreInfo(shared_ptr<GetScoreInfoRequest> request);
  GetSkillGroupConfigResponse getSkillGroupConfigWithOptions(shared_ptr<GetSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSkillGroupConfigResponse getSkillGroupConfig(shared_ptr<GetSkillGroupConfigRequest> request);
  GetSyncResultResponse getSyncResultWithOptions(shared_ptr<GetSyncResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSyncResultResponse getSyncResult(shared_ptr<GetSyncResultRequest> request);
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
  RestartAsrTaskResponse restartAsrTaskWithOptions(shared_ptr<RestartAsrTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartAsrTaskResponse restartAsrTask(shared_ptr<RestartAsrTaskRequest> request);
  SaveConfigDataSetResponse saveConfigDataSetWithOptions(shared_ptr<SaveConfigDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveConfigDataSetResponse saveConfigDataSet(shared_ptr<SaveConfigDataSetRequest> request);
  SubmitComplaintResponse submitComplaintWithOptions(shared_ptr<SubmitComplaintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitComplaintResponse submitComplaint(shared_ptr<SubmitComplaintRequest> request);
  SubmitPrecisionTaskResponse submitPrecisionTaskWithOptions(shared_ptr<SubmitPrecisionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitPrecisionTaskResponse submitPrecisionTask(shared_ptr<SubmitPrecisionTaskRequest> request);
  SubmitQualityCheckTaskResponse submitQualityCheckTaskWithOptions(shared_ptr<SubmitQualityCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitQualityCheckTaskResponse submitQualityCheckTask(shared_ptr<SubmitQualityCheckTaskRequest> request);
  SubmitReviewInfoResponse submitReviewInfoWithOptions(shared_ptr<SubmitReviewInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitReviewInfoResponse submitReviewInfo(shared_ptr<SubmitReviewInfoRequest> request);
  SyncQualityCheckResponse syncQualityCheckWithOptions(shared_ptr<SyncQualityCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncQualityCheckResponse syncQualityCheck(shared_ptr<SyncQualityCheckRequest> request);
  UpdateAsrVocabResponse updateAsrVocabWithOptions(shared_ptr<UpdateAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAsrVocabResponse updateAsrVocab(shared_ptr<UpdateAsrVocabRequest> request);
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
