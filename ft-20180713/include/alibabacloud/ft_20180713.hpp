// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_FT20180713_H_
#define ALIBABACLOUD_FT20180713_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ft20180713 {
class BatchAuditTest01Request : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> batchAuditTest01{};
  shared_ptr<string> demo01{};
  shared_ptr<bool> test010101{};

  BatchAuditTest01Request() {}

  explicit BatchAuditTest01Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (batchAuditTest01) {
      res["BatchAuditTest01"] = boost::any(*batchAuditTest01);
    }
    if (demo01) {
      res["Demo01"] = boost::any(*demo01);
    }
    if (test010101) {
      res["Test010101"] = boost::any(*test010101);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("BatchAuditTest01") != m.end() && !m["BatchAuditTest01"].empty()) {
      batchAuditTest01 = make_shared<string>(boost::any_cast<string>(m["BatchAuditTest01"]));
    }
    if (m.find("Demo01") != m.end() && !m["Demo01"].empty()) {
      demo01 = make_shared<string>(boost::any_cast<string>(m["Demo01"]));
    }
    if (m.find("Test010101") != m.end() && !m["Test010101"].empty()) {
      test010101 = make_shared<bool>(boost::any_cast<bool>(m["Test010101"]));
    }
  }


  virtual ~BatchAuditTest01Request() = default;
};
class BatchAuditTest01ResponseBodyDemo01Demo011Demo011 : public Darabonba::Model {
public:
  shared_ptr<string> demo0111{};

  BatchAuditTest01ResponseBodyDemo01Demo011Demo011() {}

  explicit BatchAuditTest01ResponseBodyDemo01Demo011Demo011(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (demo0111) {
      res["Demo0111"] = boost::any(*demo0111);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Demo0111") != m.end() && !m["Demo0111"].empty()) {
      demo0111 = make_shared<string>(boost::any_cast<string>(m["Demo0111"]));
    }
  }


  virtual ~BatchAuditTest01ResponseBodyDemo01Demo011Demo011() = default;
};
class BatchAuditTest01ResponseBodyDemo01Demo011 : public Darabonba::Model {
public:
  shared_ptr<vector<BatchAuditTest01ResponseBodyDemo01Demo011Demo011>> demo011{};

  BatchAuditTest01ResponseBodyDemo01Demo011() {}

  explicit BatchAuditTest01ResponseBodyDemo01Demo011(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (demo011) {
      vector<boost::any> temp1;
      for(auto item1:*demo011){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Demo011"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Demo011") != m.end() && !m["Demo011"].empty()) {
      if (typeid(vector<boost::any>) == m["Demo011"].type()) {
        vector<BatchAuditTest01ResponseBodyDemo01Demo011Demo011> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Demo011"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchAuditTest01ResponseBodyDemo01Demo011Demo011 model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        demo011 = make_shared<vector<BatchAuditTest01ResponseBodyDemo01Demo011Demo011>>(expect1);
      }
    }
  }


  virtual ~BatchAuditTest01ResponseBodyDemo01Demo011() = default;
};
class BatchAuditTest01ResponseBodyDemo01 : public Darabonba::Model {
public:
  shared_ptr<BatchAuditTest01ResponseBodyDemo01Demo011> demo011{};

  BatchAuditTest01ResponseBodyDemo01() {}

  explicit BatchAuditTest01ResponseBodyDemo01(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (demo011) {
      res["Demo011"] = demo011 ? boost::any(demo011->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Demo011") != m.end() && !m["Demo011"].empty()) {
      if (typeid(map<string, boost::any>) == m["Demo011"].type()) {
        BatchAuditTest01ResponseBodyDemo01Demo011 model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Demo011"]));
        demo011 = make_shared<BatchAuditTest01ResponseBodyDemo01Demo011>(model1);
      }
    }
  }


  virtual ~BatchAuditTest01ResponseBodyDemo01() = default;
};
class BatchAuditTest01ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<BatchAuditTest01ResponseBodyDemo01> demo01{};
  shared_ptr<string> name{};

