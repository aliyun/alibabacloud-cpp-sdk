// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MAXCOMPUTE20220104_H_
#define ALIBABACLOUD_MAXCOMPUTE20220104_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_MaxCompute20220104 {
class CreatePackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<bool> isInstall{};

  CreatePackageRequest() {}

  explicit CreatePackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (isInstall) {
      res["isInstall"] = boost::any(*isInstall);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("isInstall") != m.end() && !m["isInstall"].empty()) {
      isInstall = make_shared<bool>(boost::any_cast<bool>(m["isInstall"]));
    }
  }


  virtual ~CreatePackageRequest() = default;
};
class CreatePackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  CreatePackageResponseBody() {}

  explicit CreatePackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreatePackageResponseBody() = default;
};
class CreatePackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePackageResponseBody> body{};

  CreatePackageResponse() {}

  explicit CreatePackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePackageResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePackageResponse() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  CreateProjectResponseBody() {}

  explicit CreateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateProjectResponseBody() = default;
};
class CreateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProjectResponseBody> body{};

  CreateProjectResponse() {}

  explicit CreateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProjectResponse() = default;
};
class CreateQuotaPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  CreateQuotaPlanRequest() {}

  explicit CreateQuotaPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~CreateQuotaPlanRequest() = default;
};
class CreateQuotaPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  CreateQuotaPlanResponseBody() {}

  explicit CreateQuotaPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateQuotaPlanResponseBody() = default;
};
class CreateQuotaPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateQuotaPlanResponseBody> body{};

  CreateQuotaPlanResponse() {}

  explicit CreateQuotaPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateQuotaPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateQuotaPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateQuotaPlanResponse() = default;
};
class CreateQuotaScheduleRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  CreateQuotaScheduleRequest() {}

  explicit CreateQuotaScheduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~CreateQuotaScheduleRequest() = default;
};
class CreateQuotaScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  CreateQuotaScheduleResponseBody() {}

  explicit CreateQuotaScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateQuotaScheduleResponseBody() = default;
};
class CreateQuotaScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateQuotaScheduleResponseBody> body{};

  CreateQuotaScheduleResponse() {}

  explicit CreateQuotaScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateQuotaScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateQuotaScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateQuotaScheduleResponse() = default;
};
class CreateRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};

  CreateRoleRequest() {}

  explicit CreateRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~CreateRoleRequest() = default;
};
class CreateRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  CreateRoleResponseBody() {}

  explicit CreateRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateRoleResponseBody() = default;
};
class CreateRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRoleResponseBody> body{};

  CreateRoleResponse() {}

  explicit CreateRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRoleResponse() = default;
};
class DeleteQuotaPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  DeleteQuotaPlanRequest() {}

  explicit DeleteQuotaPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~DeleteQuotaPlanRequest() = default;
};
class DeleteQuotaPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  DeleteQuotaPlanResponseBody() {}

  explicit DeleteQuotaPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteQuotaPlanResponseBody() = default;
};
class DeleteQuotaPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteQuotaPlanResponseBody> body{};

  DeleteQuotaPlanResponse() {}

  explicit DeleteQuotaPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteQuotaPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteQuotaPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteQuotaPlanResponse() = default;
};
class GetJobResourceUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<vector<string>> jobOwnerList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> quotaNicknameList{};

  GetJobResourceUsageRequest() {}

  explicit GetJobResourceUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (jobOwnerList) {
      res["jobOwnerList"] = boost::any(*jobOwnerList);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (quotaNicknameList) {
      res["quotaNicknameList"] = boost::any(*quotaNicknameList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("jobOwnerList") != m.end() && !m["jobOwnerList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["jobOwnerList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["jobOwnerList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      jobOwnerList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("quotaNicknameList") != m.end() && !m["quotaNicknameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["quotaNicknameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["quotaNicknameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      quotaNicknameList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetJobResourceUsageRequest() = default;
};
class GetJobResourceUsageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<string> jobOwnerListShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> quotaNicknameListShrink{};

  GetJobResourceUsageShrinkRequest() {}

  explicit GetJobResourceUsageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (jobOwnerListShrink) {
      res["jobOwnerList"] = boost::any(*jobOwnerListShrink);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (quotaNicknameListShrink) {
      res["quotaNicknameList"] = boost::any(*quotaNicknameListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("jobOwnerList") != m.end() && !m["jobOwnerList"].empty()) {
      jobOwnerListShrink = make_shared<string>(boost::any_cast<string>(m["jobOwnerList"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("quotaNicknameList") != m.end() && !m["quotaNicknameList"].empty()) {
      quotaNicknameListShrink = make_shared<string>(boost::any_cast<string>(m["quotaNicknameList"]));
    }
  }


  virtual ~GetJobResourceUsageShrinkRequest() = default;
};
class GetJobResourceUsageResponseBodyDataJobResourceUsageList : public Darabonba::Model {
public:
  shared_ptr<long> cuUsage{};
  shared_ptr<string> date{};
  shared_ptr<string> jobOwner{};
  shared_ptr<long> memoryUsage{};
  shared_ptr<string> quotaNickname{};

  GetJobResourceUsageResponseBodyDataJobResourceUsageList() {}

  explicit GetJobResourceUsageResponseBodyDataJobResourceUsageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cuUsage) {
      res["cuUsage"] = boost::any(*cuUsage);
    }
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (jobOwner) {
      res["jobOwner"] = boost::any(*jobOwner);
    }
    if (memoryUsage) {
      res["memoryUsage"] = boost::any(*memoryUsage);
    }
    if (quotaNickname) {
      res["quotaNickname"] = boost::any(*quotaNickname);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cuUsage") != m.end() && !m["cuUsage"].empty()) {
      cuUsage = make_shared<long>(boost::any_cast<long>(m["cuUsage"]));
    }
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("jobOwner") != m.end() && !m["jobOwner"].empty()) {
      jobOwner = make_shared<string>(boost::any_cast<string>(m["jobOwner"]));
    }
    if (m.find("memoryUsage") != m.end() && !m["memoryUsage"].empty()) {
      memoryUsage = make_shared<long>(boost::any_cast<long>(m["memoryUsage"]));
    }
    if (m.find("quotaNickname") != m.end() && !m["quotaNickname"].empty()) {
      quotaNickname = make_shared<string>(boost::any_cast<string>(m["quotaNickname"]));
    }
  }


  virtual ~GetJobResourceUsageResponseBodyDataJobResourceUsageList() = default;
};
class GetJobResourceUsageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetJobResourceUsageResponseBodyDataJobResourceUsageList>> jobResourceUsageList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  GetJobResourceUsageResponseBodyData() {}

  explicit GetJobResourceUsageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobResourceUsageList) {
      vector<boost::any> temp1;
      for(auto item1:*jobResourceUsageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["jobResourceUsageList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobResourceUsageList") != m.end() && !m["jobResourceUsageList"].empty()) {
      if (typeid(vector<boost::any>) == m["jobResourceUsageList"].type()) {
        vector<GetJobResourceUsageResponseBodyDataJobResourceUsageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["jobResourceUsageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobResourceUsageResponseBodyDataJobResourceUsageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobResourceUsageList = make_shared<vector<GetJobResourceUsageResponseBodyDataJobResourceUsageList>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~GetJobResourceUsageResponseBodyData() = default;
};
class GetJobResourceUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetJobResourceUsageResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  GetJobResourceUsageResponseBody() {}

  explicit GetJobResourceUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetJobResourceUsageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetJobResourceUsageResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetJobResourceUsageResponseBody() = default;
};
class GetJobResourceUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobResourceUsageResponseBody> body{};

  GetJobResourceUsageResponse() {}

  explicit GetJobResourceUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJobResourceUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobResourceUsageResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobResourceUsageResponse() = default;
};
class GetPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceProject{};

  GetPackageRequest() {}

  explicit GetPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceProject) {
      res["sourceProject"] = boost::any(*sourceProject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sourceProject") != m.end() && !m["sourceProject"].empty()) {
      sourceProject = make_shared<string>(boost::any_cast<string>(m["sourceProject"]));
    }
  }


  virtual ~GetPackageRequest() = default;
};
class GetPackageResponseBodyDataAllowedProjectList : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<string> project{};

  GetPackageResponseBodyDataAllowedProjectList() {}

  explicit GetPackageResponseBodyDataAllowedProjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
  }


  virtual ~GetPackageResponseBodyDataAllowedProjectList() = default;
};
class GetPackageResponseBodyDataResourceListFunction : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  GetPackageResponseBodyDataResourceListFunction() {}

  explicit GetPackageResponseBodyDataResourceListFunction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetPackageResponseBodyDataResourceListFunction() = default;
};
class GetPackageResponseBodyDataResourceListResource : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  GetPackageResponseBodyDataResourceListResource() {}

  explicit GetPackageResponseBodyDataResourceListResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetPackageResponseBodyDataResourceListResource() = default;
};
class GetPackageResponseBodyDataResourceListTable : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  GetPackageResponseBodyDataResourceListTable() {}

  explicit GetPackageResponseBodyDataResourceListTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetPackageResponseBodyDataResourceListTable() = default;
};
class GetPackageResponseBodyDataResourceList : public Darabonba::Model {
public:
  shared_ptr<vector<GetPackageResponseBodyDataResourceListFunction>> function{};
  shared_ptr<vector<GetPackageResponseBodyDataResourceListResource>> resource{};
  shared_ptr<vector<GetPackageResponseBodyDataResourceListTable>> table{};

  GetPackageResponseBodyDataResourceList() {}

  explicit GetPackageResponseBodyDataResourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (function) {
      vector<boost::any> temp1;
      for(auto item1:*function){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["function"] = boost::any(temp1);
    }
    if (resource) {
      vector<boost::any> temp1;
      for(auto item1:*resource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resource"] = boost::any(temp1);
    }
    if (table) {
      vector<boost::any> temp1;
      for(auto item1:*table){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["table"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("function") != m.end() && !m["function"].empty()) {
      if (typeid(vector<boost::any>) == m["function"].type()) {
        vector<GetPackageResponseBodyDataResourceListFunction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["function"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPackageResponseBodyDataResourceListFunction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        function = make_shared<vector<GetPackageResponseBodyDataResourceListFunction>>(expect1);
      }
    }
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      if (typeid(vector<boost::any>) == m["resource"].type()) {
        vector<GetPackageResponseBodyDataResourceListResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPackageResponseBodyDataResourceListResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resource = make_shared<vector<GetPackageResponseBodyDataResourceListResource>>(expect1);
      }
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      if (typeid(vector<boost::any>) == m["table"].type()) {
        vector<GetPackageResponseBodyDataResourceListTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["table"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPackageResponseBodyDataResourceListTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        table = make_shared<vector<GetPackageResponseBodyDataResourceListTable>>(expect1);
      }
    }
  }


  virtual ~GetPackageResponseBodyDataResourceList() = default;
};
class GetPackageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetPackageResponseBodyDataAllowedProjectList>> allowedProjectList{};
  shared_ptr<GetPackageResponseBodyDataResourceList> resourceList{};

  GetPackageResponseBodyData() {}

  explicit GetPackageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedProjectList) {
      vector<boost::any> temp1;
      for(auto item1:*allowedProjectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["allowedProjectList"] = boost::any(temp1);
    }
    if (resourceList) {
      res["resourceList"] = resourceList ? boost::any(resourceList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowedProjectList") != m.end() && !m["allowedProjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["allowedProjectList"].type()) {
        vector<GetPackageResponseBodyDataAllowedProjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["allowedProjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPackageResponseBodyDataAllowedProjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        allowedProjectList = make_shared<vector<GetPackageResponseBodyDataAllowedProjectList>>(expect1);
      }
    }
    if (m.find("resourceList") != m.end() && !m["resourceList"].empty()) {
      if (typeid(map<string, boost::any>) == m["resourceList"].type()) {
        GetPackageResponseBodyDataResourceList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["resourceList"]));
        resourceList = make_shared<GetPackageResponseBodyDataResourceList>(model1);
      }
    }
  }


  virtual ~GetPackageResponseBodyData() = default;
};
class GetPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPackageResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetPackageResponseBody() {}

  explicit GetPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetPackageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetPackageResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetPackageResponseBody() = default;
};
class GetPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPackageResponseBody> body{};

  GetPackageResponse() {}

  explicit GetPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPackageResponseBody>(model1);
      }
    }
  }


  virtual ~GetPackageResponse() = default;
};
class GetProjectResponseBodyDataIpWhiteList : public Darabonba::Model {
public:
  shared_ptr<string> ipList{};
  shared_ptr<string> vpcIpList{};

  GetProjectResponseBodyDataIpWhiteList() {}

  explicit GetProjectResponseBodyDataIpWhiteList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipList) {
      res["ipList"] = boost::any(*ipList);
    }
    if (vpcIpList) {
      res["vpcIpList"] = boost::any(*vpcIpList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ipList") != m.end() && !m["ipList"].empty()) {
      ipList = make_shared<string>(boost::any_cast<string>(m["ipList"]));
    }
    if (m.find("vpcIpList") != m.end() && !m["vpcIpList"].empty()) {
      vpcIpList = make_shared<string>(boost::any_cast<string>(m["vpcIpList"]));
    }
  }


  virtual ~GetProjectResponseBodyDataIpWhiteList() = default;
};
class GetProjectResponseBodyDataPropertiesEncryption : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<bool> enable{};
  shared_ptr<string> key{};

  GetProjectResponseBodyDataPropertiesEncryption() {}

  explicit GetProjectResponseBodyDataPropertiesEncryption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["algorithm"] = boost::any(*algorithm);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithm") != m.end() && !m["algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["algorithm"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
  }


  virtual ~GetProjectResponseBodyDataPropertiesEncryption() = default;
};
class GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize : public Darabonba::Model {
public:
  shared_ptr<long> longTermSize{};
  shared_ptr<long> lowFrequencySize{};
  shared_ptr<long> standardSize{};

  GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize() {}

  explicit GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (longTermSize) {
      res["longTermSize"] = boost::any(*longTermSize);
    }
    if (lowFrequencySize) {
      res["lowFrequencySize"] = boost::any(*lowFrequencySize);
    }
    if (standardSize) {
      res["standardSize"] = boost::any(*standardSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("longTermSize") != m.end() && !m["longTermSize"].empty()) {
      longTermSize = make_shared<long>(boost::any_cast<long>(m["longTermSize"]));
    }
    if (m.find("lowFrequencySize") != m.end() && !m["lowFrequencySize"].empty()) {
      lowFrequencySize = make_shared<long>(boost::any_cast<long>(m["lowFrequencySize"]));
    }
    if (m.find("standardSize") != m.end() && !m["standardSize"].empty()) {
      standardSize = make_shared<long>(boost::any_cast<long>(m["standardSize"]));
    }
  }


  virtual ~GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize() = default;
};
class GetProjectResponseBodyDataPropertiesStorageTierInfo : public Darabonba::Model {
public:
  shared_ptr<long> projectBackupSize{};
  shared_ptr<GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize> storageTierSize{};

