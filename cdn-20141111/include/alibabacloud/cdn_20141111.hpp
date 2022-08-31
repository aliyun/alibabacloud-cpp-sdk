// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CDN20141111_H_
#define ALIBABACLOUD_CDN20141111_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cdn20141111 {
class AddCdnDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> cdnType{};
  shared_ptr<string> checkUrl{};
  shared_ptr<string> domainName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> priorities{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scope{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> sourcePort{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sources{};
  shared_ptr<string> topLevelDomain{};

  AddCdnDomainRequest() {}

  explicit AddCdnDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cdnType) {
      res["CdnType"] = boost::any(*cdnType);
    }
    if (checkUrl) {
      res["CheckUrl"] = boost::any(*checkUrl);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (priorities) {
      res["Priorities"] = boost::any(*priorities);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (sourcePort) {
      res["SourcePort"] = boost::any(*sourcePort);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
    }
    if (topLevelDomain) {
      res["TopLevelDomain"] = boost::any(*topLevelDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CdnType") != m.end() && !m["CdnType"].empty()) {
      cdnType = make_shared<string>(boost::any_cast<string>(m["CdnType"]));
    }
    if (m.find("CheckUrl") != m.end() && !m["CheckUrl"].empty()) {
      checkUrl = make_shared<string>(boost::any_cast<string>(m["CheckUrl"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Priorities") != m.end() && !m["Priorities"].empty()) {
      priorities = make_shared<string>(boost::any_cast<string>(m["Priorities"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SourcePort") != m.end() && !m["SourcePort"].empty()) {
      sourcePort = make_shared<long>(boost::any_cast<long>(m["SourcePort"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sources = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
    if (m.find("TopLevelDomain") != m.end() && !m["TopLevelDomain"].empty()) {
      topLevelDomain = make_shared<string>(boost::any_cast<string>(m["TopLevelDomain"]));
    }
  }


  virtual ~AddCdnDomainRequest() = default;
};
class AddCdnDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddCdnDomainResponseBody() {}

  explicit AddCdnDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddCdnDomainResponseBody() = default;
};
class AddCdnDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddCdnDomainResponseBody> body{};

  AddCdnDomainResponse() {}

  explicit AddCdnDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddCdnDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddCdnDomainResponseBody>(model1);
      }
    }
  }


  virtual ~AddCdnDomainResponse() = default;
};
class DescribeCdnDomainDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};

  DescribeCdnDomainDetailRequest() {}

  explicit DescribeCdnDomainDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeCdnDomainDetailRequest() = default;
};
class DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> enabled{};
  shared_ptr<long> port{};
  shared_ptr<string> priority{};
  shared_ptr<string> type{};

  DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel() {}

  explicit DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<string>(boost::any_cast<string>(m["Enabled"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel() = default;
};
class DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel>> sourceModel{};

  DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels() {}

  explicit DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceModel) {
      vector<boost::any> temp1;
      for(auto item1:*sourceModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceModel") != m.end() && !m["SourceModel"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceModel"].type()) {
        vector<DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceModel = make_shared<vector<DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel>>(expect1);
      }
    }
  }


  virtual ~DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels() = default;
};
class DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSources : public Darabonba::Model {
public:
  shared_ptr<vector<string>> source{};

  DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSources() {}

  explicit DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Source"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Source"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      source = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSources() = default;
};
class DescribeCdnDomainDetailResponseBodyGetDomainDetailModel : public Darabonba::Model {
public:
  shared_ptr<string> cdnType{};
  shared_ptr<string> cname{};
  shared_ptr<string> description{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainStatus{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> httpsCname{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scope{};
  shared_ptr<string> serverCertificateStatus{};
  shared_ptr<DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels> sourceModels{};
  shared_ptr<long> sourcePort{};
  shared_ptr<string> sourceType{};
  shared_ptr<DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSources> sources{};

  DescribeCdnDomainDetailResponseBodyGetDomainDetailModel() {}

  explicit DescribeCdnDomainDetailResponseBodyGetDomainDetailModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cdnType) {
      res["CdnType"] = boost::any(*cdnType);
    }
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (httpsCname) {
      res["HttpsCname"] = boost::any(*httpsCname);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (serverCertificateStatus) {
      res["ServerCertificateStatus"] = boost::any(*serverCertificateStatus);
    }
    if (sourceModels) {
      res["SourceModels"] = sourceModels ? boost::any(sourceModels->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourcePort) {
      res["SourcePort"] = boost::any(*sourcePort);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sources) {
      res["Sources"] = sources ? boost::any(sources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CdnType") != m.end() && !m["CdnType"].empty()) {
      cdnType = make_shared<string>(boost::any_cast<string>(m["CdnType"]));
    }
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("HttpsCname") != m.end() && !m["HttpsCname"].empty()) {
      httpsCname = make_shared<string>(boost::any_cast<string>(m["HttpsCname"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("ServerCertificateStatus") != m.end() && !m["ServerCertificateStatus"].empty()) {
      serverCertificateStatus = make_shared<string>(boost::any_cast<string>(m["ServerCertificateStatus"]));
    }
    if (m.find("SourceModels") != m.end() && !m["SourceModels"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceModels"].type()) {
        DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceModels"]));
        sourceModels = make_shared<DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels>(model1);
      }
    }
    if (m.find("SourcePort") != m.end() && !m["SourcePort"].empty()) {
      sourcePort = make_shared<long>(boost::any_cast<long>(m["SourcePort"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sources"].type()) {
        DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sources"]));
        sources = make_shared<DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSources>(model1);
      }
    }
  }


  virtual ~DescribeCdnDomainDetailResponseBodyGetDomainDetailModel() = default;
};
class DescribeCdnDomainDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCdnDomainDetailResponseBodyGetDomainDetailModel> getDomainDetailModel{};
  shared_ptr<string> requestId{};

  DescribeCdnDomainDetailResponseBody() {}

  explicit DescribeCdnDomainDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (getDomainDetailModel) {
      res["GetDomainDetailModel"] = getDomainDetailModel ? boost::any(getDomainDetailModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GetDomainDetailModel") != m.end() && !m["GetDomainDetailModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["GetDomainDetailModel"].type()) {
        DescribeCdnDomainDetailResponseBodyGetDomainDetailModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GetDomainDetailModel"]));
        getDomainDetailModel = make_shared<DescribeCdnDomainDetailResponseBodyGetDomainDetailModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCdnDomainDetailResponseBody() = default;
};
class DescribeCdnDomainDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCdnDomainDetailResponseBody> body{};

  DescribeCdnDomainDetailResponse() {}

  explicit DescribeCdnDomainDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCdnDomainDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCdnDomainDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCdnDomainDetailResponse() = default;
};
class DescribeCdnDomainLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> logDay{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> startTime{};

  DescribeCdnDomainLogsRequest() {}

  explicit DescribeCdnDomainLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (logDay) {
      res["LogDay"] = boost::any(*logDay);
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
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("LogDay") != m.end() && !m["LogDay"].empty()) {
      logDay = make_shared<string>(boost::any_cast<string>(m["LogDay"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeCdnDomainLogsRequest() = default;
};
class DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> logName{};
  shared_ptr<string> logPath{};
  shared_ptr<long> logSize{};
  shared_ptr<string> startTime{};

  DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail() {}

  explicit DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (logName) {
      res["LogName"] = boost::any(*logName);
    }
    if (logPath) {
      res["LogPath"] = boost::any(*logPath);
    }
    if (logSize) {
      res["LogSize"] = boost::any(*logSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("LogName") != m.end() && !m["LogName"].empty()) {
      logName = make_shared<string>(boost::any_cast<string>(m["LogName"]));
    }
    if (m.find("LogPath") != m.end() && !m["LogPath"].empty()) {
      logPath = make_shared<string>(boost::any_cast<string>(m["LogPath"]));
    }
    if (m.find("LogSize") != m.end() && !m["LogSize"].empty()) {
      logSize = make_shared<long>(boost::any_cast<long>(m["LogSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail() = default;
};
class DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail>> domainLogDetail{};

  DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails() {}

  explicit DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainLogDetail) {
      vector<boost::any> temp1;
      for(auto item1:*domainLogDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainLogDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainLogDetail") != m.end() && !m["DomainLogDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainLogDetail"].type()) {
        vector<DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainLogDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainLogDetail = make_shared<vector<DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails() = default;
};
class DescribeCdnDomainLogsResponseBodyDomainLogModel : public Darabonba::Model {
public:
  shared_ptr<DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails> domainLogDetails{};
  shared_ptr<string> domainName{};

  DescribeCdnDomainLogsResponseBodyDomainLogModel() {}

  explicit DescribeCdnDomainLogsResponseBodyDomainLogModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainLogDetails) {
      res["DomainLogDetails"] = domainLogDetails ? boost::any(domainLogDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainLogDetails") != m.end() && !m["DomainLogDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainLogDetails"].type()) {
        DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainLogDetails"]));
        domainLogDetails = make_shared<DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails>(model1);
      }
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeCdnDomainLogsResponseBodyDomainLogModel() = default;
};
class DescribeCdnDomainLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCdnDomainLogsResponseBodyDomainLogModel> domainLogModel{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCdnDomainLogsResponseBody() {}

  explicit DescribeCdnDomainLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainLogModel) {
      res["DomainLogModel"] = domainLogModel ? boost::any(domainLogModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("DomainLogModel") != m.end() && !m["DomainLogModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainLogModel"].type()) {
        DescribeCdnDomainLogsResponseBodyDomainLogModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainLogModel"]));
        domainLogModel = make_shared<DescribeCdnDomainLogsResponseBodyDomainLogModel>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~DescribeCdnDomainLogsResponseBody() = default;
};
class DescribeCdnDomainLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCdnDomainLogsResponseBody> body{};

  DescribeCdnDomainLogsResponse() {}

  explicit DescribeCdnDomainLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCdnDomainLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCdnDomainLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCdnDomainLogsResponse() = default;
};
class DescribeCdnServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};

  DescribeCdnServiceRequest() {}

  explicit DescribeCdnServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeCdnServiceRequest() = default;
};
class DescribeCdnServiceResponseBodyOperationLocksLockReason : public Darabonba::Model {
public:
  shared_ptr<string> lockReason{};

  DescribeCdnServiceResponseBodyOperationLocksLockReason() {}

  explicit DescribeCdnServiceResponseBodyOperationLocksLockReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
  }


  virtual ~DescribeCdnServiceResponseBodyOperationLocksLockReason() = default;
};
class DescribeCdnServiceResponseBodyOperationLocks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCdnServiceResponseBodyOperationLocksLockReason>> lockReason{};

  DescribeCdnServiceResponseBodyOperationLocks() {}

  explicit DescribeCdnServiceResponseBodyOperationLocks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lockReason) {
      vector<boost::any> temp1;
      for(auto item1:*lockReason){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LockReason"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      if (typeid(vector<boost::any>) == m["LockReason"].type()) {
        vector<DescribeCdnServiceResponseBodyOperationLocksLockReason> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LockReason"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCdnServiceResponseBodyOperationLocksLockReason model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lockReason = make_shared<vector<DescribeCdnServiceResponseBodyOperationLocksLockReason>>(expect1);
      }
    }
  }


  virtual ~DescribeCdnServiceResponseBodyOperationLocks() = default;
};
class DescribeCdnServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> changingAffectTime{};
  shared_ptr<string> changingChargeType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<string> openingTime{};
  shared_ptr<DescribeCdnServiceResponseBodyOperationLocks> operationLocks{};
  shared_ptr<string> requestId{};

  DescribeCdnServiceResponseBody() {}

  explicit DescribeCdnServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changingAffectTime) {
      res["ChangingAffectTime"] = boost::any(*changingAffectTime);
    }
    if (changingChargeType) {
      res["ChangingChargeType"] = boost::any(*changingChargeType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (openingTime) {
      res["OpeningTime"] = boost::any(*openingTime);
    }
    if (operationLocks) {
      res["OperationLocks"] = operationLocks ? boost::any(operationLocks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangingAffectTime") != m.end() && !m["ChangingAffectTime"].empty()) {
      changingAffectTime = make_shared<string>(boost::any_cast<string>(m["ChangingAffectTime"]));
    }
    if (m.find("ChangingChargeType") != m.end() && !m["ChangingChargeType"].empty()) {
      changingChargeType = make_shared<string>(boost::any_cast<string>(m["ChangingChargeType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("OpeningTime") != m.end() && !m["OpeningTime"].empty()) {
      openingTime = make_shared<string>(boost::any_cast<string>(m["OpeningTime"]));
    }
    if (m.find("OperationLocks") != m.end() && !m["OperationLocks"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperationLocks"].type()) {
        DescribeCdnServiceResponseBodyOperationLocks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperationLocks"]));
        operationLocks = make_shared<DescribeCdnServiceResponseBodyOperationLocks>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCdnServiceResponseBody() = default;
};
class DescribeCdnServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCdnServiceResponseBody> body{};

  DescribeCdnServiceResponse() {}

  explicit DescribeCdnServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCdnServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCdnServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCdnServiceResponse() = default;
};
class DescribeDomainBpsDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> domainType{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timeMerge{};

  DescribeDomainBpsDataRequest() {}

  explicit DescribeDomainBpsDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timeMerge) {
      res["TimeMerge"] = boost::any(*timeMerge);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TimeMerge") != m.end() && !m["TimeMerge"].empty()) {
      timeMerge = make_shared<string>(boost::any_cast<string>(m["TimeMerge"]));
    }
  }


  virtual ~DescribeDomainBpsDataRequest() = default;
};
class DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> domesticL2Value{};
  shared_ptr<string> domesticValue{};
  shared_ptr<string> dynamicDomesticValue{};
  shared_ptr<string> dynamicOverseasValue{};
  shared_ptr<string> dynamicValue{};
  shared_ptr<string> l2Value{};
  shared_ptr<string> overseasL2Value{};
  shared_ptr<string> overseasValue{};
  shared_ptr<string> staticDomesticValue{};
  shared_ptr<string> staticOverseasValue{};
  shared_ptr<string> staticValue{};
  shared_ptr<string> timeStamp{};
  shared_ptr<string> value{};

  DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() {}

  explicit DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domesticL2Value) {
      res["DomesticL2Value"] = boost::any(*domesticL2Value);
    }
    if (domesticValue) {
      res["DomesticValue"] = boost::any(*domesticValue);
    }
    if (dynamicDomesticValue) {
      res["DynamicDomesticValue"] = boost::any(*dynamicDomesticValue);
    }
    if (dynamicOverseasValue) {
      res["DynamicOverseasValue"] = boost::any(*dynamicOverseasValue);
    }
    if (dynamicValue) {
      res["DynamicValue"] = boost::any(*dynamicValue);
    }
    if (l2Value) {
      res["L2Value"] = boost::any(*l2Value);
    }
    if (overseasL2Value) {
      res["OverseasL2Value"] = boost::any(*overseasL2Value);
    }
    if (overseasValue) {
      res["OverseasValue"] = boost::any(*overseasValue);
    }
    if (staticDomesticValue) {
      res["StaticDomesticValue"] = boost::any(*staticDomesticValue);
    }
    if (staticOverseasValue) {
      res["StaticOverseasValue"] = boost::any(*staticOverseasValue);
    }
    if (staticValue) {
      res["StaticValue"] = boost::any(*staticValue);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomesticL2Value") != m.end() && !m["DomesticL2Value"].empty()) {
      domesticL2Value = make_shared<string>(boost::any_cast<string>(m["DomesticL2Value"]));
    }
    if (m.find("DomesticValue") != m.end() && !m["DomesticValue"].empty()) {
      domesticValue = make_shared<string>(boost::any_cast<string>(m["DomesticValue"]));
    }
    if (m.find("DynamicDomesticValue") != m.end() && !m["DynamicDomesticValue"].empty()) {
      dynamicDomesticValue = make_shared<string>(boost::any_cast<string>(m["DynamicDomesticValue"]));
    }
    if (m.find("DynamicOverseasValue") != m.end() && !m["DynamicOverseasValue"].empty()) {
      dynamicOverseasValue = make_shared<string>(boost::any_cast<string>(m["DynamicOverseasValue"]));
    }
    if (m.find("DynamicValue") != m.end() && !m["DynamicValue"].empty()) {
      dynamicValue = make_shared<string>(boost::any_cast<string>(m["DynamicValue"]));
    }
    if (m.find("L2Value") != m.end() && !m["L2Value"].empty()) {
      l2Value = make_shared<string>(boost::any_cast<string>(m["L2Value"]));
    }
    if (m.find("OverseasL2Value") != m.end() && !m["OverseasL2Value"].empty()) {
      overseasL2Value = make_shared<string>(boost::any_cast<string>(m["OverseasL2Value"]));
    }
    if (m.find("OverseasValue") != m.end() && !m["OverseasValue"].empty()) {
      overseasValue = make_shared<string>(boost::any_cast<string>(m["OverseasValue"]));
    }
    if (m.find("StaticDomesticValue") != m.end() && !m["StaticDomesticValue"].empty()) {
      staticDomesticValue = make_shared<string>(boost::any_cast<string>(m["StaticDomesticValue"]));
    }
    if (m.find("StaticOverseasValue") != m.end() && !m["StaticOverseasValue"].empty()) {
      staticOverseasValue = make_shared<string>(boost::any_cast<string>(m["StaticOverseasValue"]));
    }
    if (m.find("StaticValue") != m.end() && !m["StaticValue"].empty()) {
      staticValue = make_shared<string>(boost::any_cast<string>(m["StaticValue"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() = default;
};
class DescribeDomainBpsDataResponseBodyBpsDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>> dataModule{};

  DescribeDomainBpsDataResponseBodyBpsDataPerInterval() {}

  explicit DescribeDomainBpsDataResponseBodyBpsDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainBpsDataResponseBodyBpsDataPerInterval() = default;
};
class DescribeDomainBpsDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDomainBpsDataResponseBodyBpsDataPerInterval> bpsDataPerInterval{};
  shared_ptr<string> dataInterval{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ispName{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationName{};
  shared_ptr<string> locationNameEn{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDomainBpsDataResponseBody() {}

  explicit DescribeDomainBpsDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bpsDataPerInterval) {
      res["BpsDataPerInterval"] = bpsDataPerInterval ? boost::any(bpsDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ispName) {
      res["IspName"] = boost::any(*ispName);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationName) {
      res["LocationName"] = boost::any(*locationName);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BpsDataPerInterval") != m.end() && !m["BpsDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["BpsDataPerInterval"].type()) {
        DescribeDomainBpsDataResponseBodyBpsDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BpsDataPerInterval"]));
        bpsDataPerInterval = make_shared<DescribeDomainBpsDataResponseBodyBpsDataPerInterval>(model1);
      }
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IspName") != m.end() && !m["IspName"].empty()) {
      ispName = make_shared<string>(boost::any_cast<string>(m["IspName"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationName") != m.end() && !m["LocationName"].empty()) {
      locationName = make_shared<string>(boost::any_cast<string>(m["LocationName"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainBpsDataResponseBody() = default;
};
class DescribeDomainBpsDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainBpsDataResponseBody> body{};

  DescribeDomainBpsDataResponse() {}

  explicit DescribeDomainBpsDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainBpsDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainBpsDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainBpsDataResponse() = default;
};
class DescribeDomainBpsDataByTimeStampRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> ispNames{};
  shared_ptr<string> locationNames{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> timePoint{};

  DescribeDomainBpsDataByTimeStampRequest() {}

  explicit DescribeDomainBpsDataByTimeStampRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (ispNames) {
      res["IspNames"] = boost::any(*ispNames);
    }
    if (locationNames) {
      res["LocationNames"] = boost::any(*locationNames);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (timePoint) {
      res["TimePoint"] = boost::any(*timePoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("IspNames") != m.end() && !m["IspNames"].empty()) {
      ispNames = make_shared<string>(boost::any_cast<string>(m["IspNames"]));
    }
    if (m.find("LocationNames") != m.end() && !m["LocationNames"].empty()) {
      locationNames = make_shared<string>(boost::any_cast<string>(m["LocationNames"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TimePoint") != m.end() && !m["TimePoint"].empty()) {
      timePoint = make_shared<string>(boost::any_cast<string>(m["TimePoint"]));
    }
  }


  virtual ~DescribeDomainBpsDataByTimeStampRequest() = default;
};
class DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel : public Darabonba::Model {
public:
  shared_ptr<long> bps{};
  shared_ptr<string> ispName{};
  shared_ptr<string> locationName{};
  shared_ptr<string> timeStamp{};

  DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel() {}

  explicit DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    if (ispName) {
      res["IspName"] = boost::any(*ispName);
    }
    if (locationName) {
      res["LocationName"] = boost::any(*locationName);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<long>(boost::any_cast<long>(m["Bps"]));
    }
    if (m.find("IspName") != m.end() && !m["IspName"].empty()) {
      ispName = make_shared<string>(boost::any_cast<string>(m["IspName"]));
    }
    if (m.find("LocationName") != m.end() && !m["LocationName"].empty()) {
      locationName = make_shared<string>(boost::any_cast<string>(m["LocationName"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel() = default;
};
class DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel>> bpsDataModel{};

  DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList() {}

  explicit DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bpsDataModel) {
      vector<boost::any> temp1;
      for(auto item1:*bpsDataModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BpsDataModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BpsDataModel") != m.end() && !m["BpsDataModel"].empty()) {
      if (typeid(vector<boost::any>) == m["BpsDataModel"].type()) {
        vector<DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BpsDataModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bpsDataModel = make_shared<vector<DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList() = default;
};
class DescribeDomainBpsDataByTimeStampResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList> bpsDataList{};
  shared_ptr<string> domainName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> timeStamp{};

  DescribeDomainBpsDataByTimeStampResponseBody() {}

  explicit DescribeDomainBpsDataByTimeStampResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bpsDataList) {
      res["BpsDataList"] = bpsDataList ? boost::any(bpsDataList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BpsDataList") != m.end() && !m["BpsDataList"].empty()) {
      if (typeid(map<string, boost::any>) == m["BpsDataList"].type()) {
        DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BpsDataList"]));
        bpsDataList = make_shared<DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList>(model1);
      }
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeDomainBpsDataByTimeStampResponseBody() = default;
};
class DescribeDomainBpsDataByTimeStampResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainBpsDataByTimeStampResponseBody> body{};

  DescribeDomainBpsDataByTimeStampResponse() {}

  explicit DescribeDomainBpsDataByTimeStampResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainBpsDataByTimeStampResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainBpsDataByTimeStampResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainBpsDataByTimeStampResponse() = default;
};
class DescribeDomainFileSizeProportionDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> startTime{};

  DescribeDomainFileSizeProportionDataRequest() {}

  explicit DescribeDomainFileSizeProportionDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainFileSizeProportionDataRequest() = default;
};
class DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageDataValueFileSizeProportionData : public Darabonba::Model {
public:
  shared_ptr<string> fileSize{};
  shared_ptr<string> proportion{};

  DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageDataValueFileSizeProportionData() {}

  explicit DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageDataValueFileSizeProportionData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (proportion) {
      res["Proportion"] = boost::any(*proportion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<string>(boost::any_cast<string>(m["FileSize"]));
    }
    if (m.find("Proportion") != m.end() && !m["Proportion"].empty()) {
      proportion = make_shared<string>(boost::any_cast<string>(m["Proportion"]));
    }
  }


  virtual ~DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageDataValueFileSizeProportionData() = default;
};
class DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageDataValue : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageDataValueFileSizeProportionData>> fileSizeProportionData{};

  DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageDataValue() {}

  explicit DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageDataValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSizeProportionData) {
      vector<boost::any> temp1;
      for(auto item1:*fileSizeProportionData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileSizeProportionData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSizeProportionData") != m.end() && !m["FileSizeProportionData"].empty()) {
      if (typeid(vector<boost::any>) == m["FileSizeProportionData"].type()) {
        vector<DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageDataValueFileSizeProportionData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileSizeProportionData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageDataValueFileSizeProportionData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileSizeProportionData = make_shared<vector<DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageDataValueFileSizeProportionData>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageDataValue() = default;
};
class DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageData : public Darabonba::Model {
public:
  shared_ptr<string> timeStamp{};
  shared_ptr<DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageDataValue> value{};

  DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageData() {}

  explicit DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (value) {
      res["Value"] = value ? boost::any(value->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(map<string, boost::any>) == m["Value"].type()) {
        DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageDataValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Value"]));
        value = make_shared<DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageDataValue>(model1);
      }
    }
  }


  virtual ~DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageData() = default;
};
class DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageData>> usageData{};

  DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataInterval() {}

  explicit DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (usageData) {
      vector<boost::any> temp1;
      for(auto item1:*usageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UsageData") != m.end() && !m["UsageData"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageData"].type()) {
        vector<DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageData = make_shared<vector<DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataIntervalUsageData>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataInterval() = default;
};
class DescribeDomainFileSizeProportionDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataInterval{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataInterval> fileSizeProportionDataInterval{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDomainFileSizeProportionDataResponseBody() {}

  explicit DescribeDomainFileSizeProportionDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fileSizeProportionDataInterval) {
      res["FileSizeProportionDataInterval"] = fileSizeProportionDataInterval ? boost::any(fileSizeProportionDataInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FileSizeProportionDataInterval") != m.end() && !m["FileSizeProportionDataInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileSizeProportionDataInterval"].type()) {
        DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileSizeProportionDataInterval"]));
        fileSizeProportionDataInterval = make_shared<DescribeDomainFileSizeProportionDataResponseBodyFileSizeProportionDataInterval>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainFileSizeProportionDataResponseBody() = default;
};
class DescribeDomainFileSizeProportionDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainFileSizeProportionDataResponseBody> body{};

  DescribeDomainFileSizeProportionDataResponse() {}

  explicit DescribeDomainFileSizeProportionDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainFileSizeProportionDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainFileSizeProportionDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainFileSizeProportionDataResponse() = default;
};
class DescribeDomainFlowDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> domainType{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timeMerge{};

  DescribeDomainFlowDataRequest() {}

  explicit DescribeDomainFlowDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timeMerge) {
      res["TimeMerge"] = boost::any(*timeMerge);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TimeMerge") != m.end() && !m["TimeMerge"].empty()) {
      timeMerge = make_shared<string>(boost::any_cast<string>(m["TimeMerge"]));
    }
  }


  virtual ~DescribeDomainFlowDataRequest() = default;
};
class DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> domesticValue{};
  shared_ptr<string> dynamicDomesticValue{};
  shared_ptr<string> dynamicOverseasValue{};
  shared_ptr<string> dynamicValue{};
  shared_ptr<string> overseasValue{};
  shared_ptr<string> staticDomesticValue{};
  shared_ptr<string> staticOverseasValue{};
  shared_ptr<string> staticValue{};
  shared_ptr<string> timeStamp{};
  shared_ptr<string> value{};

  DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule() {}

  explicit DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domesticValue) {
      res["DomesticValue"] = boost::any(*domesticValue);
    }
    if (dynamicDomesticValue) {
      res["DynamicDomesticValue"] = boost::any(*dynamicDomesticValue);
    }
    if (dynamicOverseasValue) {
      res["DynamicOverseasValue"] = boost::any(*dynamicOverseasValue);
    }
    if (dynamicValue) {
      res["DynamicValue"] = boost::any(*dynamicValue);
    }
    if (overseasValue) {
      res["OverseasValue"] = boost::any(*overseasValue);
    }
    if (staticDomesticValue) {
      res["StaticDomesticValue"] = boost::any(*staticDomesticValue);
    }
    if (staticOverseasValue) {
      res["StaticOverseasValue"] = boost::any(*staticOverseasValue);
    }
    if (staticValue) {
      res["StaticValue"] = boost::any(*staticValue);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomesticValue") != m.end() && !m["DomesticValue"].empty()) {
      domesticValue = make_shared<string>(boost::any_cast<string>(m["DomesticValue"]));
    }
    if (m.find("DynamicDomesticValue") != m.end() && !m["DynamicDomesticValue"].empty()) {
      dynamicDomesticValue = make_shared<string>(boost::any_cast<string>(m["DynamicDomesticValue"]));
    }
    if (m.find("DynamicOverseasValue") != m.end() && !m["DynamicOverseasValue"].empty()) {
      dynamicOverseasValue = make_shared<string>(boost::any_cast<string>(m["DynamicOverseasValue"]));
    }
    if (m.find("DynamicValue") != m.end() && !m["DynamicValue"].empty()) {
      dynamicValue = make_shared<string>(boost::any_cast<string>(m["DynamicValue"]));
    }
    if (m.find("OverseasValue") != m.end() && !m["OverseasValue"].empty()) {
      overseasValue = make_shared<string>(boost::any_cast<string>(m["OverseasValue"]));
    }
    if (m.find("StaticDomesticValue") != m.end() && !m["StaticDomesticValue"].empty()) {
      staticDomesticValue = make_shared<string>(boost::any_cast<string>(m["StaticDomesticValue"]));
    }
    if (m.find("StaticOverseasValue") != m.end() && !m["StaticOverseasValue"].empty()) {
      staticOverseasValue = make_shared<string>(boost::any_cast<string>(m["StaticOverseasValue"]));
    }
    if (m.find("StaticValue") != m.end() && !m["StaticValue"].empty()) {
      staticValue = make_shared<string>(boost::any_cast<string>(m["StaticValue"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule() = default;
};
class DescribeDomainFlowDataResponseBodyFlowDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule>> dataModule{};

  DescribeDomainFlowDataResponseBodyFlowDataPerInterval() {}

  explicit DescribeDomainFlowDataResponseBodyFlowDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainFlowDataResponseBodyFlowDataPerInterval() = default;
};
class DescribeDomainFlowDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataInterval{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<DescribeDomainFlowDataResponseBodyFlowDataPerInterval> flowDataPerInterval{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDomainFlowDataResponseBody() {}

  explicit DescribeDomainFlowDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (flowDataPerInterval) {
      res["FlowDataPerInterval"] = flowDataPerInterval ? boost::any(flowDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FlowDataPerInterval") != m.end() && !m["FlowDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["FlowDataPerInterval"].type()) {
        DescribeDomainFlowDataResponseBodyFlowDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FlowDataPerInterval"]));
        flowDataPerInterval = make_shared<DescribeDomainFlowDataResponseBodyFlowDataPerInterval>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainFlowDataResponseBody() = default;
};
class DescribeDomainFlowDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainFlowDataResponseBody> body{};

  DescribeDomainFlowDataResponse() {}

  explicit DescribeDomainFlowDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainFlowDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainFlowDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainFlowDataResponse() = default;
};
class DescribeDomainHitRateDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> startTime{};

  DescribeDomainHitRateDataRequest() {}

  explicit DescribeDomainHitRateDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainHitRateDataRequest() = default;
};
class DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> timeStamp{};
  shared_ptr<string> value{};

  DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule() {}

  explicit DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule() = default;
};
class DescribeDomainHitRateDataResponseBodyHitRateInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule>> dataModule{};

  DescribeDomainHitRateDataResponseBodyHitRateInterval() {}

  explicit DescribeDomainHitRateDataResponseBodyHitRateInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainHitRateDataResponseBodyHitRateInterval() = default;
};
class DescribeDomainHitRateDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataInterval{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<DescribeDomainHitRateDataResponseBodyHitRateInterval> hitRateInterval{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDomainHitRateDataResponseBody() {}

  explicit DescribeDomainHitRateDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (hitRateInterval) {
      res["HitRateInterval"] = hitRateInterval ? boost::any(hitRateInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("HitRateInterval") != m.end() && !m["HitRateInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["HitRateInterval"].type()) {
        DescribeDomainHitRateDataResponseBodyHitRateInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HitRateInterval"]));
        hitRateInterval = make_shared<DescribeDomainHitRateDataResponseBodyHitRateInterval>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainHitRateDataResponseBody() = default;
};
class DescribeDomainHitRateDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainHitRateDataResponseBody> body{};

  DescribeDomainHitRateDataResponse() {}

  explicit DescribeDomainHitRateDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainHitRateDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainHitRateDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainHitRateDataResponse() = default;
};
class DescribeDomainHttpCodeDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timeMerge{};

  DescribeDomainHttpCodeDataRequest() {}

  explicit DescribeDomainHttpCodeDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timeMerge) {
      res["TimeMerge"] = boost::any(*timeMerge);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TimeMerge") != m.end() && !m["TimeMerge"].empty()) {
      timeMerge = make_shared<string>(boost::any_cast<string>(m["TimeMerge"]));
    }
  }


  virtual ~DescribeDomainHttpCodeDataRequest() = default;
};
class DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> count{};
  shared_ptr<string> proportion{};

  DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData() {}

  explicit DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (proportion) {
      res["Proportion"] = boost::any(*proportion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("Proportion") != m.end() && !m["Proportion"].empty()) {
      proportion = make_shared<string>(boost::any_cast<string>(m["Proportion"]));
    }
  }


  virtual ~DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData() = default;
};
class DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData>> codeProportionData{};

  DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue() {}

  explicit DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeProportionData) {
      vector<boost::any> temp1;
      for(auto item1:*codeProportionData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CodeProportionData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeProportionData") != m.end() && !m["CodeProportionData"].empty()) {
      if (typeid(vector<boost::any>) == m["CodeProportionData"].type()) {
        vector<DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CodeProportionData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        codeProportionData = make_shared<vector<DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue() = default;
};
class DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData : public Darabonba::Model {
public:
  shared_ptr<string> timeStamp{};
  shared_ptr<DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue> value{};

  DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData() {}

  explicit DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (value) {
      res["Value"] = value ? boost::any(value->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(map<string, boost::any>) == m["Value"].type()) {
        DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Value"]));
        value = make_shared<DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue>(model1);
      }
    }
  }


  virtual ~DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData() = default;
};
class DescribeDomainHttpCodeDataResponseBodyHttpCodeData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData>> usageData{};

  DescribeDomainHttpCodeDataResponseBodyHttpCodeData() {}

  explicit DescribeDomainHttpCodeDataResponseBodyHttpCodeData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (usageData) {
      vector<boost::any> temp1;
      for(auto item1:*usageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UsageData") != m.end() && !m["UsageData"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageData"].type()) {
        vector<DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageData = make_shared<vector<DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainHttpCodeDataResponseBodyHttpCodeData() = default;
};
class DescribeDomainHttpCodeDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataInterval{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<DescribeDomainHttpCodeDataResponseBodyHttpCodeData> httpCodeData{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDomainHttpCodeDataResponseBody() {}

  explicit DescribeDomainHttpCodeDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (httpCodeData) {
      res["HttpCodeData"] = httpCodeData ? boost::any(httpCodeData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("HttpCodeData") != m.end() && !m["HttpCodeData"].empty()) {
      if (typeid(map<string, boost::any>) == m["HttpCodeData"].type()) {
        DescribeDomainHttpCodeDataResponseBodyHttpCodeData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HttpCodeData"]));
        httpCodeData = make_shared<DescribeDomainHttpCodeDataResponseBodyHttpCodeData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainHttpCodeDataResponseBody() = default;
};
class DescribeDomainHttpCodeDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainHttpCodeDataResponseBody> body{};

  DescribeDomainHttpCodeDataResponse() {}

  explicit DescribeDomainHttpCodeDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainHttpCodeDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainHttpCodeDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainHttpCodeDataResponse() = default;
};
class DescribeDomainISPDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> startTime{};

  DescribeDomainISPDataRequest() {}

  explicit DescribeDomainISPDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainISPDataRequest() = default;
};
class DescribeDomainISPDataResponseBodyValueISPProportionData : public Darabonba::Model {
public:
  shared_ptr<string> avgObjectSize{};
  shared_ptr<string> avgResponseRate{};
  shared_ptr<string> avgResponseTime{};
  shared_ptr<string> bps{};
  shared_ptr<string> byteHitRate{};
  shared_ptr<string> bytesProportion{};
  shared_ptr<string> ISP{};
  shared_ptr<string> ispEname{};
  shared_ptr<string> proportion{};
  shared_ptr<string> qps{};
  shared_ptr<string> reqErrRate{};
  shared_ptr<string> reqHitRate{};
  shared_ptr<string> totalBytes{};
  shared_ptr<string> totalQuery{};

  DescribeDomainISPDataResponseBodyValueISPProportionData() {}

  explicit DescribeDomainISPDataResponseBodyValueISPProportionData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avgObjectSize) {
      res["AvgObjectSize"] = boost::any(*avgObjectSize);
    }
    if (avgResponseRate) {
      res["AvgResponseRate"] = boost::any(*avgResponseRate);
    }
    if (avgResponseTime) {
      res["AvgResponseTime"] = boost::any(*avgResponseTime);
    }
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    if (byteHitRate) {
      res["ByteHitRate"] = boost::any(*byteHitRate);
    }
    if (bytesProportion) {
      res["BytesProportion"] = boost::any(*bytesProportion);
    }
    if (ISP) {
      res["ISP"] = boost::any(*ISP);
    }
    if (ispEname) {
      res["IspEname"] = boost::any(*ispEname);
    }
    if (proportion) {
      res["Proportion"] = boost::any(*proportion);
    }
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (reqErrRate) {
      res["ReqErrRate"] = boost::any(*reqErrRate);
    }
    if (reqHitRate) {
      res["ReqHitRate"] = boost::any(*reqHitRate);
    }
    if (totalBytes) {
      res["TotalBytes"] = boost::any(*totalBytes);
    }
    if (totalQuery) {
      res["TotalQuery"] = boost::any(*totalQuery);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvgObjectSize") != m.end() && !m["AvgObjectSize"].empty()) {
      avgObjectSize = make_shared<string>(boost::any_cast<string>(m["AvgObjectSize"]));
    }
    if (m.find("AvgResponseRate") != m.end() && !m["AvgResponseRate"].empty()) {
      avgResponseRate = make_shared<string>(boost::any_cast<string>(m["AvgResponseRate"]));
    }
    if (m.find("AvgResponseTime") != m.end() && !m["AvgResponseTime"].empty()) {
      avgResponseTime = make_shared<string>(boost::any_cast<string>(m["AvgResponseTime"]));
    }
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<string>(boost::any_cast<string>(m["Bps"]));
    }
    if (m.find("ByteHitRate") != m.end() && !m["ByteHitRate"].empty()) {
      byteHitRate = make_shared<string>(boost::any_cast<string>(m["ByteHitRate"]));
    }
    if (m.find("BytesProportion") != m.end() && !m["BytesProportion"].empty()) {
      bytesProportion = make_shared<string>(boost::any_cast<string>(m["BytesProportion"]));
    }
    if (m.find("ISP") != m.end() && !m["ISP"].empty()) {
      ISP = make_shared<string>(boost::any_cast<string>(m["ISP"]));
    }
    if (m.find("IspEname") != m.end() && !m["IspEname"].empty()) {
      ispEname = make_shared<string>(boost::any_cast<string>(m["IspEname"]));
    }
    if (m.find("Proportion") != m.end() && !m["Proportion"].empty()) {
      proportion = make_shared<string>(boost::any_cast<string>(m["Proportion"]));
    }
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<string>(boost::any_cast<string>(m["Qps"]));
    }
    if (m.find("ReqErrRate") != m.end() && !m["ReqErrRate"].empty()) {
      reqErrRate = make_shared<string>(boost::any_cast<string>(m["ReqErrRate"]));
    }
    if (m.find("ReqHitRate") != m.end() && !m["ReqHitRate"].empty()) {
      reqHitRate = make_shared<string>(boost::any_cast<string>(m["ReqHitRate"]));
    }
    if (m.find("TotalBytes") != m.end() && !m["TotalBytes"].empty()) {
      totalBytes = make_shared<string>(boost::any_cast<string>(m["TotalBytes"]));
    }
    if (m.find("TotalQuery") != m.end() && !m["TotalQuery"].empty()) {
      totalQuery = make_shared<string>(boost::any_cast<string>(m["TotalQuery"]));
    }
  }


  virtual ~DescribeDomainISPDataResponseBodyValueISPProportionData() = default;
};
class DescribeDomainISPDataResponseBodyValue : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainISPDataResponseBodyValueISPProportionData>> ISPProportionData{};

  DescribeDomainISPDataResponseBodyValue() {}

  explicit DescribeDomainISPDataResponseBodyValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ISPProportionData) {
      vector<boost::any> temp1;
      for(auto item1:*ISPProportionData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ISPProportionData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ISPProportionData") != m.end() && !m["ISPProportionData"].empty()) {
      if (typeid(vector<boost::any>) == m["ISPProportionData"].type()) {
        vector<DescribeDomainISPDataResponseBodyValueISPProportionData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ISPProportionData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainISPDataResponseBodyValueISPProportionData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ISPProportionData = make_shared<vector<DescribeDomainISPDataResponseBodyValueISPProportionData>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainISPDataResponseBodyValue() = default;
};
class DescribeDomainISPDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataInterval{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<DescribeDomainISPDataResponseBodyValue> value{};

  DescribeDomainISPDataResponseBody() {}

  explicit DescribeDomainISPDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (value) {
      res["Value"] = value ? boost::any(value->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(map<string, boost::any>) == m["Value"].type()) {
        DescribeDomainISPDataResponseBodyValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Value"]));
        value = make_shared<DescribeDomainISPDataResponseBodyValue>(model1);
      }
    }
  }


  virtual ~DescribeDomainISPDataResponseBody() = default;
};
class DescribeDomainISPDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainISPDataResponseBody> body{};

  DescribeDomainISPDataResponse() {}

  explicit DescribeDomainISPDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainISPDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainISPDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainISPDataResponse() = default;
};
class DescribeDomainQpsDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> domainType{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timeMerge{};

  DescribeDomainQpsDataRequest() {}

  explicit DescribeDomainQpsDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timeMerge) {
      res["TimeMerge"] = boost::any(*timeMerge);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TimeMerge") != m.end() && !m["TimeMerge"].empty()) {
      timeMerge = make_shared<string>(boost::any_cast<string>(m["TimeMerge"]));
    }
  }


  virtual ~DescribeDomainQpsDataRequest() = default;
};
class DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> accDomesticValue{};
  shared_ptr<string> accOverseasValue{};
  shared_ptr<string> accValue{};
  shared_ptr<string> domesticValue{};
  shared_ptr<string> dynamicDomesticValue{};
  shared_ptr<string> dynamicOverseasValue{};
  shared_ptr<string> dynamicValue{};
  shared_ptr<string> overseasValue{};
  shared_ptr<string> staticDomesticValue{};
  shared_ptr<string> staticOverseasValue{};
  shared_ptr<string> staticValue{};
  shared_ptr<string> timeStamp{};
  shared_ptr<string> value{};

  DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule() {}

  explicit DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accDomesticValue) {
      res["AccDomesticValue"] = boost::any(*accDomesticValue);
    }
    if (accOverseasValue) {
      res["AccOverseasValue"] = boost::any(*accOverseasValue);
    }
    if (accValue) {
      res["AccValue"] = boost::any(*accValue);
    }
    if (domesticValue) {
      res["DomesticValue"] = boost::any(*domesticValue);
    }
    if (dynamicDomesticValue) {
      res["DynamicDomesticValue"] = boost::any(*dynamicDomesticValue);
    }
    if (dynamicOverseasValue) {
      res["DynamicOverseasValue"] = boost::any(*dynamicOverseasValue);
    }
    if (dynamicValue) {
      res["DynamicValue"] = boost::any(*dynamicValue);
    }
    if (overseasValue) {
      res["OverseasValue"] = boost::any(*overseasValue);
    }
    if (staticDomesticValue) {
      res["StaticDomesticValue"] = boost::any(*staticDomesticValue);
    }
    if (staticOverseasValue) {
      res["StaticOverseasValue"] = boost::any(*staticOverseasValue);
    }
    if (staticValue) {
      res["StaticValue"] = boost::any(*staticValue);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccDomesticValue") != m.end() && !m["AccDomesticValue"].empty()) {
      accDomesticValue = make_shared<string>(boost::any_cast<string>(m["AccDomesticValue"]));
    }
    if (m.find("AccOverseasValue") != m.end() && !m["AccOverseasValue"].empty()) {
      accOverseasValue = make_shared<string>(boost::any_cast<string>(m["AccOverseasValue"]));
    }
    if (m.find("AccValue") != m.end() && !m["AccValue"].empty()) {
      accValue = make_shared<string>(boost::any_cast<string>(m["AccValue"]));
    }
    if (m.find("DomesticValue") != m.end() && !m["DomesticValue"].empty()) {
      domesticValue = make_shared<string>(boost::any_cast<string>(m["DomesticValue"]));
    }
    if (m.find("DynamicDomesticValue") != m.end() && !m["DynamicDomesticValue"].empty()) {
      dynamicDomesticValue = make_shared<string>(boost::any_cast<string>(m["DynamicDomesticValue"]));
    }
    if (m.find("DynamicOverseasValue") != m.end() && !m["DynamicOverseasValue"].empty()) {
      dynamicOverseasValue = make_shared<string>(boost::any_cast<string>(m["DynamicOverseasValue"]));
    }
    if (m.find("DynamicValue") != m.end() && !m["DynamicValue"].empty()) {
      dynamicValue = make_shared<string>(boost::any_cast<string>(m["DynamicValue"]));
    }
    if (m.find("OverseasValue") != m.end() && !m["OverseasValue"].empty()) {
      overseasValue = make_shared<string>(boost::any_cast<string>(m["OverseasValue"]));
    }
    if (m.find("StaticDomesticValue") != m.end() && !m["StaticDomesticValue"].empty()) {
      staticDomesticValue = make_shared<string>(boost::any_cast<string>(m["StaticDomesticValue"]));
    }
    if (m.find("StaticOverseasValue") != m.end() && !m["StaticOverseasValue"].empty()) {
      staticOverseasValue = make_shared<string>(boost::any_cast<string>(m["StaticOverseasValue"]));
    }
    if (m.find("StaticValue") != m.end() && !m["StaticValue"].empty()) {
      staticValue = make_shared<string>(boost::any_cast<string>(m["StaticValue"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule() = default;
};
class DescribeDomainQpsDataResponseBodyQpsDataInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule>> dataModule{};

  DescribeDomainQpsDataResponseBodyQpsDataInterval() {}

  explicit DescribeDomainQpsDataResponseBodyQpsDataInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainQpsDataResponseBodyQpsDataInterval() = default;
};
class DescribeDomainQpsDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataInterval{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<DescribeDomainQpsDataResponseBodyQpsDataInterval> qpsDataInterval{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDomainQpsDataResponseBody() {}

  explicit DescribeDomainQpsDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (qpsDataInterval) {
      res["QpsDataInterval"] = qpsDataInterval ? boost::any(qpsDataInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("QpsDataInterval") != m.end() && !m["QpsDataInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["QpsDataInterval"].type()) {
        DescribeDomainQpsDataResponseBodyQpsDataInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QpsDataInterval"]));
        qpsDataInterval = make_shared<DescribeDomainQpsDataResponseBodyQpsDataInterval>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainQpsDataResponseBody() = default;
};
class DescribeDomainQpsDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainQpsDataResponseBody> body{};

  DescribeDomainQpsDataResponse() {}

  explicit DescribeDomainQpsDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainQpsDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainQpsDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainQpsDataResponse() = default;
};
class DescribeDomainRegionDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> startTime{};

  DescribeDomainRegionDataRequest() {}

  explicit DescribeDomainRegionDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainRegionDataRequest() = default;
};
class DescribeDomainRegionDataResponseBodyValueRegionProportionData : public Darabonba::Model {
public:
  shared_ptr<string> avgObjectSize{};
  shared_ptr<string> avgResponseRate{};
  shared_ptr<string> avgResponseTime{};
  shared_ptr<string> bps{};
  shared_ptr<string> byteHitRate{};
  shared_ptr<string> bytesProportion{};
  shared_ptr<string> proportion{};
  shared_ptr<string> qps{};
  shared_ptr<string> region{};
  shared_ptr<string> regionEname{};
  shared_ptr<string> reqErrRate{};
  shared_ptr<string> reqHitRate{};
  shared_ptr<string> totalBytes{};
  shared_ptr<string> totalQuery{};

  DescribeDomainRegionDataResponseBodyValueRegionProportionData() {}

  explicit DescribeDomainRegionDataResponseBodyValueRegionProportionData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avgObjectSize) {
      res["AvgObjectSize"] = boost::any(*avgObjectSize);
    }
    if (avgResponseRate) {
      res["AvgResponseRate"] = boost::any(*avgResponseRate);
    }
    if (avgResponseTime) {
      res["AvgResponseTime"] = boost::any(*avgResponseTime);
    }
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    if (byteHitRate) {
      res["ByteHitRate"] = boost::any(*byteHitRate);
    }
    if (bytesProportion) {
      res["BytesProportion"] = boost::any(*bytesProportion);
    }
    if (proportion) {
      res["Proportion"] = boost::any(*proportion);
    }
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (regionEname) {
      res["RegionEname"] = boost::any(*regionEname);
    }
    if (reqErrRate) {
      res["ReqErrRate"] = boost::any(*reqErrRate);
    }
    if (reqHitRate) {
      res["ReqHitRate"] = boost::any(*reqHitRate);
    }
    if (totalBytes) {
      res["TotalBytes"] = boost::any(*totalBytes);
    }
    if (totalQuery) {
      res["TotalQuery"] = boost::any(*totalQuery);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvgObjectSize") != m.end() && !m["AvgObjectSize"].empty()) {
      avgObjectSize = make_shared<string>(boost::any_cast<string>(m["AvgObjectSize"]));
    }
    if (m.find("AvgResponseRate") != m.end() && !m["AvgResponseRate"].empty()) {
      avgResponseRate = make_shared<string>(boost::any_cast<string>(m["AvgResponseRate"]));
    }
    if (m.find("AvgResponseTime") != m.end() && !m["AvgResponseTime"].empty()) {
      avgResponseTime = make_shared<string>(boost::any_cast<string>(m["AvgResponseTime"]));
    }
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<string>(boost::any_cast<string>(m["Bps"]));
    }
    if (m.find("ByteHitRate") != m.end() && !m["ByteHitRate"].empty()) {
      byteHitRate = make_shared<string>(boost::any_cast<string>(m["ByteHitRate"]));
    }
    if (m.find("BytesProportion") != m.end() && !m["BytesProportion"].empty()) {
      bytesProportion = make_shared<string>(boost::any_cast<string>(m["BytesProportion"]));
    }
    if (m.find("Proportion") != m.end() && !m["Proportion"].empty()) {
      proportion = make_shared<string>(boost::any_cast<string>(m["Proportion"]));
    }
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<string>(boost::any_cast<string>(m["Qps"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RegionEname") != m.end() && !m["RegionEname"].empty()) {
      regionEname = make_shared<string>(boost::any_cast<string>(m["RegionEname"]));
    }
    if (m.find("ReqErrRate") != m.end() && !m["ReqErrRate"].empty()) {
      reqErrRate = make_shared<string>(boost::any_cast<string>(m["ReqErrRate"]));
    }
    if (m.find("ReqHitRate") != m.end() && !m["ReqHitRate"].empty()) {
      reqHitRate = make_shared<string>(boost::any_cast<string>(m["ReqHitRate"]));
    }
    if (m.find("TotalBytes") != m.end() && !m["TotalBytes"].empty()) {
      totalBytes = make_shared<string>(boost::any_cast<string>(m["TotalBytes"]));
    }
    if (m.find("TotalQuery") != m.end() && !m["TotalQuery"].empty()) {
      totalQuery = make_shared<string>(boost::any_cast<string>(m["TotalQuery"]));
    }
  }


  virtual ~DescribeDomainRegionDataResponseBodyValueRegionProportionData() = default;
};
class DescribeDomainRegionDataResponseBodyValue : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainRegionDataResponseBodyValueRegionProportionData>> regionProportionData{};

  DescribeDomainRegionDataResponseBodyValue() {}

  explicit DescribeDomainRegionDataResponseBodyValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionProportionData) {
      vector<boost::any> temp1;
      for(auto item1:*regionProportionData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionProportionData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionProportionData") != m.end() && !m["RegionProportionData"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionProportionData"].type()) {
        vector<DescribeDomainRegionDataResponseBodyValueRegionProportionData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionProportionData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainRegionDataResponseBodyValueRegionProportionData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionProportionData = make_shared<vector<DescribeDomainRegionDataResponseBodyValueRegionProportionData>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainRegionDataResponseBodyValue() = default;
};
class DescribeDomainRegionDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataInterval{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<DescribeDomainRegionDataResponseBodyValue> value{};

  DescribeDomainRegionDataResponseBody() {}

  explicit DescribeDomainRegionDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (value) {
      res["Value"] = value ? boost::any(value->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(map<string, boost::any>) == m["Value"].type()) {
        DescribeDomainRegionDataResponseBodyValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Value"]));
        value = make_shared<DescribeDomainRegionDataResponseBodyValue>(model1);
      }
    }
  }


  virtual ~DescribeDomainRegionDataResponseBody() = default;
};
class DescribeDomainRegionDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainRegionDataResponseBody> body{};

  DescribeDomainRegionDataResponse() {}

  explicit DescribeDomainRegionDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainRegionDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainRegionDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainRegionDataResponse() = default;
};
class DescribeDomainReqHitRateDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> startTime{};

  DescribeDomainReqHitRateDataRequest() {}

  explicit DescribeDomainReqHitRateDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainReqHitRateDataRequest() = default;
};
class DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> timeStamp{};
  shared_ptr<string> value{};

  DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule() {}

  explicit DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule() = default;
};
class DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule>> dataModule{};

  DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval() {}

  explicit DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval() = default;
};
class DescribeDomainReqHitRateDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataInterval{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval> reqHitRateInterval{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDomainReqHitRateDataResponseBody() {}

  explicit DescribeDomainReqHitRateDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (reqHitRateInterval) {
      res["ReqHitRateInterval"] = reqHitRateInterval ? boost::any(reqHitRateInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ReqHitRateInterval") != m.end() && !m["ReqHitRateInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReqHitRateInterval"].type()) {
        DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReqHitRateInterval"]));
        reqHitRateInterval = make_shared<DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainReqHitRateDataResponseBody() = default;
};
class DescribeDomainReqHitRateDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainReqHitRateDataResponseBody> body{};

  DescribeDomainReqHitRateDataResponse() {}

  explicit DescribeDomainReqHitRateDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainReqHitRateDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainReqHitRateDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainReqHitRateDataResponse() = default;
};
class DescribeDomainSrcBpsDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> fixTimeGap{};
  shared_ptr<string> interval{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timeMerge{};

  DescribeDomainSrcBpsDataRequest() {}

  explicit DescribeDomainSrcBpsDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fixTimeGap) {
      res["FixTimeGap"] = boost::any(*fixTimeGap);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timeMerge) {
      res["TimeMerge"] = boost::any(*timeMerge);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FixTimeGap") != m.end() && !m["FixTimeGap"].empty()) {
      fixTimeGap = make_shared<string>(boost::any_cast<string>(m["FixTimeGap"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TimeMerge") != m.end() && !m["TimeMerge"].empty()) {
      timeMerge = make_shared<string>(boost::any_cast<string>(m["TimeMerge"]));
    }
  }


  virtual ~DescribeDomainSrcBpsDataRequest() = default;
};
class DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> timeStamp{};
  shared_ptr<string> value{};

  DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule() {}

  explicit DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule() = default;
};
class DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule>> dataModule{};

  DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval() {}

  explicit DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval() = default;
};
class DescribeDomainSrcBpsDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataInterval{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval> srcBpsDataPerInterval{};
  shared_ptr<string> startTime{};

  DescribeDomainSrcBpsDataResponseBody() {}

  explicit DescribeDomainSrcBpsDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (srcBpsDataPerInterval) {
      res["SrcBpsDataPerInterval"] = srcBpsDataPerInterval ? boost::any(srcBpsDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SrcBpsDataPerInterval") != m.end() && !m["SrcBpsDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["SrcBpsDataPerInterval"].type()) {
        DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SrcBpsDataPerInterval"]));
        srcBpsDataPerInterval = make_shared<DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval>(model1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainSrcBpsDataResponseBody() = default;
};
class DescribeDomainSrcBpsDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainSrcBpsDataResponseBody> body{};

  DescribeDomainSrcBpsDataResponse() {}

  explicit DescribeDomainSrcBpsDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainSrcBpsDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainSrcBpsDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainSrcBpsDataResponse() = default;
};
class DescribeDomainSrcFlowDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> fixTimeGap{};
  shared_ptr<string> interval{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timeMerge{};

  DescribeDomainSrcFlowDataRequest() {}

  explicit DescribeDomainSrcFlowDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fixTimeGap) {
      res["FixTimeGap"] = boost::any(*fixTimeGap);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timeMerge) {
      res["TimeMerge"] = boost::any(*timeMerge);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FixTimeGap") != m.end() && !m["FixTimeGap"].empty()) {
      fixTimeGap = make_shared<string>(boost::any_cast<string>(m["FixTimeGap"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TimeMerge") != m.end() && !m["TimeMerge"].empty()) {
      timeMerge = make_shared<string>(boost::any_cast<string>(m["TimeMerge"]));
    }
  }


  virtual ~DescribeDomainSrcFlowDataRequest() = default;
};
class DescribeDomainSrcFlowDataResponseBodySrcFlowDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> timeStamp{};
  shared_ptr<string> value{};

  DescribeDomainSrcFlowDataResponseBodySrcFlowDataPerIntervalDataModule() {}

  explicit DescribeDomainSrcFlowDataResponseBodySrcFlowDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDomainSrcFlowDataResponseBodySrcFlowDataPerIntervalDataModule() = default;
};
class DescribeDomainSrcFlowDataResponseBodySrcFlowDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainSrcFlowDataResponseBodySrcFlowDataPerIntervalDataModule>> dataModule{};

  DescribeDomainSrcFlowDataResponseBodySrcFlowDataPerInterval() {}

  explicit DescribeDomainSrcFlowDataResponseBodySrcFlowDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeDomainSrcFlowDataResponseBodySrcFlowDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainSrcFlowDataResponseBodySrcFlowDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeDomainSrcFlowDataResponseBodySrcFlowDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainSrcFlowDataResponseBodySrcFlowDataPerInterval() = default;
};
class DescribeDomainSrcFlowDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataInterval{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDomainSrcFlowDataResponseBodySrcFlowDataPerInterval> srcFlowDataPerInterval{};
  shared_ptr<string> startTime{};

  DescribeDomainSrcFlowDataResponseBody() {}

  explicit DescribeDomainSrcFlowDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (srcFlowDataPerInterval) {
      res["SrcFlowDataPerInterval"] = srcFlowDataPerInterval ? boost::any(srcFlowDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SrcFlowDataPerInterval") != m.end() && !m["SrcFlowDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["SrcFlowDataPerInterval"].type()) {
        DescribeDomainSrcFlowDataResponseBodySrcFlowDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SrcFlowDataPerInterval"]));
        srcFlowDataPerInterval = make_shared<DescribeDomainSrcFlowDataResponseBodySrcFlowDataPerInterval>(model1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainSrcFlowDataResponseBody() = default;
};
class DescribeDomainSrcFlowDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainSrcFlowDataResponseBody> body{};

  DescribeDomainSrcFlowDataResponse() {}

  explicit DescribeDomainSrcFlowDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainSrcFlowDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainSrcFlowDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainSrcFlowDataResponse() = default;
};
class DescribeDomainUvDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> startTime{};

  DescribeDomainUvDataRequest() {}

  explicit DescribeDomainUvDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainUvDataRequest() = default;
};
class DescribeDomainUvDataResponseBodyUvDataIntervalUsageData : public Darabonba::Model {
public:
  shared_ptr<string> timeStamp{};
  shared_ptr<string> value{};

  DescribeDomainUvDataResponseBodyUvDataIntervalUsageData() {}

  explicit DescribeDomainUvDataResponseBodyUvDataIntervalUsageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDomainUvDataResponseBodyUvDataIntervalUsageData() = default;
};
class DescribeDomainUvDataResponseBodyUvDataInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainUvDataResponseBodyUvDataIntervalUsageData>> usageData{};

  DescribeDomainUvDataResponseBodyUvDataInterval() {}

  explicit DescribeDomainUvDataResponseBodyUvDataInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (usageData) {
      vector<boost::any> temp1;
      for(auto item1:*usageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UsageData") != m.end() && !m["UsageData"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageData"].type()) {
        vector<DescribeDomainUvDataResponseBodyUvDataIntervalUsageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainUvDataResponseBodyUvDataIntervalUsageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageData = make_shared<vector<DescribeDomainUvDataResponseBodyUvDataIntervalUsageData>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainUvDataResponseBodyUvDataInterval() = default;
};
class DescribeDomainUvDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataInterval{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<DescribeDomainUvDataResponseBodyUvDataInterval> uvDataInterval{};

  DescribeDomainUvDataResponseBody() {}

  explicit DescribeDomainUvDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (uvDataInterval) {
      res["UvDataInterval"] = uvDataInterval ? boost::any(uvDataInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("UvDataInterval") != m.end() && !m["UvDataInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["UvDataInterval"].type()) {
        DescribeDomainUvDataResponseBodyUvDataInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UvDataInterval"]));
        uvDataInterval = make_shared<DescribeDomainUvDataResponseBodyUvDataInterval>(model1);
      }
    }
  }


  virtual ~DescribeDomainUvDataResponseBody() = default;
};
class DescribeDomainUvDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainUvDataResponseBody> body{};

  DescribeDomainUvDataResponse() {}

  explicit DescribeDomainUvDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainUvDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainUvDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainUvDataResponse() = default;
};
class DescribeDomainsBySourceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> sources{};

  DescribeDomainsBySourceRequest() {}

  explicit DescribeDomainsBySourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sources = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
  }


  virtual ~DescribeDomainsBySourceRequest() = default;
};
class DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> domainCname{};
  shared_ptr<string> domainName{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};

  DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo() {}

  explicit DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domainCname) {
      res["DomainCname"] = boost::any(*domainCname);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DomainCname") != m.end() && !m["DomainCname"].empty()) {
      domainCname = make_shared<string>(boost::any_cast<string>(m["DomainCname"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo() = default;
};
class DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo>> domainInfo{};

  DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos() {}

  explicit DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainInfo) {
      vector<boost::any> temp1;
      for(auto item1:*domainInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["domainInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainInfo") != m.end() && !m["domainInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["domainInfo"].type()) {
        vector<DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["domainInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainInfo = make_shared<vector<DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos() = default;
};
class DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainNames{};

  DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains() {}

  explicit DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainNames) {
      res["domainNames"] = boost::any(*domainNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainNames") != m.end() && !m["domainNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["domainNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["domainNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains() = default;
};
class DescribeDomainsBySourceResponseBodyDomainsListDomainsData : public Darabonba::Model {
public:
  shared_ptr<DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos> domainInfos{};
  shared_ptr<DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains> domains{};
  shared_ptr<string> source{};

  DescribeDomainsBySourceResponseBodyDomainsListDomainsData() {}

  explicit DescribeDomainsBySourceResponseBodyDomainsListDomainsData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainInfos) {
      res["DomainInfos"] = domainInfos ? boost::any(domainInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (domains) {
      res["Domains"] = domains ? boost::any(domains->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainInfos") != m.end() && !m["DomainInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainInfos"].type()) {
        DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainInfos"]));
        domainInfos = make_shared<DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos>(model1);
      }
    }
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      if (typeid(map<string, boost::any>) == m["Domains"].type()) {
        DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Domains"]));
        domains = make_shared<DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains>(model1);
      }
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~DescribeDomainsBySourceResponseBodyDomainsListDomainsData() = default;
};
class DescribeDomainsBySourceResponseBodyDomainsList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainsBySourceResponseBodyDomainsListDomainsData>> domainsData{};

  DescribeDomainsBySourceResponseBodyDomainsList() {}

  explicit DescribeDomainsBySourceResponseBodyDomainsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainsData) {
      vector<boost::any> temp1;
      for(auto item1:*domainsData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainsData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainsData") != m.end() && !m["DomainsData"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainsData"].type()) {
        vector<DescribeDomainsBySourceResponseBodyDomainsListDomainsData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainsData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainsBySourceResponseBodyDomainsListDomainsData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainsData = make_shared<vector<DescribeDomainsBySourceResponseBodyDomainsListDomainsData>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainsBySourceResponseBodyDomainsList() = default;
};
class DescribeDomainsBySourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDomainsBySourceResponseBodyDomainsList> domainsList{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sources{};

  DescribeDomainsBySourceResponseBody() {}

  explicit DescribeDomainsBySourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainsList) {
      res["DomainsList"] = domainsList ? boost::any(domainsList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainsList") != m.end() && !m["DomainsList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainsList"].type()) {
        DescribeDomainsBySourceResponseBodyDomainsList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainsList"]));
        domainsList = make_shared<DescribeDomainsBySourceResponseBodyDomainsList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sources = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
  }


  virtual ~DescribeDomainsBySourceResponseBody() = default;
};
class DescribeDomainsBySourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainsBySourceResponseBody> body{};

  DescribeDomainsBySourceResponse() {}

  explicit DescribeDomainsBySourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainsBySourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainsBySourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainsBySourceResponse() = default;
};
class DescribeDomainsUsageByDayRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> startTime{};

  DescribeDomainsUsageByDayRequest() {}

  explicit DescribeDomainsUsageByDayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainsUsageByDayRequest() = default;
};
class DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay : public Darabonba::Model {
public:
  shared_ptr<string> bytesHitRate{};
  shared_ptr<string> maxBps{};
  shared_ptr<string> maxBpsTime{};
  shared_ptr<string> maxSrcBps{};
  shared_ptr<string> maxSrcBpsTime{};
  shared_ptr<string> qps{};
  shared_ptr<string> requestHitRate{};
  shared_ptr<string> timeStamp{};
  shared_ptr<string> totalAccess{};
  shared_ptr<string> totalTraffic{};

  DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay() {}

  explicit DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bytesHitRate) {
      res["BytesHitRate"] = boost::any(*bytesHitRate);
    }
    if (maxBps) {
      res["MaxBps"] = boost::any(*maxBps);
    }
    if (maxBpsTime) {
      res["MaxBpsTime"] = boost::any(*maxBpsTime);
    }
    if (maxSrcBps) {
      res["MaxSrcBps"] = boost::any(*maxSrcBps);
    }
    if (maxSrcBpsTime) {
      res["MaxSrcBpsTime"] = boost::any(*maxSrcBpsTime);
    }
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (requestHitRate) {
      res["RequestHitRate"] = boost::any(*requestHitRate);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (totalAccess) {
      res["TotalAccess"] = boost::any(*totalAccess);
    }
    if (totalTraffic) {
      res["TotalTraffic"] = boost::any(*totalTraffic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BytesHitRate") != m.end() && !m["BytesHitRate"].empty()) {
      bytesHitRate = make_shared<string>(boost::any_cast<string>(m["BytesHitRate"]));
    }
    if (m.find("MaxBps") != m.end() && !m["MaxBps"].empty()) {
      maxBps = make_shared<string>(boost::any_cast<string>(m["MaxBps"]));
    }
    if (m.find("MaxBpsTime") != m.end() && !m["MaxBpsTime"].empty()) {
      maxBpsTime = make_shared<string>(boost::any_cast<string>(m["MaxBpsTime"]));
    }
    if (m.find("MaxSrcBps") != m.end() && !m["MaxSrcBps"].empty()) {
      maxSrcBps = make_shared<string>(boost::any_cast<string>(m["MaxSrcBps"]));
    }
    if (m.find("MaxSrcBpsTime") != m.end() && !m["MaxSrcBpsTime"].empty()) {
      maxSrcBpsTime = make_shared<string>(boost::any_cast<string>(m["MaxSrcBpsTime"]));
    }
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<string>(boost::any_cast<string>(m["Qps"]));
    }
    if (m.find("RequestHitRate") != m.end() && !m["RequestHitRate"].empty()) {
      requestHitRate = make_shared<string>(boost::any_cast<string>(m["RequestHitRate"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("TotalAccess") != m.end() && !m["TotalAccess"].empty()) {
      totalAccess = make_shared<string>(boost::any_cast<string>(m["TotalAccess"]));
    }
    if (m.find("TotalTraffic") != m.end() && !m["TotalTraffic"].empty()) {
      totalTraffic = make_shared<string>(boost::any_cast<string>(m["TotalTraffic"]));
    }
  }


  virtual ~DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay() = default;
};
class DescribeDomainsUsageByDayResponseBodyUsageByDays : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay>> usageByDay{};

  DescribeDomainsUsageByDayResponseBodyUsageByDays() {}

  explicit DescribeDomainsUsageByDayResponseBodyUsageByDays(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (usageByDay) {
      vector<boost::any> temp1;
      for(auto item1:*usageByDay){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageByDay"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UsageByDay") != m.end() && !m["UsageByDay"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageByDay"].type()) {
        vector<DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageByDay"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageByDay = make_shared<vector<DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainsUsageByDayResponseBodyUsageByDays() = default;
};
class DescribeDomainsUsageByDayResponseBodyUsageTotal : public Darabonba::Model {
public:
  shared_ptr<string> bytesHitRate{};
  shared_ptr<string> maxBps{};
  shared_ptr<string> maxBpsTime{};
  shared_ptr<string> maxSrcBps{};
  shared_ptr<string> maxSrcBpsTime{};
  shared_ptr<string> requestHitRate{};
  shared_ptr<string> totalAccess{};
  shared_ptr<string> totalTraffic{};

  DescribeDomainsUsageByDayResponseBodyUsageTotal() {}

  explicit DescribeDomainsUsageByDayResponseBodyUsageTotal(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bytesHitRate) {
      res["BytesHitRate"] = boost::any(*bytesHitRate);
    }
    if (maxBps) {
      res["MaxBps"] = boost::any(*maxBps);
    }
    if (maxBpsTime) {
      res["MaxBpsTime"] = boost::any(*maxBpsTime);
    }
    if (maxSrcBps) {
      res["MaxSrcBps"] = boost::any(*maxSrcBps);
    }
    if (maxSrcBpsTime) {
      res["MaxSrcBpsTime"] = boost::any(*maxSrcBpsTime);
    }
    if (requestHitRate) {
      res["RequestHitRate"] = boost::any(*requestHitRate);
    }
    if (totalAccess) {
      res["TotalAccess"] = boost::any(*totalAccess);
    }
    if (totalTraffic) {
      res["TotalTraffic"] = boost::any(*totalTraffic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BytesHitRate") != m.end() && !m["BytesHitRate"].empty()) {
      bytesHitRate = make_shared<string>(boost::any_cast<string>(m["BytesHitRate"]));
    }
    if (m.find("MaxBps") != m.end() && !m["MaxBps"].empty()) {
      maxBps = make_shared<string>(boost::any_cast<string>(m["MaxBps"]));
    }
    if (m.find("MaxBpsTime") != m.end() && !m["MaxBpsTime"].empty()) {
      maxBpsTime = make_shared<string>(boost::any_cast<string>(m["MaxBpsTime"]));
    }
    if (m.find("MaxSrcBps") != m.end() && !m["MaxSrcBps"].empty()) {
      maxSrcBps = make_shared<string>(boost::any_cast<string>(m["MaxSrcBps"]));
    }
    if (m.find("MaxSrcBpsTime") != m.end() && !m["MaxSrcBpsTime"].empty()) {
      maxSrcBpsTime = make_shared<string>(boost::any_cast<string>(m["MaxSrcBpsTime"]));
    }
    if (m.find("RequestHitRate") != m.end() && !m["RequestHitRate"].empty()) {
      requestHitRate = make_shared<string>(boost::any_cast<string>(m["RequestHitRate"]));
    }
    if (m.find("TotalAccess") != m.end() && !m["TotalAccess"].empty()) {
      totalAccess = make_shared<string>(boost::any_cast<string>(m["TotalAccess"]));
    }
    if (m.find("TotalTraffic") != m.end() && !m["TotalTraffic"].empty()) {
      totalTraffic = make_shared<string>(boost::any_cast<string>(m["TotalTraffic"]));
    }
  }


  virtual ~DescribeDomainsUsageByDayResponseBodyUsageTotal() = default;
};
class DescribeDomainsUsageByDayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataInterval{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<DescribeDomainsUsageByDayResponseBodyUsageByDays> usageByDays{};
  shared_ptr<DescribeDomainsUsageByDayResponseBodyUsageTotal> usageTotal{};

  DescribeDomainsUsageByDayResponseBody() {}

  explicit DescribeDomainsUsageByDayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (usageByDays) {
      res["UsageByDays"] = usageByDays ? boost::any(usageByDays->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usageTotal) {
      res["UsageTotal"] = usageTotal ? boost::any(usageTotal->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("UsageByDays") != m.end() && !m["UsageByDays"].empty()) {
      if (typeid(map<string, boost::any>) == m["UsageByDays"].type()) {
        DescribeDomainsUsageByDayResponseBodyUsageByDays model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UsageByDays"]));
        usageByDays = make_shared<DescribeDomainsUsageByDayResponseBodyUsageByDays>(model1);
      }
    }
    if (m.find("UsageTotal") != m.end() && !m["UsageTotal"].empty()) {
      if (typeid(map<string, boost::any>) == m["UsageTotal"].type()) {
        DescribeDomainsUsageByDayResponseBodyUsageTotal model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UsageTotal"]));
        usageTotal = make_shared<DescribeDomainsUsageByDayResponseBodyUsageTotal>(model1);
      }
    }
  }


  virtual ~DescribeDomainsUsageByDayResponseBody() = default;
};
class DescribeDomainsUsageByDayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainsUsageByDayResponseBody> body{};

  DescribeDomainsUsageByDayResponse() {}

  explicit DescribeDomainsUsageByDayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainsUsageByDayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainsUsageByDayResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainsUsageByDayResponse() = default;
};
class DescribeRefreshQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};

  DescribeRefreshQuotaRequest() {}

  explicit DescribeRefreshQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeRefreshQuotaRequest() = default;
};
class DescribeRefreshQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> blockQuota{};
  shared_ptr<string> blockRemain{};
  shared_ptr<string> dirQuota{};
  shared_ptr<string> dirRemain{};
  shared_ptr<string> preloadQuota{};
  shared_ptr<string> preloadRemain{};
  shared_ptr<string> requestId{};
  shared_ptr<string> urlQuota{};
  shared_ptr<string> urlRemain{};

  DescribeRefreshQuotaResponseBody() {}

  explicit DescribeRefreshQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockQuota) {
      res["BlockQuota"] = boost::any(*blockQuota);
    }
    if (blockRemain) {
      res["BlockRemain"] = boost::any(*blockRemain);
    }
    if (dirQuota) {
      res["DirQuota"] = boost::any(*dirQuota);
    }
    if (dirRemain) {
      res["DirRemain"] = boost::any(*dirRemain);
    }
    if (preloadQuota) {
      res["PreloadQuota"] = boost::any(*preloadQuota);
    }
    if (preloadRemain) {
      res["PreloadRemain"] = boost::any(*preloadRemain);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (urlQuota) {
      res["UrlQuota"] = boost::any(*urlQuota);
    }
    if (urlRemain) {
      res["UrlRemain"] = boost::any(*urlRemain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockQuota") != m.end() && !m["BlockQuota"].empty()) {
      blockQuota = make_shared<string>(boost::any_cast<string>(m["BlockQuota"]));
    }
    if (m.find("BlockRemain") != m.end() && !m["BlockRemain"].empty()) {
      blockRemain = make_shared<string>(boost::any_cast<string>(m["BlockRemain"]));
    }
    if (m.find("DirQuota") != m.end() && !m["DirQuota"].empty()) {
      dirQuota = make_shared<string>(boost::any_cast<string>(m["DirQuota"]));
    }
    if (m.find("DirRemain") != m.end() && !m["DirRemain"].empty()) {
      dirRemain = make_shared<string>(boost::any_cast<string>(m["DirRemain"]));
    }
    if (m.find("PreloadQuota") != m.end() && !m["PreloadQuota"].empty()) {
      preloadQuota = make_shared<string>(boost::any_cast<string>(m["PreloadQuota"]));
    }
    if (m.find("PreloadRemain") != m.end() && !m["PreloadRemain"].empty()) {
      preloadRemain = make_shared<string>(boost::any_cast<string>(m["PreloadRemain"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UrlQuota") != m.end() && !m["UrlQuota"].empty()) {
      urlQuota = make_shared<string>(boost::any_cast<string>(m["UrlQuota"]));
    }
    if (m.find("UrlRemain") != m.end() && !m["UrlRemain"].empty()) {
      urlRemain = make_shared<string>(boost::any_cast<string>(m["UrlRemain"]));
    }
  }


  virtual ~DescribeRefreshQuotaResponseBody() = default;
};
class DescribeRefreshQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRefreshQuotaResponseBody> body{};

  DescribeRefreshQuotaResponse() {}

  explicit DescribeRefreshQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRefreshQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRefreshQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRefreshQuotaResponse() = default;
};
class DescribeTopDomainsByFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> limit{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> product{};
  shared_ptr<string> startTime{};

  DescribeTopDomainsByFlowRequest() {}

  explicit DescribeTopDomainsByFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeTopDomainsByFlowRequest() = default;
};
class DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<double> maxBps{};
  shared_ptr<string> maxBpsTime{};
  shared_ptr<long> rank{};
  shared_ptr<long> totalAccess{};
  shared_ptr<string> totalTraffic{};
  shared_ptr<string> trafficPercent{};

  DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain() {}

  explicit DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (maxBps) {
      res["MaxBps"] = boost::any(*maxBps);
    }
    if (maxBpsTime) {
      res["MaxBpsTime"] = boost::any(*maxBpsTime);
    }
    if (rank) {
      res["Rank"] = boost::any(*rank);
    }
    if (totalAccess) {
      res["TotalAccess"] = boost::any(*totalAccess);
    }
    if (totalTraffic) {
      res["TotalTraffic"] = boost::any(*totalTraffic);
    }
    if (trafficPercent) {
      res["TrafficPercent"] = boost::any(*trafficPercent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("MaxBps") != m.end() && !m["MaxBps"].empty()) {
      maxBps = make_shared<double>(boost::any_cast<double>(m["MaxBps"]));
    }
    if (m.find("MaxBpsTime") != m.end() && !m["MaxBpsTime"].empty()) {
      maxBpsTime = make_shared<string>(boost::any_cast<string>(m["MaxBpsTime"]));
    }
    if (m.find("Rank") != m.end() && !m["Rank"].empty()) {
      rank = make_shared<long>(boost::any_cast<long>(m["Rank"]));
    }
    if (m.find("TotalAccess") != m.end() && !m["TotalAccess"].empty()) {
      totalAccess = make_shared<long>(boost::any_cast<long>(m["TotalAccess"]));
    }
    if (m.find("TotalTraffic") != m.end() && !m["TotalTraffic"].empty()) {
      totalTraffic = make_shared<string>(boost::any_cast<string>(m["TotalTraffic"]));
    }
    if (m.find("TrafficPercent") != m.end() && !m["TrafficPercent"].empty()) {
      trafficPercent = make_shared<string>(boost::any_cast<string>(m["TrafficPercent"]));
    }
  }


  virtual ~DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain() = default;
};
class DescribeTopDomainsByFlowResponseBodyTopDomains : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain>> topDomain{};

  DescribeTopDomainsByFlowResponseBodyTopDomains() {}

  explicit DescribeTopDomainsByFlowResponseBodyTopDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topDomain) {
      vector<boost::any> temp1;
      for(auto item1:*topDomain){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TopDomain"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TopDomain") != m.end() && !m["TopDomain"].empty()) {
      if (typeid(vector<boost::any>) == m["TopDomain"].type()) {
        vector<DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TopDomain"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topDomain = make_shared<vector<DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain>>(expect1);
      }
    }
  }


  virtual ~DescribeTopDomainsByFlowResponseBodyTopDomains() = default;
};
class DescribeTopDomainsByFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> domainCount{};
  shared_ptr<long> domainOnlineCount{};
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<DescribeTopDomainsByFlowResponseBodyTopDomains> topDomains{};

  DescribeTopDomainsByFlowResponseBody() {}

  explicit DescribeTopDomainsByFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainCount) {
      res["DomainCount"] = boost::any(*domainCount);
    }
    if (domainOnlineCount) {
      res["DomainOnlineCount"] = boost::any(*domainOnlineCount);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (topDomains) {
      res["TopDomains"] = topDomains ? boost::any(topDomains->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainCount") != m.end() && !m["DomainCount"].empty()) {
      domainCount = make_shared<long>(boost::any_cast<long>(m["DomainCount"]));
    }
    if (m.find("DomainOnlineCount") != m.end() && !m["DomainOnlineCount"].empty()) {
      domainOnlineCount = make_shared<long>(boost::any_cast<long>(m["DomainOnlineCount"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TopDomains") != m.end() && !m["TopDomains"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopDomains"].type()) {
        DescribeTopDomainsByFlowResponseBodyTopDomains model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopDomains"]));
        topDomains = make_shared<DescribeTopDomainsByFlowResponseBodyTopDomains>(model1);
      }
    }
  }


  virtual ~DescribeTopDomainsByFlowResponseBody() = default;
};
class DescribeTopDomainsByFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTopDomainsByFlowResponseBody> body{};

  DescribeTopDomainsByFlowResponse() {}

  explicit DescribeTopDomainsByFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTopDomainsByFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTopDomainsByFlowResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTopDomainsByFlowResponse() = default;
};
class DescribeUserDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<string> cdnType{};
  shared_ptr<bool> checkDomainShow{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainSearchType{};
  shared_ptr<string> domainStatus{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> sources{};

  DescribeUserDomainsRequest() {}

  explicit DescribeUserDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cdnType) {
      res["CdnType"] = boost::any(*cdnType);
    }
    if (checkDomainShow) {
      res["CheckDomainShow"] = boost::any(*checkDomainShow);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainSearchType) {
      res["DomainSearchType"] = boost::any(*domainSearchType);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CdnType") != m.end() && !m["CdnType"].empty()) {
      cdnType = make_shared<string>(boost::any_cast<string>(m["CdnType"]));
    }
    if (m.find("CheckDomainShow") != m.end() && !m["CheckDomainShow"].empty()) {
      checkDomainShow = make_shared<bool>(boost::any_cast<bool>(m["CheckDomainShow"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainSearchType") != m.end() && !m["DomainSearchType"].empty()) {
      domainSearchType = make_shared<string>(boost::any_cast<string>(m["DomainSearchType"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sources = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
  }


  virtual ~DescribeUserDomainsRequest() = default;
};
class DescribeUserDomainsResponseBodyDomainsPageDataSources : public Darabonba::Model {
public:
  shared_ptr<vector<string>> source{};

  DescribeUserDomainsResponseBodyDomainsPageDataSources() {}

  explicit DescribeUserDomainsResponseBodyDomainsPageDataSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Source"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Source"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      source = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeUserDomainsResponseBodyDomainsPageDataSources() = default;
};
class DescribeUserDomainsResponseBodyDomainsPageData : public Darabonba::Model {
public:
  shared_ptr<string> cdnType{};
  shared_ptr<string> cname{};
  shared_ptr<string> description{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainStatus{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sandbox{};
  shared_ptr<string> sourceType{};
  shared_ptr<DescribeUserDomainsResponseBodyDomainsPageDataSources> sources{};
  shared_ptr<string> sslProtocol{};

  DescribeUserDomainsResponseBodyDomainsPageData() {}

  explicit DescribeUserDomainsResponseBodyDomainsPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cdnType) {
      res["CdnType"] = boost::any(*cdnType);
    }
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sandbox) {
      res["Sandbox"] = boost::any(*sandbox);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sources) {
      res["Sources"] = sources ? boost::any(sources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sslProtocol) {
      res["SslProtocol"] = boost::any(*sslProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CdnType") != m.end() && !m["CdnType"].empty()) {
      cdnType = make_shared<string>(boost::any_cast<string>(m["CdnType"]));
    }
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Sandbox") != m.end() && !m["Sandbox"].empty()) {
      sandbox = make_shared<string>(boost::any_cast<string>(m["Sandbox"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sources"].type()) {
        DescribeUserDomainsResponseBodyDomainsPageDataSources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sources"]));
        sources = make_shared<DescribeUserDomainsResponseBodyDomainsPageDataSources>(model1);
      }
    }
    if (m.find("SslProtocol") != m.end() && !m["SslProtocol"].empty()) {
      sslProtocol = make_shared<string>(boost::any_cast<string>(m["SslProtocol"]));
    }
  }


  virtual ~DescribeUserDomainsResponseBodyDomainsPageData() = default;
};
class DescribeUserDomainsResponseBodyDomains : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeUserDomainsResponseBodyDomainsPageData>> pageData{};

  DescribeUserDomainsResponseBodyDomains() {}

  explicit DescribeUserDomainsResponseBodyDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<DescribeUserDomainsResponseBodyDomainsPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserDomainsResponseBodyDomainsPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<DescribeUserDomainsResponseBodyDomainsPageData>>(expect1);
      }
    }
  }


  virtual ~DescribeUserDomainsResponseBodyDomains() = default;
};
class DescribeUserDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeUserDomainsResponseBodyDomains> domains{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeUserDomainsResponseBody() {}

  explicit DescribeUserDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domains) {
      res["Domains"] = domains ? boost::any(domains->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      if (typeid(map<string, boost::any>) == m["Domains"].type()) {
        DescribeUserDomainsResponseBodyDomains model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Domains"]));
        domains = make_shared<DescribeUserDomainsResponseBodyDomains>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~DescribeUserDomainsResponseBody() = default;
};
class DescribeUserDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserDomainsResponseBody> body{};

  DescribeUserDomainsResponse() {}

  explicit DescribeUserDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserDomainsResponse() = default;
};
class OpenCdnServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};

  OpenCdnServiceRequest() {}

  explicit OpenCdnServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~OpenCdnServiceRequest() = default;
};
class OpenCdnServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OpenCdnServiceResponseBody() {}

  explicit OpenCdnServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenCdnServiceResponseBody() = default;
};
class OpenCdnServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenCdnServiceResponseBody> body{};

  OpenCdnServiceResponse() {}

  explicit OpenCdnServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenCdnServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenCdnServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenCdnServiceResponse() = default;
};
class PushObjectCacheRequest : public Darabonba::Model {
public:
  shared_ptr<string> area{};
  shared_ptr<string> objectPath{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};

  PushObjectCacheRequest() {}

  explicit PushObjectCacheRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (area) {
      res["Area"] = boost::any(*area);
    }
    if (objectPath) {
      res["ObjectPath"] = boost::any(*objectPath);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Area") != m.end() && !m["Area"].empty()) {
      area = make_shared<string>(boost::any_cast<string>(m["Area"]));
    }
    if (m.find("ObjectPath") != m.end() && !m["ObjectPath"].empty()) {
      objectPath = make_shared<string>(boost::any_cast<string>(m["ObjectPath"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~PushObjectCacheRequest() = default;
};
class PushObjectCacheResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> pushTaskId{};
  shared_ptr<string> requestId{};

  PushObjectCacheResponseBody() {}

  explicit PushObjectCacheResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pushTaskId) {
      res["PushTaskId"] = boost::any(*pushTaskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PushTaskId") != m.end() && !m["PushTaskId"].empty()) {
      pushTaskId = make_shared<string>(boost::any_cast<string>(m["PushTaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PushObjectCacheResponseBody() = default;
};
class PushObjectCacheResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushObjectCacheResponseBody> body{};

  PushObjectCacheResponse() {}

  explicit PushObjectCacheResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushObjectCacheResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushObjectCacheResponseBody>(model1);
      }
    }
  }


  virtual ~PushObjectCacheResponse() = default;
};
class RefreshObjectCachesRequest : public Darabonba::Model {
public:
  shared_ptr<string> objectPath{};
  shared_ptr<string> objectType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};

  RefreshObjectCachesRequest() {}

  explicit RefreshObjectCachesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectPath) {
      res["ObjectPath"] = boost::any(*objectPath);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ObjectPath") != m.end() && !m["ObjectPath"].empty()) {
      objectPath = make_shared<string>(boost::any_cast<string>(m["ObjectPath"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~RefreshObjectCachesRequest() = default;
};
class RefreshObjectCachesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> refreshTaskId{};
  shared_ptr<string> requestId{};

  RefreshObjectCachesResponseBody() {}

  explicit RefreshObjectCachesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (refreshTaskId) {
      res["RefreshTaskId"] = boost::any(*refreshTaskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RefreshTaskId") != m.end() && !m["RefreshTaskId"].empty()) {
      refreshTaskId = make_shared<string>(boost::any_cast<string>(m["RefreshTaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RefreshObjectCachesResponseBody() = default;
};
class RefreshObjectCachesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefreshObjectCachesResponseBody> body{};

  RefreshObjectCachesResponse() {}

  explicit RefreshObjectCachesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshObjectCachesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshObjectCachesResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshObjectCachesResponse() = default;
};
class TestDescribeDomainBpsDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> domainType{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timeMerge{};

  TestDescribeDomainBpsDataRequest() {}

  explicit TestDescribeDomainBpsDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timeMerge) {
      res["TimeMerge"] = boost::any(*timeMerge);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TimeMerge") != m.end() && !m["TimeMerge"].empty()) {
      timeMerge = make_shared<string>(boost::any_cast<string>(m["TimeMerge"]));
    }
  }


  virtual ~TestDescribeDomainBpsDataRequest() = default;
};
class TestDescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> domesticL2Value{};
  shared_ptr<string> domesticValue{};
  shared_ptr<string> dynamicDomesticValue{};
  shared_ptr<string> dynamicOverseasValue{};
  shared_ptr<string> dynamicValue{};
  shared_ptr<string> l2Value{};
  shared_ptr<string> overseasL2Value{};
  shared_ptr<string> overseasValue{};
  shared_ptr<string> staticDomesticValue{};
  shared_ptr<string> staticOverseasValue{};
  shared_ptr<string> staticValue{};
  shared_ptr<string> timeStamp{};
  shared_ptr<string> value{};

  TestDescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() {}

  explicit TestDescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domesticL2Value) {
      res["DomesticL2Value"] = boost::any(*domesticL2Value);
    }
    if (domesticValue) {
      res["DomesticValue"] = boost::any(*domesticValue);
    }
    if (dynamicDomesticValue) {
      res["DynamicDomesticValue"] = boost::any(*dynamicDomesticValue);
    }
    if (dynamicOverseasValue) {
      res["DynamicOverseasValue"] = boost::any(*dynamicOverseasValue);
    }
    if (dynamicValue) {
      res["DynamicValue"] = boost::any(*dynamicValue);
    }
    if (l2Value) {
      res["L2Value"] = boost::any(*l2Value);
    }
    if (overseasL2Value) {
      res["OverseasL2Value"] = boost::any(*overseasL2Value);
    }
    if (overseasValue) {
      res["OverseasValue"] = boost::any(*overseasValue);
    }
    if (staticDomesticValue) {
      res["StaticDomesticValue"] = boost::any(*staticDomesticValue);
    }
    if (staticOverseasValue) {
      res["StaticOverseasValue"] = boost::any(*staticOverseasValue);
    }
    if (staticValue) {
      res["StaticValue"] = boost::any(*staticValue);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomesticL2Value") != m.end() && !m["DomesticL2Value"].empty()) {
      domesticL2Value = make_shared<string>(boost::any_cast<string>(m["DomesticL2Value"]));
    }
    if (m.find("DomesticValue") != m.end() && !m["DomesticValue"].empty()) {
      domesticValue = make_shared<string>(boost::any_cast<string>(m["DomesticValue"]));
    }
    if (m.find("DynamicDomesticValue") != m.end() && !m["DynamicDomesticValue"].empty()) {
      dynamicDomesticValue = make_shared<string>(boost::any_cast<string>(m["DynamicDomesticValue"]));
    }
    if (m.find("DynamicOverseasValue") != m.end() && !m["DynamicOverseasValue"].empty()) {
      dynamicOverseasValue = make_shared<string>(boost::any_cast<string>(m["DynamicOverseasValue"]));
    }
    if (m.find("DynamicValue") != m.end() && !m["DynamicValue"].empty()) {
      dynamicValue = make_shared<string>(boost::any_cast<string>(m["DynamicValue"]));
    }
    if (m.find("L2Value") != m.end() && !m["L2Value"].empty()) {
      l2Value = make_shared<string>(boost::any_cast<string>(m["L2Value"]));
    }
    if (m.find("OverseasL2Value") != m.end() && !m["OverseasL2Value"].empty()) {
      overseasL2Value = make_shared<string>(boost::any_cast<string>(m["OverseasL2Value"]));
    }
    if (m.find("OverseasValue") != m.end() && !m["OverseasValue"].empty()) {
      overseasValue = make_shared<string>(boost::any_cast<string>(m["OverseasValue"]));
    }
    if (m.find("StaticDomesticValue") != m.end() && !m["StaticDomesticValue"].empty()) {
      staticDomesticValue = make_shared<string>(boost::any_cast<string>(m["StaticDomesticValue"]));
    }
    if (m.find("StaticOverseasValue") != m.end() && !m["StaticOverseasValue"].empty()) {
      staticOverseasValue = make_shared<string>(boost::any_cast<string>(m["StaticOverseasValue"]));
    }
    if (m.find("StaticValue") != m.end() && !m["StaticValue"].empty()) {
      staticValue = make_shared<string>(boost::any_cast<string>(m["StaticValue"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TestDescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() = default;
};
class TestDescribeDomainBpsDataResponseBodyBpsDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<TestDescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>> dataModule{};

  TestDescribeDomainBpsDataResponseBodyBpsDataPerInterval() {}

  explicit TestDescribeDomainBpsDataResponseBodyBpsDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<TestDescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TestDescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<TestDescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~TestDescribeDomainBpsDataResponseBodyBpsDataPerInterval() = default;
};
class TestDescribeDomainBpsDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<TestDescribeDomainBpsDataResponseBodyBpsDataPerInterval> bpsDataPerInterval{};
  shared_ptr<string> dataInterval{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ispName{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationName{};
  shared_ptr<string> locationNameEn{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  TestDescribeDomainBpsDataResponseBody() {}

  explicit TestDescribeDomainBpsDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bpsDataPerInterval) {
      res["BpsDataPerInterval"] = bpsDataPerInterval ? boost::any(bpsDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ispName) {
      res["IspName"] = boost::any(*ispName);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationName) {
      res["LocationName"] = boost::any(*locationName);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BpsDataPerInterval") != m.end() && !m["BpsDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["BpsDataPerInterval"].type()) {
        TestDescribeDomainBpsDataResponseBodyBpsDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BpsDataPerInterval"]));
        bpsDataPerInterval = make_shared<TestDescribeDomainBpsDataResponseBodyBpsDataPerInterval>(model1);
      }
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IspName") != m.end() && !m["IspName"].empty()) {
      ispName = make_shared<string>(boost::any_cast<string>(m["IspName"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationName") != m.end() && !m["LocationName"].empty()) {
      locationName = make_shared<string>(boost::any_cast<string>(m["LocationName"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~TestDescribeDomainBpsDataResponseBody() = default;
};
class TestDescribeDomainBpsDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TestDescribeDomainBpsDataResponseBody> body{};

  TestDescribeDomainBpsDataResponse() {}

  explicit TestDescribeDomainBpsDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TestDescribeDomainBpsDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TestDescribeDomainBpsDataResponseBody>(model1);
      }
    }
  }


  virtual ~TestDescribeDomainBpsDataResponse() = default;
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
  AddCdnDomainResponse addCdnDomainWithOptions(shared_ptr<AddCdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddCdnDomainResponse addCdnDomain(shared_ptr<AddCdnDomainRequest> request);
  DescribeCdnDomainDetailResponse describeCdnDomainDetailWithOptions(shared_ptr<DescribeCdnDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCdnDomainDetailResponse describeCdnDomainDetail(shared_ptr<DescribeCdnDomainDetailRequest> request);
  DescribeCdnDomainLogsResponse describeCdnDomainLogsWithOptions(shared_ptr<DescribeCdnDomainLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCdnDomainLogsResponse describeCdnDomainLogs(shared_ptr<DescribeCdnDomainLogsRequest> request);
  DescribeCdnServiceResponse describeCdnServiceWithOptions(shared_ptr<DescribeCdnServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCdnServiceResponse describeCdnService(shared_ptr<DescribeCdnServiceRequest> request);
  DescribeDomainBpsDataResponse describeDomainBpsDataWithOptions(shared_ptr<DescribeDomainBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainBpsDataResponse describeDomainBpsData(shared_ptr<DescribeDomainBpsDataRequest> request);
  DescribeDomainBpsDataByTimeStampResponse describeDomainBpsDataByTimeStampWithOptions(shared_ptr<DescribeDomainBpsDataByTimeStampRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainBpsDataByTimeStampResponse describeDomainBpsDataByTimeStamp(shared_ptr<DescribeDomainBpsDataByTimeStampRequest> request);
  DescribeDomainFileSizeProportionDataResponse describeDomainFileSizeProportionDataWithOptions(shared_ptr<DescribeDomainFileSizeProportionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainFileSizeProportionDataResponse describeDomainFileSizeProportionData(shared_ptr<DescribeDomainFileSizeProportionDataRequest> request);
  DescribeDomainFlowDataResponse describeDomainFlowDataWithOptions(shared_ptr<DescribeDomainFlowDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainFlowDataResponse describeDomainFlowData(shared_ptr<DescribeDomainFlowDataRequest> request);
  DescribeDomainHitRateDataResponse describeDomainHitRateDataWithOptions(shared_ptr<DescribeDomainHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainHitRateDataResponse describeDomainHitRateData(shared_ptr<DescribeDomainHitRateDataRequest> request);
  DescribeDomainHttpCodeDataResponse describeDomainHttpCodeDataWithOptions(shared_ptr<DescribeDomainHttpCodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainHttpCodeDataResponse describeDomainHttpCodeData(shared_ptr<DescribeDomainHttpCodeDataRequest> request);
  DescribeDomainISPDataResponse describeDomainISPDataWithOptions(shared_ptr<DescribeDomainISPDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainISPDataResponse describeDomainISPData(shared_ptr<DescribeDomainISPDataRequest> request);
  DescribeDomainQpsDataResponse describeDomainQpsDataWithOptions(shared_ptr<DescribeDomainQpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainQpsDataResponse describeDomainQpsData(shared_ptr<DescribeDomainQpsDataRequest> request);
  DescribeDomainRegionDataResponse describeDomainRegionDataWithOptions(shared_ptr<DescribeDomainRegionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainRegionDataResponse describeDomainRegionData(shared_ptr<DescribeDomainRegionDataRequest> request);
  DescribeDomainReqHitRateDataResponse describeDomainReqHitRateDataWithOptions(shared_ptr<DescribeDomainReqHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainReqHitRateDataResponse describeDomainReqHitRateData(shared_ptr<DescribeDomainReqHitRateDataRequest> request);
  DescribeDomainSrcBpsDataResponse describeDomainSrcBpsDataWithOptions(shared_ptr<DescribeDomainSrcBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainSrcBpsDataResponse describeDomainSrcBpsData(shared_ptr<DescribeDomainSrcBpsDataRequest> request);
  DescribeDomainSrcFlowDataResponse describeDomainSrcFlowDataWithOptions(shared_ptr<DescribeDomainSrcFlowDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainSrcFlowDataResponse describeDomainSrcFlowData(shared_ptr<DescribeDomainSrcFlowDataRequest> request);
  DescribeDomainUvDataResponse describeDomainUvDataWithOptions(shared_ptr<DescribeDomainUvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainUvDataResponse describeDomainUvData(shared_ptr<DescribeDomainUvDataRequest> request);
  DescribeDomainsBySourceResponse describeDomainsBySourceWithOptions(shared_ptr<DescribeDomainsBySourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainsBySourceResponse describeDomainsBySource(shared_ptr<DescribeDomainsBySourceRequest> request);
  DescribeDomainsUsageByDayResponse describeDomainsUsageByDayWithOptions(shared_ptr<DescribeDomainsUsageByDayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainsUsageByDayResponse describeDomainsUsageByDay(shared_ptr<DescribeDomainsUsageByDayRequest> request);
  DescribeRefreshQuotaResponse describeRefreshQuotaWithOptions(shared_ptr<DescribeRefreshQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRefreshQuotaResponse describeRefreshQuota(shared_ptr<DescribeRefreshQuotaRequest> request);
  DescribeTopDomainsByFlowResponse describeTopDomainsByFlowWithOptions(shared_ptr<DescribeTopDomainsByFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTopDomainsByFlowResponse describeTopDomainsByFlow(shared_ptr<DescribeTopDomainsByFlowRequest> request);
  DescribeUserDomainsResponse describeUserDomainsWithOptions(shared_ptr<DescribeUserDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserDomainsResponse describeUserDomains(shared_ptr<DescribeUserDomainsRequest> request);
  OpenCdnServiceResponse openCdnServiceWithOptions(shared_ptr<OpenCdnServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenCdnServiceResponse openCdnService(shared_ptr<OpenCdnServiceRequest> request);
  PushObjectCacheResponse pushObjectCacheWithOptions(shared_ptr<PushObjectCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushObjectCacheResponse pushObjectCache(shared_ptr<PushObjectCacheRequest> request);
  RefreshObjectCachesResponse refreshObjectCachesWithOptions(shared_ptr<RefreshObjectCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshObjectCachesResponse refreshObjectCaches(shared_ptr<RefreshObjectCachesRequest> request);
  TestDescribeDomainBpsDataResponse testDescribeDomainBpsDataWithOptions(shared_ptr<TestDescribeDomainBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TestDescribeDomainBpsDataResponse testDescribeDomainBpsData(shared_ptr<TestDescribeDomainBpsDataRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cdn20141111

#endif