  BatchAuditTest01ResponseBody() {}

  explicit BatchAuditTest01ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (demo01) {
      res["Demo01"] = demo01 ? boost::any(demo01->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Demo01") != m.end() && !m["Demo01"].empty()) {
      if (typeid(map<string, boost::any>) == m["Demo01"].type()) {
        BatchAuditTest01ResponseBodyDemo01 model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Demo01"]));
        demo01 = make_shared<BatchAuditTest01ResponseBodyDemo01>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~BatchAuditTest01ResponseBody() = default;
};
class BatchAuditTest01Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchAuditTest01ResponseBody> body{};

  BatchAuditTest01Response() {}

  explicit BatchAuditTest01Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchAuditTest01ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchAuditTest01ResponseBody>(model1);
      }
    }
  }


  virtual ~BatchAuditTest01Response() = default;
};
class FTApiAliasApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  FTApiAliasApiRequest() {}

  explicit FTApiAliasApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~FTApiAliasApiRequest() = default;
};
class FTApiAliasApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> name{};

  FTApiAliasApiResponseBody() {}

  explicit FTApiAliasApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~FTApiAliasApiResponseBody() = default;
};
class FTApiAliasApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FTApiAliasApiResponseBody> body{};

  FTApiAliasApiResponse() {}

  explicit FTApiAliasApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FTApiAliasApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FTApiAliasApiResponseBody>(model1);
      }
    }
  }


  virtual ~FTApiAliasApiResponse() = default;
};
class FtDynamicAddressDubboRequest : public Darabonba::Model {
public:
  shared_ptr<long> intValue{};
  shared_ptr<string> stringValue{};

  FtDynamicAddressDubboRequest() {}

  explicit FtDynamicAddressDubboRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intValue) {
      res["IntValue"] = boost::any(*intValue);
    }
    if (stringValue) {
      res["StringValue"] = boost::any(*stringValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntValue") != m.end() && !m["IntValue"].empty()) {
      intValue = make_shared<long>(boost::any_cast<long>(m["IntValue"]));
    }
    if (m.find("StringValue") != m.end() && !m["StringValue"].empty()) {
      stringValue = make_shared<string>(boost::any_cast<string>(m["StringValue"]));
    }
  }


  virtual ~FtDynamicAddressDubboRequest() = default;
};
class FtDynamicAddressDubboResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> stringValue{};
  shared_ptr<long> intValue{};

  FtDynamicAddressDubboResponseBody() {}

  explicit FtDynamicAddressDubboResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stringValue) {
      res["StringValue"] = boost::any(*stringValue);
    }
    if (intValue) {
      res["IntValue"] = boost::any(*intValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StringValue") != m.end() && !m["StringValue"].empty()) {
      stringValue = make_shared<string>(boost::any_cast<string>(m["StringValue"]));
    }
    if (m.find("IntValue") != m.end() && !m["IntValue"].empty()) {
      intValue = make_shared<long>(boost::any_cast<long>(m["IntValue"]));
    }
  }


  virtual ~FtDynamicAddressDubboResponseBody() = default;
};
class FtDynamicAddressDubboResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FtDynamicAddressDubboResponseBody> body{};

  FtDynamicAddressDubboResponse() {}

  explicit FtDynamicAddressDubboResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FtDynamicAddressDubboResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FtDynamicAddressDubboResponseBody>(model1);
      }
    }
  }


  virtual ~FtDynamicAddressDubboResponse() = default;
};
class FtDynamicAddressHsfResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  FtDynamicAddressHsfResponseBody() {}

  explicit FtDynamicAddressHsfResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FtDynamicAddressHsfResponseBody() = default;
};
class FtDynamicAddressHsfResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FtDynamicAddressHsfResponseBody> body{};

  FtDynamicAddressHsfResponse() {}

  explicit FtDynamicAddressHsfResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FtDynamicAddressHsfResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FtDynamicAddressHsfResponseBody>(model1);
      }
    }
  }


  virtual ~FtDynamicAddressHsfResponse() = default;
};
class FtEagleEyeRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  FtEagleEyeRequest() {}

  explicit FtEagleEyeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~FtEagleEyeRequest() = default;
};
class FtEagleEyeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eagleEyeTraceId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> name{};

  FtEagleEyeResponseBody() {}

  explicit FtEagleEyeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eagleEyeTraceId) {
      res["eagleEyeTraceId"] = boost::any(*eagleEyeTraceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("eagleEyeTraceId") != m.end() && !m["eagleEyeTraceId"].empty()) {
      eagleEyeTraceId = make_shared<string>(boost::any_cast<string>(m["eagleEyeTraceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~FtEagleEyeResponseBody() = default;
};
class FtEagleEyeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FtEagleEyeResponseBody> body{};

  FtEagleEyeResponse() {}

  explicit FtEagleEyeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FtEagleEyeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FtEagleEyeResponseBody>(model1);
      }
    }
  }


  virtual ~FtEagleEyeResponse() = default;
};
class FtFlowSpecialRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  FtFlowSpecialRequest() {}

  explicit FtFlowSpecialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~FtFlowSpecialRequest() = default;
};
class FtFlowSpecialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> name{};

  FtFlowSpecialResponseBody() {}

  explicit FtFlowSpecialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~FtFlowSpecialResponseBody() = default;
};
class FtFlowSpecialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FtFlowSpecialResponseBody> body{};

  FtFlowSpecialResponse() {}

  explicit FtFlowSpecialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FtFlowSpecialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FtFlowSpecialResponseBody>(model1);
      }
    }
  }


  virtual ~FtFlowSpecialResponse() = default;
};
class FtGatedLaunchPolicy4Request : public Darabonba::Model {
public:
  shared_ptr<string> isGatedLaunch{};