  GetProjectResponseBodyDataPropertiesStorageTierInfo() {}

  explicit GetProjectResponseBodyDataPropertiesStorageTierInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectBackupSize) {
      res["projectBackupSize"] = boost::any(*projectBackupSize);
    }
    if (storageTierSize) {
      res["storageTierSize"] = storageTierSize ? boost::any(storageTierSize->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectBackupSize") != m.end() && !m["projectBackupSize"].empty()) {
      projectBackupSize = make_shared<long>(boost::any_cast<long>(m["projectBackupSize"]));
    }
    if (m.find("storageTierSize") != m.end() && !m["storageTierSize"].empty()) {
      if (typeid(map<string, boost::any>) == m["storageTierSize"].type()) {
        GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["storageTierSize"]));
        storageTierSize = make_shared<GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize>(model1);
      }
    }
  }


  virtual ~GetProjectResponseBodyDataPropertiesStorageTierInfo() = default;
};
class GetProjectResponseBodyDataPropertiesTableLifecycle : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  GetProjectResponseBodyDataPropertiesTableLifecycle() {}

  explicit GetProjectResponseBodyDataPropertiesTableLifecycle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~GetProjectResponseBodyDataPropertiesTableLifecycle() = default;
};
class GetProjectResponseBodyDataProperties : public Darabonba::Model {
public:
  shared_ptr<bool> allowFullScan{};
  shared_ptr<bool> enableDecimal2{};
  shared_ptr<bool> enableTunnelQuotaRoute{};
  shared_ptr<GetProjectResponseBodyDataPropertiesEncryption> encryption{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> sqlMeteringMax{};
  shared_ptr<GetProjectResponseBodyDataPropertiesStorageTierInfo> storageTierInfo{};
  shared_ptr<GetProjectResponseBodyDataPropertiesTableLifecycle> tableLifecycle{};
  shared_ptr<string> timezone{};
  shared_ptr<string> tunnelQuota{};
  shared_ptr<string> typeSystem{};

  GetProjectResponseBodyDataProperties() {}

  explicit GetProjectResponseBodyDataProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowFullScan) {
      res["allowFullScan"] = boost::any(*allowFullScan);
    }
    if (enableDecimal2) {
      res["enableDecimal2"] = boost::any(*enableDecimal2);
    }
    if (enableTunnelQuotaRoute) {
      res["enableTunnelQuotaRoute"] = boost::any(*enableTunnelQuotaRoute);
    }
    if (encryption) {
      res["encryption"] = encryption ? boost::any(encryption->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (retentionDays) {
      res["retentionDays"] = boost::any(*retentionDays);
    }
    if (sqlMeteringMax) {
      res["sqlMeteringMax"] = boost::any(*sqlMeteringMax);
    }
    if (storageTierInfo) {
      res["storageTierInfo"] = storageTierInfo ? boost::any(storageTierInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tableLifecycle) {
      res["tableLifecycle"] = tableLifecycle ? boost::any(tableLifecycle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    if (tunnelQuota) {
      res["tunnelQuota"] = boost::any(*tunnelQuota);
    }
    if (typeSystem) {
      res["typeSystem"] = boost::any(*typeSystem);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowFullScan") != m.end() && !m["allowFullScan"].empty()) {
      allowFullScan = make_shared<bool>(boost::any_cast<bool>(m["allowFullScan"]));
    }
    if (m.find("enableDecimal2") != m.end() && !m["enableDecimal2"].empty()) {
      enableDecimal2 = make_shared<bool>(boost::any_cast<bool>(m["enableDecimal2"]));
    }
    if (m.find("enableTunnelQuotaRoute") != m.end() && !m["enableTunnelQuotaRoute"].empty()) {
      enableTunnelQuotaRoute = make_shared<bool>(boost::any_cast<bool>(m["enableTunnelQuotaRoute"]));
    }
    if (m.find("encryption") != m.end() && !m["encryption"].empty()) {
      if (typeid(map<string, boost::any>) == m["encryption"].type()) {
        GetProjectResponseBodyDataPropertiesEncryption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["encryption"]));
        encryption = make_shared<GetProjectResponseBodyDataPropertiesEncryption>(model1);
      }
    }
    if (m.find("retentionDays") != m.end() && !m["retentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["retentionDays"]));
    }
    if (m.find("sqlMeteringMax") != m.end() && !m["sqlMeteringMax"].empty()) {
      sqlMeteringMax = make_shared<string>(boost::any_cast<string>(m["sqlMeteringMax"]));
    }
    if (m.find("storageTierInfo") != m.end() && !m["storageTierInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["storageTierInfo"].type()) {
        GetProjectResponseBodyDataPropertiesStorageTierInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["storageTierInfo"]));
        storageTierInfo = make_shared<GetProjectResponseBodyDataPropertiesStorageTierInfo>(model1);
      }
    }
    if (m.find("tableLifecycle") != m.end() && !m["tableLifecycle"].empty()) {
      if (typeid(map<string, boost::any>) == m["tableLifecycle"].type()) {
        GetProjectResponseBodyDataPropertiesTableLifecycle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tableLifecycle"]));
        tableLifecycle = make_shared<GetProjectResponseBodyDataPropertiesTableLifecycle>(model1);
      }
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
    if (m.find("tunnelQuota") != m.end() && !m["tunnelQuota"].empty()) {
      tunnelQuota = make_shared<string>(boost::any_cast<string>(m["tunnelQuota"]));
    }
    if (m.find("typeSystem") != m.end() && !m["typeSystem"].empty()) {
      typeSystem = make_shared<string>(boost::any_cast<string>(m["typeSystem"]));
    }
  }


  virtual ~GetProjectResponseBodyDataProperties() = default;
};
class GetProjectResponseBodyDataSaleTag : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  GetProjectResponseBodyDataSaleTag() {}

  explicit GetProjectResponseBodyDataSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetProjectResponseBodyDataSaleTag() = default;
};
class GetProjectResponseBodyDataSecurityPropertiesProjectProtection : public Darabonba::Model {
public:
  shared_ptr<string> exceptionPolicy{};
  shared_ptr<bool> protected_{};

  GetProjectResponseBodyDataSecurityPropertiesProjectProtection() {}

  explicit GetProjectResponseBodyDataSecurityPropertiesProjectProtection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exceptionPolicy) {
      res["exceptionPolicy"] = boost::any(*exceptionPolicy);
    }
    if (protected_) {
      res["protected"] = boost::any(*protected_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("exceptionPolicy") != m.end() && !m["exceptionPolicy"].empty()) {
      exceptionPolicy = make_shared<string>(boost::any_cast<string>(m["exceptionPolicy"]));
    }
    if (m.find("protected") != m.end() && !m["protected"].empty()) {
      protected_ = make_shared<bool>(boost::any_cast<bool>(m["protected"]));
    }
  }


  virtual ~GetProjectResponseBodyDataSecurityPropertiesProjectProtection() = default;
};
class GetProjectResponseBodyDataSecurityProperties : public Darabonba::Model {
public:
  shared_ptr<bool> enableDownloadPrivilege{};
  shared_ptr<bool> labelSecurity{};
  shared_ptr<bool> objectCreatorHasAccessPermission{};
  shared_ptr<bool> objectCreatorHasGrantPermission{};
  shared_ptr<GetProjectResponseBodyDataSecurityPropertiesProjectProtection> projectProtection{};
  shared_ptr<bool> usingAcl{};
  shared_ptr<bool> usingPolicy{};

  GetProjectResponseBodyDataSecurityProperties() {}

  explicit GetProjectResponseBodyDataSecurityProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableDownloadPrivilege) {
      res["enableDownloadPrivilege"] = boost::any(*enableDownloadPrivilege);
    }
    if (labelSecurity) {
      res["labelSecurity"] = boost::any(*labelSecurity);
    }
    if (objectCreatorHasAccessPermission) {
      res["objectCreatorHasAccessPermission"] = boost::any(*objectCreatorHasAccessPermission);
    }
    if (objectCreatorHasGrantPermission) {
      res["objectCreatorHasGrantPermission"] = boost::any(*objectCreatorHasGrantPermission);
    }
    if (projectProtection) {
      res["projectProtection"] = projectProtection ? boost::any(projectProtection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usingAcl) {
      res["usingAcl"] = boost::any(*usingAcl);
    }
    if (usingPolicy) {
      res["usingPolicy"] = boost::any(*usingPolicy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableDownloadPrivilege") != m.end() && !m["enableDownloadPrivilege"].empty()) {
      enableDownloadPrivilege = make_shared<bool>(boost::any_cast<bool>(m["enableDownloadPrivilege"]));
    }
    if (m.find("labelSecurity") != m.end() && !m["labelSecurity"].empty()) {
      labelSecurity = make_shared<bool>(boost::any_cast<bool>(m["labelSecurity"]));
    }
    if (m.find("objectCreatorHasAccessPermission") != m.end() && !m["objectCreatorHasAccessPermission"].empty()) {
      objectCreatorHasAccessPermission = make_shared<bool>(boost::any_cast<bool>(m["objectCreatorHasAccessPermission"]));
    }
    if (m.find("objectCreatorHasGrantPermission") != m.end() && !m["objectCreatorHasGrantPermission"].empty()) {
      objectCreatorHasGrantPermission = make_shared<bool>(boost::any_cast<bool>(m["objectCreatorHasGrantPermission"]));
    }
    if (m.find("projectProtection") != m.end() && !m["projectProtection"].empty()) {
      if (typeid(map<string, boost::any>) == m["projectProtection"].type()) {
        GetProjectResponseBodyDataSecurityPropertiesProjectProtection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["projectProtection"]));
        projectProtection = make_shared<GetProjectResponseBodyDataSecurityPropertiesProjectProtection>(model1);
      }
    }
    if (m.find("usingAcl") != m.end() && !m["usingAcl"].empty()) {
      usingAcl = make_shared<bool>(boost::any_cast<bool>(m["usingAcl"]));
    }
    if (m.find("usingPolicy") != m.end() && !m["usingPolicy"].empty()) {
      usingPolicy = make_shared<bool>(boost::any_cast<bool>(m["usingPolicy"]));
    }
  }


  virtual ~GetProjectResponseBodyDataSecurityProperties() = default;
};
class GetProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> costStorage{};
  shared_ptr<string> defaultQuota{};
  shared_ptr<GetProjectResponseBodyDataIpWhiteList> ipWhiteList{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> productType{};
  shared_ptr<GetProjectResponseBodyDataProperties> properties{};
  shared_ptr<GetProjectResponseBodyDataSaleTag> saleTag{};
  shared_ptr<GetProjectResponseBodyDataSecurityProperties> securityProperties{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetProjectResponseBodyData() {}

  explicit GetProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (costStorage) {
      res["costStorage"] = boost::any(*costStorage);
    }
    if (defaultQuota) {
      res["defaultQuota"] = boost::any(*defaultQuota);
    }
    if (ipWhiteList) {
      res["ipWhiteList"] = ipWhiteList ? boost::any(ipWhiteList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    if (properties) {
      res["properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityProperties) {
      res["securityProperties"] = securityProperties ? boost::any(securityProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("costStorage") != m.end() && !m["costStorage"].empty()) {
      costStorage = make_shared<string>(boost::any_cast<string>(m["costStorage"]));
    }
    if (m.find("defaultQuota") != m.end() && !m["defaultQuota"].empty()) {
      defaultQuota = make_shared<string>(boost::any_cast<string>(m["defaultQuota"]));
    }
    if (m.find("ipWhiteList") != m.end() && !m["ipWhiteList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ipWhiteList"].type()) {
        GetProjectResponseBodyDataIpWhiteList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ipWhiteList"]));
        ipWhiteList = make_shared<GetProjectResponseBodyDataIpWhiteList>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["productType"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["properties"].type()) {
        GetProjectResponseBodyDataProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["properties"]));
        properties = make_shared<GetProjectResponseBodyDataProperties>(model1);
      }
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        GetProjectResponseBodyDataSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<GetProjectResponseBodyDataSaleTag>(model1);
      }
    }
    if (m.find("securityProperties") != m.end() && !m["securityProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["securityProperties"].type()) {
        GetProjectResponseBodyDataSecurityProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["securityProperties"]));
        securityProperties = make_shared<GetProjectResponseBodyDataSecurityProperties>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetProjectResponseBodyData() = default;
};
class GetProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProjectResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  GetProjectResponseBody() {}

  explicit GetProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetProjectResponseBodyData>(model1);
      }
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetProjectResponseBody() = default;
};
class GetProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectResponseBody> body{};

  GetProjectResponse() {}

  explicit GetProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectResponse() = default;
};
class GetQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProven{};
  shared_ptr<bool> mock{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  GetQuotaRequest() {}

  explicit GetQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProven) {
      res["AkProven"] = boost::any(*akProven);
    }
    if (mock) {
      res["mock"] = boost::any(*mock);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AkProven") != m.end() && !m["AkProven"].empty()) {
      akProven = make_shared<string>(boost::any_cast<string>(m["AkProven"]));
    }
    if (m.find("mock") != m.end() && !m["mock"].empty()) {
      mock = make_shared<bool>(boost::any_cast<bool>(m["mock"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~GetQuotaRequest() = default;
};
class GetQuotaResponseBodyBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  GetQuotaResponseBodyBillingPolicy() {}

  explicit GetQuotaResponseBodyBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~GetQuotaResponseBodyBillingPolicy() = default;
};
class GetQuotaResponseBodyDataBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  GetQuotaResponseBodyDataBillingPolicy() {}

  explicit GetQuotaResponseBodyDataBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~GetQuotaResponseBodyDataBillingPolicy() = default;
};
class GetQuotaResponseBodyDataSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  GetQuotaResponseBodyDataSaleTag() {}

  explicit GetQuotaResponseBodyDataSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetQuotaResponseBodyDataSaleTag() = default;
};
class GetQuotaResponseBodyDataScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  GetQuotaResponseBodyDataScheduleInfo() {}

  explicit GetQuotaResponseBodyDataScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~GetQuotaResponseBodyDataScheduleInfo() = default;
};
class GetQuotaResponseBodyDataSubQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  GetQuotaResponseBodyDataSubQuotaInfoListBillingPolicy() {}

  explicit GetQuotaResponseBodyDataSubQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~GetQuotaResponseBodyDataSubQuotaInfoListBillingPolicy() = default;
};
class GetQuotaResponseBodyDataSubQuotaInfoListSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  GetQuotaResponseBodyDataSubQuotaInfoListSaleTag() {}

  explicit GetQuotaResponseBodyDataSubQuotaInfoListSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetQuotaResponseBodyDataSubQuotaInfoListSaleTag() = default;
};
class GetQuotaResponseBodyDataSubQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  GetQuotaResponseBodyDataSubQuotaInfoListScheduleInfo() {}

  explicit GetQuotaResponseBodyDataSubQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~GetQuotaResponseBodyDataSubQuotaInfoListScheduleInfo() = default;
};
class GetQuotaResponseBodyDataSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<GetQuotaResponseBodyDataSubQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<GetQuotaResponseBodyDataSubQuotaInfoListSaleTag> saleTag{};
  shared_ptr<GetQuotaResponseBodyDataSubQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetQuotaResponseBodyDataSubQuotaInfoList() {}

  explicit GetQuotaResponseBodyDataSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        GetQuotaResponseBodyDataSubQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<GetQuotaResponseBodyDataSubQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        GetQuotaResponseBodyDataSubQuotaInfoListSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<GetQuotaResponseBodyDataSubQuotaInfoListSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        GetQuotaResponseBodyDataSubQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<GetQuotaResponseBodyDataSubQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetQuotaResponseBodyDataSubQuotaInfoList() = default;
};
class GetQuotaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetQuotaResponseBodyDataBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<GetQuotaResponseBodyDataSaleTag> saleTag{};
  shared_ptr<GetQuotaResponseBodyDataScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetQuotaResponseBodyDataSubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetQuotaResponseBodyData() {}

  explicit GetQuotaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        GetQuotaResponseBodyDataBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<GetQuotaResponseBodyDataBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        GetQuotaResponseBodyDataSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<GetQuotaResponseBodyDataSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        GetQuotaResponseBodyDataScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<GetQuotaResponseBodyDataScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<GetQuotaResponseBodyDataSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQuotaResponseBodyDataSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<GetQuotaResponseBodyDataSubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetQuotaResponseBodyData() = default;
};
class GetQuotaResponseBodySaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  GetQuotaResponseBodySaleTag() {}

  explicit GetQuotaResponseBodySaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetQuotaResponseBodySaleTag() = default;
};
class GetQuotaResponseBodyScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  GetQuotaResponseBodyScheduleInfo() {}

  explicit GetQuotaResponseBodyScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~GetQuotaResponseBodyScheduleInfo() = default;
};
class GetQuotaResponseBodySubQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  GetQuotaResponseBodySubQuotaInfoListBillingPolicy() {}

  explicit GetQuotaResponseBodySubQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~GetQuotaResponseBodySubQuotaInfoListBillingPolicy() = default;
};
class GetQuotaResponseBodySubQuotaInfoListSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  GetQuotaResponseBodySubQuotaInfoListSaleTag() {}

  explicit GetQuotaResponseBodySubQuotaInfoListSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetQuotaResponseBodySubQuotaInfoListSaleTag() = default;
};
class GetQuotaResponseBodySubQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  GetQuotaResponseBodySubQuotaInfoListScheduleInfo() {}

  explicit GetQuotaResponseBodySubQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~GetQuotaResponseBodySubQuotaInfoListScheduleInfo() = default;
};
class GetQuotaResponseBodySubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<GetQuotaResponseBodySubQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<GetQuotaResponseBodySubQuotaInfoListSaleTag> saleTag{};
  shared_ptr<GetQuotaResponseBodySubQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetQuotaResponseBodySubQuotaInfoList() {}

  explicit GetQuotaResponseBodySubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        GetQuotaResponseBodySubQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<GetQuotaResponseBodySubQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        GetQuotaResponseBodySubQuotaInfoListSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<GetQuotaResponseBodySubQuotaInfoListSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        GetQuotaResponseBodySubQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<GetQuotaResponseBodySubQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetQuotaResponseBodySubQuotaInfoList() = default;
};
class GetQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetQuotaResponseBodyBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<GetQuotaResponseBodyData> data{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<GetQuotaResponseBodySaleTag> saleTag{};
  shared_ptr<GetQuotaResponseBodyScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetQuotaResponseBodySubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetQuotaResponseBody() {}

