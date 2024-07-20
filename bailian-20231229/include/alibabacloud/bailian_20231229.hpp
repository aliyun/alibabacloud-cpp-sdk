// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BAILIAN20231229_H_
#define ALIBABACLOUD_BAILIAN20231229_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

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
class CreateIndexRequestColumns : public Darabonba::Model {
public:
  shared_ptr<string> column{};
  shared_ptr<bool> isRecall{};
  shared_ptr<bool> isSearch{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateIndexRequestColumns() {}

  explicit CreateIndexRequestColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      res["Column"] = boost::any(*column);
    }
    if (isRecall) {
      res["IsRecall"] = boost::any(*isRecall);
    }
    if (isSearch) {
      res["IsSearch"] = boost::any(*isSearch);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["Column"]));
    }
    if (m.find("IsRecall") != m.end() && !m["IsRecall"].empty()) {
      isRecall = make_shared<bool>(boost::any_cast<bool>(m["IsRecall"]));
    }
    if (m.find("IsSearch") != m.end() && !m["IsSearch"].empty()) {
      isSearch = make_shared<bool>(boost::any_cast<bool>(m["IsSearch"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateIndexRequestColumns() = default;
};
class CreateIndexRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categoryIds{};
  shared_ptr<long> chunkSize{};
  shared_ptr<vector<CreateIndexRequestColumns>> columns{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> documentIds{};
  shared_ptr<string> embeddingModelName{};
  shared_ptr<string> name{};
  shared_ptr<long> overlapSize{};
  shared_ptr<double> rerankMinScore{};
  shared_ptr<string> rerankModelName{};
  shared_ptr<string> separator{};
  shared_ptr<string> sinkInstanceId{};
  shared_ptr<string> sinkRegion{};
  shared_ptr<string> sinkType{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> structureType{};

  CreateIndexRequest() {}

  explicit CreateIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryIds) {
      res["CategoryIds"] = boost::any(*categoryIds);
    }
    if (chunkSize) {
      res["ChunkSize"] = boost::any(*chunkSize);
    }
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Columns"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (documentIds) {
      res["DocumentIds"] = boost::any(*documentIds);
    }
    if (embeddingModelName) {
      res["EmbeddingModelName"] = boost::any(*embeddingModelName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (overlapSize) {
      res["OverlapSize"] = boost::any(*overlapSize);
    }
    if (rerankMinScore) {
      res["RerankMinScore"] = boost::any(*rerankMinScore);
    }
    if (rerankModelName) {
      res["RerankModelName"] = boost::any(*rerankModelName);
    }
    if (separator) {
      res["Separator"] = boost::any(*separator);
    }
    if (sinkInstanceId) {
      res["SinkInstanceId"] = boost::any(*sinkInstanceId);
    }
    if (sinkRegion) {
      res["SinkRegion"] = boost::any(*sinkRegion);
    }
    if (sinkType) {
      res["SinkType"] = boost::any(*sinkType);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (structureType) {
      res["StructureType"] = boost::any(*structureType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryIds") != m.end() && !m["CategoryIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CategoryIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CategoryIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categoryIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ChunkSize") != m.end() && !m["ChunkSize"].empty()) {
      chunkSize = make_shared<long>(boost::any_cast<long>(m["ChunkSize"]));
    }
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(vector<boost::any>) == m["Columns"].type()) {
        vector<CreateIndexRequestColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateIndexRequestColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<CreateIndexRequestColumns>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocumentIds") != m.end() && !m["DocumentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DocumentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocumentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      documentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EmbeddingModelName") != m.end() && !m["EmbeddingModelName"].empty()) {
      embeddingModelName = make_shared<string>(boost::any_cast<string>(m["EmbeddingModelName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OverlapSize") != m.end() && !m["OverlapSize"].empty()) {
      overlapSize = make_shared<long>(boost::any_cast<long>(m["OverlapSize"]));
    }
    if (m.find("RerankMinScore") != m.end() && !m["RerankMinScore"].empty()) {
      rerankMinScore = make_shared<double>(boost::any_cast<double>(m["RerankMinScore"]));
    }
    if (m.find("RerankModelName") != m.end() && !m["RerankModelName"].empty()) {
      rerankModelName = make_shared<string>(boost::any_cast<string>(m["RerankModelName"]));
    }
    if (m.find("Separator") != m.end() && !m["Separator"].empty()) {
      separator = make_shared<string>(boost::any_cast<string>(m["Separator"]));
    }
    if (m.find("SinkInstanceId") != m.end() && !m["SinkInstanceId"].empty()) {
      sinkInstanceId = make_shared<string>(boost::any_cast<string>(m["SinkInstanceId"]));
    }
    if (m.find("SinkRegion") != m.end() && !m["SinkRegion"].empty()) {
      sinkRegion = make_shared<string>(boost::any_cast<string>(m["SinkRegion"]));
    }
    if (m.find("SinkType") != m.end() && !m["SinkType"].empty()) {
      sinkType = make_shared<string>(boost::any_cast<string>(m["SinkType"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StructureType") != m.end() && !m["StructureType"].empty()) {
      structureType = make_shared<string>(boost::any_cast<string>(m["StructureType"]));
    }
  }


  virtual ~CreateIndexRequest() = default;
};
class CreateIndexShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryIdsShrink{};
  shared_ptr<long> chunkSize{};
  shared_ptr<string> columnsShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> documentIdsShrink{};
  shared_ptr<string> embeddingModelName{};
  shared_ptr<string> name{};
  shared_ptr<long> overlapSize{};
  shared_ptr<double> rerankMinScore{};
  shared_ptr<string> rerankModelName{};
  shared_ptr<string> separator{};
  shared_ptr<string> sinkInstanceId{};
  shared_ptr<string> sinkRegion{};
  shared_ptr<string> sinkType{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> structureType{};

  CreateIndexShrinkRequest() {}

  explicit CreateIndexShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryIdsShrink) {
      res["CategoryIds"] = boost::any(*categoryIdsShrink);
    }
    if (chunkSize) {
      res["ChunkSize"] = boost::any(*chunkSize);
    }
    if (columnsShrink) {
      res["Columns"] = boost::any(*columnsShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (documentIdsShrink) {
      res["DocumentIds"] = boost::any(*documentIdsShrink);
    }
    if (embeddingModelName) {
      res["EmbeddingModelName"] = boost::any(*embeddingModelName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (overlapSize) {
      res["OverlapSize"] = boost::any(*overlapSize);
    }
    if (rerankMinScore) {
      res["RerankMinScore"] = boost::any(*rerankMinScore);
    }
    if (rerankModelName) {
      res["RerankModelName"] = boost::any(*rerankModelName);
    }
    if (separator) {
      res["Separator"] = boost::any(*separator);
    }
    if (sinkInstanceId) {
      res["SinkInstanceId"] = boost::any(*sinkInstanceId);
    }
    if (sinkRegion) {
      res["SinkRegion"] = boost::any(*sinkRegion);
    }
    if (sinkType) {
      res["SinkType"] = boost::any(*sinkType);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (structureType) {
      res["StructureType"] = boost::any(*structureType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryIds") != m.end() && !m["CategoryIds"].empty()) {
      categoryIdsShrink = make_shared<string>(boost::any_cast<string>(m["CategoryIds"]));
    }
    if (m.find("ChunkSize") != m.end() && !m["ChunkSize"].empty()) {
      chunkSize = make_shared<long>(boost::any_cast<long>(m["ChunkSize"]));
    }
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      columnsShrink = make_shared<string>(boost::any_cast<string>(m["Columns"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocumentIds") != m.end() && !m["DocumentIds"].empty()) {
      documentIdsShrink = make_shared<string>(boost::any_cast<string>(m["DocumentIds"]));
    }
    if (m.find("EmbeddingModelName") != m.end() && !m["EmbeddingModelName"].empty()) {
      embeddingModelName = make_shared<string>(boost::any_cast<string>(m["EmbeddingModelName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OverlapSize") != m.end() && !m["OverlapSize"].empty()) {
      overlapSize = make_shared<long>(boost::any_cast<long>(m["OverlapSize"]));
    }
    if (m.find("RerankMinScore") != m.end() && !m["RerankMinScore"].empty()) {
      rerankMinScore = make_shared<double>(boost::any_cast<double>(m["RerankMinScore"]));
    }
    if (m.find("RerankModelName") != m.end() && !m["RerankModelName"].empty()) {
      rerankModelName = make_shared<string>(boost::any_cast<string>(m["RerankModelName"]));
    }
    if (m.find("Separator") != m.end() && !m["Separator"].empty()) {
      separator = make_shared<string>(boost::any_cast<string>(m["Separator"]));
    }
    if (m.find("SinkInstanceId") != m.end() && !m["SinkInstanceId"].empty()) {
      sinkInstanceId = make_shared<string>(boost::any_cast<string>(m["SinkInstanceId"]));
    }
    if (m.find("SinkRegion") != m.end() && !m["SinkRegion"].empty()) {
      sinkRegion = make_shared<string>(boost::any_cast<string>(m["SinkRegion"]));
    }
    if (m.find("SinkType") != m.end() && !m["SinkType"].empty()) {
      sinkType = make_shared<string>(boost::any_cast<string>(m["SinkType"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StructureType") != m.end() && !m["StructureType"].empty()) {
      structureType = make_shared<string>(boost::any_cast<string>(m["StructureType"]));
    }
  }


  virtual ~CreateIndexShrinkRequest() = default;
};
class CreateIndexResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  CreateIndexResponseBodyData() {}

  explicit CreateIndexResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateIndexResponseBodyData() = default;
};
class CreateIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateIndexResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  CreateIndexResponseBody() {}

  explicit CreateIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateIndexResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateIndexResponseBodyData>(model1);
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


  virtual ~CreateIndexResponseBody() = default;
};
class CreateIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateIndexResponseBody> body{};

  CreateIndexResponse() {}

  explicit CreateIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIndexResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIndexResponse() = default;
};
class DeleteFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> fileId{};

  DeleteFileResponseBodyData() {}

  explicit DeleteFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
  }


  virtual ~DeleteFileResponseBodyData() = default;
};
class DeleteFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeleteFileResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  DeleteFileResponseBody() {}

  explicit DeleteFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteFileResponseBodyData>(model1);
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


  virtual ~DeleteFileResponseBody() = default;
};
class DeleteFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFileResponseBody> body{};

  DeleteFileResponse() {}

  explicit DeleteFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFileResponse() = default;
};
class DeleteIndexRequest : public Darabonba::Model {
public:
  shared_ptr<string> indexId{};

  DeleteIndexRequest() {}

  explicit DeleteIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
  }


  virtual ~DeleteIndexRequest() = default;
};
class DeleteIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  DeleteIndexResponseBody() {}

  explicit DeleteIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIndexResponseBody() = default;
};
class DeleteIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIndexResponseBody> body{};

  DeleteIndexResponse() {}

  explicit DeleteIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIndexResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIndexResponse() = default;
};
class DeleteIndexDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> documentIds{};
  shared_ptr<string> indexId{};

  DeleteIndexDocumentRequest() {}

  explicit DeleteIndexDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentIds) {
      res["DocumentIds"] = boost::any(*documentIds);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocumentIds") != m.end() && !m["DocumentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DocumentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocumentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      documentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
  }


  virtual ~DeleteIndexDocumentRequest() = default;
};
class DeleteIndexDocumentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> documentIdsShrink{};
  shared_ptr<string> indexId{};

  DeleteIndexDocumentShrinkRequest() {}

  explicit DeleteIndexDocumentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentIdsShrink) {
      res["DocumentIds"] = boost::any(*documentIdsShrink);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocumentIds") != m.end() && !m["DocumentIds"].empty()) {
      documentIdsShrink = make_shared<string>(boost::any_cast<string>(m["DocumentIds"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
  }


  virtual ~DeleteIndexDocumentShrinkRequest() = default;
};
class DeleteIndexDocumentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> deletedDocument{};

  DeleteIndexDocumentResponseBodyData() {}

  explicit DeleteIndexDocumentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletedDocument) {
      res["DeletedDocument"] = boost::any(*deletedDocument);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletedDocument") != m.end() && !m["DeletedDocument"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DeletedDocument"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeletedDocument"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deletedDocument = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteIndexDocumentResponseBodyData() = default;
};
class DeleteIndexDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeleteIndexDocumentResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  DeleteIndexDocumentResponseBody() {}

  explicit DeleteIndexDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteIndexDocumentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteIndexDocumentResponseBodyData>(model1);
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


  virtual ~DeleteIndexDocumentResponseBody() = default;
};
class DeleteIndexDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIndexDocumentResponseBody> body{};

  DeleteIndexDocumentResponse() {}

  explicit DeleteIndexDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteIndexDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIndexDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIndexDocumentResponse() = default;
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
class GetIndexJobStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> indexId{};
  shared_ptr<string> jobId{};

  GetIndexJobStatusRequest() {}

  explicit GetIndexJobStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetIndexJobStatusRequest() = default;
};
class GetIndexJobStatusResponseBodyDataDocuments : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> docId{};
  shared_ptr<string> docName{};
  shared_ptr<string> message{};
  shared_ptr<string> status{};

  GetIndexJobStatusResponseBodyDataDocuments() {}

  explicit GetIndexJobStatusResponseBodyDataDocuments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (docId) {
      res["DocId"] = boost::any(*docId);
    }
    if (docName) {
      res["DocName"] = boost::any(*docName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DocId") != m.end() && !m["DocId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["DocId"]));
    }
    if (m.find("DocName") != m.end() && !m["DocName"].empty()) {
      docName = make_shared<string>(boost::any_cast<string>(m["DocName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetIndexJobStatusResponseBodyDataDocuments() = default;
};
class GetIndexJobStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetIndexJobStatusResponseBodyDataDocuments>> documents{};
  shared_ptr<string> jobId{};
  shared_ptr<string> status{};

  GetIndexJobStatusResponseBodyData() {}

  explicit GetIndexJobStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documents) {
      vector<boost::any> temp1;
      for(auto item1:*documents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Documents"] = boost::any(temp1);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Documents") != m.end() && !m["Documents"].empty()) {
      if (typeid(vector<boost::any>) == m["Documents"].type()) {
        vector<GetIndexJobStatusResponseBodyDataDocuments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Documents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetIndexJobStatusResponseBodyDataDocuments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        documents = make_shared<vector<GetIndexJobStatusResponseBodyDataDocuments>>(expect1);
      }
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetIndexJobStatusResponseBodyData() = default;
};
class GetIndexJobStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetIndexJobStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  GetIndexJobStatusResponseBody() {}

  explicit GetIndexJobStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetIndexJobStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetIndexJobStatusResponseBodyData>(model1);
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


  virtual ~GetIndexJobStatusResponseBody() = default;
};
class GetIndexJobStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetIndexJobStatusResponseBody> body{};

  GetIndexJobStatusResponse() {}

  explicit GetIndexJobStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetIndexJobStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIndexJobStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetIndexJobStatusResponse() = default;
};
class ListChunksRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fields{};
  shared_ptr<string> filed{};
  shared_ptr<string> indexId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListChunksRequest() {}

  explicit ListChunksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fields) {
      res["Fields"] = boost::any(*fields);
    }
    if (filed) {
      res["Filed"] = boost::any(*filed);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Fields"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fields = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Filed") != m.end() && !m["Filed"].empty()) {
      filed = make_shared<string>(boost::any_cast<string>(m["Filed"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListChunksRequest() = default;
};
class ListChunksResponseBodyDataNodes : public Darabonba::Model {
public:
  shared_ptr<boost::any> metadata{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  ListChunksResponseBodyDataNodes() {}

  explicit ListChunksResponseBodyDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~ListChunksResponseBodyDataNodes() = default;
};
class ListChunksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListChunksResponseBodyDataNodes>> nodes{};
  shared_ptr<long> total{};

  ListChunksResponseBodyData() {}

  explicit ListChunksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<ListChunksResponseBodyDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChunksResponseBodyDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<ListChunksResponseBodyDataNodes>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListChunksResponseBodyData() = default;
};
class ListChunksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListChunksResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  ListChunksResponseBody() {}

  explicit ListChunksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListChunksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListChunksResponseBodyData>(model1);
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


  virtual ~ListChunksResponseBody() = default;
};
class ListChunksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChunksResponseBody> body{};

  ListChunksResponse() {}

  explicit ListChunksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListChunksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChunksResponseBody>(model1);
      }
    }
  }


  virtual ~ListChunksResponse() = default;
};
class ListIndexDocumentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> documentName{};
  shared_ptr<string> documentStatus{};
  shared_ptr<string> indexId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListIndexDocumentsRequest() {}

  explicit ListIndexDocumentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentName) {
      res["DocumentName"] = boost::any(*documentName);
    }
    if (documentStatus) {
      res["DocumentStatus"] = boost::any(*documentStatus);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocumentName") != m.end() && !m["DocumentName"].empty()) {
      documentName = make_shared<string>(boost::any_cast<string>(m["DocumentName"]));
    }
    if (m.find("DocumentStatus") != m.end() && !m["DocumentStatus"].empty()) {
      documentStatus = make_shared<string>(boost::any_cast<string>(m["DocumentStatus"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListIndexDocumentsRequest() = default;
};
class ListIndexDocumentsResponseBodyDataDocuments : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> documentType{};
  shared_ptr<string> id{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<long> size{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> status{};

  ListIndexDocumentsResponseBodyDataDocuments() {}

  explicit ListIndexDocumentsResponseBodyDataDocuments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (documentType) {
      res["DocumentType"] = boost::any(*documentType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DocumentType") != m.end() && !m["DocumentType"].empty()) {
      documentType = make_shared<string>(boost::any_cast<string>(m["DocumentType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListIndexDocumentsResponseBodyDataDocuments() = default;
};
class ListIndexDocumentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListIndexDocumentsResponseBodyDataDocuments>> documents{};
  shared_ptr<string> indexId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListIndexDocumentsResponseBodyData() {}

  explicit ListIndexDocumentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documents) {
      vector<boost::any> temp1;
      for(auto item1:*documents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Documents"] = boost::any(temp1);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Documents") != m.end() && !m["Documents"].empty()) {
      if (typeid(vector<boost::any>) == m["Documents"].type()) {
        vector<ListIndexDocumentsResponseBodyDataDocuments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Documents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIndexDocumentsResponseBodyDataDocuments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        documents = make_shared<vector<ListIndexDocumentsResponseBodyDataDocuments>>(expect1);
      }
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListIndexDocumentsResponseBodyData() = default;
};
class ListIndexDocumentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListIndexDocumentsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  ListIndexDocumentsResponseBody() {}

  explicit ListIndexDocumentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListIndexDocumentsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListIndexDocumentsResponseBodyData>(model1);
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


  virtual ~ListIndexDocumentsResponseBody() = default;
};
class ListIndexDocumentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIndexDocumentsResponseBody> body{};

  ListIndexDocumentsResponse() {}

  explicit ListIndexDocumentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListIndexDocumentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIndexDocumentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListIndexDocumentsResponse() = default;
};
class ListIndicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> indexName{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  ListIndicesRequest() {}

  explicit ListIndicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexName) {
      res["IndexName"] = boost::any(*indexName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IndexName") != m.end() && !m["IndexName"].empty()) {
      indexName = make_shared<string>(boost::any_cast<string>(m["IndexName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListIndicesRequest() = default;
};
class ListIndicesResponseBodyDataIndices : public Darabonba::Model {
public:
  shared_ptr<long> chunkSize{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> documentIds{};
  shared_ptr<string> embeddingModelName{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> overlapSize{};
  shared_ptr<string> rerankMinScore{};
  shared_ptr<string> rerankModelName{};
  shared_ptr<string> separator{};
  shared_ptr<string> sinkInstanceId{};
  shared_ptr<string> sinkRegion{};
  shared_ptr<string> sinkType{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> structureType{};

  ListIndicesResponseBodyDataIndices() {}

  explicit ListIndicesResponseBodyDataIndices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkSize) {
      res["ChunkSize"] = boost::any(*chunkSize);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (documentIds) {
      res["DocumentIds"] = boost::any(*documentIds);
    }
    if (embeddingModelName) {
      res["EmbeddingModelName"] = boost::any(*embeddingModelName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (overlapSize) {
      res["OverlapSize"] = boost::any(*overlapSize);
    }
    if (rerankMinScore) {
      res["RerankMinScore"] = boost::any(*rerankMinScore);
    }
    if (rerankModelName) {
      res["RerankModelName"] = boost::any(*rerankModelName);
    }
    if (separator) {
      res["Separator"] = boost::any(*separator);
    }
    if (sinkInstanceId) {
      res["SinkInstanceId"] = boost::any(*sinkInstanceId);
    }
    if (sinkRegion) {
      res["SinkRegion"] = boost::any(*sinkRegion);
    }
    if (sinkType) {
      res["SinkType"] = boost::any(*sinkType);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (structureType) {
      res["StructureType"] = boost::any(*structureType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChunkSize") != m.end() && !m["ChunkSize"].empty()) {
      chunkSize = make_shared<long>(boost::any_cast<long>(m["ChunkSize"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocumentIds") != m.end() && !m["DocumentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DocumentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocumentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      documentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EmbeddingModelName") != m.end() && !m["EmbeddingModelName"].empty()) {
      embeddingModelName = make_shared<string>(boost::any_cast<string>(m["EmbeddingModelName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OverlapSize") != m.end() && !m["OverlapSize"].empty()) {
      overlapSize = make_shared<long>(boost::any_cast<long>(m["OverlapSize"]));
    }
    if (m.find("RerankMinScore") != m.end() && !m["RerankMinScore"].empty()) {
      rerankMinScore = make_shared<string>(boost::any_cast<string>(m["RerankMinScore"]));
    }
    if (m.find("RerankModelName") != m.end() && !m["RerankModelName"].empty()) {
      rerankModelName = make_shared<string>(boost::any_cast<string>(m["RerankModelName"]));
    }
    if (m.find("Separator") != m.end() && !m["Separator"].empty()) {
      separator = make_shared<string>(boost::any_cast<string>(m["Separator"]));
    }
    if (m.find("SinkInstanceId") != m.end() && !m["SinkInstanceId"].empty()) {
      sinkInstanceId = make_shared<string>(boost::any_cast<string>(m["SinkInstanceId"]));
    }
    if (m.find("SinkRegion") != m.end() && !m["SinkRegion"].empty()) {
      sinkRegion = make_shared<string>(boost::any_cast<string>(m["SinkRegion"]));
    }
    if (m.find("SinkType") != m.end() && !m["SinkType"].empty()) {
      sinkType = make_shared<string>(boost::any_cast<string>(m["SinkType"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StructureType") != m.end() && !m["StructureType"].empty()) {
      structureType = make_shared<string>(boost::any_cast<string>(m["StructureType"]));
    }
  }


  virtual ~ListIndicesResponseBodyDataIndices() = default;
};
class ListIndicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListIndicesResponseBodyDataIndices>> indices{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListIndicesResponseBodyData() {}

  explicit ListIndicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indices) {
      vector<boost::any> temp1;
      for(auto item1:*indices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Indices"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Indices") != m.end() && !m["Indices"].empty()) {
      if (typeid(vector<boost::any>) == m["Indices"].type()) {
        vector<ListIndicesResponseBodyDataIndices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Indices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIndicesResponseBodyDataIndices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        indices = make_shared<vector<ListIndicesResponseBodyDataIndices>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListIndicesResponseBodyData() = default;
};
class ListIndicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListIndicesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  ListIndicesResponseBody() {}

  explicit ListIndicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListIndicesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListIndicesResponseBodyData>(model1);
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


  virtual ~ListIndicesResponseBody() = default;
};
class ListIndicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIndicesResponseBody> body{};

  ListIndicesResponse() {}

  explicit ListIndicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListIndicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIndicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListIndicesResponse() = default;
};
class RetrieveRequestRerank : public Darabonba::Model {
public:
  shared_ptr<string> modelName{};

  RetrieveRequestRerank() {}

  explicit RetrieveRequestRerank(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
  }


  virtual ~RetrieveRequestRerank() = default;
};
class RetrieveRequestRewrite : public Darabonba::Model {
public:
  shared_ptr<string> modelName{};

  RetrieveRequestRewrite() {}

  explicit RetrieveRequestRewrite(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
  }


  virtual ~RetrieveRequestRewrite() = default;
};
class RetrieveRequest : public Darabonba::Model {
public:
  shared_ptr<long> denseSimilarityTopK{};
  shared_ptr<bool> enableReranking{};
  shared_ptr<bool> enableRewrite{};
  shared_ptr<string> indexId{};
  shared_ptr<string> query{};
  shared_ptr<vector<RetrieveRequestRerank>> rerank{};
  shared_ptr<double> rerankMinScore{};
  shared_ptr<long> rerankTopN{};
  shared_ptr<vector<RetrieveRequestRewrite>> rewrite{};
  shared_ptr<bool> saveRetrieverHistory{};
  shared_ptr<long> sparseSimilarityTopK{};

  RetrieveRequest() {}

  explicit RetrieveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (denseSimilarityTopK) {
      res["DenseSimilarityTopK"] = boost::any(*denseSimilarityTopK);
    }
    if (enableReranking) {
      res["EnableReranking"] = boost::any(*enableReranking);
    }
    if (enableRewrite) {
      res["EnableRewrite"] = boost::any(*enableRewrite);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (rerank) {
      vector<boost::any> temp1;
      for(auto item1:*rerank){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rerank"] = boost::any(temp1);
    }
    if (rerankMinScore) {
      res["RerankMinScore"] = boost::any(*rerankMinScore);
    }
    if (rerankTopN) {
      res["RerankTopN"] = boost::any(*rerankTopN);
    }
    if (rewrite) {
      vector<boost::any> temp1;
      for(auto item1:*rewrite){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rewrite"] = boost::any(temp1);
    }
    if (saveRetrieverHistory) {
      res["SaveRetrieverHistory"] = boost::any(*saveRetrieverHistory);
    }
    if (sparseSimilarityTopK) {
      res["SparseSimilarityTopK"] = boost::any(*sparseSimilarityTopK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DenseSimilarityTopK") != m.end() && !m["DenseSimilarityTopK"].empty()) {
      denseSimilarityTopK = make_shared<long>(boost::any_cast<long>(m["DenseSimilarityTopK"]));
    }
    if (m.find("EnableReranking") != m.end() && !m["EnableReranking"].empty()) {
      enableReranking = make_shared<bool>(boost::any_cast<bool>(m["EnableReranking"]));
    }
    if (m.find("EnableRewrite") != m.end() && !m["EnableRewrite"].empty()) {
      enableRewrite = make_shared<bool>(boost::any_cast<bool>(m["EnableRewrite"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("Rerank") != m.end() && !m["Rerank"].empty()) {
      if (typeid(vector<boost::any>) == m["Rerank"].type()) {
        vector<RetrieveRequestRerank> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rerank"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RetrieveRequestRerank model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rerank = make_shared<vector<RetrieveRequestRerank>>(expect1);
      }
    }
    if (m.find("RerankMinScore") != m.end() && !m["RerankMinScore"].empty()) {
      rerankMinScore = make_shared<double>(boost::any_cast<double>(m["RerankMinScore"]));
    }
    if (m.find("RerankTopN") != m.end() && !m["RerankTopN"].empty()) {
      rerankTopN = make_shared<long>(boost::any_cast<long>(m["RerankTopN"]));
    }
    if (m.find("Rewrite") != m.end() && !m["Rewrite"].empty()) {
      if (typeid(vector<boost::any>) == m["Rewrite"].type()) {
        vector<RetrieveRequestRewrite> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rewrite"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RetrieveRequestRewrite model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rewrite = make_shared<vector<RetrieveRequestRewrite>>(expect1);
      }
    }
    if (m.find("SaveRetrieverHistory") != m.end() && !m["SaveRetrieverHistory"].empty()) {
      saveRetrieverHistory = make_shared<bool>(boost::any_cast<bool>(m["SaveRetrieverHistory"]));
    }
    if (m.find("SparseSimilarityTopK") != m.end() && !m["SparseSimilarityTopK"].empty()) {
      sparseSimilarityTopK = make_shared<long>(boost::any_cast<long>(m["SparseSimilarityTopK"]));
    }
  }


  virtual ~RetrieveRequest() = default;
};
class RetrieveShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> denseSimilarityTopK{};
  shared_ptr<bool> enableReranking{};
  shared_ptr<bool> enableRewrite{};
  shared_ptr<string> indexId{};
  shared_ptr<string> query{};
  shared_ptr<string> rerankShrink{};
  shared_ptr<double> rerankMinScore{};
  shared_ptr<long> rerankTopN{};
  shared_ptr<string> rewriteShrink{};
  shared_ptr<bool> saveRetrieverHistory{};
  shared_ptr<long> sparseSimilarityTopK{};

  RetrieveShrinkRequest() {}

  explicit RetrieveShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (denseSimilarityTopK) {
      res["DenseSimilarityTopK"] = boost::any(*denseSimilarityTopK);
    }
    if (enableReranking) {
      res["EnableReranking"] = boost::any(*enableReranking);
    }
    if (enableRewrite) {
      res["EnableRewrite"] = boost::any(*enableRewrite);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (rerankShrink) {
      res["Rerank"] = boost::any(*rerankShrink);
    }
    if (rerankMinScore) {
      res["RerankMinScore"] = boost::any(*rerankMinScore);
    }
    if (rerankTopN) {
      res["RerankTopN"] = boost::any(*rerankTopN);
    }
    if (rewriteShrink) {
      res["Rewrite"] = boost::any(*rewriteShrink);
    }
    if (saveRetrieverHistory) {
      res["SaveRetrieverHistory"] = boost::any(*saveRetrieverHistory);
    }
    if (sparseSimilarityTopK) {
      res["SparseSimilarityTopK"] = boost::any(*sparseSimilarityTopK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DenseSimilarityTopK") != m.end() && !m["DenseSimilarityTopK"].empty()) {
      denseSimilarityTopK = make_shared<long>(boost::any_cast<long>(m["DenseSimilarityTopK"]));
    }
    if (m.find("EnableReranking") != m.end() && !m["EnableReranking"].empty()) {
      enableReranking = make_shared<bool>(boost::any_cast<bool>(m["EnableReranking"]));
    }
    if (m.find("EnableRewrite") != m.end() && !m["EnableRewrite"].empty()) {
      enableRewrite = make_shared<bool>(boost::any_cast<bool>(m["EnableRewrite"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("Rerank") != m.end() && !m["Rerank"].empty()) {
      rerankShrink = make_shared<string>(boost::any_cast<string>(m["Rerank"]));
    }
    if (m.find("RerankMinScore") != m.end() && !m["RerankMinScore"].empty()) {
      rerankMinScore = make_shared<double>(boost::any_cast<double>(m["RerankMinScore"]));
    }
    if (m.find("RerankTopN") != m.end() && !m["RerankTopN"].empty()) {
      rerankTopN = make_shared<long>(boost::any_cast<long>(m["RerankTopN"]));
    }
    if (m.find("Rewrite") != m.end() && !m["Rewrite"].empty()) {
      rewriteShrink = make_shared<string>(boost::any_cast<string>(m["Rewrite"]));
    }
    if (m.find("SaveRetrieverHistory") != m.end() && !m["SaveRetrieverHistory"].empty()) {
      saveRetrieverHistory = make_shared<bool>(boost::any_cast<bool>(m["SaveRetrieverHistory"]));
    }
    if (m.find("SparseSimilarityTopK") != m.end() && !m["SparseSimilarityTopK"].empty()) {
      sparseSimilarityTopK = make_shared<long>(boost::any_cast<long>(m["SparseSimilarityTopK"]));
    }
  }


  virtual ~RetrieveShrinkRequest() = default;
};
class RetrieveResponseBodyDataNodes : public Darabonba::Model {
public:
  shared_ptr<boost::any> metadata{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RetrieveResponseBodyDataNodes() {}

  explicit RetrieveResponseBodyDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RetrieveResponseBodyDataNodes() = default;
};
class RetrieveResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RetrieveResponseBodyDataNodes>> nodes{};

  RetrieveResponseBodyData() {}

  explicit RetrieveResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<RetrieveResponseBodyDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RetrieveResponseBodyDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<RetrieveResponseBodyDataNodes>>(expect1);
      }
    }
  }


  virtual ~RetrieveResponseBodyData() = default;
};
class RetrieveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RetrieveResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  RetrieveResponseBody() {}

  explicit RetrieveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RetrieveResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RetrieveResponseBodyData>(model1);
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


  virtual ~RetrieveResponseBody() = default;
};
class RetrieveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RetrieveResponseBody> body{};

  RetrieveResponse() {}

  explicit RetrieveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RetrieveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RetrieveResponseBody>(model1);
      }
    }
  }


  virtual ~RetrieveResponse() = default;
};
class SubmitIndexAddDocumentsJobRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categoryIds{};
  shared_ptr<vector<string>> documentIds{};
  shared_ptr<string> indexId{};
  shared_ptr<string> sourceType{};

  SubmitIndexAddDocumentsJobRequest() {}

  explicit SubmitIndexAddDocumentsJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryIds) {
      res["CategoryIds"] = boost::any(*categoryIds);
    }
    if (documentIds) {
      res["DocumentIds"] = boost::any(*documentIds);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryIds") != m.end() && !m["CategoryIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CategoryIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CategoryIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categoryIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DocumentIds") != m.end() && !m["DocumentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DocumentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocumentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      documentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~SubmitIndexAddDocumentsJobRequest() = default;
};
class SubmitIndexAddDocumentsJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryIdsShrink{};
  shared_ptr<string> documentIdsShrink{};
  shared_ptr<string> indexId{};
  shared_ptr<string> sourceType{};

  SubmitIndexAddDocumentsJobShrinkRequest() {}

  explicit SubmitIndexAddDocumentsJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryIdsShrink) {
      res["CategoryIds"] = boost::any(*categoryIdsShrink);
    }
    if (documentIdsShrink) {
      res["DocumentIds"] = boost::any(*documentIdsShrink);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryIds") != m.end() && !m["CategoryIds"].empty()) {
      categoryIdsShrink = make_shared<string>(boost::any_cast<string>(m["CategoryIds"]));
    }
    if (m.find("DocumentIds") != m.end() && !m["DocumentIds"].empty()) {
      documentIdsShrink = make_shared<string>(boost::any_cast<string>(m["DocumentIds"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~SubmitIndexAddDocumentsJobShrinkRequest() = default;
};
class SubmitIndexAddDocumentsJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  SubmitIndexAddDocumentsJobResponseBodyData() {}

  explicit SubmitIndexAddDocumentsJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~SubmitIndexAddDocumentsJobResponseBodyData() = default;
};
class SubmitIndexAddDocumentsJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitIndexAddDocumentsJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  SubmitIndexAddDocumentsJobResponseBody() {}

  explicit SubmitIndexAddDocumentsJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitIndexAddDocumentsJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitIndexAddDocumentsJobResponseBodyData>(model1);
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


  virtual ~SubmitIndexAddDocumentsJobResponseBody() = default;
};
class SubmitIndexAddDocumentsJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitIndexAddDocumentsJobResponseBody> body{};

  SubmitIndexAddDocumentsJobResponse() {}

  explicit SubmitIndexAddDocumentsJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitIndexAddDocumentsJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitIndexAddDocumentsJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitIndexAddDocumentsJobResponse() = default;
};
class SubmitIndexJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> indexId{};

  SubmitIndexJobRequest() {}

  explicit SubmitIndexJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
  }


  virtual ~SubmitIndexJobRequest() = default;
};
class SubmitIndexJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> indexId{};

  SubmitIndexJobResponseBodyData() {}

  explicit SubmitIndexJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
  }


  virtual ~SubmitIndexJobResponseBodyData() = default;
};
class SubmitIndexJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitIndexJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  SubmitIndexJobResponseBody() {}

  explicit SubmitIndexJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitIndexJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitIndexJobResponseBodyData>(model1);
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


  virtual ~SubmitIndexJobResponseBody() = default;
};
class SubmitIndexJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitIndexJobResponseBody> body{};

  SubmitIndexJobResponse() {}

  explicit SubmitIndexJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitIndexJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitIndexJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitIndexJobResponse() = default;
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
  CreateIndexResponse createIndexWithOptions(shared_ptr<string> WorkspaceId,
                                             shared_ptr<CreateIndexRequest> tmpReq,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIndexResponse createIndex(shared_ptr<string> WorkspaceId, shared_ptr<CreateIndexRequest> request);
  DeleteFileResponse deleteFileWithOptions(shared_ptr<string> FileId,
                                           shared_ptr<string> WorkspaceId,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFileResponse deleteFile(shared_ptr<string> FileId, shared_ptr<string> WorkspaceId);
  DeleteIndexResponse deleteIndexWithOptions(shared_ptr<string> WorkspaceId,
                                             shared_ptr<DeleteIndexRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIndexResponse deleteIndex(shared_ptr<string> WorkspaceId, shared_ptr<DeleteIndexRequest> request);
  DeleteIndexDocumentResponse deleteIndexDocumentWithOptions(shared_ptr<string> WorkspaceId,
                                                             shared_ptr<DeleteIndexDocumentRequest> tmpReq,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIndexDocumentResponse deleteIndexDocument(shared_ptr<string> WorkspaceId, shared_ptr<DeleteIndexDocumentRequest> request);
  DescribeFileResponse describeFileWithOptions(shared_ptr<string> WorkspaceId,
                                               shared_ptr<string> FileId,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFileResponse describeFile(shared_ptr<string> WorkspaceId, shared_ptr<string> FileId);
  GetIndexJobStatusResponse getIndexJobStatusWithOptions(shared_ptr<string> WorkspaceId,
                                                         shared_ptr<GetIndexJobStatusRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIndexJobStatusResponse getIndexJobStatus(shared_ptr<string> WorkspaceId, shared_ptr<GetIndexJobStatusRequest> request);
  ListChunksResponse listChunksWithOptions(shared_ptr<string> WorkspaceId,
                                           shared_ptr<ListChunksRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChunksResponse listChunks(shared_ptr<string> WorkspaceId, shared_ptr<ListChunksRequest> request);
  ListIndexDocumentsResponse listIndexDocumentsWithOptions(shared_ptr<string> WorkspaceId,
                                                           shared_ptr<ListIndexDocumentsRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIndexDocumentsResponse listIndexDocuments(shared_ptr<string> WorkspaceId, shared_ptr<ListIndexDocumentsRequest> request);
  ListIndicesResponse listIndicesWithOptions(shared_ptr<string> WorkspaceId,
                                             shared_ptr<ListIndicesRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIndicesResponse listIndices(shared_ptr<string> WorkspaceId, shared_ptr<ListIndicesRequest> request);
  RetrieveResponse retrieveWithOptions(shared_ptr<string> WorkspaceId,
                                       shared_ptr<RetrieveRequest> tmpReq,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetrieveResponse retrieve(shared_ptr<string> WorkspaceId, shared_ptr<RetrieveRequest> request);
  SubmitIndexAddDocumentsJobResponse submitIndexAddDocumentsJobWithOptions(shared_ptr<string> WorkspaceId,
                                                                           shared_ptr<SubmitIndexAddDocumentsJobRequest> tmpReq,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitIndexAddDocumentsJobResponse submitIndexAddDocumentsJob(shared_ptr<string> WorkspaceId, shared_ptr<SubmitIndexAddDocumentsJobRequest> request);
  SubmitIndexJobResponse submitIndexJobWithOptions(shared_ptr<string> WorkspaceId,
                                                   shared_ptr<SubmitIndexJobRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitIndexJobResponse submitIndexJob(shared_ptr<string> WorkspaceId, shared_ptr<SubmitIndexJobRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Bailian20231229

#endif