  FtGatedLaunchPolicy4Request() {}

  explicit FtGatedLaunchPolicy4Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isGatedLaunch) {
      res["IsGatedLaunch"] = boost::any(*isGatedLaunch);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsGatedLaunch") != m.end() && !m["IsGatedLaunch"].empty()) {
      isGatedLaunch = make_shared<string>(boost::any_cast<string>(m["IsGatedLaunch"]));
    }
  }


  virtual ~FtGatedLaunchPolicy4Request() = default;
};
class FtGatedLaunchPolicy4ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> isGatedLaunch{};
  shared_ptr<string> requestId{};

  FtGatedLaunchPolicy4ResponseBody() {}

  explicit FtGatedLaunchPolicy4ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isGatedLaunch) {
      res["IsGatedLaunch"] = boost::any(*isGatedLaunch);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsGatedLaunch") != m.end() && !m["IsGatedLaunch"].empty()) {
      isGatedLaunch = make_shared<string>(boost::any_cast<string>(m["IsGatedLaunch"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~FtGatedLaunchPolicy4ResponseBody() = default;
};
class FtGatedLaunchPolicy4Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FtGatedLaunchPolicy4ResponseBody> body{};

  FtGatedLaunchPolicy4Response() {}

  explicit FtGatedLaunchPolicy4Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FtGatedLaunchPolicy4ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FtGatedLaunchPolicy4ResponseBody>(model1);
      }
    }
  }


  virtual ~FtGatedLaunchPolicy4Response() = default;
};
class FtIpFlowControlRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  FtIpFlowControlRequest() {}

  explicit FtIpFlowControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~FtIpFlowControlRequest() = default;
};
class FtIpFlowControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> name{};

  FtIpFlowControlResponseBody() {}

  explicit FtIpFlowControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~FtIpFlowControlResponseBody() = default;
};
class FtIpFlowControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FtIpFlowControlResponseBody> body{};

  FtIpFlowControlResponse() {}

  explicit FtIpFlowControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FtIpFlowControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FtIpFlowControlResponseBody>(model1);
      }
    }
  }


  virtual ~FtIpFlowControlResponse() = default;
};
class FtParamListRequestDisk : public Darabonba::Model {
public:
  shared_ptr<vector<string>> type{};
  shared_ptr<vector<string>> size{};