  explicit GetQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        GetQuotaResponseBodyBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<GetQuotaResponseBodyBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetQuotaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetQuotaResponseBodyData>(model1);
      }
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        GetQuotaResponseBodySaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<GetQuotaResponseBodySaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        GetQuotaResponseBodyScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<GetQuotaResponseBodyScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<GetQuotaResponseBodySubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQuotaResponseBodySubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<GetQuotaResponseBodySubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetQuotaResponseBody() = default;
};
class GetQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuotaResponseBody> body{};

  GetQuotaResponse() {}

  explicit GetQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuotaResponse() = default;
};
class GetQuotaPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  GetQuotaPlanRequest() {}

  explicit GetQuotaPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~GetQuotaPlanRequest() = default;
};
class GetQuotaPlanResponseBodyDataQuotaBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  GetQuotaPlanResponseBodyDataQuotaBillingPolicy() {}

  explicit GetQuotaPlanResponseBodyDataQuotaBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~GetQuotaPlanResponseBodyDataQuotaBillingPolicy() = default;
};
class GetQuotaPlanResponseBodyDataQuotaScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};

  GetQuotaPlanResponseBodyDataQuotaScheduleInfo() {}

  explicit GetQuotaPlanResponseBodyDataQuotaScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
  }


  virtual ~GetQuotaPlanResponseBodyDataQuotaScheduleInfo() = default;
};
class GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListBillingPolicy() {}

  explicit GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListBillingPolicy() = default;
};
class GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};

  GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListScheduleInfo() {}

  explicit GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
  }


  virtual ~GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListScheduleInfo() = default;
};
class GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList() {}

  explicit GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList() = default;
};
class GetQuotaPlanResponseBodyDataQuota : public Darabonba::Model {
public:
  shared_ptr<GetQuotaPlanResponseBodyDataQuotaBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<GetQuotaPlanResponseBodyDataQuotaScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetQuotaPlanResponseBodyDataQuota() {}

  explicit GetQuotaPlanResponseBodyDataQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        GetQuotaPlanResponseBodyDataQuotaBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<GetQuotaPlanResponseBodyDataQuotaBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        GetQuotaPlanResponseBodyDataQuotaScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<GetQuotaPlanResponseBodyDataQuotaScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<GetQuotaPlanResponseBodyDataQuotaSubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetQuotaPlanResponseBodyDataQuota() = default;
};
class GetQuotaPlanResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> name{};
  shared_ptr<GetQuotaPlanResponseBodyDataQuota> quota{};

  GetQuotaPlanResponseBodyData() {}

  explicit GetQuotaPlanResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        GetQuotaPlanResponseBodyDataQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<GetQuotaPlanResponseBodyDataQuota>(model1);
      }
    }
  }


  virtual ~GetQuotaPlanResponseBodyData() = default;
};
class GetQuotaPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetQuotaPlanResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetQuotaPlanResponseBody() {}

  explicit GetQuotaPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetQuotaPlanResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetQuotaPlanResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetQuotaPlanResponseBody() = default;
};
class GetQuotaPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuotaPlanResponseBody> body{};

  GetQuotaPlanResponse() {}

  explicit GetQuotaPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetQuotaPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuotaPlanResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuotaPlanResponse() = default;
};
class GetQuotaScheduleRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayTimezone{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  GetQuotaScheduleRequest() {}

