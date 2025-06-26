// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_OMS20160615_H_
#define ALIBABACLOUD_OMS20160615_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Oms20160615 {
class DeleteDomainPartRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> part{};

  DeleteDomainPartRequest() {}

  explicit DeleteDomainPartRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (part) {
      res["Part"] = boost::any(*part);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("Part") != m.end() && !m["Part"].empty()) {
      part = make_shared<string>(boost::any_cast<string>(m["Part"]));
    }
  }


  virtual ~DeleteDomainPartRequest() = default;
};
class DeleteDomainPartResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> requestId{};

  DeleteDomainPartResponseBody() {}

  explicit DeleteDomainPartResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDomainPartResponseBody() = default;
};
class DeleteDomainPartResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDomainPartResponseBody> body{};

  DeleteDomainPartResponse() {}

  explicit DeleteDomainPartResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDomainPartResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDomainPartResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDomainPartResponse() = default;
};
class DeleteDomainPartByProxyRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> part{};

  DeleteDomainPartByProxyRequest() {}

  explicit DeleteDomainPartByProxyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (part) {
      res["Part"] = boost::any(*part);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("Part") != m.end() && !m["Part"].empty()) {
      part = make_shared<string>(boost::any_cast<string>(m["Part"]));
    }
  }


  virtual ~DeleteDomainPartByProxyRequest() = default;
};
class DeleteDomainPartByProxyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> requestId{};

  DeleteDomainPartByProxyResponseBody() {}

  explicit DeleteDomainPartByProxyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDomainPartByProxyResponseBody() = default;
};
class DeleteDomainPartByProxyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDomainPartByProxyResponseBody> body{};

  DeleteDomainPartByProxyResponse() {}

  explicit DeleteDomainPartByProxyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDomainPartByProxyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDomainPartByProxyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDomainPartByProxyResponse() = default;
};
class DeleteMeasureDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<bool> compressed{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> filter{};

  DeleteMeasureDataRequest() {}

