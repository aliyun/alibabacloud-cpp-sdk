// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_OTS20160620_H_
#define ALIBABACLOUD_OTS20160620_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ots20160620 {
class BindInstance2VpcRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceVpcName{};
  shared_ptr<string> network{};
  shared_ptr<string> regionNo{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> virtualSwitchId{};
  shared_ptr<string> vpcId{};

  BindInstance2VpcRequest() {}

  explicit BindInstance2VpcRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceVpcName) {
      res["InstanceVpcName"] = boost::any(*instanceVpcName);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (virtualSwitchId) {
      res["VirtualSwitchId"] = boost::any(*virtualSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceVpcName") != m.end() && !m["InstanceVpcName"].empty()) {
      instanceVpcName = make_shared<string>(boost::any_cast<string>(m["InstanceVpcName"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("VirtualSwitchId") != m.end() && !m["VirtualSwitchId"].empty()) {
      virtualSwitchId = make_shared<string>(boost::any_cast<string>(m["VirtualSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~BindInstance2VpcRequest() = default;
};
class BindInstance2VpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> requestId{};

  BindInstance2VpcResponseBody() {}

  explicit BindInstance2VpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BindInstance2VpcResponseBody() = default;
};
class BindInstance2VpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindInstance2VpcResponseBody> body{};

  BindInstance2VpcResponse() {}

  explicit BindInstance2VpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindInstance2VpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindInstance2VpcResponseBody>(model1);
      }
    }
  }


  virtual ~BindInstance2VpcResponse() = default;
};
class DeleteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<long> resourceOwnerId{};

  DeleteInstanceRequest() {}

  explicit DeleteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteInstanceRequest() = default;
};
class DeleteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteInstanceResponseBody() = default;
};
class DeleteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceResponseBody> body{};

  DeleteInstanceResponse() {}

  explicit DeleteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResponse() = default;
};
class DeleteTagsRequestTagInfo : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DeleteTagsRequestTagInfo() {}

  explicit DeleteTagsRequestTagInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTagsRequestTagInfo() = default;
};
class DeleteTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<DeleteTagsRequestTagInfo>> tagInfo{};

  DeleteTagsRequest() {}

  explicit DeleteTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tagInfo) {
      vector<boost::any> temp1;
      for(auto item1:*tagInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TagInfo") != m.end() && !m["TagInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TagInfo"].type()) {
        vector<DeleteTagsRequestTagInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteTagsRequestTagInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagInfo = make_shared<vector<DeleteTagsRequestTagInfo>>(expect1);
      }
    }
  }


  virtual ~DeleteTagsRequest() = default;
};
class DeleteTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTagsResponseBody() {}

  explicit DeleteTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTagsResponseBody() = default;
};
class DeleteTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTagsResponseBody> body{};

  DeleteTagsResponse() {}

  explicit DeleteTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTagsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTagsResponse() = default;
};
class GetInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<long> resourceOwnerId{};

  GetInstanceRequest() {}

  explicit GetInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetInstanceRequest() = default;
};
class GetInstanceResponseBodyInstanceInfoQuota : public Darabonba::Model {
public:
  shared_ptr<long> entityQuota{};

  GetInstanceResponseBodyInstanceInfoQuota() {}

  explicit GetInstanceResponseBodyInstanceInfoQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityQuota) {
      res["EntityQuota"] = boost::any(*entityQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityQuota") != m.end() && !m["EntityQuota"].empty()) {
      entityQuota = make_shared<long>(boost::any_cast<long>(m["EntityQuota"]));
    }
  }


  virtual ~GetInstanceResponseBodyInstanceInfoQuota() = default;
};
class GetInstanceResponseBodyInstanceInfoTagInfosTagInfo : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetInstanceResponseBodyInstanceInfoTagInfosTagInfo() {}

  explicit GetInstanceResponseBodyInstanceInfoTagInfosTagInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetInstanceResponseBodyInstanceInfoTagInfosTagInfo() = default;
};
class GetInstanceResponseBodyInstanceInfoTagInfos : public Darabonba::Model {
public:
  shared_ptr<vector<GetInstanceResponseBodyInstanceInfoTagInfosTagInfo>> tagInfo{};