  explicit GetQuotaScheduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayTimezone) {
      res["displayTimezone"] = boost::any(*displayTimezone);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayTimezone") != m.end() && !m["displayTimezone"].empty()) {
      displayTimezone = make_shared<string>(boost::any_cast<string>(m["displayTimezone"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~GetQuotaScheduleRequest() = default;
};
class GetQuotaScheduleResponseBodyDataCondition : public Darabonba::Model {
public:
  shared_ptr<string> after{};
  shared_ptr<string> at{};

  GetQuotaScheduleResponseBodyDataCondition() {}

  explicit GetQuotaScheduleResponseBodyDataCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (after) {
      res["after"] = boost::any(*after);
    }
    if (at) {
      res["at"] = boost::any(*at);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("after") != m.end() && !m["after"].empty()) {
      after = make_shared<string>(boost::any_cast<string>(m["after"]));
    }
    if (m.find("at") != m.end() && !m["at"].empty()) {
      at = make_shared<string>(boost::any_cast<string>(m["at"]));
    }
  }


  virtual ~GetQuotaScheduleResponseBodyDataCondition() = default;
};
class GetQuotaScheduleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetQuotaScheduleResponseBodyDataCondition> condition{};
  shared_ptr<string> id{};
  shared_ptr<string> operator_{};
  shared_ptr<string> plan{};
  shared_ptr<string> timezone{};
  shared_ptr<string> type{};

  GetQuotaScheduleResponseBodyData() {}

  explicit GetQuotaScheduleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["condition"] = condition ? boost::any(condition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (plan) {
      res["plan"] = boost::any(*plan);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("condition") != m.end() && !m["condition"].empty()) {
      if (typeid(map<string, boost::any>) == m["condition"].type()) {
        GetQuotaScheduleResponseBodyDataCondition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["condition"]));
        condition = make_shared<GetQuotaScheduleResponseBodyDataCondition>(model1);
      }
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("plan") != m.end() && !m["plan"].empty()) {
      plan = make_shared<string>(boost::any_cast<string>(m["plan"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetQuotaScheduleResponseBodyData() = default;
};
class GetQuotaScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetQuotaScheduleResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  GetQuotaScheduleResponseBody() {}

  explicit GetQuotaScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetQuotaScheduleResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQuotaScheduleResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetQuotaScheduleResponseBodyData>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetQuotaScheduleResponseBody() = default;
};
class GetQuotaScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuotaScheduleResponseBody> body{};

  GetQuotaScheduleResponse() {}

  explicit GetQuotaScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetQuotaScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuotaScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuotaScheduleResponse() = default;
};
class GetRoleAclResponseBodyDataFunction : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  GetRoleAclResponseBodyDataFunction() {}

  explicit GetRoleAclResponseBodyDataFunction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetRoleAclResponseBodyDataFunction() = default;
};
class GetRoleAclResponseBodyDataInstance : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  GetRoleAclResponseBodyDataInstance() {}

  explicit GetRoleAclResponseBodyDataInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetRoleAclResponseBodyDataInstance() = default;
};
class GetRoleAclResponseBodyDataPackage : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  GetRoleAclResponseBodyDataPackage() {}

  explicit GetRoleAclResponseBodyDataPackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetRoleAclResponseBodyDataPackage() = default;
};
class GetRoleAclResponseBodyDataProject : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  GetRoleAclResponseBodyDataProject() {}

  explicit GetRoleAclResponseBodyDataProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetRoleAclResponseBodyDataProject() = default;
};
class GetRoleAclResponseBodyDataResource : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  GetRoleAclResponseBodyDataResource() {}

  explicit GetRoleAclResponseBodyDataResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetRoleAclResponseBodyDataResource() = default;
};
class GetRoleAclResponseBodyDataTable : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  GetRoleAclResponseBodyDataTable() {}

  explicit GetRoleAclResponseBodyDataTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetRoleAclResponseBodyDataTable() = default;
};
class GetRoleAclResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetRoleAclResponseBodyDataFunction>> function{};
  shared_ptr<vector<GetRoleAclResponseBodyDataInstance>> instance{};
  shared_ptr<vector<GetRoleAclResponseBodyDataPackage>> package{};
  shared_ptr<vector<GetRoleAclResponseBodyDataProject>> project{};
  shared_ptr<vector<GetRoleAclResponseBodyDataResource>> resource{};
  shared_ptr<vector<GetRoleAclResponseBodyDataTable>> table{};

  GetRoleAclResponseBodyData() {}

  explicit GetRoleAclResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (function) {
      vector<boost::any> temp1;
      for(auto item1:*function){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["function"] = boost::any(temp1);
    }
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["instance"] = boost::any(temp1);
    }
    if (package) {
      vector<boost::any> temp1;
      for(auto item1:*package){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["package"] = boost::any(temp1);
    }
    if (project) {
      vector<boost::any> temp1;
      for(auto item1:*project){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["project"] = boost::any(temp1);
    }
    if (resource) {
      vector<boost::any> temp1;
      for(auto item1:*resource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resource"] = boost::any(temp1);
    }
    if (table) {
      vector<boost::any> temp1;
      for(auto item1:*table){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["table"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("function") != m.end() && !m["function"].empty()) {
      if (typeid(vector<boost::any>) == m["function"].type()) {
        vector<GetRoleAclResponseBodyDataFunction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["function"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoleAclResponseBodyDataFunction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        function = make_shared<vector<GetRoleAclResponseBodyDataFunction>>(expect1);
      }
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      if (typeid(vector<boost::any>) == m["instance"].type()) {
        vector<GetRoleAclResponseBodyDataInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoleAclResponseBodyDataInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<GetRoleAclResponseBodyDataInstance>>(expect1);
      }
    }
    if (m.find("package") != m.end() && !m["package"].empty()) {
      if (typeid(vector<boost::any>) == m["package"].type()) {
        vector<GetRoleAclResponseBodyDataPackage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["package"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoleAclResponseBodyDataPackage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        package = make_shared<vector<GetRoleAclResponseBodyDataPackage>>(expect1);
      }
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      if (typeid(vector<boost::any>) == m["project"].type()) {
        vector<GetRoleAclResponseBodyDataProject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["project"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoleAclResponseBodyDataProject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        project = make_shared<vector<GetRoleAclResponseBodyDataProject>>(expect1);
      }
    }
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      if (typeid(vector<boost::any>) == m["resource"].type()) {
        vector<GetRoleAclResponseBodyDataResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoleAclResponseBodyDataResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resource = make_shared<vector<GetRoleAclResponseBodyDataResource>>(expect1);
      }
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      if (typeid(vector<boost::any>) == m["table"].type()) {
        vector<GetRoleAclResponseBodyDataTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["table"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoleAclResponseBodyDataTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        table = make_shared<vector<GetRoleAclResponseBodyDataTable>>(expect1);
      }
    }
  }


  virtual ~GetRoleAclResponseBodyData() = default;
};
class GetRoleAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetRoleAclResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetRoleAclResponseBody() {}

  explicit GetRoleAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetRoleAclResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetRoleAclResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetRoleAclResponseBody() = default;
};
class GetRoleAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRoleAclResponseBody> body{};

  GetRoleAclResponse() {}

  explicit GetRoleAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRoleAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRoleAclResponseBody>(model1);
      }
    }
  }


  virtual ~GetRoleAclResponse() = default;
};
class GetRoleAclOnObjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> objectName{};
  shared_ptr<string> objectType{};

  GetRoleAclOnObjectRequest() {}

  explicit GetRoleAclOnObjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectName) {
      res["objectName"] = boost::any(*objectName);
    }
    if (objectType) {
      res["objectType"] = boost::any(*objectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("objectName") != m.end() && !m["objectName"].empty()) {
      objectName = make_shared<string>(boost::any_cast<string>(m["objectName"]));
    }
    if (m.find("objectType") != m.end() && !m["objectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["objectType"]));
    }
  }


  virtual ~GetRoleAclOnObjectRequest() = default;
};
class GetRoleAclOnObjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  GetRoleAclOnObjectResponseBodyData() {}

  explicit GetRoleAclOnObjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetRoleAclOnObjectResponseBodyData() = default;
};
class GetRoleAclOnObjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetRoleAclOnObjectResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetRoleAclOnObjectResponseBody() {}

  explicit GetRoleAclOnObjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetRoleAclOnObjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetRoleAclOnObjectResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetRoleAclOnObjectResponseBody() = default;
};
class GetRoleAclOnObjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRoleAclOnObjectResponseBody> body{};

  GetRoleAclOnObjectResponse() {}

  explicit GetRoleAclOnObjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRoleAclOnObjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRoleAclOnObjectResponseBody>(model1);
      }
    }
  }


  virtual ~GetRoleAclOnObjectResponse() = default;
};
class GetRolePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetRolePolicyResponseBody() {}

  explicit GetRolePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetRolePolicyResponseBody() = default;
};
class GetRolePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRolePolicyResponseBody> body{};

  GetRolePolicyResponse() {}

  explicit GetRolePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRolePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRolePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetRolePolicyResponse() = default;
};
class GetRunningJobsRequest : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<vector<string>> jobOwnerList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> quotaNicknameList{};
  shared_ptr<long> to{};

  GetRunningJobsRequest() {}

  explicit GetRunningJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (jobOwnerList) {
      res["jobOwnerList"] = boost::any(*jobOwnerList);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (quotaNicknameList) {
      res["quotaNicknameList"] = boost::any(*quotaNicknameList);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("jobOwnerList") != m.end() && !m["jobOwnerList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["jobOwnerList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["jobOwnerList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      jobOwnerList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("quotaNicknameList") != m.end() && !m["quotaNicknameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["quotaNicknameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["quotaNicknameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      quotaNicknameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
  }


  virtual ~GetRunningJobsRequest() = default;
};
class GetRunningJobsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<string> jobOwnerListShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> quotaNicknameListShrink{};
  shared_ptr<long> to{};

  GetRunningJobsShrinkRequest() {}

  explicit GetRunningJobsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (jobOwnerListShrink) {
      res["jobOwnerList"] = boost::any(*jobOwnerListShrink);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (quotaNicknameListShrink) {
      res["quotaNicknameList"] = boost::any(*quotaNicknameListShrink);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("jobOwnerList") != m.end() && !m["jobOwnerList"].empty()) {
      jobOwnerListShrink = make_shared<string>(boost::any_cast<string>(m["jobOwnerList"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("quotaNicknameList") != m.end() && !m["quotaNicknameList"].empty()) {
      quotaNicknameListShrink = make_shared<string>(boost::any_cast<string>(m["quotaNicknameList"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
  }


  virtual ~GetRunningJobsShrinkRequest() = default;
};
class GetRunningJobsResponseBodyDataRunningJobInfoList : public Darabonba::Model {
public:
  shared_ptr<double> cuSnapshot{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jobOwner{};
  shared_ptr<double> memorySnapshot{};
  shared_ptr<double> progress{};
  shared_ptr<string> project{};
  shared_ptr<string> quotaNickname{};
  shared_ptr<long> runningAtTime{};
  shared_ptr<long> submittedAtTime{};

  GetRunningJobsResponseBodyDataRunningJobInfoList() {}

  explicit GetRunningJobsResponseBodyDataRunningJobInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cuSnapshot) {
      res["cuSnapshot"] = boost::any(*cuSnapshot);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (jobOwner) {
      res["jobOwner"] = boost::any(*jobOwner);
    }
    if (memorySnapshot) {
      res["memorySnapshot"] = boost::any(*memorySnapshot);
    }
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (quotaNickname) {
      res["quotaNickname"] = boost::any(*quotaNickname);
    }
    if (runningAtTime) {
      res["runningAtTime"] = boost::any(*runningAtTime);
    }
    if (submittedAtTime) {
      res["submittedAtTime"] = boost::any(*submittedAtTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cuSnapshot") != m.end() && !m["cuSnapshot"].empty()) {
      cuSnapshot = make_shared<double>(boost::any_cast<double>(m["cuSnapshot"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("jobOwner") != m.end() && !m["jobOwner"].empty()) {
      jobOwner = make_shared<string>(boost::any_cast<string>(m["jobOwner"]));
    }
    if (m.find("memorySnapshot") != m.end() && !m["memorySnapshot"].empty()) {
      memorySnapshot = make_shared<double>(boost::any_cast<double>(m["memorySnapshot"]));
    }
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<double>(boost::any_cast<double>(m["progress"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("quotaNickname") != m.end() && !m["quotaNickname"].empty()) {
      quotaNickname = make_shared<string>(boost::any_cast<string>(m["quotaNickname"]));
    }
    if (m.find("runningAtTime") != m.end() && !m["runningAtTime"].empty()) {
      runningAtTime = make_shared<long>(boost::any_cast<long>(m["runningAtTime"]));
    }
    if (m.find("submittedAtTime") != m.end() && !m["submittedAtTime"].empty()) {
      submittedAtTime = make_shared<long>(boost::any_cast<long>(m["submittedAtTime"]));
    }
  }


  virtual ~GetRunningJobsResponseBodyDataRunningJobInfoList() = default;
};
class GetRunningJobsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<GetRunningJobsResponseBodyDataRunningJobInfoList>> runningJobInfoList{};
  shared_ptr<long> totalCount{};

  GetRunningJobsResponseBodyData() {}

  explicit GetRunningJobsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (runningJobInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*runningJobInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["runningJobInfoList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("runningJobInfoList") != m.end() && !m["runningJobInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["runningJobInfoList"].type()) {
        vector<GetRunningJobsResponseBodyDataRunningJobInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["runningJobInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRunningJobsResponseBodyDataRunningJobInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        runningJobInfoList = make_shared<vector<GetRunningJobsResponseBodyDataRunningJobInfoList>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~GetRunningJobsResponseBodyData() = default;
};
class GetRunningJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetRunningJobsResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  GetRunningJobsResponseBody() {}

  explicit GetRunningJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetRunningJobsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetRunningJobsResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetRunningJobsResponseBody() = default;
};
class GetRunningJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRunningJobsResponseBody> body{};

  GetRunningJobsResponse() {}

  explicit GetRunningJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRunningJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRunningJobsResponseBody>(model1);
      }
    }
  }


  virtual ~GetRunningJobsResponse() = default;
};
class GetTrustedProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> data{};
  shared_ptr<string> requestId{};

  GetTrustedProjectsResponseBody() {}

  explicit GetTrustedProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetTrustedProjectsResponseBody() = default;
};
class GetTrustedProjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTrustedProjectsResponseBody> body{};

  GetTrustedProjectsResponse() {}

  explicit GetTrustedProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTrustedProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTrustedProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~GetTrustedProjectsResponse() = default;
};
class KillJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  KillJobsRequest() {}

  explicit KillJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~KillJobsRequest() = default;
};
class KillJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};

  KillJobsResponseBody() {}

  explicit KillJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~KillJobsResponseBody() = default;
};
class KillJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<KillJobsResponseBody> body{};

  KillJobsResponse() {}

  explicit KillJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        KillJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<KillJobsResponseBody>(model1);
      }
    }
  }


  virtual ~KillJobsResponse() = default;
};
class ListFunctionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<string> prefix{};
  shared_ptr<string> schemaName{};

  ListFunctionsRequest() {}

  explicit ListFunctionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
  }


  virtual ~ListFunctionsRequest() = default;
};
class ListFunctionsResponseBodyDataFunctions : public Darabonba::Model {
public:
  shared_ptr<string> class_{};
  shared_ptr<long> creationTime{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> resources{};
  shared_ptr<string> schema{};

  ListFunctionsResponseBodyDataFunctions() {}

  explicit ListFunctionsResponseBodyDataFunctions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["class"] = boost::any(*class_);
    }
    if (creationTime) {
      res["creationTime"] = boost::any(*creationTime);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (resources) {
      res["resources"] = boost::any(*resources);
    }
    if (schema) {
      res["schema"] = boost::any(*schema);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("class") != m.end() && !m["class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["class"]));
    }
    if (m.find("creationTime") != m.end() && !m["creationTime"].empty()) {
      creationTime = make_shared<long>(boost::any_cast<long>(m["creationTime"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("resources") != m.end() && !m["resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["resources"]));
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["schema"]));
    }
  }


  virtual ~ListFunctionsResponseBodyDataFunctions() = default;
};
class ListFunctionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListFunctionsResponseBodyDataFunctions>> functions{};
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};

  ListFunctionsResponseBodyData() {}

  explicit ListFunctionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functions) {
      vector<boost::any> temp1;
      for(auto item1:*functions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["functions"] = boost::any(temp1);
    }
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("functions") != m.end() && !m["functions"].empty()) {
      if (typeid(vector<boost::any>) == m["functions"].type()) {
        vector<ListFunctionsResponseBodyDataFunctions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["functions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFunctionsResponseBodyDataFunctions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        functions = make_shared<vector<ListFunctionsResponseBodyDataFunctions>>(expect1);
      }
    }
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
  }


  virtual ~ListFunctionsResponseBodyData() = default;
};
class ListFunctionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListFunctionsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListFunctionsResponseBody() {}

  explicit ListFunctionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListFunctionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListFunctionsResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListFunctionsResponseBody() = default;
};
class ListFunctionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFunctionsResponseBody> body{};

  ListFunctionsResponse() {}

  explicit ListFunctionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFunctionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFunctionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFunctionsResponse() = default;
};
class ListPackagesResponseBodyDataCreatedPackages : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> name{};

  ListPackagesResponseBodyDataCreatedPackages() {}

  explicit ListPackagesResponseBodyDataCreatedPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListPackagesResponseBodyDataCreatedPackages() = default;
};
class ListPackagesResponseBodyDataInstalledPackages : public Darabonba::Model {
public:
  shared_ptr<long> installTime{};
  shared_ptr<string> name{};
  shared_ptr<string> sourceProject{};
  shared_ptr<string> status{};

  ListPackagesResponseBodyDataInstalledPackages() {}

