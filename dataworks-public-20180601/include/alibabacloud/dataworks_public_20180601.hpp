// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DATAWORKS-PUBLIC20180601_H_
#define ALIBABACLOUD_DATAWORKS-PUBLIC20180601_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dataworks-public20180601 {
class CreateManualDagRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizdate{};
  shared_ptr<string> dagPara{};
  shared_ptr<string> flowName{};
  shared_ptr<string> nodePara{};
  shared_ptr<string> projectName{};

  CreateManualDagRequest() {}

  explicit CreateManualDagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizdate) {
      res["Bizdate"] = boost::any(*bizdate);
    }
    if (dagPara) {
      res["DagPara"] = boost::any(*dagPara);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (nodePara) {
      res["NodePara"] = boost::any(*nodePara);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bizdate") != m.end() && !m["Bizdate"].empty()) {
      bizdate = make_shared<string>(boost::any_cast<string>(m["Bizdate"]));
    }
    if (m.find("DagPara") != m.end() && !m["DagPara"].empty()) {
      dagPara = make_shared<string>(boost::any_cast<string>(m["DagPara"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("NodePara") != m.end() && !m["NodePara"].empty()) {
      nodePara = make_shared<string>(boost::any_cast<string>(m["NodePara"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~CreateManualDagRequest() = default;
};
class CreateManualDagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> returnCode{};
  shared_ptr<string> returnErrorSolution{};
  shared_ptr<string> returnMessage{};
  shared_ptr<long> returnValue{};

  CreateManualDagResponseBody() {}

  explicit CreateManualDagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (returnCode) {
      res["ReturnCode"] = boost::any(*returnCode);
    }
    if (returnErrorSolution) {
      res["ReturnErrorSolution"] = boost::any(*returnErrorSolution);
    }
    if (returnMessage) {
      res["ReturnMessage"] = boost::any(*returnMessage);
    }
    if (returnValue) {
      res["ReturnValue"] = boost::any(*returnValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ReturnCode") != m.end() && !m["ReturnCode"].empty()) {
      returnCode = make_shared<string>(boost::any_cast<string>(m["ReturnCode"]));
    }
    if (m.find("ReturnErrorSolution") != m.end() && !m["ReturnErrorSolution"].empty()) {
      returnErrorSolution = make_shared<string>(boost::any_cast<string>(m["ReturnErrorSolution"]));
    }
    if (m.find("ReturnMessage") != m.end() && !m["ReturnMessage"].empty()) {
      returnMessage = make_shared<string>(boost::any_cast<string>(m["ReturnMessage"]));
    }
    if (m.find("ReturnValue") != m.end() && !m["ReturnValue"].empty()) {
      returnValue = make_shared<long>(boost::any_cast<long>(m["ReturnValue"]));
    }
  }


  virtual ~CreateManualDagResponseBody() = default;
};
class CreateManualDagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateManualDagResponseBody> body{};

  CreateManualDagResponse() {}

  explicit CreateManualDagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateManualDagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateManualDagResponseBody>(model1);
      }
    }
  }


  virtual ~CreateManualDagResponse() = default;
};
class DeleteFileRequest : public Darabonba::Model {
public:
  shared_ptr<long> fileId{};
  shared_ptr<long> projectId{};
  shared_ptr<string> projectIdentifier{};

  DeleteFileRequest() {}

  explicit DeleteFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectIdentifier) {
      res["ProjectIdentifier"] = boost::any(*projectIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<long>(boost::any_cast<long>(m["FileId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("ProjectIdentifier") != m.end() && !m["ProjectIdentifier"].empty()) {
      projectIdentifier = make_shared<string>(boost::any_cast<string>(m["ProjectIdentifier"]));
    }
  }


  virtual ~DeleteFileRequest() = default;
};
class DeleteFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteFileResponseBody() {}

  explicit DeleteFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class DescribeEmrHiveTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> tableName{};

  DescribeEmrHiveTableRequest() {}

  explicit DescribeEmrHiveTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeEmrHiveTableRequest() = default;
};
class DescribeEmrHiveTableResponseBodyDataColumns : public Darabonba::Model {
public:
  shared_ptr<string> columnComment{};
  shared_ptr<string> columnName{};
  shared_ptr<long> columnPosition{};
  shared_ptr<string> columnType{};
  shared_ptr<string> comment{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};

  DescribeEmrHiveTableResponseBodyDataColumns() {}

  explicit DescribeEmrHiveTableResponseBodyDataColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnComment) {
      res["ColumnComment"] = boost::any(*columnComment);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (columnPosition) {
      res["ColumnPosition"] = boost::any(*columnPosition);
    }
    if (columnType) {
      res["ColumnType"] = boost::any(*columnType);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColumnComment") != m.end() && !m["ColumnComment"].empty()) {
      columnComment = make_shared<string>(boost::any_cast<string>(m["ColumnComment"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("ColumnPosition") != m.end() && !m["ColumnPosition"].empty()) {
      columnPosition = make_shared<long>(boost::any_cast<long>(m["ColumnPosition"]));
    }
    if (m.find("ColumnType") != m.end() && !m["ColumnType"].empty()) {
      columnType = make_shared<string>(boost::any_cast<string>(m["ColumnType"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
  }


  virtual ~DescribeEmrHiveTableResponseBodyDataColumns() = default;
};
class DescribeEmrHiveTableResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterBizId{};
  shared_ptr<string> clusterBizName{};
  shared_ptr<vector<DescribeEmrHiveTableResponseBodyDataColumns>> columns{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> inputFormat{};
  shared_ptr<bool> isCompressed{};
  shared_ptr<bool> isTemporary{};
  shared_ptr<string> lastAccessTime{};
  shared_ptr<string> lastModifyTime{};
  shared_ptr<string> location{};
  shared_ptr<string> outputFormat{};
  shared_ptr<string> owner{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerType{};
  shared_ptr<string> partitionKeys{};
  shared_ptr<string> serializationLib{};
  shared_ptr<string> tableComment{};
  shared_ptr<string> tableDesc{};
  shared_ptr<string> tableName{};
  shared_ptr<string> tableParameters{};
  shared_ptr<long> tableSize{};
  shared_ptr<string> tableType{};

  DescribeEmrHiveTableResponseBodyData() {}

  explicit DescribeEmrHiveTableResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    if (clusterBizName) {
      res["ClusterBizName"] = boost::any(*clusterBizName);
    }
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Columns"] = boost::any(temp1);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (inputFormat) {
      res["InputFormat"] = boost::any(*inputFormat);
    }
    if (isCompressed) {
      res["IsCompressed"] = boost::any(*isCompressed);
    }
    if (isTemporary) {
      res["IsTemporary"] = boost::any(*isTemporary);
    }
    if (lastAccessTime) {
      res["LastAccessTime"] = boost::any(*lastAccessTime);
    }
    if (lastModifyTime) {
      res["LastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (outputFormat) {
      res["OutputFormat"] = boost::any(*outputFormat);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerType) {
      res["OwnerType"] = boost::any(*ownerType);
    }
    if (partitionKeys) {
      res["PartitionKeys"] = boost::any(*partitionKeys);
    }
    if (serializationLib) {
      res["SerializationLib"] = boost::any(*serializationLib);
    }
    if (tableComment) {
      res["TableComment"] = boost::any(*tableComment);
    }
    if (tableDesc) {
      res["TableDesc"] = boost::any(*tableDesc);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (tableParameters) {
      res["TableParameters"] = boost::any(*tableParameters);
    }
    if (tableSize) {
      res["TableSize"] = boost::any(*tableSize);
    }
    if (tableType) {
      res["TableType"] = boost::any(*tableType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
    if (m.find("ClusterBizName") != m.end() && !m["ClusterBizName"].empty()) {
      clusterBizName = make_shared<string>(boost::any_cast<string>(m["ClusterBizName"]));
    }
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(vector<boost::any>) == m["Columns"].type()) {
        vector<DescribeEmrHiveTableResponseBodyDataColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEmrHiveTableResponseBodyDataColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<DescribeEmrHiveTableResponseBodyDataColumns>>(expect1);
      }
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("InputFormat") != m.end() && !m["InputFormat"].empty()) {
      inputFormat = make_shared<string>(boost::any_cast<string>(m["InputFormat"]));
    }
    if (m.find("IsCompressed") != m.end() && !m["IsCompressed"].empty()) {
      isCompressed = make_shared<bool>(boost::any_cast<bool>(m["IsCompressed"]));
    }
    if (m.find("IsTemporary") != m.end() && !m["IsTemporary"].empty()) {
      isTemporary = make_shared<bool>(boost::any_cast<bool>(m["IsTemporary"]));
    }
    if (m.find("LastAccessTime") != m.end() && !m["LastAccessTime"].empty()) {
      lastAccessTime = make_shared<string>(boost::any_cast<string>(m["LastAccessTime"]));
    }
    if (m.find("LastModifyTime") != m.end() && !m["LastModifyTime"].empty()) {
      lastModifyTime = make_shared<string>(boost::any_cast<string>(m["LastModifyTime"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("OutputFormat") != m.end() && !m["OutputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["OutputFormat"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("OwnerType") != m.end() && !m["OwnerType"].empty()) {
      ownerType = make_shared<string>(boost::any_cast<string>(m["OwnerType"]));
    }
    if (m.find("PartitionKeys") != m.end() && !m["PartitionKeys"].empty()) {
      partitionKeys = make_shared<string>(boost::any_cast<string>(m["PartitionKeys"]));
    }
    if (m.find("SerializationLib") != m.end() && !m["SerializationLib"].empty()) {
      serializationLib = make_shared<string>(boost::any_cast<string>(m["SerializationLib"]));
    }
    if (m.find("TableComment") != m.end() && !m["TableComment"].empty()) {
      tableComment = make_shared<string>(boost::any_cast<string>(m["TableComment"]));
    }
    if (m.find("TableDesc") != m.end() && !m["TableDesc"].empty()) {
      tableDesc = make_shared<string>(boost::any_cast<string>(m["TableDesc"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TableParameters") != m.end() && !m["TableParameters"].empty()) {
      tableParameters = make_shared<string>(boost::any_cast<string>(m["TableParameters"]));
    }
    if (m.find("TableSize") != m.end() && !m["TableSize"].empty()) {
      tableSize = make_shared<long>(boost::any_cast<long>(m["TableSize"]));
    }
    if (m.find("TableType") != m.end() && !m["TableType"].empty()) {
      tableType = make_shared<string>(boost::any_cast<string>(m["TableType"]));
    }
  }


  virtual ~DescribeEmrHiveTableResponseBodyData() = default;
};
class DescribeEmrHiveTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeEmrHiveTableResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  DescribeEmrHiveTableResponseBody() {}

  explicit DescribeEmrHiveTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeEmrHiveTableResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeEmrHiveTableResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeEmrHiveTableResponseBody() = default;
};
class DescribeEmrHiveTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEmrHiveTableResponseBody> body{};

  DescribeEmrHiveTableResponse() {}

  explicit DescribeEmrHiveTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEmrHiveTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEmrHiveTableResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEmrHiveTableResponse() = default;
};
class GetDataServiceApiAuthMapContextRequest : public Darabonba::Model {
public:
  shared_ptr<long> apiId{};
  shared_ptr<string> apiPath{};
  shared_ptr<long> projectId{};
  shared_ptr<bool> verbose{};

  GetDataServiceApiAuthMapContextRequest() {}

  explicit GetDataServiceApiAuthMapContextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiPath) {
      res["ApiPath"] = boost::any(*apiPath);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<long>(boost::any_cast<long>(m["ApiId"]));
    }
    if (m.find("ApiPath") != m.end() && !m["ApiPath"].empty()) {
      apiPath = make_shared<string>(boost::any_cast<string>(m["ApiPath"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
  }


  virtual ~GetDataServiceApiAuthMapContextRequest() = default;
};
class GetDataServiceApiAuthMapContextResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};

  GetDataServiceApiAuthMapContextResponseBody() {}

  explicit GetDataServiceApiAuthMapContextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDataServiceApiAuthMapContextResponseBody() = default;
};
class GetDataServiceApiAuthMapContextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataServiceApiAuthMapContextResponseBody> body{};

  GetDataServiceApiAuthMapContextResponse() {}

  explicit GetDataServiceApiAuthMapContextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataServiceApiAuthMapContextResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataServiceApiAuthMapContextResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataServiceApiAuthMapContextResponse() = default;
};
class GetDataServiceApiContextRequest : public Darabonba::Model {
public:
  shared_ptr<long> apiId{};
  shared_ptr<long> apiStatus{};
  shared_ptr<string> cacheKey{};
  shared_ptr<bool> forPrivateResGroup{};
  shared_ptr<bool> verbose{};

  GetDataServiceApiContextRequest() {}

  explicit GetDataServiceApiContextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiStatus) {
      res["ApiStatus"] = boost::any(*apiStatus);
    }
    if (cacheKey) {
      res["CacheKey"] = boost::any(*cacheKey);
    }
    if (forPrivateResGroup) {
      res["ForPrivateResGroup"] = boost::any(*forPrivateResGroup);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<long>(boost::any_cast<long>(m["ApiId"]));
    }
    if (m.find("ApiStatus") != m.end() && !m["ApiStatus"].empty()) {
      apiStatus = make_shared<long>(boost::any_cast<long>(m["ApiStatus"]));
    }
    if (m.find("CacheKey") != m.end() && !m["CacheKey"].empty()) {
      cacheKey = make_shared<string>(boost::any_cast<string>(m["CacheKey"]));
    }
    if (m.find("ForPrivateResGroup") != m.end() && !m["ForPrivateResGroup"].empty()) {
      forPrivateResGroup = make_shared<bool>(boost::any_cast<bool>(m["ForPrivateResGroup"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
  }


  virtual ~GetDataServiceApiContextRequest() = default;
};
class GetDataServiceApiContextResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};

  GetDataServiceApiContextResponseBody() {}

  explicit GetDataServiceApiContextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDataServiceApiContextResponseBody() = default;
};
class GetDataServiceApiContextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataServiceApiContextResponseBody> body{};

  GetDataServiceApiContextResponse() {}

  explicit GetDataServiceApiContextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataServiceApiContextResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataServiceApiContextResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataServiceApiContextResponse() = default;
};
class GetDataServiceConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<long> connectionId{};
  shared_ptr<string> dataSourceType{};

  GetDataServiceConnectionRequest() {}

  explicit GetDataServiceConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<long>(boost::any_cast<long>(m["ConnectionId"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
  }


  virtual ~GetDataServiceConnectionRequest() = default;
};
class GetDataServiceConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};

  GetDataServiceConnectionResponseBody() {}

  explicit GetDataServiceConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDataServiceConnectionResponseBody() = default;
};
class GetDataServiceConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataServiceConnectionResponseBody> body{};

  GetDataServiceConnectionResponse() {}

  explicit GetDataServiceConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataServiceConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataServiceConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataServiceConnectionResponse() = default;
};
class GetDataServiceContextUpdateEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};

  GetDataServiceContextUpdateEventResponseBody() {}

  explicit GetDataServiceContextUpdateEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDataServiceContextUpdateEventResponseBody() = default;
};
class GetDataServiceContextUpdateEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataServiceContextUpdateEventResponseBody> body{};

  GetDataServiceContextUpdateEventResponse() {}

  explicit GetDataServiceContextUpdateEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataServiceContextUpdateEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataServiceContextUpdateEventResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataServiceContextUpdateEventResponse() = default;
};
class GetDataServiceFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<long> functionId{};

  GetDataServiceFunctionRequest() {}

  explicit GetDataServiceFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functionId) {
      res["FunctionId"] = boost::any(*functionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FunctionId") != m.end() && !m["FunctionId"].empty()) {
      functionId = make_shared<long>(boost::any_cast<long>(m["FunctionId"]));
    }
  }


  virtual ~GetDataServiceFunctionRequest() = default;
};
class GetDataServiceFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};

  GetDataServiceFunctionResponseBody() {}

  explicit GetDataServiceFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDataServiceFunctionResponseBody() = default;
};
class GetDataServiceFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataServiceFunctionResponseBody> body{};

  GetDataServiceFunctionResponse() {}

  explicit GetDataServiceFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataServiceFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataServiceFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataServiceFunctionResponse() = default;
};
class GetSwitchValueRequest : public Darabonba::Model {
public:
  shared_ptr<string> switchName{};

  GetSwitchValueRequest() {}

  explicit GetSwitchValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (switchName) {
      res["SwitchName"] = boost::any(*switchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SwitchName") != m.end() && !m["SwitchName"].empty()) {
      switchName = make_shared<string>(boost::any_cast<string>(m["SwitchName"]));
    }
  }


  virtual ~GetSwitchValueRequest() = default;
};
class GetSwitchValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetSwitchValueResponseBody() {}

  explicit GetSwitchValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSwitchValueResponseBody() = default;
};
class GetSwitchValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSwitchValueResponseBody> body{};

  GetSwitchValueResponse() {}

  explicit GetSwitchValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSwitchValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSwitchValueResponseBody>(model1);
      }
    }
  }


  virtual ~GetSwitchValueResponse() = default;
};
class GetTimeMachineTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetTimeMachineTaskRequest() {}

  explicit GetTimeMachineTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetTimeMachineTaskRequest() = default;
};
class GetTimeMachineTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> hostName{};
  shared_ptr<string> id{};
  shared_ptr<string> objId{};
  shared_ptr<string> objName{};
  shared_ptr<string> operType{};
  shared_ptr<string> status{};

  GetTimeMachineTaskResponseBodyData() {}

  explicit GetTimeMachineTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (objId) {
      res["ObjId"] = boost::any(*objId);
    }
    if (objName) {
      res["ObjName"] = boost::any(*objName);
    }
    if (operType) {
      res["OperType"] = boost::any(*operType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ObjId") != m.end() && !m["ObjId"].empty()) {
      objId = make_shared<string>(boost::any_cast<string>(m["ObjId"]));
    }
    if (m.find("ObjName") != m.end() && !m["ObjName"].empty()) {
      objName = make_shared<string>(boost::any_cast<string>(m["ObjName"]));
    }
    if (m.find("OperType") != m.end() && !m["OperType"].empty()) {
      operType = make_shared<string>(boost::any_cast<string>(m["OperType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetTimeMachineTaskResponseBodyData() = default;
};
class GetTimeMachineTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetTimeMachineTaskResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};

  GetTimeMachineTaskResponseBody() {}

  explicit GetTimeMachineTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTimeMachineTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTimeMachineTaskResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetTimeMachineTaskResponseBody() = default;
};
class GetTimeMachineTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTimeMachineTaskResponseBody> body{};

  GetTimeMachineTaskResponse() {}

  explicit GetTimeMachineTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTimeMachineTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTimeMachineTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetTimeMachineTaskResponse() = default;
};
class ListEmrHiveAuditLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTime{};
  shared_ptr<string> tableName{};

  ListEmrHiveAuditLogsRequest() {}

  explicit ListEmrHiveAuditLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~ListEmrHiveAuditLogsRequest() = default;
};
class ListEmrHiveAuditLogsResponseBodyDataPagedData : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<long> eventTime{};
  shared_ptr<vector<string>> groups{};
  shared_ptr<string> operation{};
  shared_ptr<string> table{};
  shared_ptr<string> user{};

  ListEmrHiveAuditLogsResponseBodyDataPagedData() {}

  explicit ListEmrHiveAuditLogsResponseBodyDataPagedData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    if (groups) {
      res["Groups"] = boost::any(*groups);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<long>(boost::any_cast<long>(m["EventTime"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Groups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~ListEmrHiveAuditLogsResponseBodyDataPagedData() = default;
};
class ListEmrHiveAuditLogsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListEmrHiveAuditLogsResponseBodyDataPagedData>> pagedData{};
  shared_ptr<long> totalCount{};

  ListEmrHiveAuditLogsResponseBodyData() {}

  explicit ListEmrHiveAuditLogsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pagedData) {
      vector<boost::any> temp1;
      for(auto item1:*pagedData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PagedData"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PagedData") != m.end() && !m["PagedData"].empty()) {
      if (typeid(vector<boost::any>) == m["PagedData"].type()) {
        vector<ListEmrHiveAuditLogsResponseBodyDataPagedData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PagedData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEmrHiveAuditLogsResponseBodyDataPagedData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pagedData = make_shared<vector<ListEmrHiveAuditLogsResponseBodyDataPagedData>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListEmrHiveAuditLogsResponseBodyData() = default;
};
class ListEmrHiveAuditLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListEmrHiveAuditLogsResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListEmrHiveAuditLogsResponseBody() {}

  explicit ListEmrHiveAuditLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListEmrHiveAuditLogsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListEmrHiveAuditLogsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListEmrHiveAuditLogsResponseBody() = default;
};
class ListEmrHiveAuditLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEmrHiveAuditLogsResponseBody> body{};

  ListEmrHiveAuditLogsResponse() {}

  explicit ListEmrHiveAuditLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEmrHiveAuditLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEmrHiveAuditLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEmrHiveAuditLogsResponse() = default;
};
class ListEmrHiveDatabasesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  ListEmrHiveDatabasesRequest() {}

  explicit ListEmrHiveDatabasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~ListEmrHiveDatabasesRequest() = default;
};
class ListEmrHiveDatabasesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerType{};
  shared_ptr<string> parameters{};
  shared_ptr<string> region{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListEmrHiveDatabasesResponseBodyData() {}

  explicit ListEmrHiveDatabasesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerType) {
      res["OwnerType"] = boost::any(*ownerType);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (region) {
      res["Region"] = boost::any(*region);
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
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("OwnerType") != m.end() && !m["OwnerType"].empty()) {
      ownerType = make_shared<string>(boost::any_cast<string>(m["OwnerType"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListEmrHiveDatabasesResponseBodyData() = default;
};
class ListEmrHiveDatabasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListEmrHiveDatabasesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListEmrHiveDatabasesResponseBody() {}

  explicit ListEmrHiveDatabasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListEmrHiveDatabasesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEmrHiveDatabasesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEmrHiveDatabasesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListEmrHiveDatabasesResponseBody() = default;
};
class ListEmrHiveDatabasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEmrHiveDatabasesResponseBody> body{};

  ListEmrHiveDatabasesResponse() {}

  explicit ListEmrHiveDatabasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEmrHiveDatabasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEmrHiveDatabasesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEmrHiveDatabasesResponse() = default;
};
class ListEmrHiveTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListEmrHiveTablesRequest() {}

  explicit ListEmrHiveTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListEmrHiveTablesRequest() = default;
};
class ListEmrHiveTablesResponseBodyDataPagedData : public Darabonba::Model {
public:
  shared_ptr<string> clusterBizId{};
  shared_ptr<string> clusterBizName{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> inputFormat{};
  shared_ptr<bool> isCompressed{};
  shared_ptr<bool> isTemporary{};
  shared_ptr<string> lastAccessTime{};
  shared_ptr<string> lastModifyTime{};
  shared_ptr<string> location{};
  shared_ptr<string> outputFormat{};
  shared_ptr<string> owner{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerType{};
  shared_ptr<string> partitionKeys{};
  shared_ptr<string> serializationLib{};
  shared_ptr<string> tableComment{};
  shared_ptr<string> tableDesc{};
  shared_ptr<string> tableName{};
  shared_ptr<string> tableParameters{};
  shared_ptr<string> tableType{};

  ListEmrHiveTablesResponseBodyDataPagedData() {}

  explicit ListEmrHiveTablesResponseBodyDataPagedData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    if (clusterBizName) {
      res["ClusterBizName"] = boost::any(*clusterBizName);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (inputFormat) {
      res["InputFormat"] = boost::any(*inputFormat);
    }
    if (isCompressed) {
      res["IsCompressed"] = boost::any(*isCompressed);
    }
    if (isTemporary) {
      res["IsTemporary"] = boost::any(*isTemporary);
    }
    if (lastAccessTime) {
      res["LastAccessTime"] = boost::any(*lastAccessTime);
    }
    if (lastModifyTime) {
      res["LastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (outputFormat) {
      res["OutputFormat"] = boost::any(*outputFormat);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerType) {
      res["OwnerType"] = boost::any(*ownerType);
    }
    if (partitionKeys) {
      res["PartitionKeys"] = boost::any(*partitionKeys);
    }
    if (serializationLib) {
      res["SerializationLib"] = boost::any(*serializationLib);
    }
    if (tableComment) {
      res["TableComment"] = boost::any(*tableComment);
    }
    if (tableDesc) {
      res["TableDesc"] = boost::any(*tableDesc);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (tableParameters) {
      res["TableParameters"] = boost::any(*tableParameters);
    }
    if (tableType) {
      res["TableType"] = boost::any(*tableType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
    if (m.find("ClusterBizName") != m.end() && !m["ClusterBizName"].empty()) {
      clusterBizName = make_shared<string>(boost::any_cast<string>(m["ClusterBizName"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("InputFormat") != m.end() && !m["InputFormat"].empty()) {
      inputFormat = make_shared<string>(boost::any_cast<string>(m["InputFormat"]));
    }
    if (m.find("IsCompressed") != m.end() && !m["IsCompressed"].empty()) {
      isCompressed = make_shared<bool>(boost::any_cast<bool>(m["IsCompressed"]));
    }
    if (m.find("IsTemporary") != m.end() && !m["IsTemporary"].empty()) {
      isTemporary = make_shared<bool>(boost::any_cast<bool>(m["IsTemporary"]));
    }
    if (m.find("LastAccessTime") != m.end() && !m["LastAccessTime"].empty()) {
      lastAccessTime = make_shared<string>(boost::any_cast<string>(m["LastAccessTime"]));
    }
    if (m.find("LastModifyTime") != m.end() && !m["LastModifyTime"].empty()) {
      lastModifyTime = make_shared<string>(boost::any_cast<string>(m["LastModifyTime"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("OutputFormat") != m.end() && !m["OutputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["OutputFormat"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("OwnerType") != m.end() && !m["OwnerType"].empty()) {
      ownerType = make_shared<string>(boost::any_cast<string>(m["OwnerType"]));
    }
    if (m.find("PartitionKeys") != m.end() && !m["PartitionKeys"].empty()) {
      partitionKeys = make_shared<string>(boost::any_cast<string>(m["PartitionKeys"]));
    }
    if (m.find("SerializationLib") != m.end() && !m["SerializationLib"].empty()) {
      serializationLib = make_shared<string>(boost::any_cast<string>(m["SerializationLib"]));
    }
    if (m.find("TableComment") != m.end() && !m["TableComment"].empty()) {
      tableComment = make_shared<string>(boost::any_cast<string>(m["TableComment"]));
    }
    if (m.find("TableDesc") != m.end() && !m["TableDesc"].empty()) {
      tableDesc = make_shared<string>(boost::any_cast<string>(m["TableDesc"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TableParameters") != m.end() && !m["TableParameters"].empty()) {
      tableParameters = make_shared<string>(boost::any_cast<string>(m["TableParameters"]));
    }
    if (m.find("TableType") != m.end() && !m["TableType"].empty()) {
      tableType = make_shared<string>(boost::any_cast<string>(m["TableType"]));
    }
  }


  virtual ~ListEmrHiveTablesResponseBodyDataPagedData() = default;
};
class ListEmrHiveTablesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListEmrHiveTablesResponseBodyDataPagedData>> pagedData{};
  shared_ptr<long> totalCount{};

  ListEmrHiveTablesResponseBodyData() {}

  explicit ListEmrHiveTablesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pagedData) {
      vector<boost::any> temp1;
      for(auto item1:*pagedData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PagedData"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PagedData") != m.end() && !m["PagedData"].empty()) {
      if (typeid(vector<boost::any>) == m["PagedData"].type()) {
        vector<ListEmrHiveTablesResponseBodyDataPagedData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PagedData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEmrHiveTablesResponseBodyDataPagedData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pagedData = make_shared<vector<ListEmrHiveTablesResponseBodyDataPagedData>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListEmrHiveTablesResponseBodyData() = default;
};
class ListEmrHiveTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListEmrHiveTablesResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListEmrHiveTablesResponseBody() {}

  explicit ListEmrHiveTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListEmrHiveTablesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListEmrHiveTablesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListEmrHiveTablesResponseBody() = default;
};
class ListEmrHiveTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEmrHiveTablesResponseBody> body{};

  ListEmrHiveTablesResponse() {}

  explicit ListEmrHiveTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEmrHiveTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEmrHiveTablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEmrHiveTablesResponse() = default;
};
class ListGovernanceIssueDataServiceAPIsRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizDate{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> projectId{};
  shared_ptr<string> ruleCategory{};
  shared_ptr<string> ruleId{};

  ListGovernanceIssueDataServiceAPIsRequest() {}

  explicit ListGovernanceIssueDataServiceAPIsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizDate) {
      res["BizDate"] = boost::any(*bizDate);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (ruleCategory) {
      res["RuleCategory"] = boost::any(*ruleCategory);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizDate") != m.end() && !m["BizDate"].empty()) {
      bizDate = make_shared<string>(boost::any_cast<string>(m["BizDate"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("RuleCategory") != m.end() && !m["RuleCategory"].empty()) {
      ruleCategory = make_shared<string>(boost::any_cast<string>(m["RuleCategory"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~ListGovernanceIssueDataServiceAPIsRequest() = default;
};
class ListGovernanceIssueDataServiceAPIsResponseBodyDataAPIs : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> bizDate{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> projectId{};
  shared_ptr<string> properties{};
  shared_ptr<string> ruleCategory{};
  shared_ptr<string> ruleId{};

  ListGovernanceIssueDataServiceAPIsResponseBodyDataAPIs() {}

  explicit ListGovernanceIssueDataServiceAPIsResponseBodyDataAPIs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (bizDate) {
      res["BizDate"] = boost::any(*bizDate);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (ruleCategory) {
      res["RuleCategory"] = boost::any(*ruleCategory);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("BizDate") != m.end() && !m["BizDate"].empty()) {
      bizDate = make_shared<string>(boost::any_cast<string>(m["BizDate"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("RuleCategory") != m.end() && !m["RuleCategory"].empty()) {
      ruleCategory = make_shared<string>(boost::any_cast<string>(m["RuleCategory"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~ListGovernanceIssueDataServiceAPIsResponseBodyDataAPIs() = default;
};
class ListGovernanceIssueDataServiceAPIsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListGovernanceIssueDataServiceAPIsResponseBodyDataAPIs>> APIs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListGovernanceIssueDataServiceAPIsResponseBodyData() {}

  explicit ListGovernanceIssueDataServiceAPIsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (APIs) {
      vector<boost::any> temp1;
      for(auto item1:*APIs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["APIs"] = boost::any(temp1);
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
    if (m.find("APIs") != m.end() && !m["APIs"].empty()) {
      if (typeid(vector<boost::any>) == m["APIs"].type()) {
        vector<ListGovernanceIssueDataServiceAPIsResponseBodyDataAPIs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["APIs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGovernanceIssueDataServiceAPIsResponseBodyDataAPIs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        APIs = make_shared<vector<ListGovernanceIssueDataServiceAPIsResponseBodyDataAPIs>>(expect1);
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


  virtual ~ListGovernanceIssueDataServiceAPIsResponseBodyData() = default;
};
class ListGovernanceIssueDataServiceAPIsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListGovernanceIssueDataServiceAPIsResponseBodyData> data{};
  shared_ptr<string> dynamicErrorCode{};
  shared_ptr<string> dynamicErrorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListGovernanceIssueDataServiceAPIsResponseBody() {}

  explicit ListGovernanceIssueDataServiceAPIsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicErrorCode) {
      res["DynamicErrorCode"] = boost::any(*dynamicErrorCode);
    }
    if (dynamicErrorMessage) {
      res["DynamicErrorMessage"] = boost::any(*dynamicErrorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListGovernanceIssueDataServiceAPIsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListGovernanceIssueDataServiceAPIsResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicErrorCode") != m.end() && !m["DynamicErrorCode"].empty()) {
      dynamicErrorCode = make_shared<string>(boost::any_cast<string>(m["DynamicErrorCode"]));
    }
    if (m.find("DynamicErrorMessage") != m.end() && !m["DynamicErrorMessage"].empty()) {
      dynamicErrorMessage = make_shared<string>(boost::any_cast<string>(m["DynamicErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListGovernanceIssueDataServiceAPIsResponseBody() = default;
};
class ListGovernanceIssueDataServiceAPIsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGovernanceIssueDataServiceAPIsResponseBody> body{};

  ListGovernanceIssueDataServiceAPIsResponse() {}

  explicit ListGovernanceIssueDataServiceAPIsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGovernanceIssueDataServiceAPIsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGovernanceIssueDataServiceAPIsResponseBody>(model1);
      }
    }
  }


  virtual ~ListGovernanceIssueDataServiceAPIsResponse() = default;
};
class ListGovernanceIssueTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizDate{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> projectId{};
  shared_ptr<string> ruleCategory{};
  shared_ptr<string> ruleId{};

  ListGovernanceIssueTablesRequest() {}

  explicit ListGovernanceIssueTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizDate) {
      res["BizDate"] = boost::any(*bizDate);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (ruleCategory) {
      res["RuleCategory"] = boost::any(*ruleCategory);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizDate") != m.end() && !m["BizDate"].empty()) {
      bizDate = make_shared<string>(boost::any_cast<string>(m["BizDate"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("RuleCategory") != m.end() && !m["RuleCategory"].empty()) {
      ruleCategory = make_shared<string>(boost::any_cast<string>(m["RuleCategory"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~ListGovernanceIssueTablesRequest() = default;
};
class ListGovernanceIssueTablesResponseBodyDataTables : public Darabonba::Model {
public:
  shared_ptr<string> bizDate{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> datasourceType{};
  shared_ptr<long> downstreamDependencyCount{};
  shared_ptr<long> lastAccessTime{};
  shared_ptr<long> lifeCycle{};
  shared_ptr<string> mcProjectName{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> projectId{};
  shared_ptr<string> properties{};
  shared_ptr<string> ruleCategory{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> schema{};
  shared_ptr<string> tableGuid{};
  shared_ptr<string> tableName{};
  shared_ptr<long> tableSize{};

  ListGovernanceIssueTablesResponseBodyDataTables() {}

  explicit ListGovernanceIssueTablesResponseBodyDataTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizDate) {
      res["BizDate"] = boost::any(*bizDate);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (datasourceType) {
      res["DatasourceType"] = boost::any(*datasourceType);
    }
    if (downstreamDependencyCount) {
      res["DownstreamDependencyCount"] = boost::any(*downstreamDependencyCount);
    }
    if (lastAccessTime) {
      res["LastAccessTime"] = boost::any(*lastAccessTime);
    }
    if (lifeCycle) {
      res["LifeCycle"] = boost::any(*lifeCycle);
    }
    if (mcProjectName) {
      res["McProjectName"] = boost::any(*mcProjectName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (ruleCategory) {
      res["RuleCategory"] = boost::any(*ruleCategory);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    if (tableGuid) {
      res["TableGuid"] = boost::any(*tableGuid);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (tableSize) {
      res["TableSize"] = boost::any(*tableSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizDate") != m.end() && !m["BizDate"].empty()) {
      bizDate = make_shared<string>(boost::any_cast<string>(m["BizDate"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("DatasourceType") != m.end() && !m["DatasourceType"].empty()) {
      datasourceType = make_shared<string>(boost::any_cast<string>(m["DatasourceType"]));
    }
    if (m.find("DownstreamDependencyCount") != m.end() && !m["DownstreamDependencyCount"].empty()) {
      downstreamDependencyCount = make_shared<long>(boost::any_cast<long>(m["DownstreamDependencyCount"]));
    }
    if (m.find("LastAccessTime") != m.end() && !m["LastAccessTime"].empty()) {
      lastAccessTime = make_shared<long>(boost::any_cast<long>(m["LastAccessTime"]));
    }
    if (m.find("LifeCycle") != m.end() && !m["LifeCycle"].empty()) {
      lifeCycle = make_shared<long>(boost::any_cast<long>(m["LifeCycle"]));
    }
    if (m.find("McProjectName") != m.end() && !m["McProjectName"].empty()) {
      mcProjectName = make_shared<string>(boost::any_cast<string>(m["McProjectName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("RuleCategory") != m.end() && !m["RuleCategory"].empty()) {
      ruleCategory = make_shared<string>(boost::any_cast<string>(m["RuleCategory"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
    if (m.find("TableGuid") != m.end() && !m["TableGuid"].empty()) {
      tableGuid = make_shared<string>(boost::any_cast<string>(m["TableGuid"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TableSize") != m.end() && !m["TableSize"].empty()) {
      tableSize = make_shared<long>(boost::any_cast<long>(m["TableSize"]));
    }
  }


  virtual ~ListGovernanceIssueTablesResponseBodyDataTables() = default;
};
class ListGovernanceIssueTablesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListGovernanceIssueTablesResponseBodyDataTables>> tables{};
  shared_ptr<long> totalCount{};

  ListGovernanceIssueTablesResponseBodyData() {}

  explicit ListGovernanceIssueTablesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tables"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<ListGovernanceIssueTablesResponseBodyDataTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGovernanceIssueTablesResponseBodyDataTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<ListGovernanceIssueTablesResponseBodyDataTables>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListGovernanceIssueTablesResponseBodyData() = default;
};
class ListGovernanceIssueTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListGovernanceIssueTablesResponseBodyData> data{};
  shared_ptr<string> dynamicErrorCode{};
  shared_ptr<string> dynamicErrorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListGovernanceIssueTablesResponseBody() {}

  explicit ListGovernanceIssueTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicErrorCode) {
      res["DynamicErrorCode"] = boost::any(*dynamicErrorCode);
    }
    if (dynamicErrorMessage) {
      res["DynamicErrorMessage"] = boost::any(*dynamicErrorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListGovernanceIssueTablesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListGovernanceIssueTablesResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicErrorCode") != m.end() && !m["DynamicErrorCode"].empty()) {
      dynamicErrorCode = make_shared<string>(boost::any_cast<string>(m["DynamicErrorCode"]));
    }
    if (m.find("DynamicErrorMessage") != m.end() && !m["DynamicErrorMessage"].empty()) {
      dynamicErrorMessage = make_shared<string>(boost::any_cast<string>(m["DynamicErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListGovernanceIssueTablesResponseBody() = default;
};
class ListGovernanceIssueTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGovernanceIssueTablesResponseBody> body{};

  ListGovernanceIssueTablesResponse() {}

  explicit ListGovernanceIssueTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGovernanceIssueTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGovernanceIssueTablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListGovernanceIssueTablesResponse() = default;
};
class ListGovernanceIssueTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizDate{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> projectId{};
  shared_ptr<string> ruleCategory{};
  shared_ptr<string> ruleId{};

  ListGovernanceIssueTasksRequest() {}

  explicit ListGovernanceIssueTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizDate) {
      res["BizDate"] = boost::any(*bizDate);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (ruleCategory) {
      res["RuleCategory"] = boost::any(*ruleCategory);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizDate") != m.end() && !m["BizDate"].empty()) {
      bizDate = make_shared<string>(boost::any_cast<string>(m["BizDate"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("RuleCategory") != m.end() && !m["RuleCategory"].empty()) {
      ruleCategory = make_shared<string>(boost::any_cast<string>(m["RuleCategory"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~ListGovernanceIssueTasksRequest() = default;
};
class ListGovernanceIssueTasksResponseBodyDataTasks : public Darabonba::Model {
public:
  shared_ptr<string> bizDate{};
  shared_ptr<long> nodeId{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> projectId{};
  shared_ptr<string> properties{};
  shared_ptr<string> ruleCategory{};
  shared_ptr<string> ruleId{};

  ListGovernanceIssueTasksResponseBodyDataTasks() {}

  explicit ListGovernanceIssueTasksResponseBodyDataTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizDate) {
      res["BizDate"] = boost::any(*bizDate);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (ruleCategory) {
      res["RuleCategory"] = boost::any(*ruleCategory);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizDate") != m.end() && !m["BizDate"].empty()) {
      bizDate = make_shared<string>(boost::any_cast<string>(m["BizDate"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<long>(boost::any_cast<long>(m["NodeId"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("RuleCategory") != m.end() && !m["RuleCategory"].empty()) {
      ruleCategory = make_shared<string>(boost::any_cast<string>(m["RuleCategory"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~ListGovernanceIssueTasksResponseBodyDataTasks() = default;
};
class ListGovernanceIssueTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListGovernanceIssueTasksResponseBodyDataTasks>> tasks{};
  shared_ptr<long> totalCount{};

  ListGovernanceIssueTasksResponseBodyData() {}

  explicit ListGovernanceIssueTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<ListGovernanceIssueTasksResponseBodyDataTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGovernanceIssueTasksResponseBodyDataTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ListGovernanceIssueTasksResponseBodyDataTasks>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListGovernanceIssueTasksResponseBodyData() = default;
};
class ListGovernanceIssueTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListGovernanceIssueTasksResponseBodyData> data{};
  shared_ptr<string> dynamicErrorCode{};
  shared_ptr<string> dynamicErrorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListGovernanceIssueTasksResponseBody() {}

  explicit ListGovernanceIssueTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicErrorCode) {
      res["DynamicErrorCode"] = boost::any(*dynamicErrorCode);
    }
    if (dynamicErrorMessage) {
      res["DynamicErrorMessage"] = boost::any(*dynamicErrorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListGovernanceIssueTasksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListGovernanceIssueTasksResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicErrorCode") != m.end() && !m["DynamicErrorCode"].empty()) {
      dynamicErrorCode = make_shared<string>(boost::any_cast<string>(m["DynamicErrorCode"]));
    }
    if (m.find("DynamicErrorMessage") != m.end() && !m["DynamicErrorMessage"].empty()) {
      dynamicErrorMessage = make_shared<string>(boost::any_cast<string>(m["DynamicErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListGovernanceIssueTasksResponseBody() = default;
};
class ListGovernanceIssueTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGovernanceIssueTasksResponseBody> body{};

  ListGovernanceIssueTasksResponse() {}

  explicit ListGovernanceIssueTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGovernanceIssueTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGovernanceIssueTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListGovernanceIssueTasksResponse() = default;
};
class ListGovernanceRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> issueType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListGovernanceRulesRequest() {}

  explicit ListGovernanceRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (issueType) {
      res["IssueType"] = boost::any(*issueType);
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
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("IssueType") != m.end() && !m["IssueType"].empty()) {
      issueType = make_shared<string>(boost::any_cast<string>(m["IssueType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListGovernanceRulesRequest() = default;
};
class ListGovernanceRulesResponseBodyDataRules : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> description{};
  shared_ptr<string> guide{};
  shared_ptr<string> id{};
  shared_ptr<string> issueType{};
  shared_ptr<string> name{};
  shared_ptr<string> note{};
  shared_ptr<string> rule{};

  ListGovernanceRulesResponseBodyDataRules() {}

  explicit ListGovernanceRulesResponseBodyDataRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (guide) {
      res["Guide"] = boost::any(*guide);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (issueType) {
      res["IssueType"] = boost::any(*issueType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (rule) {
      res["Rule"] = boost::any(*rule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Guide") != m.end() && !m["Guide"].empty()) {
      guide = make_shared<string>(boost::any_cast<string>(m["Guide"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IssueType") != m.end() && !m["IssueType"].empty()) {
      issueType = make_shared<string>(boost::any_cast<string>(m["IssueType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      rule = make_shared<string>(boost::any_cast<string>(m["Rule"]));
    }
  }


  virtual ~ListGovernanceRulesResponseBodyDataRules() = default;
};
class ListGovernanceRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListGovernanceRulesResponseBodyDataRules>> rules{};
  shared_ptr<long> totalCount{};

  ListGovernanceRulesResponseBodyData() {}

  explicit ListGovernanceRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<ListGovernanceRulesResponseBodyDataRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGovernanceRulesResponseBodyDataRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<ListGovernanceRulesResponseBodyDataRules>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListGovernanceRulesResponseBodyData() = default;
};
class ListGovernanceRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListGovernanceRulesResponseBodyData> data{};
  shared_ptr<string> dynamicErrorCode{};
  shared_ptr<string> dynamicErrorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListGovernanceRulesResponseBody() {}

  explicit ListGovernanceRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicErrorCode) {
      res["DynamicErrorCode"] = boost::any(*dynamicErrorCode);
    }
    if (dynamicErrorMessage) {
      res["DynamicErrorMessage"] = boost::any(*dynamicErrorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListGovernanceRulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListGovernanceRulesResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicErrorCode") != m.end() && !m["DynamicErrorCode"].empty()) {
      dynamicErrorCode = make_shared<string>(boost::any_cast<string>(m["DynamicErrorCode"]));
    }
    if (m.find("DynamicErrorMessage") != m.end() && !m["DynamicErrorMessage"].empty()) {
      dynamicErrorMessage = make_shared<string>(boost::any_cast<string>(m["DynamicErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListGovernanceRulesResponseBody() = default;
};
class ListGovernanceRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGovernanceRulesResponseBody> body{};

  ListGovernanceRulesResponse() {}

  explicit ListGovernanceRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGovernanceRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGovernanceRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListGovernanceRulesResponse() = default;
};
class ListHiveColumnLineagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> columnName{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> tableName{};

  ListHiveColumnLineagesRequest() {}

  explicit ListHiveColumnLineagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~ListHiveColumnLineagesRequest() = default;
};
class ListHiveColumnLineagesResponseBodyDataDownstreamLineages : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> columnName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> databaseName{};
  shared_ptr<long> directDownColumnNumber{};
  shared_ptr<long> directDownTableNumber{};
  shared_ptr<long> directUpperColumnNumber{};
  shared_ptr<long> directUpperTableNumber{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> source{};
  shared_ptr<string> tableName{};

  ListHiveColumnLineagesResponseBodyDataDownstreamLineages() {}

  explicit ListHiveColumnLineagesResponseBodyDataDownstreamLineages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (directDownColumnNumber) {
      res["DirectDownColumnNumber"] = boost::any(*directDownColumnNumber);
    }
    if (directDownTableNumber) {
      res["DirectDownTableNumber"] = boost::any(*directDownTableNumber);
    }
    if (directUpperColumnNumber) {
      res["DirectUpperColumnNumber"] = boost::any(*directUpperColumnNumber);
    }
    if (directUpperTableNumber) {
      res["DirectUpperTableNumber"] = boost::any(*directUpperTableNumber);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("DirectDownColumnNumber") != m.end() && !m["DirectDownColumnNumber"].empty()) {
      directDownColumnNumber = make_shared<long>(boost::any_cast<long>(m["DirectDownColumnNumber"]));
    }
    if (m.find("DirectDownTableNumber") != m.end() && !m["DirectDownTableNumber"].empty()) {
      directDownTableNumber = make_shared<long>(boost::any_cast<long>(m["DirectDownTableNumber"]));
    }
    if (m.find("DirectUpperColumnNumber") != m.end() && !m["DirectUpperColumnNumber"].empty()) {
      directUpperColumnNumber = make_shared<long>(boost::any_cast<long>(m["DirectUpperColumnNumber"]));
    }
    if (m.find("DirectUpperTableNumber") != m.end() && !m["DirectUpperTableNumber"].empty()) {
      directUpperTableNumber = make_shared<long>(boost::any_cast<long>(m["DirectUpperTableNumber"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~ListHiveColumnLineagesResponseBodyDataDownstreamLineages() = default;
};
class ListHiveColumnLineagesResponseBodyDataUpstreamLineages : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> columnName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> databaseName{};
  shared_ptr<long> directDownColumnNumber{};
  shared_ptr<long> directDownTableNumber{};
  shared_ptr<long> directUpperColumnNumber{};
  shared_ptr<long> directUpperTableNumber{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> source{};
  shared_ptr<string> tableName{};

  ListHiveColumnLineagesResponseBodyDataUpstreamLineages() {}

  explicit ListHiveColumnLineagesResponseBodyDataUpstreamLineages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (directDownColumnNumber) {
      res["DirectDownColumnNumber"] = boost::any(*directDownColumnNumber);
    }
    if (directDownTableNumber) {
      res["DirectDownTableNumber"] = boost::any(*directDownTableNumber);
    }
    if (directUpperColumnNumber) {
      res["DirectUpperColumnNumber"] = boost::any(*directUpperColumnNumber);
    }
    if (directUpperTableNumber) {
      res["DirectUpperTableNumber"] = boost::any(*directUpperTableNumber);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("DirectDownColumnNumber") != m.end() && !m["DirectDownColumnNumber"].empty()) {
      directDownColumnNumber = make_shared<long>(boost::any_cast<long>(m["DirectDownColumnNumber"]));
    }
    if (m.find("DirectDownTableNumber") != m.end() && !m["DirectDownTableNumber"].empty()) {
      directDownTableNumber = make_shared<long>(boost::any_cast<long>(m["DirectDownTableNumber"]));
    }
    if (m.find("DirectUpperColumnNumber") != m.end() && !m["DirectUpperColumnNumber"].empty()) {
      directUpperColumnNumber = make_shared<long>(boost::any_cast<long>(m["DirectUpperColumnNumber"]));
    }
    if (m.find("DirectUpperTableNumber") != m.end() && !m["DirectUpperTableNumber"].empty()) {
      directUpperTableNumber = make_shared<long>(boost::any_cast<long>(m["DirectUpperTableNumber"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~ListHiveColumnLineagesResponseBodyDataUpstreamLineages() = default;
};
class ListHiveColumnLineagesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListHiveColumnLineagesResponseBodyDataDownstreamLineages>> downstreamLineages{};
  shared_ptr<long> downstreamNumber{};
  shared_ptr<vector<ListHiveColumnLineagesResponseBodyDataUpstreamLineages>> upstreamLineages{};
  shared_ptr<long> upstreamNumber{};

  ListHiveColumnLineagesResponseBodyData() {}

  explicit ListHiveColumnLineagesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downstreamLineages) {
      vector<boost::any> temp1;
      for(auto item1:*downstreamLineages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DownstreamLineages"] = boost::any(temp1);
    }
    if (downstreamNumber) {
      res["DownstreamNumber"] = boost::any(*downstreamNumber);
    }
    if (upstreamLineages) {
      vector<boost::any> temp1;
      for(auto item1:*upstreamLineages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UpstreamLineages"] = boost::any(temp1);
    }
    if (upstreamNumber) {
      res["UpstreamNumber"] = boost::any(*upstreamNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownstreamLineages") != m.end() && !m["DownstreamLineages"].empty()) {
      if (typeid(vector<boost::any>) == m["DownstreamLineages"].type()) {
        vector<ListHiveColumnLineagesResponseBodyDataDownstreamLineages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DownstreamLineages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHiveColumnLineagesResponseBodyDataDownstreamLineages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        downstreamLineages = make_shared<vector<ListHiveColumnLineagesResponseBodyDataDownstreamLineages>>(expect1);
      }
    }
    if (m.find("DownstreamNumber") != m.end() && !m["DownstreamNumber"].empty()) {
      downstreamNumber = make_shared<long>(boost::any_cast<long>(m["DownstreamNumber"]));
    }
    if (m.find("UpstreamLineages") != m.end() && !m["UpstreamLineages"].empty()) {
      if (typeid(vector<boost::any>) == m["UpstreamLineages"].type()) {
        vector<ListHiveColumnLineagesResponseBodyDataUpstreamLineages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UpstreamLineages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHiveColumnLineagesResponseBodyDataUpstreamLineages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        upstreamLineages = make_shared<vector<ListHiveColumnLineagesResponseBodyDataUpstreamLineages>>(expect1);
      }
    }
    if (m.find("UpstreamNumber") != m.end() && !m["UpstreamNumber"].empty()) {
      upstreamNumber = make_shared<long>(boost::any_cast<long>(m["UpstreamNumber"]));
    }
  }


  virtual ~ListHiveColumnLineagesResponseBodyData() = default;
};
class ListHiveColumnLineagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListHiveColumnLineagesResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListHiveColumnLineagesResponseBody() {}

  explicit ListHiveColumnLineagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListHiveColumnLineagesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListHiveColumnLineagesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListHiveColumnLineagesResponseBody() = default;
};
class ListHiveColumnLineagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHiveColumnLineagesResponseBody> body{};

  ListHiveColumnLineagesResponse() {}

  explicit ListHiveColumnLineagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListHiveColumnLineagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHiveColumnLineagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListHiveColumnLineagesResponse() = default;
};
class ListHiveTableLineagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> tableName{};

  ListHiveTableLineagesRequest() {}

  explicit ListHiveTableLineagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~ListHiveTableLineagesRequest() = default;
};
class ListHiveTableLineagesResponseBodyDataDownstreamLineages : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> engine{};
  shared_ptr<string> jobId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> queryText{};
  shared_ptr<string> source{};
  shared_ptr<string> tableName{};

  ListHiveTableLineagesResponseBodyDataDownstreamLineages() {}

  explicit ListHiveTableLineagesResponseBodyDataDownstreamLineages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (queryText) {
      res["QueryText"] = boost::any(*queryText);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("QueryText") != m.end() && !m["QueryText"].empty()) {
      queryText = make_shared<string>(boost::any_cast<string>(m["QueryText"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~ListHiveTableLineagesResponseBodyDataDownstreamLineages() = default;
};
class ListHiveTableLineagesResponseBodyDataUpstreamLineages : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> engine{};
  shared_ptr<string> jobId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> queryText{};
  shared_ptr<string> source{};
  shared_ptr<string> tableName{};

  ListHiveTableLineagesResponseBodyDataUpstreamLineages() {}

  explicit ListHiveTableLineagesResponseBodyDataUpstreamLineages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (queryText) {
      res["QueryText"] = boost::any(*queryText);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("QueryText") != m.end() && !m["QueryText"].empty()) {
      queryText = make_shared<string>(boost::any_cast<string>(m["QueryText"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~ListHiveTableLineagesResponseBodyDataUpstreamLineages() = default;
};
class ListHiveTableLineagesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListHiveTableLineagesResponseBodyDataDownstreamLineages>> downstreamLineages{};
  shared_ptr<long> downstreamNumber{};
  shared_ptr<vector<ListHiveTableLineagesResponseBodyDataUpstreamLineages>> upstreamLineages{};
  shared_ptr<long> upstreamNumber{};

  ListHiveTableLineagesResponseBodyData() {}

  explicit ListHiveTableLineagesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downstreamLineages) {
      vector<boost::any> temp1;
      for(auto item1:*downstreamLineages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DownstreamLineages"] = boost::any(temp1);
    }
    if (downstreamNumber) {
      res["DownstreamNumber"] = boost::any(*downstreamNumber);
    }
    if (upstreamLineages) {
      vector<boost::any> temp1;
      for(auto item1:*upstreamLineages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UpstreamLineages"] = boost::any(temp1);
    }
    if (upstreamNumber) {
      res["UpstreamNumber"] = boost::any(*upstreamNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownstreamLineages") != m.end() && !m["DownstreamLineages"].empty()) {
      if (typeid(vector<boost::any>) == m["DownstreamLineages"].type()) {
        vector<ListHiveTableLineagesResponseBodyDataDownstreamLineages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DownstreamLineages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHiveTableLineagesResponseBodyDataDownstreamLineages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        downstreamLineages = make_shared<vector<ListHiveTableLineagesResponseBodyDataDownstreamLineages>>(expect1);
      }
    }
    if (m.find("DownstreamNumber") != m.end() && !m["DownstreamNumber"].empty()) {
      downstreamNumber = make_shared<long>(boost::any_cast<long>(m["DownstreamNumber"]));
    }
    if (m.find("UpstreamLineages") != m.end() && !m["UpstreamLineages"].empty()) {
      if (typeid(vector<boost::any>) == m["UpstreamLineages"].type()) {
        vector<ListHiveTableLineagesResponseBodyDataUpstreamLineages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UpstreamLineages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHiveTableLineagesResponseBodyDataUpstreamLineages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        upstreamLineages = make_shared<vector<ListHiveTableLineagesResponseBodyDataUpstreamLineages>>(expect1);
      }
    }
    if (m.find("UpstreamNumber") != m.end() && !m["UpstreamNumber"].empty()) {
      upstreamNumber = make_shared<long>(boost::any_cast<long>(m["UpstreamNumber"]));
    }
  }


  virtual ~ListHiveTableLineagesResponseBodyData() = default;
};
class ListHiveTableLineagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListHiveTableLineagesResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListHiveTableLineagesResponseBody() {}

  explicit ListHiveTableLineagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListHiveTableLineagesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListHiveTableLineagesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListHiveTableLineagesResponseBody() = default;
};
class ListHiveTableLineagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHiveTableLineagesResponseBody> body{};

  ListHiveTableLineagesResponse() {}

  explicit ListHiveTableLineagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListHiveTableLineagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHiveTableLineagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListHiveTableLineagesResponse() = default;
};
class ListTablePartitionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> tableName{};

  ListTablePartitionsRequest() {}

  explicit ListTablePartitionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~ListTablePartitionsRequest() = default;
};
class ListTablePartitionsResponseBodyDataPagedData : public Darabonba::Model {
public:
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> location{};
  shared_ptr<string> partitionComment{};
  shared_ptr<string> partitionName{};
  shared_ptr<string> partitionPath{};
  shared_ptr<string> partitionType{};

  ListTablePartitionsResponseBodyDataPagedData() {}

  explicit ListTablePartitionsResponseBodyDataPagedData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (partitionComment) {
      res["PartitionComment"] = boost::any(*partitionComment);
    }
    if (partitionName) {
      res["PartitionName"] = boost::any(*partitionName);
    }
    if (partitionPath) {
      res["PartitionPath"] = boost::any(*partitionPath);
    }
    if (partitionType) {
      res["PartitionType"] = boost::any(*partitionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("PartitionComment") != m.end() && !m["PartitionComment"].empty()) {
      partitionComment = make_shared<string>(boost::any_cast<string>(m["PartitionComment"]));
    }
    if (m.find("PartitionName") != m.end() && !m["PartitionName"].empty()) {
      partitionName = make_shared<string>(boost::any_cast<string>(m["PartitionName"]));
    }
    if (m.find("PartitionPath") != m.end() && !m["PartitionPath"].empty()) {
      partitionPath = make_shared<string>(boost::any_cast<string>(m["PartitionPath"]));
    }
    if (m.find("PartitionType") != m.end() && !m["PartitionType"].empty()) {
      partitionType = make_shared<string>(boost::any_cast<string>(m["PartitionType"]));
    }
  }


  virtual ~ListTablePartitionsResponseBodyDataPagedData() = default;
};
class ListTablePartitionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListTablePartitionsResponseBodyDataPagedData>> pagedData{};
  shared_ptr<long> totalCount{};

  ListTablePartitionsResponseBodyData() {}

  explicit ListTablePartitionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pagedData) {
      vector<boost::any> temp1;
      for(auto item1:*pagedData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PagedData"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PagedData") != m.end() && !m["PagedData"].empty()) {
      if (typeid(vector<boost::any>) == m["PagedData"].type()) {
        vector<ListTablePartitionsResponseBodyDataPagedData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PagedData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTablePartitionsResponseBodyDataPagedData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pagedData = make_shared<vector<ListTablePartitionsResponseBodyDataPagedData>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTablePartitionsResponseBodyData() = default;
};
class ListTablePartitionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListTablePartitionsResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListTablePartitionsResponseBody() {}

  explicit ListTablePartitionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListTablePartitionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListTablePartitionsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListTablePartitionsResponseBody() = default;
};
class ListTablePartitionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTablePartitionsResponseBody> body{};

  ListTablePartitionsResponse() {}

  explicit ListTablePartitionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTablePartitionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTablePartitionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTablePartitionsResponse() = default;
};
class OpenDataWorksStandardServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};

  OpenDataWorksStandardServiceRequest() {}

  explicit OpenDataWorksStandardServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~OpenDataWorksStandardServiceRequest() = default;
};
class OpenDataWorksStandardServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenDataWorksStandardServiceResponseBody() {}

  explicit OpenDataWorksStandardServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenDataWorksStandardServiceResponseBody() = default;
};
class OpenDataWorksStandardServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenDataWorksStandardServiceResponseBody> body{};

  OpenDataWorksStandardServiceResponse() {}

  explicit OpenDataWorksStandardServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenDataWorksStandardServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenDataWorksStandardServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenDataWorksStandardServiceResponse() = default;
};
class SearchManualDagNodeInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> dagId{};
  shared_ptr<string> projectName{};

  SearchManualDagNodeInstanceRequest() {}

  explicit SearchManualDagNodeInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dagId) {
      res["DagId"] = boost::any(*dagId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DagId") != m.end() && !m["DagId"].empty()) {
      dagId = make_shared<long>(boost::any_cast<long>(m["DagId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~SearchManualDagNodeInstanceRequest() = default;
};
class SearchManualDagNodeInstanceResponseBodyDataNodeInsInfo : public Darabonba::Model {
public:
  shared_ptr<string> beginRunningTime{};
  shared_ptr<string> beginWaitResTime{};
  shared_ptr<string> beginWaitTimeTime{};
  shared_ptr<string> bizdate{};
  shared_ptr<string> createTime{};
  shared_ptr<long> dagId{};
  shared_ptr<long> dagType{};
  shared_ptr<string> finishTime{};
  shared_ptr<long> instanceId{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> paraValue{};
  shared_ptr<long> status{};

  SearchManualDagNodeInstanceResponseBodyDataNodeInsInfo() {}

  explicit SearchManualDagNodeInstanceResponseBodyDataNodeInsInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginRunningTime) {
      res["BeginRunningTime"] = boost::any(*beginRunningTime);
    }
    if (beginWaitResTime) {
      res["BeginWaitResTime"] = boost::any(*beginWaitResTime);
    }
    if (beginWaitTimeTime) {
      res["BeginWaitTimeTime"] = boost::any(*beginWaitTimeTime);
    }
    if (bizdate) {
      res["Bizdate"] = boost::any(*bizdate);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dagId) {
      res["DagId"] = boost::any(*dagId);
    }
    if (dagType) {
      res["DagType"] = boost::any(*dagType);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (paraValue) {
      res["ParaValue"] = boost::any(*paraValue);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginRunningTime") != m.end() && !m["BeginRunningTime"].empty()) {
      beginRunningTime = make_shared<string>(boost::any_cast<string>(m["BeginRunningTime"]));
    }
    if (m.find("BeginWaitResTime") != m.end() && !m["BeginWaitResTime"].empty()) {
      beginWaitResTime = make_shared<string>(boost::any_cast<string>(m["BeginWaitResTime"]));
    }
    if (m.find("BeginWaitTimeTime") != m.end() && !m["BeginWaitTimeTime"].empty()) {
      beginWaitTimeTime = make_shared<string>(boost::any_cast<string>(m["BeginWaitTimeTime"]));
    }
    if (m.find("Bizdate") != m.end() && !m["Bizdate"].empty()) {
      bizdate = make_shared<string>(boost::any_cast<string>(m["Bizdate"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DagId") != m.end() && !m["DagId"].empty()) {
      dagId = make_shared<long>(boost::any_cast<long>(m["DagId"]));
    }
    if (m.find("DagType") != m.end() && !m["DagType"].empty()) {
      dagType = make_shared<long>(boost::any_cast<long>(m["DagType"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("ParaValue") != m.end() && !m["ParaValue"].empty()) {
      paraValue = make_shared<string>(boost::any_cast<string>(m["ParaValue"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~SearchManualDagNodeInstanceResponseBodyDataNodeInsInfo() = default;
};
class SearchManualDagNodeInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SearchManualDagNodeInstanceResponseBodyDataNodeInsInfo>> nodeInsInfo{};

  SearchManualDagNodeInstanceResponseBodyData() {}

  explicit SearchManualDagNodeInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeInsInfo) {
      vector<boost::any> temp1;
      for(auto item1:*nodeInsInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeInsInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeInsInfo") != m.end() && !m["NodeInsInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeInsInfo"].type()) {
        vector<SearchManualDagNodeInstanceResponseBodyDataNodeInsInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeInsInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchManualDagNodeInstanceResponseBodyDataNodeInsInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeInsInfo = make_shared<vector<SearchManualDagNodeInstanceResponseBodyDataNodeInsInfo>>(expect1);
      }
    }
  }


  virtual ~SearchManualDagNodeInstanceResponseBodyData() = default;
};
class SearchManualDagNodeInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<SearchManualDagNodeInstanceResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SearchManualDagNodeInstanceResponseBody() {}

  explicit SearchManualDagNodeInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SearchManualDagNodeInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SearchManualDagNodeInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SearchManualDagNodeInstanceResponseBody() = default;
};
class SearchManualDagNodeInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchManualDagNodeInstanceResponseBody> body{};

  SearchManualDagNodeInstanceResponse() {}

  explicit SearchManualDagNodeInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchManualDagNodeInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchManualDagNodeInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~SearchManualDagNodeInstanceResponse() = default;
};
class SendTaskMetaCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> connectionInfo{};
  shared_ptr<long> endTime{};
  shared_ptr<vector<string>> resources{};
  shared_ptr<long> startTime{};
  shared_ptr<string> subType{};
  shared_ptr<string> taskEnvParam{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> user{};

  SendTaskMetaCallbackRequest() {}

  explicit SendTaskMetaCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (connectionInfo) {
      res["ConnectionInfo"] = boost::any(*connectionInfo);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (taskEnvParam) {
      res["TaskEnvParam"] = boost::any(*taskEnvParam);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ConnectionInfo") != m.end() && !m["ConnectionInfo"].empty()) {
      connectionInfo = make_shared<string>(boost::any_cast<string>(m["ConnectionInfo"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Resources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resources = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("TaskEnvParam") != m.end() && !m["TaskEnvParam"].empty()) {
      taskEnvParam = make_shared<string>(boost::any_cast<string>(m["TaskEnvParam"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~SendTaskMetaCallbackRequest() = default;
};
class SendTaskMetaCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errMsg{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> requestId{};

  SendTaskMetaCallbackResponseBody() {}

  explicit SendTaskMetaCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendTaskMetaCallbackResponseBody() = default;
};
class SendTaskMetaCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendTaskMetaCallbackResponseBody> body{};

  SendTaskMetaCallbackResponse() {}

  explicit SendTaskMetaCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendTaskMetaCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendTaskMetaCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~SendTaskMetaCallbackResponse() = default;
};
class SetSwitchValueRequest : public Darabonba::Model {
public:
  shared_ptr<string> switchName{};
  shared_ptr<string> switchValue{};

  SetSwitchValueRequest() {}

  explicit SetSwitchValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (switchName) {
      res["SwitchName"] = boost::any(*switchName);
    }
    if (switchValue) {
      res["SwitchValue"] = boost::any(*switchValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SwitchName") != m.end() && !m["SwitchName"].empty()) {
      switchName = make_shared<string>(boost::any_cast<string>(m["SwitchName"]));
    }
    if (m.find("SwitchValue") != m.end() && !m["SwitchValue"].empty()) {
      switchValue = make_shared<string>(boost::any_cast<string>(m["SwitchValue"]));
    }
  }


  virtual ~SetSwitchValueRequest() = default;
};
class SetSwitchValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  SetSwitchValueResponseBody() {}

  explicit SetSwitchValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetSwitchValueResponseBody() = default;
};
class SetSwitchValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetSwitchValueResponseBody> body{};

  SetSwitchValueResponse() {}

  explicit SetSwitchValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetSwitchValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetSwitchValueResponseBody>(model1);
      }
    }
  }


  virtual ~SetSwitchValueResponse() = default;
};
class StartCollectQualityRequest : public Darabonba::Model {
public:
  shared_ptr<string> callbackResultString{};

  StartCollectQualityRequest() {}

  explicit StartCollectQualityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackResultString) {
      res["CallbackResultString"] = boost::any(*callbackResultString);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackResultString") != m.end() && !m["CallbackResultString"].empty()) {
      callbackResultString = make_shared<string>(boost::any_cast<string>(m["CallbackResultString"]));
    }
  }


  virtual ~StartCollectQualityRequest() = default;
};
class StartCollectQualityResponseBodyReturnValueStrongMethodSet : public Darabonba::Model {
public:
  shared_ptr<string> colName{};
  shared_ptr<bool> isColRule{};
  shared_ptr<bool> isSqlRule{};
  shared_ptr<bool> isStrongRule{};
  shared_ptr<string> methodName{};
  shared_ptr<long> ruleId{};

  StartCollectQualityResponseBodyReturnValueStrongMethodSet() {}

  explicit StartCollectQualityResponseBodyReturnValueStrongMethodSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (colName) {
      res["ColName"] = boost::any(*colName);
    }
    if (isColRule) {
      res["IsColRule"] = boost::any(*isColRule);
    }
    if (isSqlRule) {
      res["IsSqlRule"] = boost::any(*isSqlRule);
    }
    if (isStrongRule) {
      res["IsStrongRule"] = boost::any(*isStrongRule);
    }
    if (methodName) {
      res["MethodName"] = boost::any(*methodName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColName") != m.end() && !m["ColName"].empty()) {
      colName = make_shared<string>(boost::any_cast<string>(m["ColName"]));
    }
    if (m.find("IsColRule") != m.end() && !m["IsColRule"].empty()) {
      isColRule = make_shared<bool>(boost::any_cast<bool>(m["IsColRule"]));
    }
    if (m.find("IsSqlRule") != m.end() && !m["IsSqlRule"].empty()) {
      isSqlRule = make_shared<bool>(boost::any_cast<bool>(m["IsSqlRule"]));
    }
    if (m.find("IsStrongRule") != m.end() && !m["IsStrongRule"].empty()) {
      isStrongRule = make_shared<bool>(boost::any_cast<bool>(m["IsStrongRule"]));
    }
    if (m.find("MethodName") != m.end() && !m["MethodName"].empty()) {
      methodName = make_shared<string>(boost::any_cast<string>(m["MethodName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~StartCollectQualityResponseBodyReturnValueStrongMethodSet() = default;
};
class StartCollectQualityResponseBodyReturnValueWeakMethodSet : public Darabonba::Model {
public:
  shared_ptr<string> colName{};
  shared_ptr<bool> isColRule{};
  shared_ptr<bool> isSqlRule{};
  shared_ptr<bool> isStrongRule{};
  shared_ptr<string> methodName{};
  shared_ptr<long> ruleId{};

  StartCollectQualityResponseBodyReturnValueWeakMethodSet() {}

  explicit StartCollectQualityResponseBodyReturnValueWeakMethodSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (colName) {
      res["ColName"] = boost::any(*colName);
    }
    if (isColRule) {
      res["IsColRule"] = boost::any(*isColRule);
    }
    if (isSqlRule) {
      res["IsSqlRule"] = boost::any(*isSqlRule);
    }
    if (isStrongRule) {
      res["IsStrongRule"] = boost::any(*isStrongRule);
    }
    if (methodName) {
      res["MethodName"] = boost::any(*methodName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColName") != m.end() && !m["ColName"].empty()) {
      colName = make_shared<string>(boost::any_cast<string>(m["ColName"]));
    }
    if (m.find("IsColRule") != m.end() && !m["IsColRule"].empty()) {
      isColRule = make_shared<bool>(boost::any_cast<bool>(m["IsColRule"]));
    }
    if (m.find("IsSqlRule") != m.end() && !m["IsSqlRule"].empty()) {
      isSqlRule = make_shared<bool>(boost::any_cast<bool>(m["IsSqlRule"]));
    }
    if (m.find("IsStrongRule") != m.end() && !m["IsStrongRule"].empty()) {
      isStrongRule = make_shared<bool>(boost::any_cast<bool>(m["IsStrongRule"]));
    }
    if (m.find("MethodName") != m.end() && !m["MethodName"].empty()) {
      methodName = make_shared<string>(boost::any_cast<string>(m["MethodName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~StartCollectQualityResponseBodyReturnValueWeakMethodSet() = default;
};
class StartCollectQualityResponseBodyReturnValue : public Darabonba::Model {
public:
  shared_ptr<string> actualExpression{};
  shared_ptr<string> bizDate{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> connection{};
  shared_ptr<long> entityId{};
  shared_ptr<string> matchExpression{};
  shared_ptr<string> pluginName{};
  shared_ptr<vector<StartCollectQualityResponseBodyReturnValueStrongMethodSet>> strongMethodSet{};
  shared_ptr<string> tableGuid{};
  shared_ptr<string> taskId{};
  shared_ptr<vector<StartCollectQualityResponseBodyReturnValueWeakMethodSet>> weakMethodSet{};

  StartCollectQualityResponseBodyReturnValue() {}

  explicit StartCollectQualityResponseBodyReturnValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualExpression) {
      res["ActualExpression"] = boost::any(*actualExpression);
    }
    if (bizDate) {
      res["BizDate"] = boost::any(*bizDate);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (connection) {
      res["Connection"] = boost::any(*connection);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (matchExpression) {
      res["MatchExpression"] = boost::any(*matchExpression);
    }
    if (pluginName) {
      res["PluginName"] = boost::any(*pluginName);
    }
    if (strongMethodSet) {
      vector<boost::any> temp1;
      for(auto item1:*strongMethodSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StrongMethodSet"] = boost::any(temp1);
    }
    if (tableGuid) {
      res["TableGuid"] = boost::any(*tableGuid);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (weakMethodSet) {
      vector<boost::any> temp1;
      for(auto item1:*weakMethodSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WeakMethodSet"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualExpression") != m.end() && !m["ActualExpression"].empty()) {
      actualExpression = make_shared<string>(boost::any_cast<string>(m["ActualExpression"]));
    }
    if (m.find("BizDate") != m.end() && !m["BizDate"].empty()) {
      bizDate = make_shared<string>(boost::any_cast<string>(m["BizDate"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("Connection") != m.end() && !m["Connection"].empty()) {
      connection = make_shared<string>(boost::any_cast<string>(m["Connection"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("MatchExpression") != m.end() && !m["MatchExpression"].empty()) {
      matchExpression = make_shared<string>(boost::any_cast<string>(m["MatchExpression"]));
    }
    if (m.find("PluginName") != m.end() && !m["PluginName"].empty()) {
      pluginName = make_shared<string>(boost::any_cast<string>(m["PluginName"]));
    }
    if (m.find("StrongMethodSet") != m.end() && !m["StrongMethodSet"].empty()) {
      if (typeid(vector<boost::any>) == m["StrongMethodSet"].type()) {
        vector<StartCollectQualityResponseBodyReturnValueStrongMethodSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StrongMethodSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartCollectQualityResponseBodyReturnValueStrongMethodSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        strongMethodSet = make_shared<vector<StartCollectQualityResponseBodyReturnValueStrongMethodSet>>(expect1);
      }
    }
    if (m.find("TableGuid") != m.end() && !m["TableGuid"].empty()) {
      tableGuid = make_shared<string>(boost::any_cast<string>(m["TableGuid"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("WeakMethodSet") != m.end() && !m["WeakMethodSet"].empty()) {
      if (typeid(vector<boost::any>) == m["WeakMethodSet"].type()) {
        vector<StartCollectQualityResponseBodyReturnValueWeakMethodSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WeakMethodSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartCollectQualityResponseBodyReturnValueWeakMethodSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        weakMethodSet = make_shared<vector<StartCollectQualityResponseBodyReturnValueWeakMethodSet>>(expect1);
      }
    }
  }


  virtual ~StartCollectQualityResponseBodyReturnValue() = default;
};
class StartCollectQualityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> returnCode{};
  shared_ptr<vector<StartCollectQualityResponseBodyReturnValue>> returnValue{};

  StartCollectQualityResponseBody() {}

  explicit StartCollectQualityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (returnCode) {
      res["ReturnCode"] = boost::any(*returnCode);
    }
    if (returnValue) {
      vector<boost::any> temp1;
      for(auto item1:*returnValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReturnValue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ReturnCode") != m.end() && !m["ReturnCode"].empty()) {
      returnCode = make_shared<string>(boost::any_cast<string>(m["ReturnCode"]));
    }
    if (m.find("ReturnValue") != m.end() && !m["ReturnValue"].empty()) {
      if (typeid(vector<boost::any>) == m["ReturnValue"].type()) {
        vector<StartCollectQualityResponseBodyReturnValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReturnValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartCollectQualityResponseBodyReturnValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        returnValue = make_shared<vector<StartCollectQualityResponseBodyReturnValue>>(expect1);
      }
    }
  }


  virtual ~StartCollectQualityResponseBody() = default;
};
class StartCollectQualityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartCollectQualityResponseBody> body{};

  StartCollectQualityResponse() {}

  explicit StartCollectQualityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartCollectQualityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartCollectQualityResponseBody>(model1);
      }
    }
  }


  virtual ~StartCollectQualityResponse() = default;
};
class StartDoCheckQualityRequest : public Darabonba::Model {
public:
  shared_ptr<string> callbackResultString{};

  StartDoCheckQualityRequest() {}

  explicit StartDoCheckQualityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackResultString) {
      res["CallbackResultString"] = boost::any(*callbackResultString);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackResultString") != m.end() && !m["CallbackResultString"].empty()) {
      callbackResultString = make_shared<string>(boost::any_cast<string>(m["CallbackResultString"]));
    }
  }


  virtual ~StartDoCheckQualityRequest() = default;
};
class StartDoCheckQualityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> returnCode{};
  shared_ptr<bool> returnValue{};

  StartDoCheckQualityResponseBody() {}

  explicit StartDoCheckQualityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (returnCode) {
      res["ReturnCode"] = boost::any(*returnCode);
    }
    if (returnValue) {
      res["ReturnValue"] = boost::any(*returnValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ReturnCode") != m.end() && !m["ReturnCode"].empty()) {
      returnCode = make_shared<string>(boost::any_cast<string>(m["ReturnCode"]));
    }
    if (m.find("ReturnValue") != m.end() && !m["ReturnValue"].empty()) {
      returnValue = make_shared<bool>(boost::any_cast<bool>(m["ReturnValue"]));
    }
  }


  virtual ~StartDoCheckQualityResponseBody() = default;
};
class StartDoCheckQualityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartDoCheckQualityResponseBody> body{};

  StartDoCheckQualityResponse() {}

  explicit StartDoCheckQualityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartDoCheckQualityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartDoCheckQualityResponseBody>(model1);
      }
    }
  }


  virtual ~StartDoCheckQualityResponse() = default;
};
class StartTaskQualityRequest : public Darabonba::Model {
public:
  shared_ptr<string> callbackResultString{};

  StartTaskQualityRequest() {}

  explicit StartTaskQualityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackResultString) {
      res["CallbackResultString"] = boost::any(*callbackResultString);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackResultString") != m.end() && !m["CallbackResultString"].empty()) {
      callbackResultString = make_shared<string>(boost::any_cast<string>(m["CallbackResultString"]));
    }
  }


  virtual ~StartTaskQualityRequest() = default;
};
class StartTaskQualityResponseBodyReturnValueStrongMethodSet : public Darabonba::Model {
public:
  shared_ptr<string> colName{};
  shared_ptr<bool> isColRule{};
  shared_ptr<bool> isSqlRule{};
  shared_ptr<bool> isStrongRule{};
  shared_ptr<string> methodName{};
  shared_ptr<long> ruleId{};

  StartTaskQualityResponseBodyReturnValueStrongMethodSet() {}

  explicit StartTaskQualityResponseBodyReturnValueStrongMethodSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (colName) {
      res["ColName"] = boost::any(*colName);
    }
    if (isColRule) {
      res["IsColRule"] = boost::any(*isColRule);
    }
    if (isSqlRule) {
      res["IsSqlRule"] = boost::any(*isSqlRule);
    }
    if (isStrongRule) {
      res["IsStrongRule"] = boost::any(*isStrongRule);
    }
    if (methodName) {
      res["MethodName"] = boost::any(*methodName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColName") != m.end() && !m["ColName"].empty()) {
      colName = make_shared<string>(boost::any_cast<string>(m["ColName"]));
    }
    if (m.find("IsColRule") != m.end() && !m["IsColRule"].empty()) {
      isColRule = make_shared<bool>(boost::any_cast<bool>(m["IsColRule"]));
    }
    if (m.find("IsSqlRule") != m.end() && !m["IsSqlRule"].empty()) {
      isSqlRule = make_shared<bool>(boost::any_cast<bool>(m["IsSqlRule"]));
    }
    if (m.find("IsStrongRule") != m.end() && !m["IsStrongRule"].empty()) {
      isStrongRule = make_shared<bool>(boost::any_cast<bool>(m["IsStrongRule"]));
    }
    if (m.find("MethodName") != m.end() && !m["MethodName"].empty()) {
      methodName = make_shared<string>(boost::any_cast<string>(m["MethodName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~StartTaskQualityResponseBodyReturnValueStrongMethodSet() = default;
};
class StartTaskQualityResponseBodyReturnValueWeakMethodSet : public Darabonba::Model {
public:
  shared_ptr<string> colName{};
  shared_ptr<bool> isColRule{};
  shared_ptr<bool> isSqlRule{};
  shared_ptr<bool> isStrongRule{};
  shared_ptr<string> methodName{};
  shared_ptr<long> ruleId{};

  StartTaskQualityResponseBodyReturnValueWeakMethodSet() {}

  explicit StartTaskQualityResponseBodyReturnValueWeakMethodSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (colName) {
      res["ColName"] = boost::any(*colName);
    }
    if (isColRule) {
      res["IsColRule"] = boost::any(*isColRule);
    }
    if (isSqlRule) {
      res["IsSqlRule"] = boost::any(*isSqlRule);
    }
    if (isStrongRule) {
      res["IsStrongRule"] = boost::any(*isStrongRule);
    }
    if (methodName) {
      res["MethodName"] = boost::any(*methodName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColName") != m.end() && !m["ColName"].empty()) {
      colName = make_shared<string>(boost::any_cast<string>(m["ColName"]));
    }
    if (m.find("IsColRule") != m.end() && !m["IsColRule"].empty()) {
      isColRule = make_shared<bool>(boost::any_cast<bool>(m["IsColRule"]));
    }
    if (m.find("IsSqlRule") != m.end() && !m["IsSqlRule"].empty()) {
      isSqlRule = make_shared<bool>(boost::any_cast<bool>(m["IsSqlRule"]));
    }
    if (m.find("IsStrongRule") != m.end() && !m["IsStrongRule"].empty()) {
      isStrongRule = make_shared<bool>(boost::any_cast<bool>(m["IsStrongRule"]));
    }
    if (m.find("MethodName") != m.end() && !m["MethodName"].empty()) {
      methodName = make_shared<string>(boost::any_cast<string>(m["MethodName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~StartTaskQualityResponseBodyReturnValueWeakMethodSet() = default;
};
class StartTaskQualityResponseBodyReturnValue : public Darabonba::Model {
public:
  shared_ptr<string> actualExpression{};
  shared_ptr<string> bizDate{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> connection{};
  shared_ptr<long> entityId{};
  shared_ptr<string> matchExpression{};
  shared_ptr<string> pluginName{};
  shared_ptr<long> statisticsFlag{};
  shared_ptr<vector<StartTaskQualityResponseBodyReturnValueStrongMethodSet>> strongMethodSet{};
  shared_ptr<string> tableGuid{};
  shared_ptr<string> taskId{};
  shared_ptr<long> triggerFlag{};
  shared_ptr<vector<StartTaskQualityResponseBodyReturnValueWeakMethodSet>> weakMethodSet{};

  StartTaskQualityResponseBodyReturnValue() {}

  explicit StartTaskQualityResponseBodyReturnValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualExpression) {
      res["ActualExpression"] = boost::any(*actualExpression);
    }
    if (bizDate) {
      res["BizDate"] = boost::any(*bizDate);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (connection) {
      res["Connection"] = boost::any(*connection);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (matchExpression) {
      res["MatchExpression"] = boost::any(*matchExpression);
    }
    if (pluginName) {
      res["PluginName"] = boost::any(*pluginName);
    }
    if (statisticsFlag) {
      res["StatisticsFlag"] = boost::any(*statisticsFlag);
    }
    if (strongMethodSet) {
      vector<boost::any> temp1;
      for(auto item1:*strongMethodSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StrongMethodSet"] = boost::any(temp1);
    }
    if (tableGuid) {
      res["TableGuid"] = boost::any(*tableGuid);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (triggerFlag) {
      res["TriggerFlag"] = boost::any(*triggerFlag);
    }
    if (weakMethodSet) {
      vector<boost::any> temp1;
      for(auto item1:*weakMethodSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WeakMethodSet"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualExpression") != m.end() && !m["ActualExpression"].empty()) {
      actualExpression = make_shared<string>(boost::any_cast<string>(m["ActualExpression"]));
    }
    if (m.find("BizDate") != m.end() && !m["BizDate"].empty()) {
      bizDate = make_shared<string>(boost::any_cast<string>(m["BizDate"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("Connection") != m.end() && !m["Connection"].empty()) {
      connection = make_shared<string>(boost::any_cast<string>(m["Connection"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("MatchExpression") != m.end() && !m["MatchExpression"].empty()) {
      matchExpression = make_shared<string>(boost::any_cast<string>(m["MatchExpression"]));
    }
    if (m.find("PluginName") != m.end() && !m["PluginName"].empty()) {
      pluginName = make_shared<string>(boost::any_cast<string>(m["PluginName"]));
    }
    if (m.find("StatisticsFlag") != m.end() && !m["StatisticsFlag"].empty()) {
      statisticsFlag = make_shared<long>(boost::any_cast<long>(m["StatisticsFlag"]));
    }
    if (m.find("StrongMethodSet") != m.end() && !m["StrongMethodSet"].empty()) {
      if (typeid(vector<boost::any>) == m["StrongMethodSet"].type()) {
        vector<StartTaskQualityResponseBodyReturnValueStrongMethodSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StrongMethodSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartTaskQualityResponseBodyReturnValueStrongMethodSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        strongMethodSet = make_shared<vector<StartTaskQualityResponseBodyReturnValueStrongMethodSet>>(expect1);
      }
    }
    if (m.find("TableGuid") != m.end() && !m["TableGuid"].empty()) {
      tableGuid = make_shared<string>(boost::any_cast<string>(m["TableGuid"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TriggerFlag") != m.end() && !m["TriggerFlag"].empty()) {
      triggerFlag = make_shared<long>(boost::any_cast<long>(m["TriggerFlag"]));
    }
    if (m.find("WeakMethodSet") != m.end() && !m["WeakMethodSet"].empty()) {
      if (typeid(vector<boost::any>) == m["WeakMethodSet"].type()) {
        vector<StartTaskQualityResponseBodyReturnValueWeakMethodSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WeakMethodSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartTaskQualityResponseBodyReturnValueWeakMethodSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        weakMethodSet = make_shared<vector<StartTaskQualityResponseBodyReturnValueWeakMethodSet>>(expect1);
      }
    }
  }


  virtual ~StartTaskQualityResponseBodyReturnValue() = default;
};
class StartTaskQualityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> returnCode{};
  shared_ptr<StartTaskQualityResponseBodyReturnValue> returnValue{};

  StartTaskQualityResponseBody() {}

  explicit StartTaskQualityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (returnCode) {
      res["ReturnCode"] = boost::any(*returnCode);
    }
    if (returnValue) {
      res["ReturnValue"] = returnValue ? boost::any(returnValue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ReturnCode") != m.end() && !m["ReturnCode"].empty()) {
      returnCode = make_shared<string>(boost::any_cast<string>(m["ReturnCode"]));
    }
    if (m.find("ReturnValue") != m.end() && !m["ReturnValue"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReturnValue"].type()) {
        StartTaskQualityResponseBodyReturnValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReturnValue"]));
        returnValue = make_shared<StartTaskQualityResponseBodyReturnValue>(model1);
      }
    }
  }


  virtual ~StartTaskQualityResponseBody() = default;
};
class StartTaskQualityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartTaskQualityResponseBody> body{};

  StartTaskQualityResponse() {}

  explicit StartTaskQualityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartTaskQualityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartTaskQualityResponseBody>(model1);
      }
    }
  }


  virtual ~StartTaskQualityResponse() = default;
};
class TriggerDataLoaderResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  TriggerDataLoaderResponseBody() {}

  explicit TriggerDataLoaderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TriggerDataLoaderResponseBody() = default;
};
class TriggerDataLoaderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TriggerDataLoaderResponseBody> body{};

  TriggerDataLoaderResponse() {}

  explicit TriggerDataLoaderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TriggerDataLoaderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TriggerDataLoaderResponseBody>(model1);
      }
    }
  }


  virtual ~TriggerDataLoaderResponse() = default;
};
class TriggerTimeMachineTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> hostName{};
  shared_ptr<string> id{};
  shared_ptr<string> objId{};
  shared_ptr<string> objName{};
  shared_ptr<string> operType{};
  shared_ptr<string> status{};

  TriggerTimeMachineTaskResponseBodyData() {}

  explicit TriggerTimeMachineTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (objId) {
      res["ObjId"] = boost::any(*objId);
    }
    if (objName) {
      res["ObjName"] = boost::any(*objName);
    }
    if (operType) {
      res["OperType"] = boost::any(*operType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ObjId") != m.end() && !m["ObjId"].empty()) {
      objId = make_shared<string>(boost::any_cast<string>(m["ObjId"]));
    }
    if (m.find("ObjName") != m.end() && !m["ObjName"].empty()) {
      objName = make_shared<string>(boost::any_cast<string>(m["ObjName"]));
    }
    if (m.find("OperType") != m.end() && !m["OperType"].empty()) {
      operType = make_shared<string>(boost::any_cast<string>(m["OperType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~TriggerTimeMachineTaskResponseBodyData() = default;
};
class TriggerTimeMachineTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<TriggerTimeMachineTaskResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};

  TriggerTimeMachineTaskResponseBody() {}

  explicit TriggerTimeMachineTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        TriggerTimeMachineTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TriggerTimeMachineTaskResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TriggerTimeMachineTaskResponseBody() = default;
};
class TriggerTimeMachineTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TriggerTimeMachineTaskResponseBody> body{};

  TriggerTimeMachineTaskResponse() {}

  explicit TriggerTimeMachineTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TriggerTimeMachineTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TriggerTimeMachineTaskResponseBody>(model1);
      }
    }
  }


  virtual ~TriggerTimeMachineTaskResponse() = default;
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
  CreateManualDagResponse createManualDagWithOptions(shared_ptr<CreateManualDagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateManualDagResponse createManualDag(shared_ptr<CreateManualDagRequest> request);
  DeleteFileResponse deleteFileWithOptions(shared_ptr<DeleteFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFileResponse deleteFile(shared_ptr<DeleteFileRequest> request);
  DescribeEmrHiveTableResponse describeEmrHiveTableWithOptions(shared_ptr<DescribeEmrHiveTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEmrHiveTableResponse describeEmrHiveTable(shared_ptr<DescribeEmrHiveTableRequest> request);
  GetDataServiceApiAuthMapContextResponse getDataServiceApiAuthMapContextWithOptions(shared_ptr<GetDataServiceApiAuthMapContextRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataServiceApiAuthMapContextResponse getDataServiceApiAuthMapContext(shared_ptr<GetDataServiceApiAuthMapContextRequest> request);
  GetDataServiceApiContextResponse getDataServiceApiContextWithOptions(shared_ptr<GetDataServiceApiContextRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataServiceApiContextResponse getDataServiceApiContext(shared_ptr<GetDataServiceApiContextRequest> request);
  GetDataServiceConnectionResponse getDataServiceConnectionWithOptions(shared_ptr<GetDataServiceConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataServiceConnectionResponse getDataServiceConnection(shared_ptr<GetDataServiceConnectionRequest> request);
  GetDataServiceContextUpdateEventResponse getDataServiceContextUpdateEventWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataServiceContextUpdateEventResponse getDataServiceContextUpdateEvent();
  GetDataServiceFunctionResponse getDataServiceFunctionWithOptions(shared_ptr<GetDataServiceFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataServiceFunctionResponse getDataServiceFunction(shared_ptr<GetDataServiceFunctionRequest> request);
  GetSwitchValueResponse getSwitchValueWithOptions(shared_ptr<GetSwitchValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSwitchValueResponse getSwitchValue(shared_ptr<GetSwitchValueRequest> request);
  GetTimeMachineTaskResponse getTimeMachineTaskWithOptions(shared_ptr<GetTimeMachineTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTimeMachineTaskResponse getTimeMachineTask(shared_ptr<GetTimeMachineTaskRequest> request);
  ListEmrHiveAuditLogsResponse listEmrHiveAuditLogsWithOptions(shared_ptr<ListEmrHiveAuditLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEmrHiveAuditLogsResponse listEmrHiveAuditLogs(shared_ptr<ListEmrHiveAuditLogsRequest> request);
  ListEmrHiveDatabasesResponse listEmrHiveDatabasesWithOptions(shared_ptr<ListEmrHiveDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEmrHiveDatabasesResponse listEmrHiveDatabases(shared_ptr<ListEmrHiveDatabasesRequest> request);
  ListEmrHiveTablesResponse listEmrHiveTablesWithOptions(shared_ptr<ListEmrHiveTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEmrHiveTablesResponse listEmrHiveTables(shared_ptr<ListEmrHiveTablesRequest> request);
  ListGovernanceIssueDataServiceAPIsResponse listGovernanceIssueDataServiceAPIsWithOptions(shared_ptr<ListGovernanceIssueDataServiceAPIsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGovernanceIssueDataServiceAPIsResponse listGovernanceIssueDataServiceAPIs(shared_ptr<ListGovernanceIssueDataServiceAPIsRequest> request);
  ListGovernanceIssueTablesResponse listGovernanceIssueTablesWithOptions(shared_ptr<ListGovernanceIssueTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGovernanceIssueTablesResponse listGovernanceIssueTables(shared_ptr<ListGovernanceIssueTablesRequest> request);
  ListGovernanceIssueTasksResponse listGovernanceIssueTasksWithOptions(shared_ptr<ListGovernanceIssueTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGovernanceIssueTasksResponse listGovernanceIssueTasks(shared_ptr<ListGovernanceIssueTasksRequest> request);
  ListGovernanceRulesResponse listGovernanceRulesWithOptions(shared_ptr<ListGovernanceRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGovernanceRulesResponse listGovernanceRules(shared_ptr<ListGovernanceRulesRequest> request);
  ListHiveColumnLineagesResponse listHiveColumnLineagesWithOptions(shared_ptr<ListHiveColumnLineagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHiveColumnLineagesResponse listHiveColumnLineages(shared_ptr<ListHiveColumnLineagesRequest> request);
  ListHiveTableLineagesResponse listHiveTableLineagesWithOptions(shared_ptr<ListHiveTableLineagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHiveTableLineagesResponse listHiveTableLineages(shared_ptr<ListHiveTableLineagesRequest> request);
  ListTablePartitionsResponse listTablePartitionsWithOptions(shared_ptr<ListTablePartitionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTablePartitionsResponse listTablePartitions(shared_ptr<ListTablePartitionsRequest> request);
  OpenDataWorksStandardServiceResponse openDataWorksStandardServiceWithOptions(shared_ptr<OpenDataWorksStandardServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenDataWorksStandardServiceResponse openDataWorksStandardService(shared_ptr<OpenDataWorksStandardServiceRequest> request);
  SearchManualDagNodeInstanceResponse searchManualDagNodeInstanceWithOptions(shared_ptr<SearchManualDagNodeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchManualDagNodeInstanceResponse searchManualDagNodeInstance(shared_ptr<SearchManualDagNodeInstanceRequest> request);
  SendTaskMetaCallbackResponse sendTaskMetaCallbackWithOptions(shared_ptr<SendTaskMetaCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendTaskMetaCallbackResponse sendTaskMetaCallback(shared_ptr<SendTaskMetaCallbackRequest> request);
  SetSwitchValueResponse setSwitchValueWithOptions(shared_ptr<SetSwitchValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetSwitchValueResponse setSwitchValue(shared_ptr<SetSwitchValueRequest> request);
  StartCollectQualityResponse startCollectQualityWithOptions(shared_ptr<StartCollectQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartCollectQualityResponse startCollectQuality(shared_ptr<StartCollectQualityRequest> request);
  StartDoCheckQualityResponse startDoCheckQualityWithOptions(shared_ptr<StartDoCheckQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDoCheckQualityResponse startDoCheckQuality(shared_ptr<StartDoCheckQualityRequest> request);
  StartTaskQualityResponse startTaskQualityWithOptions(shared_ptr<StartTaskQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartTaskQualityResponse startTaskQuality(shared_ptr<StartTaskQualityRequest> request);
  TriggerDataLoaderResponse triggerDataLoaderWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TriggerDataLoaderResponse triggerDataLoader();
  TriggerTimeMachineTaskResponse triggerTimeMachineTaskWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TriggerTimeMachineTaskResponse triggerTimeMachineTask();

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dataworks-public20180601

#endif
