// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMP20210630_H_
#define ALIBABACLOUD_IMP20210630_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Imp20210630 {
class RpcStatus : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> detail{};
  shared_ptr<string> message{};

  RpcStatus() {}

  explicit RpcStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~RpcStatus() = default;
};
class AssetsAuditAssetResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RpcStatus> status{};

  AssetsAuditAssetResponse() {}

  explicit AssetsAuditAssetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      if (typeid(map<string, boost::any>) == m["Status"].type()) {
        RpcStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Status"]));
        status = make_shared<RpcStatus>(model1);
      }
    }
  }


  virtual ~AssetsAuditAssetResponse() = default;
};
class CommonAddress : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> state{};
  shared_ptr<string> zip{};

  CommonAddress() {}

  explicit CommonAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (zip) {
      res["Zip"] = boost::any(*zip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Zip") != m.end() && !m["Zip"].empty()) {
      zip = make_shared<string>(boost::any_cast<string>(m["Zip"]));
    }
  }


  virtual ~CommonAddress() = default;
};
class CommonMediaResource : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> sha1{};
  shared_ptr<long> size{};
  shared_ptr<string> url{};

  CommonMediaResource() {}

  explicit CommonMediaResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sha1) {
      res["Sha1"] = boost::any(*sha1);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Sha1") != m.end() && !m["Sha1"].empty()) {
      sha1 = make_shared<string>(boost::any_cast<string>(m["Sha1"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CommonMediaResource() = default;
};
class TypeLatLng : public Darabonba::Model {
public:
  shared_ptr<double> latitude{};
  shared_ptr<double> longitude{};

  TypeLatLng() {}

  explicit TypeLatLng(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<double>(boost::any_cast<double>(m["Latitude"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<double>(boost::any_cast<double>(m["Longitude"]));
    }
  }


  virtual ~TypeLatLng() = default;
};
class CommonAsset : public Darabonba::Model {
public:
  shared_ptr<CommonAddress> address{};
  shared_ptr<string> appId{};
  shared_ptr<string> auditStatus{};
  shared_ptr<string> author{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> extends{};
  shared_ptr<string> id{};
  shared_ptr<vector<CommonMediaResource>> images{};
  shared_ptr<map<string, boost::any>> labels{};
  shared_ptr<TypeLatLng> location{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> synopsis{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<string> title{};
  shared_ptr<string> updatedAt{};
  shared_ptr<vector<CommonMediaResource>> videos{};

  CommonAsset() {}

  explicit CommonAsset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (author) {
      res["Author"] = boost::any(*author);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (extends) {
      res["Extends"] = boost::any(*extends);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (synopsis) {
      res["Synopsis"] = boost::any(*synopsis);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (videos) {
      vector<boost::any> temp1;
      for(auto item1:*videos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Videos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        CommonAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<CommonAddress>(model1);
      }
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      author = make_shared<string>(boost::any_cast<string>(m["Author"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Extends") != m.end() && !m["Extends"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Extends"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extends = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<CommonMediaResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CommonMediaResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<CommonMediaResource>>(expect1);
      }
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Labels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        TypeLatLng model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<TypeLatLng>(model1);
      }
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Synopsis") != m.end() && !m["Synopsis"].empty()) {
      synopsis = make_shared<string>(boost::any_cast<string>(m["Synopsis"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Videos") != m.end() && !m["Videos"].empty()) {
      if (typeid(vector<boost::any>) == m["Videos"].type()) {
        vector<CommonMediaResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Videos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CommonMediaResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videos = make_shared<vector<CommonMediaResource>>(expect1);
      }
    }
  }


  virtual ~CommonAsset() = default;
};
class AssetsCreateAssetResponse : public Darabonba::Model {
public:
  shared_ptr<CommonAsset> asset{};
  shared_ptr<string> requestId{};
  shared_ptr<RpcStatus> status{};

  AssetsCreateAssetResponse() {}

  explicit AssetsCreateAssetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asset) {
      res["Asset"] = asset ? boost::any(asset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Asset") != m.end() && !m["Asset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Asset"].type()) {
        CommonAsset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Asset"]));
        asset = make_shared<CommonAsset>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      if (typeid(map<string, boost::any>) == m["Status"].type()) {
        RpcStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Status"]));
        status = make_shared<RpcStatus>(model1);
      }
    }
  }


  virtual ~AssetsCreateAssetResponse() = default;
};
class AssetsDeleteAssetResponse : public Darabonba::Model {
public:
  shared_ptr<CommonAsset> asset{};
  shared_ptr<string> requestId{};
  shared_ptr<RpcStatus> status{};

  AssetsDeleteAssetResponse() {}

  explicit AssetsDeleteAssetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asset) {
      res["Asset"] = asset ? boost::any(asset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Asset") != m.end() && !m["Asset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Asset"].type()) {
        CommonAsset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Asset"]));
        asset = make_shared<CommonAsset>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      if (typeid(map<string, boost::any>) == m["Status"].type()) {
        RpcStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Status"]));
        status = make_shared<RpcStatus>(model1);
      }
    }
  }


  virtual ~AssetsDeleteAssetResponse() = default;
};
class AssetsGetAssetResponse : public Darabonba::Model {
public:
  shared_ptr<CommonAsset> asset{};
  shared_ptr<string> requestId{};
  shared_ptr<RpcStatus> status{};

  AssetsGetAssetResponse() {}

  explicit AssetsGetAssetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asset) {
      res["Asset"] = asset ? boost::any(asset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Asset") != m.end() && !m["Asset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Asset"].type()) {
        CommonAsset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Asset"]));
        asset = make_shared<CommonAsset>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      if (typeid(map<string, boost::any>) == m["Status"].type()) {
        RpcStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Status"]));
        status = make_shared<RpcStatus>(model1);
      }
    }
  }


  virtual ~AssetsGetAssetResponse() = default;
};
class AssetsListAssetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> fieldMask{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> params{};
  shared_ptr<string> topic{};

  AssetsListAssetsRequest() {}

  explicit AssetsListAssetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (fieldMask) {
      res["FieldMask"] = boost::any(*fieldMask);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("FieldMask") != m.end() && !m["FieldMask"].empty()) {
      fieldMask = make_shared<string>(boost::any_cast<string>(m["FieldMask"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~AssetsListAssetsRequest() = default;
};
class AssetsListAssetsResponse : public Darabonba::Model {
public:
  shared_ptr<vector<CommonAsset>> assets{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<RpcStatus> status{};

  AssetsListAssetsResponse() {}

  explicit AssetsListAssetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assets) {
      vector<boost::any> temp1;
      for(auto item1:*assets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Assets"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Assets") != m.end() && !m["Assets"].empty()) {
      if (typeid(vector<boost::any>) == m["Assets"].type()) {
        vector<CommonAsset> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Assets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CommonAsset model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assets = make_shared<vector<CommonAsset>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      if (typeid(map<string, boost::any>) == m["Status"].type()) {
        RpcStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Status"]));
        status = make_shared<RpcStatus>(model1);
      }
    }
  }


  virtual ~AssetsListAssetsResponse() = default;
};
class AssetsUpdateAssetResponse : public Darabonba::Model {
public:
  shared_ptr<CommonAsset> asset{};
  shared_ptr<string> requestId{};
  shared_ptr<RpcStatus> status{};

  AssetsUpdateAssetResponse() {}

  explicit AssetsUpdateAssetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asset) {
      res["Asset"] = asset ? boost::any(asset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Asset") != m.end() && !m["Asset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Asset"].type()) {
        CommonAsset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Asset"]));
        asset = make_shared<CommonAsset>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      if (typeid(map<string, boost::any>) == m["Status"].type()) {
        RpcStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Status"]));
        status = make_shared<RpcStatus>(model1);
      }
    }
  }


  virtual ~AssetsUpdateAssetResponse() = default;
};
class BanAllCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  BanAllCommentRequest() {}

  explicit BanAllCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~BanAllCommentRequest() = default;
};
class BanAllCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  BanAllCommentResponseBody() {}

  explicit BanAllCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~BanAllCommentResponseBody() = default;
};
class BanAllCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BanAllCommentResponseBody> body{};

  BanAllCommentResponse() {}

  explicit BanAllCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BanAllCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BanAllCommentResponseBody>(model1);
      }
    }
  }


  virtual ~BanAllCommentResponse() = default;
};
class BanCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> banCommentTime{};
  shared_ptr<string> banCommentUser{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  BanCommentRequest() {}

  explicit BanCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (banCommentTime) {
      res["BanCommentTime"] = boost::any(*banCommentTime);
    }
    if (banCommentUser) {
      res["BanCommentUser"] = boost::any(*banCommentUser);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BanCommentTime") != m.end() && !m["BanCommentTime"].empty()) {
      banCommentTime = make_shared<long>(boost::any_cast<long>(m["BanCommentTime"]));
    }
    if (m.find("BanCommentUser") != m.end() && !m["BanCommentUser"].empty()) {
      banCommentUser = make_shared<string>(boost::any_cast<string>(m["BanCommentUser"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~BanCommentRequest() = default;
};
class BanCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  BanCommentResponseBody() {}

  explicit BanCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~BanCommentResponseBody() = default;
};
class BanCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BanCommentResponseBody> body{};

  BanCommentResponse() {}

  explicit BanCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BanCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BanCommentResponseBody>(model1);
      }
    }
  }


  virtual ~BanCommentResponse() = default;
};
class CancelBanAllCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  CancelBanAllCommentRequest() {}

  explicit CancelBanAllCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CancelBanAllCommentRequest() = default;
};
class CancelBanAllCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  CancelBanAllCommentResponseBody() {}

  explicit CancelBanAllCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~CancelBanAllCommentResponseBody() = default;
};
class CancelBanAllCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelBanAllCommentResponseBody> body{};

  CancelBanAllCommentResponse() {}

  explicit CancelBanAllCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelBanAllCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelBanAllCommentResponseBody>(model1);
      }
    }
  }


  virtual ~CancelBanAllCommentResponse() = default;
};
class CancelBanCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> banCommentUser{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  CancelBanCommentRequest() {}

  explicit CancelBanCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (banCommentUser) {
      res["BanCommentUser"] = boost::any(*banCommentUser);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BanCommentUser") != m.end() && !m["BanCommentUser"].empty()) {
      banCommentUser = make_shared<string>(boost::any_cast<string>(m["BanCommentUser"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CancelBanCommentRequest() = default;
};
class CancelBanCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  CancelBanCommentResponseBody() {}

  explicit CancelBanCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~CancelBanCommentResponseBody() = default;
};
class CancelBanCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelBanCommentResponseBody> body{};

  CancelBanCommentResponse() {}

  explicit CancelBanCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelBanCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelBanCommentResponseBody>(model1);
      }
    }
  }


  virtual ~CancelBanCommentResponse() = default;
};
class CancelUserAdminRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  CancelUserAdminRequest() {}

  explicit CancelUserAdminRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CancelUserAdminRequest() = default;
};
class CancelUserAdminResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelUserAdminResponseBody() {}

  explicit CancelUserAdminResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelUserAdminResponseBody() = default;
};
class CancelUserAdminResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelUserAdminResponseBody> body{};

  CancelUserAdminResponse() {}

  explicit CancelUserAdminResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelUserAdminResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelUserAdminResponseBody>(model1);
      }
    }
  }


  virtual ~CancelUserAdminResponse() = default;
};
class CreateClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> createNickname{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> title{};

  CreateClassRequest() {}