  explicit ListPackagesResponseBodyDataInstalledPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (installTime) {
      res["installTime"] = boost::any(*installTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (sourceProject) {
      res["sourceProject"] = boost::any(*sourceProject);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("installTime") != m.end() && !m["installTime"].empty()) {
      installTime = make_shared<long>(boost::any_cast<long>(m["installTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("sourceProject") != m.end() && !m["sourceProject"].empty()) {
      sourceProject = make_shared<string>(boost::any_cast<string>(m["sourceProject"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListPackagesResponseBodyDataInstalledPackages() = default;
};
class ListPackagesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListPackagesResponseBodyDataCreatedPackages>> createdPackages{};
  shared_ptr<vector<ListPackagesResponseBodyDataInstalledPackages>> installedPackages{};

  ListPackagesResponseBodyData() {}

  explicit ListPackagesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdPackages) {
      vector<boost::any> temp1;
      for(auto item1:*createdPackages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["createdPackages"] = boost::any(temp1);
    }
    if (installedPackages) {
      vector<boost::any> temp1;
      for(auto item1:*installedPackages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["installedPackages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdPackages") != m.end() && !m["createdPackages"].empty()) {
      if (typeid(vector<boost::any>) == m["createdPackages"].type()) {
        vector<ListPackagesResponseBodyDataCreatedPackages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["createdPackages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPackagesResponseBodyDataCreatedPackages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        createdPackages = make_shared<vector<ListPackagesResponseBodyDataCreatedPackages>>(expect1);
      }
    }
    if (m.find("installedPackages") != m.end() && !m["installedPackages"].empty()) {
      if (typeid(vector<boost::any>) == m["installedPackages"].type()) {
        vector<ListPackagesResponseBodyDataInstalledPackages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["installedPackages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPackagesResponseBodyDataInstalledPackages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        installedPackages = make_shared<vector<ListPackagesResponseBodyDataInstalledPackages>>(expect1);
      }
    }
  }


  virtual ~ListPackagesResponseBodyData() = default;
};
class ListPackagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListPackagesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListPackagesResponseBody() {}

  explicit ListPackagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListPackagesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListPackagesResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListPackagesResponseBody() = default;
};
class ListPackagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPackagesResponseBody> body{};

  ListPackagesResponse() {}

  explicit ListPackagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPackagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPackagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPackagesResponse() = default;
};
class ListProjectUsersResponseBodyDataUsers : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  ListProjectUsersResponseBodyDataUsers() {}

  explicit ListProjectUsersResponseBodyDataUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListProjectUsersResponseBodyDataUsers() = default;
};
class ListProjectUsersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListProjectUsersResponseBodyDataUsers>> users{};

  ListProjectUsersResponseBodyData() {}

  explicit ListProjectUsersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("users") != m.end() && !m["users"].empty()) {
      if (typeid(vector<boost::any>) == m["users"].type()) {
        vector<ListProjectUsersResponseBodyDataUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectUsersResponseBodyDataUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListProjectUsersResponseBodyDataUsers>>(expect1);
      }
    }
  }


  virtual ~ListProjectUsersResponseBodyData() = default;
};
class ListProjectUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListProjectUsersResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListProjectUsersResponseBody() {}

  explicit ListProjectUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListProjectUsersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListProjectUsersResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListProjectUsersResponseBody() = default;
};
class ListProjectUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectUsersResponseBody> body{};

  ListProjectUsersResponse() {}

  explicit ListProjectUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectUsersResponse() = default;
};
class ListProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> listSystemCatalog{};
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<string> prefix{};
  shared_ptr<string> quotaName{};
  shared_ptr<string> quotaNickName{};
  shared_ptr<string> region{};
  shared_ptr<string> saleTags{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};

  ListProjectsRequest() {}

  explicit ListProjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listSystemCatalog) {
      res["listSystemCatalog"] = boost::any(*listSystemCatalog);
    }
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (quotaName) {
      res["quotaName"] = boost::any(*quotaName);
    }
    if (quotaNickName) {
      res["quotaNickName"] = boost::any(*quotaNickName);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (saleTags) {
      res["saleTags"] = boost::any(*saleTags);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("listSystemCatalog") != m.end() && !m["listSystemCatalog"].empty()) {
      listSystemCatalog = make_shared<bool>(boost::any_cast<bool>(m["listSystemCatalog"]));
    }
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("quotaName") != m.end() && !m["quotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["quotaName"]));
    }
    if (m.find("quotaNickName") != m.end() && !m["quotaNickName"].empty()) {
      quotaNickName = make_shared<string>(boost::any_cast<string>(m["quotaNickName"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("saleTags") != m.end() && !m["saleTags"].empty()) {
      saleTags = make_shared<string>(boost::any_cast<string>(m["saleTags"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListProjectsRequest() = default;
};
class ListProjectsResponseBodyDataProjectsTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListProjectsResponseBodyDataProjectsTags() {}

  explicit ListProjectsResponseBodyDataProjectsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsTags() = default;
};
class ListProjectsResponseBodyDataProjectsIpWhiteList : public Darabonba::Model {
public:
  shared_ptr<string> ipList{};
  shared_ptr<string> vpcIpList{};

  ListProjectsResponseBodyDataProjectsIpWhiteList() {}

  explicit ListProjectsResponseBodyDataProjectsIpWhiteList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipList) {
      res["ipList"] = boost::any(*ipList);
    }
    if (vpcIpList) {
      res["vpcIpList"] = boost::any(*vpcIpList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ipList") != m.end() && !m["ipList"].empty()) {
      ipList = make_shared<string>(boost::any_cast<string>(m["ipList"]));
    }
    if (m.find("vpcIpList") != m.end() && !m["vpcIpList"].empty()) {
      vpcIpList = make_shared<string>(boost::any_cast<string>(m["vpcIpList"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsIpWhiteList() = default;
};
class ListProjectsResponseBodyDataProjectsPropertiesEncryption : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<bool> enable{};
  shared_ptr<string> key{};

  ListProjectsResponseBodyDataProjectsPropertiesEncryption() {}

  explicit ListProjectsResponseBodyDataProjectsPropertiesEncryption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["algorithm"] = boost::any(*algorithm);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithm") != m.end() && !m["algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["algorithm"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsPropertiesEncryption() = default;
};
class ListProjectsResponseBodyDataProjectsPropertiesTableLifecycle : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  ListProjectsResponseBodyDataProjectsPropertiesTableLifecycle() {}

  explicit ListProjectsResponseBodyDataProjectsPropertiesTableLifecycle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsPropertiesTableLifecycle() = default;
};
class ListProjectsResponseBodyDataProjectsProperties : public Darabonba::Model {
public:
  shared_ptr<bool> allowFullScan{};
  shared_ptr<bool> enableDecimal2{};
  shared_ptr<bool> enableTunnelQuotaRoute{};
  shared_ptr<ListProjectsResponseBodyDataProjectsPropertiesEncryption> encryption{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> sqlMeteringMax{};
  shared_ptr<ListProjectsResponseBodyDataProjectsPropertiesTableLifecycle> tableLifecycle{};
  shared_ptr<string> timezone{};
  shared_ptr<string> tunnelQuota{};
  shared_ptr<string> typeSystem{};

  ListProjectsResponseBodyDataProjectsProperties() {}

  explicit ListProjectsResponseBodyDataProjectsProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowFullScan) {
      res["allowFullScan"] = boost::any(*allowFullScan);
    }
    if (enableDecimal2) {
      res["enableDecimal2"] = boost::any(*enableDecimal2);
    }
    if (enableTunnelQuotaRoute) {
      res["enableTunnelQuotaRoute"] = boost::any(*enableTunnelQuotaRoute);
    }
    if (encryption) {
      res["encryption"] = encryption ? boost::any(encryption->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (retentionDays) {
      res["retentionDays"] = boost::any(*retentionDays);
    }
    if (sqlMeteringMax) {
      res["sqlMeteringMax"] = boost::any(*sqlMeteringMax);
    }
    if (tableLifecycle) {
      res["tableLifecycle"] = tableLifecycle ? boost::any(tableLifecycle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    if (tunnelQuota) {
      res["tunnelQuota"] = boost::any(*tunnelQuota);
    }
    if (typeSystem) {
      res["typeSystem"] = boost::any(*typeSystem);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowFullScan") != m.end() && !m["allowFullScan"].empty()) {
      allowFullScan = make_shared<bool>(boost::any_cast<bool>(m["allowFullScan"]));
    }
    if (m.find("enableDecimal2") != m.end() && !m["enableDecimal2"].empty()) {
      enableDecimal2 = make_shared<bool>(boost::any_cast<bool>(m["enableDecimal2"]));
    }
    if (m.find("enableTunnelQuotaRoute") != m.end() && !m["enableTunnelQuotaRoute"].empty()) {
      enableTunnelQuotaRoute = make_shared<bool>(boost::any_cast<bool>(m["enableTunnelQuotaRoute"]));
    }
    if (m.find("encryption") != m.end() && !m["encryption"].empty()) {
      if (typeid(map<string, boost::any>) == m["encryption"].type()) {
        ListProjectsResponseBodyDataProjectsPropertiesEncryption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["encryption"]));
        encryption = make_shared<ListProjectsResponseBodyDataProjectsPropertiesEncryption>(model1);
      }
    }
    if (m.find("retentionDays") != m.end() && !m["retentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["retentionDays"]));
    }
    if (m.find("sqlMeteringMax") != m.end() && !m["sqlMeteringMax"].empty()) {
      sqlMeteringMax = make_shared<string>(boost::any_cast<string>(m["sqlMeteringMax"]));
    }
    if (m.find("tableLifecycle") != m.end() && !m["tableLifecycle"].empty()) {
      if (typeid(map<string, boost::any>) == m["tableLifecycle"].type()) {
        ListProjectsResponseBodyDataProjectsPropertiesTableLifecycle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tableLifecycle"]));
        tableLifecycle = make_shared<ListProjectsResponseBodyDataProjectsPropertiesTableLifecycle>(model1);
      }
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
    if (m.find("tunnelQuota") != m.end() && !m["tunnelQuota"].empty()) {
      tunnelQuota = make_shared<string>(boost::any_cast<string>(m["tunnelQuota"]));
    }
    if (m.find("typeSystem") != m.end() && !m["typeSystem"].empty()) {
      typeSystem = make_shared<string>(boost::any_cast<string>(m["typeSystem"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsProperties() = default;
};
class ListProjectsResponseBodyDataProjectsSaleTag : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ListProjectsResponseBodyDataProjectsSaleTag() {}

  explicit ListProjectsResponseBodyDataProjectsSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsSaleTag() = default;
};
class ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection : public Darabonba::Model {
public:
  shared_ptr<string> exceptionPolicy{};
  shared_ptr<bool> protected_{};

  ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection() {}

  explicit ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exceptionPolicy) {
      res["exceptionPolicy"] = boost::any(*exceptionPolicy);
    }
    if (protected_) {
      res["protected"] = boost::any(*protected_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("exceptionPolicy") != m.end() && !m["exceptionPolicy"].empty()) {
      exceptionPolicy = make_shared<string>(boost::any_cast<string>(m["exceptionPolicy"]));
    }
    if (m.find("protected") != m.end() && !m["protected"].empty()) {
      protected_ = make_shared<bool>(boost::any_cast<bool>(m["protected"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection() = default;
};
class ListProjectsResponseBodyDataProjectsSecurityProperties : public Darabonba::Model {
public:
  shared_ptr<bool> enableDownloadPrivilege{};
  shared_ptr<bool> labelSecurity{};
  shared_ptr<bool> objectCreatorHasAccessPermission{};
  shared_ptr<bool> objectCreatorHasGrantPermission{};
  shared_ptr<ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection> projectProtection{};
  shared_ptr<bool> usingAcl{};
  shared_ptr<bool> usingPolicy{};

  ListProjectsResponseBodyDataProjectsSecurityProperties() {}

  explicit ListProjectsResponseBodyDataProjectsSecurityProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableDownloadPrivilege) {
      res["enableDownloadPrivilege"] = boost::any(*enableDownloadPrivilege);
    }
    if (labelSecurity) {
      res["labelSecurity"] = boost::any(*labelSecurity);
    }
    if (objectCreatorHasAccessPermission) {
      res["objectCreatorHasAccessPermission"] = boost::any(*objectCreatorHasAccessPermission);
    }
    if (objectCreatorHasGrantPermission) {
      res["objectCreatorHasGrantPermission"] = boost::any(*objectCreatorHasGrantPermission);
    }
    if (projectProtection) {
      res["projectProtection"] = projectProtection ? boost::any(projectProtection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usingAcl) {
      res["usingAcl"] = boost::any(*usingAcl);
    }
    if (usingPolicy) {
      res["usingPolicy"] = boost::any(*usingPolicy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableDownloadPrivilege") != m.end() && !m["enableDownloadPrivilege"].empty()) {
      enableDownloadPrivilege = make_shared<bool>(boost::any_cast<bool>(m["enableDownloadPrivilege"]));
    }
    if (m.find("labelSecurity") != m.end() && !m["labelSecurity"].empty()) {
      labelSecurity = make_shared<bool>(boost::any_cast<bool>(m["labelSecurity"]));
    }
    if (m.find("objectCreatorHasAccessPermission") != m.end() && !m["objectCreatorHasAccessPermission"].empty()) {
      objectCreatorHasAccessPermission = make_shared<bool>(boost::any_cast<bool>(m["objectCreatorHasAccessPermission"]));
    }
    if (m.find("objectCreatorHasGrantPermission") != m.end() && !m["objectCreatorHasGrantPermission"].empty()) {
      objectCreatorHasGrantPermission = make_shared<bool>(boost::any_cast<bool>(m["objectCreatorHasGrantPermission"]));
    }
    if (m.find("projectProtection") != m.end() && !m["projectProtection"].empty()) {
      if (typeid(map<string, boost::any>) == m["projectProtection"].type()) {
        ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["projectProtection"]));
        projectProtection = make_shared<ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection>(model1);
      }
    }
    if (m.find("usingAcl") != m.end() && !m["usingAcl"].empty()) {
      usingAcl = make_shared<bool>(boost::any_cast<bool>(m["usingAcl"]));
    }
    if (m.find("usingPolicy") != m.end() && !m["usingPolicy"].empty()) {
      usingPolicy = make_shared<bool>(boost::any_cast<bool>(m["usingPolicy"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjectsSecurityProperties() = default;
};
class ListProjectsResponseBodyDataProjects : public Darabonba::Model {
public:
  shared_ptr<vector<ListProjectsResponseBodyDataProjectsTags>> tags{};
  shared_ptr<string> comment{};
  shared_ptr<string> costStorage{};
  shared_ptr<string> defaultQuota{};
  shared_ptr<ListProjectsResponseBodyDataProjectsIpWhiteList> ipWhiteList{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<ListProjectsResponseBodyDataProjectsProperties> properties{};
  shared_ptr<ListProjectsResponseBodyDataProjectsSaleTag> saleTag{};
  shared_ptr<ListProjectsResponseBodyDataProjectsSecurityProperties> securityProperties{};
  shared_ptr<string> status{};
  shared_ptr<bool> threeTierModel{};
  shared_ptr<string> type{};

  ListProjectsResponseBodyDataProjects() {}

  explicit ListProjectsResponseBodyDataProjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (costStorage) {
      res["costStorage"] = boost::any(*costStorage);
    }
    if (defaultQuota) {
      res["defaultQuota"] = boost::any(*defaultQuota);
    }
    if (ipWhiteList) {
      res["ipWhiteList"] = ipWhiteList ? boost::any(ipWhiteList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (properties) {
      res["properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityProperties) {
      res["securityProperties"] = securityProperties ? boost::any(securityProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (threeTierModel) {
      res["threeTierModel"] = boost::any(*threeTierModel);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListProjectsResponseBodyDataProjectsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectsResponseBodyDataProjectsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListProjectsResponseBodyDataProjectsTags>>(expect1);
      }
    }
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("costStorage") != m.end() && !m["costStorage"].empty()) {
      costStorage = make_shared<string>(boost::any_cast<string>(m["costStorage"]));
    }
    if (m.find("defaultQuota") != m.end() && !m["defaultQuota"].empty()) {
      defaultQuota = make_shared<string>(boost::any_cast<string>(m["defaultQuota"]));
    }
    if (m.find("ipWhiteList") != m.end() && !m["ipWhiteList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ipWhiteList"].type()) {
        ListProjectsResponseBodyDataProjectsIpWhiteList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ipWhiteList"]));
        ipWhiteList = make_shared<ListProjectsResponseBodyDataProjectsIpWhiteList>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["properties"].type()) {
        ListProjectsResponseBodyDataProjectsProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["properties"]));
        properties = make_shared<ListProjectsResponseBodyDataProjectsProperties>(model1);
      }
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        ListProjectsResponseBodyDataProjectsSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<ListProjectsResponseBodyDataProjectsSaleTag>(model1);
      }
    }
    if (m.find("securityProperties") != m.end() && !m["securityProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["securityProperties"].type()) {
        ListProjectsResponseBodyDataProjectsSecurityProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["securityProperties"]));
        securityProperties = make_shared<ListProjectsResponseBodyDataProjectsSecurityProperties>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("threeTierModel") != m.end() && !m["threeTierModel"].empty()) {
      threeTierModel = make_shared<bool>(boost::any_cast<bool>(m["threeTierModel"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataProjects() = default;
};
class ListProjectsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<vector<ListProjectsResponseBodyDataProjects>> projects{};

  ListProjectsResponseBodyData() {}

  explicit ListProjectsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (projects) {
      vector<boost::any> temp1;
      for(auto item1:*projects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["projects"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("projects") != m.end() && !m["projects"].empty()) {
      if (typeid(vector<boost::any>) == m["projects"].type()) {
        vector<ListProjectsResponseBodyDataProjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["projects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectsResponseBodyDataProjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projects = make_shared<vector<ListProjectsResponseBodyDataProjects>>(expect1);
      }
    }
  }


  virtual ~ListProjectsResponseBodyData() = default;
};
class ListProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListProjectsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListProjectsResponseBody() {}

  explicit ListProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListProjectsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListProjectsResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListProjectsResponseBody() = default;
};
class ListProjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectsResponseBody> body{};

  ListProjectsResponse() {}

  explicit ListProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectsResponse() = default;
};
class ListQuotasRequest : public Darabonba::Model {
public:
  shared_ptr<string> billingType{};
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<string> productId{};
  shared_ptr<string> region{};
  shared_ptr<string> saleTags{};
  shared_ptr<string> tenantId{};

  ListQuotasRequest() {}

  explicit ListQuotasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingType) {
      res["billingType"] = boost::any(*billingType);
    }
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (saleTags) {
      res["saleTags"] = boost::any(*saleTags);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingType") != m.end() && !m["billingType"].empty()) {
      billingType = make_shared<string>(boost::any_cast<string>(m["billingType"]));
    }
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("saleTags") != m.end() && !m["saleTags"].empty()) {
      saleTags = make_shared<string>(boost::any_cast<string>(m["saleTags"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~ListQuotasRequest() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListQuotasResponseBodyDataQuotaInfoListTags() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListTags() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  ListQuotasResponseBodyDataQuotaInfoListBillingPolicy() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListBillingPolicy() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  ListQuotasResponseBodyDataQuotaInfoListSaleTag() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListSaleTag() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  ListQuotasResponseBodyDataQuotaInfoListScheduleInfo() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListScheduleInfo() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo() = default;
};
class ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag> saleTag{};
  shared_ptr<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList() {}

  explicit ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList() = default;
};
class ListQuotasResponseBodyDataQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<ListQuotasResponseBodyDataQuotaInfoListTags>> tags{};
  shared_ptr<ListQuotasResponseBodyDataQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<ListQuotasResponseBodyDataQuotaInfoListSaleTag> saleTag{};
  shared_ptr<ListQuotasResponseBodyDataQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListQuotasResponseBodyDataQuotaInfoList() {}

  explicit ListQuotasResponseBodyDataQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListQuotasResponseBodyDataQuotaInfoListTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyDataQuotaInfoListTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListQuotasResponseBodyDataQuotaInfoListTags>>(expect1);
      }
    }
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        ListQuotasResponseBodyDataQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<ListQuotasResponseBodyDataQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        ListQuotasResponseBodyDataQuotaInfoListSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<ListQuotasResponseBodyDataQuotaInfoListSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        ListQuotasResponseBodyDataQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<ListQuotasResponseBodyDataQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListQuotasResponseBodyDataQuotaInfoList() = default;
};
class ListQuotasResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<vector<ListQuotasResponseBodyDataQuotaInfoList>> quotaInfoList{};

  ListQuotasResponseBodyData() {}

  explicit ListQuotasResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (quotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*quotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["quotaInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("quotaInfoList") != m.end() && !m["quotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["quotaInfoList"].type()) {
        vector<ListQuotasResponseBodyDataQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["quotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyDataQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotaInfoList = make_shared<vector<ListQuotasResponseBodyDataQuotaInfoList>>(expect1);
      }
    }
  }


  virtual ~ListQuotasResponseBodyData() = default;
};
class ListQuotasResponseBodyQuotaInfoListTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListQuotasResponseBodyQuotaInfoListTags() {}

  explicit ListQuotasResponseBodyQuotaInfoListTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListTags() = default;
};
class ListQuotasResponseBodyQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  ListQuotasResponseBodyQuotaInfoListBillingPolicy() {}

  explicit ListQuotasResponseBodyQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListBillingPolicy() = default;
};
class ListQuotasResponseBodyQuotaInfoListSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  ListQuotasResponseBodyQuotaInfoListSaleTag() {}

  explicit ListQuotasResponseBodyQuotaInfoListSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListSaleTag() = default;
};
class ListQuotasResponseBodyQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  ListQuotasResponseBodyQuotaInfoListScheduleInfo() {}

  explicit ListQuotasResponseBodyQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListScheduleInfo() = default;
};
class ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListBillingPolicy() {}

  explicit ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListBillingPolicy() = default;
};
class ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListSaleTag : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListSaleTag() {}

  explicit ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListSaleTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListSaleTag() = default;
};
class ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> timezone{};

  ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListScheduleInfo() {}

  explicit ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListScheduleInfo() = default;
};
class ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListSaleTag> saleTag{};
  shared_ptr<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList() {}

  explicit ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList() = default;
};
class ListQuotasResponseBodyQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<ListQuotasResponseBodyQuotaInfoListTags>> tags{};
  shared_ptr<ListQuotasResponseBodyQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<ListQuotasResponseBodyQuotaInfoListSaleTag> saleTag{};
  shared_ptr<ListQuotasResponseBodyQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListQuotasResponseBodyQuotaInfoList() {}

  explicit ListQuotasResponseBodyQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (saleTag) {
      res["saleTag"] = saleTag ? boost::any(saleTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListQuotasResponseBodyQuotaInfoListTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyQuotaInfoListTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListQuotasResponseBodyQuotaInfoListTags>>(expect1);
      }
    }
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        ListQuotasResponseBodyQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<ListQuotasResponseBodyQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("saleTag") != m.end() && !m["saleTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["saleTag"].type()) {
        ListQuotasResponseBodyQuotaInfoListSaleTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saleTag"]));
        saleTag = make_shared<ListQuotasResponseBodyQuotaInfoListSaleTag>(model1);
      }
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        ListQuotasResponseBodyQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<ListQuotasResponseBodyQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<ListQuotasResponseBodyQuotaInfoListSubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotaInfoList() = default;
};
class ListQuotasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<ListQuotasResponseBodyData> data{};
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<vector<ListQuotasResponseBodyQuotaInfoList>> quotaInfoList{};
  shared_ptr<string> requestId{};

  ListQuotasResponseBody() {}

  explicit ListQuotasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (quotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*quotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["quotaInfoList"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListQuotasResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListQuotasResponseBodyData>(model1);
      }
    }
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("quotaInfoList") != m.end() && !m["quotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["quotaInfoList"].type()) {
        vector<ListQuotasResponseBodyQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["quotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotaInfoList = make_shared<vector<ListQuotasResponseBodyQuotaInfoList>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListQuotasResponseBody() = default;
};
class ListQuotasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQuotasResponseBody> body{};

  ListQuotasResponse() {}

  explicit ListQuotasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListQuotasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQuotasResponseBody>(model1);
      }
    }
  }


  virtual ~ListQuotasResponse() = default;
};
class ListQuotasPlansRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  ListQuotasPlansRequest() {}

  explicit ListQuotasPlansRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~ListQuotasPlansRequest() = default;
};
class ListQuotasPlansResponseBodyDataPlanListQuotaBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  ListQuotasPlansResponseBodyDataPlanListQuotaBillingPolicy() {}

  explicit ListQuotasPlansResponseBodyDataPlanListQuotaBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~ListQuotasPlansResponseBodyDataPlanListQuotaBillingPolicy() = default;
};
class ListQuotasPlansResponseBodyDataPlanListQuotaScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};

  ListQuotasPlansResponseBodyDataPlanListQuotaScheduleInfo() {}

  explicit ListQuotasPlansResponseBodyDataPlanListQuotaScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
  }


  virtual ~ListQuotasPlansResponseBodyDataPlanListQuotaScheduleInfo() = default;
};
class ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> billingMethod{};
  shared_ptr<string> odpsSpecCode{};
  shared_ptr<string> orderId{};

  ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy() {}

  explicit ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingMethod) {
      res["billingMethod"] = boost::any(*billingMethod);
    }
    if (odpsSpecCode) {
      res["odpsSpecCode"] = boost::any(*odpsSpecCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingMethod") != m.end() && !m["billingMethod"].empty()) {
      billingMethod = make_shared<string>(boost::any_cast<string>(m["billingMethod"]));
    }
    if (m.find("odpsSpecCode") != m.end() && !m["odpsSpecCode"].empty()) {
      odpsSpecCode = make_shared<string>(boost::any_cast<string>(m["odpsSpecCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy() = default;
};
class ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo : public Darabonba::Model {
public:
  shared_ptr<string> currPlan{};
  shared_ptr<string> currTime{};
  shared_ptr<string> nextPlan{};
  shared_ptr<string> nextTime{};
  shared_ptr<string> oncePlan{};
  shared_ptr<string> onceTime{};
  shared_ptr<string> operatorName{};

  ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo() {}

  explicit ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currPlan) {
      res["currPlan"] = boost::any(*currPlan);
    }
    if (currTime) {
      res["currTime"] = boost::any(*currTime);
    }
    if (nextPlan) {
      res["nextPlan"] = boost::any(*nextPlan);
    }
    if (nextTime) {
      res["nextTime"] = boost::any(*nextTime);
    }
    if (oncePlan) {
      res["oncePlan"] = boost::any(*oncePlan);
    }
    if (onceTime) {
      res["onceTime"] = boost::any(*onceTime);
    }
    if (operatorName) {
      res["operatorName"] = boost::any(*operatorName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currPlan") != m.end() && !m["currPlan"].empty()) {
      currPlan = make_shared<string>(boost::any_cast<string>(m["currPlan"]));
    }
    if (m.find("currTime") != m.end() && !m["currTime"].empty()) {
      currTime = make_shared<string>(boost::any_cast<string>(m["currTime"]));
    }
    if (m.find("nextPlan") != m.end() && !m["nextPlan"].empty()) {
      nextPlan = make_shared<string>(boost::any_cast<string>(m["nextPlan"]));
    }
    if (m.find("nextTime") != m.end() && !m["nextTime"].empty()) {
      nextTime = make_shared<string>(boost::any_cast<string>(m["nextTime"]));
    }
    if (m.find("oncePlan") != m.end() && !m["oncePlan"].empty()) {
      oncePlan = make_shared<string>(boost::any_cast<string>(m["oncePlan"]));
    }
    if (m.find("onceTime") != m.end() && !m["onceTime"].empty()) {
      onceTime = make_shared<string>(boost::any_cast<string>(m["onceTime"]));
    }
    if (m.find("operatorName") != m.end() && !m["operatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["operatorName"]));
    }
  }


  virtual ~ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo() = default;
};
class ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList() {}

  explicit ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList() = default;
};
class ListQuotasPlansResponseBodyDataPlanListQuota : public Darabonba::Model {
public:
  shared_ptr<ListQuotasPlansResponseBodyDataPlanListQuotaBillingPolicy> billingPolicy{};
  shared_ptr<string> cluster{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<ListQuotasPlansResponseBodyDataPlanListQuotaScheduleInfo> scheduleInfo{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList>> subQuotaInfoList{};
  shared_ptr<string> tag{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListQuotasPlansResponseBodyDataPlanListQuota() {}

  explicit ListQuotasPlansResponseBodyDataPlanListQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingPolicy) {
      res["billingPolicy"] = billingPolicy ? boost::any(billingPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (scheduleInfo) {
      res["scheduleInfo"] = scheduleInfo ? boost::any(scheduleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subQuotaInfoList"] = boost::any(temp1);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billingPolicy") != m.end() && !m["billingPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["billingPolicy"].type()) {
        ListQuotasPlansResponseBodyDataPlanListQuotaBillingPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["billingPolicy"]));
        billingPolicy = make_shared<ListQuotasPlansResponseBodyDataPlanListQuotaBillingPolicy>(model1);
      }
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["creatorId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("scheduleInfo") != m.end() && !m["scheduleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleInfo"].type()) {
        ListQuotasPlansResponseBodyDataPlanListQuotaScheduleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleInfo"]));
        scheduleInfo = make_shared<ListQuotasPlansResponseBodyDataPlanListQuotaScheduleInfo>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subQuotaInfoList") != m.end() && !m["subQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["subQuotaInfoList"].type()) {
        vector<ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotaInfoList = make_shared<vector<ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoList>>(expect1);
      }
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListQuotasPlansResponseBodyDataPlanListQuota() = default;
};
class ListQuotasPlansResponseBodyDataPlanList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> name{};
  shared_ptr<ListQuotasPlansResponseBodyDataPlanListQuota> quota{};

  ListQuotasPlansResponseBodyDataPlanList() {}

  explicit ListQuotasPlansResponseBodyDataPlanList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        ListQuotasPlansResponseBodyDataPlanListQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<ListQuotasPlansResponseBodyDataPlanListQuota>(model1);
      }
    }
  }


  virtual ~ListQuotasPlansResponseBodyDataPlanList() = default;
};
class ListQuotasPlansResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListQuotasPlansResponseBodyDataPlanList>> planList{};

  ListQuotasPlansResponseBodyData() {}

  explicit ListQuotasPlansResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planList) {
      vector<boost::any> temp1;
      for(auto item1:*planList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["planList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("planList") != m.end() && !m["planList"].empty()) {
      if (typeid(vector<boost::any>) == m["planList"].type()) {
        vector<ListQuotasPlansResponseBodyDataPlanList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["planList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasPlansResponseBodyDataPlanList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        planList = make_shared<vector<ListQuotasPlansResponseBodyDataPlanList>>(expect1);
      }
    }
  }


  virtual ~ListQuotasPlansResponseBodyData() = default;
};
class ListQuotasPlansResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListQuotasPlansResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListQuotasPlansResponseBody() {}

  explicit ListQuotasPlansResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListQuotasPlansResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListQuotasPlansResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListQuotasPlansResponseBody() = default;
};
class ListQuotasPlansResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQuotasPlansResponseBody> body{};

  ListQuotasPlansResponse() {}

  explicit ListQuotasPlansResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListQuotasPlansResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQuotasPlansResponseBody>(model1);
      }
    }
  }


  virtual ~ListQuotasPlansResponse() = default;
};
class ListResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<string> name{};
  shared_ptr<string> schemaName{};

  ListResourcesRequest() {}

  explicit ListResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
  }