  GetInstanceResponseBodyInstanceInfoTagInfos() {}

  explicit GetInstanceResponseBodyInstanceInfoTagInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagInfo) {
      vector<boost::any> temp1;
      for(auto item1:*tagInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagInfo") != m.end() && !m["TagInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TagInfo"].type()) {
        vector<GetInstanceResponseBodyInstanceInfoTagInfosTagInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyInstanceInfoTagInfosTagInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagInfo = make_shared<vector<GetInstanceResponseBodyInstanceInfoTagInfosTagInfo>>(expect1);
      }
    }
  }


  virtual ~GetInstanceResponseBodyInstanceInfoTagInfos() = default;
};
class GetInstanceResponseBodyInstanceInfo : public Darabonba::Model {
public:
  shared_ptr<string> clusterType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> network{};
  shared_ptr<GetInstanceResponseBodyInstanceInfoQuota> quota{};
  shared_ptr<long> readCapacity{};
  shared_ptr<long> status{};
  shared_ptr<GetInstanceResponseBodyInstanceInfoTagInfos> tagInfos{};
  shared_ptr<string> userId{};
  shared_ptr<long> writeCapacity{};

  GetInstanceResponseBodyInstanceInfo() {}

  explicit GetInstanceResponseBodyInstanceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (quota) {
      res["Quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (readCapacity) {
      res["ReadCapacity"] = boost::any(*readCapacity);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagInfos) {
      res["TagInfos"] = tagInfos ? boost::any(tagInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (writeCapacity) {
      res["WriteCapacity"] = boost::any(*writeCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["Quota"].type()) {
        GetInstanceResponseBodyInstanceInfoQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Quota"]));
        quota = make_shared<GetInstanceResponseBodyInstanceInfoQuota>(model1);
      }
    }
    if (m.find("ReadCapacity") != m.end() && !m["ReadCapacity"].empty()) {
      readCapacity = make_shared<long>(boost::any_cast<long>(m["ReadCapacity"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TagInfos") != m.end() && !m["TagInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagInfos"].type()) {
        GetInstanceResponseBodyInstanceInfoTagInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagInfos"]));
        tagInfos = make_shared<GetInstanceResponseBodyInstanceInfoTagInfos>(model1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WriteCapacity") != m.end() && !m["WriteCapacity"].empty()) {
      writeCapacity = make_shared<long>(boost::any_cast<long>(m["WriteCapacity"]));
    }
  }


  virtual ~GetInstanceResponseBodyInstanceInfo() = default;
};
class GetInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetInstanceResponseBodyInstanceInfo> instanceInfo{};
  shared_ptr<string> requestId{};

  GetInstanceResponseBody() {}

  explicit GetInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceInfo) {
      res["InstanceInfo"] = instanceInfo ? boost::any(instanceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceInfo") != m.end() && !m["InstanceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceInfo"].type()) {
        GetInstanceResponseBodyInstanceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceInfo"]));
        instanceInfo = make_shared<GetInstanceResponseBodyInstanceInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetInstanceResponseBody() = default;
};
class GetInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceResponseBody> body{};

  GetInstanceResponse() {}

  explicit GetInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceResponse() = default;
};
class GetOtsServiceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};

  GetOtsServiceStatusRequest() {}

  explicit GetOtsServiceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetOtsServiceStatusRequest() = default;
};
class GetOtsServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetOtsServiceStatusResponseBody() {}

  explicit GetOtsServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetOtsServiceStatusResponseBody() = default;
};
class GetOtsServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOtsServiceStatusResponseBody> body{};

  GetOtsServiceStatusResponse() {}

  explicit GetOtsServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOtsServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOtsServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetOtsServiceStatusResponse() = default;
};
class InsertInstanceRequestTagInfo : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  InsertInstanceRequestTagInfo() {}

  explicit InsertInstanceRequestTagInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InsertInstanceRequestTagInfo() = default;
};
class InsertInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterType{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> network{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<InsertInstanceRequestTagInfo>> tagInfo{};

  InsertInstanceRequest() {}