  explicit CreateClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (createNickname) {
      res["CreateNickname"] = boost::any(*createNickname);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateNickname") != m.end() && !m["CreateNickname"].empty()) {
      createNickname = make_shared<string>(boost::any_cast<string>(m["CreateNickname"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateClassRequest() = default;
};
class CreateClassResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> classId{};
  shared_ptr<string> confId{};
  shared_ptr<string> createNickname{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> liveId{};
  shared_ptr<string> roomId{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};
  shared_ptr<string> whiteboardId{};
  shared_ptr<string> whiteboardRecordId{};

  CreateClassResponseBodyResult() {}

  explicit CreateClassResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (confId) {
      res["ConfId"] = boost::any(*confId);
    }
    if (createNickname) {
      res["CreateNickname"] = boost::any(*createNickname);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (whiteboardId) {
      res["WhiteboardId"] = boost::any(*whiteboardId);
    }
    if (whiteboardRecordId) {
      res["WhiteboardRecordId"] = boost::any(*whiteboardRecordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("ConfId") != m.end() && !m["ConfId"].empty()) {
      confId = make_shared<string>(boost::any_cast<string>(m["ConfId"]));
    }
    if (m.find("CreateNickname") != m.end() && !m["CreateNickname"].empty()) {
      createNickname = make_shared<string>(boost::any_cast<string>(m["CreateNickname"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("WhiteboardId") != m.end() && !m["WhiteboardId"].empty()) {
      whiteboardId = make_shared<string>(boost::any_cast<string>(m["WhiteboardId"]));
    }
    if (m.find("WhiteboardRecordId") != m.end() && !m["WhiteboardRecordId"].empty()) {
      whiteboardRecordId = make_shared<string>(boost::any_cast<string>(m["WhiteboardRecordId"]));
    }
  }


  virtual ~CreateClassResponseBodyResult() = default;
};
class CreateClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateClassResponseBodyResult> result{};

  CreateClassResponseBody() {}

  explicit CreateClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateClassResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateClassResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateClassResponseBody() = default;
};
class CreateClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateClassResponseBody> body{};

  CreateClassResponse() {}

  explicit CreateClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClassResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClassResponse() = default;
};
class CreateLiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> appId{};
  shared_ptr<long> codeLevel{};
  shared_ptr<string> introduction{};
  shared_ptr<string> liveId{};
  shared_ptr<string> roomId{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  CreateLiveRequest() {}

  explicit CreateLiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (codeLevel) {
      res["CodeLevel"] = boost::any(*codeLevel);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CodeLevel") != m.end() && !m["CodeLevel"].empty()) {
      codeLevel = make_shared<long>(boost::any_cast<long>(m["CodeLevel"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateLiveRequest() = default;
};
class CreateLiveResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> liveId{};

  CreateLiveResponseBodyResult() {}

  explicit CreateLiveResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
  }


  virtual ~CreateLiveResponseBodyResult() = default;
};
class CreateLiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateLiveResponseBodyResult> result{};

  CreateLiveResponseBody() {}

  explicit CreateLiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateLiveResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateLiveResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateLiveResponseBody() = default;
};
class CreateLiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLiveResponseBody> body{};

  CreateLiveResponse() {}

  explicit CreateLiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLiveResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLiveResponse() = default;
};
class CreateLiveRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<bool> enableLinkMic{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> notice{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  CreateLiveRoomRequest() {}

  explicit CreateLiveRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (enableLinkMic) {
      res["EnableLinkMic"] = boost::any(*enableLinkMic);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("EnableLinkMic") != m.end() && !m["EnableLinkMic"].empty()) {
      enableLinkMic = make_shared<bool>(boost::any_cast<bool>(m["EnableLinkMic"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateLiveRoomRequest() = default;
};
class CreateLiveRoomShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<bool> enableLinkMic{};
  shared_ptr<string> extensionShrink{};
  shared_ptr<string> notice{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  CreateLiveRoomShrinkRequest() {}

  explicit CreateLiveRoomShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (enableLinkMic) {
      res["EnableLinkMic"] = boost::any(*enableLinkMic);
    }
    if (extensionShrink) {
      res["Extension"] = boost::any(*extensionShrink);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("EnableLinkMic") != m.end() && !m["EnableLinkMic"].empty()) {
      enableLinkMic = make_shared<bool>(boost::any_cast<bool>(m["EnableLinkMic"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extensionShrink = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateLiveRoomShrinkRequest() = default;
};
class CreateLiveRoomResponseBodyResultArtcInfo : public Darabonba::Model {
public:
  shared_ptr<string> artcH5Url{};
  shared_ptr<string> artcUrl{};

  CreateLiveRoomResponseBodyResultArtcInfo() {}

  explicit CreateLiveRoomResponseBodyResultArtcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artcH5Url) {
      res["ArtcH5Url"] = boost::any(*artcH5Url);
    }
    if (artcUrl) {
      res["ArtcUrl"] = boost::any(*artcUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtcH5Url") != m.end() && !m["ArtcH5Url"].empty()) {
      artcH5Url = make_shared<string>(boost::any_cast<string>(m["ArtcH5Url"]));
    }
    if (m.find("ArtcUrl") != m.end() && !m["ArtcUrl"].empty()) {
      artcUrl = make_shared<string>(boost::any_cast<string>(m["ArtcUrl"]));
    }
  }


  virtual ~CreateLiveRoomResponseBodyResultArtcInfo() = default;
};
class CreateLiveRoomResponseBodyResultPluginInstanceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> pluginId{};
  shared_ptr<string> pluginType{};

  CreateLiveRoomResponseBodyResultPluginInstanceInfoList() {}

  explicit CreateLiveRoomResponseBodyResultPluginInstanceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (pluginId) {
      res["PluginId"] = boost::any(*pluginId);
    }
    if (pluginType) {
      res["PluginType"] = boost::any(*pluginType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PluginId") != m.end() && !m["PluginId"].empty()) {
      pluginId = make_shared<string>(boost::any_cast<string>(m["PluginId"]));
    }
    if (m.find("PluginType") != m.end() && !m["PluginType"].empty()) {
      pluginType = make_shared<string>(boost::any_cast<string>(m["PluginType"]));
    }
  }


  virtual ~CreateLiveRoomResponseBodyResultPluginInstanceInfoList() = default;
};
class CreateLiveRoomResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<CreateLiveRoomResponseBodyResultArtcInfo> artcInfo{};
  shared_ptr<string> chatId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> hlsUrl{};
  shared_ptr<string> liveId{};
  shared_ptr<string> liveUrl{};
  shared_ptr<string> notice{};
  shared_ptr<string> playbackUrl{};
  shared_ptr<vector<CreateLiveRoomResponseBodyResultPluginInstanceInfoList>> pluginInstanceInfoList{};
  shared_ptr<string> pushUrl{};
  shared_ptr<string> roomId{};
  shared_ptr<string> title{};

  CreateLiveRoomResponseBodyResult() {}

  explicit CreateLiveRoomResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (artcInfo) {
      res["ArtcInfo"] = artcInfo ? boost::any(artcInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (chatId) {
      res["ChatId"] = boost::any(*chatId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (hlsUrl) {
      res["HlsUrl"] = boost::any(*hlsUrl);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (liveUrl) {
      res["LiveUrl"] = boost::any(*liveUrl);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (playbackUrl) {
      res["PlaybackUrl"] = boost::any(*playbackUrl);
    }
    if (pluginInstanceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*pluginInstanceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PluginInstanceInfoList"] = boost::any(temp1);
    }
    if (pushUrl) {
      res["PushUrl"] = boost::any(*pushUrl);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ArtcInfo") != m.end() && !m["ArtcInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArtcInfo"].type()) {
        CreateLiveRoomResponseBodyResultArtcInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArtcInfo"]));
        artcInfo = make_shared<CreateLiveRoomResponseBodyResultArtcInfo>(model1);
      }
    }
    if (m.find("ChatId") != m.end() && !m["ChatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["ChatId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("HlsUrl") != m.end() && !m["HlsUrl"].empty()) {
      hlsUrl = make_shared<string>(boost::any_cast<string>(m["HlsUrl"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("LiveUrl") != m.end() && !m["LiveUrl"].empty()) {
      liveUrl = make_shared<string>(boost::any_cast<string>(m["LiveUrl"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("PlaybackUrl") != m.end() && !m["PlaybackUrl"].empty()) {
      playbackUrl = make_shared<string>(boost::any_cast<string>(m["PlaybackUrl"]));
    }
    if (m.find("PluginInstanceInfoList") != m.end() && !m["PluginInstanceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["PluginInstanceInfoList"].type()) {
        vector<CreateLiveRoomResponseBodyResultPluginInstanceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PluginInstanceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateLiveRoomResponseBodyResultPluginInstanceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pluginInstanceInfoList = make_shared<vector<CreateLiveRoomResponseBodyResultPluginInstanceInfoList>>(expect1);
      }
    }
    if (m.find("PushUrl") != m.end() && !m["PushUrl"].empty()) {
      pushUrl = make_shared<string>(boost::any_cast<string>(m["PushUrl"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateLiveRoomResponseBodyResult() = default;
};
class CreateLiveRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateLiveRoomResponseBodyResult> result{};

  CreateLiveRoomResponseBody() {}

  explicit CreateLiveRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateLiveRoomResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateLiveRoomResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateLiveRoomResponseBody() = default;
};
class CreateLiveRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLiveRoomResponseBody> body{};

  CreateLiveRoomResponse() {}

  explicit CreateLiveRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLiveRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLiveRoomResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLiveRoomResponse() = default;
};
class CreateRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> notice{};
  shared_ptr<string> roomId{};
  shared_ptr<string> roomOwnerId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> title{};

  CreateRoomRequest() {}

  explicit CreateRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomOwnerId) {
      res["RoomOwnerId"] = boost::any(*roomOwnerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomOwnerId") != m.end() && !m["RoomOwnerId"].empty()) {
      roomOwnerId = make_shared<string>(boost::any_cast<string>(m["RoomOwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateRoomRequest() = default;
};
class CreateRoomShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> extensionShrink{};
  shared_ptr<string> notice{};
  shared_ptr<string> roomId{};
  shared_ptr<string> roomOwnerId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> title{};

  CreateRoomShrinkRequest() {}

  explicit CreateRoomShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (extensionShrink) {
      res["Extension"] = boost::any(*extensionShrink);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomOwnerId) {
      res["RoomOwnerId"] = boost::any(*roomOwnerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extensionShrink = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomOwnerId") != m.end() && !m["RoomOwnerId"].empty()) {
      roomOwnerId = make_shared<string>(boost::any_cast<string>(m["RoomOwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateRoomShrinkRequest() = default;
};
class CreateRoomResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> roomId{};

  CreateRoomResponseBodyResult() {}

  explicit CreateRoomResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~CreateRoomResponseBodyResult() = default;
};
class CreateRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateRoomResponseBodyResult> result{};

  CreateRoomResponseBody() {}

  explicit CreateRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateRoomResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateRoomResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateRoomResponseBody() = default;
};
class CreateRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRoomResponseBody> body{};

  CreateRoomResponse() {}

  explicit CreateRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRoomResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRoomResponse() = default;
};
class CreateSensitiveWordRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<string>> wordList{};

  CreateSensitiveWordRequest() {}

  explicit CreateSensitiveWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (wordList) {
      res["WordList"] = boost::any(*wordList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("WordList") != m.end() && !m["WordList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WordList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WordList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      wordList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateSensitiveWordRequest() = default;
};
class CreateSensitiveWordShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> wordListShrink{};

  CreateSensitiveWordShrinkRequest() {}

  explicit CreateSensitiveWordShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (wordListShrink) {
      res["WordList"] = boost::any(*wordListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("WordList") != m.end() && !m["WordList"].empty()) {
      wordListShrink = make_shared<string>(boost::any_cast<string>(m["WordList"]));
    }
  }


  virtual ~CreateSensitiveWordShrinkRequest() = default;
};
class CreateSensitiveWordResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> success{};

  CreateSensitiveWordResponseBodyResult() {}

  explicit CreateSensitiveWordResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateSensitiveWordResponseBodyResult() = default;
};
class CreateSensitiveWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateSensitiveWordResponseBodyResult> result{};

  CreateSensitiveWordResponseBody() {}

  explicit CreateSensitiveWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateSensitiveWordResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateSensitiveWordResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateSensitiveWordResponseBody() = default;
};
class CreateSensitiveWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSensitiveWordResponseBody> body{};

  CreateSensitiveWordResponse() {}

  explicit CreateSensitiveWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSensitiveWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSensitiveWordResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSensitiveWordResponse() = default;
};
class DeleteClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> classId{};
  shared_ptr<string> userId{};

  DeleteClassRequest() {}

  explicit DeleteClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteClassRequest() = default;
};
class DeleteClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteClassResponseBody() {}

  explicit DeleteClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteClassResponseBody() = default;
};
class DeleteClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteClassResponseBody> body{};

  DeleteClassResponse() {}

  explicit DeleteClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteClassResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteClassResponse() = default;
};
class DeleteCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<string>> commentIdList{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  DeleteCommentRequest() {}

  explicit DeleteCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commentIdList) {
      res["CommentIdList"] = boost::any(*commentIdList);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommentIdList") != m.end() && !m["CommentIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CommentIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CommentIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      commentIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteCommentRequest() = default;
};
class DeleteCommentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> deleteResult{};

  DeleteCommentResponseBodyResult() {}

  explicit DeleteCommentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleteResult) {
      res["DeleteResult"] = boost::any(*deleteResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeleteResult") != m.end() && !m["DeleteResult"].empty()) {
      deleteResult = make_shared<bool>(boost::any_cast<bool>(m["DeleteResult"]));
    }
  }


  virtual ~DeleteCommentResponseBodyResult() = default;
};
class DeleteCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DeleteCommentResponseBodyResult> result{};

  DeleteCommentResponseBody() {}

  explicit DeleteCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeleteCommentResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteCommentResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteCommentResponseBody() = default;
};
class DeleteCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCommentResponseBody> body{};

  DeleteCommentResponse() {}

  explicit DeleteCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCommentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCommentResponse() = default;
};
class DeleteConferenceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> conferenceId{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  DeleteConferenceRequest() {}

  explicit DeleteConferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteConferenceRequest() = default;
};
class DeleteConferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteConferenceResponseBody() {}

  explicit DeleteConferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteConferenceResponseBody() = default;
};
class DeleteConferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteConferenceResponseBody> body{};

  DeleteConferenceResponse() {}

  explicit DeleteConferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteConferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConferenceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConferenceResponse() = default;
};
class DeleteLiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> liveId{};

  DeleteLiveRequest() {}

  explicit DeleteLiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
  }


  virtual ~DeleteLiveRequest() = default;
};
class DeleteLiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLiveResponseBody() {}

  explicit DeleteLiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLiveResponseBody() = default;
};
class DeleteLiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLiveResponseBody> body{};

  DeleteLiveResponse() {}

  explicit DeleteLiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLiveResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLiveResponse() = default;
};
class DeleteLiveRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};
  shared_ptr<string> userId{};

  DeleteLiveRoomRequest() {}

  explicit DeleteLiveRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteLiveRoomRequest() = default;
};
class DeleteLiveRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLiveRoomResponseBody() {}

  explicit DeleteLiveRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLiveRoomResponseBody() = default;
};
class DeleteLiveRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLiveRoomResponseBody> body{};

  DeleteLiveRoomResponse() {}

  explicit DeleteLiveRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLiveRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLiveRoomResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLiveRoomResponse() = default;
};
class DeleteRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> roomId{};

  DeleteRoomRequest() {}

  explicit DeleteRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~DeleteRoomRequest() = default;
};
class DeleteRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRoomResponseBody() {}

  explicit DeleteRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteRoomResponseBody() = default;
};
class DeleteRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRoomResponseBody> body{};

  DeleteRoomResponse() {}

  explicit DeleteRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRoomResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRoomResponse() = default;
};
class DeleteSensitiveWordRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<string>> wordList{};

  DeleteSensitiveWordRequest() {}

  explicit DeleteSensitiveWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (wordList) {
      res["WordList"] = boost::any(*wordList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("WordList") != m.end() && !m["WordList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WordList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WordList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      wordList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteSensitiveWordRequest() = default;
};
class DeleteSensitiveWordShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> wordListShrink{};

  DeleteSensitiveWordShrinkRequest() {}

  explicit DeleteSensitiveWordShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (wordListShrink) {
      res["WordList"] = boost::any(*wordListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("WordList") != m.end() && !m["WordList"].empty()) {
      wordListShrink = make_shared<string>(boost::any_cast<string>(m["WordList"]));
    }
  }


  virtual ~DeleteSensitiveWordShrinkRequest() = default;
};
class DeleteSensitiveWordResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> success{};

  DeleteSensitiveWordResponseBodyResult() {}

  explicit DeleteSensitiveWordResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteSensitiveWordResponseBodyResult() = default;
};
class DeleteSensitiveWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DeleteSensitiveWordResponseBodyResult> result{};

  DeleteSensitiveWordResponseBody() {}

  explicit DeleteSensitiveWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeleteSensitiveWordResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteSensitiveWordResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteSensitiveWordResponseBody() = default;
};
class DeleteSensitiveWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSensitiveWordResponseBody> body{};

  DeleteSensitiveWordResponse() {}

  explicit DeleteSensitiveWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSensitiveWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSensitiveWordResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSensitiveWordResponse() = default;
};
class DescribeMeterImpPlayBackTimeByLiveIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<string> liveId{};
  shared_ptr<long> startTs{};

  DescribeMeterImpPlayBackTimeByLiveIdRequest() {}

  explicit DescribeMeterImpPlayBackTimeByLiveIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
  }


  virtual ~DescribeMeterImpPlayBackTimeByLiveIdRequest() = default;
};
class DescribeMeterImpPlayBackTimeByLiveIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> watchTime{};

  DescribeMeterImpPlayBackTimeByLiveIdResponseBodyData() {}

  explicit DescribeMeterImpPlayBackTimeByLiveIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (watchTime) {
      res["WatchTime"] = boost::any(*watchTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WatchTime") != m.end() && !m["WatchTime"].empty()) {
      watchTime = make_shared<long>(boost::any_cast<long>(m["WatchTime"]));
    }
  }


  virtual ~DescribeMeterImpPlayBackTimeByLiveIdResponseBodyData() = default;
};
class DescribeMeterImpPlayBackTimeByLiveIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMeterImpPlayBackTimeByLiveIdResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeMeterImpPlayBackTimeByLiveIdResponseBody() {}

  explicit DescribeMeterImpPlayBackTimeByLiveIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeMeterImpPlayBackTimeByLiveIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMeterImpPlayBackTimeByLiveIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeMeterImpPlayBackTimeByLiveIdResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMeterImpPlayBackTimeByLiveIdResponseBody() = default;
};
class DescribeMeterImpPlayBackTimeByLiveIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMeterImpPlayBackTimeByLiveIdResponseBody> body{};

  DescribeMeterImpPlayBackTimeByLiveIdResponse() {}

  explicit DescribeMeterImpPlayBackTimeByLiveIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMeterImpPlayBackTimeByLiveIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMeterImpPlayBackTimeByLiveIdResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMeterImpPlayBackTimeByLiveIdResponse() = default;
};
class DescribeMeterImpWatchLiveTimeByLiveIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};

  DescribeMeterImpWatchLiveTimeByLiveIdRequest() {}

  explicit DescribeMeterImpWatchLiveTimeByLiveIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
  }


  virtual ~DescribeMeterImpWatchLiveTimeByLiveIdRequest() = default;
};
class DescribeMeterImpWatchLiveTimeByLiveIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> watchTimeInLatency{};
  shared_ptr<long> watchTimeInLowLatency{};

  DescribeMeterImpWatchLiveTimeByLiveIdResponseBodyData() {}

  explicit DescribeMeterImpWatchLiveTimeByLiveIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (watchTimeInLatency) {
      res["WatchTimeInLatency"] = boost::any(*watchTimeInLatency);
    }
    if (watchTimeInLowLatency) {
      res["WatchTimeInLowLatency"] = boost::any(*watchTimeInLowLatency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WatchTimeInLatency") != m.end() && !m["WatchTimeInLatency"].empty()) {
      watchTimeInLatency = make_shared<long>(boost::any_cast<long>(m["WatchTimeInLatency"]));
    }
    if (m.find("WatchTimeInLowLatency") != m.end() && !m["WatchTimeInLowLatency"].empty()) {
      watchTimeInLowLatency = make_shared<long>(boost::any_cast<long>(m["WatchTimeInLowLatency"]));
    }
  }


  virtual ~DescribeMeterImpWatchLiveTimeByLiveIdResponseBodyData() = default;
};
class DescribeMeterImpWatchLiveTimeByLiveIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMeterImpWatchLiveTimeByLiveIdResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeMeterImpWatchLiveTimeByLiveIdResponseBody() {}

  explicit DescribeMeterImpWatchLiveTimeByLiveIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeMeterImpWatchLiveTimeByLiveIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMeterImpWatchLiveTimeByLiveIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeMeterImpWatchLiveTimeByLiveIdResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMeterImpWatchLiveTimeByLiveIdResponseBody() = default;
};
class DescribeMeterImpWatchLiveTimeByLiveIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMeterImpWatchLiveTimeByLiveIdResponseBody> body{};

  DescribeMeterImpWatchLiveTimeByLiveIdResponse() {}

  explicit DescribeMeterImpWatchLiveTimeByLiveIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMeterImpWatchLiveTimeByLiveIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMeterImpWatchLiveTimeByLiveIdResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMeterImpWatchLiveTimeByLiveIdResponse() = default;
};
class GetAuthTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appKey{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> userId{};

