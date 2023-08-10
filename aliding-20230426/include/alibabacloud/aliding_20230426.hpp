// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALIDING20230426_H_
#define ALIBABACLOUD_ALIDING20230426_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Aliding20230426 {
class CreateSheetHeadersAccountContext : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  CreateSheetHeadersAccountContext() {}

  explicit CreateSheetHeadersAccountContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
  }


  virtual ~CreateSheetHeadersAccountContext() = default;
};
class CreateSheetHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<CreateSheetHeadersAccountContext> accountContext{};

  CreateSheetHeaders() {}

  explicit CreateSheetHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContext) {
      res["AccountContext"] = accountContext ? boost::any(accountContext->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountContext"].type()) {
        CreateSheetHeadersAccountContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountContext"]));
        accountContext = make_shared<CreateSheetHeadersAccountContext>(model1);
      }
    }
  }


  virtual ~CreateSheetHeaders() = default;
};
class CreateSheetShrinkHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> accountContextShrink{};

  CreateSheetShrinkHeaders() {}

  explicit CreateSheetShrinkHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContextShrink) {
      res["AccountContext"] = boost::any(*accountContextShrink);
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
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      accountContextShrink = make_shared<string>(boost::any_cast<string>(m["AccountContext"]));
    }
  }


  virtual ~CreateSheetShrinkHeaders() = default;
};
class CreateSheetRequestTenantContext : public Darabonba::Model {
public:
  shared_ptr<string> tenantId{};

  CreateSheetRequestTenantContext() {}

  explicit CreateSheetRequestTenantContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~CreateSheetRequestTenantContext() = default;
};
class CreateSheetRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<CreateSheetRequestTenantContext> tenantContext{};
  shared_ptr<string> workbookId{};

  CreateSheetRequest() {}

  explicit CreateSheetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tenantContext) {
      res["TenantContext"] = tenantContext ? boost::any(tenantContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workbookId) {
      res["WorkbookId"] = boost::any(*workbookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantContext"].type()) {
        CreateSheetRequestTenantContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantContext"]));
        tenantContext = make_shared<CreateSheetRequestTenantContext>(model1);
      }
    }
    if (m.find("WorkbookId") != m.end() && !m["WorkbookId"].empty()) {
      workbookId = make_shared<string>(boost::any_cast<string>(m["WorkbookId"]));
    }
  }


  virtual ~CreateSheetRequest() = default;
};
class CreateSheetShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> tenantContextShrink{};
  shared_ptr<string> workbookId{};

  CreateSheetShrinkRequest() {}

  explicit CreateSheetShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tenantContextShrink) {
      res["TenantContext"] = boost::any(*tenantContextShrink);
    }
    if (workbookId) {
      res["WorkbookId"] = boost::any(*workbookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      tenantContextShrink = make_shared<string>(boost::any_cast<string>(m["TenantContext"]));
    }
    if (m.find("WorkbookId") != m.end() && !m["WorkbookId"].empty()) {
      workbookId = make_shared<string>(boost::any_cast<string>(m["WorkbookId"]));
    }
  }


  virtual ~CreateSheetShrinkRequest() = default;
};
class CreateSheetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> visibility{};

  CreateSheetResponseBody() {}

  explicit CreateSheetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (visibility) {
      res["visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("visibility") != m.end() && !m["visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["visibility"]));
    }
  }


  virtual ~CreateSheetResponseBody() = default;
};
class CreateSheetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSheetResponseBody> body{};

  CreateSheetResponse() {}

  explicit CreateSheetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSheetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSheetResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSheetResponse() = default;
};
class InsertRowsBeforeHeadersAccountContext : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  InsertRowsBeforeHeadersAccountContext() {}

  explicit InsertRowsBeforeHeadersAccountContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
  }


  virtual ~InsertRowsBeforeHeadersAccountContext() = default;
};
class InsertRowsBeforeHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<InsertRowsBeforeHeadersAccountContext> accountContext{};

  InsertRowsBeforeHeaders() {}

  explicit InsertRowsBeforeHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContext) {
      res["AccountContext"] = accountContext ? boost::any(accountContext->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountContext"].type()) {
        InsertRowsBeforeHeadersAccountContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountContext"]));
        accountContext = make_shared<InsertRowsBeforeHeadersAccountContext>(model1);
      }
    }
  }


  virtual ~InsertRowsBeforeHeaders() = default;
};
class InsertRowsBeforeShrinkHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> accountContextShrink{};

  InsertRowsBeforeShrinkHeaders() {}

  explicit InsertRowsBeforeShrinkHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContextShrink) {
      res["AccountContext"] = boost::any(*accountContextShrink);
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
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      accountContextShrink = make_shared<string>(boost::any_cast<string>(m["AccountContext"]));
    }
  }


  virtual ~InsertRowsBeforeShrinkHeaders() = default;
};
class InsertRowsBeforeRequestTenantContext : public Darabonba::Model {
public:
  shared_ptr<string> tenantId{};