  virtual ~ListResourcesRequest() = default;
};
class ListResourcesResponseBodyDataResources : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> contentMD5{};
  shared_ptr<long> creationTime{};
  shared_ptr<string> displayName{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<string> lastUpdator{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> schema{};
  shared_ptr<long> size{};
  shared_ptr<string> type{};

  ListResourcesResponseBodyDataResources() {}

  explicit ListResourcesResponseBodyDataResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (contentMD5) {
      res["contentMD5"] = boost::any(*contentMD5);
    }
    if (creationTime) {
      res["creationTime"] = boost::any(*creationTime);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (lastUpdator) {
      res["lastUpdator"] = boost::any(*lastUpdator);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (schema) {
      res["schema"] = boost::any(*schema);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("contentMD5") != m.end() && !m["contentMD5"].empty()) {
      contentMD5 = make_shared<string>(boost::any_cast<string>(m["contentMD5"]));
    }
    if (m.find("creationTime") != m.end() && !m["creationTime"].empty()) {
      creationTime = make_shared<long>(boost::any_cast<long>(m["creationTime"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["lastModifiedTime"]));
    }
    if (m.find("lastUpdator") != m.end() && !m["lastUpdator"].empty()) {
      lastUpdator = make_shared<string>(boost::any_cast<string>(m["lastUpdator"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["schema"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListResourcesResponseBodyDataResources() = default;
};
class ListResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<vector<ListResourcesResponseBodyDataResources>> resources{};

  ListResourcesResponseBodyData() {}

  explicit ListResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("resources") != m.end() && !m["resources"].empty()) {
      if (typeid(vector<boost::any>) == m["resources"].type()) {
        vector<ListResourcesResponseBodyDataResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyDataResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ListResourcesResponseBodyDataResources>>(expect1);
      }
    }
  }


  virtual ~ListResourcesResponseBodyData() = default;
};
class ListResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListResourcesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListResourcesResponseBody() {}

  explicit ListResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListResourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListResourcesResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListResourcesResponseBody() = default;
};
class ListResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourcesResponseBody> body{};

  ListResourcesResponse() {}

  explicit ListResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcesResponse() = default;
};
class ListRolesResponseBodyDataRolesAclFunction : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  ListRolesResponseBodyDataRolesAclFunction() {}

  explicit ListRolesResponseBodyDataRolesAclFunction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListRolesResponseBodyDataRolesAclFunction() = default;
};
class ListRolesResponseBodyDataRolesAclInstance : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  ListRolesResponseBodyDataRolesAclInstance() {}

  explicit ListRolesResponseBodyDataRolesAclInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListRolesResponseBodyDataRolesAclInstance() = default;
};
class ListRolesResponseBodyDataRolesAclPackage : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  ListRolesResponseBodyDataRolesAclPackage() {}

  explicit ListRolesResponseBodyDataRolesAclPackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListRolesResponseBodyDataRolesAclPackage() = default;
};
class ListRolesResponseBodyDataRolesAclProject : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  ListRolesResponseBodyDataRolesAclProject() {}

  explicit ListRolesResponseBodyDataRolesAclProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListRolesResponseBodyDataRolesAclProject() = default;
};
class ListRolesResponseBodyDataRolesAclResource : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  ListRolesResponseBodyDataRolesAclResource() {}

  explicit ListRolesResponseBodyDataRolesAclResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListRolesResponseBodyDataRolesAclResource() = default;
};
class ListRolesResponseBodyDataRolesAclTable : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> name{};

  ListRolesResponseBodyDataRolesAclTable() {}

  explicit ListRolesResponseBodyDataRolesAclTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListRolesResponseBodyDataRolesAclTable() = default;
};
class ListRolesResponseBodyDataRolesAcl : public Darabonba::Model {
public:
  shared_ptr<vector<ListRolesResponseBodyDataRolesAclFunction>> function{};
  shared_ptr<vector<ListRolesResponseBodyDataRolesAclInstance>> instance{};
  shared_ptr<vector<ListRolesResponseBodyDataRolesAclPackage>> package{};
  shared_ptr<vector<ListRolesResponseBodyDataRolesAclProject>> project{};
  shared_ptr<vector<ListRolesResponseBodyDataRolesAclResource>> resource{};
  shared_ptr<vector<ListRolesResponseBodyDataRolesAclTable>> table{};

