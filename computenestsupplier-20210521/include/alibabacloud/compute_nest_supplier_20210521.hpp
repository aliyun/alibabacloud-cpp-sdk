// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER20210521_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER20210521_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ComputeNestSupplier20210521 {
class CreateArtifactRequestArtifactProperty : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> commodityVersion{};
  shared_ptr<string> fileScriptMetadata{};
  shared_ptr<string> imageId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scriptMetadata{};
  shared_ptr<string> url{};

  CreateArtifactRequestArtifactProperty() {}

  explicit CreateArtifactRequestArtifactProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (commodityVersion) {
      res["CommodityVersion"] = boost::any(*commodityVersion);
    }
    if (fileScriptMetadata) {
      res["FileScriptMetadata"] = boost::any(*fileScriptMetadata);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scriptMetadata) {
      res["ScriptMetadata"] = boost::any(*scriptMetadata);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CommodityVersion") != m.end() && !m["CommodityVersion"].empty()) {
      commodityVersion = make_shared<string>(boost::any_cast<string>(m["CommodityVersion"]));
    }
    if (m.find("FileScriptMetadata") != m.end() && !m["FileScriptMetadata"].empty()) {
      fileScriptMetadata = make_shared<string>(boost::any_cast<string>(m["FileScriptMetadata"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScriptMetadata") != m.end() && !m["ScriptMetadata"].empty()) {
      scriptMetadata = make_shared<string>(boost::any_cast<string>(m["ScriptMetadata"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateArtifactRequestArtifactProperty() = default;
};
class CreateArtifactRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<CreateArtifactRequestArtifactProperty> artifactProperty{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> supportRegionIds{};
  shared_ptr<string> versionName{};

  CreateArtifactRequest() {}

  explicit CreateArtifactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactProperty) {
      res["ArtifactProperty"] = artifactProperty ? boost::any(artifactProperty->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArtifactProperty"].type()) {
        CreateArtifactRequestArtifactProperty model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArtifactProperty"]));
        artifactProperty = make_shared<CreateArtifactRequestArtifactProperty>(model1);
      }
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportRegionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateArtifactRequest() = default;
};
class CreateArtifactShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactPropertyShrink{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> supportRegionIds{};
  shared_ptr<string> versionName{};

  CreateArtifactShrinkRequest() {}

  explicit CreateArtifactShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactPropertyShrink) {
      res["ArtifactProperty"] = boost::any(*artifactPropertyShrink);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      artifactPropertyShrink = make_shared<string>(boost::any_cast<string>(m["ArtifactProperty"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportRegionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateArtifactShrinkRequest() = default;
};
class CreateArtifactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactProperty{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> artifactVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> maxVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> supportRegionIds{};
  shared_ptr<string> versionName{};

  CreateArtifactResponseBody() {}

  explicit CreateArtifactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactProperty) {
      res["ArtifactProperty"] = boost::any(*artifactProperty);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (maxVersion) {
      res["MaxVersion"] = boost::any(*maxVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      artifactProperty = make_shared<string>(boost::any_cast<string>(m["ArtifactProperty"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("MaxVersion") != m.end() && !m["MaxVersion"].empty()) {
      maxVersion = make_shared<long>(boost::any_cast<long>(m["MaxVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      supportRegionIds = make_shared<string>(boost::any_cast<string>(m["SupportRegionIds"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateArtifactResponseBody() = default;
};
class CreateArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateArtifactResponseBody> body{};

  CreateArtifactResponse() {}

  explicit CreateArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateArtifactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateArtifactResponseBody>(model1);
      }
    }
  }


  virtual ~CreateArtifactResponse() = default;
};
class CreateServiceRequestServiceInfo : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};

  CreateServiceRequestServiceInfo() {}

  explicit CreateServiceRequestServiceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
  }


  virtual ~CreateServiceRequestServiceInfo() = default;
};
class CreateServiceRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateServiceRequestTag() {}

  explicit CreateServiceRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceRequestTag() = default;
};
class CreateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmMetadata{};
  shared_ptr<string> approvalType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<long> duration{};
  shared_ptr<bool> isSupportOperated{};
  shared_ptr<string> licenseMetadata{};
  shared_ptr<string> operationMetadata{};
  shared_ptr<string> policyNames{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<CreateServiceRequestServiceInfo>> serviceInfo{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> shareType{};
  shared_ptr<vector<CreateServiceRequestTag>> tag{};
  shared_ptr<string> tenantType{};
  shared_ptr<long> trialDuration{};
  shared_ptr<string> upgradeMetadata{};
  shared_ptr<string> versionName{};

  CreateServiceRequest() {}

  explicit CreateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmMetadata) {
      res["AlarmMetadata"] = boost::any(*alarmMetadata);
    }
    if (approvalType) {
      res["ApprovalType"] = boost::any(*approvalType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (isSupportOperated) {
      res["IsSupportOperated"] = boost::any(*isSupportOperated);
    }
    if (licenseMetadata) {
      res["LicenseMetadata"] = boost::any(*licenseMetadata);
    }
    if (operationMetadata) {
      res["OperationMetadata"] = boost::any(*operationMetadata);
    }
    if (policyNames) {
      res["PolicyNames"] = boost::any(*policyNames);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfo"] = boost::any(temp1);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (tenantType) {
      res["TenantType"] = boost::any(*tenantType);
    }
    if (trialDuration) {
      res["TrialDuration"] = boost::any(*trialDuration);
    }
    if (upgradeMetadata) {
      res["UpgradeMetadata"] = boost::any(*upgradeMetadata);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmMetadata") != m.end() && !m["AlarmMetadata"].empty()) {
      alarmMetadata = make_shared<string>(boost::any_cast<string>(m["AlarmMetadata"]));
    }
    if (m.find("ApprovalType") != m.end() && !m["ApprovalType"].empty()) {
      approvalType = make_shared<string>(boost::any_cast<string>(m["ApprovalType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("IsSupportOperated") != m.end() && !m["IsSupportOperated"].empty()) {
      isSupportOperated = make_shared<bool>(boost::any_cast<bool>(m["IsSupportOperated"]));
    }
    if (m.find("LicenseMetadata") != m.end() && !m["LicenseMetadata"].empty()) {
      licenseMetadata = make_shared<string>(boost::any_cast<string>(m["LicenseMetadata"]));
    }
    if (m.find("OperationMetadata") != m.end() && !m["OperationMetadata"].empty()) {
      operationMetadata = make_shared<string>(boost::any_cast<string>(m["OperationMetadata"]));
    }
    if (m.find("PolicyNames") != m.end() && !m["PolicyNames"].empty()) {
      policyNames = make_shared<string>(boost::any_cast<string>(m["PolicyNames"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfo") != m.end() && !m["ServiceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfo"].type()) {
        vector<CreateServiceRequestServiceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceRequestServiceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfo = make_shared<vector<CreateServiceRequestServiceInfo>>(expect1);
      }
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateServiceRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateServiceRequestTag>>(expect1);
      }
    }
    if (m.find("TenantType") != m.end() && !m["TenantType"].empty()) {
      tenantType = make_shared<string>(boost::any_cast<string>(m["TenantType"]));
    }
    if (m.find("TrialDuration") != m.end() && !m["TrialDuration"].empty()) {
      trialDuration = make_shared<long>(boost::any_cast<long>(m["TrialDuration"]));
    }
    if (m.find("UpgradeMetadata") != m.end() && !m["UpgradeMetadata"].empty()) {
      upgradeMetadata = make_shared<string>(boost::any_cast<string>(m["UpgradeMetadata"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateServiceRequest() = default;
};
class CreateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> status{};
  shared_ptr<string> version{};

  CreateServiceResponseBody() {}

  explicit CreateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~CreateServiceResponseBody() = default;
};
class CreateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceResponseBody> body{};

  CreateServiceResponse() {}

  explicit CreateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceResponse() = default;
};
class DeleteArtifactRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactVersion{};

  DeleteArtifactRequest() {}

  explicit DeleteArtifactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
  }


  virtual ~DeleteArtifactRequest() = default;
};
class DeleteArtifactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteArtifactResponseBody() {}

  explicit DeleteArtifactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteArtifactResponseBody() = default;
};
class DeleteArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteArtifactResponseBody> body{};

  DeleteArtifactResponse() {}

  explicit DeleteArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteArtifactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteArtifactResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteArtifactResponse() = default;
};
class DeleteServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};

  DeleteServiceRequest() {}

  explicit DeleteServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~DeleteServiceRequest() = default;
};
class DeleteServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServiceResponseBody() {}

  explicit DeleteServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteServiceResponseBody() = default;
};
class DeleteServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceResponseBody> body{};

  DeleteServiceResponse() {}

  explicit DeleteServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceResponse() = default;
};
class GetArtifactRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactName{};
  shared_ptr<string> artifactVersion{};

  GetArtifactRequest() {}

  explicit GetArtifactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactName) {
      res["ArtifactName"] = boost::any(*artifactName);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactName") != m.end() && !m["ArtifactName"].empty()) {
      artifactName = make_shared<string>(boost::any_cast<string>(m["ArtifactName"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
  }


  virtual ~GetArtifactRequest() = default;
};
class GetArtifactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactProperty{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> artifactVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> maxVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> progress{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> supportRegionIds{};
  shared_ptr<string> versionName{};

  GetArtifactResponseBody() {}

  explicit GetArtifactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactProperty) {
      res["ArtifactProperty"] = boost::any(*artifactProperty);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (maxVersion) {
      res["MaxVersion"] = boost::any(*maxVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      artifactProperty = make_shared<string>(boost::any_cast<string>(m["ArtifactProperty"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("MaxVersion") != m.end() && !m["MaxVersion"].empty()) {
      maxVersion = make_shared<long>(boost::any_cast<long>(m["MaxVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      supportRegionIds = make_shared<string>(boost::any_cast<string>(m["SupportRegionIds"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetArtifactResponseBody() = default;
};
class GetArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetArtifactResponseBody> body{};

  GetArtifactResponse() {}

  explicit GetArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetArtifactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetArtifactResponseBody>(model1);
      }
    }
  }


  virtual ~GetArtifactResponse() = default;
};
class GetArtifactRepositoryCredentialsRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> deployRegionId{};

  GetArtifactRepositoryCredentialsRequest() {}

  explicit GetArtifactRepositoryCredentialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (deployRegionId) {
      res["DeployRegionId"] = boost::any(*deployRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("DeployRegionId") != m.end() && !m["DeployRegionId"].empty()) {
      deployRegionId = make_shared<string>(boost::any_cast<string>(m["DeployRegionId"]));
    }
  }


  virtual ~GetArtifactRepositoryCredentialsRequest() = default;
};
class GetArtifactRepositoryCredentialsResponseBodyAvailableResources : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repositoryName{};

  GetArtifactRepositoryCredentialsResponseBodyAvailableResources() {}

  explicit GetArtifactRepositoryCredentialsResponseBodyAvailableResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repositoryName) {
      res["RepositoryName"] = boost::any(*repositoryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepositoryName") != m.end() && !m["RepositoryName"].empty()) {
      repositoryName = make_shared<string>(boost::any_cast<string>(m["RepositoryName"]));
    }
  }


  virtual ~GetArtifactRepositoryCredentialsResponseBodyAvailableResources() = default;
};
class GetArtifactRepositoryCredentialsResponseBodyCredentials : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> password{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> username{};

  GetArtifactRepositoryCredentialsResponseBodyCredentials() {}

  explicit GetArtifactRepositoryCredentialsResponseBodyCredentials(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~GetArtifactRepositoryCredentialsResponseBodyCredentials() = default;
};
class GetArtifactRepositoryCredentialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetArtifactRepositoryCredentialsResponseBodyAvailableResources>> availableResources{};
  shared_ptr<GetArtifactRepositoryCredentialsResponseBodyCredentials> credentials{};
  shared_ptr<string> expireDate{};
  shared_ptr<string> requestId{};

  GetArtifactRepositoryCredentialsResponseBody() {}

  explicit GetArtifactRepositoryCredentialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableResources) {
      vector<boost::any> temp1;
      for(auto item1:*availableResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableResources"] = boost::any(temp1);
    }
    if (credentials) {
      res["Credentials"] = credentials ? boost::any(credentials->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableResources") != m.end() && !m["AvailableResources"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableResources"].type()) {
        vector<GetArtifactRepositoryCredentialsResponseBodyAvailableResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetArtifactRepositoryCredentialsResponseBodyAvailableResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableResources = make_shared<vector<GetArtifactRepositoryCredentialsResponseBodyAvailableResources>>(expect1);
      }
    }
    if (m.find("Credentials") != m.end() && !m["Credentials"].empty()) {
      if (typeid(map<string, boost::any>) == m["Credentials"].type()) {
        GetArtifactRepositoryCredentialsResponseBodyCredentials model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Credentials"]));
        credentials = make_shared<GetArtifactRepositoryCredentialsResponseBodyCredentials>(model1);
      }
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetArtifactRepositoryCredentialsResponseBody() = default;
};
class GetArtifactRepositoryCredentialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetArtifactRepositoryCredentialsResponseBody> body{};

  GetArtifactRepositoryCredentialsResponse() {}

  explicit GetArtifactRepositoryCredentialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetArtifactRepositoryCredentialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetArtifactRepositoryCredentialsResponseBody>(model1);
      }
    }
  }


  virtual ~GetArtifactRepositoryCredentialsResponse() = default;
};
class GetServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};

  GetServiceRequest() {}

  explicit GetServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~GetServiceRequest() = default;
};
class GetServiceResponseBodyCommodityEntities : public Darabonba::Model {
public:
  shared_ptr<vector<string>> entityIds{};
  shared_ptr<string> predefinedParameterName{};
  shared_ptr<string> templateName{};

  GetServiceResponseBodyCommodityEntities() {}

  explicit GetServiceResponseBodyCommodityEntities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityIds) {
      res["EntityIds"] = boost::any(*entityIds);
    }
    if (predefinedParameterName) {
      res["PredefinedParameterName"] = boost::any(*predefinedParameterName);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityIds") != m.end() && !m["EntityIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EntityIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EntityIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      entityIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PredefinedParameterName") != m.end() && !m["PredefinedParameterName"].empty()) {
      predefinedParameterName = make_shared<string>(boost::any_cast<string>(m["PredefinedParameterName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceResponseBodyCommodityEntities() = default;
};
class GetServiceResponseBodyCommoditySpecifications : public Darabonba::Model {
public:
  shared_ptr<string> predefinedParameterName{};
  shared_ptr<string> specificationCode{};
  shared_ptr<string> templateName{};

  GetServiceResponseBodyCommoditySpecifications() {}

  explicit GetServiceResponseBodyCommoditySpecifications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedParameterName) {
      res["PredefinedParameterName"] = boost::any(*predefinedParameterName);
    }
    if (specificationCode) {
      res["SpecificationCode"] = boost::any(*specificationCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedParameterName") != m.end() && !m["PredefinedParameterName"].empty()) {
      predefinedParameterName = make_shared<string>(boost::any_cast<string>(m["PredefinedParameterName"]));
    }
    if (m.find("SpecificationCode") != m.end() && !m["SpecificationCode"].empty()) {
      specificationCode = make_shared<string>(boost::any_cast<string>(m["SpecificationCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceResponseBodyCommoditySpecifications() = default;
};
class GetServiceResponseBodyServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};

  GetServiceResponseBodyServiceInfos() {}

  explicit GetServiceResponseBodyServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
  }


  virtual ~GetServiceResponseBodyServiceInfos() = default;
};
class GetServiceResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetServiceResponseBodyTags() {}

  explicit GetServiceResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetServiceResponseBodyTags() = default;
};
class GetServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> alarmMetadata{};
  shared_ptr<string> approvalType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<vector<GetServiceResponseBodyCommodityEntities>> commodityEntities{};
  shared_ptr<vector<GetServiceResponseBodyCommoditySpecifications>> commoditySpecifications{};
  shared_ptr<string> createTime{};
  shared_ptr<long> defaultLicenseDays{};
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<long> duration{};
  shared_ptr<bool> isSupportOperated{};
  shared_ptr<string> licenseMetadata{};
  shared_ptr<string> operationMetadata{};
  shared_ptr<string> payFromType{};
  shared_ptr<string> payType{};
  shared_ptr<string> permission{};
  shared_ptr<string> policyNames{};
  shared_ptr<long> progress{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> registrationId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceDocUrl{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<GetServiceResponseBodyServiceInfos>> serviceInfos{};
  shared_ptr<string> serviceProductUrl{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> shareType{};
  shared_ptr<string> status{};
  shared_ptr<string> statusDetail{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<vector<GetServiceResponseBodyTags>> tags{};
  shared_ptr<string> tenantType{};
  shared_ptr<string> testStatus{};
  shared_ptr<long> trialDuration{};
  shared_ptr<string> trialType{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> upgradeMetadata{};
  shared_ptr<string> version{};
  shared_ptr<string> versionName{};

  GetServiceResponseBody() {}

  explicit GetServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmMetadata) {
      res["AlarmMetadata"] = boost::any(*alarmMetadata);
    }
    if (approvalType) {
      res["ApprovalType"] = boost::any(*approvalType);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (commodityEntities) {
      vector<boost::any> temp1;
      for(auto item1:*commodityEntities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CommodityEntities"] = boost::any(temp1);
    }
    if (commoditySpecifications) {
      vector<boost::any> temp1;
      for(auto item1:*commoditySpecifications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CommoditySpecifications"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultLicenseDays) {
      res["DefaultLicenseDays"] = boost::any(*defaultLicenseDays);
    }
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (isSupportOperated) {
      res["IsSupportOperated"] = boost::any(*isSupportOperated);
    }
    if (licenseMetadata) {
      res["LicenseMetadata"] = boost::any(*licenseMetadata);
    }
    if (operationMetadata) {
      res["OperationMetadata"] = boost::any(*operationMetadata);
    }
    if (payFromType) {
      res["PayFromType"] = boost::any(*payFromType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (permission) {
      res["Permission"] = boost::any(*permission);
    }
    if (policyNames) {
      res["PolicyNames"] = boost::any(*policyNames);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (registrationId) {
      res["RegistrationId"] = boost::any(*registrationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceDocUrl) {
      res["ServiceDocUrl"] = boost::any(*serviceDocUrl);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfos"] = boost::any(temp1);
    }
    if (serviceProductUrl) {
      res["ServiceProductUrl"] = boost::any(*serviceProductUrl);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantType) {
      res["TenantType"] = boost::any(*tenantType);
    }
    if (testStatus) {
      res["TestStatus"] = boost::any(*testStatus);
    }
    if (trialDuration) {
      res["TrialDuration"] = boost::any(*trialDuration);
    }
    if (trialType) {
      res["TrialType"] = boost::any(*trialType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (upgradeMetadata) {
      res["UpgradeMetadata"] = boost::any(*upgradeMetadata);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmMetadata") != m.end() && !m["AlarmMetadata"].empty()) {
      alarmMetadata = make_shared<string>(boost::any_cast<string>(m["AlarmMetadata"]));
    }
    if (m.find("ApprovalType") != m.end() && !m["ApprovalType"].empty()) {
      approvalType = make_shared<string>(boost::any_cast<string>(m["ApprovalType"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CommodityEntities") != m.end() && !m["CommodityEntities"].empty()) {
      if (typeid(vector<boost::any>) == m["CommodityEntities"].type()) {
        vector<GetServiceResponseBodyCommodityEntities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CommodityEntities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyCommodityEntities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commodityEntities = make_shared<vector<GetServiceResponseBodyCommodityEntities>>(expect1);
      }
    }
    if (m.find("CommoditySpecifications") != m.end() && !m["CommoditySpecifications"].empty()) {
      if (typeid(vector<boost::any>) == m["CommoditySpecifications"].type()) {
        vector<GetServiceResponseBodyCommoditySpecifications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CommoditySpecifications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyCommoditySpecifications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commoditySpecifications = make_shared<vector<GetServiceResponseBodyCommoditySpecifications>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DefaultLicenseDays") != m.end() && !m["DefaultLicenseDays"].empty()) {
      defaultLicenseDays = make_shared<long>(boost::any_cast<long>(m["DefaultLicenseDays"]));
    }
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("IsSupportOperated") != m.end() && !m["IsSupportOperated"].empty()) {
      isSupportOperated = make_shared<bool>(boost::any_cast<bool>(m["IsSupportOperated"]));
    }
    if (m.find("LicenseMetadata") != m.end() && !m["LicenseMetadata"].empty()) {
      licenseMetadata = make_shared<string>(boost::any_cast<string>(m["LicenseMetadata"]));
    }
    if (m.find("OperationMetadata") != m.end() && !m["OperationMetadata"].empty()) {
      operationMetadata = make_shared<string>(boost::any_cast<string>(m["OperationMetadata"]));
    }
    if (m.find("PayFromType") != m.end() && !m["PayFromType"].empty()) {
      payFromType = make_shared<string>(boost::any_cast<string>(m["PayFromType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      permission = make_shared<string>(boost::any_cast<string>(m["Permission"]));
    }
    if (m.find("PolicyNames") != m.end() && !m["PolicyNames"].empty()) {
      policyNames = make_shared<string>(boost::any_cast<string>(m["PolicyNames"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("RegistrationId") != m.end() && !m["RegistrationId"].empty()) {
      registrationId = make_shared<string>(boost::any_cast<string>(m["RegistrationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceDocUrl") != m.end() && !m["ServiceDocUrl"].empty()) {
      serviceDocUrl = make_shared<string>(boost::any_cast<string>(m["ServiceDocUrl"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfos") != m.end() && !m["ServiceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfos"].type()) {
        vector<GetServiceResponseBodyServiceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyServiceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfos = make_shared<vector<GetServiceResponseBodyServiceInfos>>(expect1);
      }
    }
    if (m.find("ServiceProductUrl") != m.end() && !m["ServiceProductUrl"].empty()) {
      serviceProductUrl = make_shared<string>(boost::any_cast<string>(m["ServiceProductUrl"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetServiceResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetServiceResponseBodyTags>>(expect1);
      }
    }
    if (m.find("TenantType") != m.end() && !m["TenantType"].empty()) {
      tenantType = make_shared<string>(boost::any_cast<string>(m["TenantType"]));
    }
    if (m.find("TestStatus") != m.end() && !m["TestStatus"].empty()) {
      testStatus = make_shared<string>(boost::any_cast<string>(m["TestStatus"]));
    }
    if (m.find("TrialDuration") != m.end() && !m["TrialDuration"].empty()) {
      trialDuration = make_shared<long>(boost::any_cast<long>(m["TrialDuration"]));
    }
    if (m.find("TrialType") != m.end() && !m["TrialType"].empty()) {
      trialType = make_shared<string>(boost::any_cast<string>(m["TrialType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpgradeMetadata") != m.end() && !m["UpgradeMetadata"].empty()) {
      upgradeMetadata = make_shared<string>(boost::any_cast<string>(m["UpgradeMetadata"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetServiceResponseBody() = default;
};
class GetServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceResponseBody> body{};

  GetServiceResponse() {}

  explicit GetServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceResponse() = default;
};
class GetServiceEstimateCostRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> templateName{};

  GetServiceEstimateCostRequest() {}

  explicit GetServiceEstimateCostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceEstimateCostRequest() = default;
};
class GetServiceEstimateCostShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> templateName{};

  GetServiceEstimateCostShrinkRequest() {}

  explicit GetServiceEstimateCostShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceEstimateCostShrinkRequest() = default;
};
class GetServiceEstimateCostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> resources{};

  GetServiceEstimateCostResponseBody() {}

  explicit GetServiceEstimateCostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Resources"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resources = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetServiceEstimateCostResponseBody() = default;
};
class GetServiceEstimateCostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceEstimateCostResponseBody> body{};

  GetServiceEstimateCostResponse() {}

  explicit GetServiceEstimateCostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceEstimateCostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceEstimateCostResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceEstimateCostResponse() = default;
};
class GetServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  GetServiceInstanceRequest() {}

  explicit GetServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~GetServiceInstanceRequest() = default;
};
class GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs : public Darabonba::Model {
public:
  shared_ptr<long> connectBandwidth{};
  shared_ptr<string> domainName{};
  shared_ptr<vector<string>> endpointIps{};
  shared_ptr<string> ingressEndpointStatus{};
  shared_ptr<string> networkServiceStatus{};
  shared_ptr<vector<string>> securityGroups{};
  shared_ptr<vector<string>> vSwitches{};
  shared_ptr<string> vpcId{};

  GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs() {}

  explicit GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectBandwidth) {
      res["ConnectBandwidth"] = boost::any(*connectBandwidth);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endpointIps) {
      res["EndpointIps"] = boost::any(*endpointIps);
    }
    if (ingressEndpointStatus) {
      res["IngressEndpointStatus"] = boost::any(*ingressEndpointStatus);
    }
    if (networkServiceStatus) {
      res["NetworkServiceStatus"] = boost::any(*networkServiceStatus);
    }
    if (securityGroups) {
      res["SecurityGroups"] = boost::any(*securityGroups);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectBandwidth") != m.end() && !m["ConnectBandwidth"].empty()) {
      connectBandwidth = make_shared<long>(boost::any_cast<long>(m["ConnectBandwidth"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndpointIps") != m.end() && !m["EndpointIps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndpointIps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndpointIps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpointIps = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IngressEndpointStatus") != m.end() && !m["IngressEndpointStatus"].empty()) {
      ingressEndpointStatus = make_shared<string>(boost::any_cast<string>(m["IngressEndpointStatus"]));
    }
    if (m.find("NetworkServiceStatus") != m.end() && !m["NetworkServiceStatus"].empty()) {
      networkServiceStatus = make_shared<string>(boost::any_cast<string>(m["NetworkServiceStatus"]));
    }
    if (m.find("SecurityGroups") != m.end() && !m["SecurityGroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs() = default;
};
class GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs>> connectionConfigs{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> endpointServiceId{};
  shared_ptr<string> privateZoneName{};

  GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections() {}

  explicit GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*connectionConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnectionConfigs"] = boost::any(temp1);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (endpointServiceId) {
      res["EndpointServiceId"] = boost::any(*endpointServiceId);
    }
    if (privateZoneName) {
      res["PrivateZoneName"] = boost::any(*privateZoneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionConfigs") != m.end() && !m["ConnectionConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnectionConfigs"].type()) {
        vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnectionConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connectionConfigs = make_shared<vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs>>(expect1);
      }
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("EndpointServiceId") != m.end() && !m["EndpointServiceId"].empty()) {
      endpointServiceId = make_shared<string>(boost::any_cast<string>(m["EndpointServiceId"]));
    }
    if (m.find("PrivateZoneName") != m.end() && !m["PrivateZoneName"].empty()) {
      privateZoneName = make_shared<string>(boost::any_cast<string>(m["PrivateZoneName"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections() = default;
};
class GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};
  shared_ptr<string> endpointServiceId{};

  GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections() {}

  explicit GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (endpointServiceId) {
      res["EndpointServiceId"] = boost::any(*endpointServiceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("EndpointServiceId") != m.end() && !m["EndpointServiceId"].empty()) {
      endpointServiceId = make_shared<string>(boost::any_cast<string>(m["EndpointServiceId"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections() = default;
};
class GetServiceInstanceResponseBodyNetworkConfig : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};
  shared_ptr<string> endpointServiceId{};
  shared_ptr<vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections>> privateVpcConnections{};
  shared_ptr<vector<GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections>> reversePrivateVpcConnections{};

  GetServiceInstanceResponseBodyNetworkConfig() {}

  explicit GetServiceInstanceResponseBodyNetworkConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (endpointServiceId) {
      res["EndpointServiceId"] = boost::any(*endpointServiceId);
    }
    if (privateVpcConnections) {
      vector<boost::any> temp1;
      for(auto item1:*privateVpcConnections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PrivateVpcConnections"] = boost::any(temp1);
    }
    if (reversePrivateVpcConnections) {
      vector<boost::any> temp1;
      for(auto item1:*reversePrivateVpcConnections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReversePrivateVpcConnections"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("EndpointServiceId") != m.end() && !m["EndpointServiceId"].empty()) {
      endpointServiceId = make_shared<string>(boost::any_cast<string>(m["EndpointServiceId"]));
    }
    if (m.find("PrivateVpcConnections") != m.end() && !m["PrivateVpcConnections"].empty()) {
      if (typeid(vector<boost::any>) == m["PrivateVpcConnections"].type()) {
        vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PrivateVpcConnections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        privateVpcConnections = make_shared<vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections>>(expect1);
      }
    }
    if (m.find("ReversePrivateVpcConnections") != m.end() && !m["ReversePrivateVpcConnections"].empty()) {
      if (typeid(vector<boost::any>) == m["ReversePrivateVpcConnections"].type()) {
        vector<GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReversePrivateVpcConnections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        reversePrivateVpcConnections = make_shared<vector<GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections>>(expect1);
      }
    }
  }


  virtual ~GetServiceInstanceResponseBodyNetworkConfig() = default;
};
class GetServiceInstanceResponseBodyServiceServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};

  GetServiceInstanceResponseBodyServiceServiceInfos() {}

  explicit GetServiceInstanceResponseBodyServiceServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyServiceServiceInfos() = default;
};
class GetServiceInstanceResponseBodyService : public Darabonba::Model {
public:
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> serviceDocUrl{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<GetServiceInstanceResponseBodyServiceServiceInfos>> serviceInfos{};
  shared_ptr<string> serviceProductUrl{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<vector<string>> upgradableServiceVersions{};
  shared_ptr<string> version{};
  shared_ptr<string> versionName{};

  GetServiceInstanceResponseBodyService() {}

  explicit GetServiceInstanceResponseBodyService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (serviceDocUrl) {
      res["ServiceDocUrl"] = boost::any(*serviceDocUrl);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfos"] = boost::any(temp1);
    }
    if (serviceProductUrl) {
      res["ServiceProductUrl"] = boost::any(*serviceProductUrl);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (upgradableServiceVersions) {
      res["UpgradableServiceVersions"] = boost::any(*upgradableServiceVersions);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("ServiceDocUrl") != m.end() && !m["ServiceDocUrl"].empty()) {
      serviceDocUrl = make_shared<string>(boost::any_cast<string>(m["ServiceDocUrl"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfos") != m.end() && !m["ServiceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfos"].type()) {
        vector<GetServiceInstanceResponseBodyServiceServiceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyServiceServiceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfos = make_shared<vector<GetServiceInstanceResponseBodyServiceServiceInfos>>(expect1);
      }
    }
    if (m.find("ServiceProductUrl") != m.end() && !m["ServiceProductUrl"].empty()) {
      serviceProductUrl = make_shared<string>(boost::any_cast<string>(m["ServiceProductUrl"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("UpgradableServiceVersions") != m.end() && !m["UpgradableServiceVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UpgradableServiceVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UpgradableServiceVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      upgradableServiceVersions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyService() = default;
};
class GetServiceInstanceResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetServiceInstanceResponseBodyTags() {}

  explicit GetServiceInstanceResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetServiceInstanceResponseBodyTags() = default;
};
class GetServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> enableInstanceOps{};
  shared_ptr<string> enableUserPrometheus{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> isOperated{};
  shared_ptr<string> licenseMetadata{};
  shared_ptr<string> name{};
  shared_ptr<GetServiceInstanceResponseBodyNetworkConfig> networkConfig{};
  shared_ptr<string> operatedServiceInstanceId{};
  shared_ptr<string> operationEndTime{};
  shared_ptr<string> operationStartTime{};
  shared_ptr<string> outputs{};
  shared_ptr<string> parameters{};
  shared_ptr<string> payType{};
  shared_ptr<long> progress{};
  shared_ptr<string> rdAccountLoginUrl{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resources{};
  shared_ptr<GetServiceInstanceResponseBodyService> service{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> statusDetail{};
  shared_ptr<long> supplierUid{};
  shared_ptr<vector<GetServiceInstanceResponseBodyTags>> tags{};
  shared_ptr<string> templateName{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> userId{};

  GetServiceInstanceResponseBody() {}

  explicit GetServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (enableInstanceOps) {
      res["EnableInstanceOps"] = boost::any(*enableInstanceOps);
    }
    if (enableUserPrometheus) {
      res["EnableUserPrometheus"] = boost::any(*enableUserPrometheus);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (isOperated) {
      res["IsOperated"] = boost::any(*isOperated);
    }
    if (licenseMetadata) {
      res["LicenseMetadata"] = boost::any(*licenseMetadata);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (networkConfig) {
      res["NetworkConfig"] = networkConfig ? boost::any(networkConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operatedServiceInstanceId) {
      res["OperatedServiceInstanceId"] = boost::any(*operatedServiceInstanceId);
    }
    if (operationEndTime) {
      res["OperationEndTime"] = boost::any(*operationEndTime);
    }
    if (operationStartTime) {
      res["OperationStartTime"] = boost::any(*operationStartTime);
    }
    if (outputs) {
      res["Outputs"] = boost::any(*outputs);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (rdAccountLoginUrl) {
      res["RdAccountLoginUrl"] = boost::any(*rdAccountLoginUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (service) {
      res["Service"] = service ? boost::any(service->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (supplierUid) {
      res["SupplierUid"] = boost::any(*supplierUid);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EnableInstanceOps") != m.end() && !m["EnableInstanceOps"].empty()) {
      enableInstanceOps = make_shared<bool>(boost::any_cast<bool>(m["EnableInstanceOps"]));
    }
    if (m.find("EnableUserPrometheus") != m.end() && !m["EnableUserPrometheus"].empty()) {
      enableUserPrometheus = make_shared<string>(boost::any_cast<string>(m["EnableUserPrometheus"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IsOperated") != m.end() && !m["IsOperated"].empty()) {
      isOperated = make_shared<bool>(boost::any_cast<bool>(m["IsOperated"]));
    }
    if (m.find("LicenseMetadata") != m.end() && !m["LicenseMetadata"].empty()) {
      licenseMetadata = make_shared<string>(boost::any_cast<string>(m["LicenseMetadata"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NetworkConfig") != m.end() && !m["NetworkConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetworkConfig"].type()) {
        GetServiceInstanceResponseBodyNetworkConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetworkConfig"]));
        networkConfig = make_shared<GetServiceInstanceResponseBodyNetworkConfig>(model1);
      }
    }
    if (m.find("OperatedServiceInstanceId") != m.end() && !m["OperatedServiceInstanceId"].empty()) {
      operatedServiceInstanceId = make_shared<string>(boost::any_cast<string>(m["OperatedServiceInstanceId"]));
    }
    if (m.find("OperationEndTime") != m.end() && !m["OperationEndTime"].empty()) {
      operationEndTime = make_shared<string>(boost::any_cast<string>(m["OperationEndTime"]));
    }
    if (m.find("OperationStartTime") != m.end() && !m["OperationStartTime"].empty()) {
      operationStartTime = make_shared<string>(boost::any_cast<string>(m["OperationStartTime"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      outputs = make_shared<string>(boost::any_cast<string>(m["Outputs"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RdAccountLoginUrl") != m.end() && !m["RdAccountLoginUrl"].empty()) {
      rdAccountLoginUrl = make_shared<string>(boost::any_cast<string>(m["RdAccountLoginUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      if (typeid(map<string, boost::any>) == m["Service"].type()) {
        GetServiceInstanceResponseBodyService model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Service"]));
        service = make_shared<GetServiceInstanceResponseBodyService>(model1);
      }
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("SupplierUid") != m.end() && !m["SupplierUid"].empty()) {
      supplierUid = make_shared<long>(boost::any_cast<long>(m["SupplierUid"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetServiceInstanceResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetServiceInstanceResponseBodyTags>>(expect1);
      }
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~GetServiceInstanceResponseBody() = default;
};
class GetServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceInstanceResponseBody> body{};

  GetServiceInstanceResponse() {}

  explicit GetServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceInstanceResponse() = default;
};
class GetUploadCredentialsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};

  GetUploadCredentialsRequest() {}

  explicit GetUploadCredentialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
  }


  virtual ~GetUploadCredentialsRequest() = default;
};
class GetUploadCredentialsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> expireDate{};
  shared_ptr<string> key{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityToken{};

  GetUploadCredentialsResponseBodyData() {}

  explicit GetUploadCredentialsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetUploadCredentialsResponseBodyData() = default;
};
class GetUploadCredentialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetUploadCredentialsResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetUploadCredentialsResponseBody() {}

  explicit GetUploadCredentialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetUploadCredentialsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetUploadCredentialsResponseBodyData>(model1);
      }
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


  virtual ~GetUploadCredentialsResponseBody() = default;
};
class GetUploadCredentialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUploadCredentialsResponseBody> body{};

  GetUploadCredentialsResponse() {}

  explicit GetUploadCredentialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUploadCredentialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUploadCredentialsResponseBody>(model1);
      }
    }
  }


  virtual ~GetUploadCredentialsResponse() = default;
};
class ListArtifactVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> maxResult{};
  shared_ptr<string> nextToken{};

  ListArtifactVersionsRequest() {}

  explicit ListArtifactVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
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
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("MaxResult") != m.end() && !m["MaxResult"].empty()) {
      maxResult = make_shared<string>(boost::any_cast<string>(m["MaxResult"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListArtifactVersionsRequest() = default;
};
class ListArtifactVersionsResponseBodyArtifacts : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactProperty{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> artifactVersion{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<map<string, string>> imageDelivery{};
  shared_ptr<string> progress{};
  shared_ptr<string> resultFile{};
  shared_ptr<string> securityAuditResult{};
  shared_ptr<string> status{};
  shared_ptr<string> supportRegionIds{};
  shared_ptr<string> versionName{};

  ListArtifactVersionsResponseBodyArtifacts() {}

  explicit ListArtifactVersionsResponseBodyArtifacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactProperty) {
      res["ArtifactProperty"] = boost::any(*artifactProperty);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (imageDelivery) {
      res["ImageDelivery"] = boost::any(*imageDelivery);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (resultFile) {
      res["ResultFile"] = boost::any(*resultFile);
    }
    if (securityAuditResult) {
      res["SecurityAuditResult"] = boost::any(*securityAuditResult);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      artifactProperty = make_shared<string>(boost::any_cast<string>(m["ArtifactProperty"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("ImageDelivery") != m.end() && !m["ImageDelivery"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ImageDelivery"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      imageDelivery = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("ResultFile") != m.end() && !m["ResultFile"].empty()) {
      resultFile = make_shared<string>(boost::any_cast<string>(m["ResultFile"]));
    }
    if (m.find("SecurityAuditResult") != m.end() && !m["SecurityAuditResult"].empty()) {
      securityAuditResult = make_shared<string>(boost::any_cast<string>(m["SecurityAuditResult"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      supportRegionIds = make_shared<string>(boost::any_cast<string>(m["SupportRegionIds"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~ListArtifactVersionsResponseBodyArtifacts() = default;
};
class ListArtifactVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListArtifactVersionsResponseBodyArtifacts>> artifacts{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListArtifactVersionsResponseBody() {}

  explicit ListArtifactVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifacts) {
      vector<boost::any> temp1;
      for(auto item1:*artifacts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Artifacts"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Artifacts") != m.end() && !m["Artifacts"].empty()) {
      if (typeid(vector<boost::any>) == m["Artifacts"].type()) {
        vector<ListArtifactVersionsResponseBodyArtifacts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Artifacts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListArtifactVersionsResponseBodyArtifacts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        artifacts = make_shared<vector<ListArtifactVersionsResponseBodyArtifacts>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListArtifactVersionsResponseBody() = default;
};
class ListArtifactVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListArtifactVersionsResponseBody> body{};

  ListArtifactVersionsResponse() {}

  explicit ListArtifactVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListArtifactVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListArtifactVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListArtifactVersionsResponse() = default;
};
class ListArtifactsRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> values{};

  ListArtifactsRequestFilter() {}

  explicit ListArtifactsRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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


  virtual ~ListArtifactsRequestFilter() = default;
};
class ListArtifactsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListArtifactsRequestFilter>> filter{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};

  ListArtifactsRequest() {}

  explicit ListArtifactsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListArtifactsRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListArtifactsRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListArtifactsRequestFilter>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListArtifactsRequest() = default;
};
class ListArtifactsResponseBodyArtifacts : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> maxVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};

  ListArtifactsResponseBodyArtifacts() {}

  explicit ListArtifactsResponseBodyArtifacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (maxVersion) {
      res["MaxVersion"] = boost::any(*maxVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("MaxVersion") != m.end() && !m["MaxVersion"].empty()) {
      maxVersion = make_shared<string>(boost::any_cast<string>(m["MaxVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListArtifactsResponseBodyArtifacts() = default;
};
class ListArtifactsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListArtifactsResponseBodyArtifacts>> artifacts{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListArtifactsResponseBody() {}

  explicit ListArtifactsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifacts) {
      vector<boost::any> temp1;
      for(auto item1:*artifacts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Artifacts"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Artifacts") != m.end() && !m["Artifacts"].empty()) {
      if (typeid(vector<boost::any>) == m["Artifacts"].type()) {
        vector<ListArtifactsResponseBodyArtifacts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Artifacts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListArtifactsResponseBodyArtifacts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        artifacts = make_shared<vector<ListArtifactsResponseBodyArtifacts>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListArtifactsResponseBody() = default;
};
class ListArtifactsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListArtifactsResponseBody> body{};

  ListArtifactsResponse() {}

  explicit ListArtifactsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListArtifactsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListArtifactsResponseBody>(model1);
      }
    }
  }


  virtual ~ListArtifactsResponse() = default;
};
class ListServiceInstancesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> value{};

  ListServiceInstancesRequestFilter() {}

  explicit ListServiceInstancesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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


  virtual ~ListServiceInstancesRequestFilter() = default;
};
class ListServiceInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServiceInstancesRequestTag() {}

  explicit ListServiceInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServiceInstancesRequestTag() = default;
};
class ListServiceInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListServiceInstancesRequestFilter>> filter{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> showDeleted{};
  shared_ptr<vector<ListServiceInstancesRequestTag>> tag{};

  ListServiceInstancesRequest() {}

  explicit ListServiceInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (showDeleted) {
      res["ShowDeleted"] = boost::any(*showDeleted);
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
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListServiceInstancesRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstancesRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListServiceInstancesRequestFilter>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ShowDeleted") != m.end() && !m["ShowDeleted"].empty()) {
      showDeleted = make_shared<bool>(boost::any_cast<bool>(m["ShowDeleted"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListServiceInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListServiceInstancesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListServiceInstancesRequest() = default;
};
class ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};

  ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos() {}

  explicit ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
  }


  virtual ~ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos() = default;
};
class ListServiceInstancesResponseBodyServiceInstancesService : public Darabonba::Model {
public:
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<bool> enablePrivateVpcConnection{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos>> serviceInfos{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<string> version{};
  shared_ptr<string> versionName{};

  ListServiceInstancesResponseBodyServiceInstancesService() {}

  explicit ListServiceInstancesResponseBodyServiceInstancesService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (enablePrivateVpcConnection) {
      res["EnablePrivateVpcConnection"] = boost::any(*enablePrivateVpcConnection);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfos"] = boost::any(temp1);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("EnablePrivateVpcConnection") != m.end() && !m["EnablePrivateVpcConnection"].empty()) {
      enablePrivateVpcConnection = make_shared<bool>(boost::any_cast<bool>(m["EnablePrivateVpcConnection"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfos") != m.end() && !m["ServiceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfos"].type()) {
        vector<ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfos = make_shared<vector<ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos>>(expect1);
      }
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~ListServiceInstancesResponseBodyServiceInstancesService() = default;
};
class ListServiceInstancesResponseBodyServiceInstancesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServiceInstancesResponseBodyServiceInstancesTags() {}

  explicit ListServiceInstancesResponseBodyServiceInstancesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServiceInstancesResponseBodyServiceInstancesTags() = default;
};
class ListServiceInstancesResponseBodyServiceInstances : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> enableInstanceOps{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> isOperated{};
  shared_ptr<string> name{};
  shared_ptr<string> operatedServiceInstanceId{};
  shared_ptr<string> operationEndTime{};
  shared_ptr<string> operationStartTime{};
  shared_ptr<string> parameters{};
  shared_ptr<string> payType{};
  shared_ptr<long> progress{};
  shared_ptr<ListServiceInstancesResponseBodyServiceInstancesService> service{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> statusDetail{};
  shared_ptr<vector<ListServiceInstancesResponseBodyServiceInstancesTags>> tags{};
  shared_ptr<string> templateName{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> userId{};

  ListServiceInstancesResponseBodyServiceInstances() {}

  explicit ListServiceInstancesResponseBodyServiceInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (enableInstanceOps) {
      res["EnableInstanceOps"] = boost::any(*enableInstanceOps);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (isOperated) {
      res["IsOperated"] = boost::any(*isOperated);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operatedServiceInstanceId) {
      res["OperatedServiceInstanceId"] = boost::any(*operatedServiceInstanceId);
    }
    if (operationEndTime) {
      res["OperationEndTime"] = boost::any(*operationEndTime);
    }
    if (operationStartTime) {
      res["OperationStartTime"] = boost::any(*operationStartTime);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (service) {
      res["Service"] = service ? boost::any(service->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EnableInstanceOps") != m.end() && !m["EnableInstanceOps"].empty()) {
      enableInstanceOps = make_shared<bool>(boost::any_cast<bool>(m["EnableInstanceOps"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IsOperated") != m.end() && !m["IsOperated"].empty()) {
      isOperated = make_shared<bool>(boost::any_cast<bool>(m["IsOperated"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperatedServiceInstanceId") != m.end() && !m["OperatedServiceInstanceId"].empty()) {
      operatedServiceInstanceId = make_shared<string>(boost::any_cast<string>(m["OperatedServiceInstanceId"]));
    }
    if (m.find("OperationEndTime") != m.end() && !m["OperationEndTime"].empty()) {
      operationEndTime = make_shared<string>(boost::any_cast<string>(m["OperationEndTime"]));
    }
    if (m.find("OperationStartTime") != m.end() && !m["OperationStartTime"].empty()) {
      operationStartTime = make_shared<string>(boost::any_cast<string>(m["OperationStartTime"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      if (typeid(map<string, boost::any>) == m["Service"].type()) {
        ListServiceInstancesResponseBodyServiceInstancesService model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Service"]));
        service = make_shared<ListServiceInstancesResponseBodyServiceInstancesService>(model1);
      }
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListServiceInstancesResponseBodyServiceInstancesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstancesResponseBodyServiceInstancesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListServiceInstancesResponseBodyServiceInstancesTags>>(expect1);
      }
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~ListServiceInstancesResponseBodyServiceInstances() = default;
};
class ListServiceInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServiceInstancesResponseBodyServiceInstances>> serviceInstances{};
  shared_ptr<long> totalCount{};

  ListServiceInstancesResponseBody() {}

  explicit ListServiceInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceInstances) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInstances"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceInstances") != m.end() && !m["ServiceInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInstances"].type()) {
        vector<ListServiceInstancesResponseBodyServiceInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstancesResponseBodyServiceInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInstances = make_shared<vector<ListServiceInstancesResponseBodyServiceInstances>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServiceInstancesResponseBody() = default;
};
class ListServiceInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceInstancesResponseBody> body{};

  ListServiceInstancesResponse() {}

  explicit ListServiceInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServiceInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceInstancesResponse() = default;
};
class ListServiceUsagesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> value{};

  ListServiceUsagesRequestFilter() {}

  explicit ListServiceUsagesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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


  virtual ~ListServiceUsagesRequestFilter() = default;
};
class ListServiceUsagesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListServiceUsagesRequestFilter>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListServiceUsagesRequest() {}

  explicit ListServiceUsagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListServiceUsagesRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceUsagesRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListServiceUsagesRequestFilter>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListServiceUsagesRequest() = default;
};
class ListServiceUsagesResponseBodyServiceUsagesUserInformation : public Darabonba::Model {
public:
  shared_ptr<string> company{};
  shared_ptr<string> country{};
  shared_ptr<string> emailAddress{};
  shared_ptr<string> industry{};
  shared_ptr<string> name{};
  shared_ptr<string> source{};
  shared_ptr<string> telephone{};
  shared_ptr<string> title{};

  ListServiceUsagesResponseBodyServiceUsagesUserInformation() {}

  explicit ListServiceUsagesResponseBodyServiceUsagesUserInformation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (company) {
      res["Company"] = boost::any(*company);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (emailAddress) {
      res["EmailAddress"] = boost::any(*emailAddress);
    }
    if (industry) {
      res["Industry"] = boost::any(*industry);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (telephone) {
      res["Telephone"] = boost::any(*telephone);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Company") != m.end() && !m["Company"].empty()) {
      company = make_shared<string>(boost::any_cast<string>(m["Company"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("EmailAddress") != m.end() && !m["EmailAddress"].empty()) {
      emailAddress = make_shared<string>(boost::any_cast<string>(m["EmailAddress"]));
    }
    if (m.find("Industry") != m.end() && !m["Industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["Industry"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Telephone") != m.end() && !m["Telephone"].empty()) {
      telephone = make_shared<string>(boost::any_cast<string>(m["Telephone"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListServiceUsagesResponseBodyServiceUsagesUserInformation() = default;
};
class ListServiceUsagesResponseBodyServiceUsages : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createTime{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> userAliUid{};
  shared_ptr<ListServiceUsagesResponseBodyServiceUsagesUserInformation> userInformation{};

  ListServiceUsagesResponseBodyServiceUsages() {}

  explicit ListServiceUsagesResponseBodyServiceUsages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userAliUid) {
      res["UserAliUid"] = boost::any(*userAliUid);
    }
    if (userInformation) {
      res["UserInformation"] = userInformation ? boost::any(userInformation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserAliUid") != m.end() && !m["UserAliUid"].empty()) {
      userAliUid = make_shared<long>(boost::any_cast<long>(m["UserAliUid"]));
    }
    if (m.find("UserInformation") != m.end() && !m["UserInformation"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInformation"].type()) {
        ListServiceUsagesResponseBodyServiceUsagesUserInformation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInformation"]));
        userInformation = make_shared<ListServiceUsagesResponseBodyServiceUsagesUserInformation>(model1);
      }
    }
  }


  virtual ~ListServiceUsagesResponseBodyServiceUsages() = default;
};
class ListServiceUsagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServiceUsagesResponseBodyServiceUsages>> serviceUsages{};
  shared_ptr<long> totalCount{};

  ListServiceUsagesResponseBody() {}

  explicit ListServiceUsagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceUsages) {
      vector<boost::any> temp1;
      for(auto item1:*serviceUsages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceUsages"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("ServiceUsages") != m.end() && !m["ServiceUsages"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceUsages"].type()) {
        vector<ListServiceUsagesResponseBodyServiceUsages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceUsages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceUsagesResponseBodyServiceUsages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceUsages = make_shared<vector<ListServiceUsagesResponseBodyServiceUsages>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServiceUsagesResponseBody() = default;
};
class ListServiceUsagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceUsagesResponseBody> body{};

  ListServiceUsagesResponse() {}

  explicit ListServiceUsagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServiceUsagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceUsagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceUsagesResponse() = default;
};
class ListServicesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> value{};

  ListServicesRequestFilter() {}

  explicit ListServicesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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


  virtual ~ListServicesRequestFilter() = default;
};
class ListServicesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServicesRequestTag() {}

  explicit ListServicesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServicesRequestTag() = default;
};
class ListServicesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allVersions{};
  shared_ptr<vector<ListServicesRequestFilter>> filter{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListServicesRequestTag>> tag{};

  ListServicesRequest() {}

  explicit ListServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allVersions) {
      res["AllVersions"] = boost::any(*allVersions);
    }
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
    if (m.find("AllVersions") != m.end() && !m["AllVersions"].empty()) {
      allVersions = make_shared<bool>(boost::any_cast<bool>(m["AllVersions"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListServicesRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListServicesRequestFilter>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListServicesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListServicesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListServicesRequest() = default;
};
class ListServicesResponseBodyServicesServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};

  ListServicesResponseBodyServicesServiceInfos() {}

  explicit ListServicesResponseBodyServicesServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
  }


  virtual ~ListServicesResponseBodyServicesServiceInfos() = default;
};
class ListServicesResponseBodyServicesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServicesResponseBodyServicesTags() {}

  explicit ListServicesResponseBodyServicesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServicesResponseBodyServicesTags() = default;
};
class ListServicesResponseBodyServices : public Darabonba::Model {
public:
  shared_ptr<string> approvalType{};
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactVersion{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> defaultVersion{};
  shared_ptr<string> deployType{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> relationType{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<ListServicesResponseBodyServicesServiceInfos>> serviceInfos{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> shareType{};
  shared_ptr<string> sourceImage{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<vector<ListServicesResponseBodyServicesTags>> tags{};
  shared_ptr<string> tenantType{};
  shared_ptr<string> trialType{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> version{};
  shared_ptr<string> versionName{};

  ListServicesResponseBodyServices() {}

  explicit ListServicesResponseBodyServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalType) {
      res["ApprovalType"] = boost::any(*approvalType);
    }
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (relationType) {
      res["RelationType"] = boost::any(*relationType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfos"] = boost::any(temp1);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (sourceImage) {
      res["SourceImage"] = boost::any(*sourceImage);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantType) {
      res["TenantType"] = boost::any(*tenantType);
    }
    if (trialType) {
      res["TrialType"] = boost::any(*trialType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalType") != m.end() && !m["ApprovalType"].empty()) {
      approvalType = make_shared<string>(boost::any_cast<string>(m["ApprovalType"]));
    }
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<bool>(boost::any_cast<bool>(m["DefaultVersion"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("RelationType") != m.end() && !m["RelationType"].empty()) {
      relationType = make_shared<string>(boost::any_cast<string>(m["RelationType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfos") != m.end() && !m["ServiceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfos"].type()) {
        vector<ListServicesResponseBodyServicesServiceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesResponseBodyServicesServiceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfos = make_shared<vector<ListServicesResponseBodyServicesServiceInfos>>(expect1);
      }
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("SourceImage") != m.end() && !m["SourceImage"].empty()) {
      sourceImage = make_shared<string>(boost::any_cast<string>(m["SourceImage"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListServicesResponseBodyServicesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesResponseBodyServicesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListServicesResponseBodyServicesTags>>(expect1);
      }
    }
    if (m.find("TenantType") != m.end() && !m["TenantType"].empty()) {
      tenantType = make_shared<string>(boost::any_cast<string>(m["TenantType"]));
    }
    if (m.find("TrialType") != m.end() && !m["TrialType"].empty()) {
      trialType = make_shared<string>(boost::any_cast<string>(m["TrialType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~ListServicesResponseBodyServices() = default;
};
class ListServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServicesResponseBodyServices>> services{};
  shared_ptr<string> totalCount{};

  ListServicesResponseBody() {}

  explicit ListServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Services"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<ListServicesResponseBodyServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesResponseBodyServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<ListServicesResponseBodyServices>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListServicesResponseBody() = default;
};
class ListServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServicesResponseBody> body{};

  ListServicesResponse() {}

  explicit ListServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServicesResponse() = default;
};
class ReleaseArtifactRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};

  ReleaseArtifactRequest() {}

  explicit ReleaseArtifactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
  }


  virtual ~ReleaseArtifactRequest() = default;
};
class ReleaseArtifactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactProperty{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> artifactVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> versionName{};

  ReleaseArtifactResponseBody() {}

  explicit ReleaseArtifactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactProperty) {
      res["ArtifactProperty"] = boost::any(*artifactProperty);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      artifactProperty = make_shared<string>(boost::any_cast<string>(m["ArtifactProperty"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~ReleaseArtifactResponseBody() = default;
};
class ReleaseArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseArtifactResponseBody> body{};

  ReleaseArtifactResponse() {}

  explicit ReleaseArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseArtifactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseArtifactResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseArtifactResponse() = default;
};
class UpdateArtifactRequestArtifactProperty : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> commodityVersion{};
  shared_ptr<string> fileScriptMetadata{};
  shared_ptr<string> imageId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scriptMetadata{};
  shared_ptr<string> url{};

  UpdateArtifactRequestArtifactProperty() {}

  explicit UpdateArtifactRequestArtifactProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (commodityVersion) {
      res["CommodityVersion"] = boost::any(*commodityVersion);
    }
    if (fileScriptMetadata) {
      res["FileScriptMetadata"] = boost::any(*fileScriptMetadata);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scriptMetadata) {
      res["ScriptMetadata"] = boost::any(*scriptMetadata);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CommodityVersion") != m.end() && !m["CommodityVersion"].empty()) {
      commodityVersion = make_shared<string>(boost::any_cast<string>(m["CommodityVersion"]));
    }
    if (m.find("FileScriptMetadata") != m.end() && !m["FileScriptMetadata"].empty()) {
      fileScriptMetadata = make_shared<string>(boost::any_cast<string>(m["FileScriptMetadata"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScriptMetadata") != m.end() && !m["ScriptMetadata"].empty()) {
      scriptMetadata = make_shared<string>(boost::any_cast<string>(m["ScriptMetadata"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~UpdateArtifactRequestArtifactProperty() = default;
};
class UpdateArtifactRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<UpdateArtifactRequestArtifactProperty> artifactProperty{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> supportRegionIds{};
  shared_ptr<string> versionName{};

  UpdateArtifactRequest() {}

  explicit UpdateArtifactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactProperty) {
      res["ArtifactProperty"] = artifactProperty ? boost::any(artifactProperty->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArtifactProperty"].type()) {
        UpdateArtifactRequestArtifactProperty model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArtifactProperty"]));
        artifactProperty = make_shared<UpdateArtifactRequestArtifactProperty>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportRegionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~UpdateArtifactRequest() = default;
};
class UpdateArtifactShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactPropertyShrink{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> supportRegionIds{};
  shared_ptr<string> versionName{};

  UpdateArtifactShrinkRequest() {}

  explicit UpdateArtifactShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactPropertyShrink) {
      res["ArtifactProperty"] = boost::any(*artifactPropertyShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      artifactPropertyShrink = make_shared<string>(boost::any_cast<string>(m["ArtifactProperty"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportRegionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~UpdateArtifactShrinkRequest() = default;
};
class UpdateArtifactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactProperty{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> artifactVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> supportRegionIds{};
  shared_ptr<string> versionName{};

  UpdateArtifactResponseBody() {}

  explicit UpdateArtifactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactProperty) {
      res["ArtifactProperty"] = boost::any(*artifactProperty);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      artifactProperty = make_shared<string>(boost::any_cast<string>(m["ArtifactProperty"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      supportRegionIds = make_shared<string>(boost::any_cast<string>(m["SupportRegionIds"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~UpdateArtifactResponseBody() = default;
};
class UpdateArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateArtifactResponseBody> body{};

  UpdateArtifactResponse() {}

  explicit UpdateArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateArtifactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateArtifactResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateArtifactResponse() = default;
};
class UpdateServiceRequestServiceInfo : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};

  UpdateServiceRequestServiceInfo() {}

  explicit UpdateServiceRequestServiceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
  }


  virtual ~UpdateServiceRequestServiceInfo() = default;
};
class UpdateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmMetadata{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<long> duration{};
  shared_ptr<bool> isSupportOperated{};
  shared_ptr<string> licenseMetadata{};
  shared_ptr<string> operationMetadata{};
  shared_ptr<string> policyNames{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<UpdateServiceRequestServiceInfo>> serviceInfo{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> tenantType{};
  shared_ptr<long> trialDuration{};
  shared_ptr<string> upgradeMetadata{};
  shared_ptr<string> versionName{};

  UpdateServiceRequest() {}

  explicit UpdateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmMetadata) {
      res["AlarmMetadata"] = boost::any(*alarmMetadata);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (isSupportOperated) {
      res["IsSupportOperated"] = boost::any(*isSupportOperated);
    }
    if (licenseMetadata) {
      res["LicenseMetadata"] = boost::any(*licenseMetadata);
    }
    if (operationMetadata) {
      res["OperationMetadata"] = boost::any(*operationMetadata);
    }
    if (policyNames) {
      res["PolicyNames"] = boost::any(*policyNames);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfo"] = boost::any(temp1);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (tenantType) {
      res["TenantType"] = boost::any(*tenantType);
    }
    if (trialDuration) {
      res["TrialDuration"] = boost::any(*trialDuration);
    }
    if (upgradeMetadata) {
      res["UpgradeMetadata"] = boost::any(*upgradeMetadata);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmMetadata") != m.end() && !m["AlarmMetadata"].empty()) {
      alarmMetadata = make_shared<string>(boost::any_cast<string>(m["AlarmMetadata"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("IsSupportOperated") != m.end() && !m["IsSupportOperated"].empty()) {
      isSupportOperated = make_shared<bool>(boost::any_cast<bool>(m["IsSupportOperated"]));
    }
    if (m.find("LicenseMetadata") != m.end() && !m["LicenseMetadata"].empty()) {
      licenseMetadata = make_shared<string>(boost::any_cast<string>(m["LicenseMetadata"]));
    }
    if (m.find("OperationMetadata") != m.end() && !m["OperationMetadata"].empty()) {
      operationMetadata = make_shared<string>(boost::any_cast<string>(m["OperationMetadata"]));
    }
    if (m.find("PolicyNames") != m.end() && !m["PolicyNames"].empty()) {
      policyNames = make_shared<string>(boost::any_cast<string>(m["PolicyNames"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfo") != m.end() && !m["ServiceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfo"].type()) {
        vector<UpdateServiceRequestServiceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceRequestServiceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfo = make_shared<vector<UpdateServiceRequestServiceInfo>>(expect1);
      }
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("TenantType") != m.end() && !m["TenantType"].empty()) {
      tenantType = make_shared<string>(boost::any_cast<string>(m["TenantType"]));
    }
    if (m.find("TrialDuration") != m.end() && !m["TrialDuration"].empty()) {
      trialDuration = make_shared<long>(boost::any_cast<long>(m["TrialDuration"]));
    }
    if (m.find("UpgradeMetadata") != m.end() && !m["UpgradeMetadata"].empty()) {
      upgradeMetadata = make_shared<string>(boost::any_cast<string>(m["UpgradeMetadata"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~UpdateServiceRequest() = default;
};
class UpdateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateServiceResponseBody() {}

  explicit UpdateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateServiceResponseBody() = default;
};
class UpdateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceResponseBody> body{};

  UpdateServiceResponse() {}

  explicit UpdateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceResponse() = default;
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
  CreateArtifactResponse createArtifactWithOptions(shared_ptr<CreateArtifactRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateArtifactResponse createArtifact(shared_ptr<CreateArtifactRequest> request);
  CreateServiceResponse createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceResponse createService(shared_ptr<CreateServiceRequest> request);
  DeleteArtifactResponse deleteArtifactWithOptions(shared_ptr<DeleteArtifactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteArtifactResponse deleteArtifact(shared_ptr<DeleteArtifactRequest> request);
  DeleteServiceResponse deleteServiceWithOptions(shared_ptr<DeleteServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceResponse deleteService(shared_ptr<DeleteServiceRequest> request);
  GetArtifactResponse getArtifactWithOptions(shared_ptr<GetArtifactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetArtifactResponse getArtifact(shared_ptr<GetArtifactRequest> request);
  GetArtifactRepositoryCredentialsResponse getArtifactRepositoryCredentialsWithOptions(shared_ptr<GetArtifactRepositoryCredentialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetArtifactRepositoryCredentialsResponse getArtifactRepositoryCredentials(shared_ptr<GetArtifactRepositoryCredentialsRequest> request);
  GetServiceResponse getServiceWithOptions(shared_ptr<GetServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceResponse getService(shared_ptr<GetServiceRequest> request);
  GetServiceEstimateCostResponse getServiceEstimateCostWithOptions(shared_ptr<GetServiceEstimateCostRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceEstimateCostResponse getServiceEstimateCost(shared_ptr<GetServiceEstimateCostRequest> request);
  GetServiceInstanceResponse getServiceInstanceWithOptions(shared_ptr<GetServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceInstanceResponse getServiceInstance(shared_ptr<GetServiceInstanceRequest> request);
  GetUploadCredentialsResponse getUploadCredentialsWithOptions(shared_ptr<GetUploadCredentialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUploadCredentialsResponse getUploadCredentials(shared_ptr<GetUploadCredentialsRequest> request);
  ListArtifactVersionsResponse listArtifactVersionsWithOptions(shared_ptr<ListArtifactVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListArtifactVersionsResponse listArtifactVersions(shared_ptr<ListArtifactVersionsRequest> request);
  ListArtifactsResponse listArtifactsWithOptions(shared_ptr<ListArtifactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListArtifactsResponse listArtifacts(shared_ptr<ListArtifactsRequest> request);
  ListServiceInstancesResponse listServiceInstancesWithOptions(shared_ptr<ListServiceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceInstancesResponse listServiceInstances(shared_ptr<ListServiceInstancesRequest> request);
  ListServiceUsagesResponse listServiceUsagesWithOptions(shared_ptr<ListServiceUsagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceUsagesResponse listServiceUsages(shared_ptr<ListServiceUsagesRequest> request);
  ListServicesResponse listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServicesResponse listServices(shared_ptr<ListServicesRequest> request);
  ReleaseArtifactResponse releaseArtifactWithOptions(shared_ptr<ReleaseArtifactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseArtifactResponse releaseArtifact(shared_ptr<ReleaseArtifactRequest> request);
  UpdateArtifactResponse updateArtifactWithOptions(shared_ptr<UpdateArtifactRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateArtifactResponse updateArtifact(shared_ptr<UpdateArtifactRequest> request);
  UpdateServiceResponse updateServiceWithOptions(shared_ptr<UpdateServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceResponse updateService(shared_ptr<UpdateServiceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ComputeNestSupplier20210521

#endif