  explicit InsertInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tagInfo) {
      vector<boost::any> temp1;
      for(auto item1:*tagInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TagInfo") != m.end() && !m["TagInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TagInfo"].type()) {
        vector<InsertInstanceRequestTagInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InsertInstanceRequestTagInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagInfo = make_shared<vector<InsertInstanceRequestTagInfo>>(expect1);
      }
    }
  }


  virtual ~InsertInstanceRequest() = default;
};
class InsertInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  InsertInstanceResponseBody() {}

  explicit InsertInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InsertInstanceResponseBody() = default;
};
class InsertInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InsertInstanceResponseBody> body{};

  InsertInstanceResponse() {}

  explicit InsertInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InsertInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InsertInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~InsertInstanceResponse() = default;
};
class InsertTagsRequestTagInfo : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  InsertTagsRequestTagInfo() {}

  explicit InsertTagsRequestTagInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InsertTagsRequestTagInfo() = default;
};
class InsertTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<InsertTagsRequestTagInfo>> tagInfo{};

  InsertTagsRequest() {}

  explicit InsertTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tagInfo) {
      vector<boost::any> temp1;
      for(auto item1:*tagInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TagInfo") != m.end() && !m["TagInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TagInfo"].type()) {
        vector<InsertTagsRequestTagInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InsertTagsRequestTagInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagInfo = make_shared<vector<InsertTagsRequestTagInfo>>(expect1);
      }
    }
  }


  virtual ~InsertTagsRequest() = default;
};
class InsertTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  InsertTagsResponseBody() {}

  explicit InsertTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InsertTagsResponseBody() = default;
};
class InsertTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InsertTagsResponseBody> body{};

  InsertTagsResponse() {}

  explicit InsertTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InsertTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InsertTagsResponseBody>(model1);
      }
    }
  }


  virtual ~InsertTagsResponse() = default;
};
class ListClusterTypeRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};

  ListClusterTypeRequest() {}

  explicit ListClusterTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListClusterTypeRequest() = default;
};
class ListClusterTypeResponseBodyClusterTypeDetailListClusterTypeDetail : public Darabonba::Model {
public:
  shared_ptr<string> clusterType{};
  shared_ptr<bool> isMultiAZ{};

  ListClusterTypeResponseBodyClusterTypeDetailListClusterTypeDetail() {}

  explicit ListClusterTypeResponseBodyClusterTypeDetailListClusterTypeDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (isMultiAZ) {
      res["IsMultiAZ"] = boost::any(*isMultiAZ);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("IsMultiAZ") != m.end() && !m["IsMultiAZ"].empty()) {
      isMultiAZ = make_shared<bool>(boost::any_cast<bool>(m["IsMultiAZ"]));
    }
  }


  virtual ~ListClusterTypeResponseBodyClusterTypeDetailListClusterTypeDetail() = default;
};
class ListClusterTypeResponseBodyClusterTypeDetailList : public Darabonba::Model {
public:
  shared_ptr<vector<ListClusterTypeResponseBodyClusterTypeDetailListClusterTypeDetail>> clusterTypeDetail{};

  ListClusterTypeResponseBodyClusterTypeDetailList() {}

