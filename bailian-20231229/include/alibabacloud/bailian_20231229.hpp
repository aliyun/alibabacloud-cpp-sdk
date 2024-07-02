// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BAILIAN20231229_H_
#define ALIBABACLOUD_BAILIAN20231229_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Bailian20231229 {
class AddFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> leaseId{};
  shared_ptr<string> parser{};

  AddFileRequest() {}

  explicit AddFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (leaseId) {
      res["LeaseId"] = boost::any(*leaseId);
    }
    if (parser) {
      res["Parser"] = boost::any(*parser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("LeaseId") != m.end() && !m["LeaseId"].empty()) {
      leaseId = make_shared<string>(boost::any_cast<string>(m["LeaseId"]));
    }
    if (m.find("Parser") != m.end() && !m["Parser"].empty()) {
      parser = make_shared<string>(boost::any_cast<string>(m["Parser"]));
    }
  }


  virtual ~AddFileRequest() = default;
};
class AddFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> fileId{};
  shared_ptr<string> parser{};

  AddFileResponseBodyData() {}

  explicit AddFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (parser) {
      res["Parser"] = boost::any(*parser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("Parser") != m.end() && !m["Parser"].empty()) {
      parser = make_shared<string>(boost::any_cast<string>(m["Parser"]));
    }
  }


  virtual ~AddFileResponseBodyData() = default;
};
class AddFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<AddFileResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> success{};

  AddFileResponseBody() {}

  explicit AddFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        AddFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddFileResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~AddFileResponseBody() = default;
};
class AddFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddFileResponseBody> body{};

  AddFileResponse() {}

  explicit AddFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFileResponseBody>(model1);
      }
    }
  }


  virtual ~AddFileResponse() = default;
};
class ApplyFileUploadLeaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> md5{};
  shared_ptr<string> sizeInBytes{};

  ApplyFileUploadLeaseRequest() {}

  explicit ApplyFileUploadLeaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (sizeInBytes) {
      res["SizeInBytes"] = boost::any(*sizeInBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("SizeInBytes") != m.end() && !m["SizeInBytes"].empty()) {
      sizeInBytes = make_shared<string>(boost::any_cast<string>(m["SizeInBytes"]));
    }
  }


  virtual ~ApplyFileUploadLeaseRequest() = default;
};
class ApplyFileUploadLeaseResponseBodyDataParam : public Darabonba::Model {
public:
  shared_ptr<boost::any> headers{};
  shared_ptr<string> method{};
  shared_ptr<string> url{};

  ApplyFileUploadLeaseResponseBodyDataParam() {}

  explicit ApplyFileUploadLeaseResponseBodyDataParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["Headers"] = boost::any(*headers);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Headers") != m.end() && !m["Headers"].empty()) {
      headers = make_shared<boost::any>(boost::any_cast<boost::any>(m["Headers"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ApplyFileUploadLeaseResponseBodyDataParam() = default;
};
class ApplyFileUploadLeaseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> fileUploadLeaseId{};
  shared_ptr<ApplyFileUploadLeaseResponseBodyDataParam> param{};
  shared_ptr<string> type{};

  ApplyFileUploadLeaseResponseBodyData() {}

  explicit ApplyFileUploadLeaseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileUploadLeaseId) {
      res["FileUploadLeaseId"] = boost::any(*fileUploadLeaseId);
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
    if (m.find("FileUploadLeaseId") != m.end() && !m["FileUploadLeaseId"].empty()) {
      fileUploadLeaseId = make_shared<string>(boost::any_cast<string>(m["FileUploadLeaseId"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      if (typeid(map<string, boost::any>) == m["Param"].type()) {
        ApplyFileUploadLeaseResponseBodyDataParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Param"]));
        param = make_shared<ApplyFileUploadLeaseResponseBodyDataParam>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ApplyFileUploadLeaseResponseBodyData() = default;
};
class ApplyFileUploadLeaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ApplyFileUploadLeaseResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  ApplyFileUploadLeaseResponseBody() {}

  explicit ApplyFileUploadLeaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        ApplyFileUploadLeaseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ApplyFileUploadLeaseResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ApplyFileUploadLeaseResponseBody() = default;
};
class ApplyFileUploadLeaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyFileUploadLeaseResponseBody> body{};

  ApplyFileUploadLeaseResponse() {}

  explicit ApplyFileUploadLeaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyFileUploadLeaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyFileUploadLeaseResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyFileUploadLeaseResponse() = default;
};
class DescribeFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> fileId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<string> parser{};
  shared_ptr<long> sizeInBytes{};
  shared_ptr<string> status{};

  DescribeFileResponseBodyData() {}

  explicit DescribeFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (parser) {
      res["Parser"] = boost::any(*parser);
    }
    if (sizeInBytes) {
      res["SizeInBytes"] = boost::any(*sizeInBytes);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Parser") != m.end() && !m["Parser"].empty()) {
      parser = make_shared<string>(boost::any_cast<string>(m["Parser"]));
    }
    if (m.find("SizeInBytes") != m.end() && !m["SizeInBytes"].empty()) {
      sizeInBytes = make_shared<long>(boost::any_cast<long>(m["SizeInBytes"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeFileResponseBodyData() = default;
};
class DescribeFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeFileResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  DescribeFileResponseBody() {}

  explicit DescribeFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        DescribeFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeFileResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeFileResponseBody() = default;
};
class DescribeFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFileResponseBody> body{};

  DescribeFileResponse() {}

  explicit DescribeFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFileResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFileResponse() = default;
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
  AddFileResponse addFileWithOptions(shared_ptr<string> WorkspaceId,
                                     shared_ptr<AddFileRequest> request,
                                     shared_ptr<map<string, string>> headers,
                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFileResponse addFile(shared_ptr<string> WorkspaceId, shared_ptr<AddFileRequest> request);
  ApplyFileUploadLeaseResponse applyFileUploadLeaseWithOptions(shared_ptr<string> CategoryId,
                                                               shared_ptr<string> WorkspaceId,
                                                               shared_ptr<ApplyFileUploadLeaseRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyFileUploadLeaseResponse applyFileUploadLease(shared_ptr<string> CategoryId, shared_ptr<string> WorkspaceId, shared_ptr<ApplyFileUploadLeaseRequest> request);
  DescribeFileResponse describeFileWithOptions(shared_ptr<string> WorkspaceId,
                                               shared_ptr<string> FileId,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFileResponse describeFile(shared_ptr<string> WorkspaceId, shared_ptr<string> FileId);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Bailian20231229

#endif
