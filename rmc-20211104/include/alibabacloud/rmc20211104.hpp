// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_RMC20211104_H_
#define ALIBABACLOUD_RMC20211104_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_RMC20211104 {
class ListResourceRelationshipsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> sourceRegionId{};
  shared_ptr<vector<string>> sourceResourceId{};
  shared_ptr<string> sourceResourceType{};
  shared_ptr<vector<string>> targetResourceType{};

  ListResourceRelationshipsRequest() {}

  explicit ListResourceRelationshipsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (sourceRegionId) {
      res["SourceRegionId"] = boost::any(*sourceRegionId);
    }
    if (sourceResourceId) {
      res["SourceResourceId"] = boost::any(*sourceResourceId);
    }
    if (sourceResourceType) {
      res["SourceResourceType"] = boost::any(*sourceResourceType);
    }
    if (targetResourceType) {
      res["TargetResourceType"] = boost::any(*targetResourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("SourceRegionId") != m.end() && !m["SourceRegionId"].empty()) {
      sourceRegionId = make_shared<string>(boost::any_cast<string>(m["SourceRegionId"]));
    }
    if (m.find("SourceResourceId") != m.end() && !m["SourceResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceResourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceResourceType") != m.end() && !m["SourceResourceType"].empty()) {
      sourceResourceType = make_shared<string>(boost::any_cast<string>(m["SourceResourceType"]));
    }
    if (m.find("TargetResourceType") != m.end() && !m["TargetResourceType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TargetResourceType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TargetResourceType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      targetResourceType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListResourceRelationshipsRequest() = default;
};
class ListResourceRelationshipsResponseBodyResourceRelationships : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> sourceRegionId{};
  shared_ptr<string> sourceResourceId{};
  shared_ptr<string> sourceResourceType{};
  shared_ptr<string> targetRegionId{};
  shared_ptr<string> targetResourceId{};
  shared_ptr<string> targetResourceType{};

  ListResourceRelationshipsResponseBodyResourceRelationships() {}

  explicit ListResourceRelationshipsResponseBodyResourceRelationships(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (sourceRegionId) {
      res["SourceRegionId"] = boost::any(*sourceRegionId);
    }
    if (sourceResourceId) {
      res["SourceResourceId"] = boost::any(*sourceResourceId);
    }
    if (sourceResourceType) {
      res["SourceResourceType"] = boost::any(*sourceResourceType);
    }
    if (targetRegionId) {
      res["TargetRegionId"] = boost::any(*targetRegionId);
    }
    if (targetResourceId) {
      res["TargetResourceId"] = boost::any(*targetResourceId);
    }
    if (targetResourceType) {
      res["TargetResourceType"] = boost::any(*targetResourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("SourceRegionId") != m.end() && !m["SourceRegionId"].empty()) {
      sourceRegionId = make_shared<string>(boost::any_cast<string>(m["SourceRegionId"]));
    }
    if (m.find("SourceResourceId") != m.end() && !m["SourceResourceId"].empty()) {
      sourceResourceId = make_shared<string>(boost::any_cast<string>(m["SourceResourceId"]));
    }
    if (m.find("SourceResourceType") != m.end() && !m["SourceResourceType"].empty()) {
      sourceResourceType = make_shared<string>(boost::any_cast<string>(m["SourceResourceType"]));
    }
    if (m.find("TargetRegionId") != m.end() && !m["TargetRegionId"].empty()) {
      targetRegionId = make_shared<string>(boost::any_cast<string>(m["TargetRegionId"]));
    }
    if (m.find("TargetResourceId") != m.end() && !m["TargetResourceId"].empty()) {
      targetResourceId = make_shared<string>(boost::any_cast<string>(m["TargetResourceId"]));
    }
    if (m.find("TargetResourceType") != m.end() && !m["TargetResourceType"].empty()) {
      targetResourceType = make_shared<string>(boost::any_cast<string>(m["TargetResourceType"]));
    }
  }


  virtual ~ListResourceRelationshipsResponseBodyResourceRelationships() = default;
};
class ListResourceRelationshipsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListResourceRelationshipsResponseBodyResourceRelationships>> resourceRelationships{};

  ListResourceRelationshipsResponseBody() {}

  explicit ListResourceRelationshipsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceRelationships) {
      vector<boost::any> temp1;
      for(auto item1:*resourceRelationships){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceRelationships"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceRelationships") != m.end() && !m["ResourceRelationships"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceRelationships"].type()) {
        vector<ListResourceRelationshipsResponseBodyResourceRelationships> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceRelationships"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceRelationshipsResponseBodyResourceRelationships model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceRelationships = make_shared<vector<ListResourceRelationshipsResponseBodyResourceRelationships>>(expect1);
      }
    }
  }


  virtual ~ListResourceRelationshipsResponseBody() = default;
};
class ListResourceRelationshipsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceRelationshipsResponseBody> body{};

  ListResourceRelationshipsResponse() {}

  explicit ListResourceRelationshipsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceRelationshipsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceRelationshipsResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceRelationshipsResponse() = default;
};
class SearchResourcesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> matchType{};
  shared_ptr<vector<string>> value{};

  SearchResourcesRequestFilter() {}

  explicit SearchResourcesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
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
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      value = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SearchResourcesRequestFilter() = default;
};
class SearchResourcesRequestSortCriterion : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> order{};

  SearchResourcesRequestSortCriterion() {}

  explicit SearchResourcesRequestSortCriterion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
  }


  virtual ~SearchResourcesRequestSortCriterion() = default;
};
class SearchResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<SearchResourcesRequestFilter>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<SearchResourcesRequestSortCriterion> sortCriterion{};

  SearchResourcesRequest() {}

  explicit SearchResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sortCriterion) {
      res["SortCriterion"] = sortCriterion ? boost::any(sortCriterion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<SearchResourcesRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchResourcesRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<SearchResourcesRequestFilter>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SortCriterion") != m.end() && !m["SortCriterion"].empty()) {
      if (typeid(map<string, boost::any>) == m["SortCriterion"].type()) {
        SearchResourcesRequestSortCriterion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SortCriterion"]));
        sortCriterion = make_shared<SearchResourcesRequestSortCriterion>(model1);
      }
    }
  }


  virtual ~SearchResourcesRequest() = default;
};
class SearchResourcesResponseBodyFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> matchType{};
  shared_ptr<vector<string>> values{};

  SearchResourcesResponseBodyFilters() {}

  explicit SearchResourcesResponseBodyFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SearchResourcesResponseBodyFilters() = default;
};
class SearchResourcesResponseBodyResourcesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  SearchResourcesResponseBodyResourcesTags() {}

  explicit SearchResourcesResponseBodyResourcesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SearchResourcesResponseBodyResourcesTags() = default;
};
class SearchResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<string>> ipAddresses{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<SearchResourcesResponseBodyResourcesTags>> tags{};
  shared_ptr<string> zoneId{};