  FtParamListRequestDisk() {}

  explicit FtParamListRequestDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Type"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Type"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      type = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Size"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Size"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      size = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~FtParamListRequestDisk() = default;
};
class FtParamListRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<FtParamListRequestDisk>> disk{};

  FtParamListRequest() {}

  explicit FtParamListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (disk) {
      vector<boost::any> temp1;
      for(auto item1:*disk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disk"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Disk") != m.end() && !m["Disk"].empty()) {
      if (typeid(vector<boost::any>) == m["Disk"].type()) {
        vector<FtParamListRequestDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Disk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FtParamListRequestDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        disk = make_shared<vector<FtParamListRequestDisk>>(expect1);
      }
    }
  }


  virtual ~FtParamListRequest() = default;
};
class FtParamListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> name{};

  FtParamListResponseBody() {}

  explicit FtParamListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~FtParamListResponseBody() = default;
};
class FtParamListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FtParamListResponseBody> body{};

  FtParamListResponse() {}

  explicit FtParamListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FtParamListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FtParamListResponseBody>(model1);
      }
    }
  }


  virtual ~FtParamListResponse() = default;
};
class TestFlowStrategy01Request : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> names{};

  TestFlowStrategy01Request() {}

  explicit TestFlowStrategy01Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (names) {
      res["Names"] = boost::any(*names);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Names") != m.end() && !m["Names"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Names"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      names = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~TestFlowStrategy01Request() = default;
};
class TestFlowStrategy01ShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> namesShrink{};

  TestFlowStrategy01ShrinkRequest() {}

  explicit TestFlowStrategy01ShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namesShrink) {
      res["Names"] = boost::any(*namesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Names") != m.end() && !m["Names"].empty()) {
      namesShrink = make_shared<string>(boost::any_cast<string>(m["Names"]));
    }
  }


  virtual ~TestFlowStrategy01ShrinkRequest() = default;
};
class TestFlowStrategy01ResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> names{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> list{};

  TestFlowStrategy01ResponseBody() {}