  ListRolesResponseBodyDataRolesAcl() {}

  explicit ListRolesResponseBodyDataRolesAcl(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (function) {
      vector<boost::any> temp1;
      for(auto item1:*function){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["function"] = boost::any(temp1);
    }
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["instance"] = boost::any(temp1);
    }
    if (package) {
      vector<boost::any> temp1;
      for(auto item1:*package){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["package"] = boost::any(temp1);
    }
    if (project) {
      vector<boost::any> temp1;
      for(auto item1:*project){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["project"] = boost::any(temp1);
    }
    if (resource) {
      vector<boost::any> temp1;
      for(auto item1:*resource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resource"] = boost::any(temp1);
    }
    if (table) {
      vector<boost::any> temp1;
      for(auto item1:*table){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["table"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("function") != m.end() && !m["function"].empty()) {
      if (typeid(vector<boost::any>) == m["function"].type()) {
        vector<ListRolesResponseBodyDataRolesAclFunction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["function"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyDataRolesAclFunction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        function = make_shared<vector<ListRolesResponseBodyDataRolesAclFunction>>(expect1);
      }
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      if (typeid(vector<boost::any>) == m["instance"].type()) {
        vector<ListRolesResponseBodyDataRolesAclInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyDataRolesAclInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<ListRolesResponseBodyDataRolesAclInstance>>(expect1);
      }
    }
    if (m.find("package") != m.end() && !m["package"].empty()) {
      if (typeid(vector<boost::any>) == m["package"].type()) {
        vector<ListRolesResponseBodyDataRolesAclPackage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["package"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyDataRolesAclPackage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        package = make_shared<vector<ListRolesResponseBodyDataRolesAclPackage>>(expect1);
      }
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      if (typeid(vector<boost::any>) == m["project"].type()) {
        vector<ListRolesResponseBodyDataRolesAclProject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["project"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyDataRolesAclProject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        project = make_shared<vector<ListRolesResponseBodyDataRolesAclProject>>(expect1);
      }
    }
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      if (typeid(vector<boost::any>) == m["resource"].type()) {
        vector<ListRolesResponseBodyDataRolesAclResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyDataRolesAclResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resource = make_shared<vector<ListRolesResponseBodyDataRolesAclResource>>(expect1);
      }
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      if (typeid(vector<boost::any>) == m["table"].type()) {
        vector<ListRolesResponseBodyDataRolesAclTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["table"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyDataRolesAclTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        table = make_shared<vector<ListRolesResponseBodyDataRolesAclTable>>(expect1);
      }
    }
  }


  virtual ~ListRolesResponseBodyDataRolesAcl() = default;
};
class ListRolesResponseBodyDataRoles : public Darabonba::Model {
public:
  shared_ptr<ListRolesResponseBodyDataRolesAcl> acl{};
  shared_ptr<string> name{};
  shared_ptr<string> policy{};
  shared_ptr<string> type{};

  ListRolesResponseBodyDataRoles() {}

  explicit ListRolesResponseBodyDataRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acl) {
      res["acl"] = acl ? boost::any(acl->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (policy) {
      res["policy"] = boost::any(*policy);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("acl") != m.end() && !m["acl"].empty()) {
      if (typeid(map<string, boost::any>) == m["acl"].type()) {
        ListRolesResponseBodyDataRolesAcl model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["acl"]));
        acl = make_shared<ListRolesResponseBodyDataRolesAcl>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("policy") != m.end() && !m["policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["policy"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListRolesResponseBodyDataRoles() = default;
};
class ListRolesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListRolesResponseBodyDataRoles>> roles{};

  ListRolesResponseBodyData() {}

  explicit ListRolesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roles) {
      vector<boost::any> temp1;
      for(auto item1:*roles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["roles"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("roles") != m.end() && !m["roles"].empty()) {
      if (typeid(vector<boost::any>) == m["roles"].type()) {
        vector<ListRolesResponseBodyDataRoles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["roles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyDataRoles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roles = make_shared<vector<ListRolesResponseBodyDataRoles>>(expect1);
      }
    }
  }


  virtual ~ListRolesResponseBodyData() = default;
};
class ListRolesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListRolesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListRolesResponseBody() {}

  explicit ListRolesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListRolesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListRolesResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListRolesResponseBody() = default;
};
class ListRolesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRolesResponseBody> body{};

  ListRolesResponse() {}

  explicit ListRolesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRolesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRolesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRolesResponse() = default;
};
class ListTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<string> prefix{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> type{};

  ListTablesRequest() {}

  explicit ListTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListTablesRequest() = default;
};
class ListTablesResponseBodyDataTablesNativeColumns : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListTablesResponseBodyDataTablesNativeColumns() {}

  explicit ListTablesResponseBodyDataTablesNativeColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListTablesResponseBodyDataTablesNativeColumns() = default;
};
class ListTablesResponseBodyDataTablesPartitionColumns : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListTablesResponseBodyDataTablesPartitionColumns() {}

  explicit ListTablesResponseBodyDataTablesPartitionColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListTablesResponseBodyDataTablesPartitionColumns() = default;
};
class ListTablesResponseBodyDataTables : public Darabonba::Model {
public:
  shared_ptr<bool> autoRefreshEnabled{};
  shared_ptr<string> createTableDDL{};
  shared_ptr<long> creationTime{};
  shared_ptr<string> displayName{};
  shared_ptr<long> fileNum{};
  shared_ptr<bool> isExternalTable{};
  shared_ptr<bool> isOutdated{};
  shared_ptr<long> lastAccessTime{};
  shared_ptr<long> lastDDLTime{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<string> lifecycle{};
  shared_ptr<string> location{};
  shared_ptr<bool> materializedView{};
  shared_ptr<string> name{};
  shared_ptr<vector<ListTablesResponseBodyDataTablesNativeColumns>> nativeColumns{};
  shared_ptr<string> odpsPropertiesRolearn{};
  shared_ptr<bool> odpsSqlTextOptionFlushHeader{};
  shared_ptr<long> odpsTextOptionHeaderLinesCount{};
  shared_ptr<string> owner{};
  shared_ptr<vector<ListTablesResponseBodyDataTablesPartitionColumns>> partitionColumns{};
  shared_ptr<long> physicalSize{};
  shared_ptr<string> projectName{};
  shared_ptr<bool> rewriteEnabled{};
  shared_ptr<string> schema{};
  shared_ptr<long> size{};
  shared_ptr<string> storageHandler{};
  shared_ptr<string> tableComment{};
  shared_ptr<string> tableLabel{};
  shared_ptr<string> tablesotreTableName{};
  shared_ptr<string> tablestoreColumnsMapping{};
  shared_ptr<string> type{};
  shared_ptr<string> viewText{};

  ListTablesResponseBodyDataTables() {}

  explicit ListTablesResponseBodyDataTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRefreshEnabled) {
      res["autoRefreshEnabled"] = boost::any(*autoRefreshEnabled);
    }
    if (createTableDDL) {
      res["createTableDDL"] = boost::any(*createTableDDL);
    }
    if (creationTime) {
      res["creationTime"] = boost::any(*creationTime);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (fileNum) {
      res["fileNum"] = boost::any(*fileNum);
    }
    if (isExternalTable) {
      res["isExternalTable"] = boost::any(*isExternalTable);
    }
    if (isOutdated) {
      res["isOutdated"] = boost::any(*isOutdated);
    }
    if (lastAccessTime) {
      res["lastAccessTime"] = boost::any(*lastAccessTime);
    }
    if (lastDDLTime) {
      res["lastDDLTime"] = boost::any(*lastDDLTime);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (lifecycle) {
      res["lifecycle"] = boost::any(*lifecycle);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (materializedView) {
      res["materializedView"] = boost::any(*materializedView);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nativeColumns) {
      vector<boost::any> temp1;
      for(auto item1:*nativeColumns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["nativeColumns"] = boost::any(temp1);
    }
    if (odpsPropertiesRolearn) {
      res["odpsPropertiesRolearn"] = boost::any(*odpsPropertiesRolearn);
    }
    if (odpsSqlTextOptionFlushHeader) {
      res["odpsSqlTextOptionFlushHeader"] = boost::any(*odpsSqlTextOptionFlushHeader);
    }
    if (odpsTextOptionHeaderLinesCount) {
      res["odpsTextOptionHeaderLinesCount"] = boost::any(*odpsTextOptionHeaderLinesCount);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (partitionColumns) {
      vector<boost::any> temp1;
      for(auto item1:*partitionColumns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["partitionColumns"] = boost::any(temp1);
    }
    if (physicalSize) {
      res["physicalSize"] = boost::any(*physicalSize);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (rewriteEnabled) {
      res["rewriteEnabled"] = boost::any(*rewriteEnabled);
    }
    if (schema) {
      res["schema"] = boost::any(*schema);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (storageHandler) {
      res["storageHandler"] = boost::any(*storageHandler);
    }
    if (tableComment) {
      res["tableComment"] = boost::any(*tableComment);
    }
    if (tableLabel) {
      res["tableLabel"] = boost::any(*tableLabel);
    }
    if (tablesotreTableName) {
      res["tablesotreTableName"] = boost::any(*tablesotreTableName);
    }
    if (tablestoreColumnsMapping) {
      res["tablestoreColumnsMapping"] = boost::any(*tablestoreColumnsMapping);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (viewText) {
      res["viewText"] = boost::any(*viewText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoRefreshEnabled") != m.end() && !m["autoRefreshEnabled"].empty()) {
      autoRefreshEnabled = make_shared<bool>(boost::any_cast<bool>(m["autoRefreshEnabled"]));
    }
    if (m.find("createTableDDL") != m.end() && !m["createTableDDL"].empty()) {
      createTableDDL = make_shared<string>(boost::any_cast<string>(m["createTableDDL"]));
    }
    if (m.find("creationTime") != m.end() && !m["creationTime"].empty()) {
      creationTime = make_shared<long>(boost::any_cast<long>(m["creationTime"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("fileNum") != m.end() && !m["fileNum"].empty()) {
      fileNum = make_shared<long>(boost::any_cast<long>(m["fileNum"]));
    }
    if (m.find("isExternalTable") != m.end() && !m["isExternalTable"].empty()) {
      isExternalTable = make_shared<bool>(boost::any_cast<bool>(m["isExternalTable"]));
    }
    if (m.find("isOutdated") != m.end() && !m["isOutdated"].empty()) {
      isOutdated = make_shared<bool>(boost::any_cast<bool>(m["isOutdated"]));
    }
    if (m.find("lastAccessTime") != m.end() && !m["lastAccessTime"].empty()) {
      lastAccessTime = make_shared<long>(boost::any_cast<long>(m["lastAccessTime"]));
    }
    if (m.find("lastDDLTime") != m.end() && !m["lastDDLTime"].empty()) {
      lastDDLTime = make_shared<long>(boost::any_cast<long>(m["lastDDLTime"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["lastModifiedTime"]));
    }
    if (m.find("lifecycle") != m.end() && !m["lifecycle"].empty()) {
      lifecycle = make_shared<string>(boost::any_cast<string>(m["lifecycle"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("materializedView") != m.end() && !m["materializedView"].empty()) {
      materializedView = make_shared<bool>(boost::any_cast<bool>(m["materializedView"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nativeColumns") != m.end() && !m["nativeColumns"].empty()) {
      if (typeid(vector<boost::any>) == m["nativeColumns"].type()) {
        vector<ListTablesResponseBodyDataTablesNativeColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["nativeColumns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTablesResponseBodyDataTablesNativeColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nativeColumns = make_shared<vector<ListTablesResponseBodyDataTablesNativeColumns>>(expect1);
      }
    }
    if (m.find("odpsPropertiesRolearn") != m.end() && !m["odpsPropertiesRolearn"].empty()) {
      odpsPropertiesRolearn = make_shared<string>(boost::any_cast<string>(m["odpsPropertiesRolearn"]));
    }
    if (m.find("odpsSqlTextOptionFlushHeader") != m.end() && !m["odpsSqlTextOptionFlushHeader"].empty()) {
      odpsSqlTextOptionFlushHeader = make_shared<bool>(boost::any_cast<bool>(m["odpsSqlTextOptionFlushHeader"]));
    }
    if (m.find("odpsTextOptionHeaderLinesCount") != m.end() && !m["odpsTextOptionHeaderLinesCount"].empty()) {
      odpsTextOptionHeaderLinesCount = make_shared<long>(boost::any_cast<long>(m["odpsTextOptionHeaderLinesCount"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("partitionColumns") != m.end() && !m["partitionColumns"].empty()) {
      if (typeid(vector<boost::any>) == m["partitionColumns"].type()) {
        vector<ListTablesResponseBodyDataTablesPartitionColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["partitionColumns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTablesResponseBodyDataTablesPartitionColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        partitionColumns = make_shared<vector<ListTablesResponseBodyDataTablesPartitionColumns>>(expect1);
      }
    }
    if (m.find("physicalSize") != m.end() && !m["physicalSize"].empty()) {
      physicalSize = make_shared<long>(boost::any_cast<long>(m["physicalSize"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("rewriteEnabled") != m.end() && !m["rewriteEnabled"].empty()) {
      rewriteEnabled = make_shared<bool>(boost::any_cast<bool>(m["rewriteEnabled"]));
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["schema"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("storageHandler") != m.end() && !m["storageHandler"].empty()) {
      storageHandler = make_shared<string>(boost::any_cast<string>(m["storageHandler"]));
    }
    if (m.find("tableComment") != m.end() && !m["tableComment"].empty()) {
      tableComment = make_shared<string>(boost::any_cast<string>(m["tableComment"]));
    }
    if (m.find("tableLabel") != m.end() && !m["tableLabel"].empty()) {
      tableLabel = make_shared<string>(boost::any_cast<string>(m["tableLabel"]));
    }
    if (m.find("tablesotreTableName") != m.end() && !m["tablesotreTableName"].empty()) {
      tablesotreTableName = make_shared<string>(boost::any_cast<string>(m["tablesotreTableName"]));
    }
    if (m.find("tablestoreColumnsMapping") != m.end() && !m["tablestoreColumnsMapping"].empty()) {
      tablestoreColumnsMapping = make_shared<string>(boost::any_cast<string>(m["tablestoreColumnsMapping"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("viewText") != m.end() && !m["viewText"].empty()) {
      viewText = make_shared<string>(boost::any_cast<string>(m["viewText"]));
    }
  }


  virtual ~ListTablesResponseBodyDataTables() = default;
};
class ListTablesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItem{};
  shared_ptr<vector<ListTablesResponseBodyDataTables>> tables{};

  ListTablesResponseBodyData() {}

  explicit ListTablesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["marker"] = boost::any(*marker);
    }
    if (maxItem) {
      res["maxItem"] = boost::any(*maxItem);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("marker") != m.end() && !m["marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["marker"]));
    }
    if (m.find("maxItem") != m.end() && !m["maxItem"].empty()) {
      maxItem = make_shared<long>(boost::any_cast<long>(m["maxItem"]));
    }
    if (m.find("tables") != m.end() && !m["tables"].empty()) {
      if (typeid(vector<boost::any>) == m["tables"].type()) {
        vector<ListTablesResponseBodyDataTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTablesResponseBodyDataTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<ListTablesResponseBodyDataTables>>(expect1);
      }
    }
  }


  virtual ~ListTablesResponseBodyData() = default;
};
class ListTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListTablesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListTablesResponseBody() {}

  explicit ListTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListTablesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListTablesResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListTablesResponseBody() = default;
};
class ListTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTablesResponseBody> body{};

  ListTablesResponse() {}

  explicit ListTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTablesResponse() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyDataUsers : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountType{};
  shared_ptr<string> displayName{};
  shared_ptr<string> tenantId{};

  ListUsersResponseBodyDataUsers() {}

  explicit ListUsersResponseBodyDataUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["accountName"] = boost::any(*accountName);
    }
    if (accountType) {
      res["accountType"] = boost::any(*accountType);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("accountName") != m.end() && !m["accountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["accountName"]));
    }
    if (m.find("accountType") != m.end() && !m["accountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["accountType"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~ListUsersResponseBodyDataUsers() = default;
};
class ListUsersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListUsersResponseBodyDataUsers>> users{};

  ListUsersResponseBodyData() {}

  explicit ListUsersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("users") != m.end() && !m["users"].empty()) {
      if (typeid(vector<boost::any>) == m["users"].type()) {
        vector<ListUsersResponseBodyDataUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyDataUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListUsersResponseBodyDataUsers>>(expect1);
      }
    }
  }


  virtual ~ListUsersResponseBodyData() = default;
};
class ListUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListUsersResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListUsersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListUsersResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListUsersResponseBody() = default;
};
class ListUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsersResponseBody> body{};

  ListUsersResponse() {}

  explicit ListUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersResponse() = default;
};
class ListUsersByRoleResponseBodyDataUsers : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  ListUsersByRoleResponseBodyDataUsers() {}

  explicit ListUsersByRoleResponseBodyDataUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListUsersByRoleResponseBodyDataUsers() = default;
};
class ListUsersByRoleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListUsersByRoleResponseBodyDataUsers>> users{};

  ListUsersByRoleResponseBodyData() {}

  explicit ListUsersByRoleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("users") != m.end() && !m["users"].empty()) {
      if (typeid(vector<boost::any>) == m["users"].type()) {
        vector<ListUsersByRoleResponseBodyDataUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersByRoleResponseBodyDataUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListUsersByRoleResponseBodyDataUsers>>(expect1);
      }
    }
  }


  virtual ~ListUsersByRoleResponseBodyData() = default;
};
class ListUsersByRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListUsersByRoleResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListUsersByRoleResponseBody() {}

  explicit ListUsersByRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListUsersByRoleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListUsersByRoleResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListUsersByRoleResponseBody() = default;
};
class ListUsersByRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsersByRoleResponseBody> body{};

  ListUsersByRoleResponse() {}

  explicit ListUsersByRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUsersByRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersByRoleResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersByRoleResponse() = default;
};
class UpdatePackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};

  UpdatePackageRequest() {}

  explicit UpdatePackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~UpdatePackageRequest() = default;
};
class UpdatePackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  UpdatePackageResponseBody() {}

  explicit UpdatePackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdatePackageResponseBody() = default;
};
class UpdatePackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePackageResponseBody> body{};

  UpdatePackageResponse() {}

  explicit UpdatePackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePackageResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePackageResponse() = default;
};
class UpdateProjectIpWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};

  UpdateProjectIpWhiteListRequest() {}

  explicit UpdateProjectIpWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~UpdateProjectIpWhiteListRequest() = default;
};
class UpdateProjectIpWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  UpdateProjectIpWhiteListResponseBody() {}

  explicit UpdateProjectIpWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateProjectIpWhiteListResponseBody() = default;
};
class UpdateProjectIpWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProjectIpWhiteListResponseBody> body{};

  UpdateProjectIpWhiteListResponse() {}

  explicit UpdateProjectIpWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProjectIpWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProjectIpWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProjectIpWhiteListResponse() = default;
};
class UpdateQuotaHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> akProven{};

  UpdateQuotaHeaders() {}

  explicit UpdateQuotaHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (akProven) {
      res["AkProven"] = boost::any(*akProven);
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
    if (m.find("AkProven") != m.end() && !m["AkProven"].empty()) {
      akProven = make_shared<string>(boost::any_cast<string>(m["AkProven"]));
    }
  }


  virtual ~UpdateQuotaHeaders() = default;
};
class UpdateQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  UpdateQuotaRequest() {}

  explicit UpdateQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~UpdateQuotaRequest() = default;
};
class UpdateQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  UpdateQuotaResponseBody() {}

  explicit UpdateQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateQuotaResponseBody() = default;
};
class UpdateQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateQuotaResponseBody> body{};

  UpdateQuotaResponse() {}

  explicit UpdateQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateQuotaResponse() = default;
};
class UpdateQuotaPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  UpdateQuotaPlanRequest() {}

  explicit UpdateQuotaPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~UpdateQuotaPlanRequest() = default;
};
class UpdateQuotaPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  UpdateQuotaPlanResponseBody() {}

  explicit UpdateQuotaPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateQuotaPlanResponseBody() = default;
};
class UpdateQuotaPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateQuotaPlanResponseBody> body{};

  UpdateQuotaPlanResponse() {}

  explicit UpdateQuotaPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateQuotaPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateQuotaPlanResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateQuotaPlanResponse() = default;
};
class UpdateQuotaScheduleRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> region{};
  shared_ptr<string> tenantId{};

  UpdateQuotaScheduleRequest() {}

  explicit UpdateQuotaScheduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~UpdateQuotaScheduleRequest() = default;
};
class UpdateQuotaScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  UpdateQuotaScheduleResponseBody() {}

  explicit UpdateQuotaScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateQuotaScheduleResponseBody() = default;
};
class UpdateQuotaScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateQuotaScheduleResponseBody> body{};

  UpdateQuotaScheduleResponse() {}

  explicit UpdateQuotaScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateQuotaScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateQuotaScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateQuotaScheduleResponse() = default;
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
  CreatePackageResponse createPackageWithOptions(shared_ptr<string> projectName,
                                                 shared_ptr<CreatePackageRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePackageResponse createPackage(shared_ptr<string> projectName, shared_ptr<CreatePackageRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  CreateQuotaPlanResponse createQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                     shared_ptr<CreateQuotaPlanRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateQuotaPlanResponse createQuotaPlan(shared_ptr<string> nickname, shared_ptr<CreateQuotaPlanRequest> request);
  CreateQuotaScheduleResponse createQuotaScheduleWithOptions(shared_ptr<string> nickname,
                                                             shared_ptr<CreateQuotaScheduleRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateQuotaScheduleResponse createQuotaSchedule(shared_ptr<string> nickname, shared_ptr<CreateQuotaScheduleRequest> request);
  CreateRoleResponse createRoleWithOptions(shared_ptr<string> projectName,
                                           shared_ptr<CreateRoleRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRoleResponse createRole(shared_ptr<string> projectName, shared_ptr<CreateRoleRequest> request);
  DeleteQuotaPlanResponse deleteQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                     shared_ptr<string> planName,
                                                     shared_ptr<DeleteQuotaPlanRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteQuotaPlanResponse deleteQuotaPlan(shared_ptr<string> nickname, shared_ptr<string> planName, shared_ptr<DeleteQuotaPlanRequest> request);
  GetJobResourceUsageResponse getJobResourceUsageWithOptions(shared_ptr<GetJobResourceUsageRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobResourceUsageResponse getJobResourceUsage(shared_ptr<GetJobResourceUsageRequest> request);
  GetPackageResponse getPackageWithOptions(shared_ptr<string> projectName,
                                           shared_ptr<string> packageName,
                                           shared_ptr<GetPackageRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPackageResponse getPackage(shared_ptr<string> projectName, shared_ptr<string> packageName, shared_ptr<GetPackageRequest> request);
  GetProjectResponse getProjectWithOptions(shared_ptr<string> projectName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResponse getProject(shared_ptr<string> projectName);
  GetQuotaResponse getQuotaWithOptions(shared_ptr<string> nickname,
                                       shared_ptr<GetQuotaRequest> request,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuotaResponse getQuota(shared_ptr<string> nickname, shared_ptr<GetQuotaRequest> request);
  GetQuotaPlanResponse getQuotaPlanWithOptions(shared_ptr<string> nickname,
                                               shared_ptr<string> planName,
                                               shared_ptr<GetQuotaPlanRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuotaPlanResponse getQuotaPlan(shared_ptr<string> nickname, shared_ptr<string> planName, shared_ptr<GetQuotaPlanRequest> request);
  GetQuotaScheduleResponse getQuotaScheduleWithOptions(shared_ptr<string> nickname,
                                                       shared_ptr<GetQuotaScheduleRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuotaScheduleResponse getQuotaSchedule(shared_ptr<string> nickname, shared_ptr<GetQuotaScheduleRequest> request);
  GetRoleAclResponse getRoleAclWithOptions(shared_ptr<string> projectName,
                                           shared_ptr<string> roleName,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRoleAclResponse getRoleAcl(shared_ptr<string> projectName, shared_ptr<string> roleName);
  GetRoleAclOnObjectResponse getRoleAclOnObjectWithOptions(shared_ptr<string> projectName,
                                                           shared_ptr<string> roleName,
                                                           shared_ptr<GetRoleAclOnObjectRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRoleAclOnObjectResponse getRoleAclOnObject(shared_ptr<string> projectName, shared_ptr<string> roleName, shared_ptr<GetRoleAclOnObjectRequest> request);
  GetRolePolicyResponse getRolePolicyWithOptions(shared_ptr<string> projectName,
                                                 shared_ptr<string> roleName,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRolePolicyResponse getRolePolicy(shared_ptr<string> projectName, shared_ptr<string> roleName);
  GetRunningJobsResponse getRunningJobsWithOptions(shared_ptr<GetRunningJobsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRunningJobsResponse getRunningJobs(shared_ptr<GetRunningJobsRequest> request);
  GetTrustedProjectsResponse getTrustedProjectsWithOptions(shared_ptr<string> projectName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTrustedProjectsResponse getTrustedProjects(shared_ptr<string> projectName);
  KillJobsResponse killJobsWithOptions(shared_ptr<KillJobsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  KillJobsResponse killJobs(shared_ptr<KillJobsRequest> request);
  ListFunctionsResponse listFunctionsWithOptions(shared_ptr<string> projectName,
                                                 shared_ptr<ListFunctionsRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFunctionsResponse listFunctions(shared_ptr<string> projectName, shared_ptr<ListFunctionsRequest> request);
  ListPackagesResponse listPackagesWithOptions(shared_ptr<string> projectName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPackagesResponse listPackages(shared_ptr<string> projectName);
  ListProjectUsersResponse listProjectUsersWithOptions(shared_ptr<string> projectName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectUsersResponse listProjectUsers(shared_ptr<string> projectName);
  ListProjectsResponse listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectsResponse listProjects(shared_ptr<ListProjectsRequest> request);
  ListQuotasResponse listQuotasWithOptions(shared_ptr<ListQuotasRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQuotasResponse listQuotas(shared_ptr<ListQuotasRequest> request);
  ListQuotasPlansResponse listQuotasPlansWithOptions(shared_ptr<string> nickname,
                                                     shared_ptr<ListQuotasPlansRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQuotasPlansResponse listQuotasPlans(shared_ptr<string> nickname, shared_ptr<ListQuotasPlansRequest> request);
  ListResourcesResponse listResourcesWithOptions(shared_ptr<string> projectName,
                                                 shared_ptr<ListResourcesRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcesResponse listResources(shared_ptr<string> projectName, shared_ptr<ListResourcesRequest> request);
  ListRolesResponse listRolesWithOptions(shared_ptr<string> projectName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRolesResponse listRoles(shared_ptr<string> projectName);
  ListTablesResponse listTablesWithOptions(shared_ptr<string> projectName,
                                           shared_ptr<ListTablesRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTablesResponse listTables(shared_ptr<string> projectName, shared_ptr<ListTablesRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  ListUsersByRoleResponse listUsersByRoleWithOptions(shared_ptr<string> projectName,
                                                     shared_ptr<string> roleName,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersByRoleResponse listUsersByRole(shared_ptr<string> projectName, shared_ptr<string> roleName);
  UpdatePackageResponse updatePackageWithOptions(shared_ptr<string> projectName,
                                                 shared_ptr<string> packageName,
                                                 shared_ptr<UpdatePackageRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePackageResponse updatePackage(shared_ptr<string> projectName, shared_ptr<string> packageName, shared_ptr<UpdatePackageRequest> request);
  UpdateProjectIpWhiteListResponse updateProjectIpWhiteListWithOptions(shared_ptr<string> projectName,
                                                                       shared_ptr<UpdateProjectIpWhiteListRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectIpWhiteListResponse updateProjectIpWhiteList(shared_ptr<string> projectName, shared_ptr<UpdateProjectIpWhiteListRequest> request);
  UpdateQuotaResponse updateQuotaWithOptions(shared_ptr<string> nickname,
                                             shared_ptr<UpdateQuotaRequest> request,
                                             shared_ptr<UpdateQuotaHeaders> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateQuotaResponse updateQuota(shared_ptr<string> nickname, shared_ptr<UpdateQuotaRequest> request);
  UpdateQuotaPlanResponse updateQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                     shared_ptr<string> planName,
                                                     shared_ptr<UpdateQuotaPlanRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateQuotaPlanResponse updateQuotaPlan(shared_ptr<string> nickname, shared_ptr<string> planName, shared_ptr<UpdateQuotaPlanRequest> request);
  UpdateQuotaScheduleResponse updateQuotaScheduleWithOptions(shared_ptr<string> nickname,
                                                             shared_ptr<UpdateQuotaScheduleRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateQuotaScheduleResponse updateQuotaSchedule(shared_ptr<string> nickname, shared_ptr<UpdateQuotaScheduleRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_MaxCompute20220104

#endif