  explicit ListClusterTypeResponseBodyClusterTypeDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterTypeDetail) {
      vector<boost::any> temp1;
      for(auto item1:*clusterTypeDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClusterTypeDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterTypeDetail") != m.end() && !m["ClusterTypeDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["ClusterTypeDetail"].type()) {
        vector<ListClusterTypeResponseBodyClusterTypeDetailListClusterTypeDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClusterTypeDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterTypeResponseBodyClusterTypeDetailListClusterTypeDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusterTypeDetail = make_shared<vector<ListClusterTypeResponseBodyClusterTypeDetailListClusterTypeDetail>>(expect1);
      }
    }
  }


  virtual ~ListClusterTypeResponseBodyClusterTypeDetailList() = default;
};
class ListClusterTypeResponseBodyClusterTypeInfos : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clusterType{};

  ListClusterTypeResponseBodyClusterTypeInfos() {}

  explicit ListClusterTypeResponseBodyClusterTypeInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClusterType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClusterType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusterType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListClusterTypeResponseBodyClusterTypeInfos() = default;
};
class ListClusterTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListClusterTypeResponseBodyClusterTypeDetailList> clusterTypeDetailList{};
  shared_ptr<ListClusterTypeResponseBodyClusterTypeInfos> clusterTypeInfos{};
  shared_ptr<string> requestId{};

  ListClusterTypeResponseBody() {}

  explicit ListClusterTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterTypeDetailList) {
      res["ClusterTypeDetailList"] = clusterTypeDetailList ? boost::any(clusterTypeDetailList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterTypeInfos) {
      res["ClusterTypeInfos"] = clusterTypeInfos ? boost::any(clusterTypeInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterTypeDetailList") != m.end() && !m["ClusterTypeDetailList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterTypeDetailList"].type()) {
        ListClusterTypeResponseBodyClusterTypeDetailList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterTypeDetailList"]));
        clusterTypeDetailList = make_shared<ListClusterTypeResponseBodyClusterTypeDetailList>(model1);
      }
    }
    if (m.find("ClusterTypeInfos") != m.end() && !m["ClusterTypeInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterTypeInfos"].type()) {
        ListClusterTypeResponseBodyClusterTypeInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterTypeInfos"]));
        clusterTypeInfos = make_shared<ListClusterTypeResponseBodyClusterTypeInfos>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListClusterTypeResponseBody() = default;
};
class ListClusterTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClusterTypeResponseBody> body{};

  ListClusterTypeResponse() {}

  explicit ListClusterTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClusterTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterTypeResponse() = default;
};
class ListInstanceRequestTagInfo : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListInstanceRequestTagInfo() {}

  explicit ListInstanceRequestTagInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInstanceRequestTagInfo() = default;
};
class ListInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<ListInstanceRequestTagInfo>> tagInfo{};

  ListInstanceRequest() {}

  explicit ListInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tagInfo) {
      vector<boost::any> temp1;
      for(auto item1:*tagInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TagInfo") != m.end() && !m["TagInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TagInfo"].type()) {
        vector<ListInstanceRequestTagInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceRequestTagInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagInfo = make_shared<vector<ListInstanceRequestTagInfo>>(expect1);
      }
    }
  }


  virtual ~ListInstanceRequest() = default;
};
class ListInstanceResponseBodyInstanceInfosInstanceInfo : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<string> timestamp{};

  ListInstanceResponseBodyInstanceInfosInstanceInfo() {}

  explicit ListInstanceResponseBodyInstanceInfosInstanceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
  }


  virtual ~ListInstanceResponseBodyInstanceInfosInstanceInfo() = default;
};
class ListInstanceResponseBodyInstanceInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstanceResponseBodyInstanceInfosInstanceInfo>> instanceInfo{};

  ListInstanceResponseBodyInstanceInfos() {}

  explicit ListInstanceResponseBodyInstanceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*instanceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceInfo") != m.end() && !m["InstanceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceInfo"].type()) {
        vector<ListInstanceResponseBodyInstanceInfosInstanceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceResponseBodyInstanceInfosInstanceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceInfo = make_shared<vector<ListInstanceResponseBodyInstanceInfosInstanceInfo>>(expect1);
      }
    }
  }


  virtual ~ListInstanceResponseBodyInstanceInfos() = default;
};
class ListInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListInstanceResponseBodyInstanceInfos> instanceInfos{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListInstanceResponseBody() {}