  explicit TestFlowStrategy01ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (names) {
      res["Names"] = boost::any(*names);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (list) {
      res["List"] = boost::any(*list);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Names") != m.end() && !m["Names"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Names"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Names"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      names = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["List"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      list = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~TestFlowStrategy01ResponseBody() = default;
};
class TestFlowStrategy01Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TestFlowStrategy01ResponseBody> body{};

  TestFlowStrategy01Response() {}

  explicit TestFlowStrategy01Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TestFlowStrategy01ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TestFlowStrategy01ResponseBody>(model1);
      }
    }
  }


  virtual ~TestFlowStrategy01Response() = default;
};
class TestHttpApiRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> stringValue{};
  shared_ptr<map<string, boost::any>> defaultValue{};
  shared_ptr<map<string, boost::any>> otherParam{};
  shared_ptr<bool> booleanParam{};

  TestHttpApiRequest() {}

  explicit TestHttpApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stringValue) {
      res["StringValue"] = boost::any(*stringValue);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (otherParam) {
      res["OtherParam"] = boost::any(*otherParam);
    }
    if (booleanParam) {
      res["BooleanParam"] = boost::any(*booleanParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StringValue") != m.end() && !m["StringValue"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["StringValue"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      stringValue = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DefaultValue"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      defaultValue = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("OtherParam") != m.end() && !m["OtherParam"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OtherParam"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      otherParam = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("BooleanParam") != m.end() && !m["BooleanParam"].empty()) {
      booleanParam = make_shared<bool>(boost::any_cast<bool>(m["BooleanParam"]));
    }
  }


  virtual ~TestHttpApiRequest() = default;
};
class TestHttpApiShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> stringValueShrink{};
  shared_ptr<string> defaultValueShrink{};
  shared_ptr<string> otherParamShrink{};
  shared_ptr<bool> booleanParam{};

  TestHttpApiShrinkRequest() {}

  explicit TestHttpApiShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stringValueShrink) {
      res["StringValue"] = boost::any(*stringValueShrink);
    }
    if (defaultValueShrink) {
      res["DefaultValue"] = boost::any(*defaultValueShrink);
    }
    if (otherParamShrink) {
      res["OtherParam"] = boost::any(*otherParamShrink);
    }
    if (booleanParam) {
      res["BooleanParam"] = boost::any(*booleanParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StringValue") != m.end() && !m["StringValue"].empty()) {
      stringValueShrink = make_shared<string>(boost::any_cast<string>(m["StringValue"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValueShrink = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("OtherParam") != m.end() && !m["OtherParam"].empty()) {
      otherParamShrink = make_shared<string>(boost::any_cast<string>(m["OtherParam"]));
    }
    if (m.find("BooleanParam") != m.end() && !m["BooleanParam"].empty()) {
      booleanParam = make_shared<bool>(boost::any_cast<bool>(m["BooleanParam"]));
    }
  }


  virtual ~TestHttpApiShrinkRequest() = default;
};
class TestHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serviceRpcSign{};
  shared_ptr<string> params{};

  TestHttpApiResponseBody() {}

  explicit TestHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceRpcSign) {
      res["ServiceRpcSign"] = boost::any(*serviceRpcSign);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceRpcSign") != m.end() && !m["ServiceRpcSign"].empty()) {
      serviceRpcSign = make_shared<string>(boost::any_cast<string>(m["ServiceRpcSign"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
  }


  virtual ~TestHttpApiResponseBody() = default;
};
class TestHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TestHttpApiResponseBody> body{};

  TestHttpApiResponse() {}

  explicit TestHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TestHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TestHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~TestHttpApiResponse() = default;
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
  BatchAuditTest01Response batchAuditTest01WithOptions(shared_ptr<BatchAuditTest01Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchAuditTest01Response batchAuditTest01(shared_ptr<BatchAuditTest01Request> request);
  FTApiAliasApiResponse fTApiAliasApiWithOptions(shared_ptr<FTApiAliasApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FTApiAliasApiResponse fTApiAliasApi(shared_ptr<FTApiAliasApiRequest> request);
  FtDynamicAddressDubboResponse ftDynamicAddressDubboWithOptions(shared_ptr<FtDynamicAddressDubboRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FtDynamicAddressDubboResponse ftDynamicAddressDubbo(shared_ptr<FtDynamicAddressDubboRequest> request);
  FtDynamicAddressHsfResponse ftDynamicAddressHsfWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FtDynamicAddressHsfResponse ftDynamicAddressHsf();
  FtEagleEyeResponse ftEagleEyeWithOptions(shared_ptr<FtEagleEyeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FtEagleEyeResponse ftEagleEye(shared_ptr<FtEagleEyeRequest> request);
  FtFlowSpecialResponse ftFlowSpecialWithOptions(shared_ptr<FtFlowSpecialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FtFlowSpecialResponse ftFlowSpecial(shared_ptr<FtFlowSpecialRequest> request);
  FtGatedLaunchPolicy4Response ftGatedLaunchPolicy4WithOptions(shared_ptr<FtGatedLaunchPolicy4Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FtGatedLaunchPolicy4Response ftGatedLaunchPolicy4(shared_ptr<FtGatedLaunchPolicy4Request> request);
  FtIpFlowControlResponse ftIpFlowControlWithOptions(shared_ptr<FtIpFlowControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FtIpFlowControlResponse ftIpFlowControl(shared_ptr<FtIpFlowControlRequest> request);
  FtParamListResponse ftParamListWithOptions(shared_ptr<FtParamListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FtParamListResponse ftParamList(shared_ptr<FtParamListRequest> request);
  TestFlowStrategy01Response testFlowStrategy01WithOptions(shared_ptr<TestFlowStrategy01Request> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TestFlowStrategy01Response testFlowStrategy01(shared_ptr<TestFlowStrategy01Request> request);
  TestHttpApiResponse testHttpApiWithOptions(shared_ptr<TestHttpApiRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TestHttpApiResponse testHttpApi(shared_ptr<TestHttpApiRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ft20180713

#endif