  explicit DeleteMeasureDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (compressed) {
      res["Compressed"] = boost::any(*compressed);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Compressed") != m.end() && !m["Compressed"].empty()) {
      compressed = make_shared<bool>(boost::any_cast<bool>(m["Compressed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
  }


  virtual ~DeleteMeasureDataRequest() = default;
};
class DeleteMeasureDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DeleteMeasureDataResponseBody() {}

  explicit DeleteMeasureDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DeleteMeasureDataResponseBody() = default;
};
class DeleteMeasureDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMeasureDataResponseBody> body{};

  DeleteMeasureDataResponse() {}

  explicit DeleteMeasureDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMeasureDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMeasureDataResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMeasureDataResponse() = default;
};
class GetDomainPartRequest : public Darabonba::Model {
public:
  shared_ptr<bool> compressEnable{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> part{};

  GetDomainPartRequest() {}

  explicit GetDomainPartRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compressEnable) {
      res["CompressEnable"] = boost::any(*compressEnable);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (part) {
      res["Part"] = boost::any(*part);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompressEnable") != m.end() && !m["CompressEnable"].empty()) {
      compressEnable = make_shared<bool>(boost::any_cast<bool>(m["CompressEnable"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("Part") != m.end() && !m["Part"].empty()) {
      part = make_shared<string>(boost::any_cast<string>(m["Part"]));
    }
  }


  virtual ~GetDomainPartRequest() = default;
};
class GetDomainPartResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> compressed{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> requestId{};

  GetDomainPartResponseBody() {}

  explicit GetDomainPartResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compressed) {
      res["Compressed"] = boost::any(*compressed);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compressed") != m.end() && !m["Compressed"].empty()) {
      compressed = make_shared<bool>(boost::any_cast<bool>(m["Compressed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDomainPartResponseBody() = default;
};
class GetDomainPartResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDomainPartResponseBody> body{};

  GetDomainPartResponse() {}

  explicit GetDomainPartResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDomainPartResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDomainPartResponseBody>(model1);
      }
    }
  }


  virtual ~GetDomainPartResponse() = default;
};
class GetDomainPartByProxyRequest : public Darabonba::Model {
public:
  shared_ptr<bool> compressEnable{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> part{};

  GetDomainPartByProxyRequest() {}

  explicit GetDomainPartByProxyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compressEnable) {
      res["CompressEnable"] = boost::any(*compressEnable);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (part) {
      res["Part"] = boost::any(*part);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompressEnable") != m.end() && !m["CompressEnable"].empty()) {
      compressEnable = make_shared<bool>(boost::any_cast<bool>(m["CompressEnable"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("Part") != m.end() && !m["Part"].empty()) {
      part = make_shared<string>(boost::any_cast<string>(m["Part"]));
    }
  }


  virtual ~GetDomainPartByProxyRequest() = default;
};
class GetDomainPartByProxyResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> compressed{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> requestId{};

  GetDomainPartByProxyResponseBody() {}

  explicit GetDomainPartByProxyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compressed) {
      res["Compressed"] = boost::any(*compressed);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compressed") != m.end() && !m["Compressed"].empty()) {
      compressed = make_shared<bool>(boost::any_cast<bool>(m["Compressed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDomainPartByProxyResponseBody() = default;
};
class GetDomainPartByProxyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDomainPartByProxyResponseBody> body{};

  GetDomainPartByProxyResponse() {}

  explicit GetDomainPartByProxyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDomainPartByProxyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDomainPartByProxyResponseBody>(model1);
      }
    }
  }


  virtual ~GetDomainPartByProxyResponse() = default;
};
class GetIncrementMeasureDataByProxyRequest : public Darabonba::Model {
public:
  shared_ptr<bool> compressEnable{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<long> modifyEndTime{};
  shared_ptr<long> modifyStartTime{};
  shared_ptr<string> rowKeyMapStr{};

  GetIncrementMeasureDataByProxyRequest() {}

  explicit GetIncrementMeasureDataByProxyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compressEnable) {
      res["CompressEnable"] = boost::any(*compressEnable);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (modifyEndTime) {
      res["ModifyEndTime"] = boost::any(*modifyEndTime);
    }
    if (modifyStartTime) {
      res["ModifyStartTime"] = boost::any(*modifyStartTime);
    }
    if (rowKeyMapStr) {
      res["RowKeyMapStr"] = boost::any(*rowKeyMapStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompressEnable") != m.end() && !m["CompressEnable"].empty()) {
      compressEnable = make_shared<bool>(boost::any_cast<bool>(m["CompressEnable"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("ModifyEndTime") != m.end() && !m["ModifyEndTime"].empty()) {
      modifyEndTime = make_shared<long>(boost::any_cast<long>(m["ModifyEndTime"]));
    }
    if (m.find("ModifyStartTime") != m.end() && !m["ModifyStartTime"].empty()) {
      modifyStartTime = make_shared<long>(boost::any_cast<long>(m["ModifyStartTime"]));
    }
    if (m.find("RowKeyMapStr") != m.end() && !m["RowKeyMapStr"].empty()) {
      rowKeyMapStr = make_shared<string>(boost::any_cast<string>(m["RowKeyMapStr"]));
    }
  }


  virtual ~GetIncrementMeasureDataByProxyRequest() = default;
};
class GetIncrementMeasureDataByProxyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> compressed{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> requestId{};

  GetIncrementMeasureDataByProxyResponseBody() {}

  explicit GetIncrementMeasureDataByProxyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compressed) {
      res["Compressed"] = boost::any(*compressed);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compressed") != m.end() && !m["Compressed"].empty()) {
      compressed = make_shared<string>(boost::any_cast<string>(m["Compressed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetIncrementMeasureDataByProxyResponseBody() = default;
};
class GetIncrementMeasureDataByProxyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetIncrementMeasureDataByProxyResponseBody> body{};

  GetIncrementMeasureDataByProxyResponse() {}

  explicit GetIncrementMeasureDataByProxyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetIncrementMeasureDataByProxyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIncrementMeasureDataByProxyResponseBody>(model1);
      }
    }
  }


  virtual ~GetIncrementMeasureDataByProxyResponse() = default;
};
class GetMeasureDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<bool> compressEnable{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> filter{};
  shared_ptr<long> maxResult{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> queryField{};

  GetMeasureDataRequest() {}

  explicit GetMeasureDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (compressEnable) {
      res["CompressEnable"] = boost::any(*compressEnable);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (maxResult) {
      res["MaxResult"] = boost::any(*maxResult);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (queryField) {
      res["QueryField"] = boost::any(*queryField);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("CompressEnable") != m.end() && !m["CompressEnable"].empty()) {
      compressEnable = make_shared<bool>(boost::any_cast<bool>(m["CompressEnable"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("MaxResult") != m.end() && !m["MaxResult"].empty()) {
      maxResult = make_shared<long>(boost::any_cast<long>(m["MaxResult"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("QueryField") != m.end() && !m["QueryField"].empty()) {
      queryField = make_shared<string>(boost::any_cast<string>(m["QueryField"]));
    }
  }


  virtual ~GetMeasureDataRequest() = default;
};
class GetMeasureDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<bool> compressed{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  GetMeasureDataResponseBody() {}

  explicit GetMeasureDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (compressed) {
      res["Compressed"] = boost::any(*compressed);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Compressed") != m.end() && !m["Compressed"].empty()) {
      compressed = make_shared<bool>(boost::any_cast<bool>(m["Compressed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMeasureDataResponseBody() = default;
};
class GetMeasureDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMeasureDataResponseBody> body{};

  GetMeasureDataResponse() {}

  explicit GetMeasureDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMeasureDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMeasureDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetMeasureDataResponse() = default;
};
class GetReadyFlagRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<bool> compressEnable{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> filter{};
  shared_ptr<long> maxResult{};
  shared_ptr<string> nextToken{};

  GetReadyFlagRequest() {}

  explicit GetReadyFlagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (compressEnable) {
      res["CompressEnable"] = boost::any(*compressEnable);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (maxResult) {
      res["MaxResult"] = boost::any(*maxResult);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("CompressEnable") != m.end() && !m["CompressEnable"].empty()) {
      compressEnable = make_shared<bool>(boost::any_cast<bool>(m["CompressEnable"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("MaxResult") != m.end() && !m["MaxResult"].empty()) {
      maxResult = make_shared<long>(boost::any_cast<long>(m["MaxResult"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~GetReadyFlagRequest() = default;
};
class GetReadyFlagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<bool> compressed{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  GetReadyFlagResponseBody() {}

  explicit GetReadyFlagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (compressed) {
      res["Compressed"] = boost::any(*compressed);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Compressed") != m.end() && !m["Compressed"].empty()) {
      compressed = make_shared<bool>(boost::any_cast<bool>(m["Compressed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetReadyFlagResponseBody() = default;
};
class GetReadyFlagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetReadyFlagResponseBody> body{};

  GetReadyFlagResponse() {}

  explicit GetReadyFlagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetReadyFlagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetReadyFlagResponseBody>(model1);
      }
    }
  }


  virtual ~GetReadyFlagResponse() = default;
};
class GetReadyFlagByProxyRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<bool> compressEnable{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> filter{};
  shared_ptr<long> maxResult{};
  shared_ptr<string> nextToken{};

  GetReadyFlagByProxyRequest() {}

  explicit GetReadyFlagByProxyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (compressEnable) {
      res["CompressEnable"] = boost::any(*compressEnable);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (maxResult) {
      res["MaxResult"] = boost::any(*maxResult);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("CompressEnable") != m.end() && !m["CompressEnable"].empty()) {
      compressEnable = make_shared<bool>(boost::any_cast<bool>(m["CompressEnable"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("MaxResult") != m.end() && !m["MaxResult"].empty()) {
      maxResult = make_shared<long>(boost::any_cast<long>(m["MaxResult"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~GetReadyFlagByProxyRequest() = default;
};
class GetReadyFlagByProxyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<bool> compressed{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  GetReadyFlagByProxyResponseBody() {}

  explicit GetReadyFlagByProxyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (compressed) {
      res["Compressed"] = boost::any(*compressed);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Compressed") != m.end() && !m["Compressed"].empty()) {
      compressed = make_shared<bool>(boost::any_cast<bool>(m["Compressed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetReadyFlagByProxyResponseBody() = default;
};
class GetReadyFlagByProxyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetReadyFlagByProxyResponseBody> body{};

  GetReadyFlagByProxyResponse() {}

  explicit GetReadyFlagByProxyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetReadyFlagByProxyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetReadyFlagByProxyResponseBody>(model1);
      }
    }
  }


  virtual ~GetReadyFlagByProxyResponse() = default;
};
class PutDomainPartRequest : public Darabonba::Model {
public:
  shared_ptr<bool> compressed{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};

  PutDomainPartRequest() {}

  explicit PutDomainPartRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compressed) {
      res["Compressed"] = boost::any(*compressed);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compressed") != m.end() && !m["Compressed"].empty()) {
      compressed = make_shared<bool>(boost::any_cast<bool>(m["Compressed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
  }


  virtual ~PutDomainPartRequest() = default;
};
class PutDomainPartResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> requestId{};

  PutDomainPartResponseBody() {}

  explicit PutDomainPartResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PutDomainPartResponseBody() = default;
};
class PutDomainPartResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutDomainPartResponseBody> body{};

  PutDomainPartResponse() {}

  explicit PutDomainPartResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutDomainPartResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutDomainPartResponseBody>(model1);
      }
    }
  }


  virtual ~PutDomainPartResponse() = default;
};
class PutDomainPartByProxyRequest : public Darabonba::Model {
public:
  shared_ptr<bool> compressed{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};

  PutDomainPartByProxyRequest() {}

  explicit PutDomainPartByProxyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compressed) {
      res["Compressed"] = boost::any(*compressed);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compressed") != m.end() && !m["Compressed"].empty()) {
      compressed = make_shared<bool>(boost::any_cast<bool>(m["Compressed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
  }


  virtual ~PutDomainPartByProxyRequest() = default;
};
class PutDomainPartByProxyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> requestId{};

  PutDomainPartByProxyResponseBody() {}

  explicit PutDomainPartByProxyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PutDomainPartByProxyResponseBody() = default;
};
class PutDomainPartByProxyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutDomainPartByProxyResponseBody> body{};

  PutDomainPartByProxyResponse() {}

  explicit PutDomainPartByProxyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutDomainPartByProxyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutDomainPartByProxyResponseBody>(model1);
      }
    }
  }


  virtual ~PutDomainPartByProxyResponse() = default;
};
class PutMeasureDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<bool> compressed{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> filter{};
  shared_ptr<string> sourceRequestId{};

  PutMeasureDataRequest() {}

  explicit PutMeasureDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (compressed) {
      res["Compressed"] = boost::any(*compressed);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (sourceRequestId) {
      res["SourceRequestId"] = boost::any(*sourceRequestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Compressed") != m.end() && !m["Compressed"].empty()) {
      compressed = make_shared<bool>(boost::any_cast<bool>(m["Compressed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("SourceRequestId") != m.end() && !m["SourceRequestId"].empty()) {
      sourceRequestId = make_shared<string>(boost::any_cast<string>(m["SourceRequestId"]));
    }
  }


  virtual ~PutMeasureDataRequest() = default;
};
class PutMeasureDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourceRequestId{};

  PutMeasureDataResponseBody() {}

  explicit PutMeasureDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceRequestId) {
      res["SourceRequestId"] = boost::any(*sourceRequestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceRequestId") != m.end() && !m["SourceRequestId"].empty()) {
      sourceRequestId = make_shared<string>(boost::any_cast<string>(m["SourceRequestId"]));
    }
  }


  virtual ~PutMeasureDataResponseBody() = default;
};
class PutMeasureDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutMeasureDataResponseBody> body{};

  PutMeasureDataResponse() {}

  explicit PutMeasureDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutMeasureDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutMeasureDataResponseBody>(model1);
      }
    }
  }


  virtual ~PutMeasureDataResponse() = default;
};
class PutMeasureDataByProxyRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<bool> compressed{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> filter{};

  PutMeasureDataByProxyRequest() {}

  explicit PutMeasureDataByProxyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (compressed) {
      res["Compressed"] = boost::any(*compressed);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Compressed") != m.end() && !m["Compressed"].empty()) {
      compressed = make_shared<bool>(boost::any_cast<bool>(m["Compressed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
  }


  virtual ~PutMeasureDataByProxyRequest() = default;
};
class PutMeasureDataByProxyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> requestId{};

  PutMeasureDataByProxyResponseBody() {}

  explicit PutMeasureDataByProxyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PutMeasureDataByProxyResponseBody() = default;
};
class PutMeasureDataByProxyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutMeasureDataByProxyResponseBody> body{};

  PutMeasureDataByProxyResponse() {}

  explicit PutMeasureDataByProxyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutMeasureDataByProxyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutMeasureDataByProxyResponseBody>(model1);
      }
    }
  }


  virtual ~PutMeasureDataByProxyResponse() = default;
};
class PutReadyFlagRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<bool> compressed{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> sourceRequestId{};

  PutReadyFlagRequest() {}

  explicit PutReadyFlagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (compressed) {
      res["Compressed"] = boost::any(*compressed);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (sourceRequestId) {
      res["SourceRequestId"] = boost::any(*sourceRequestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Compressed") != m.end() && !m["Compressed"].empty()) {
      compressed = make_shared<bool>(boost::any_cast<bool>(m["Compressed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("SourceRequestId") != m.end() && !m["SourceRequestId"].empty()) {
      sourceRequestId = make_shared<string>(boost::any_cast<string>(m["SourceRequestId"]));
    }
  }


  virtual ~PutReadyFlagRequest() = default;
};
class PutReadyFlagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourceRequestId{};

  PutReadyFlagResponseBody() {}

  explicit PutReadyFlagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceRequestId) {
      res["SourceRequestId"] = boost::any(*sourceRequestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceRequestId") != m.end() && !m["SourceRequestId"].empty()) {
      sourceRequestId = make_shared<string>(boost::any_cast<string>(m["SourceRequestId"]));
    }
  }


  virtual ~PutReadyFlagResponseBody() = default;
};
class PutReadyFlagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutReadyFlagResponseBody> body{};

  PutReadyFlagResponse() {}

  explicit PutReadyFlagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutReadyFlagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutReadyFlagResponseBody>(model1);
      }
    }
  }


  virtual ~PutReadyFlagResponse() = default;
};
class PutReadyFlagByProxyRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<bool> compressed{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};

  PutReadyFlagByProxyRequest() {}

  explicit PutReadyFlagByProxyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (compressed) {
      res["Compressed"] = boost::any(*compressed);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Compressed") != m.end() && !m["Compressed"].empty()) {
      compressed = make_shared<bool>(boost::any_cast<bool>(m["Compressed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
  }


  virtual ~PutReadyFlagByProxyRequest() = default;
};
class PutReadyFlagByProxyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<string> dataType{};
  shared_ptr<string> domainCode{};
  shared_ptr<string> requestId{};

  PutReadyFlagByProxyResponseBody() {}

  explicit PutReadyFlagByProxyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (domainCode) {
      res["DomainCode"] = boost::any(*domainCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DomainCode") != m.end() && !m["DomainCode"].empty()) {
      domainCode = make_shared<string>(boost::any_cast<string>(m["DomainCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PutReadyFlagByProxyResponseBody() = default;
};
class PutReadyFlagByProxyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutReadyFlagByProxyResponseBody> body{};

  PutReadyFlagByProxyResponse() {}

  explicit PutReadyFlagByProxyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutReadyFlagByProxyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutReadyFlagByProxyResponseBody>(model1);
      }
    }
  }


  virtual ~PutReadyFlagByProxyResponse() = default;
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
  DeleteDomainPartResponse deleteDomainPartWithOptions(shared_ptr<DeleteDomainPartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainPartResponse deleteDomainPart(shared_ptr<DeleteDomainPartRequest> request);
  DeleteDomainPartByProxyResponse deleteDomainPartByProxyWithOptions(shared_ptr<DeleteDomainPartByProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainPartByProxyResponse deleteDomainPartByProxy(shared_ptr<DeleteDomainPartByProxyRequest> request);
  DeleteMeasureDataResponse deleteMeasureDataWithOptions(shared_ptr<DeleteMeasureDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMeasureDataResponse deleteMeasureData(shared_ptr<DeleteMeasureDataRequest> request);
  GetDomainPartResponse getDomainPartWithOptions(shared_ptr<GetDomainPartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDomainPartResponse getDomainPart(shared_ptr<GetDomainPartRequest> request);
  GetDomainPartByProxyResponse getDomainPartByProxyWithOptions(shared_ptr<GetDomainPartByProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDomainPartByProxyResponse getDomainPartByProxy(shared_ptr<GetDomainPartByProxyRequest> request);
  GetIncrementMeasureDataByProxyResponse getIncrementMeasureDataByProxyWithOptions(shared_ptr<GetIncrementMeasureDataByProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIncrementMeasureDataByProxyResponse getIncrementMeasureDataByProxy(shared_ptr<GetIncrementMeasureDataByProxyRequest> request);
  GetMeasureDataResponse getMeasureDataWithOptions(shared_ptr<GetMeasureDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMeasureDataResponse getMeasureData(shared_ptr<GetMeasureDataRequest> request);
  GetReadyFlagResponse getReadyFlagWithOptions(shared_ptr<GetReadyFlagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetReadyFlagResponse getReadyFlag(shared_ptr<GetReadyFlagRequest> request);
  GetReadyFlagByProxyResponse getReadyFlagByProxyWithOptions(shared_ptr<GetReadyFlagByProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetReadyFlagByProxyResponse getReadyFlagByProxy(shared_ptr<GetReadyFlagByProxyRequest> request);
  PutDomainPartResponse putDomainPartWithOptions(shared_ptr<PutDomainPartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutDomainPartResponse putDomainPart(shared_ptr<PutDomainPartRequest> request);
  PutDomainPartByProxyResponse putDomainPartByProxyWithOptions(shared_ptr<PutDomainPartByProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutDomainPartByProxyResponse putDomainPartByProxy(shared_ptr<PutDomainPartByProxyRequest> request);
  PutMeasureDataResponse putMeasureDataWithOptions(shared_ptr<PutMeasureDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutMeasureDataResponse putMeasureData(shared_ptr<PutMeasureDataRequest> request);
  PutMeasureDataByProxyResponse putMeasureDataByProxyWithOptions(shared_ptr<PutMeasureDataByProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutMeasureDataByProxyResponse putMeasureDataByProxy(shared_ptr<PutMeasureDataByProxyRequest> request);
  PutReadyFlagResponse putReadyFlagWithOptions(shared_ptr<PutReadyFlagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutReadyFlagResponse putReadyFlag(shared_ptr<PutReadyFlagRequest> request);
  PutReadyFlagByProxyResponse putReadyFlagByProxyWithOptions(shared_ptr<PutReadyFlagByProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutReadyFlagByProxyResponse putReadyFlagByProxy(shared_ptr<PutReadyFlagByProxyRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Oms20160615

#endif