  SearchResourcesResponseBodyResources() {}

  explicit SearchResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (ipAddresses) {
      res["IpAddresses"] = boost::any(*ipAddresses);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("IpAddresses") != m.end() && !m["IpAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipAddresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<SearchResourcesResponseBodyResourcesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchResourcesResponseBodyResourcesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<SearchResourcesResponseBodyResourcesTags>>(expect1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~SearchResourcesResponseBodyResources() = default;
};
class SearchResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SearchResourcesResponseBodyFilters>> filters{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<SearchResourcesResponseBodyResources>> resources{};

  SearchResourcesResponseBody() {}

  explicit SearchResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<SearchResourcesResponseBodyFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchResourcesResponseBodyFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<SearchResourcesResponseBodyFilters>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<SearchResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<SearchResourcesResponseBodyResources>>(expect1);
      }
    }
  }


  virtual ~SearchResourcesResponseBody() = default;
};
class SearchResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchResourcesResponseBody> body{};

  SearchResourcesResponse() {}

  explicit SearchResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~SearchResourcesResponse() = default;
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
  ListResourceRelationshipsResponse listResourceRelationshipsWithOptions(shared_ptr<ListResourceRelationshipsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceRelationshipsResponse listResourceRelationships(shared_ptr<ListResourceRelationshipsRequest> request);
  SearchResourcesResponse searchResourcesWithOptions(shared_ptr<SearchResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchResourcesResponse searchResources(shared_ptr<SearchResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_RMC20211104

#endif