  explicit ListInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceInfos) {
      res["InstanceInfos"] = instanceInfos ? boost::any(instanceInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceInfos") != m.end() && !m["InstanceInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceInfos"].type()) {
        ListInstanceResponseBodyInstanceInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceInfos"]));
        instanceInfos = make_shared<ListInstanceResponseBodyInstanceInfos>(model1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListInstanceResponseBody() = default;
};
class ListInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceResponseBody> body{};

  ListInstanceResponse() {}

  explicit ListInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceResponse() = default;
};
class ListTagsRequestTagInfo : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagsRequestTagInfo() {}

  explicit ListTagsRequestTagInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagsRequestTagInfo() = default;
};
class ListTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<ListTagsRequestTagInfo>> tagInfo{};

  ListTagsRequest() {}

  explicit ListTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tagInfo) {
      vector<boost::any> temp1;
      for(auto item1:*tagInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TagInfo") != m.end() && !m["TagInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TagInfo"].type()) {
        vector<ListTagsRequestTagInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagsRequestTagInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagInfo = make_shared<vector<ListTagsRequestTagInfo>>(expect1);
      }
    }
  }


  virtual ~ListTagsRequest() = default;
};
class ListTagsResponseBodyTagInfosTagInfo : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagsResponseBodyTagInfosTagInfo() {}

  explicit ListTagsResponseBodyTagInfosTagInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagsResponseBodyTagInfosTagInfo() = default;
};
class ListTagsResponseBodyTagInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagsResponseBodyTagInfosTagInfo>> tagInfo{};

  ListTagsResponseBodyTagInfos() {}

  explicit ListTagsResponseBodyTagInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagInfo) {
      vector<boost::any> temp1;
      for(auto item1:*tagInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagInfo") != m.end() && !m["TagInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TagInfo"].type()) {
        vector<ListTagsResponseBodyTagInfosTagInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagsResponseBodyTagInfosTagInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagInfo = make_shared<vector<ListTagsResponseBodyTagInfosTagInfo>>(expect1);
      }
    }
  }


  virtual ~ListTagsResponseBodyTagInfos() = default;
};
class ListTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagsResponseBodyTagInfos> tagInfos{};
  shared_ptr<long> totalCount{};

  ListTagsResponseBody() {}

  explicit ListTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagInfos) {
      res["TagInfos"] = tagInfos ? boost::any(tagInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagInfos") != m.end() && !m["TagInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagInfos"].type()) {
        ListTagsResponseBodyTagInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagInfos"]));
        tagInfos = make_shared<ListTagsResponseBodyTagInfos>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTagsResponseBody() = default;
};
class ListTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagsResponseBody> body{};

  ListTagsResponse() {}

  explicit ListTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagsResponse() = default;
};
class ListVpcInfoByInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> resourceOwnerId{};

  ListVpcInfoByInstanceRequest() {}

  explicit ListVpcInfoByInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListVpcInfoByInstanceRequest() = default;
};
class ListVpcInfoByInstanceResponseBodyVpcInfosVpcInfo : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> instanceVpcName{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> vpcId{};

  ListVpcInfoByInstanceResponseBodyVpcInfosVpcInfo() {}

  explicit ListVpcInfoByInstanceResponseBodyVpcInfosVpcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (instanceVpcName) {
      res["InstanceVpcName"] = boost::any(*instanceVpcName);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("InstanceVpcName") != m.end() && !m["InstanceVpcName"].empty()) {
      instanceVpcName = make_shared<string>(boost::any_cast<string>(m["InstanceVpcName"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListVpcInfoByInstanceResponseBodyVpcInfosVpcInfo() = default;
};
class ListVpcInfoByInstanceResponseBodyVpcInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ListVpcInfoByInstanceResponseBodyVpcInfosVpcInfo>> vpcInfo{};

  ListVpcInfoByInstanceResponseBodyVpcInfos() {}

  explicit ListVpcInfoByInstanceResponseBodyVpcInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcInfo) {
      vector<boost::any> temp1;
      for(auto item1:*vpcInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpcInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcInfo") != m.end() && !m["VpcInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["VpcInfo"].type()) {
        vector<ListVpcInfoByInstanceResponseBodyVpcInfosVpcInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpcInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpcInfoByInstanceResponseBodyVpcInfosVpcInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcInfo = make_shared<vector<ListVpcInfoByInstanceResponseBodyVpcInfosVpcInfo>>(expect1);
      }
    }
  }


  virtual ~ListVpcInfoByInstanceResponseBodyVpcInfos() = default;
};
class ListVpcInfoByInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<ListVpcInfoByInstanceResponseBodyVpcInfos> vpcInfos{};

  ListVpcInfoByInstanceResponseBody() {}

