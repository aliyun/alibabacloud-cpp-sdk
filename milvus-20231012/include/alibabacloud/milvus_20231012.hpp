// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MILVUS20231012_H_
#define ALIBABACLOUD_MILVUS20231012_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Milvus20231012 {
class CreateDefaultRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDefaultRoleResponseBody() {}

  explicit CreateDefaultRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~CreateDefaultRoleResponseBody() = default;
};
class CreateDefaultRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDefaultRoleResponseBody> body{};

  CreateDefaultRoleResponse() {}

  explicit CreateDefaultRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDefaultRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDefaultRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDefaultRoleResponse() = default;
};
class DescribeAccessControlListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DescribeAccessControlListRequest() {}

  explicit DescribeAccessControlListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeAccessControlListRequest() = default;
};
class DescribeAccessControlListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<vector<string>> cidr{};

  DescribeAccessControlListResponseBodyData() {}

  explicit DescribeAccessControlListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Cidr"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Cidr"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cidr = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAccessControlListResponseBodyData() = default;
};
class DescribeAccessControlListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<DescribeAccessControlListResponseBodyData> data{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAccessControlListResponseBody() {}

  explicit DescribeAccessControlListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeAccessControlListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAccessControlListResponseBodyData>(model1);
      }
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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


  virtual ~DescribeAccessControlListResponseBody() = default;
};
class DescribeAccessControlListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccessControlListResponseBody> body{};

  DescribeAccessControlListResponse() {}

  explicit DescribeAccessControlListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccessControlListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccessControlListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccessControlListResponse() = default;
};
class DescribeInstanceConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DescribeInstanceConfigsRequest() {}

  explicit DescribeInstanceConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeInstanceConfigsRequest() = default;
};
class DescribeInstanceConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<uint8_t>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeInstanceConfigsResponseBody() {}

  explicit DescribeInstanceConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~DescribeInstanceConfigsResponseBody() = default;
};
class DescribeInstanceConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceConfigsResponseBody> body{};

  DescribeInstanceConfigsResponse() {}

  explicit DescribeInstanceConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceConfigsResponse() = default;
};
class GetInstanceDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetInstanceDetailRequest() {}

  explicit GetInstanceDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetInstanceDetailRequest() = default;
};
class GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList : public Darabonba::Model {
public:
  shared_ptr<string> componentType{};
  shared_ptr<long> cuNum{};
  shared_ptr<long> cuRatio{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};
  shared_ptr<long> replica{};

  GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList() {}