  GetAuthTokenRequest() {}

  explicit GetAuthTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetAuthTokenRequest() = default;
};
class GetAuthTokenResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<long> accessTokenExpiredTime{};
  shared_ptr<string> refreshToken{};

  GetAuthTokenResponseBodyResult() {}

  explicit GetAuthTokenResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (accessTokenExpiredTime) {
      res["AccessTokenExpiredTime"] = boost::any(*accessTokenExpiredTime);
    }
    if (refreshToken) {
      res["RefreshToken"] = boost::any(*refreshToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AccessTokenExpiredTime") != m.end() && !m["AccessTokenExpiredTime"].empty()) {
      accessTokenExpiredTime = make_shared<long>(boost::any_cast<long>(m["AccessTokenExpiredTime"]));
    }
    if (m.find("RefreshToken") != m.end() && !m["RefreshToken"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["RefreshToken"]));
    }
  }


  virtual ~GetAuthTokenResponseBodyResult() = default;
};
class GetAuthTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAuthTokenResponseBodyResult> result{};

  GetAuthTokenResponseBody() {}

  explicit GetAuthTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetAuthTokenResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetAuthTokenResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetAuthTokenResponseBody() = default;
};
class GetAuthTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAuthTokenResponseBody> body{};

  GetAuthTokenResponse() {}

  explicit GetAuthTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAuthTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAuthTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetAuthTokenResponse() = default;
};
class GetClassDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> classId{};
  shared_ptr<string> userId{};

  GetClassDetailRequest() {}

  explicit GetClassDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetClassDetailRequest() = default;
};
class GetClassDetailResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> classId{};
  shared_ptr<string> confId{};
  shared_ptr<string> createNickname{};
  shared_ptr<string> createUserId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> liveId{};
  shared_ptr<string> roomId{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};
  shared_ptr<string> whiteboardId{};
  shared_ptr<string> whiteboardRecordId{};

  GetClassDetailResponseBodyResult() {}

  explicit GetClassDetailResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (confId) {
      res["ConfId"] = boost::any(*confId);
    }
    if (createNickname) {
      res["CreateNickname"] = boost::any(*createNickname);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (whiteboardId) {
      res["WhiteboardId"] = boost::any(*whiteboardId);
    }
    if (whiteboardRecordId) {
      res["WhiteboardRecordId"] = boost::any(*whiteboardRecordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("ConfId") != m.end() && !m["ConfId"].empty()) {
      confId = make_shared<string>(boost::any_cast<string>(m["ConfId"]));
    }
    if (m.find("CreateNickname") != m.end() && !m["CreateNickname"].empty()) {
      createNickname = make_shared<string>(boost::any_cast<string>(m["CreateNickname"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("WhiteboardId") != m.end() && !m["WhiteboardId"].empty()) {
      whiteboardId = make_shared<string>(boost::any_cast<string>(m["WhiteboardId"]));
    }
    if (m.find("WhiteboardRecordId") != m.end() && !m["WhiteboardRecordId"].empty()) {
      whiteboardRecordId = make_shared<string>(boost::any_cast<string>(m["WhiteboardRecordId"]));
    }
  }


  virtual ~GetClassDetailResponseBodyResult() = default;
};
class GetClassDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetClassDetailResponseBodyResult> result{};

  GetClassDetailResponseBody() {}

  explicit GetClassDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetClassDetailResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetClassDetailResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetClassDetailResponseBody() = default;
};
class GetClassDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetClassDetailResponseBody> body{};

  GetClassDetailResponse() {}

  explicit GetClassDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetClassDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetClassDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetClassDetailResponse() = default;
};
class GetClassRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> classId{};
  shared_ptr<string> userId{};

  GetClassRecordRequest() {}

  explicit GetClassRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetClassRecordRequest() = default;
};
class GetClassRecordResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<map<string, vector<string>>> playbackUrlMap{};

  GetClassRecordResponseBodyResult() {}

  explicit GetClassRecordResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (playbackUrlMap) {
      res["PlaybackUrlMap"] = boost::any(*playbackUrlMap);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlaybackUrlMap") != m.end() && !m["PlaybackUrlMap"].empty()) {
      map<string, vector<string>> map1 = boost::any_cast<map<string, vector<string>>>(m["PlaybackUrlMap"]);
      map<string, vector<string>> toMap1;
      for (auto item:map1) {
        vector<string> toVec2;
        if (typeid(vector<boost::any>) == item.second.type()) {
          vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item.second);
          for (auto item:vec2) {
             toVec2.push_back(boost::any_cast<string>(item));
          }
        }
         toMap1[item.first] = toVec2;
      }
      playbackUrlMap = make_shared<map<string, vector<string>>>(toMap1);
    }
  }


  virtual ~GetClassRecordResponseBodyResult() = default;
};
class GetClassRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetClassRecordResponseBodyResult> result{};

  GetClassRecordResponseBody() {}

  explicit GetClassRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetClassRecordResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetClassRecordResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetClassRecordResponseBody() = default;
};
class GetClassRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetClassRecordResponseBody> body{};

  GetClassRecordResponse() {}

  explicit GetClassRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetClassRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetClassRecordResponseBody>(model1);
      }
    }
  }


  virtual ~GetClassRecordResponse() = default;
};
class GetConferenceRequest : public Darabonba::Model {
public:
  shared_ptr<string> conferenceId{};

  GetConferenceRequest() {}

  explicit GetConferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
  }


  virtual ~GetConferenceRequest() = default;
};
class GetConferenceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> conferenceId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> playbackUrl{};
  shared_ptr<string> roomId{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  GetConferenceResponseBodyResult() {}

  explicit GetConferenceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (playbackUrl) {
      res["PlaybackUrl"] = boost::any(*playbackUrl);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("PlaybackUrl") != m.end() && !m["PlaybackUrl"].empty()) {
      playbackUrl = make_shared<string>(boost::any_cast<string>(m["PlaybackUrl"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetConferenceResponseBodyResult() = default;
};
class GetConferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetConferenceResponseBodyResult> result{};

  GetConferenceResponseBody() {}

  explicit GetConferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetConferenceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetConferenceResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetConferenceResponseBody() = default;
};
class GetConferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConferenceResponseBody> body{};

  GetConferenceResponse() {}

  explicit GetConferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConferenceResponseBody>(model1);
      }
    }
  }


  virtual ~GetConferenceResponse() = default;
};
class GetLiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> liveId{};

  GetLiveRequest() {}

  explicit GetLiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
  }


  virtual ~GetLiveRequest() = default;
};
class GetLiveResponseBodyResultArtcInfo : public Darabonba::Model {
public:
  shared_ptr<string> artcH5Url{};
  shared_ptr<string> artcUrl{};

  GetLiveResponseBodyResultArtcInfo() {}

  explicit GetLiveResponseBodyResultArtcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artcH5Url) {
      res["ArtcH5Url"] = boost::any(*artcH5Url);
    }
    if (artcUrl) {
      res["ArtcUrl"] = boost::any(*artcUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtcH5Url") != m.end() && !m["ArtcH5Url"].empty()) {
      artcH5Url = make_shared<string>(boost::any_cast<string>(m["ArtcH5Url"]));
    }
    if (m.find("ArtcUrl") != m.end() && !m["ArtcUrl"].empty()) {
      artcUrl = make_shared<string>(boost::any_cast<string>(m["ArtcUrl"]));
    }
  }


  virtual ~GetLiveResponseBodyResultArtcInfo() = default;
};
class GetLiveResponseBodyResultPlayUrlInfoList : public Darabonba::Model {
public:
  shared_ptr<long> codeLevel{};
  shared_ptr<string> flvUrl{};
  shared_ptr<string> hlsUrl{};
  shared_ptr<string> rtmpUrl{};

  GetLiveResponseBodyResultPlayUrlInfoList() {}

  explicit GetLiveResponseBodyResultPlayUrlInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeLevel) {
      res["CodeLevel"] = boost::any(*codeLevel);
    }
    if (flvUrl) {
      res["FlvUrl"] = boost::any(*flvUrl);
    }
    if (hlsUrl) {
      res["HlsUrl"] = boost::any(*hlsUrl);
    }
    if (rtmpUrl) {
      res["RtmpUrl"] = boost::any(*rtmpUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeLevel") != m.end() && !m["CodeLevel"].empty()) {
      codeLevel = make_shared<long>(boost::any_cast<long>(m["CodeLevel"]));
    }
    if (m.find("FlvUrl") != m.end() && !m["FlvUrl"].empty()) {
      flvUrl = make_shared<string>(boost::any_cast<string>(m["FlvUrl"]));
    }
    if (m.find("HlsUrl") != m.end() && !m["HlsUrl"].empty()) {
      hlsUrl = make_shared<string>(boost::any_cast<string>(m["HlsUrl"]));
    }
    if (m.find("RtmpUrl") != m.end() && !m["RtmpUrl"].empty()) {
      rtmpUrl = make_shared<string>(boost::any_cast<string>(m["RtmpUrl"]));
    }
  }


  virtual ~GetLiveResponseBodyResultPlayUrlInfoList() = default;
};
class GetLiveResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> appId{};
  shared_ptr<GetLiveResponseBodyResultArtcInfo> artcInfo{};
  shared_ptr<long> codeLevel{};
  shared_ptr<string> coverUrl{};
  shared_ptr<long> createTime{};
  shared_ptr<long> duration{};
  shared_ptr<long> endTime{};
  shared_ptr<string> hlsUrl{};
  shared_ptr<string> introduction{};
  shared_ptr<string> liveId{};
  shared_ptr<string> liveUrl{};
  shared_ptr<vector<GetLiveResponseBodyResultPlayUrlInfoList>> playUrlInfoList{};
  shared_ptr<string> playbackUrl{};
  shared_ptr<string> pushUrl{};
  shared_ptr<string> roomId{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> userDefineField{};
  shared_ptr<string> userId{};

  GetLiveResponseBodyResult() {}

  explicit GetLiveResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (artcInfo) {
      res["ArtcInfo"] = artcInfo ? boost::any(artcInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (codeLevel) {
      res["CodeLevel"] = boost::any(*codeLevel);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (hlsUrl) {
      res["HlsUrl"] = boost::any(*hlsUrl);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (liveUrl) {
      res["LiveUrl"] = boost::any(*liveUrl);
    }
    if (playUrlInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*playUrlInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PlayUrlInfoList"] = boost::any(temp1);
    }
    if (playbackUrl) {
      res["PlaybackUrl"] = boost::any(*playbackUrl);
    }
    if (pushUrl) {
      res["PushUrl"] = boost::any(*pushUrl);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userDefineField) {
      res["UserDefineField"] = boost::any(*userDefineField);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ArtcInfo") != m.end() && !m["ArtcInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArtcInfo"].type()) {
        GetLiveResponseBodyResultArtcInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArtcInfo"]));
        artcInfo = make_shared<GetLiveResponseBodyResultArtcInfo>(model1);
      }
    }
    if (m.find("CodeLevel") != m.end() && !m["CodeLevel"].empty()) {
      codeLevel = make_shared<long>(boost::any_cast<long>(m["CodeLevel"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("HlsUrl") != m.end() && !m["HlsUrl"].empty()) {
      hlsUrl = make_shared<string>(boost::any_cast<string>(m["HlsUrl"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("LiveUrl") != m.end() && !m["LiveUrl"].empty()) {
      liveUrl = make_shared<string>(boost::any_cast<string>(m["LiveUrl"]));
    }
    if (m.find("PlayUrlInfoList") != m.end() && !m["PlayUrlInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["PlayUrlInfoList"].type()) {
        vector<GetLiveResponseBodyResultPlayUrlInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PlayUrlInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLiveResponseBodyResultPlayUrlInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        playUrlInfoList = make_shared<vector<GetLiveResponseBodyResultPlayUrlInfoList>>(expect1);
      }
    }
    if (m.find("PlaybackUrl") != m.end() && !m["PlaybackUrl"].empty()) {
      playbackUrl = make_shared<string>(boost::any_cast<string>(m["PlaybackUrl"]));
    }
    if (m.find("PushUrl") != m.end() && !m["PushUrl"].empty()) {
      pushUrl = make_shared<string>(boost::any_cast<string>(m["PushUrl"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserDefineField") != m.end() && !m["UserDefineField"].empty()) {
      userDefineField = make_shared<string>(boost::any_cast<string>(m["UserDefineField"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetLiveResponseBodyResult() = default;
};
class GetLiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetLiveResponseBodyResult> result{};

  GetLiveResponseBody() {}

  explicit GetLiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetLiveResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetLiveResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetLiveResponseBody() = default;
};
class GetLiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLiveResponseBody> body{};

  GetLiveResponse() {}

  explicit GetLiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLiveResponseBody>(model1);
      }
    }
  }


  virtual ~GetLiveResponse() = default;
};
class GetLiveRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};
  shared_ptr<string> userId{};

  GetLiveRecordRequest() {}

  explicit GetLiveRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetLiveRecordRequest() = default;
};
class GetLiveRecordResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<map<string, vector<string>>> playbackUrlMap{};

  GetLiveRecordResponseBodyResult() {}

  explicit GetLiveRecordResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (playbackUrlMap) {
      res["PlaybackUrlMap"] = boost::any(*playbackUrlMap);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlaybackUrlMap") != m.end() && !m["PlaybackUrlMap"].empty()) {
      map<string, vector<string>> map1 = boost::any_cast<map<string, vector<string>>>(m["PlaybackUrlMap"]);
      map<string, vector<string>> toMap1;
      for (auto item:map1) {
        vector<string> toVec2;
        if (typeid(vector<boost::any>) == item.second.type()) {
          vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item.second);
          for (auto item:vec2) {
             toVec2.push_back(boost::any_cast<string>(item));
          }
        }
         toMap1[item.first] = toVec2;
      }
      playbackUrlMap = make_shared<map<string, vector<string>>>(toMap1);
    }
  }


  virtual ~GetLiveRecordResponseBodyResult() = default;
};
class GetLiveRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetLiveRecordResponseBodyResult> result{};

  GetLiveRecordResponseBody() {}

  explicit GetLiveRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetLiveRecordResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetLiveRecordResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetLiveRecordResponseBody() = default;
};
class GetLiveRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLiveRecordResponseBody> body{};

  GetLiveRecordResponse() {}

  explicit GetLiveRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLiveRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLiveRecordResponseBody>(model1);
      }
    }
  }


  virtual ~GetLiveRecordResponse() = default;
};
class GetLiveRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};

  GetLiveRoomRequest() {}

  explicit GetLiveRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
  }


  virtual ~GetLiveRoomRequest() = default;
};
class GetLiveRoomResponseBodyResultArtcInfo : public Darabonba::Model {
public:
  shared_ptr<string> artcH5Url{};
  shared_ptr<string> artcUrl{};