  InsertRowsBeforeRequestTenantContext() {}

  explicit InsertRowsBeforeRequestTenantContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~InsertRowsBeforeRequestTenantContext() = default;
};
class InsertRowsBeforeRequest : public Darabonba::Model {
public:
  shared_ptr<long> row{};
  shared_ptr<long> rowCount{};
  shared_ptr<string> sheetId{};
  shared_ptr<InsertRowsBeforeRequestTenantContext> tenantContext{};
  shared_ptr<string> workbookId{};

  InsertRowsBeforeRequest() {}

  explicit InsertRowsBeforeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (row) {
      res["Row"] = boost::any(*row);
    }
    if (rowCount) {
      res["RowCount"] = boost::any(*rowCount);
    }
    if (sheetId) {
      res["SheetId"] = boost::any(*sheetId);
    }
    if (tenantContext) {
      res["TenantContext"] = tenantContext ? boost::any(tenantContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workbookId) {
      res["WorkbookId"] = boost::any(*workbookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Row") != m.end() && !m["Row"].empty()) {
      row = make_shared<long>(boost::any_cast<long>(m["Row"]));
    }
    if (m.find("RowCount") != m.end() && !m["RowCount"].empty()) {
      rowCount = make_shared<long>(boost::any_cast<long>(m["RowCount"]));
    }
    if (m.find("SheetId") != m.end() && !m["SheetId"].empty()) {
      sheetId = make_shared<string>(boost::any_cast<string>(m["SheetId"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantContext"].type()) {
        InsertRowsBeforeRequestTenantContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantContext"]));
        tenantContext = make_shared<InsertRowsBeforeRequestTenantContext>(model1);
      }
    }
    if (m.find("WorkbookId") != m.end() && !m["WorkbookId"].empty()) {
      workbookId = make_shared<string>(boost::any_cast<string>(m["WorkbookId"]));
    }
  }


  virtual ~InsertRowsBeforeRequest() = default;
};
class InsertRowsBeforeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> row{};
  shared_ptr<long> rowCount{};
  shared_ptr<string> sheetId{};
  shared_ptr<string> tenantContextShrink{};
  shared_ptr<string> workbookId{};

  InsertRowsBeforeShrinkRequest() {}

  explicit InsertRowsBeforeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (row) {
      res["Row"] = boost::any(*row);
    }
    if (rowCount) {
      res["RowCount"] = boost::any(*rowCount);
    }
    if (sheetId) {
      res["SheetId"] = boost::any(*sheetId);
    }
    if (tenantContextShrink) {
      res["TenantContext"] = boost::any(*tenantContextShrink);
    }
    if (workbookId) {
      res["WorkbookId"] = boost::any(*workbookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Row") != m.end() && !m["Row"].empty()) {
      row = make_shared<long>(boost::any_cast<long>(m["Row"]));
    }
    if (m.find("RowCount") != m.end() && !m["RowCount"].empty()) {
      rowCount = make_shared<long>(boost::any_cast<long>(m["RowCount"]));
    }
    if (m.find("SheetId") != m.end() && !m["SheetId"].empty()) {
      sheetId = make_shared<string>(boost::any_cast<string>(m["SheetId"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      tenantContextShrink = make_shared<string>(boost::any_cast<string>(m["TenantContext"]));
    }
    if (m.find("WorkbookId") != m.end() && !m["WorkbookId"].empty()) {
      workbookId = make_shared<string>(boost::any_cast<string>(m["WorkbookId"]));
    }
  }


  virtual ~InsertRowsBeforeShrinkRequest() = default;
};
class InsertRowsBeforeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  InsertRowsBeforeResponseBody() {}

  explicit InsertRowsBeforeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~InsertRowsBeforeResponseBody() = default;
};
class InsertRowsBeforeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InsertRowsBeforeResponseBody> body{};

  InsertRowsBeforeResponse() {}

  explicit InsertRowsBeforeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InsertRowsBeforeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InsertRowsBeforeResponseBody>(model1);
      }
    }
  }


  virtual ~InsertRowsBeforeResponse() = default;
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
  CreateSheetResponse createSheetWithOptions(shared_ptr<CreateSheetRequest> tmpReq, shared_ptr<CreateSheetHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSheetResponse createSheet(shared_ptr<CreateSheetRequest> request);
  InsertRowsBeforeResponse insertRowsBeforeWithOptions(shared_ptr<InsertRowsBeforeRequest> tmpReq, shared_ptr<InsertRowsBeforeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InsertRowsBeforeResponse insertRowsBefore(shared_ptr<InsertRowsBeforeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Aliding20230426

#endif