  explicit GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentType) {
      res["ComponentType"] = boost::any(*componentType);
    }
    if (cuNum) {
      res["CuNum"] = boost::any(*cuNum);
    }
    if (cuRatio) {
      res["CuRatio"] = boost::any(*cuRatio);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (replica) {
      res["Replica"] = boost::any(*replica);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentType") != m.end() && !m["ComponentType"].empty()) {
      componentType = make_shared<string>(boost::any_cast<string>(m["ComponentType"]));
    }
    if (m.find("CuNum") != m.end() && !m["CuNum"].empty()) {
      cuNum = make_shared<long>(boost::any_cast<long>(m["CuNum"]));
    }
    if (m.find("CuRatio") != m.end() && !m["CuRatio"].empty()) {
      cuRatio = make_shared<long>(boost::any_cast<long>(m["CuRatio"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("Replica") != m.end() && !m["Replica"].empty()) {
      replica = make_shared<long>(boost::any_cast<long>(m["Replica"]));
    }
  }


  virtual ~GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList() = default;
};
class GetInstanceDetailResponseBodyDataClusterInfo : public Darabonba::Model {
public:
  shared_ptr<long> attuPort{};
  shared_ptr<string> internetUrl{};
  shared_ptr<string> intranetUrl{};
  shared_ptr<vector<GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList>> milvusResourceInfoList{};
  shared_ptr<string> ossStorageSize{};
  shared_ptr<long> ossStorageTimestamp{};
  shared_ptr<long> proxyPort{};
  shared_ptr<long> totalCuNum{};
  shared_ptr<long> totalDiskSize{};

  GetInstanceDetailResponseBodyDataClusterInfo() {}

  explicit GetInstanceDetailResponseBodyDataClusterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attuPort) {
      res["AttuPort"] = boost::any(*attuPort);
    }
    if (internetUrl) {
      res["InternetUrl"] = boost::any(*internetUrl);
    }
    if (intranetUrl) {
      res["IntranetUrl"] = boost::any(*intranetUrl);
    }
    if (milvusResourceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*milvusResourceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MilvusResourceInfoList"] = boost::any(temp1);
    }
    if (ossStorageSize) {
      res["OssStorageSize"] = boost::any(*ossStorageSize);
    }
    if (ossStorageTimestamp) {
      res["OssStorageTimestamp"] = boost::any(*ossStorageTimestamp);
    }
    if (proxyPort) {
      res["ProxyPort"] = boost::any(*proxyPort);
    }
    if (totalCuNum) {
      res["TotalCuNum"] = boost::any(*totalCuNum);
    }
    if (totalDiskSize) {
      res["TotalDiskSize"] = boost::any(*totalDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttuPort") != m.end() && !m["AttuPort"].empty()) {
      attuPort = make_shared<long>(boost::any_cast<long>(m["AttuPort"]));
    }
    if (m.find("InternetUrl") != m.end() && !m["InternetUrl"].empty()) {
      internetUrl = make_shared<string>(boost::any_cast<string>(m["InternetUrl"]));
    }
    if (m.find("IntranetUrl") != m.end() && !m["IntranetUrl"].empty()) {
      intranetUrl = make_shared<string>(boost::any_cast<string>(m["IntranetUrl"]));
    }
    if (m.find("MilvusResourceInfoList") != m.end() && !m["MilvusResourceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["MilvusResourceInfoList"].type()) {
        vector<GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MilvusResourceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        milvusResourceInfoList = make_shared<vector<GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList>>(expect1);
      }
    }
    if (m.find("OssStorageSize") != m.end() && !m["OssStorageSize"].empty()) {
      ossStorageSize = make_shared<string>(boost::any_cast<string>(m["OssStorageSize"]));
    }
    if (m.find("OssStorageTimestamp") != m.end() && !m["OssStorageTimestamp"].empty()) {
      ossStorageTimestamp = make_shared<long>(boost::any_cast<long>(m["OssStorageTimestamp"]));
    }
    if (m.find("ProxyPort") != m.end() && !m["ProxyPort"].empty()) {
      proxyPort = make_shared<long>(boost::any_cast<long>(m["ProxyPort"]));
    }
    if (m.find("TotalCuNum") != m.end() && !m["TotalCuNum"].empty()) {
      totalCuNum = make_shared<long>(boost::any_cast<long>(m["TotalCuNum"]));
    }
    if (m.find("TotalDiskSize") != m.end() && !m["TotalDiskSize"].empty()) {
      totalDiskSize = make_shared<long>(boost::any_cast<long>(m["TotalDiskSize"]));
    }
  }


  virtual ~GetInstanceDetailResponseBodyDataClusterInfo() = default;
};
class GetInstanceDetailResponseBodyDataMeasureConfig : public Darabonba::Model {
public:
  shared_ptr<long> dataNodeCuNum{};
  shared_ptr<long> dataNodeReplica{};
  shared_ptr<long> indexNodeCuNum{};
  shared_ptr<long> indexNodeReplica{};
  shared_ptr<long> mixCoodinatorNodeCuNum{};
  shared_ptr<long> mixCoodinatorNodeReplica{};
  shared_ptr<long> proxyNodeCuNum{};
  shared_ptr<long> proxyNodeReplica{};
  shared_ptr<long> queryNodeCuNum{};
  shared_ptr<long> queryNodeReplica{};

  GetInstanceDetailResponseBodyDataMeasureConfig() {}

  explicit GetInstanceDetailResponseBodyDataMeasureConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataNodeCuNum) {
      res["DataNodeCuNum"] = boost::any(*dataNodeCuNum);
    }
    if (dataNodeReplica) {
      res["DataNodeReplica"] = boost::any(*dataNodeReplica);
    }
    if (indexNodeCuNum) {
      res["IndexNodeCuNum"] = boost::any(*indexNodeCuNum);
    }
    if (indexNodeReplica) {
      res["IndexNodeReplica"] = boost::any(*indexNodeReplica);
    }
    if (mixCoodinatorNodeCuNum) {
      res["MixCoodinatorNodeCuNum"] = boost::any(*mixCoodinatorNodeCuNum);
    }
    if (mixCoodinatorNodeReplica) {
      res["MixCoodinatorNodeReplica"] = boost::any(*mixCoodinatorNodeReplica);
    }
    if (proxyNodeCuNum) {
      res["ProxyNodeCuNum"] = boost::any(*proxyNodeCuNum);
    }
    if (proxyNodeReplica) {
      res["ProxyNodeReplica"] = boost::any(*proxyNodeReplica);
    }
    if (queryNodeCuNum) {
      res["QueryNodeCuNum"] = boost::any(*queryNodeCuNum);
    }
    if (queryNodeReplica) {
      res["QueryNodeReplica"] = boost::any(*queryNodeReplica);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataNodeCuNum") != m.end() && !m["DataNodeCuNum"].empty()) {
      dataNodeCuNum = make_shared<long>(boost::any_cast<long>(m["DataNodeCuNum"]));
    }
    if (m.find("DataNodeReplica") != m.end() && !m["DataNodeReplica"].empty()) {
      dataNodeReplica = make_shared<long>(boost::any_cast<long>(m["DataNodeReplica"]));
    }
    if (m.find("IndexNodeCuNum") != m.end() && !m["IndexNodeCuNum"].empty()) {
      indexNodeCuNum = make_shared<long>(boost::any_cast<long>(m["IndexNodeCuNum"]));
    }
    if (m.find("IndexNodeReplica") != m.end() && !m["IndexNodeReplica"].empty()) {
      indexNodeReplica = make_shared<long>(boost::any_cast<long>(m["IndexNodeReplica"]));
    }
    if (m.find("MixCoodinatorNodeCuNum") != m.end() && !m["MixCoodinatorNodeCuNum"].empty()) {
      mixCoodinatorNodeCuNum = make_shared<long>(boost::any_cast<long>(m["MixCoodinatorNodeCuNum"]));
    }
    if (m.find("MixCoodinatorNodeReplica") != m.end() && !m["MixCoodinatorNodeReplica"].empty()) {
      mixCoodinatorNodeReplica = make_shared<long>(boost::any_cast<long>(m["MixCoodinatorNodeReplica"]));
    }
    if (m.find("ProxyNodeCuNum") != m.end() && !m["ProxyNodeCuNum"].empty()) {
      proxyNodeCuNum = make_shared<long>(boost::any_cast<long>(m["ProxyNodeCuNum"]));
    }
    if (m.find("ProxyNodeReplica") != m.end() && !m["ProxyNodeReplica"].empty()) {
      proxyNodeReplica = make_shared<long>(boost::any_cast<long>(m["ProxyNodeReplica"]));
    }
    if (m.find("QueryNodeCuNum") != m.end() && !m["QueryNodeCuNum"].empty()) {
      queryNodeCuNum = make_shared<long>(boost::any_cast<long>(m["QueryNodeCuNum"]));
    }
    if (m.find("QueryNodeReplica") != m.end() && !m["QueryNodeReplica"].empty()) {
      queryNodeReplica = make_shared<long>(boost::any_cast<long>(m["QueryNodeReplica"]));
    }
  }


  virtual ~GetInstanceDetailResponseBodyDataMeasureConfig() = default;
};
class GetInstanceDetailResponseBodyDataTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetInstanceDetailResponseBodyDataTags() {}

  explicit GetInstanceDetailResponseBodyDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetInstanceDetailResponseBodyDataTags() = default;
};
class GetInstanceDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<long> beginTime{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> bucketPath{};
  shared_ptr<GetInstanceDetailResponseBodyDataClusterInfo> clusterInfo{};
  shared_ptr<string> clusterName{};
  shared_ptr<bool> enableHa{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<GetInstanceDetailResponseBodyDataMeasureConfig> measureConfig{};
  shared_ptr<string> nodeType{};
  shared_ptr<bool> openPublicNet{};
  shared_ptr<string> packageType{};
  shared_ptr<long> payType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> runningTime{};
  shared_ptr<string> sgId{};
  shared_ptr<vector<GetInstanceDetailResponseBodyDataTags>> tags{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> userConfig{};
  shared_ptr<string> version{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswId{};
  shared_ptr<string> zoneId{};

  GetInstanceDetailResponseBodyData() {}

  explicit GetInstanceDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (bucketPath) {
      res["BucketPath"] = boost::any(*bucketPath);
    }
    if (clusterInfo) {
      res["ClusterInfo"] = clusterInfo ? boost::any(clusterInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (enableHa) {
      res["EnableHa"] = boost::any(*enableHa);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (measureConfig) {
      res["MeasureConfig"] = measureConfig ? boost::any(measureConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (openPublicNet) {
      res["OpenPublicNet"] = boost::any(*openPublicNet);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (sgId) {
      res["SgId"] = boost::any(*sgId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (userConfig) {
      res["UserConfig"] = boost::any(*userConfig);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswId) {
      res["VswId"] = boost::any(*vswId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("BucketPath") != m.end() && !m["BucketPath"].empty()) {
      bucketPath = make_shared<string>(boost::any_cast<string>(m["BucketPath"]));
    }
    if (m.find("ClusterInfo") != m.end() && !m["ClusterInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterInfo"].type()) {
        GetInstanceDetailResponseBodyDataClusterInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterInfo"]));
        clusterInfo = make_shared<GetInstanceDetailResponseBodyDataClusterInfo>(model1);
      }
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("EnableHa") != m.end() && !m["EnableHa"].empty()) {
      enableHa = make_shared<bool>(boost::any_cast<bool>(m["EnableHa"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("MeasureConfig") != m.end() && !m["MeasureConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MeasureConfig"].type()) {
        GetInstanceDetailResponseBodyDataMeasureConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MeasureConfig"]));
        measureConfig = make_shared<GetInstanceDetailResponseBodyDataMeasureConfig>(model1);
      }
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("OpenPublicNet") != m.end() && !m["OpenPublicNet"].empty()) {
      openPublicNet = make_shared<bool>(boost::any_cast<bool>(m["OpenPublicNet"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["PayType"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<long>(boost::any_cast<long>(m["RunningTime"]));
    }
    if (m.find("SgId") != m.end() && !m["SgId"].empty()) {
      sgId = make_shared<string>(boost::any_cast<string>(m["SgId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetInstanceDetailResponseBodyDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceDetailResponseBodyDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetInstanceDetailResponseBodyDataTags>>(expect1);
      }
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("UserConfig") != m.end() && !m["UserConfig"].empty()) {
      userConfig = make_shared<string>(boost::any_cast<string>(m["UserConfig"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswId") != m.end() && !m["VswId"].empty()) {
      vswId = make_shared<string>(boost::any_cast<string>(m["VswId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetInstanceDetailResponseBodyData() = default;
};
class GetInstanceDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<GetInstanceDetailResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInstanceDetailResponseBody() {}

  explicit GetInstanceDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetInstanceDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetInstanceDetailResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~GetInstanceDetailResponseBody() = default;
};
class GetInstanceDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceDetailResponseBody> body{};

  GetInstanceDetailResponse() {}

  explicit GetInstanceDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceDetailResponse() = default;
};
class ListInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListInstancesRequestTag() {}

  explicit ListInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListInstancesRequestTag() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListInstancesRequestTag>> tag{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListInstancesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tagShrink{};

  ListInstancesShrinkRequest() {}

  explicit ListInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tagShrink) {
      res["Tag"] = boost::any(*tagShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~ListInstancesShrinkRequest() = default;
};
class ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList : public Darabonba::Model {
public:
  shared_ptr<string> componentType{};
  shared_ptr<long> cuNum{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};
  shared_ptr<long> replica{};

  ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList() {}

  explicit ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentType) {
      res["ComponentType"] = boost::any(*componentType);
    }
    if (cuNum) {
      res["CuNum"] = boost::any(*cuNum);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (replica) {
      res["Replica"] = boost::any(*replica);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentType") != m.end() && !m["ComponentType"].empty()) {
      componentType = make_shared<string>(boost::any_cast<string>(m["ComponentType"]));
    }
    if (m.find("CuNum") != m.end() && !m["CuNum"].empty()) {
      cuNum = make_shared<long>(boost::any_cast<long>(m["CuNum"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("Replica") != m.end() && !m["Replica"].empty()) {
      replica = make_shared<long>(boost::any_cast<long>(m["Replica"]));
    }
  }


  virtual ~ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList() = default;
};
class ListInstancesResponseBodyDataClusterInfo : public Darabonba::Model {
public:
  shared_ptr<long> attuPort{};
  shared_ptr<string> internetUrl{};
  shared_ptr<string> intranetUrl{};
  shared_ptr<vector<ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList>> milvusResourceInfoList{};
  shared_ptr<long> proxyPort{};
  shared_ptr<long> totalCuNum{};
  shared_ptr<long> totalDiskSize{};

  ListInstancesResponseBodyDataClusterInfo() {}

  explicit ListInstancesResponseBodyDataClusterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attuPort) {
      res["AttuPort"] = boost::any(*attuPort);
    }
    if (internetUrl) {
      res["InternetUrl"] = boost::any(*internetUrl);
    }
    if (intranetUrl) {
      res["IntranetUrl"] = boost::any(*intranetUrl);
    }
    if (milvusResourceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*milvusResourceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MilvusResourceInfoList"] = boost::any(temp1);
    }
    if (proxyPort) {
      res["ProxyPort"] = boost::any(*proxyPort);
    }
    if (totalCuNum) {
      res["TotalCuNum"] = boost::any(*totalCuNum);
    }
    if (totalDiskSize) {
      res["TotalDiskSize"] = boost::any(*totalDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttuPort") != m.end() && !m["AttuPort"].empty()) {
      attuPort = make_shared<long>(boost::any_cast<long>(m["AttuPort"]));
    }
    if (m.find("InternetUrl") != m.end() && !m["InternetUrl"].empty()) {
      internetUrl = make_shared<string>(boost::any_cast<string>(m["InternetUrl"]));
    }
    if (m.find("IntranetUrl") != m.end() && !m["IntranetUrl"].empty()) {
      intranetUrl = make_shared<string>(boost::any_cast<string>(m["IntranetUrl"]));
    }
    if (m.find("MilvusResourceInfoList") != m.end() && !m["MilvusResourceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["MilvusResourceInfoList"].type()) {
        vector<ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MilvusResourceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        milvusResourceInfoList = make_shared<vector<ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList>>(expect1);
      }
    }
    if (m.find("ProxyPort") != m.end() && !m["ProxyPort"].empty()) {
      proxyPort = make_shared<long>(boost::any_cast<long>(m["ProxyPort"]));
    }
    if (m.find("TotalCuNum") != m.end() && !m["TotalCuNum"].empty()) {
      totalCuNum = make_shared<long>(boost::any_cast<long>(m["TotalCuNum"]));
    }
    if (m.find("TotalDiskSize") != m.end() && !m["TotalDiskSize"].empty()) {
      totalDiskSize = make_shared<long>(boost::any_cast<long>(m["TotalDiskSize"]));
    }
  }


  virtual ~ListInstancesResponseBodyDataClusterInfo() = default;
};
class ListInstancesResponseBodyDataTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListInstancesResponseBodyDataTags() {}

  explicit ListInstancesResponseBodyDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListInstancesResponseBodyDataTags() = default;
};
class ListInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> autoBackup{};
  shared_ptr<long> beginTime{};
  shared_ptr<ListInstancesResponseBodyDataClusterInfo> clusterInfo{};
  shared_ptr<string> clusterName{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> nodeType{};
  shared_ptr<bool> openPublicNet{};
  shared_ptr<string> packageType{};
  shared_ptr<long> payType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> runningTime{};
  shared_ptr<string> sgId{};
  shared_ptr<vector<ListInstancesResponseBodyDataTags>> tags{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswId{};
  shared_ptr<string> zoneId{};

  ListInstancesResponseBodyData() {}

  explicit ListInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBackup) {
      res["AutoBackup"] = boost::any(*autoBackup);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (clusterInfo) {
      res["ClusterInfo"] = clusterInfo ? boost::any(clusterInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (openPublicNet) {
      res["OpenPublicNet"] = boost::any(*openPublicNet);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (sgId) {
      res["SgId"] = boost::any(*sgId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswId) {
      res["VswId"] = boost::any(*vswId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoBackup") != m.end() && !m["AutoBackup"].empty()) {
      autoBackup = make_shared<bool>(boost::any_cast<bool>(m["AutoBackup"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("ClusterInfo") != m.end() && !m["ClusterInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterInfo"].type()) {
        ListInstancesResponseBodyDataClusterInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterInfo"]));
        clusterInfo = make_shared<ListInstancesResponseBodyDataClusterInfo>(model1);
      }
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("OpenPublicNet") != m.end() && !m["OpenPublicNet"].empty()) {
      openPublicNet = make_shared<bool>(boost::any_cast<bool>(m["OpenPublicNet"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["PayType"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<long>(boost::any_cast<long>(m["RunningTime"]));
    }
    if (m.find("SgId") != m.end() && !m["SgId"].empty()) {
      sgId = make_shared<string>(boost::any_cast<string>(m["SgId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListInstancesResponseBodyDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListInstancesResponseBodyDataTags>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswId") != m.end() && !m["VswId"].empty()) {
      vswId = make_shared<string>(boost::any_cast<string>(m["VswId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListInstancesResponseBodyData() = default;
};
class ListInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<ListInstancesResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  ListInstancesResponseBody() {}

  explicit ListInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListInstancesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListInstancesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListInstancesResponseBody() = default;
};
class ListInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancesResponseBody> body{};

  ListInstancesResponse() {}

  explicit ListInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class ModifyInstanceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> reason{};
  shared_ptr<string> userConfig{};

  ModifyInstanceConfigRequest() {}

  explicit ModifyInstanceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (userConfig) {
      res["UserConfig"] = boost::any(*userConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("UserConfig") != m.end() && !m["UserConfig"].empty()) {
      userConfig = make_shared<string>(boost::any_cast<string>(m["UserConfig"]));
    }
  }


  virtual ~ModifyInstanceConfigRequest() = default;
};
class ModifyInstanceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyInstanceConfigResponseBody() {}

  explicit ModifyInstanceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~ModifyInstanceConfigResponseBody() = default;
};
class ModifyInstanceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyInstanceConfigResponseBody> body{};

  ModifyInstanceConfigResponse() {}

  explicit ModifyInstanceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceConfigResponse() = default;
};
class UpdateAccessControlListRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<string> cidr{};
  shared_ptr<string> instanceId{};

  UpdateAccessControlListRequest() {}

  explicit UpdateAccessControlListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateAccessControlListRequest() = default;
};
class UpdateAccessControlListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> data{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateAccessControlListResponseBody() {}

  explicit UpdateAccessControlListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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


  virtual ~UpdateAccessControlListResponseBody() = default;
};
class UpdateAccessControlListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAccessControlListResponseBody> body{};

  UpdateAccessControlListResponse() {}

  explicit UpdateAccessControlListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAccessControlListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAccessControlListResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAccessControlListResponse() = default;
};
class UpdateInstanceNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterName{};
  shared_ptr<string> instanceId{};

  UpdateInstanceNameRequest() {}

  explicit UpdateInstanceNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateInstanceNameRequest() = default;
};
class UpdateInstanceNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateInstanceNameResponseBody() {}

  explicit UpdateInstanceNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~UpdateInstanceNameResponseBody() = default;
};
class UpdateInstanceNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceNameResponseBody> body{};

  UpdateInstanceNameResponse() {}

  explicit UpdateInstanceNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceNameResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceNameResponse() = default;
};
class UpdatePublicNetworkStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> componentType{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> publicNetworkEnabled{};

  UpdatePublicNetworkStatusRequest() {}

  explicit UpdatePublicNetworkStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (componentType) {
      res["ComponentType"] = boost::any(*componentType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (publicNetworkEnabled) {
      res["PublicNetworkEnabled"] = boost::any(*publicNetworkEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("ComponentType") != m.end() && !m["ComponentType"].empty()) {
      componentType = make_shared<string>(boost::any_cast<string>(m["ComponentType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PublicNetworkEnabled") != m.end() && !m["PublicNetworkEnabled"].empty()) {
      publicNetworkEnabled = make_shared<bool>(boost::any_cast<bool>(m["PublicNetworkEnabled"]));
    }
  }


  virtual ~UpdatePublicNetworkStatusRequest() = default;
};
class UpdatePublicNetworkStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdatePublicNetworkStatusResponseBody() {}

  explicit UpdatePublicNetworkStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~UpdatePublicNetworkStatusResponseBody() = default;
};
class UpdatePublicNetworkStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePublicNetworkStatusResponseBody> body{};

  UpdatePublicNetworkStatusResponse() {}

  explicit UpdatePublicNetworkStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePublicNetworkStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePublicNetworkStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePublicNetworkStatusResponse() = default;
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
  CreateDefaultRoleResponse createDefaultRoleWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDefaultRoleResponse createDefaultRole();
  DescribeAccessControlListResponse describeAccessControlListWithOptions(shared_ptr<DescribeAccessControlListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccessControlListResponse describeAccessControlList(shared_ptr<DescribeAccessControlListRequest> request);
  DescribeInstanceConfigsResponse describeInstanceConfigsWithOptions(shared_ptr<DescribeInstanceConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceConfigsResponse describeInstanceConfigs(shared_ptr<DescribeInstanceConfigsRequest> request);
  GetInstanceDetailResponse getInstanceDetailWithOptions(shared_ptr<GetInstanceDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceDetailResponse getInstanceDetail(shared_ptr<GetInstanceDetailRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<ListInstancesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<ListInstancesRequest> request);
  ModifyInstanceConfigResponse modifyInstanceConfigWithOptions(shared_ptr<ModifyInstanceConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceConfigResponse modifyInstanceConfig(shared_ptr<ModifyInstanceConfigRequest> request);
  UpdateAccessControlListResponse updateAccessControlListWithOptions(shared_ptr<UpdateAccessControlListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAccessControlListResponse updateAccessControlList(shared_ptr<UpdateAccessControlListRequest> request);
  UpdateInstanceNameResponse updateInstanceNameWithOptions(shared_ptr<UpdateInstanceNameRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceNameResponse updateInstanceName(shared_ptr<UpdateInstanceNameRequest> request);
  UpdatePublicNetworkStatusResponse updatePublicNetworkStatusWithOptions(shared_ptr<UpdatePublicNetworkStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePublicNetworkStatusResponse updatePublicNetworkStatus(shared_ptr<UpdatePublicNetworkStatusRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Milvus20231012

#endif