  GetLiveRoomResponseBodyResultArtcInfo() {}

  explicit GetLiveRoomResponseBodyResultArtcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artcH5Url) {
      res["ArtcH5Url"] = boost::any(*artcH5Url);
    }
    if (artcUrl) {
      res["ArtcUrl"] = boost::any(*artcUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtcH5Url") != m.end() && !m["ArtcH5Url"].empty()) {
      artcH5Url = make_shared<string>(boost::any_cast<string>(m["ArtcH5Url"]));
    }
    if (m.find("ArtcUrl") != m.end() && !m["ArtcUrl"].empty()) {
      artcUrl = make_shared<string>(boost::any_cast<string>(m["ArtcUrl"]));
    }
  }


  virtual ~GetLiveRoomResponseBodyResultArtcInfo() = default;
};
class GetLiveRoomResponseBodyResultPluginInstanceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> pluginId{};
  shared_ptr<string> pluginType{};

  GetLiveRoomResponseBodyResultPluginInstanceInfoList() {}

  explicit GetLiveRoomResponseBodyResultPluginInstanceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (pluginId) {
      res["PluginId"] = boost::any(*pluginId);
    }
    if (pluginType) {
      res["PluginType"] = boost::any(*pluginType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PluginId") != m.end() && !m["PluginId"].empty()) {
      pluginId = make_shared<string>(boost::any_cast<string>(m["PluginId"]));
    }
    if (m.find("PluginType") != m.end() && !m["PluginType"].empty()) {
      pluginType = make_shared<string>(boost::any_cast<string>(m["PluginType"]));
    }
  }


  virtual ~GetLiveRoomResponseBodyResultPluginInstanceInfoList() = default;
};
class GetLiveRoomResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<GetLiveRoomResponseBodyResultArtcInfo> artcInfo{};
  shared_ptr<string> chatId{};
  shared_ptr<string> confId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<long> createTime{};
  shared_ptr<bool> enableLinkMic{};
  shared_ptr<long> endTime{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> hlsUrl{};
  shared_ptr<string> hlsUrlHttps{};
  shared_ptr<string> liveId{};
  shared_ptr<string> liveUrl{};
  shared_ptr<string> liveUrlHttps{};
  shared_ptr<string> notice{};
  shared_ptr<long> onlineCount{};
  shared_ptr<string> playbackUrl{};
  shared_ptr<string> playbackUrlHttps{};
  shared_ptr<vector<GetLiveRoomResponseBodyResultPluginInstanceInfoList>> pluginInstanceInfoList{};
  shared_ptr<string> pushUrl{};
  shared_ptr<long> pv{};
  shared_ptr<string> roomId{};
  shared_ptr<string> rtmpUrl{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};
  shared_ptr<long> uv{};

  GetLiveRoomResponseBodyResult() {}

  explicit GetLiveRoomResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (artcInfo) {
      res["ArtcInfo"] = artcInfo ? boost::any(artcInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (chatId) {
      res["ChatId"] = boost::any(*chatId);
    }
    if (confId) {
      res["ConfId"] = boost::any(*confId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (enableLinkMic) {
      res["EnableLinkMic"] = boost::any(*enableLinkMic);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (hlsUrl) {
      res["HlsUrl"] = boost::any(*hlsUrl);
    }
    if (hlsUrlHttps) {
      res["HlsUrlHttps"] = boost::any(*hlsUrlHttps);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (liveUrl) {
      res["LiveUrl"] = boost::any(*liveUrl);
    }
    if (liveUrlHttps) {
      res["LiveUrlHttps"] = boost::any(*liveUrlHttps);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (onlineCount) {
      res["OnlineCount"] = boost::any(*onlineCount);
    }
    if (playbackUrl) {
      res["PlaybackUrl"] = boost::any(*playbackUrl);
    }
    if (playbackUrlHttps) {
      res["PlaybackUrlHttps"] = boost::any(*playbackUrlHttps);
    }
    if (pluginInstanceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*pluginInstanceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PluginInstanceInfoList"] = boost::any(temp1);
    }
    if (pushUrl) {
      res["PushUrl"] = boost::any(*pushUrl);
    }
    if (pv) {
      res["Pv"] = boost::any(*pv);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (rtmpUrl) {
      res["RtmpUrl"] = boost::any(*rtmpUrl);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uv) {
      res["Uv"] = boost::any(*uv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ArtcInfo") != m.end() && !m["ArtcInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArtcInfo"].type()) {
        GetLiveRoomResponseBodyResultArtcInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArtcInfo"]));
        artcInfo = make_shared<GetLiveRoomResponseBodyResultArtcInfo>(model1);
      }
    }
    if (m.find("ChatId") != m.end() && !m["ChatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["ChatId"]));
    }
    if (m.find("ConfId") != m.end() && !m["ConfId"].empty()) {
      confId = make_shared<string>(boost::any_cast<string>(m["ConfId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("EnableLinkMic") != m.end() && !m["EnableLinkMic"].empty()) {
      enableLinkMic = make_shared<bool>(boost::any_cast<bool>(m["EnableLinkMic"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("HlsUrl") != m.end() && !m["HlsUrl"].empty()) {
      hlsUrl = make_shared<string>(boost::any_cast<string>(m["HlsUrl"]));
    }
    if (m.find("HlsUrlHttps") != m.end() && !m["HlsUrlHttps"].empty()) {
      hlsUrlHttps = make_shared<string>(boost::any_cast<string>(m["HlsUrlHttps"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("LiveUrl") != m.end() && !m["LiveUrl"].empty()) {
      liveUrl = make_shared<string>(boost::any_cast<string>(m["LiveUrl"]));
    }
    if (m.find("LiveUrlHttps") != m.end() && !m["LiveUrlHttps"].empty()) {
      liveUrlHttps = make_shared<string>(boost::any_cast<string>(m["LiveUrlHttps"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("OnlineCount") != m.end() && !m["OnlineCount"].empty()) {
      onlineCount = make_shared<long>(boost::any_cast<long>(m["OnlineCount"]));
    }
    if (m.find("PlaybackUrl") != m.end() && !m["PlaybackUrl"].empty()) {
      playbackUrl = make_shared<string>(boost::any_cast<string>(m["PlaybackUrl"]));
    }
    if (m.find("PlaybackUrlHttps") != m.end() && !m["PlaybackUrlHttps"].empty()) {
      playbackUrlHttps = make_shared<string>(boost::any_cast<string>(m["PlaybackUrlHttps"]));
    }
    if (m.find("PluginInstanceInfoList") != m.end() && !m["PluginInstanceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["PluginInstanceInfoList"].type()) {
        vector<GetLiveRoomResponseBodyResultPluginInstanceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PluginInstanceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLiveRoomResponseBodyResultPluginInstanceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pluginInstanceInfoList = make_shared<vector<GetLiveRoomResponseBodyResultPluginInstanceInfoList>>(expect1);
      }
    }
    if (m.find("PushUrl") != m.end() && !m["PushUrl"].empty()) {
      pushUrl = make_shared<string>(boost::any_cast<string>(m["PushUrl"]));
    }
    if (m.find("Pv") != m.end() && !m["Pv"].empty()) {
      pv = make_shared<long>(boost::any_cast<long>(m["Pv"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RtmpUrl") != m.end() && !m["RtmpUrl"].empty()) {
      rtmpUrl = make_shared<string>(boost::any_cast<string>(m["RtmpUrl"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Uv") != m.end() && !m["Uv"].empty()) {
      uv = make_shared<long>(boost::any_cast<long>(m["Uv"]));
    }
  }


  virtual ~GetLiveRoomResponseBodyResult() = default;
};
class GetLiveRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetLiveRoomResponseBodyResult> result{};

  GetLiveRoomResponseBody() {}

  explicit GetLiveRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetLiveRoomResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetLiveRoomResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetLiveRoomResponseBody() = default;
};
class GetLiveRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLiveRoomResponseBody> body{};

  GetLiveRoomResponse() {}

  explicit GetLiveRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLiveRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLiveRoomResponseBody>(model1);
      }
    }
  }


  virtual ~GetLiveRoomResponse() = default;
};
class GetLiveRoomStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};

  GetLiveRoomStatisticsRequest() {}

  explicit GetLiveRoomStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
  }


  virtual ~GetLiveRoomStatisticsRequest() = default;
};
class GetLiveRoomStatisticsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> likeCount{};
  shared_ptr<string> liveId{};
  shared_ptr<long> messageCount{};
  shared_ptr<long> onlineCount{};
  shared_ptr<long> pv{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};
  shared_ptr<long> uv{};
  shared_ptr<long> watchLiveTime{};

  GetLiveRoomStatisticsResponseBodyResult() {}

  explicit GetLiveRoomStatisticsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (likeCount) {
      res["LikeCount"] = boost::any(*likeCount);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (messageCount) {
      res["MessageCount"] = boost::any(*messageCount);
    }
    if (onlineCount) {
      res["OnlineCount"] = boost::any(*onlineCount);
    }
    if (pv) {
      res["Pv"] = boost::any(*pv);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (uv) {
      res["Uv"] = boost::any(*uv);
    }
    if (watchLiveTime) {
      res["WatchLiveTime"] = boost::any(*watchLiveTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("LikeCount") != m.end() && !m["LikeCount"].empty()) {
      likeCount = make_shared<long>(boost::any_cast<long>(m["LikeCount"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("MessageCount") != m.end() && !m["MessageCount"].empty()) {
      messageCount = make_shared<long>(boost::any_cast<long>(m["MessageCount"]));
    }
    if (m.find("OnlineCount") != m.end() && !m["OnlineCount"].empty()) {
      onlineCount = make_shared<long>(boost::any_cast<long>(m["OnlineCount"]));
    }
    if (m.find("Pv") != m.end() && !m["Pv"].empty()) {
      pv = make_shared<long>(boost::any_cast<long>(m["Pv"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Uv") != m.end() && !m["Uv"].empty()) {
      uv = make_shared<long>(boost::any_cast<long>(m["Uv"]));
    }
    if (m.find("WatchLiveTime") != m.end() && !m["WatchLiveTime"].empty()) {
      watchLiveTime = make_shared<long>(boost::any_cast<long>(m["WatchLiveTime"]));
    }
  }


  virtual ~GetLiveRoomStatisticsResponseBodyResult() = default;
};
class GetLiveRoomStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetLiveRoomStatisticsResponseBodyResult> result{};

  GetLiveRoomStatisticsResponseBody() {}

  explicit GetLiveRoomStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetLiveRoomStatisticsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetLiveRoomStatisticsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetLiveRoomStatisticsResponseBody() = default;
};
class GetLiveRoomStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLiveRoomStatisticsResponseBody> body{};

  GetLiveRoomStatisticsResponse() {}

  explicit GetLiveRoomStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLiveRoomStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLiveRoomStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetLiveRoomStatisticsResponse() = default;
};
class GetLiveRoomUserStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  GetLiveRoomUserStatisticsRequest() {}

  explicit GetLiveRoomUserStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
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
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~GetLiveRoomUserStatisticsRequest() = default;
};
class GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList : public Darabonba::Model {
public:
  shared_ptr<long> commentCount{};
  shared_ptr<long> likeCount{};
  shared_ptr<string> userId{};
  shared_ptr<long> watchLiveTime{};

  GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList() {}

  explicit GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commentCount) {
      res["CommentCount"] = boost::any(*commentCount);
    }
    if (likeCount) {
      res["LikeCount"] = boost::any(*likeCount);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (watchLiveTime) {
      res["WatchLiveTime"] = boost::any(*watchLiveTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommentCount") != m.end() && !m["CommentCount"].empty()) {
      commentCount = make_shared<long>(boost::any_cast<long>(m["CommentCount"]));
    }
    if (m.find("LikeCount") != m.end() && !m["LikeCount"].empty()) {
      likeCount = make_shared<long>(boost::any_cast<long>(m["LikeCount"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WatchLiveTime") != m.end() && !m["WatchLiveTime"].empty()) {
      watchLiveTime = make_shared<long>(boost::any_cast<long>(m["WatchLiveTime"]));
    }
  }


  virtual ~GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList() = default;
};
class GetLiveRoomUserStatisticsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> hasMore{};
  shared_ptr<string> liveId{};
  shared_ptr<long> pageTotal{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList>> userStatisticsList{};

  GetLiveRoomUserStatisticsResponseBodyResult() {}

  explicit GetLiveRoomUserStatisticsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (userStatisticsList) {
      vector<boost::any> temp1;
      for(auto item1:*userStatisticsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserStatisticsList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UserStatisticsList") != m.end() && !m["UserStatisticsList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserStatisticsList"].type()) {
        vector<GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserStatisticsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userStatisticsList = make_shared<vector<GetLiveRoomUserStatisticsResponseBodyResultUserStatisticsList>>(expect1);
      }
    }
  }


  virtual ~GetLiveRoomUserStatisticsResponseBodyResult() = default;
};
class GetLiveRoomUserStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetLiveRoomUserStatisticsResponseBodyResult> result{};

  GetLiveRoomUserStatisticsResponseBody() {}

  explicit GetLiveRoomUserStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetLiveRoomUserStatisticsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetLiveRoomUserStatisticsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetLiveRoomUserStatisticsResponseBody() = default;
};
class GetLiveRoomUserStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLiveRoomUserStatisticsResponseBody> body{};

  GetLiveRoomUserStatisticsResponse() {}

  explicit GetLiveRoomUserStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLiveRoomUserStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLiveRoomUserStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetLiveRoomUserStatisticsResponse() = default;
};
class GetRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> roomId{};

  GetRoomRequest() {}

  explicit GetRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~GetRoomRequest() = default;
};
class GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> pluginId{};
  shared_ptr<string> pluginType{};

  GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList() {}

  explicit GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (pluginId) {
      res["PluginId"] = boost::any(*pluginId);
    }
    if (pluginType) {
      res["PluginType"] = boost::any(*pluginType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PluginId") != m.end() && !m["PluginId"].empty()) {
      pluginId = make_shared<string>(boost::any_cast<string>(m["PluginId"]));
    }
    if (m.find("PluginType") != m.end() && !m["PluginType"].empty()) {
      pluginType = make_shared<string>(boost::any_cast<string>(m["PluginType"]));
    }
  }


  virtual ~GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList() = default;
};
class GetRoomResponseBodyResultRoomInfo : public Darabonba::Model {
public:
  shared_ptr<vector<string>> adminIdList{};
  shared_ptr<string> appId{};
  shared_ptr<long> createTime{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> notice{};
  shared_ptr<long> onlineCount{};
  shared_ptr<vector<GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList>> pluginInstanceInfoList{};
  shared_ptr<long> pv{};
  shared_ptr<string> roomId{};
  shared_ptr<string> roomOwnerId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> title{};
  shared_ptr<long> uv{};

  GetRoomResponseBodyResultRoomInfo() {}

  explicit GetRoomResponseBodyResultRoomInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adminIdList) {
      res["AdminIdList"] = boost::any(*adminIdList);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (onlineCount) {
      res["OnlineCount"] = boost::any(*onlineCount);
    }
    if (pluginInstanceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*pluginInstanceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PluginInstanceInfoList"] = boost::any(temp1);
    }
    if (pv) {
      res["Pv"] = boost::any(*pv);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomOwnerId) {
      res["RoomOwnerId"] = boost::any(*roomOwnerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uv) {
      res["Uv"] = boost::any(*uv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdminIdList") != m.end() && !m["AdminIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AdminIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AdminIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      adminIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("OnlineCount") != m.end() && !m["OnlineCount"].empty()) {
      onlineCount = make_shared<long>(boost::any_cast<long>(m["OnlineCount"]));
    }
    if (m.find("PluginInstanceInfoList") != m.end() && !m["PluginInstanceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["PluginInstanceInfoList"].type()) {
        vector<GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PluginInstanceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pluginInstanceInfoList = make_shared<vector<GetRoomResponseBodyResultRoomInfoPluginInstanceInfoList>>(expect1);
      }
    }
    if (m.find("Pv") != m.end() && !m["Pv"].empty()) {
      pv = make_shared<long>(boost::any_cast<long>(m["Pv"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomOwnerId") != m.end() && !m["RoomOwnerId"].empty()) {
      roomOwnerId = make_shared<string>(boost::any_cast<string>(m["RoomOwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Uv") != m.end() && !m["Uv"].empty()) {
      uv = make_shared<long>(boost::any_cast<long>(m["Uv"]));
    }
  }


  virtual ~GetRoomResponseBodyResultRoomInfo() = default;
};
class GetRoomResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<GetRoomResponseBodyResultRoomInfo> roomInfo{};

  GetRoomResponseBodyResult() {}

  explicit GetRoomResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roomInfo) {
      res["RoomInfo"] = roomInfo ? boost::any(roomInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoomInfo") != m.end() && !m["RoomInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoomInfo"].type()) {
        GetRoomResponseBodyResultRoomInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoomInfo"]));
        roomInfo = make_shared<GetRoomResponseBodyResultRoomInfo>(model1);
      }
    }
  }


  virtual ~GetRoomResponseBodyResult() = default;
};
class GetRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetRoomResponseBodyResult> result{};

  GetRoomResponseBody() {}

  explicit GetRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetRoomResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetRoomResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetRoomResponseBody() = default;
};
class GetRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRoomResponseBody> body{};

  GetRoomResponse() {}

  explicit GetRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRoomResponseBody>(model1);
      }
    }
  }


  virtual ~GetRoomResponse() = default;
};
class GetStandardRoomJumpUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appKey{};
  shared_ptr<string> bizId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> platform{};
  shared_ptr<string> userId{};
  shared_ptr<string> userNick{};

  GetStandardRoomJumpUrlRequest() {}

  explicit GetStandardRoomJumpUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userNick) {
      res["UserNick"] = boost::any(*userNick);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserNick") != m.end() && !m["UserNick"].empty()) {
      userNick = make_shared<string>(boost::any_cast<string>(m["UserNick"]));
    }
  }


  virtual ~GetStandardRoomJumpUrlRequest() = default;
};
class GetStandardRoomJumpUrlResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> standardRoomJumpUrl{};

  GetStandardRoomJumpUrlResponseBodyResult() {}

  explicit GetStandardRoomJumpUrlResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (standardRoomJumpUrl) {
      res["StandardRoomJumpUrl"] = boost::any(*standardRoomJumpUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StandardRoomJumpUrl") != m.end() && !m["StandardRoomJumpUrl"].empty()) {
      standardRoomJumpUrl = make_shared<string>(boost::any_cast<string>(m["StandardRoomJumpUrl"]));
    }
  }


  virtual ~GetStandardRoomJumpUrlResponseBodyResult() = default;
};
class GetStandardRoomJumpUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetStandardRoomJumpUrlResponseBodyResult> result{};

  GetStandardRoomJumpUrlResponseBody() {}

  explicit GetStandardRoomJumpUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetStandardRoomJumpUrlResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetStandardRoomJumpUrlResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetStandardRoomJumpUrlResponseBody() = default;
};
class GetStandardRoomJumpUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStandardRoomJumpUrlResponseBody> body{};

  GetStandardRoomJumpUrlResponse() {}

  explicit GetStandardRoomJumpUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStandardRoomJumpUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStandardRoomJumpUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetStandardRoomJumpUrlResponse() = default;
};
class KickRoomUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> blockTime{};
  shared_ptr<string> kickUser{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  KickRoomUserRequest() {}

  explicit KickRoomUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (blockTime) {
      res["BlockTime"] = boost::any(*blockTime);
    }
    if (kickUser) {
      res["KickUser"] = boost::any(*kickUser);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BlockTime") != m.end() && !m["BlockTime"].empty()) {
      blockTime = make_shared<long>(boost::any_cast<long>(m["BlockTime"]));
    }
    if (m.find("KickUser") != m.end() && !m["KickUser"].empty()) {
      kickUser = make_shared<string>(boost::any_cast<string>(m["KickUser"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~KickRoomUserRequest() = default;
};
class KickRoomUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  KickRoomUserResponseBody() {}

  explicit KickRoomUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~KickRoomUserResponseBody() = default;
};
class KickRoomUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<KickRoomUserResponseBody> body{};

  KickRoomUserResponse() {}

  explicit KickRoomUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        KickRoomUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<KickRoomUserResponseBody>(model1);
      }
    }
  }


  virtual ~KickRoomUserResponse() = default;
};
class ListClassesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};

  ListClassesRequest() {}

  explicit ListClassesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListClassesRequest() = default;
};
class ListClassesResponseBodyResultClassList : public Darabonba::Model {
public:
  shared_ptr<string> classId{};
  shared_ptr<string> confId{};
  shared_ptr<string> createNickname{};
  shared_ptr<string> createUserId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> liveId{};
  shared_ptr<string> roomId{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};
  shared_ptr<string> whiteboardId{};
  shared_ptr<string> whiteboardRecordId{};

  ListClassesResponseBodyResultClassList() {}

  explicit ListClassesResponseBodyResultClassList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (confId) {
      res["ConfId"] = boost::any(*confId);
    }
    if (createNickname) {
      res["CreateNickname"] = boost::any(*createNickname);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (whiteboardId) {
      res["WhiteboardId"] = boost::any(*whiteboardId);
    }
    if (whiteboardRecordId) {
      res["WhiteboardRecordId"] = boost::any(*whiteboardRecordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("ConfId") != m.end() && !m["ConfId"].empty()) {
      confId = make_shared<string>(boost::any_cast<string>(m["ConfId"]));
    }
    if (m.find("CreateNickname") != m.end() && !m["CreateNickname"].empty()) {
      createNickname = make_shared<string>(boost::any_cast<string>(m["CreateNickname"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("WhiteboardId") != m.end() && !m["WhiteboardId"].empty()) {
      whiteboardId = make_shared<string>(boost::any_cast<string>(m["WhiteboardId"]));
    }
    if (m.find("WhiteboardRecordId") != m.end() && !m["WhiteboardRecordId"].empty()) {
      whiteboardRecordId = make_shared<string>(boost::any_cast<string>(m["WhiteboardRecordId"]));
    }
  }


  virtual ~ListClassesResponseBodyResultClassList() = default;
};
class ListClassesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListClassesResponseBodyResultClassList>> classList{};
  shared_ptr<bool> hasMore{};
  shared_ptr<long> pageTotal{};
  shared_ptr<long> totalCount{};

  ListClassesResponseBodyResult() {}

  explicit ListClassesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classList) {
      vector<boost::any> temp1;
      for(auto item1:*classList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClassList"] = boost::any(temp1);
    }
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassList") != m.end() && !m["ClassList"].empty()) {
      if (typeid(vector<boost::any>) == m["ClassList"].type()) {
        vector<ListClassesResponseBodyResultClassList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClassList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClassesResponseBodyResultClassList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        classList = make_shared<vector<ListClassesResponseBodyResultClassList>>(expect1);
      }
    }
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListClassesResponseBodyResult() = default;
};
class ListClassesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListClassesResponseBodyResult> result{};

  ListClassesResponseBody() {}

  explicit ListClassesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListClassesResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListClassesResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListClassesResponseBody() = default;
};
class ListClassesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClassesResponseBody> body{};

  ListClassesResponse() {}

  explicit ListClassesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClassesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClassesResponseBody>(model1);
      }
    }
  }


  virtual ~ListClassesResponse() = default;
};
class ListCommentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> roomId{};
  shared_ptr<long> sortType{};
  shared_ptr<string> userId{};

  ListCommentsRequest() {}

  explicit ListCommentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (sortType) {
      res["SortType"] = boost::any(*sortType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("SortType") != m.end() && !m["SortType"].empty()) {
      sortType = make_shared<long>(boost::any_cast<long>(m["SortType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListCommentsRequest() = default;
};
class ListCommentsResponseBodyResultCommentVOList : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> commentId{};
  shared_ptr<string> content{};
  shared_ptr<long> createAt{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> roomId{};
  shared_ptr<string> senderId{};
  shared_ptr<string> senderNick{};

  ListCommentsResponseBodyResultCommentVOList() {}

  explicit ListCommentsResponseBodyResultCommentVOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commentId) {
      res["CommentId"] = boost::any(*commentId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createAt) {
      res["CreateAt"] = boost::any(*createAt);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (senderNick) {
      res["SenderNick"] = boost::any(*senderNick);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommentId") != m.end() && !m["CommentId"].empty()) {
      commentId = make_shared<string>(boost::any_cast<string>(m["CommentId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreateAt") != m.end() && !m["CreateAt"].empty()) {
      createAt = make_shared<long>(boost::any_cast<long>(m["CreateAt"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("SenderNick") != m.end() && !m["SenderNick"].empty()) {
      senderNick = make_shared<string>(boost::any_cast<string>(m["SenderNick"]));
    }
  }


  virtual ~ListCommentsResponseBodyResultCommentVOList() = default;
};
class ListCommentsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListCommentsResponseBodyResultCommentVOList>> commentVOList{};
  shared_ptr<bool> hasMore{};
  shared_ptr<long> pageTotal{};
  shared_ptr<long> totalCount{};

  ListCommentsResponseBodyResult() {}

  explicit ListCommentsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commentVOList) {
      vector<boost::any> temp1;
      for(auto item1:*commentVOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CommentVOList"] = boost::any(temp1);
    }
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommentVOList") != m.end() && !m["CommentVOList"].empty()) {
      if (typeid(vector<boost::any>) == m["CommentVOList"].type()) {
        vector<ListCommentsResponseBodyResultCommentVOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CommentVOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCommentsResponseBodyResultCommentVOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commentVOList = make_shared<vector<ListCommentsResponseBodyResultCommentVOList>>(expect1);
      }
    }
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCommentsResponseBodyResult() = default;
};
class ListCommentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListCommentsResponseBodyResult> result{};

  ListCommentsResponseBody() {}

  explicit ListCommentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListCommentsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListCommentsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListCommentsResponseBody() = default;
};
class ListCommentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCommentsResponseBody> body{};

  ListCommentsResponse() {}

  explicit ListCommentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCommentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCommentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCommentsResponse() = default;
};
class ListConferenceUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> conferenceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListConferenceUsersRequest() {}

  explicit ListConferenceUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
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
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListConferenceUsersRequest() = default;
};
class ListConferenceUsersResponseBodyResultConferenceUserList : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> userId{};

  ListConferenceUsersResponseBodyResultConferenceUserList() {}

  explicit ListConferenceUsersResponseBodyResultConferenceUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListConferenceUsersResponseBodyResultConferenceUserList() = default;
};
class ListConferenceUsersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListConferenceUsersResponseBodyResultConferenceUserList>> conferenceUserList{};
  shared_ptr<bool> hasMore{};
  shared_ptr<long> pageTotal{};
  shared_ptr<long> totalCount{};

  ListConferenceUsersResponseBodyResult() {}

  explicit ListConferenceUsersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceUserList) {
      vector<boost::any> temp1;
      for(auto item1:*conferenceUserList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConferenceUserList"] = boost::any(temp1);
    }
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConferenceUserList") != m.end() && !m["ConferenceUserList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConferenceUserList"].type()) {
        vector<ListConferenceUsersResponseBodyResultConferenceUserList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConferenceUserList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConferenceUsersResponseBodyResultConferenceUserList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conferenceUserList = make_shared<vector<ListConferenceUsersResponseBodyResultConferenceUserList>>(expect1);
      }
    }
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListConferenceUsersResponseBodyResult() = default;
};
class ListConferenceUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListConferenceUsersResponseBodyResult> result{};

  ListConferenceUsersResponseBody() {}

  explicit ListConferenceUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListConferenceUsersResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListConferenceUsersResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListConferenceUsersResponseBody() = default;
};
class ListConferenceUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConferenceUsersResponseBody> body{};

  ListConferenceUsersResponse() {}

  explicit ListConferenceUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConferenceUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConferenceUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListConferenceUsersResponse() = default;
};
class ListLiveRoomsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};

  ListLiveRoomsRequest() {}

  explicit ListLiveRoomsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListLiveRoomsRequest() = default;
};
class ListLiveRoomsResponseBodyResultLiveList : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<string> chatId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> liveId{};
  shared_ptr<string> notice{};
  shared_ptr<long> onlineCount{};
  shared_ptr<long> pv{};
  shared_ptr<string> roomId{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};
  shared_ptr<long> uv{};

  ListLiveRoomsResponseBodyResultLiveList() {}

  explicit ListLiveRoomsResponseBodyResultLiveList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (chatId) {
      res["ChatId"] = boost::any(*chatId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (onlineCount) {
      res["OnlineCount"] = boost::any(*onlineCount);
    }
    if (pv) {
      res["Pv"] = boost::any(*pv);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uv) {
      res["Uv"] = boost::any(*uv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChatId") != m.end() && !m["ChatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["ChatId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("OnlineCount") != m.end() && !m["OnlineCount"].empty()) {
      onlineCount = make_shared<long>(boost::any_cast<long>(m["OnlineCount"]));
    }
    if (m.find("Pv") != m.end() && !m["Pv"].empty()) {
      pv = make_shared<long>(boost::any_cast<long>(m["Pv"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Uv") != m.end() && !m["Uv"].empty()) {
      uv = make_shared<long>(boost::any_cast<long>(m["Uv"]));
    }
  }


  virtual ~ListLiveRoomsResponseBodyResultLiveList() = default;
};
class ListLiveRoomsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> hasMore{};
  shared_ptr<vector<ListLiveRoomsResponseBodyResultLiveList>> liveList{};
  shared_ptr<long> pageTotal{};
  shared_ptr<long> totalCount{};

  ListLiveRoomsResponseBodyResult() {}

  explicit ListLiveRoomsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (liveList) {
      vector<boost::any> temp1;
      for(auto item1:*liveList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LiveList"] = boost::any(temp1);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("LiveList") != m.end() && !m["LiveList"].empty()) {
      if (typeid(vector<boost::any>) == m["LiveList"].type()) {
        vector<ListLiveRoomsResponseBodyResultLiveList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LiveList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLiveRoomsResponseBodyResultLiveList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        liveList = make_shared<vector<ListLiveRoomsResponseBodyResultLiveList>>(expect1);
      }
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListLiveRoomsResponseBodyResult() = default;
};
class ListLiveRoomsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListLiveRoomsResponseBodyResult> result{};

  ListLiveRoomsResponseBody() {}

  explicit ListLiveRoomsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListLiveRoomsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListLiveRoomsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListLiveRoomsResponseBody() = default;
};
class ListLiveRoomsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLiveRoomsResponseBody> body{};

  ListLiveRoomsResponse() {}

  explicit ListLiveRoomsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLiveRoomsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLiveRoomsResponseBody>(model1);
      }
    }
  }


  virtual ~ListLiveRoomsResponse() = default;
};
class ListLiveRoomsByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<string>> liveIdList{};

  ListLiveRoomsByIdRequest() {}

  explicit ListLiveRoomsByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveIdList) {
      res["LiveIdList"] = boost::any(*liveIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveIdList") != m.end() && !m["LiveIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LiveIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LiveIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      liveIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListLiveRoomsByIdRequest() = default;
};
class ListLiveRoomsByIdShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveIdListShrink{};

  ListLiveRoomsByIdShrinkRequest() {}

  explicit ListLiveRoomsByIdShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveIdListShrink) {
      res["LiveIdList"] = boost::any(*liveIdListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveIdList") != m.end() && !m["LiveIdList"].empty()) {
      liveIdListShrink = make_shared<string>(boost::any_cast<string>(m["LiveIdList"]));
    }
  }


  virtual ~ListLiveRoomsByIdShrinkRequest() = default;
};
class ListLiveRoomsByIdResponseBodyResultLiveList : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<string> chatId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> liveId{};
  shared_ptr<string> notice{};
  shared_ptr<long> onlineCount{};
  shared_ptr<long> pv{};
  shared_ptr<string> roomId{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};
  shared_ptr<long> uv{};

  ListLiveRoomsByIdResponseBodyResultLiveList() {}

  explicit ListLiveRoomsByIdResponseBodyResultLiveList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (chatId) {
      res["ChatId"] = boost::any(*chatId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (onlineCount) {
      res["OnlineCount"] = boost::any(*onlineCount);
    }
    if (pv) {
      res["Pv"] = boost::any(*pv);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uv) {
      res["Uv"] = boost::any(*uv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChatId") != m.end() && !m["ChatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["ChatId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("OnlineCount") != m.end() && !m["OnlineCount"].empty()) {
      onlineCount = make_shared<long>(boost::any_cast<long>(m["OnlineCount"]));
    }
    if (m.find("Pv") != m.end() && !m["Pv"].empty()) {
      pv = make_shared<long>(boost::any_cast<long>(m["Pv"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Uv") != m.end() && !m["Uv"].empty()) {
      uv = make_shared<long>(boost::any_cast<long>(m["Uv"]));
    }
  }


  virtual ~ListLiveRoomsByIdResponseBodyResultLiveList() = default;
};
class ListLiveRoomsByIdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListLiveRoomsByIdResponseBodyResultLiveList>> liveList{};

  ListLiveRoomsByIdResponseBodyResult() {}

  explicit ListLiveRoomsByIdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveList) {
      vector<boost::any> temp1;
      for(auto item1:*liveList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LiveList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveList") != m.end() && !m["LiveList"].empty()) {
      if (typeid(vector<boost::any>) == m["LiveList"].type()) {
        vector<ListLiveRoomsByIdResponseBodyResultLiveList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LiveList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLiveRoomsByIdResponseBodyResultLiveList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        liveList = make_shared<vector<ListLiveRoomsByIdResponseBodyResultLiveList>>(expect1);
      }
    }
  }


  virtual ~ListLiveRoomsByIdResponseBodyResult() = default;
};
class ListLiveRoomsByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListLiveRoomsByIdResponseBodyResult> result{};

  ListLiveRoomsByIdResponseBody() {}

  explicit ListLiveRoomsByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListLiveRoomsByIdResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListLiveRoomsByIdResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListLiveRoomsByIdResponseBody() = default;
};
class ListLiveRoomsByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLiveRoomsByIdResponseBody> body{};

  ListLiveRoomsByIdResponse() {}

  explicit ListLiveRoomsByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLiveRoomsByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLiveRoomsByIdResponseBody>(model1);
      }
    }
  }


  virtual ~ListLiveRoomsByIdResponse() = default;
};
class ListRoomUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> roomId{};

  ListRoomUsersRequest() {}

  explicit ListRoomUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~ListRoomUsersRequest() = default;
};
class ListRoomUsersResponseBodyResultRoomUserList : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> nick{};
  shared_ptr<string> userId{};

  ListRoomUsersResponseBodyResultRoomUserList() {}

  explicit ListRoomUsersResponseBodyResultRoomUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (nick) {
      res["Nick"] = boost::any(*nick);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Nick") != m.end() && !m["Nick"].empty()) {
      nick = make_shared<string>(boost::any_cast<string>(m["Nick"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListRoomUsersResponseBodyResultRoomUserList() = default;
};
class ListRoomUsersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> hasMore{};
  shared_ptr<long> pageTotal{};
  shared_ptr<vector<ListRoomUsersResponseBodyResultRoomUserList>> roomUserList{};
  shared_ptr<long> totalCount{};

  ListRoomUsersResponseBodyResult() {}

  explicit ListRoomUsersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (roomUserList) {
      vector<boost::any> temp1;
      for(auto item1:*roomUserList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoomUserList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("RoomUserList") != m.end() && !m["RoomUserList"].empty()) {
      if (typeid(vector<boost::any>) == m["RoomUserList"].type()) {
        vector<ListRoomUsersResponseBodyResultRoomUserList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoomUserList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRoomUsersResponseBodyResultRoomUserList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roomUserList = make_shared<vector<ListRoomUsersResponseBodyResultRoomUserList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListRoomUsersResponseBodyResult() = default;
};
class ListRoomUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListRoomUsersResponseBodyResult> result{};

  ListRoomUsersResponseBody() {}

  explicit ListRoomUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListRoomUsersResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListRoomUsersResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListRoomUsersResponseBody() = default;
};
class ListRoomUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRoomUsersResponseBody> body{};

  ListRoomUsersResponse() {}

  explicit ListRoomUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRoomUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRoomUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListRoomUsersResponse() = default;
};
class ListRoomsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListRoomsRequest() {}

  explicit ListRoomsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
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
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListRoomsRequest() = default;
};
class ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> pluginId{};
  shared_ptr<string> pluginType{};

  ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList() {}

  explicit ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (pluginId) {
      res["PluginId"] = boost::any(*pluginId);
    }
    if (pluginType) {
      res["PluginType"] = boost::any(*pluginType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PluginId") != m.end() && !m["PluginId"].empty()) {
      pluginId = make_shared<string>(boost::any_cast<string>(m["PluginId"]));
    }
    if (m.find("PluginType") != m.end() && !m["PluginType"].empty()) {
      pluginType = make_shared<string>(boost::any_cast<string>(m["PluginType"]));
    }
  }


  virtual ~ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList() = default;
};
class ListRoomsResponseBodyResultRoomInfoList : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> createTime{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> notice{};
  shared_ptr<long> onlineCount{};
  shared_ptr<vector<ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList>> pluginInstanceInfoList{};
  shared_ptr<string> roomId{};
  shared_ptr<string> roomOwnerId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> title{};
  shared_ptr<long> uv{};

  ListRoomsResponseBodyResultRoomInfoList() {}

  explicit ListRoomsResponseBodyResultRoomInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (onlineCount) {
      res["OnlineCount"] = boost::any(*onlineCount);
    }
    if (pluginInstanceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*pluginInstanceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PluginInstanceInfoList"] = boost::any(temp1);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomOwnerId) {
      res["RoomOwnerId"] = boost::any(*roomOwnerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uv) {
      res["Uv"] = boost::any(*uv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("OnlineCount") != m.end() && !m["OnlineCount"].empty()) {
      onlineCount = make_shared<long>(boost::any_cast<long>(m["OnlineCount"]));
    }
    if (m.find("PluginInstanceInfoList") != m.end() && !m["PluginInstanceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["PluginInstanceInfoList"].type()) {
        vector<ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PluginInstanceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pluginInstanceInfoList = make_shared<vector<ListRoomsResponseBodyResultRoomInfoListPluginInstanceInfoList>>(expect1);
      }
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomOwnerId") != m.end() && !m["RoomOwnerId"].empty()) {
      roomOwnerId = make_shared<string>(boost::any_cast<string>(m["RoomOwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Uv") != m.end() && !m["Uv"].empty()) {
      uv = make_shared<long>(boost::any_cast<long>(m["Uv"]));
    }
  }


  virtual ~ListRoomsResponseBodyResultRoomInfoList() = default;
};
class ListRoomsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> hasMore{};
  shared_ptr<long> pageTotal{};
  shared_ptr<vector<ListRoomsResponseBodyResultRoomInfoList>> roomInfoList{};
  shared_ptr<long> totalCount{};

  ListRoomsResponseBodyResult() {}

  explicit ListRoomsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (roomInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*roomInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoomInfoList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("RoomInfoList") != m.end() && !m["RoomInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["RoomInfoList"].type()) {
        vector<ListRoomsResponseBodyResultRoomInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoomInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRoomsResponseBodyResultRoomInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roomInfoList = make_shared<vector<ListRoomsResponseBodyResultRoomInfoList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListRoomsResponseBodyResult() = default;
};
class ListRoomsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListRoomsResponseBodyResult> result{};

  ListRoomsResponseBody() {}

  explicit ListRoomsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListRoomsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListRoomsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListRoomsResponseBody() = default;
};
class ListRoomsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRoomsResponseBody> body{};

  ListRoomsResponse() {}

  explicit ListRoomsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRoomsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRoomsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRoomsResponse() = default;
};
class ListSensitiveWordRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListSensitiveWordRequest() {}

  explicit ListSensitiveWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
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
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListSensitiveWordRequest() = default;
};
class ListSensitiveWordResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<vector<string>> wordList{};

  ListSensitiveWordResponseBodyResult() {}

  explicit ListSensitiveWordResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (wordList) {
      res["WordList"] = boost::any(*wordList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("WordList") != m.end() && !m["WordList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WordList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WordList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      wordList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListSensitiveWordResponseBodyResult() = default;
};
class ListSensitiveWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListSensitiveWordResponseBodyResult> result{};

  ListSensitiveWordResponseBody() {}

  explicit ListSensitiveWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListSensitiveWordResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListSensitiveWordResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListSensitiveWordResponseBody() = default;
};
class ListSensitiveWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSensitiveWordResponseBody> body{};

  ListSensitiveWordResponse() {}

  explicit ListSensitiveWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSensitiveWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSensitiveWordResponseBody>(model1);
      }
    }
  }


  virtual ~ListSensitiveWordResponse() = default;
};
class PublishLiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> liveId{};
  shared_ptr<string> userId{};

  PublishLiveRequest() {}

  explicit PublishLiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~PublishLiveRequest() = default;
};
class PublishLiveResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> liveId{};
  shared_ptr<string> liveUrl{};
  shared_ptr<string> pushUrl{};
  shared_ptr<string> status{};

  PublishLiveResponseBodyResult() {}

  explicit PublishLiveResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (liveUrl) {
      res["LiveUrl"] = boost::any(*liveUrl);
    }
    if (pushUrl) {
      res["PushUrl"] = boost::any(*pushUrl);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("LiveUrl") != m.end() && !m["LiveUrl"].empty()) {
      liveUrl = make_shared<string>(boost::any_cast<string>(m["LiveUrl"]));
    }
    if (m.find("PushUrl") != m.end() && !m["PushUrl"].empty()) {
      pushUrl = make_shared<string>(boost::any_cast<string>(m["PushUrl"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PublishLiveResponseBodyResult() = default;
};
class PublishLiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<PublishLiveResponseBodyResult> result{};

  PublishLiveResponseBody() {}

  explicit PublishLiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        PublishLiveResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<PublishLiveResponseBodyResult>(model1);
      }
    }
  }


  virtual ~PublishLiveResponseBody() = default;
};
class PublishLiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishLiveResponseBody> body{};

  PublishLiveResponse() {}

  explicit PublishLiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PublishLiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishLiveResponseBody>(model1);
      }
    }
  }


  virtual ~PublishLiveResponse() = default;
};
class PublishLiveRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};
  shared_ptr<string> userId{};

  PublishLiveRoomRequest() {}

  explicit PublishLiveRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~PublishLiveRoomRequest() = default;
};
class PublishLiveRoomResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> liveId{};
  shared_ptr<string> liveUrl{};
  shared_ptr<string> pushUrl{};

  PublishLiveRoomResponseBodyResult() {}

  explicit PublishLiveRoomResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (liveUrl) {
      res["LiveUrl"] = boost::any(*liveUrl);
    }
    if (pushUrl) {
      res["PushUrl"] = boost::any(*pushUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("LiveUrl") != m.end() && !m["LiveUrl"].empty()) {
      liveUrl = make_shared<string>(boost::any_cast<string>(m["LiveUrl"]));
    }
    if (m.find("PushUrl") != m.end() && !m["PushUrl"].empty()) {
      pushUrl = make_shared<string>(boost::any_cast<string>(m["PushUrl"]));
    }
  }


  virtual ~PublishLiveRoomResponseBodyResult() = default;
};
class PublishLiveRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<PublishLiveRoomResponseBodyResult> result{};

  PublishLiveRoomResponseBody() {}

  explicit PublishLiveRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        PublishLiveRoomResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<PublishLiveRoomResponseBodyResult>(model1);
      }
    }
  }


  virtual ~PublishLiveRoomResponseBody() = default;
};
class PublishLiveRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishLiveRoomResponseBody> body{};

  PublishLiveRoomResponse() {}

  explicit PublishLiveRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PublishLiveRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishLiveRoomResponseBody>(model1);
      }
    }
  }


  virtual ~PublishLiveRoomResponse() = default;
};
class RemoveMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> conferenceId{};
  shared_ptr<string> fromUserId{};
  shared_ptr<string> toUserId{};

  RemoveMemberRequest() {}

  explicit RemoveMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conferenceId) {
      res["ConferenceId"] = boost::any(*conferenceId);
    }
    if (fromUserId) {
      res["FromUserId"] = boost::any(*fromUserId);
    }
    if (toUserId) {
      res["ToUserId"] = boost::any(*toUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConferenceId") != m.end() && !m["ConferenceId"].empty()) {
      conferenceId = make_shared<string>(boost::any_cast<string>(m["ConferenceId"]));
    }
    if (m.find("FromUserId") != m.end() && !m["FromUserId"].empty()) {
      fromUserId = make_shared<string>(boost::any_cast<string>(m["FromUserId"]));
    }
    if (m.find("ToUserId") != m.end() && !m["ToUserId"].empty()) {
      toUserId = make_shared<string>(boost::any_cast<string>(m["ToUserId"]));
    }
  }


  virtual ~RemoveMemberRequest() = default;
};
class RemoveMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveMemberResponseBody() {}

  explicit RemoveMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveMemberResponseBody() = default;
};
class RemoveMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveMemberResponseBody> body{};

  RemoveMemberResponse() {}

  explicit RemoveMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveMemberResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveMemberResponse() = default;
};
class SendCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> content{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> roomId{};
  shared_ptr<string> senderId{};
  shared_ptr<string> senderNick{};

