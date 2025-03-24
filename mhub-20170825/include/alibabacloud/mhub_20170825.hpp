// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MHUB20170825_H_
#define ALIBABACLOUD_MHUB20170825_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Mhub20170825 {
class CreateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> bundleId{};
  shared_ptr<string> encodedIcon{};
  shared_ptr<string> industryId{};
  shared_ptr<string> name{};
  shared_ptr<string> packageName{};
  shared_ptr<string> productId{};
  shared_ptr<long> type{};

  CreateAppRequest() {}

  explicit CreateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (encodedIcon) {
      res["EncodedIcon"] = boost::any(*encodedIcon);
    }
    if (industryId) {
      res["IndustryId"] = boost::any(*industryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("EncodedIcon") != m.end() && !m["EncodedIcon"].empty()) {
      encodedIcon = make_shared<string>(boost::any_cast<string>(m["EncodedIcon"]));
    }
    if (m.find("IndustryId") != m.end() && !m["IndustryId"].empty()) {
      industryId = make_shared<string>(boost::any_cast<string>(m["IndustryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~CreateAppRequest() = default;
};
class CreateAppResponseBodyAppInfo : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> bundleId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> packageName{};
  shared_ptr<long> productId{};
  shared_ptr<long> type{};

  CreateAppResponseBodyAppInfo() {}

  explicit CreateAppResponseBodyAppInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~CreateAppResponseBodyAppInfo() = default;
};
class CreateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateAppResponseBodyAppInfo> appInfo{};
  shared_ptr<string> requestId{};

  CreateAppResponseBody() {}

  explicit CreateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInfo) {
      res["AppInfo"] = appInfo ? boost::any(appInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInfo") != m.end() && !m["AppInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppInfo"].type()) {
        CreateAppResponseBodyAppInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppInfo"]));
        appInfo = make_shared<CreateAppResponseBodyAppInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppResponseBody() = default;
};
class CreateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppResponseBody> body{};

  CreateAppResponse() {}

  explicit CreateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppResponse() = default;
};
class CreateProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  CreateProductRequest() {}

  explicit CreateProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateProductRequest() = default;
};
class CreateProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> productId{};
  shared_ptr<string> requestId{};

  CreateProductResponseBody() {}

  explicit CreateProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateProductResponseBody() = default;
};
class CreateProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProductResponseBody> body{};

  CreateProductResponse() {}

  explicit CreateProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProductResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProductResponse() = default;
};
class DeleteAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};

  DeleteAppRequest() {}

  explicit DeleteAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~DeleteAppRequest() = default;
};
class DeleteAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAppResponseBody() {}

  explicit DeleteAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppResponse() = default;
};
class DeleteProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> productId{};

  DeleteProductRequest() {}

  explicit DeleteProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
  }


  virtual ~DeleteProductRequest() = default;
};
class DeleteProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteProductResponseBody() {}

  explicit DeleteProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteProductResponseBody() = default;
};
class DeleteProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProductResponseBody> body{};

  DeleteProductResponse() {}

  explicit DeleteProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProductResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProductResponse() = default;
};
class DescribeDashboardRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<long> appType{};
  shared_ptr<string> appVersion{};
  shared_ptr<long> endTime{};
  shared_ptr<string> keyword{};
  shared_ptr<string> proxyAction{};
  shared_ptr<string> serviceName{};
  shared_ptr<long> startTime{};

  DescribeDashboardRequest() {}

  explicit DescribeDashboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (proxyAction) {
      res["ProxyAction"] = boost::any(*proxyAction);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<long>(boost::any_cast<long>(m["AppType"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("ProxyAction") != m.end() && !m["ProxyAction"].empty()) {
      proxyAction = make_shared<string>(boost::any_cast<string>(m["ProxyAction"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDashboardRequest() = default;
};
class DescribeDashboardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> model{};
  shared_ptr<string> requestId{};

  DescribeDashboardResponseBody() {}

  explicit DescribeDashboardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDashboardResponseBody() = default;
};
class DescribeDashboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDashboardResponseBody> body{};

  DescribeDashboardResponse() {}

  explicit DescribeDashboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDashboardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDashboardResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDashboardResponse() = default;
};
class ListAppsRequest : public Darabonba::Model {
public:
  shared_ptr<long> osType{};
  shared_ptr<string> page{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> productId{};

  ListAppsRequest() {}

  explicit ListAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<long>(boost::any_cast<long>(m["OsType"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<string>(boost::any_cast<string>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
  }


  virtual ~ListAppsRequest() = default;
};
class ListAppsResponseBodyAppInfosAppInfo : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> bundleId{};
  shared_ptr<string> encodedIcon{};
  shared_ptr<long> industryId{};
  shared_ptr<string> name{};
  shared_ptr<string> packageName{};
  shared_ptr<bool> readonly{};
  shared_ptr<long> type{};

  ListAppsResponseBodyAppInfosAppInfo() {}

  explicit ListAppsResponseBodyAppInfosAppInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (encodedIcon) {
      res["EncodedIcon"] = boost::any(*encodedIcon);
    }
    if (industryId) {
      res["IndustryId"] = boost::any(*industryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (readonly) {
      res["Readonly"] = boost::any(*readonly);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("EncodedIcon") != m.end() && !m["EncodedIcon"].empty()) {
      encodedIcon = make_shared<string>(boost::any_cast<string>(m["EncodedIcon"]));
    }
    if (m.find("IndustryId") != m.end() && !m["IndustryId"].empty()) {
      industryId = make_shared<long>(boost::any_cast<long>(m["IndustryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("Readonly") != m.end() && !m["Readonly"].empty()) {
      readonly = make_shared<bool>(boost::any_cast<bool>(m["Readonly"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~ListAppsResponseBodyAppInfosAppInfo() = default;
};
class ListAppsResponseBodyAppInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppsResponseBodyAppInfosAppInfo>> appInfo{};

  ListAppsResponseBodyAppInfos() {}

  explicit ListAppsResponseBodyAppInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInfo) {
      vector<boost::any> temp1;
      for(auto item1:*appInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInfo") != m.end() && !m["AppInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["AppInfo"].type()) {
        vector<ListAppsResponseBodyAppInfosAppInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppsResponseBodyAppInfosAppInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appInfo = make_shared<vector<ListAppsResponseBodyAppInfosAppInfo>>(expect1);
      }
    }
  }


  virtual ~ListAppsResponseBodyAppInfos() = default;
};
class ListAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAppsResponseBodyAppInfos> appInfos{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<string> ubsmsStatus{};

  ListAppsResponseBody() {}

  explicit ListAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInfos) {
      res["AppInfos"] = appInfos ? boost::any(appInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (ubsmsStatus) {
      res["UbsmsStatus"] = boost::any(*ubsmsStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInfos") != m.end() && !m["AppInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppInfos"].type()) {
        ListAppsResponseBodyAppInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppInfos"]));
        appInfos = make_shared<ListAppsResponseBodyAppInfos>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("UbsmsStatus") != m.end() && !m["UbsmsStatus"].empty()) {
      ubsmsStatus = make_shared<string>(boost::any_cast<string>(m["UbsmsStatus"]));
    }
  }


  virtual ~ListAppsResponseBody() = default;
};
class ListAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppsResponseBody> body{};

  ListAppsResponse() {}

  explicit ListAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppsResponse() = default;
};
class ListProductsRequest : public Darabonba::Model {
public:
  shared_ptr<long> offset{};
  shared_ptr<string> productName{};
  shared_ptr<bool> simple{};
  shared_ptr<long> size{};

  ListProductsRequest() {}

  explicit ListProductsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (simple) {
      res["Simple"] = boost::any(*simple);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("Simple") != m.end() && !m["Simple"].empty()) {
      simple = make_shared<bool>(boost::any_cast<bool>(m["Simple"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListProductsRequest() = default;
};
class ListProductsResponseBodyProductInfosProductInfo : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> encodedIcon{};
  shared_ptr<long> industryId{};
  shared_ptr<string> name{};
  shared_ptr<string> platforms{};
  shared_ptr<long> productId{};
  shared_ptr<bool> readonly{};

  ListProductsResponseBodyProductInfosProductInfo() {}

  explicit ListProductsResponseBodyProductInfosProductInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (encodedIcon) {
      res["EncodedIcon"] = boost::any(*encodedIcon);
    }
    if (industryId) {
      res["IndustryId"] = boost::any(*industryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (platforms) {
      res["Platforms"] = boost::any(*platforms);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (readonly) {
      res["Readonly"] = boost::any(*readonly);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EncodedIcon") != m.end() && !m["EncodedIcon"].empty()) {
      encodedIcon = make_shared<string>(boost::any_cast<string>(m["EncodedIcon"]));
    }
    if (m.find("IndustryId") != m.end() && !m["IndustryId"].empty()) {
      industryId = make_shared<long>(boost::any_cast<long>(m["IndustryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Platforms") != m.end() && !m["Platforms"].empty()) {
      platforms = make_shared<string>(boost::any_cast<string>(m["Platforms"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("Readonly") != m.end() && !m["Readonly"].empty()) {
      readonly = make_shared<bool>(boost::any_cast<bool>(m["Readonly"]));
    }
  }


  virtual ~ListProductsResponseBodyProductInfosProductInfo() = default;
};
class ListProductsResponseBodyProductInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ListProductsResponseBodyProductInfosProductInfo>> productInfo{};

  ListProductsResponseBodyProductInfos() {}

  explicit ListProductsResponseBodyProductInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productInfo) {
      vector<boost::any> temp1;
      for(auto item1:*productInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductInfo") != m.end() && !m["ProductInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductInfo"].type()) {
        vector<ListProductsResponseBodyProductInfosProductInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductsResponseBodyProductInfosProductInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productInfo = make_shared<vector<ListProductsResponseBodyProductInfosProductInfo>>(expect1);
      }
    }
  }


  virtual ~ListProductsResponseBodyProductInfos() = default;
};
class ListProductsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListProductsResponseBodyProductInfos> productInfos{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<string> ubsmsStatus{};

  ListProductsResponseBody() {}

  explicit ListProductsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productInfos) {
      res["ProductInfos"] = productInfos ? boost::any(productInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (ubsmsStatus) {
      res["UbsmsStatus"] = boost::any(*ubsmsStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductInfos") != m.end() && !m["ProductInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductInfos"].type()) {
        ListProductsResponseBodyProductInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductInfos"]));
        productInfos = make_shared<ListProductsResponseBodyProductInfos>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("UbsmsStatus") != m.end() && !m["UbsmsStatus"].empty()) {
      ubsmsStatus = make_shared<string>(boost::any_cast<string>(m["UbsmsStatus"]));
    }
  }


  virtual ~ListProductsResponseBody() = default;
};
class ListProductsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductsResponseBody> body{};

  ListProductsResponse() {}

  explicit ListProductsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductsResponse() = default;
};
class ModifyAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> bundleId{};
  shared_ptr<string> encodedIcon{};
  shared_ptr<long> industryId{};
  shared_ptr<string> name{};
  shared_ptr<string> packageName{};

  ModifyAppRequest() {}

  explicit ModifyAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (encodedIcon) {
      res["EncodedIcon"] = boost::any(*encodedIcon);
    }
    if (industryId) {
      res["IndustryId"] = boost::any(*industryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("EncodedIcon") != m.end() && !m["EncodedIcon"].empty()) {
      encodedIcon = make_shared<string>(boost::any_cast<string>(m["EncodedIcon"]));
    }
    if (m.find("IndustryId") != m.end() && !m["IndustryId"].empty()) {
      industryId = make_shared<long>(boost::any_cast<long>(m["IndustryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
  }


  virtual ~ModifyAppRequest() = default;
};
class ModifyAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAppResponseBody() {}

  explicit ModifyAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAppResponseBody() = default;
};
class ModifyAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppResponseBody> body{};

  ModifyAppResponse() {}

  explicit ModifyAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppResponse() = default;
};
class ModifyProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> productId{};

  ModifyProductRequest() {}

  explicit ModifyProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
  }


  virtual ~ModifyProductRequest() = default;
};
class ModifyProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyProductResponseBody() {}

  explicit ModifyProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyProductResponseBody() = default;
};
class ModifyProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyProductResponseBody> body{};

  ModifyProductResponse() {}

  explicit ModifyProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyProductResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyProductResponse() = default;
};
class OpenEmasServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};

  OpenEmasServiceRequest() {}

  explicit OpenEmasServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~OpenEmasServiceRequest() = default;
};
class OpenEmasServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenEmasServiceResponseBody() {}

  explicit OpenEmasServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OpenEmasServiceResponseBody() = default;
};
class OpenEmasServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenEmasServiceResponseBody> body{};

  OpenEmasServiceResponse() {}

  explicit OpenEmasServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenEmasServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenEmasServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenEmasServiceResponse() = default;
};
class QueryAppInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};

  QueryAppInfoRequest() {}

  explicit QueryAppInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~QueryAppInfoRequest() = default;
};
class QueryAppInfoResponseBodyAppInfo : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> appName{};
  shared_ptr<string> bundleId{};
  shared_ptr<bool> certDevelopAvail{};
  shared_ptr<string> certDevelopExpiration{};
  shared_ptr<bool> certProductAvail{};
  shared_ptr<string> certProductExpiration{};
  shared_ptr<string> createTime{};
  shared_ptr<string> encodedIcon{};
  shared_ptr<long> industryId{};
  shared_ptr<string> packageName{};
  shared_ptr<long> productId{};
  shared_ptr<bool> readonly{};
  shared_ptr<long> status{};
  shared_ptr<long> type{};

  QueryAppInfoResponseBodyAppInfo() {}

  explicit QueryAppInfoResponseBodyAppInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (certDevelopAvail) {
      res["CertDevelopAvail"] = boost::any(*certDevelopAvail);
    }
    if (certDevelopExpiration) {
      res["CertDevelopExpiration"] = boost::any(*certDevelopExpiration);
    }
    if (certProductAvail) {
      res["CertProductAvail"] = boost::any(*certProductAvail);
    }
    if (certProductExpiration) {
      res["CertProductExpiration"] = boost::any(*certProductExpiration);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (encodedIcon) {
      res["EncodedIcon"] = boost::any(*encodedIcon);
    }
    if (industryId) {
      res["IndustryId"] = boost::any(*industryId);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (readonly) {
      res["Readonly"] = boost::any(*readonly);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("CertDevelopAvail") != m.end() && !m["CertDevelopAvail"].empty()) {
      certDevelopAvail = make_shared<bool>(boost::any_cast<bool>(m["CertDevelopAvail"]));
    }
    if (m.find("CertDevelopExpiration") != m.end() && !m["CertDevelopExpiration"].empty()) {
      certDevelopExpiration = make_shared<string>(boost::any_cast<string>(m["CertDevelopExpiration"]));
    }
    if (m.find("CertProductAvail") != m.end() && !m["CertProductAvail"].empty()) {
      certProductAvail = make_shared<bool>(boost::any_cast<bool>(m["CertProductAvail"]));
    }
    if (m.find("CertProductExpiration") != m.end() && !m["CertProductExpiration"].empty()) {
      certProductExpiration = make_shared<string>(boost::any_cast<string>(m["CertProductExpiration"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EncodedIcon") != m.end() && !m["EncodedIcon"].empty()) {
      encodedIcon = make_shared<string>(boost::any_cast<string>(m["EncodedIcon"]));
    }
    if (m.find("IndustryId") != m.end() && !m["IndustryId"].empty()) {
      industryId = make_shared<long>(boost::any_cast<long>(m["IndustryId"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("Readonly") != m.end() && !m["Readonly"].empty()) {
      readonly = make_shared<bool>(boost::any_cast<bool>(m["Readonly"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~QueryAppInfoResponseBodyAppInfo() = default;
};
class QueryAppInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryAppInfoResponseBodyAppInfo> appInfo{};
  shared_ptr<string> requestId{};

  QueryAppInfoResponseBody() {}

  explicit QueryAppInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInfo) {
      res["AppInfo"] = appInfo ? boost::any(appInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInfo") != m.end() && !m["AppInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppInfo"].type()) {
        QueryAppInfoResponseBodyAppInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppInfo"]));
        appInfo = make_shared<QueryAppInfoResponseBodyAppInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryAppInfoResponseBody() = default;
};
class QueryAppInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAppInfoResponseBody> body{};

  QueryAppInfoResponse() {}

  explicit QueryAppInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAppInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAppInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAppInfoResponse() = default;
};
class QueryAppSecurityInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};

  QueryAppSecurityInfoRequest() {}

  explicit QueryAppSecurityInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~QueryAppSecurityInfoRequest() = default;
};
class QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig : public Darabonba::Model {
public:
  shared_ptr<string> tlogRsaSecret{};

  QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig() {}

  explicit QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tlogRsaSecret) {
      res["TlogRsaSecret"] = boost::any(*tlogRsaSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TlogRsaSecret") != m.end() && !m["TlogRsaSecret"].empty()) {
      tlogRsaSecret = make_shared<string>(boost::any_cast<string>(m["TlogRsaSecret"]));
    }
  }


  virtual ~QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig() = default;
};
class QueryAppSecurityInfoResponseBodyAppSecurityInfo : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> appSecret{};
  shared_ptr<QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig> extConfig{};

  QueryAppSecurityInfoResponseBodyAppSecurityInfo() {}

  explicit QueryAppSecurityInfoResponseBodyAppSecurityInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appSecret) {
      res["AppSecret"] = boost::any(*appSecret);
    }
    if (extConfig) {
      res["ExtConfig"] = extConfig ? boost::any(extConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["AppSecret"]));
    }
    if (m.find("ExtConfig") != m.end() && !m["ExtConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtConfig"].type()) {
        QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtConfig"]));
        extConfig = make_shared<QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig>(model1);
      }
    }
  }


  virtual ~QueryAppSecurityInfoResponseBodyAppSecurityInfo() = default;
};
class QueryAppSecurityInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryAppSecurityInfoResponseBodyAppSecurityInfo> appSecurityInfo{};
  shared_ptr<string> requestId{};

  QueryAppSecurityInfoResponseBody() {}

  explicit QueryAppSecurityInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appSecurityInfo) {
      res["AppSecurityInfo"] = appSecurityInfo ? boost::any(appSecurityInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppSecurityInfo") != m.end() && !m["AppSecurityInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppSecurityInfo"].type()) {
        QueryAppSecurityInfoResponseBodyAppSecurityInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppSecurityInfo"]));
        appSecurityInfo = make_shared<QueryAppSecurityInfoResponseBodyAppSecurityInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryAppSecurityInfoResponseBody() = default;
};
class QueryAppSecurityInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAppSecurityInfoResponseBody> body{};

  QueryAppSecurityInfoResponse() {}

  explicit QueryAppSecurityInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAppSecurityInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAppSecurityInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAppSecurityInfoResponse() = default;
};
class QueryProductInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> productId{};

  QueryProductInfoRequest() {}

  explicit QueryProductInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
  }


  virtual ~QueryProductInfoRequest() = default;
};
class QueryProductInfoResponseBodyProductInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodedIcon{};
  shared_ptr<string> iconName{};
  shared_ptr<long> industryId{};
  shared_ptr<string> name{};
  shared_ptr<bool> readonly{};

  QueryProductInfoResponseBodyProductInfo() {}

  explicit QueryProductInfoResponseBodyProductInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodedIcon) {
      res["EncodedIcon"] = boost::any(*encodedIcon);
    }
    if (iconName) {
      res["IconName"] = boost::any(*iconName);
    }
    if (industryId) {
      res["IndustryId"] = boost::any(*industryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (readonly) {
      res["Readonly"] = boost::any(*readonly);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodedIcon") != m.end() && !m["EncodedIcon"].empty()) {
      encodedIcon = make_shared<string>(boost::any_cast<string>(m["EncodedIcon"]));
    }
    if (m.find("IconName") != m.end() && !m["IconName"].empty()) {
      iconName = make_shared<string>(boost::any_cast<string>(m["IconName"]));
    }
    if (m.find("IndustryId") != m.end() && !m["IndustryId"].empty()) {
      industryId = make_shared<long>(boost::any_cast<long>(m["IndustryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Readonly") != m.end() && !m["Readonly"].empty()) {
      readonly = make_shared<bool>(boost::any_cast<bool>(m["Readonly"]));
    }
  }


  virtual ~QueryProductInfoResponseBodyProductInfo() = default;
};
class QueryProductInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryProductInfoResponseBodyProductInfo> productInfo{};
  shared_ptr<string> requestId{};

  QueryProductInfoResponseBody() {}

  explicit QueryProductInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productInfo) {
      res["ProductInfo"] = productInfo ? boost::any(productInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductInfo") != m.end() && !m["ProductInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductInfo"].type()) {
        QueryProductInfoResponseBodyProductInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductInfo"]));
        productInfo = make_shared<QueryProductInfoResponseBodyProductInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryProductInfoResponseBody() = default;
};
class QueryProductInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryProductInfoResponseBody> body{};

  QueryProductInfoResponse() {}

  explicit QueryProductInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryProductInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryProductInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryProductInfoResponse() = default;
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
  CreateAppResponse createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppResponse createApp(shared_ptr<CreateAppRequest> request);
  CreateProductResponse createProductWithOptions(shared_ptr<CreateProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProductResponse createProduct(shared_ptr<CreateProductRequest> request);
  DeleteAppResponse deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppResponse deleteApp(shared_ptr<DeleteAppRequest> request);
  DeleteProductResponse deleteProductWithOptions(shared_ptr<DeleteProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProductResponse deleteProduct(shared_ptr<DeleteProductRequest> request);
  DescribeDashboardResponse describeDashboardWithOptions(shared_ptr<DescribeDashboardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDashboardResponse describeDashboard(shared_ptr<DescribeDashboardRequest> request);
  ListAppsResponse listAppsWithOptions(shared_ptr<ListAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppsResponse listApps(shared_ptr<ListAppsRequest> request);
  ListProductsResponse listProductsWithOptions(shared_ptr<ListProductsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductsResponse listProducts(shared_ptr<ListProductsRequest> request);
  ModifyAppResponse modifyAppWithOptions(shared_ptr<ModifyAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppResponse modifyApp(shared_ptr<ModifyAppRequest> request);
  ModifyProductResponse modifyProductWithOptions(shared_ptr<ModifyProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyProductResponse modifyProduct(shared_ptr<ModifyProductRequest> request);
  OpenEmasServiceResponse openEmasServiceWithOptions(shared_ptr<OpenEmasServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenEmasServiceResponse openEmasService(shared_ptr<OpenEmasServiceRequest> request);
  QueryAppInfoResponse queryAppInfoWithOptions(shared_ptr<QueryAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAppInfoResponse queryAppInfo(shared_ptr<QueryAppInfoRequest> request);
  QueryAppSecurityInfoResponse queryAppSecurityInfoWithOptions(shared_ptr<QueryAppSecurityInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAppSecurityInfoResponse queryAppSecurityInfo(shared_ptr<QueryAppSecurityInfoRequest> request);
  QueryProductInfoResponse queryProductInfoWithOptions(shared_ptr<QueryProductInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryProductInfoResponse queryProductInfo(shared_ptr<QueryProductInfoRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Mhub20170825

#endif
