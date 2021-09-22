// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_NBFTESTPOP20210916103600223_H_
#define ALIBABACLOUD_NBFTESTPOP20210916103600223_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_NbfTestPop20210916103600223 {
class AddRequest : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  AddRequest() {}

  explicit AddRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["x"] = boost::any(*x);
    }
    if (y) {
      res["y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("x") != m.end() && !m["x"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["x"]));
    }
    if (m.find("y") != m.end() && !m["y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["y"]));
    }
  }


  virtual ~AddRequest() = default;
};
class AddResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> sum{};

  AddResponseBody() {}

  explicit AddResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sum) {
      res["sum"] = boost::any(*sum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sum") != m.end() && !m["sum"].empty()) {
      sum = make_shared<long>(boost::any_cast<long>(m["sum"]));
    }
  }


  virtual ~AddResponseBody() = default;
};
class AddResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddResponseBody> body{};

  AddResponse() {}

  explicit AddResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddResponseBody>(model1);
      }
    }
  }


  virtual ~AddResponse() = default;
};
class ResolveOpenApiRequestTeacher : public Darabonba::Model {
public:
  shared_ptr<long> teacherAge{};
  shared_ptr<string> teacherName{};

  ResolveOpenApiRequestTeacher() {}

  explicit ResolveOpenApiRequestTeacher(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (teacherAge) {
      res["teacherAge"] = boost::any(*teacherAge);
    }
    if (teacherName) {
      res["teacherName"] = boost::any(*teacherName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("teacherAge") != m.end() && !m["teacherAge"].empty()) {
      teacherAge = make_shared<long>(boost::any_cast<long>(m["teacherAge"]));
    }
    if (m.find("teacherName") != m.end() && !m["teacherName"].empty()) {
      teacherName = make_shared<string>(boost::any_cast<string>(m["teacherName"]));
    }
  }


  virtual ~ResolveOpenApiRequestTeacher() = default;
};
class ResolveOpenApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> age{};
  shared_ptr<ResolveOpenApiRequestTeacher> teacher{};
  shared_ptr<vector<map<string, boost::any>>> friends{};

  ResolveOpenApiRequest() {}

  explicit ResolveOpenApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (age) {
      res["age"] = boost::any(*age);
    }
    if (teacher) {
      res["teacher"] = teacher ? boost::any(teacher->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (friends) {
      res["friends"] = boost::any(*friends);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("age") != m.end() && !m["age"].empty()) {
      age = make_shared<long>(boost::any_cast<long>(m["age"]));
    }
    if (m.find("teacher") != m.end() && !m["teacher"].empty()) {
      if (typeid(map<string, boost::any>) == m["teacher"].type()) {
        ResolveOpenApiRequestTeacher model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["teacher"]));
        teacher = make_shared<ResolveOpenApiRequestTeacher>(model1);
      }
    }
    if (m.find("friends") != m.end() && !m["friends"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["friends"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["friends"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      friends = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ResolveOpenApiRequest() = default;
};
class ResolveOpenApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};

  ResolveOpenApiResponseBody() {}

  explicit ResolveOpenApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["success"] = boost::any(*success);
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
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
  }


  virtual ~ResolveOpenApiResponseBody() = default;
};
class ResolveOpenApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResolveOpenApiResponseBody> body{};

  ResolveOpenApiResponse() {}

  explicit ResolveOpenApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResolveOpenApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResolveOpenApiResponseBody>(model1);
      }
    }
  }


  virtual ~ResolveOpenApiResponse() = default;
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
  AddResponse add(shared_ptr<AddRequest> request);
  AddResponse addWithOptions(shared_ptr<AddRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResolveOpenApiResponse resolveOpenApi(shared_ptr<ResolveOpenApiRequest> request);
  ResolveOpenApiResponse resolveOpenApiWithOptions(shared_ptr<ResolveOpenApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_NbfTestPop20210916103600223

#endif