  SendCommentRequest() {}

  explicit SendCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (senderNick) {
      res["SenderNick"] = boost::any(*senderNick);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("SenderNick") != m.end() && !m["SenderNick"].empty()) {
      senderNick = make_shared<string>(boost::any_cast<string>(m["SenderNick"]));
    }
  }


  virtual ~SendCommentRequest() = default;
};
class SendCommentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> content{};
  shared_ptr<string> extensionShrink{};
  shared_ptr<string> roomId{};
  shared_ptr<string> senderId{};
  shared_ptr<string> senderNick{};

  SendCommentShrinkRequest() {}

  explicit SendCommentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (extensionShrink) {
      res["Extension"] = boost::any(*extensionShrink);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (senderNick) {
      res["SenderNick"] = boost::any(*senderNick);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extensionShrink = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("SenderNick") != m.end() && !m["SenderNick"].empty()) {
      senderNick = make_shared<string>(boost::any_cast<string>(m["SenderNick"]));
    }
  }


  virtual ~SendCommentShrinkRequest() = default;
};
class SendCommentResponseBodyResultCommentVO : public Darabonba::Model {
public:
  shared_ptr<string> commentId{};
  shared_ptr<string> content{};
  shared_ptr<long> createAt{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> senderId{};
  shared_ptr<string> senderNick{};

  SendCommentResponseBodyResultCommentVO() {}

  explicit SendCommentResponseBodyResultCommentVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commentId) {
      res["CommentId"] = boost::any(*commentId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createAt) {
      res["CreateAt"] = boost::any(*createAt);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (senderNick) {
      res["SenderNick"] = boost::any(*senderNick);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommentId") != m.end() && !m["CommentId"].empty()) {
      commentId = make_shared<string>(boost::any_cast<string>(m["CommentId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreateAt") != m.end() && !m["CreateAt"].empty()) {
      createAt = make_shared<long>(boost::any_cast<long>(m["CreateAt"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("SenderNick") != m.end() && !m["SenderNick"].empty()) {
      senderNick = make_shared<string>(boost::any_cast<string>(m["SenderNick"]));
    }
  }


  virtual ~SendCommentResponseBodyResultCommentVO() = default;
};
class SendCommentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<SendCommentResponseBodyResultCommentVO> commentVO{};

  SendCommentResponseBodyResult() {}

  explicit SendCommentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commentVO) {
      res["CommentVO"] = commentVO ? boost::any(commentVO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommentVO") != m.end() && !m["CommentVO"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommentVO"].type()) {
        SendCommentResponseBodyResultCommentVO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommentVO"]));
        commentVO = make_shared<SendCommentResponseBodyResultCommentVO>(model1);
      }
    }
  }


  virtual ~SendCommentResponseBodyResult() = default;
};
class SendCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SendCommentResponseBodyResult> result{};

  SendCommentResponseBody() {}

  explicit SendCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        SendCommentResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<SendCommentResponseBodyResult>(model1);
      }
    }
  }


  virtual ~SendCommentResponseBody() = default;
};
class SendCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendCommentResponseBody> body{};

  SendCommentResponse() {}

  explicit SendCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendCommentResponseBody>(model1);
      }
    }
  }


  virtual ~SendCommentResponse() = default;
};
class SendCustomMessageToAllRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> body{};
  shared_ptr<string> roomId{};

  SendCustomMessageToAllRequest() {}

  explicit SendCustomMessageToAllRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~SendCustomMessageToAllRequest() = default;
};
class SendCustomMessageToAllResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};

  SendCustomMessageToAllResponseBodyResult() {}

  explicit SendCustomMessageToAllResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
  }


  virtual ~SendCustomMessageToAllResponseBodyResult() = default;
};
class SendCustomMessageToAllResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SendCustomMessageToAllResponseBodyResult> result{};

  SendCustomMessageToAllResponseBody() {}

  explicit SendCustomMessageToAllResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        SendCustomMessageToAllResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<SendCustomMessageToAllResponseBodyResult>(model1);
      }
    }
  }


  virtual ~SendCustomMessageToAllResponseBody() = default;
};
class SendCustomMessageToAllResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendCustomMessageToAllResponseBody> body{};

  SendCustomMessageToAllResponse() {}

  explicit SendCustomMessageToAllResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendCustomMessageToAllResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendCustomMessageToAllResponseBody>(model1);
      }
    }
  }


  virtual ~SendCustomMessageToAllResponse() = default;
};
class SendCustomMessageToUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> body{};
  shared_ptr<vector<string>> receiverList{};
  shared_ptr<string> roomId{};

  SendCustomMessageToUsersRequest() {}

  explicit SendCustomMessageToUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (receiverList) {
      res["ReceiverList"] = boost::any(*receiverList);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("ReceiverList") != m.end() && !m["ReceiverList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReceiverList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReceiverList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      receiverList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~SendCustomMessageToUsersRequest() = default;
};
class SendCustomMessageToUsersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};

  SendCustomMessageToUsersResponseBodyResult() {}

  explicit SendCustomMessageToUsersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
  }


  virtual ~SendCustomMessageToUsersResponseBodyResult() = default;
};
class SendCustomMessageToUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SendCustomMessageToUsersResponseBodyResult> result{};

  SendCustomMessageToUsersResponseBody() {}

  explicit SendCustomMessageToUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        SendCustomMessageToUsersResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<SendCustomMessageToUsersResponseBodyResult>(model1);
      }
    }
  }


  virtual ~SendCustomMessageToUsersResponseBody() = default;
};
class SendCustomMessageToUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendCustomMessageToUsersResponseBody> body{};

  SendCustomMessageToUsersResponse() {}

  explicit SendCustomMessageToUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendCustomMessageToUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendCustomMessageToUsersResponseBody>(model1);
      }
    }
  }


  virtual ~SendCustomMessageToUsersResponse() = default;
};
class SetUserAdminRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  SetUserAdminRequest() {}

  explicit SetUserAdminRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SetUserAdminRequest() = default;
};
class SetUserAdminResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetUserAdminResponseBody() {}

  explicit SetUserAdminResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetUserAdminResponseBody() = default;
};
class SetUserAdminResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetUserAdminResponseBody> body{};

  SetUserAdminResponse() {}

  explicit SetUserAdminResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetUserAdminResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetUserAdminResponseBody>(model1);
      }
    }
  }


  virtual ~SetUserAdminResponse() = default;
};
class StopClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> classId{};
  shared_ptr<string> userId{};

  StopClassRequest() {}

  explicit StopClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~StopClassRequest() = default;
};
class StopClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopClassResponseBody() {}

  explicit StopClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopClassResponseBody() = default;
};
class StopClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopClassResponseBody> body{};

  StopClassResponse() {}

  explicit StopClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopClassResponseBody>(model1);
      }
    }
  }


  virtual ~StopClassResponse() = default;
};
class StopLiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};
  shared_ptr<string> roomId{};
  shared_ptr<string> userId{};

  StopLiveRequest() {}

  explicit StopLiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~StopLiveRequest() = default;
};
class StopLiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopLiveResponseBody() {}

  explicit StopLiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopLiveResponseBody() = default;
};
class StopLiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopLiveResponseBody> body{};

  StopLiveResponse() {}

  explicit StopLiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopLiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopLiveResponseBody>(model1);
      }
    }
  }


  virtual ~StopLiveResponse() = default;
};
class StopLiveRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> liveId{};
  shared_ptr<string> userId{};

  StopLiveRoomRequest() {}

  explicit StopLiveRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~StopLiveRoomRequest() = default;
};
class StopLiveRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopLiveRoomResponseBody() {}

  explicit StopLiveRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopLiveRoomResponseBody() = default;
};
class StopLiveRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopLiveRoomResponseBody> body{};

  StopLiveRoomResponse() {}

  explicit StopLiveRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopLiveRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopLiveRoomResponseBody>(model1);
      }
    }
  }


  virtual ~StopLiveRoomResponse() = default;
};
class UpdateClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> classId{};
  shared_ptr<string> createNickname{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> title{};

  UpdateClassRequest() {}

  explicit UpdateClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (createNickname) {
      res["CreateNickname"] = boost::any(*createNickname);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("CreateNickname") != m.end() && !m["CreateNickname"].empty()) {
      createNickname = make_shared<string>(boost::any_cast<string>(m["CreateNickname"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateClassRequest() = default;
};
class UpdateClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateClassResponseBody() {}

  explicit UpdateClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateClassResponseBody() = default;
};
class UpdateClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateClassResponseBody> body{};

  UpdateClassResponse() {}

  explicit UpdateClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateClassResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateClassResponse() = default;
};
class UpdateLiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> introduction{};
  shared_ptr<string> liveId{};
  shared_ptr<string> title{};

  UpdateLiveRequest() {}

  explicit UpdateLiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateLiveRequest() = default;
};
class UpdateLiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateLiveResponseBody() {}

  explicit UpdateLiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateLiveResponseBody() = default;
};
class UpdateLiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLiveResponseBody> body{};

  UpdateLiveResponse() {}

  explicit UpdateLiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLiveResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLiveResponse() = default;
};
class UpdateLiveRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> liveId{};
  shared_ptr<string> notice{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  UpdateLiveRoomRequest() {}

  explicit UpdateLiveRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateLiveRoomRequest() = default;
};
class UpdateLiveRoomShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorNick{};
  shared_ptr<string> appId{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> extensionShrink{};
  shared_ptr<string> liveId{};
  shared_ptr<string> notice{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  UpdateLiveRoomShrinkRequest() {}

  explicit UpdateLiveRoomShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (anchorNick) {
      res["AnchorNick"] = boost::any(*anchorNick);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (extensionShrink) {
      res["Extension"] = boost::any(*extensionShrink);
    }
    if (liveId) {
      res["LiveId"] = boost::any(*liveId);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("AnchorNick") != m.end() && !m["AnchorNick"].empty()) {
      anchorNick = make_shared<string>(boost::any_cast<string>(m["AnchorNick"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extensionShrink = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("LiveId") != m.end() && !m["LiveId"].empty()) {
      liveId = make_shared<string>(boost::any_cast<string>(m["LiveId"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateLiveRoomShrinkRequest() = default;
};
class UpdateLiveRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateLiveRoomResponseBody() {}

  explicit UpdateLiveRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateLiveRoomResponseBody() = default;
};
class UpdateLiveRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLiveRoomResponseBody> body{};

  UpdateLiveRoomResponse() {}

  explicit UpdateLiveRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLiveRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLiveRoomResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLiveRoomResponse() = default;
};
class UpdateRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, string>> extension{};
  shared_ptr<string> notice{};
  shared_ptr<string> roomId{};
  shared_ptr<string> roomOwnerId{};
  shared_ptr<string> title{};

  UpdateRoomRequest() {}

  explicit UpdateRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomOwnerId) {
      res["RoomOwnerId"] = boost::any(*roomOwnerId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomOwnerId") != m.end() && !m["RoomOwnerId"].empty()) {
      roomOwnerId = make_shared<string>(boost::any_cast<string>(m["RoomOwnerId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateRoomRequest() = default;
};
class UpdateRoomShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> extensionShrink{};
  shared_ptr<string> notice{};
  shared_ptr<string> roomId{};
  shared_ptr<string> roomOwnerId{};
  shared_ptr<string> title{};

  UpdateRoomShrinkRequest() {}

  explicit UpdateRoomShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (extensionShrink) {
      res["Extension"] = boost::any(*extensionShrink);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomOwnerId) {
      res["RoomOwnerId"] = boost::any(*roomOwnerId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extensionShrink = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomOwnerId") != m.end() && !m["RoomOwnerId"].empty()) {
      roomOwnerId = make_shared<string>(boost::any_cast<string>(m["RoomOwnerId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateRoomShrinkRequest() = default;
};
class UpdateRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateRoomResponseBody() {}

  explicit UpdateRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateRoomResponseBody() = default;
};
class UpdateRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRoomResponseBody> body{};

  UpdateRoomResponse() {}

  explicit UpdateRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRoomResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRoomResponse() = default;
};
class UpdateShareScreenLayoutRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> classId{};
  shared_ptr<bool> enableOverlay{};
  shared_ptr<double> overlayHeight{};
  shared_ptr<double> overlayWidth{};
  shared_ptr<double> overlayX{};
  shared_ptr<double> overlayY{};

  UpdateShareScreenLayoutRequest() {}

  explicit UpdateShareScreenLayoutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (enableOverlay) {
      res["EnableOverlay"] = boost::any(*enableOverlay);
    }
    if (overlayHeight) {
      res["OverlayHeight"] = boost::any(*overlayHeight);
    }
    if (overlayWidth) {
      res["OverlayWidth"] = boost::any(*overlayWidth);
    }
    if (overlayX) {
      res["OverlayX"] = boost::any(*overlayX);
    }
    if (overlayY) {
      res["OverlayY"] = boost::any(*overlayY);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("EnableOverlay") != m.end() && !m["EnableOverlay"].empty()) {
      enableOverlay = make_shared<bool>(boost::any_cast<bool>(m["EnableOverlay"]));
    }
    if (m.find("OverlayHeight") != m.end() && !m["OverlayHeight"].empty()) {
      overlayHeight = make_shared<double>(boost::any_cast<double>(m["OverlayHeight"]));
    }
    if (m.find("OverlayWidth") != m.end() && !m["OverlayWidth"].empty()) {
      overlayWidth = make_shared<double>(boost::any_cast<double>(m["OverlayWidth"]));
    }
    if (m.find("OverlayX") != m.end() && !m["OverlayX"].empty()) {
      overlayX = make_shared<double>(boost::any_cast<double>(m["OverlayX"]));
    }
    if (m.find("OverlayY") != m.end() && !m["OverlayY"].empty()) {
      overlayY = make_shared<double>(boost::any_cast<double>(m["OverlayY"]));
    }
  }


  virtual ~UpdateShareScreenLayoutRequest() = default;
};
class UpdateShareScreenLayoutResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateShareScreenLayoutResponseBody() {}

  explicit UpdateShareScreenLayoutResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateShareScreenLayoutResponseBody() = default;
};
class UpdateShareScreenLayoutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateShareScreenLayoutResponseBody> body{};

  UpdateShareScreenLayoutResponse() {}

  explicit UpdateShareScreenLayoutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateShareScreenLayoutResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateShareScreenLayoutResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateShareScreenLayoutResponse() = default;
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
  BanAllCommentResponse banAllCommentWithOptions(shared_ptr<BanAllCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BanAllCommentResponse banAllComment(shared_ptr<BanAllCommentRequest> request);
  BanCommentResponse banCommentWithOptions(shared_ptr<BanCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BanCommentResponse banComment(shared_ptr<BanCommentRequest> request);
  CancelBanAllCommentResponse cancelBanAllCommentWithOptions(shared_ptr<CancelBanAllCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelBanAllCommentResponse cancelBanAllComment(shared_ptr<CancelBanAllCommentRequest> request);
  CancelBanCommentResponse cancelBanCommentWithOptions(shared_ptr<CancelBanCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelBanCommentResponse cancelBanComment(shared_ptr<CancelBanCommentRequest> request);
  CancelUserAdminResponse cancelUserAdminWithOptions(shared_ptr<CancelUserAdminRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelUserAdminResponse cancelUserAdmin(shared_ptr<CancelUserAdminRequest> request);
  CreateClassResponse createClassWithOptions(shared_ptr<CreateClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClassResponse createClass(shared_ptr<CreateClassRequest> request);
  CreateLiveResponse createLiveWithOptions(shared_ptr<CreateLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLiveResponse createLive(shared_ptr<CreateLiveRequest> request);
  CreateLiveRoomResponse createLiveRoomWithOptions(shared_ptr<CreateLiveRoomRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLiveRoomResponse createLiveRoom(shared_ptr<CreateLiveRoomRequest> request);
  CreateRoomResponse createRoomWithOptions(shared_ptr<CreateRoomRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRoomResponse createRoom(shared_ptr<CreateRoomRequest> request);
  CreateSensitiveWordResponse createSensitiveWordWithOptions(shared_ptr<CreateSensitiveWordRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSensitiveWordResponse createSensitiveWord(shared_ptr<CreateSensitiveWordRequest> request);
  DeleteClassResponse deleteClassWithOptions(shared_ptr<DeleteClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClassResponse deleteClass(shared_ptr<DeleteClassRequest> request);
  DeleteCommentResponse deleteCommentWithOptions(shared_ptr<DeleteCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCommentResponse deleteComment(shared_ptr<DeleteCommentRequest> request);
  DeleteConferenceResponse deleteConferenceWithOptions(shared_ptr<DeleteConferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConferenceResponse deleteConference(shared_ptr<DeleteConferenceRequest> request);
  DeleteLiveResponse deleteLiveWithOptions(shared_ptr<DeleteLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLiveResponse deleteLive(shared_ptr<DeleteLiveRequest> request);
  DeleteLiveRoomResponse deleteLiveRoomWithOptions(shared_ptr<DeleteLiveRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLiveRoomResponse deleteLiveRoom(shared_ptr<DeleteLiveRoomRequest> request);
  DeleteRoomResponse deleteRoomWithOptions(shared_ptr<DeleteRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRoomResponse deleteRoom(shared_ptr<DeleteRoomRequest> request);
  DeleteSensitiveWordResponse deleteSensitiveWordWithOptions(shared_ptr<DeleteSensitiveWordRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSensitiveWordResponse deleteSensitiveWord(shared_ptr<DeleteSensitiveWordRequest> request);
  DescribeMeterImpPlayBackTimeByLiveIdResponse describeMeterImpPlayBackTimeByLiveIdWithOptions(shared_ptr<DescribeMeterImpPlayBackTimeByLiveIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMeterImpPlayBackTimeByLiveIdResponse describeMeterImpPlayBackTimeByLiveId(shared_ptr<DescribeMeterImpPlayBackTimeByLiveIdRequest> request);
  DescribeMeterImpWatchLiveTimeByLiveIdResponse describeMeterImpWatchLiveTimeByLiveIdWithOptions(shared_ptr<DescribeMeterImpWatchLiveTimeByLiveIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMeterImpWatchLiveTimeByLiveIdResponse describeMeterImpWatchLiveTimeByLiveId(shared_ptr<DescribeMeterImpWatchLiveTimeByLiveIdRequest> request);
  GetAuthTokenResponse getAuthTokenWithOptions(shared_ptr<GetAuthTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuthTokenResponse getAuthToken(shared_ptr<GetAuthTokenRequest> request);
  GetClassDetailResponse getClassDetailWithOptions(shared_ptr<GetClassDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetClassDetailResponse getClassDetail(shared_ptr<GetClassDetailRequest> request);
  GetClassRecordResponse getClassRecordWithOptions(shared_ptr<GetClassRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetClassRecordResponse getClassRecord(shared_ptr<GetClassRecordRequest> request);
  GetConferenceResponse getConferenceWithOptions(shared_ptr<GetConferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConferenceResponse getConference(shared_ptr<GetConferenceRequest> request);
  GetLiveResponse getLiveWithOptions(shared_ptr<GetLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLiveResponse getLive(shared_ptr<GetLiveRequest> request);
  GetLiveRecordResponse getLiveRecordWithOptions(shared_ptr<GetLiveRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLiveRecordResponse getLiveRecord(shared_ptr<GetLiveRecordRequest> request);
  GetLiveRoomResponse getLiveRoomWithOptions(shared_ptr<GetLiveRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLiveRoomResponse getLiveRoom(shared_ptr<GetLiveRoomRequest> request);
  GetLiveRoomStatisticsResponse getLiveRoomStatisticsWithOptions(shared_ptr<GetLiveRoomStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLiveRoomStatisticsResponse getLiveRoomStatistics(shared_ptr<GetLiveRoomStatisticsRequest> request);
  GetLiveRoomUserStatisticsResponse getLiveRoomUserStatisticsWithOptions(shared_ptr<GetLiveRoomUserStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLiveRoomUserStatisticsResponse getLiveRoomUserStatistics(shared_ptr<GetLiveRoomUserStatisticsRequest> request);
  GetRoomResponse getRoomWithOptions(shared_ptr<GetRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRoomResponse getRoom(shared_ptr<GetRoomRequest> request);
  GetStandardRoomJumpUrlResponse getStandardRoomJumpUrlWithOptions(shared_ptr<GetStandardRoomJumpUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStandardRoomJumpUrlResponse getStandardRoomJumpUrl(shared_ptr<GetStandardRoomJumpUrlRequest> request);
  KickRoomUserResponse kickRoomUserWithOptions(shared_ptr<KickRoomUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  KickRoomUserResponse kickRoomUser(shared_ptr<KickRoomUserRequest> request);
  ListClassesResponse listClassesWithOptions(shared_ptr<ListClassesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClassesResponse listClasses(shared_ptr<ListClassesRequest> request);
  ListCommentsResponse listCommentsWithOptions(shared_ptr<ListCommentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCommentsResponse listComments(shared_ptr<ListCommentsRequest> request);
  ListConferenceUsersResponse listConferenceUsersWithOptions(shared_ptr<ListConferenceUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConferenceUsersResponse listConferenceUsers(shared_ptr<ListConferenceUsersRequest> request);
  ListLiveRoomsResponse listLiveRoomsWithOptions(shared_ptr<ListLiveRoomsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLiveRoomsResponse listLiveRooms(shared_ptr<ListLiveRoomsRequest> request);
  ListLiveRoomsByIdResponse listLiveRoomsByIdWithOptions(shared_ptr<ListLiveRoomsByIdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLiveRoomsByIdResponse listLiveRoomsById(shared_ptr<ListLiveRoomsByIdRequest> request);
  ListRoomUsersResponse listRoomUsersWithOptions(shared_ptr<ListRoomUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRoomUsersResponse listRoomUsers(shared_ptr<ListRoomUsersRequest> request);
  ListRoomsResponse listRoomsWithOptions(shared_ptr<ListRoomsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRoomsResponse listRooms(shared_ptr<ListRoomsRequest> request);
  ListSensitiveWordResponse listSensitiveWordWithOptions(shared_ptr<ListSensitiveWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSensitiveWordResponse listSensitiveWord(shared_ptr<ListSensitiveWordRequest> request);
  PublishLiveResponse publishLiveWithOptions(shared_ptr<PublishLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishLiveResponse publishLive(shared_ptr<PublishLiveRequest> request);
  PublishLiveRoomResponse publishLiveRoomWithOptions(shared_ptr<PublishLiveRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishLiveRoomResponse publishLiveRoom(shared_ptr<PublishLiveRoomRequest> request);
  RemoveMemberResponse removeMemberWithOptions(shared_ptr<RemoveMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveMemberResponse removeMember(shared_ptr<RemoveMemberRequest> request);
  SendCommentResponse sendCommentWithOptions(shared_ptr<SendCommentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendCommentResponse sendComment(shared_ptr<SendCommentRequest> request);
  SendCustomMessageToAllResponse sendCustomMessageToAllWithOptions(shared_ptr<SendCustomMessageToAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendCustomMessageToAllResponse sendCustomMessageToAll(shared_ptr<SendCustomMessageToAllRequest> request);
  SendCustomMessageToUsersResponse sendCustomMessageToUsersWithOptions(shared_ptr<SendCustomMessageToUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendCustomMessageToUsersResponse sendCustomMessageToUsers(shared_ptr<SendCustomMessageToUsersRequest> request);
  SetUserAdminResponse setUserAdminWithOptions(shared_ptr<SetUserAdminRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetUserAdminResponse setUserAdmin(shared_ptr<SetUserAdminRequest> request);
  StopClassResponse stopClassWithOptions(shared_ptr<StopClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopClassResponse stopClass(shared_ptr<StopClassRequest> request);
  StopLiveResponse stopLiveWithOptions(shared_ptr<StopLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopLiveResponse stopLive(shared_ptr<StopLiveRequest> request);
  StopLiveRoomResponse stopLiveRoomWithOptions(shared_ptr<StopLiveRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopLiveRoomResponse stopLiveRoom(shared_ptr<StopLiveRoomRequest> request);
  UpdateClassResponse updateClassWithOptions(shared_ptr<UpdateClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateClassResponse updateClass(shared_ptr<UpdateClassRequest> request);
  UpdateLiveResponse updateLiveWithOptions(shared_ptr<UpdateLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLiveResponse updateLive(shared_ptr<UpdateLiveRequest> request);
  UpdateLiveRoomResponse updateLiveRoomWithOptions(shared_ptr<UpdateLiveRoomRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLiveRoomResponse updateLiveRoom(shared_ptr<UpdateLiveRoomRequest> request);
  UpdateRoomResponse updateRoomWithOptions(shared_ptr<UpdateRoomRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRoomResponse updateRoom(shared_ptr<UpdateRoomRequest> request);
  UpdateShareScreenLayoutResponse updateShareScreenLayoutWithOptions(shared_ptr<UpdateShareScreenLayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateShareScreenLayoutResponse updateShareScreenLayout(shared_ptr<UpdateShareScreenLayoutRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Imp20210630

#endif