  explicit ListVpcInfoByInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (vpcInfos) {
      res["VpcInfos"] = vpcInfos ? boost::any(vpcInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("VpcInfos") != m.end() && !m["VpcInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpcInfos"].type()) {
        ListVpcInfoByInstanceResponseBodyVpcInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpcInfos"]));
        vpcInfos = make_shared<ListVpcInfoByInstanceResponseBodyVpcInfos>(model1);
      }
    }
  }


  virtual ~ListVpcInfoByInstanceResponseBody() = default;
};
class ListVpcInfoByInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVpcInfoByInstanceResponseBody> body{};

  ListVpcInfoByInstanceResponse() {}

  explicit ListVpcInfoByInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVpcInfoByInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpcInfoByInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpcInfoByInstanceResponse() = default;
};
class ListVpcInfoByVpcRequestTagInfo : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListVpcInfoByVpcRequestTagInfo() {}

  explicit ListVpcInfoByVpcRequestTagInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVpcInfoByVpcRequestTagInfo() = default;
};
class ListVpcInfoByVpcRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<ListVpcInfoByVpcRequestTagInfo>> tagInfo{};
  shared_ptr<string> vpcId{};

  ListVpcInfoByVpcRequest() {}

  explicit ListVpcInfoByVpcRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tagInfo) {
      vector<boost::any> temp1;
      for(auto item1:*tagInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagInfo"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TagInfo") != m.end() && !m["TagInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TagInfo"].type()) {
        vector<ListVpcInfoByVpcRequestTagInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpcInfoByVpcRequestTagInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagInfo = make_shared<vector<ListVpcInfoByVpcRequestTagInfo>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListVpcInfoByVpcRequest() = default;
};
class ListVpcInfoByVpcResponseBodyVpcInfosVpcInfo : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceVpcName{};
  shared_ptr<string> regionNo{};

  ListVpcInfoByVpcResponseBodyVpcInfosVpcInfo() {}

  explicit ListVpcInfoByVpcResponseBodyVpcInfosVpcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceVpcName) {
      res["InstanceVpcName"] = boost::any(*instanceVpcName);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceVpcName") != m.end() && !m["InstanceVpcName"].empty()) {
      instanceVpcName = make_shared<string>(boost::any_cast<string>(m["InstanceVpcName"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
  }


  virtual ~ListVpcInfoByVpcResponseBodyVpcInfosVpcInfo() = default;
};
class ListVpcInfoByVpcResponseBodyVpcInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ListVpcInfoByVpcResponseBodyVpcInfosVpcInfo>> vpcInfo{};

  ListVpcInfoByVpcResponseBodyVpcInfos() {}

  explicit ListVpcInfoByVpcResponseBodyVpcInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcInfo) {
      vector<boost::any> temp1;
      for(auto item1:*vpcInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpcInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcInfo") != m.end() && !m["VpcInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["VpcInfo"].type()) {
        vector<ListVpcInfoByVpcResponseBodyVpcInfosVpcInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpcInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpcInfoByVpcResponseBodyVpcInfosVpcInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcInfo = make_shared<vector<ListVpcInfoByVpcResponseBodyVpcInfosVpcInfo>>(expect1);
      }
    }
  }


  virtual ~ListVpcInfoByVpcResponseBodyVpcInfos() = default;
};
class ListVpcInfoByVpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> vpcId{};
  shared_ptr<ListVpcInfoByVpcResponseBodyVpcInfos> vpcInfos{};

  ListVpcInfoByVpcResponseBody() {}

  explicit ListVpcInfoByVpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcInfos) {
      res["VpcInfos"] = vpcInfos ? boost::any(vpcInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcInfos") != m.end() && !m["VpcInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpcInfos"].type()) {
        ListVpcInfoByVpcResponseBodyVpcInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpcInfos"]));
        vpcInfos = make_shared<ListVpcInfoByVpcResponseBodyVpcInfos>(model1);
      }
    }
  }


  virtual ~ListVpcInfoByVpcResponseBody() = default;
};
class ListVpcInfoByVpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVpcInfoByVpcResponseBody> body{};

  ListVpcInfoByVpcResponse() {}

  explicit ListVpcInfoByVpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVpcInfoByVpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpcInfoByVpcResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpcInfoByVpcResponse() = default;
};
class OpenOtsServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenOtsServiceResponseBody() {}

  explicit OpenOtsServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenOtsServiceResponseBody() = default;
};
class OpenOtsServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenOtsServiceResponseBody> body{};

  OpenOtsServiceResponse() {}

  explicit OpenOtsServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenOtsServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenOtsServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenOtsServiceResponse() = default;
};
class UnbindInstance2VpcRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceVpcName{};
  shared_ptr<string> regionNo{};
  shared_ptr<long> resourceOwnerId{};

  UnbindInstance2VpcRequest() {}

  explicit UnbindInstance2VpcRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceVpcName) {
      res["InstanceVpcName"] = boost::any(*instanceVpcName);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceVpcName") != m.end() && !m["InstanceVpcName"].empty()) {
      instanceVpcName = make_shared<string>(boost::any_cast<string>(m["InstanceVpcName"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UnbindInstance2VpcRequest() = default;
};
class UnbindInstance2VpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnbindInstance2VpcResponseBody() {}

  explicit UnbindInstance2VpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnbindInstance2VpcResponseBody() = default;
};
class UnbindInstance2VpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindInstance2VpcResponseBody> body{};

  UnbindInstance2VpcResponse() {}

  explicit UnbindInstance2VpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindInstance2VpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindInstance2VpcResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindInstance2VpcResponse() = default;
};
class UpdateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<string> network{};
  shared_ptr<long> resourceOwnerId{};

  UpdateInstanceRequest() {}

  explicit UpdateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdateInstanceRequest() = default;
};
class UpdateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateInstanceResponseBody() {}

  explicit UpdateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateInstanceResponseBody() = default;
};
class UpdateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceResponseBody> body{};

  UpdateInstanceResponse() {}

  explicit UpdateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceResponse() = default;
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
  BindInstance2VpcResponse bindInstance2VpcWithOptions(shared_ptr<BindInstance2VpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindInstance2VpcResponse bindInstance2Vpc(shared_ptr<BindInstance2VpcRequest> request);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<DeleteInstanceRequest> request);
  DeleteTagsResponse deleteTagsWithOptions(shared_ptr<DeleteTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTagsResponse deleteTags(shared_ptr<DeleteTagsRequest> request);
  GetInstanceResponse getInstanceWithOptions(shared_ptr<GetInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResponse getInstance(shared_ptr<GetInstanceRequest> request);
  GetOtsServiceStatusResponse getOtsServiceStatusWithOptions(shared_ptr<GetOtsServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOtsServiceStatusResponse getOtsServiceStatus(shared_ptr<GetOtsServiceStatusRequest> request);
  InsertInstanceResponse insertInstanceWithOptions(shared_ptr<InsertInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InsertInstanceResponse insertInstance(shared_ptr<InsertInstanceRequest> request);
  InsertTagsResponse insertTagsWithOptions(shared_ptr<InsertTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InsertTagsResponse insertTags(shared_ptr<InsertTagsRequest> request);
  ListClusterTypeResponse listClusterTypeWithOptions(shared_ptr<ListClusterTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterTypeResponse listClusterType(shared_ptr<ListClusterTypeRequest> request);
  ListInstanceResponse listInstanceWithOptions(shared_ptr<ListInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceResponse listInstance(shared_ptr<ListInstanceRequest> request);
  ListTagsResponse listTagsWithOptions(shared_ptr<ListTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagsResponse listTags(shared_ptr<ListTagsRequest> request);
  ListVpcInfoByInstanceResponse listVpcInfoByInstanceWithOptions(shared_ptr<ListVpcInfoByInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpcInfoByInstanceResponse listVpcInfoByInstance(shared_ptr<ListVpcInfoByInstanceRequest> request);
  ListVpcInfoByVpcResponse listVpcInfoByVpcWithOptions(shared_ptr<ListVpcInfoByVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpcInfoByVpcResponse listVpcInfoByVpc(shared_ptr<ListVpcInfoByVpcRequest> request);
  OpenOtsServiceResponse openOtsServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenOtsServiceResponse openOtsService();
  UnbindInstance2VpcResponse unbindInstance2VpcWithOptions(shared_ptr<UnbindInstance2VpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindInstance2VpcResponse unbindInstance2Vpc(shared_ptr<UnbindInstance2VpcRequest> request);
  UpdateInstanceResponse updateInstanceWithOptions(shared_ptr<UpdateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceResponse updateInstance(shared_ptr<UpdateInstanceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ots20160620

#endif
